//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1407e6ebc(short **param_1)

{
    short sVar1;
    longlong lVar2;
    short *psVar3;
    int iVar4;

    lVar2 = FUN_1407e6ca0(*param_1);
    *(uint *)(param_1 + 3) = (uint)(lVar2 == 3);
    if ((lVar2 == 3) == 0) {
        psVar3 = *param_1;
        iVar4 = 0;
        if (psVar3 == (short *)0x0) {
            iVar4 = 0;
        }
        else {
            while( true ) {
                sVar1 = *psVar3;
                psVar3 = psVar3 + 1;
                if ((0x19 < (ushort)(sVar1 - 0x41U)) && (0x19 < (ushort)(sVar1 - 0x61U))) break;
                iVar4 = iVar4 + 1;
            }
        }
    }
    else {
        iVar4 = 2;
    }
    *(int *)((longlong)param_1 + 0x14) = iVar4;
    FUN_1407e85c8(&LAB_1407e72d0,3);
    if ((*(byte *)(param_1 + 2) & 4) == 0) {
        *(undefined4 *)(param_1 + 2) = 0;
    }
    return;
}



UINT FUN_1407e73b0(short *param_1,longlong param_2)

{
    int iVar1;
    UINT UVar2;
    UINT local_res8 [2];

    if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
        (iVar1 = FUN_1407e6bb8(param_1,&DAT_1409600f0), iVar1 == 0)) {
        iVar1 = FUN_1407e8688(param_2 + 600,0x20001004,local_res8,2);
        if (iVar1 != 0) {
            if (local_res8[0] != 0) {
                return local_res8[0];
            }
            UVar2 = GetACP();
            return UVar2;
        }
    }
    else {
        iVar1 = FUN_1407e6bb8(param_1,&DAT_1409600f8);
        if (iVar1 != 0) {
            UVar2 = FUN_1407df510(param_1);
            return UVar2;
        }
        iVar1 = FUN_1407e8688(param_2 + 600,0x2000000b,local_res8,2);
        if (iVar1 != 0) {
            return local_res8[0];
        }
    }
    return 0;
}



void FUN_1407e7464(undefined8 param_1)

{
    int iVar1;
    undefined auStack72 [32];
    undefined local_28 [24];
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    iVar1 = FUN_1407e8688(param_1,0x59,local_28);
    if (iVar1 != 0) {
        FUN_1407e6cdc(local_28,param_1,9);
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
    return;
}



bool FUN_1407e74cc(longlong param_1,int param_2,longlong *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar3 = 0;
    iVar2 = 1;
    iVar1 = 1;
    if (-1 < param_2) {
        do {
            if (iVar1 == 0) {
                return iVar1 == 0;
            }
            iVar1 = (iVar3 + param_2) / 2;
            iVar2 = FUN_1407f0c28(*param_3);
            if (iVar2 == 0) {
                *param_3 = param_1 + 8 + (longlong)iVar1 * 0x10;
            }
            else if (iVar2 < 0) {
                param_2 = iVar1 + -1;
            }
            else {
                iVar3 = iVar1 + 1;
            }
            iVar1 = iVar2;
        } while (iVar3 <= param_2);
    }
    return iVar2 == 0;
}



void FUN_1407e7568(wchar_t *param_1,uint *param_2,longlong param_3)

{
    wchar_t **ppwVar1;
    int *piVar2;
    _setloc_struct *p_Var3;
    wchar_t *pwVar4;
    undefined2 *puVar5;
    code *pcVar6;
    int iVar7;
    uint uVar8;
    BOOL BVar9;
    _ptiddata p_Var10;
    longlong lVar11;
    longlong lVar12;
    undefined auStack296 [32];
    undefined8 local_108;
    undefined local_f8 [176];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    p_Var10 = _getptd();
    p_Var3 = &p_Var10->_setloc_data;
    pwVar4 = (p_Var10->_setloc_data)._cacheLocaleName;
    ppwVar1 = &(p_Var10->_setloc_data).pchCountry;
    (p_Var10->_setloc_data).iLocState = 0;
    *pwVar4 = L'\0';
    *ppwVar1 = param_1 + 0x40;
    p_Var3->pchLanguage = param_1;
    if (param_1[0x40] != L'\0') {
        FUN_1407e74cc(&PTR_u_america_14095fd90,0x16,ppwVar1);
    }
    if (*p_Var3->pchLanguage == L'\0') {
        piVar2 = &(p_Var10->_setloc_data).iLocState;
        *piVar2 = *piVar2 | 0x104;
        iVar7 = FUN_1407e8750(local_f8,0x55);
        if (1 < iVar7) {
            lVar11 = FUN_1407e6ca0(local_f8);
            iVar7 = FUN_1407e6d08(pwVar4,0x55,local_f8,lVar11 + 1);
            if (iVar7 != 0) {
                local_108 = 0;
                FUN_1407dc390(0,0,0,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
            }
        }
        LAB_1407e7636:
        if ((p_Var10->_setloc_data).iLocState == 0) goto LAB_1407e77a8;
    }
    else {
        if (**ppwVar1 == L'\0') {
            FUN_1407e6ebc(p_Var3);
        }
        else {
            FUN_1407e6e0c();
        }
        if ((p_Var10->_setloc_data).iLocState == 0) {
            iVar7 = FUN_1407e74cc(&PTR_u_american_14095f150,0x40,p_Var3);
            if (iVar7 != 0) {
                if (**ppwVar1 == L'\0') {
                    FUN_1407e6ebc(p_Var3);
                }
                else {
                    FUN_1407e6e0c();
                }
            }
            goto LAB_1407e7636;
        }
    }
    uVar8 = FUN_1407e73b0(param_1 + 0x80,p_Var3);
    if (((uVar8 != 0) && (1 < uVar8 - 65000)) && (BVar9 = IsValidCodePage(uVar8 & 0xffff), BVar9 != 0)
            ) {
        if (param_2 != (uint *)0x0) {
            *param_2 = uVar8;
        }
        if (param_3 != 0) {
            puVar5 = (undefined2 *)(param_3 + 0x120);
            *puVar5 = 0;
            lVar11 = FUN_1407e6ca0(pwVar4);
            iVar7 = FUN_1407e6d08(puVar5,0x55,pwVar4,lVar11 + 1);
            if (iVar7 != 0) {
                local_108 = 0;
                FUN_1407dc390(0,0,0,0);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
            }
            iVar7 = FUN_1407e8688(puVar5,0x1001,param_3,0x40);
            if (iVar7 != 0) {
                lVar11 = param_3 + 0x80;
                iVar7 = FUN_1407e8688(puVar5,0x1002,lVar11,0x40);
                if ((iVar7 != 0) &&
                    (((lVar12 = FUN_1407dd988(lVar11,0x5f), lVar12 == 0 &&
                                                            (lVar12 = FUN_1407dd988(lVar11,0x2e), lVar12 == 0)) ||
                      (iVar7 = FUN_1407e8688(puVar5,7,lVar11), iVar7 != 0)))) {
                    FUN_1407f0af0(uVar8,param_3 + 0x100,0x10);
                }
            }
        }
    }
    LAB_1407e77a8:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack296);
    return;
}



void FUN_1407e78e0(uint *param_1)

{
    wchar_t wVar1;
    _ptiddata p_Var2;
    longlong lVar3;
    wchar_t *pwVar4;
    int iVar5;

    p_Var2 = _getptd();
    lVar3 = FUN_1407e6ca0((p_Var2->_setloc_data).pchLanguage);
    (p_Var2->_setloc_data).bAbbrevLanguage = (uint)(lVar3 == 3);
    lVar3 = FUN_1407e6ca0();
    iVar5 = 2;
    (p_Var2->_setloc_data).bAbbrevCountry = (uint)(lVar3 == 3);
    param_1[1] = 0;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
        pwVar4 = (p_Var2->_setloc_data).pchLanguage;
        iVar5 = 0;
        while( true ) {
            wVar1 = *pwVar4;
            pwVar4 = pwVar4 + 1;
            if ((0x19 < (ushort)(wVar1 + L'﾿')) && (0x19 < (ushort)(wVar1 + L'ﾟ'))) break;
            iVar5 = iVar5 + 1;
        }
    }
    (p_Var2->_setloc_data).iPrimaryLen = iVar5;
    EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1407e7a28,1);
    if ((((*param_1 & 0x100) == 0) || ((*param_1 & 0x200) == 0)) || ((*(byte *)param_1 & 7) == 0)) {
        *param_1 = 0;
    }
    return;
}



void FUN_1407e7994(undefined4 *param_1)

{
    wchar_t wVar1;
    _ptiddata p_Var2;
    longlong lVar3;
    wchar_t *pwVar4;
    int iVar5;

    p_Var2 = _getptd();
    lVar3 = FUN_1407e6ca0((p_Var2->_setloc_data).pchLanguage);
    iVar5 = 2;
    (p_Var2->_setloc_data).bAbbrevLanguage = (uint)(lVar3 == 3);
    if ((lVar3 == 3) == 0) {
        pwVar4 = (p_Var2->_setloc_data).pchLanguage;
        iVar5 = 0;
        while( true ) {
            wVar1 = *pwVar4;
            pwVar4 = pwVar4 + 1;
            if ((0x19 < (ushort)(wVar1 + L'﾿')) && (0x19 < (ushort)(wVar1 + L'ﾟ'))) break;
            iVar5 = iVar5 + 1;
        }
    }
    (p_Var2->_setloc_data).iPrimaryLen = iVar5;
    EnumSystemLocalesW(FUN_1407e7c58,1);
    if ((*(byte *)param_1 & 4) == 0) {
        *param_1 = 0;
    }
    return;
}



void FUN_1407e7c58(undefined8 param_1)

{
    uint *puVar1;
    LCID Locale;
    int iVar2;
    _ptiddata p_Var3;
    _ptiddata p_Var4;
    undefined4 uVar5;
    undefined auStack296 [32];
    WCHAR local_108 [120];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    p_Var3 = _getptd();
    p_Var4 = _getptd();
    puVar1 = *(uint **)&p_Var4->_cxxReThrow;
    Locale = FUN_1407e7d54(param_1);
    iVar2 = GetLocaleInfoW(Locale,(-(uint)((p_Var3->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                  + 0x1001,local_108,0xf0);
    if (iVar2 == 0) {
        *puVar1 = 0;
        goto LAB_1407e7d2f;
    }
    iVar2 = FUN_1407f0c28((p_Var3->_setloc_data).pchLanguage,local_108);
    if (iVar2 == 0) {
        if ((p_Var3->_setloc_data).bAbbrevLanguage == 0) {
            uVar5 = 1;
            goto LAB_1407e7d0e;
        }
    }
    else {
        if ((((p_Var3->_setloc_data).bAbbrevLanguage != 0) || ((p_Var3->_setloc_data).iPrimaryLen == 0))
            || (iVar2 = FUN_1407f0c28((p_Var3->_setloc_data).pchLanguage,local_108), iVar2 != 0))
            goto LAB_1407e7d2f;
        uVar5 = 0;
        LAB_1407e7d0e:
        iVar2 = FUN_1407e7e54(Locale,uVar5,puVar1);
        if (iVar2 == 0) goto LAB_1407e7d2f;
    }
    *puVar1 = *puVar1 | 4;
    puVar1[1] = Locale;
    puVar1[2] = Locale;
    LAB_1407e7d2f:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack296);
    return;
}



int FUN_1407e7d54(ushort *param_1)

{
    short sVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;

    uVar3 = *param_1;
    iVar4 = 0;
    do {
        if (uVar3 == 0) {
            return iVar4;
        }
        param_1 = param_1 + 1;
        if ((ushort)(uVar3 - 0x61) < 6) {
            sVar1 = -0x27;
            LAB_1407e7d84:
            uVar2 = uVar3 + sVar1;
        }
        else {
            uVar2 = uVar3;
            if ((ushort)(uVar3 - 0x41) < 6) {
                sVar1 = -7;
                goto LAB_1407e7d84;
            }
        }
        uVar3 = *param_1;
        iVar4 = iVar4 * 0x10 + -0x30 + (uint)uVar2;
    } while( true );
}



UINT FUN_1407e7da4(short *param_1,longlong param_2)

{
    int iVar1;
    UINT UVar2;
    UINT local_res8 [2];

    if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
        (iVar1 = FUN_1407e6bb8(param_1,&DAT_1409600f0), iVar1 == 0)) {
        iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
        if (iVar1 != 0) {
            if (local_res8[0] != 0) {
                return local_res8[0];
            }
            UVar2 = GetACP();
            return UVar2;
        }
    }
    else {
        iVar1 = FUN_1407e6bb8(param_1,&DAT_1409600f8);
        if (iVar1 != 0) {
            UVar2 = FUN_1407df510(param_1);
            return UVar2;
        }
        iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
        if (iVar1 != 0) {
            return local_res8[0];
        }
    }
    return 0;
}



undefined8 FUN_1407e7e54(uint param_1,int param_2)

{
    wchar_t wVar1;
    int iVar2;
    _ptiddata p_Var3;
    undefined8 uVar4;
    wchar_t *pwVar5;
    int iVar6;
    uint local_res8 [2];

    p_Var3 = _getptd();
    iVar2 = GetLocaleInfoW(param_1 & 0x3ff | 0x400,0x20000001,(LPWSTR)local_res8,2);
    iVar6 = 0;
    if (iVar2 == 0) {
        LAB_1407e7e9c:
        uVar4 = 0;
    }
    else {
        if ((param_1 != local_res8[0]) && (param_2 != 0)) {
            pwVar5 = (p_Var3->_setloc_data).pchLanguage;
            while( true ) {
                wVar1 = *pwVar5;
                pwVar5 = pwVar5 + 1;
                if ((0x19 < (ushort)(wVar1 + L'﾿')) && (0x19 < (ushort)(wVar1 + L'ﾟ'))) break;
                iVar6 = iVar6 + 1;
            }
            iVar2 = FUN_1407e6ca0((p_Var3->_setloc_data).pchLanguage);
            if (iVar6 == iVar2) goto LAB_1407e7e9c;
        }
        uVar4 = 1;
    }
    return uVar4;
}



void FUN_1407e7efc(wchar_t *param_1,uint *param_2,LPWSTR param_3)

{
    wchar_t **ppwVar1;
    wchar_t *pwVar2;
    uint uVar3;
    BOOL BVar4;
    int iVar5;
    _ptiddata p_Var6;
    _ptiddata p_Var7;
    longlong lVar8;
    undefined auStack120 [32];
    uint local_58;
    LCID local_54;
    LCID local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    p_Var6 = _getptd();
    FUN_1407e4830(&local_58,0,0xc);
    p_Var7 = _getptd();
    *(uint **)&p_Var7->_cxxReThrow = &local_58;
    if (param_1 == (wchar_t *)0x0) {
        local_58 = local_58 | 0x104;
        LAB_1407e807a:
        local_54 = GetUserDefaultLCID();
        local_50 = local_54;
        LAB_1407e8086:
        if (local_58 == 0) goto LAB_1407e8177;
    }
    else {
        pwVar2 = param_1 + 0x40;
        ppwVar1 = &(p_Var6->_setloc_data).pchCountry;
        (p_Var6->_setloc_data).pchLanguage = param_1;
        *ppwVar1 = pwVar2;
        if ((pwVar2 != (wchar_t *)0x0) && (*pwVar2 != L'\0')) {
            FUN_1407e74cc(&PTR_u_america_14095fd90,0x16,ppwVar1);
        }
        local_58 = 0;
        pwVar2 = (p_Var6->_setloc_data).pchLanguage;
        if ((pwVar2 == (wchar_t *)0x0) || (*pwVar2 == L'\0')) {
            if ((*ppwVar1 == (wchar_t *)0x0) || (**ppwVar1 == L'\0')) {
                local_58 = 0x104;
                goto LAB_1407e807a;
            }
            p_Var7 = _getptd();
            lVar8 = FUN_1407e6ca0();
            (p_Var7->_setloc_data).bAbbrevCountry = (uint)(lVar8 == 3);
            EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1407e77f4,1);
            if ((local_58 & 4) == 0) {
                local_58 = 0;
            }
            goto LAB_1407e8086;
        }
        if ((*ppwVar1 == (wchar_t *)0x0) || (**ppwVar1 == L'\0')) {
            FUN_1407e7994();
        }
        else {
            FUN_1407e78e0();
        }
        if (local_58 == 0) {
            iVar5 = FUN_1407e74cc(&PTR_u_american_14095f150,0x40,&p_Var6->_setloc_data);
            if (iVar5 != 0) {
                if ((*ppwVar1 == (wchar_t *)0x0) || (**ppwVar1 == L'\0')) {
                    FUN_1407e7994();
                }
                else {
                    FUN_1407e78e0();
                }
            }
            goto LAB_1407e8086;
        }
    }
    uVar3 = FUN_1407e7da4(-(ulonglong)(param_1 != (wchar_t *)0x0) & (ulonglong)(param_1 + 0x80),
                          &local_58);
    if ((((uVar3 != 0) && (1 < uVar3 - 65000)) &&
         (BVar4 = IsValidCodePage(uVar3 & 0xffff), BVar4 != 0)) &&
        (BVar4 = IsValidLocale(local_54,1), BVar4 != 0)) {
        if (param_2 != (uint *)0x0) {
            *param_2 = uVar3;
        }
        FUN_1407e84d8(local_54,(p_Var6->_setloc_data)._cacheLocaleName,0x55);
        if (param_3 != (LPWSTR)0x0) {
            FUN_1407e84d8(local_54,param_3 + 0x90,0x55);
            iVar5 = GetLocaleInfoW(local_54,0x1001,param_3,0x40);
            if ((iVar5 != 0) && (iVar5 = GetLocaleInfoW(local_50,0x1002,param_3 + 0x40,0x40), iVar5 != 0))
            {
                FUN_1407f0af0(uVar3,param_3 + 0x80,0x10,10);
            }
        }
    }
    LAB_1407e8177:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack120);
    return;
}



void FUN_1407e8194(longlong *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,
                   UINT param_6,int param_7)

{
    ulonglong _Size;
    int iVar1;
    longlong lVar2;
    undefined4 *lpSrcStr;
    undefined *puVar3;
    undefined *puVar4;
    ulonglong uVar5;
    undefined auStackY104 [32];
    ulonglong local_38 [2];

    puVar4 = auStackY104;
    puVar3 = auStackY104;
    local_38[0] = DAT_140c0f7b0 ^ (ulonglong)local_38;
    lpSrcStr = (undefined4 *)0x0;
    if (param_6 == 0) {
        param_6 = *(UINT *)(*param_1 + 4);
    }
    iVar1 = MultiByteToWideChar(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0)
            ;
    uVar5 = (ulonglong)iVar1;
    if (iVar1 == 0) goto LAB_1407e82d3;
    puVar4 = auStackY104;
    if ((0 < iVar1) && (puVar4 = auStackY104, uVar5 < 0x7ffffffffffffff1)) {
        _Size = uVar5 * 2 + 0x10;
        if (_Size < 0x401) {
            lVar2 = FUN_1407f0f60();
            lVar2 = -lVar2;
            puVar4 = auStackY104 + lVar2;
            puVar3 = auStackY104 + lVar2;
            lpSrcStr = (undefined4 *)((longlong)local_38 + lVar2);
            if (lpSrcStr == (undefined4 *)0x0) goto LAB_1407e82d3;
            *lpSrcStr = 0xcccc;
        }
        else {
            lpSrcStr = (undefined4 *)malloc(_Size);
            puVar4 = auStackY104;
            if (lpSrcStr == (undefined4 *)0x0) goto LAB_1407e8275;
            *lpSrcStr = 0xdddd;
        }
        lpSrcStr = lpSrcStr + 4;
        puVar4 = puVar3;
    }
    LAB_1407e8275:
    if (lpSrcStr != (undefined4 *)0x0) {
        *(undefined8 *)(puVar4 + -8) = 0x1407e828a;
        FUN_1407e4830(lpSrcStr,0,uVar5 * 2);
        *(int *)(puVar4 + 0x28) = iVar1;
        *(undefined4 **)(puVar4 + 0x20) = lpSrcStr;
        *(undefined8 *)(puVar4 + -8) = 0x1407e82a7;
        iVar1 = MultiByteToWideChar(param_6,1,param_3,param_4,*(LPWSTR *)(puVar4 + 0x20),
                                    *(int *)(puVar4 + 0x28));
        if (iVar1 != 0) {
            *(undefined8 *)(puVar4 + -8) = 0x1407e82be;
            GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar1,param_5);
        }
        if (lpSrcStr[-4] == 0xdddd) {
            *(undefined8 *)(puVar4 + -8) = 0x1407e82d1;
            free(lpSrcStr + -4);
        }
    }
    LAB_1407e82d3:
    uVar5 = local_38[0] ^ (ulonglong)local_38;
    *(undefined8 *)(puVar4 + -8) = 0x1407e82df;
    FUN_1407db4f0(uVar5);
    return;
}



void FUN_1407e82fc(localeinfo_struct *param_1,undefined4 param_2,undefined8 param_3,
                   undefined4 param_4,undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
    _LocaleUpdate local_28 [16];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28,param_1);
    FUN_1407e8194(local_28,param_2,param_3,param_4,param_5,param_6,param_7);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return;
}



int FUN_1407e8378(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0xe3;
    do {
        iVar1 = (iVar3 + iVar2) / 2;
        if (param_1 == *(int *)(&DAT_140961a60 + (longlong)iVar1 * 0x10)) {
            return iVar1;
        }
        if (param_1 - *(int *)(&DAT_140961a60 + (longlong)iVar1 * 0x10) < 0) {
            iVar3 = iVar1 + -1;
        }
        else {
            iVar2 = iVar1 + 1;
        }
    } while (iVar2 <= iVar3);
    return -1;
}



undefined4 FUN_1407e83bc(undefined8 param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar4 = 0;
    iVar3 = 0xe3;
    do {
        iVar1 = (iVar3 + iVar4) / 2;
        iVar2 = FUN_1407e8858(param_1,(&PTR_DAT_140960c20)[(longlong)iVar1 * 2],0x55);
        if (iVar2 == 0) {
            return *(undefined4 *)(&UNK_140960c28 + (longlong)iVar1 * 0x10);
        }
        if (iVar2 < 0) {
            iVar3 = iVar1 + -1;
        }
        else {
            iVar4 = iVar1 + 1;
        }
    } while (iVar4 <= iVar3);
    return 0xffffffff;
}



void FUN_1407e8448(undefined8 param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,
                   int param_6)

{
    LCID Locale;

    if ((code *)(DAT_140dc52e0 ^ DAT_140c0f7b0) == (code *)0x0) {
        Locale = FUN_1407e8588();
        CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
    }
    else {
        (*(code *)(DAT_140dc52e0 ^ DAT_140c0f7b0))();
    }
    return;
}



ulonglong FUN_1407e84d8(uint param_1,longlong param_2,int param_3)

{
    undefined *puVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    ulonglong uVar5;

    if (((((param_1 & 0xfffff3ff) == 0) && (param_1 != 0xc00)) || ((param_2 == 0 && (0 < param_3))))
        || ((param_3 < 0 || (iVar3 = FUN_1407e8378(), iVar3 < 0)))) {
        return 0;
    }
    puVar1 = (&PTR_DAT_140961a68)[(longlong)iVar3 * 2];
    iVar3 = FUN_1407e6cbc(puVar1,0x55);
    if (0 < param_3) {
        if (param_3 <= iVar3) {
            return 0;
        }
        iVar4 = FUN_1407e6bf4(param_2,(longlong)param_3,puVar1);
        if (iVar4 != 0) {
            FUN_1407dc390(0,0,0,0,0);
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return uVar5;
        }
    }
    return (ulonglong)(iVar3 + 1);
}



undefined4 FUN_1407e8588(longlong param_1)

{
    int iVar1;

    if (((param_1 != 0) && (iVar1 = FUN_1407e83bc(), -1 < iVar1)) &&
        ((ulonglong)(longlong)iVar1 < 0xe4)) {
        return *(undefined4 *)(&DAT_140961a60 + (longlong)iVar1 * 0x10);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407e85c8(undefined8 param_1)

{
    if ((code *)(DAT_140dc52e8 ^ DAT_140c0f7b0) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407e85e3. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)(DAT_140dc52e8 ^ DAT_140c0f7b0))();
        return;
    }
    _DAT_140c60820 = param_1;
    EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1407e85bc,1);
    _DAT_140c60820 = 0;
    return;
}



void FUN_1407e860c(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                   LPWSTR param_5,int param_6)

{
    LCID Locale;

    if ((code *)(DAT_140dc52f0 ^ DAT_140c0f7b0) == (code *)0x0) {
        Locale = FUN_1407e8588();
        GetDateFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
    }
    else {
        (*(code *)(DAT_140dc52f0 ^ DAT_140c0f7b0))();
    }
    return;
}



void FUN_1407e8688(undefined8 param_1,LCTYPE param_2,LPWSTR param_3,int param_4)

{
    LCID Locale;

    if ((code *)(DAT_140dc52f8 ^ DAT_140c0f7b0) == (code *)0x0) {
        Locale = FUN_1407e8588();
        GetLocaleInfoW(Locale,param_2,param_3,param_4);
    }
    else {
        (*(code *)(DAT_140dc52f8 ^ DAT_140c0f7b0))();
    }
    return;
}



void FUN_1407e86d8(undefined8 param_1,DWORD param_2,SYSTEMTIME *param_3,LPCWSTR param_4,
                   LPWSTR param_5,int param_6)

{
    LCID Locale;

    if ((code *)(DAT_140dc5300 ^ DAT_140c0f7b0) == (code *)0x0) {
        Locale = FUN_1407e8588();
        GetTimeFormatW(Locale,param_2,param_3,param_4,param_5,param_6);
    }
    else {
        (*(code *)(DAT_140dc5300 ^ DAT_140c0f7b0))();
    }
    return;
}



void FUN_1407e8750(undefined8 param_1,undefined4 param_2)

{
    LCID LVar1;

    if ((code *)(DAT_140dc5308 ^ DAT_140c0f7b0) == (code *)0x0) {
        LVar1 = GetUserDefaultLCID();
        FUN_1407e84d8(LVar1,param_1,param_2);
    }
    else {
        (*(code *)(DAT_140dc5308 ^ DAT_140c0f7b0))();
    }
    return;
}



void FUN_1407e8794(void)

{
    LCID Locale;

    if ((code *)(DAT_140dc5310 ^ DAT_140c0f7b0) != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x0001407e87ac. Too many branches
        // WARNING: Treating indirect jump as call
        (*(code *)(DAT_140dc5310 ^ DAT_140c0f7b0))();
        return;
    }
    Locale = FUN_1407e8588();
    // WARNING: Could not recover jumptable at 0x0001407e87bf. Too many branches
    // WARNING: Treating indirect jump as call
    IsValidLocale(Locale,1);
    return;
}



void FUN_1407e87c8(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,
                   int param_6)

{
    LCID Locale;

    if ((code *)(DAT_140dc5318 ^ DAT_140c0f7b0) == (code *)0x0) {
        Locale = FUN_1407e8588();
        LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
    }
    else {
        (*(code *)(DAT_140dc5318 ^ DAT_140c0f7b0))();
    }
    return;
}



int FUN_1407e8858(longlong param_1,ushort *param_2,longlong param_3)

{
    ushort uVar1;
    ushort uVar2;
    int iVar3;

    iVar3 = 0;
    if (param_3 != 0) {
        param_1 = param_1 - (longlong)param_2;
        do {
            uVar1 = *(ushort *)(param_1 + (longlong)param_2);
            if ((ushort)(uVar1 - 0x41) < 0x1a) {
                uVar1 = uVar1 + 0x20;
            }
            uVar2 = *param_2;
            if ((ushort)(uVar2 - 0x41) < 0x1a) {
                uVar2 = uVar2 + 0x20;
            }
            param_2 = param_2 + 1;
            param_3 = param_3 + -1;
        } while (((param_3 != 0) && (uVar1 != 0)) && (uVar1 == uVar2));
        iVar3 = (uint)uVar1 - (uint)uVar2;
    }
    return iVar3;
}



// Library Function - Single Match
//  _msize
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

size_t _msize(void *_Memory)

{
    int *piVar1;
    SIZE_T SVar2;

    if (_Memory == (void *)0x0) {
        piVar1 = _errno();
        *piVar1 = 0x16;
        FUN_1407dc370();
        return 0xffffffffffffffff;
    }
    // WARNING: Could not recover jumptable at 0x0001407e88e2. Too many branches
    // WARNING: Treating indirect jump as call
    SVar2 = HeapSize(DAT_140c60400,0,_Memory);
    return SVar2;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1407e88ec(undefined4 param_1,FILE *param_2)

{
    uint uVar1;
    uint _FileHandle;
    int iVar2;
    int iVar3;
    int *piVar4;
    longlong lVar5;
    undefined *puVar6;
    ulonglong uVar7;
    undefined4 local_res8 [2];

    local_res8[0] = param_1;
    _FileHandle = _fileno(param_2);
    uVar1 = param_2->_flag;
    uVar7 = (ulonglong)(int)_FileHandle;
    if ((uVar1 & 0x82) == 0) {
        piVar4 = _errno();
        *piVar4 = 9;
    }
    else if ((uVar1 & 0x40) == 0) {
        iVar3 = 0;
        if ((uVar1 & 1) != 0) {
            param_2->_cnt = 0;
            if ((uVar1 & 0x10) == 0) {
                param_2->_flag = uVar1 | 0x20;
                return 0xffffffff;
            }
            param_2->_ptr = param_2->_base;
            param_2->_flag = uVar1 & 0xfffffffe;
        }
        uVar1 = param_2->_flag;
        param_2->_cnt = 0;
        param_2->_flag = uVar1 & 0xffffffef | 2;
        if (((uVar1 & 0x10c) == 0) &&
            (((lVar5 = FUN_1407ddfa0(), param_2 != (FILE *)(lVar5 + 0x30) &&
                                        (lVar5 = FUN_1407ddfa0(), param_2 != (FILE *)(lVar5 + 0x60))) ||
              (iVar2 = _isatty(_FileHandle), iVar2 == 0)))) {
            _getbuf(param_2);
        }
        if ((param_2->_flag & 0x108U) == 0) {
            iVar2 = 1;
            iVar3 = FUN_1407eef4c(uVar7 & 0xffffffff,local_res8,1);
        }
        else {
            iVar2 = *(int *)&param_2->_ptr - *(int *)&param_2->_base;
            param_2->_ptr = param_2->_base + 1;
            param_2->_cnt = param_2->_bufsiz + -1;
            if (iVar2 < 1) {
                if (_FileHandle + 2 < 2) {
                    puVar6 = &DAT_140c0ffb0;
                }
                else {
                    puVar6 = (undefined *)
                            ((ulonglong)(_FileHandle & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)uVar7 >> 5])
                            ;
                }
                if (((puVar6[8] & 0x20) != 0) &&
                    (lVar5 = FUN_1407f0fb0(uVar7 & 0xffffffff,0,2), lVar5 == -1)) goto LAB_1407e8924;
            }
            else {
                iVar3 = FUN_1407eef4c(uVar7 & 0xffffffff,param_2->_base,iVar2);
            }
            *param_2->_base = (byte)local_res8[0];
        }
        if (iVar3 == iVar2) {
            return (ulonglong)(byte)local_res8[0];
        }
    }
    else {
        piVar4 = _errno();
        *piVar4 = 0x22;
    }
    LAB_1407e8924:
    param_2->_flag = param_2->_flag | 0x20;
    return 0xffffffff;
}



// WARNING: Removing unreachable block (ram,0x0001407e8ed9)
// WARNING: Removing unreachable block (ram,0x0001407e8eb7)
// WARNING: Removing unreachable block (ram,0x0001407e9025)
// WARNING: Removing unreachable block (ram,0x0001407e902e)
// WARNING: Removing unreachable block (ram,0x0001407e9036)

void FUN_1407e8a78(longlong param_1,ushort *param_2,localeinfo_struct *param_3,int **param_4)

{
    ushort uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    char cVar9;
    int iVar10;
    int *piVar11;
    int *piVar12;
    code *pcVar13;
    ulonglong uVar14;
    uint uVar15;
    ulonglong uVar16;
    int *piVar17;
    longlong lVar18;
    ushort *puVar19;
    ulonglong uVar20;
    uint uVar21;
    ulonglong uVar22;
    uint uVar23;
    ushort uVar24;
    int iVar25;
    undefined auStack1304 [32];
    int *local_4f8;
    undefined4 local_4f0;
    localeinfo_struct *local_4e8;
    uint local_4d8;
    uint local_4d4;
    uint local_4d0;
    int local_4cc;
    int **local_4c8;
    int local_4c0;
    undefined2 local_4bc [2];
    undefined2 local_4b8 [2];
    undefined local_4b4;
    undefined local_4b3;
    uint local_4b0;
    int local_4ac;
    longlong local_4a8;
    undefined4 local_4a0;
    ushort *local_498;
    undefined4 local_490;
    localeinfo_struct local_488;
    longlong local_478;
    char local_470;
    int *local_468;
    int *local_460;
    int *local_458 [2];
    undefined2 local_448;
    int local_249 [128];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack1304;
    local_4a0 = 0;
    uVar23 = 0;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    local_4c0 = 0;
    uVar15 = 0;
    local_4d4 = 0;
    local_4d0 = 0;
    local_4ac = 0;
    local_4cc = 0;
    local_4c8 = param_4;
    local_4a8 = param_1;
    local_498 = param_2;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_488,param_3);
    local_460 = _errno();
    uVar14 = 0;
    if ((param_1 == 0) || (local_498 == (ushort *)0x0)) {
        LAB_1407e8af8:
        piVar11 = _errno();
        *piVar11 = 0x16;
        FUN_1407dc370();
        if (local_470 != '\0') {
            *(uint *)(local_478 + 200) = *(uint *)(local_478 + 200) & 0xfffffffd;
        }
    }
    else {
        uVar24 = *local_498;
        local_4d8 = 0;
        local_468 = (int *)0x0;
        uVar16 = uVar14;
        uVar22 = uVar14;
        piVar17 = (int *)PTR_s__null__140c10480;
        puVar19 = local_498;
        piVar11 = local_458[0];
        while (PTR_s__null__140c10480 = (undefined *)piVar17, uVar24 != 0) {
            uVar20 = 0;
            local_498 = puVar19 + 1;
            if ((int)uVar16 < 0) break;
            uVar21 = 0;
            if ((ushort)(uVar24 - 0x20) < 0x59) {
                uVar21 = (int)*(char *)((longlong)&PTR_thunk_FUN_1407e9648_140963400 + (ulonglong)uVar24) &
                         0xf;
            }
            local_4b0 = (int)(char)(&DAT_140963420)[(longlong)(int)uVar14 + (longlong)(int)uVar21 * 8] >>
            4;
            uVar14 = (ulonglong)local_4b0;
            if (local_4b0 == 0) {
                LAB_1407e93de:
                local_4cc = 1;
                FUN_1407e9518(uVar24,local_4a8,&local_4d8);
                uVar16 = (ulonglong)local_4d8;
                LAB_1407e92dc:
                uVar14 = (ulonglong)local_4b0;
                puVar19 = local_498;
            }
            else if (local_4b0 == 1) {
                uVar15 = 0xffffffff;
                local_490 = 0;
                local_4ac = 0;
                local_4c0 = 0;
                local_4d0 = 0;
                uVar23 = 0;
                bVar8 = false;
                bVar7 = false;
                bVar6 = false;
                bVar5 = false;
                bVar4 = false;
                bVar3 = false;
                bVar2 = false;
                local_4d4 = 0xffffffff;
                local_4cc = 0;
                puVar19 = local_498;
            }
            else if (local_4b0 == 2) {
                if (uVar24 == 0x20) {
                    bVar8 = true;
                    puVar19 = local_498;
                }
                else if (uVar24 == 0x23) {
                    bVar7 = true;
                    puVar19 = local_498;
                }
                else if (uVar24 == 0x2b) {
                    bVar4 = true;
                    puVar19 = local_498;
                }
                else if (uVar24 == 0x2d) {
                    uVar23 = uVar23 | 4;
                    puVar19 = local_498;
                }
                else {
                    puVar19 = local_498;
                    if (uVar24 == 0x30) {
                        uVar23 = uVar23 | 8;
                    }
                }
            }
            else if (local_4b0 == 3) {
                if (uVar24 == 0x2a) {
                    local_4c0 = *(int *)param_4;
                    param_4 = param_4 + 1;
                    puVar19 = local_498;
                    local_4c8 = param_4;
                    if (local_4c0 < 0) {
                        uVar23 = uVar23 | 4;
                        local_4c0 = -local_4c0;
                    }
                }
                else {
                    local_4c0 = (uint)uVar24 + local_4c0 * 10 + -0x30;
                    puVar19 = local_498;
                }
            }
            else if (local_4b0 == 4) {
                local_4d4 = 0;
                puVar19 = local_498;
                uVar15 = 0;
            }
            else if (local_4b0 == 5) {
                if (uVar24 == 0x2a) {
                    uVar15 = *(uint *)param_4;
                    param_4 = param_4 + 1;
                    puVar19 = local_498;
                    local_4d4 = uVar15;
                    local_4c8 = param_4;
                    if ((int)uVar15 < 0) {
                        uVar15 = 0xffffffff;
                        local_4d4 = uVar15;
                    }
                }
                else {
                    uVar15 = (uint)uVar24 + (uVar15 * 5 + -0x18) * 2;
                    puVar19 = local_498;
                    local_4d4 = uVar15;
                }
            }
            else if (local_4b0 == 6) {
                if (uVar24 == 0x49) {
                    uVar1 = *local_498;
                    bVar6 = true;
                    if ((uVar1 == 0x36) && (puVar19[2] == 0x34)) {
                        bVar6 = true;
                        puVar19 = puVar19 + 3;
                    }
                    else if ((uVar1 == 0x33) && (puVar19[2] == 0x32)) {
                        bVar6 = false;
                        puVar19 = puVar19 + 3;
                    }
                    else if ((0x20 < (ushort)(uVar1 - 0x58)) ||
                             (puVar19 = local_498,
                                     (0x120821001U >> ((ulonglong)(ushort)(uVar1 - 0x58) & 0x3f) & 1) == 0)) {
                        local_4b0 = 0;
                        goto LAB_1407e93de;
                    }
                }
                else if (uVar24 == 0x68) {
                    uVar23 = uVar23 | 0x20;
                    puVar19 = local_498;
                }
                else if (uVar24 == 0x6c) {
                    if (*local_498 == 0x6c) {
                        bVar3 = true;
                        puVar19 = puVar19 + 2;
                    }
                    else {
                        uVar23 = uVar23 | 0x10;
                        puVar19 = local_498;
                    }
                }
                else {
                    puVar19 = local_498;
                    if (uVar24 == 0x77) {
                        uVar23 = uVar23 | 0x800;
                    }
                }
            }
            else {
                puVar19 = local_498;
                if (local_4b0 == 7) {
                    if (uVar24 < 0x65) {
                        if (uVar24 == 100) {
                            LAB_1407e8f1e:
                            bVar5 = true;
                            LAB_1407e8f22:
                            iVar25 = 10;
                            LAB_1407e8f32:
                            if ((bVar6) || (bVar3)) {
                                piVar11 = *param_4;
                            }
                            else if ((uVar23 & 0x20) == 0) {
                                if (bVar5) {
                                    piVar11 = (int *)(longlong)*(int *)param_4;
                                }
                                else {
                                    piVar11 = (int *)(ulonglong)*(uint *)param_4;
                                }
                            }
                            else if (bVar5) {
                                piVar11 = (int *)(longlong)*(short *)param_4;
                            }
                            else {
                                piVar11 = (int *)(ulonglong)*(ushort *)param_4;
                            }
                            param_4 = param_4 + 1;
                            if ((bVar5) && ((longlong)piVar11 < 0)) {
                                piVar11 = (int *)-(longlong)piVar11;
                                bVar2 = true;
                            }
                            if ((!bVar6) && (!bVar3)) {
                                piVar11 = (int *)((ulonglong)piVar11 & 0xffffffff);
                            }
                            if ((int)uVar15 < 0) {
                                uVar15 = 1;
                            }
                            else {
                                uVar23 = uVar23 & 0xfffffff7;
                                if (0x200 < (int)uVar15) {
                                    uVar15 = 0x200;
                                }
                            }
                            piVar17 = local_249;
                            local_4d0 = -(uint)(piVar11 != (int *)0x0) & local_4d0;
                            while ((local_4d4 = uVar15 - 1, 0 < (int)uVar15 || (piVar11 != (int *)0x0))) {
                                uVar15 = (int)((ulonglong)piVar11 % (ulonglong)(longlong)iVar25) + 0x30;
                                cVar9 = (char)uVar15;
                                if (0x39 < uVar15) {
                                    cVar9 = cVar9 + (char)local_4a0;
                                }
                                *(char *)piVar17 = cVar9;
                                piVar17 = (int *)((longlong)piVar17 + -1);
                                piVar11 = (int *)((ulonglong)piVar11 / (ulonglong)(longlong)iVar25);
                                uVar15 = local_4d4;
                            }
                            uVar16 = (ulonglong)local_4d8;
                            piVar11 = (int *)((longlong)piVar17 + 1);
                            uVar22 = (ulonglong)(uint)(((int)register0x00000020 + -0x249) - (int)piVar17);
                            local_4c8 = param_4;
                        }
                        else if (uVar24 == 0x41) {
                            LAB_1407e8dd8:
                            local_490 = 1;
                            uVar24 = uVar24 + 0x20;
                            LAB_1407e8de8:
                            piVar11 = (int *)&local_448;
                            if ((int)uVar15 < 0) {
                                uVar21 = 6;
                                LAB_1407e8e01:
                                piVar11 = (int *)&local_448;
                                iVar25 = 0x200;
                                local_4d4 = uVar21;
                            }
                            else if (uVar15 == 0) {
                                iVar25 = 0x200;
                                if (uVar24 == 0x67) {
                                    uVar21 = 1;
                                    goto LAB_1407e8e01;
                                }
                            }
                            else {
                                uVar21 = 0xa3;
                                if (0x200 < (int)uVar15) {
                                    uVar15 = 0x200;
                                }
                                iVar25 = 0x200;
                                local_4d4 = uVar15;
                                if (0xa3 < (int)uVar15) {
                                    iVar25 = uVar15 + 0x15d;
                                    piVar11 = (int *)FUN_1407e2c30((longlong)iVar25);
                                    local_468 = piVar11;
                                    if (piVar11 == (int *)0x0) goto LAB_1407e8e01;
                                }
                            }
                            uVar15 = local_4d4;
                            local_458[0] = *param_4;
                            param_4 = param_4 + 1;
                            local_4c8 = param_4;
                            pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa50);
                            local_4e8 = &local_488;
                            local_4f0 = local_490;
                            local_4f8 = (int *)((ulonglong)local_4f8 & 0xffffffff00000000 | (ulonglong)uVar15);
                            (*pcVar13)(local_458,piVar11,(longlong)iVar25,(int)(char)uVar24);
                            if ((bVar7) && (uVar15 == 0)) {
                                pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa68);
                                (*pcVar13)(piVar11);
                            }
                            if ((uVar24 == 0x67) && (!bVar7)) {
                                pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa60);
                                (*pcVar13)(piVar11);
                            }
                            if (*(byte *)piVar11 == 0x2d) {
                                bVar2 = true;
                                piVar11 = (int *)((longlong)piVar11 + 1);
                            }
                            bVar5 = true;
                            uVar15 = FUN_1407e1990(piVar11);
                            uVar16 = (ulonglong)local_4d8;
                            uVar22 = (ulonglong)uVar15;
                        }
                        else if (uVar24 == 0x43) {
                            if ((uVar23 & 0x830) == 0) {
                                uVar23 = uVar23 | 0x20;
                            }
                            LAB_1407e8d6e:
                            local_4b8[0] = *(undefined2 *)param_4;
                            param_4 = param_4 + 1;
                            local_4cc = 1;
                            local_4c8 = param_4;
                            if ((uVar23 & 0x20) == 0) {
                                local_448 = local_4b8[0];
                            }
                            else {
                                local_4b4 = (undefined)local_4b8[0];
                                local_4b3 = 0;
                                iVar25 = FUN_1407f1418(&local_448,&local_4b4,
                                                       (longlong)(local_488.locinfo)->mb_cur_max,&local_488);
                                if (iVar25 < 0) {
                                    local_4ac = 1;
                                }
                            }
                            uVar22 = 1;
                            piVar11 = (int *)&local_448;
                        }
                        else {
                            if ((uVar24 - 0x45 & 0xfffffffd) == 0) goto LAB_1407e8dd8;
                            if (uVar24 == 0x53) {
                                if ((uVar23 & 0x830) == 0) {
                                    uVar23 = uVar23 | 0x20;
                                }
                                LAB_1407e8cc8:
                                piVar12 = *param_4;
                                if (local_4d4 == 0xffffffff) {
                                    uVar15 = 0x7fffffff;
                                }
                                param_4 = param_4 + 1;
                                piVar11 = piVar12;
                                local_4c8 = param_4;
                                if ((uVar23 & 0x20) == 0) {
                                    local_4cc = 1;
                                    if (piVar12 == (int *)0x0) {
                                        piVar12 = (int *)PTR_u__null__140c10488;
                                        piVar11 = (int *)PTR_u__null__140c10488;
                                    }
                                    for (; (uVar15 != 0 && (uVar15 = uVar15 - 1, *(short *)piVar12 != 0));
                                           piVar12 = (int *)((longlong)piVar12 + 2)) {
                                    }
                                    uVar22 = (longlong)piVar12 - (longlong)piVar11 >> 1 & 0xffffffff;
                                }
                                else {
                                    if (piVar12 == (int *)0x0) {
                                        piVar11 = piVar17;
                                    }
                                    piVar17 = piVar11;
                                    uVar22 = uVar20;
                                    if (0 < (int)uVar15) {
                                        do {
                                            uVar22 = uVar20;
                                            if (*(byte *)piVar17 == 0) break;
                                            iVar25 = _isleadbyte_l((uint)*(byte *)piVar17,&local_488);
                                            if (iVar25 != 0) {
                                                piVar17 = (int *)((longlong)piVar17 + 1);
                                            }
                                            uVar21 = (int)uVar20 + 1;
                                            uVar20 = (ulonglong)uVar21;
                                            piVar17 = (int *)((longlong)piVar17 + 1);
                                            uVar22 = uVar20;
                                        } while ((int)uVar21 < (int)uVar15);
                                    }
                                    uVar16 = (ulonglong)local_4d8;
                                }
                            }
                            else {
                                if (uVar24 == 0x58) {
                                    LAB_1407e8e9d:
                                    local_4a0 = 7;
                                    LAB_1407e8ea2:
                                    iVar25 = 0x10;
                                    goto LAB_1407e8f32;
                                }
                                if (uVar24 == 0x5a) {
                                    piVar12 = *param_4;
                                    param_4 = param_4 + 1;
                                    local_4c8 = param_4;
                                    if ((piVar12 == (int *)0x0) ||
                                        (piVar11 = *(int **)(piVar12 + 2), piVar11 == (int *)0x0)) {
                                        uVar22 = FUN_1407e1990(piVar17);
                                        piVar11 = piVar17;
                                    }
                                    else if (uVar23 >> 0xb == 0) {
                                        uVar22 = (ulonglong)(uint)(int)*(short *)piVar12;
                                        local_4cc = 0;
                                    }
                                    else {
                                        local_4cc = 1;
                                        uVar22 = (ulonglong)(uint)((int)*(short *)piVar12 / 2);
                                    }
                                }
                                else {
                                    if (uVar24 == 0x61) goto LAB_1407e8de8;
                                    if (uVar24 == 99) goto LAB_1407e8d6e;
                                }
                            }
                        }
                        LAB_1407e8d2f:
                        lVar18 = local_4a8;
                        if (local_4ac == 0) {
                            if (bVar5) {
                                if (bVar2) {
                                    local_4bc[0] = 0x2d;
                                }
                                else {
                                    if (!bVar4) {
                                        if (bVar8) {
                                            local_4bc[0] = 0x20;
                                            local_4d0 = 1;
                                        }
                                        goto LAB_1407e918a;
                                    }
                                    local_4bc[0] = 0x2b;
                                }
                                local_4d0 = 1;
                            }
                            LAB_1407e918a:
                            uVar15 = local_4d0;
                            iVar25 = (local_4c0 - (int)uVar22) - local_4d0;
                            if ((uVar23 & 0xc) == 0) {
                                FUN_1407e9550(0x20,iVar25,local_4a8,&local_4d8);
                            }
                            local_4f8 = local_460;
                            FUN_1407e95a4(local_4bc,uVar15,lVar18,&local_4d8);
                            lVar18 = local_4a8;
                            if (((uVar23 & 8) != 0) && ((uVar23 & 4) == 0)) {
                                FUN_1407e9550(0x30,iVar25,local_4a8,&local_4d8);
                            }
                            if ((local_4cc == 0) && (0 < (int)uVar22)) {
                                uVar14 = uVar22 & 0xffffffff;
                                piVar17 = piVar11;
                                do {
                                    uVar15 = (int)uVar14 - 1;
                                    uVar14 = (ulonglong)uVar15;
                                    iVar10 = FUN_1407f1418(local_4b8,piVar17,(longlong)(local_488.locinfo)->mb_cur_max
                                            ,&local_488);
                                    if (iVar10 < 1) {
                                        uVar16 = 0xffffffff;
                                        local_4d8 = 0xffffffff;
                                        lVar18 = local_4a8;
                                        param_4 = local_4c8;
                                        goto LAB_1407e9290;
                                    }
                                    FUN_1407e9518(local_4b8[0],local_4a8,&local_4d8);
                                    piVar17 = (int *)((longlong)piVar17 + (longlong)iVar10);
                                    lVar18 = local_4a8;
                                    param_4 = local_4c8;
                                } while (0 < (int)uVar15);
                            }
                            else {
                                local_4f8 = local_460;
                                FUN_1407e95a4(piVar11,uVar22 & 0xffffffff,lVar18,&local_4d8);
                            }
                            uVar16 = (ulonglong)local_4d8;
                            LAB_1407e9290:
                            if ((-1 < (int)uVar16) && ((uVar23 & 4) != 0)) {
                                FUN_1407e9550(0x20,iVar25,lVar18,&local_4d8);
                                uVar16 = (ulonglong)local_4d8;
                            }
                        }
                    }
                    else {
                        if (uVar24 < 0x65) goto LAB_1407e8d2f;
                        if (uVar24 < 0x68) goto LAB_1407e8de8;
                        if (uVar24 == 0x69) goto LAB_1407e8f1e;
                        if (uVar24 != 0x6e) {
                            if (uVar24 != 0x6f) {
                                if (uVar24 == 0x70) {
                                    uVar15 = 0x10;
                                    bVar6 = true;
                                    goto LAB_1407e8e9d;
                                }
                                if (uVar24 == 0x73) goto LAB_1407e8cc8;
                                if (uVar24 != 0x75) {
                                    if (uVar24 == 0x78) {
                                        local_4a0 = 0x27;
                                        goto LAB_1407e8ea2;
                                    }
                                    goto LAB_1407e8d2f;
                                }
                                goto LAB_1407e8f22;
                            }
                            iVar25 = 8;
                            goto LAB_1407e8f32;
                        }
                        piVar17 = *param_4;
                        param_4 = param_4 + 1;
                        local_4c8 = param_4;
                        iVar25 = FUN_1407f117c();
                        if (iVar25 == 0) goto LAB_1407e8af8;
                        if ((uVar23 & 0x20) == 0) {
                            *piVar17 = (int)uVar16;
                        }
                        else {
                            *(short *)piVar17 = (short)uVar16;
                        }
                        local_4ac = 1;
                    }
                    uVar15 = local_4d4;
                    if (local_468 != (int *)0x0) {
                        free(local_468);
                        local_468 = (int *)0x0;
                        uVar15 = local_4d4;
                    }
                    goto LAB_1407e92dc;
                }
            }
            piVar17 = (int *)PTR_s__null__140c10480;
            uVar24 = *puVar19;
        }
        if (local_470 != '\0') {
            *(uint *)(local_478 + 200) = *(uint *)(local_478 + 200) & 0xfffffffd;
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack1304);
    return;
}



void FUN_1407e9518(undefined8 param_1,longlong param_2,int *param_3)

{
    short sVar1;

    if (((*(byte *)(param_2 + 0x18) & 0x40) == 0) || (*(longlong *)(param_2 + 0x10) != 0)) {
        sVar1 = FUN_1407f1240();
        if (sVar1 == -1) {
            *param_3 = -1;
        }
        else {
            *param_3 = *param_3 + 1;
        }
    }
    else {
        *param_3 = *param_3 + 1;
    }
    return;
}



void FUN_1407e9550(undefined2 param_1,int param_2,undefined8 param_3,int *param_4)

{
    if (0 < param_2) {
        do {
            param_2 = param_2 + -1;
            FUN_1407e9518(param_1,param_3,param_4);
            if (*param_4 == -1) {
                return;
            }
        } while (0 < param_2);
    }
    return;
}



void FUN_1407e95a4(undefined2 *param_1,int param_2,longlong param_3,int *param_4,int *param_5)

{
    int iVar1;

    iVar1 = *param_5;
    if (((*(byte *)(param_3 + 0x18) & 0x40) == 0) || (*(longlong *)(param_3 + 0x10) != 0)) {
        *param_5 = 0;
        if (0 < param_2) {
            do {
                param_2 = param_2 + -1;
                FUN_1407e9518(*param_1,param_3,param_4);
                param_1 = param_1 + 1;
                if (*param_4 == -1) {
                    if (*param_5 != 0x2a) break;
                    FUN_1407e9518(0x3f,param_3,param_4);
                }
            } while (0 < param_2);
            if (*param_5 != 0) {
                return;
            }
        }
        *param_5 = iVar1;
    }
    else {
        *param_4 = *param_4 + param_2;
    }
    return;
}



void thunk_FUN_1407e9648(void)

{
    PTR_LAB_140c0fa20 = &LAB_1407f1574;
    PTR_LAB_140c0fa28 = &LAB_1407f2028;
    PTR_LAB_140c0fa30 = &DAT_1407f20c8;
    PTR_LAB_140c0fa38 = &LAB_1407f2110;
    PTR_LAB_140c0fa40 = &LAB_1407f2198;
    PTR_LAB_140c0fa48 = &LAB_1407f1574;
    PTR_LAB_140c0fa50 = FUN_1407f1598;
    PTR_LAB_140c0fa58 = &LAB_1407f20d0;
    PTR_LAB_140c0fa60 = FUN_1407f2030;
    PTR_LAB_140c0fa68 = _forcdecpt_l;
    return;
}



void FUN_1407e9648(void)

{
    PTR_LAB_140c0fa20 = &LAB_1407f1574;
    PTR_LAB_140c0fa28 = &LAB_1407f2028;
    PTR_LAB_140c0fa30 = &DAT_1407f20c8;
    PTR_LAB_140c0fa38 = &LAB_1407f2110;
    PTR_LAB_140c0fa40 = &LAB_1407f2198;
    PTR_LAB_140c0fa48 = &LAB_1407f1574;
    PTR_LAB_140c0fa50 = FUN_1407f1598;
    PTR_LAB_140c0fa58 = &LAB_1407f20d0;
    PTR_LAB_140c0fa60 = FUN_1407f2030;
    PTR_LAB_140c0fa68 = _forcdecpt_l;
    return;
}



// WARNING: Removing unreachable block (ram,0x0001407e9aea)
// WARNING: Removing unreachable block (ram,0x0001407e9ace)
// WARNING: Removing unreachable block (ram,0x0001407e9c23)
// WARNING: Removing unreachable block (ram,0x0001407e9c27)
// WARNING: Removing unreachable block (ram,0x0001407e9c30)

void FUN_1407e96d0(FILE *param_1,byte *param_2,localeinfo_struct *param_3,int **param_4)

{
    byte bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    FILE *pFVar9;
    char cVar10;
    uint uVar11;
    uint uVar12;
    code *pcVar13;
    int iVar14;
    ulonglong uVar15;
    undefined *puVar16;
    int *piVar17;
    char *pcVar18;
    int iVar19;
    byte *pbVar20;
    undefined *puVar21;
    int *piVar22;
    int **ppiVar23;
    uint uVar24;
    byte bVar25;
    undefined auStack792 [32];
    int *local_2f8;
    undefined4 local_2f0;
    localeinfo_struct *local_2e8;
    int local_2d8;
    int local_2d4;
    uint local_2d0;
    undefined local_2cc [4];
    int local_2c8;
    int local_2c4;
    int local_2c0;
    int local_2bc;
    undefined4 local_2b8;
    FILE *local_2b0;
    int **local_2a8;
    undefined4 local_2a0;
    char *local_298;
    int local_290;
    int *local_288;
    byte *local_280;
    int *local_278;
    localeinfo_struct local_270;
    longlong local_260;
    char local_258;
    char local_248 [511];
    char local_49 [9];
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack792;
    local_2b8 = 0;
    uVar24 = 0;
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar2 = false;
    bVar3 = false;
    local_2c4 = 0;
    local_2d0 = 0;
    local_2bc = 0;
    local_2c8 = 0;
    local_2b0 = param_1;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_270,param_3);
    local_288 = _errno();
    if (param_1 != (FILE *)0x0) {
        if ((*(byte *)&param_1->_flag & 0x40) == 0) {
            uVar11 = _fileno(param_1);
            puVar16 = &DAT_140c0ffb0;
            if (uVar11 + 2 < 2) {
                puVar21 = &DAT_140c0ffb0;
            }
            else {
                puVar21 = (undefined *)
                        ((ulonglong)(uVar11 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)(int)uVar11 >> 5])
                ;
            }
            if ((puVar21[0x38] & 0x7f) == 0) {
                if (1 < uVar11 + 2) {
                    puVar16 = (undefined *)
                            ((ulonglong)(uVar11 & 0x1f) * 0x58 +
                             (&DAT_140c60410)[(longlong)(int)uVar11 >> 5]);
                }
                if ((puVar16[0x38] & 0x80) == 0) goto LAB_1407e97ef;
            }
        }
        else {
            LAB_1407e97ef:
            iVar19 = 0;
            if (param_2 != (byte *)0x0) {
                bVar25 = *param_2;
                local_2d8 = 0;
                local_2d4 = 0;
                local_298 = (char *)0x0;
                uVar11 = 0;
                iVar14 = iVar19;
                while ((bVar25 != 0 && (pbVar20 = param_2 + 1, local_280 = pbVar20, -1 < iVar19))) {
                    uVar12 = 0;
                    if ((byte)(bVar25 - 0x20) < 0x59) {
                        uVar12 = (int)*(char *)((longlong)&PTR_thunk_FUN_1407e9648_140963400 +
                                                           (longlong)(char)bVar25) & 0xf;
                    }
                    local_2c0 = (int)(char)(&DAT_140963420)[(longlong)iVar14 + (longlong)(int)uVar12 * 8] >> 4
                            ;
                    uVar12 = uVar11;
                    if (local_2c0 == 0) {
                        LAB_1407e9f5d:
                        uVar15 = 0;
                        local_2c8 = 0;
                        iVar19 = _isleadbyte_l((uint)bVar25,&local_270);
                        if (iVar19 != 0) {
                            FUN_1407ee870(uVar15 & 0xffffffffffffff00 | (ulonglong)bVar25,local_2b0,&local_2d8);
                            bVar25 = *pbVar20;
                            pbVar20 = param_2 + 2;
                            if (bVar25 == 0) goto LAB_1407ea09b;
                        }
                        FUN_1407ee870();
                        uVar12 = uVar11;
                        iVar19 = local_2d8;
                    }
                    else if (local_2c0 == 1) {
                        local_2a0 = 0;
                        local_2bc = 0;
                        local_2c4 = 0;
                        local_2d0 = 0;
                        uVar24 = 0;
                        bVar8 = false;
                        bVar7 = false;
                        bVar6 = false;
                        bVar5 = false;
                        bVar4 = false;
                        bVar2 = false;
                        bVar3 = false;
                        local_2c8 = 0;
                        uVar12 = 0xffffffff;
                    }
                    else if (local_2c0 == 2) {
                        if (bVar25 == 0x20) {
                            bVar8 = true;
                        }
                        else if (bVar25 == 0x23) {
                            bVar7 = true;
                        }
                        else if (bVar25 == 0x2b) {
                            bVar4 = true;
                        }
                        else if (bVar25 == 0x2d) {
                            uVar24 = uVar24 | 4;
                        }
                        else if (bVar25 == 0x30) {
                            uVar24 = uVar24 | 8;
                        }
                    }
                    else if (local_2c0 == 3) {
                        if (bVar25 == 0x2a) {
                            local_2c4 = *(int *)param_4;
                            param_4 = param_4 + 1;
                            if (local_2c4 < 0) {
                                uVar24 = uVar24 | 4;
                                local_2c4 = -local_2c4;
                            }
                        }
                        else {
                            local_2c4 = (int)(char)bVar25 + local_2c4 * 10 + -0x30;
                        }
                    }
                    else {
                        uVar12 = 0;
                        if (local_2c0 != 4) {
                            if (local_2c0 == 5) {
                                if (bVar25 == 0x2a) {
                                    uVar12 = *(uint *)param_4;
                                    param_4 = param_4 + 1;
                                    if ((int)uVar12 < 0) {
                                        uVar12 = 0xffffffff;
                                    }
                                }
                                else {
                                    uVar12 = (int)(char)bVar25 + (uVar11 * 5 + -0x18) * 2;
                                }
                            }
                            else if (local_2c0 == 6) {
                                if (bVar25 == 0x49) {
                                    bVar1 = *pbVar20;
                                    bVar5 = true;
                                    if ((bVar1 == 0x36) && (param_2[2] == 0x34)) {
                                        bVar5 = true;
                                        pbVar20 = param_2 + 3;
                                        uVar12 = uVar11;
                                    }
                                    else if ((bVar1 == 0x33) && (param_2[2] == 0x32)) {
                                        bVar5 = false;
                                        pbVar20 = param_2 + 3;
                                        uVar12 = uVar11;
                                    }
                                    else if ((0x20 < (byte)(bVar1 + 0xa8)) ||
                                             (uVar12 = uVar11,
                                                     (0x120821001U >> ((ulonglong)(byte)(bVar1 + 0xa8) & 0x3f) & 1) == 0)) {
                                        local_2c0 = 0;
                                        goto LAB_1407e9f5d;
                                    }
                                }
                                else if (bVar25 == 0x68) {
                                    uVar24 = uVar24 | 0x20;
                                    uVar12 = uVar11;
                                }
                                else if (bVar25 == 0x6c) {
                                    if (*pbVar20 == 0x6c) {
                                        bVar3 = true;
                                        pbVar20 = param_2 + 2;
                                        uVar12 = uVar11;
                                    }
                                    else {
                                        uVar24 = uVar24 | 0x10;
                                        uVar12 = uVar11;
                                    }
                                }
                                else {
                                    uVar12 = uVar11;
                                    if (bVar25 == 0x77) {
                                        uVar24 = uVar24 | 0x800;
                                    }
                                }
                            }
                            else {
                                uVar12 = uVar11;
                                if (local_2c0 == 7) {
                                    iVar14 = (int)(char)bVar25;
                                    if (iVar14 < 0x65) {
                                        if (iVar14 == 100) {
                                            LAB_1407e9b21:
                                            bVar6 = true;
                                            LAB_1407e9b25:
                                            iVar19 = 10;
                                            LAB_1407e9b2f:
                                            if ((bVar5) || (bVar3)) {
                                                piVar22 = *param_4;
                                            }
                                            else if ((uVar24 & 0x20) == 0) {
                                                if (bVar6) {
                                                    piVar22 = (int *)(longlong)*(int *)param_4;
                                                }
                                                else {
                                                    piVar22 = (int *)(ulonglong)*(uint *)param_4;
                                                }
                                            }
                                            else if (bVar6) {
                                                piVar22 = (int *)(longlong)*(short *)param_4;
                                            }
                                            else {
                                                piVar22 = (int *)(ulonglong)*(ushort *)param_4;
                                            }
                                            local_2a8 = param_4 + 1;
                                            if ((bVar6) && ((longlong)piVar22 < 0)) {
                                                piVar22 = (int *)-(longlong)piVar22;
                                                bVar2 = true;
                                            }
                                            if ((!bVar5) && (!bVar3)) {
                                                piVar22 = (int *)((ulonglong)piVar22 & 0xffffffff);
                                            }
                                            if ((int)uVar11 < 0) {
                                                uVar11 = 1;
                                            }
                                            else {
                                                uVar24 = uVar24 & 0xfffffff7;
                                                if (0x200 < (int)uVar11) {
                                                    uVar11 = 0x200;
                                                }
                                            }
                                            pcVar18 = local_49;
                                            local_2d0 = -(uint)(piVar22 != (int *)0x0) & local_2d0;
                                            uVar12 = uVar11;
                                            while ((uVar11 = uVar12 - 1, 0 < (int)uVar12 || (piVar22 != (int *)0x0))) {
                                                uVar12 = (int)((ulonglong)piVar22 % (ulonglong)(longlong)iVar19) + 0x30;
                                                cVar10 = (char)uVar12;
                                                if (0x39 < uVar12) {
                                                    cVar10 = cVar10 + (char)local_2b8;
                                                }
                                                *pcVar18 = cVar10;
                                                pcVar18 = pcVar18 + -1;
                                                piVar22 = (int *)((ulonglong)piVar22 / (ulonglong)(longlong)iVar19);
                                                uVar12 = uVar11;
                                            }
                                            local_2d4 = ((int)register0x00000020 + -0x49) - (int)pcVar18;
                                            param_4 = local_2a8;
                                        }
                                        else {
                                            if (iVar14 == 0x41) {
                                                LAB_1407e99f5:
                                                local_2a0 = 1;
                                                bVar25 = bVar25 + 0x20;
                                                LAB_1407e9a01:
                                                bVar6 = true;
                                                iVar19 = 0x200;
                                                pcVar18 = local_248;
                                                if ((int)uVar11 < 0) {
                                                    uVar11 = 6;
                                                    iVar14 = 0x200;
                                                }
                                                else {
                                                    iVar14 = iVar19;
                                                    if (uVar11 == 0) {
                                                        if (bVar25 == 0x67) {
                                                            uVar11 = 1;
                                                        }
                                                    }
                                                    else {
                                                        if (0x200 < (int)uVar11) {
                                                            uVar11 = 0x200;
                                                        }
                                                        if (0xa3 < (int)uVar11) {
                                                            iVar14 = uVar11 + 0x15d;
                                                            local_298 = (char *)FUN_1407e2c30((longlong)iVar14);
                                                            pcVar18 = local_298;
                                                            if (local_298 == (char *)0x0) {
                                                                uVar11 = 0xa3;
                                                                pcVar18 = local_248;
                                                                iVar14 = iVar19;
                                                            }
                                                        }
                                                    }
                                                }
                                                local_278 = *param_4;
                                                pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa50);
                                                local_2e8 = &local_270;
                                                local_2f0 = local_2a0;
                                                local_2f8 = (int *)((ulonglong)local_2f8 & 0xffffffff00000000 |
                                                                    (ulonglong)uVar11);
                                                (*pcVar13)(&local_278,pcVar18,(longlong)iVar14,(int)(char)bVar25);
                                                if ((bVar7) && (uVar11 == 0)) {
                                                    pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa68);
                                                    (*pcVar13)(pcVar18);
                                                }
                                                if ((bVar25 == 0x67) && (!bVar7)) {
                                                    pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa60);
                                                    (*pcVar13)(pcVar18);
                                                }
                                                if (*pcVar18 == '-') {
                                                    bVar6 = true;
                                                    bVar2 = true;
                                                }
                                                LAB_1407e9d1d:
                                                local_2d4 = FUN_1407e1990();
                                            }
                                            else {
                                                if (iVar14 == 0x43) {
                                                    if ((uVar24 & 0x830) == 0) {
                                                        uVar24 = uVar24 | 0x800;
                                                    }
                                                    LAB_1407e99a9:
                                                    ppiVar23 = param_4 + 1;
                                                    if ((uVar24 & 0x810) == 0) {
                                                        local_2d4 = 1;
                                                        local_248[0] = *(char *)param_4;
                                                        param_4 = ppiVar23;
                                                    }
                                                    else {
                                                        iVar19 = FUN_1407f2338();
                                                        param_4 = ppiVar23;
                                                        if (iVar19 != 0) {
                                                            local_2bc = 1;
                                                        }
                                                    }
                                                    goto LAB_1407e9d2c;
                                                }
                                                if ((iVar14 - 0x45U & 0xfffffffd) == 0) goto LAB_1407e99f5;
                                                if (iVar14 == 0x53) {
                                                    if ((uVar24 & 0x830) == 0) {
                                                        uVar24 = uVar24 | 0x800;
                                                    }
                                                    LAB_1407e995d:
                                                    piVar22 = *param_4;
                                                    if (uVar11 == 0xffffffff) {
                                                        uVar12 = 0x7fffffff;
                                                    }
                                                    param_4 = param_4 + 1;
                                                    if ((uVar24 & 0x810) == 0) {
                                                        piVar17 = piVar22;
                                                        if (piVar22 == (int *)0x0) {
                                                            piVar22 = (int *)PTR_s__null__140c10480;
                                                            piVar17 = (int *)PTR_s__null__140c10480;
                                                        }
                                                        for (; (uVar12 != 0 && (uVar12 = uVar12 - 1, *(char *)piVar22 != '\0'));
                                                               piVar22 = (int *)((longlong)piVar22 + 1)) {
                                                        }
                                                        local_2d4 = (int)piVar22 - (int)piVar17;
                                                    }
                                                    else {
                                                        local_2c8 = 1;
                                                        piVar17 = piVar22;
                                                        if (piVar22 == (int *)0x0) {
                                                            piVar22 = (int *)PTR_u__null__140c10488;
                                                            piVar17 = (int *)PTR_u__null__140c10488;
                                                        }
                                                        for (; (uVar12 != 0 && (uVar12 = uVar12 - 1, *(short *)piVar22 != 0));
                                                               piVar22 = (int *)((longlong)piVar22 + 2)) {
                                                        }
                                                        local_2d4 = (int)((longlong)piVar22 - (longlong)piVar17 >> 1);
                                                    }
                                                    goto LAB_1407e9d2c;
                                                }
                                                if (iVar14 == 0x58) {
                                                    LAB_1407e9aba:
                                                    local_2b8 = 7;
                                                    LAB_1407e9abf:
                                                    iVar19 = 0x10;
                                                    goto LAB_1407e9b2f;
                                                }
                                                if (iVar14 != 0x5a) {
                                                    if (iVar14 == 0x61) goto LAB_1407e9a01;
                                                    if (iVar14 == 99) goto LAB_1407e99a9;
                                                    goto LAB_1407e9d2c;
                                                }
                                                piVar22 = *param_4;
                                                if ((piVar22 == (int *)0x0) || (*(longlong *)(piVar22 + 2) == 0))
                                                    goto LAB_1407e9d1d;
                                                local_2d4 = (int)*(short *)piVar22;
                                                if (uVar24 >> 0xb == 0) {
                                                    local_2c8 = 0;
                                                }
                                                else {
                                                    local_2c8 = 1;
                                                    local_2d4 = local_2d4 / 2;
                                                }
                                            }
                                            param_4 = param_4 + 1;
                                        }
                                        LAB_1407e9d2c:
                                        pFVar9 = local_2b0;
                                        if (local_2bc == 0) {
                                            if (bVar6) {
                                                if (bVar2) {
                                                    local_2cc[0] = 0x2d;
                                                }
                                                else if (bVar4) {
                                                    local_2cc[0] = 0x2b;
                                                }
                                                else {
                                                    if (!bVar8) goto LAB_1407e9d72;
                                                    local_2cc[0] = 0x20;
                                                }
                                                local_2d0 = 1;
                                            }
                                            LAB_1407e9d72:
                                            uVar12 = local_2d0;
                                            iVar19 = (local_2c4 - local_2d4) - local_2d0;
                                            if ((uVar24 & 0xc) == 0) {
                                                FUN_1407ee8b8(0x20,iVar19,local_2b0,&local_2d8);
                                            }
                                            local_2f8 = local_288;
                                            FUN_1407ea0f0(local_2cc,uVar12,pFVar9,&local_2d8);
                                            if (((uVar24 & 8) != 0) && ((uVar24 & 4) == 0)) {
                                                FUN_1407ee8b8(0x30,iVar19,pFVar9,&local_2d8);
                                            }
                                            if ((local_2c8 == 0) || (iVar19 = local_2d4, local_2d4 < 1)) {
                                                local_2f8 = local_288;
                                                FUN_1407ea0f0();
                                            }
                                            else {
                                                do {
                                                    iVar19 = iVar19 + -1;
                                                    iVar14 = FUN_1407f2338();
                                                    if ((iVar14 != 0) || (local_290 == 0)) {
                                                        local_2d8 = -1;
                                                        break;
                                                    }
                                                    local_2f8 = local_288;
                                                    FUN_1407ea0f0();
                                                } while (iVar19 != 0);
                                            }
                                            if ((-1 < local_2d8) && ((uVar24 & 4) != 0)) {
                                                FUN_1407ee8b8();
                                            }
                                        }
                                    }
                                    else {
                                        if (iVar14 < 0x65) goto LAB_1407e9d2c;
                                        if (iVar14 < 0x68) goto LAB_1407e9a01;
                                        if (iVar14 == 0x69) goto LAB_1407e9b21;
                                        if (iVar14 != 0x6e) {
                                            if (iVar14 != 0x6f) {
                                                if (iVar14 == 0x70) {
                                                    uVar11 = 0x10;
                                                    bVar5 = true;
                                                    goto LAB_1407e9aba;
                                                }
                                                if (iVar14 == 0x73) goto LAB_1407e995d;
                                                if (iVar14 != 0x75) {
                                                    if (iVar14 == 0x78) {
                                                        local_2b8 = 0x27;
                                                        goto LAB_1407e9abf;
                                                    }
                                                    goto LAB_1407e9d2c;
                                                }
                                                goto LAB_1407e9b25;
                                            }
                                            iVar19 = 8;
                                            goto LAB_1407e9b2f;
                                        }
                                        piVar22 = *param_4;
                                        param_4 = param_4 + 1;
                                        iVar14 = FUN_1407f117c();
                                        if (iVar14 == 0) goto LAB_1407ea09b;
                                        if ((uVar24 & 0x20) == 0) {
                                            *piVar22 = iVar19;
                                        }
                                        else {
                                            *(short *)piVar22 = (short)iVar19;
                                        }
                                        local_2bc = 1;
                                    }
                                    pbVar20 = local_280;
                                    uVar12 = uVar11;
                                    iVar19 = local_2d8;
                                    if (local_298 != (char *)0x0) {
                                        free(local_298);
                                        local_298 = (char *)0x0;
                                        pbVar20 = local_280;
                                        iVar19 = local_2d8;
                                    }
                                }
                            }
                        }
                    }
                    bVar25 = *pbVar20;
                    param_2 = pbVar20;
                    uVar11 = uVar12;
                    iVar14 = local_2c0;
                }
                goto LAB_1407ea0b5;
            }
        }
    }
    LAB_1407ea09b:
    piVar22 = _errno();
    *piVar22 = 0x16;
    FUN_1407dc370();
    LAB_1407ea0b5:
    if (local_258 != '\0') {
        *(uint *)(local_260 + 200) = *(uint *)(local_260 + 200) & 0xfffffffd;
    }
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack792);
    return;
}



void FUN_1407ea0f0(undefined *param_1,int param_2,longlong param_3,int *param_4,int *param_5)

{
    int iVar1;

    iVar1 = *param_5;
    if (((*(byte *)(param_3 + 0x18) & 0x40) == 0) || (*(longlong *)(param_3 + 0x10) != 0)) {
        *param_5 = 0;
        if (0 < param_2) {
            do {
                param_2 = param_2 + -1;
                FUN_1407ee870(*param_1,param_3,param_4);
                param_1 = param_1 + 1;
                if (*param_4 == -1) {
                    if (*param_5 != 0x2a) break;
                    FUN_1407ee870(0x3f,param_3,param_4);
                }
            } while (0 < param_2);
            if (*param_5 != 0) {
                return;
            }
        }
        *param_5 = iVar1;
    }
    else {
        *param_4 = *param_4 + param_2;
    }
    return;
}



undefined ** FUN_1407ea184(void)

{
    return &PTR_s_No_error_140963480;
}



undefined * FUN_1407ea18c(void)

{
    return &DAT_140c10490;
}



int FUN_1407ea194(undefined *param_1,longlong param_2,char *param_3)

{
    char cVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;

    if ((param_1 != (undefined *)0x0) && (param_2 != 0)) {
        if (param_3 != (char *)0x0) {
            lVar4 = (longlong)param_1 - (longlong)param_3;
            do {
                cVar1 = *param_3;
                param_3[lVar4] = cVar1;
                param_3 = param_3 + 1;
                if (cVar1 == '\0') break;
                param_2 = param_2 + -1;
            } while (param_2 != 0);
            if (param_2 != 0) {
                return 0;
            }
            *param_1 = 0;
            piVar2 = _errno();
            iVar3 = 0x22;
            goto LAB_1407ea1b6;
        }
        *param_1 = 0;
    }
    piVar2 = _errno();
    iVar3 = 0x16;
    LAB_1407ea1b6:
    *piVar2 = iVar3;
    FUN_1407dc370();
    return iVar3;
}



int FUN_1407ea1f8(char *param_1,longlong param_2,char *param_3,longlong param_4)

{
    char cVar1;
    int *piVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    char *pcVar6;

    if (param_4 == 0) {
        if (param_1 == (char *)0x0) {
            if (param_2 == 0) {
                return 0;
            }
        }
        else {
            LAB_1407ea218:
            if (param_2 != 0) {
                if (param_4 == 0) {
                    *param_1 = '\0';
                    return 0;
                }
                if (param_3 != (char *)0x0) {
                    lVar4 = param_2;
                    if (param_4 == -1) {
                        lVar5 = (longlong)param_1 - (longlong)param_3;
                        do {
                            cVar1 = *param_3;
                            param_3[lVar5] = cVar1;
                            param_3 = param_3 + 1;
                            if (cVar1 == '\0') break;
                            lVar4 = lVar4 + -1;
                        } while (lVar4 != 0);
                    }
                    else {
                        pcVar6 = param_1;
                        do {
                            cVar1 = pcVar6[(longlong)param_3 - (longlong)param_1];
                            *pcVar6 = cVar1;
                            pcVar6 = pcVar6 + 1;
                            if ((cVar1 == '\0') || (lVar4 = lVar4 + -1, lVar4 == 0)) break;
                            param_4 = param_4 + -1;
                        } while (param_4 != 0);
                        if (param_4 == 0) {
                            *pcVar6 = '\0';
                        }
                    }
                    if (lVar4 != 0) {
                        return 0;
                    }
                    if (param_4 == -1) {
                        param_1[param_2 + -1] = '\0';
                        return 0x50;
                    }
                    *param_1 = '\0';
                    piVar2 = _errno();
                    iVar3 = 0x22;
                    goto LAB_1407ea237;
                }
                *param_1 = '\0';
            }
        }
    }
    else if (param_1 != (char *)0x0) goto LAB_1407ea218;
    piVar2 = _errno();
    iVar3 = 0x16;
    LAB_1407ea237:
    *piVar2 = iVar3;
    FUN_1407dc370();
    return iVar3;
}



// Library Function - Single Match
//  _fcloseall
//
// Library: Visual Studio 2012 Release

int _fcloseall(void)

{
    FILE *_File;
    int iVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;

    iVar4 = 0;
    _lock(1);
    for (iVar2 = 3; iVar2 < DAT_140dc5330; iVar2 = iVar2 + 1) {
        lVar3 = (longlong)iVar2;
        _File = *(FILE **)(DAT_140dc5328 + lVar3 * 8);
        if (_File != (FILE *)0x0) {
            if ((*(byte *)&_File->_flag & 0x83) != 0) {
                iVar1 = fclose(_File);
                if (iVar1 != -1) {
                    iVar4 = iVar4 + 1;
                }
            }
            if (0x13 < iVar2) {
                DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_140dc5328 + lVar3 * 8) + 0x30))
                        ;
                free(*(void **)(DAT_140dc5328 + lVar3 * 8));
                *(undefined8 *)(DAT_140dc5328 + lVar3 * 8) = 0;
            }
        }
    }
    FUN_1407e2528(1);
    return iVar4;
}



// Library Function - Single Match
//  _fileno
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

int _fileno(FILE *_File)

{
    int iVar1;
    int *piVar2;

    if (_File == (FILE *)0x0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        iVar1 = -1;
    }
    else {
        iVar1 = _File->_file;
    }
    return iVar1;
}



void FUN_1407ea384(uint *param_1,undefined8 param_2,undefined8 param_3)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    undefined auStack136 [32];
    undefined4 local_68;
    undefined4 local_60;
    undefined4 local_58;
    undefined8 local_50;
    undefined4 local_48;
    undefined4 uStack68;
    int local_40 [2];
    undefined local_38 [16];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    uVar3 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = param_3;
    uVar1 = FUN_1407f2eac(local_38,local_40,param_2,0);
    if ((uVar1 & 4) == 0) {
        iVar2 = FUN_1407f234c(local_38,&local_48);
        if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
            uVar3 = 0x80;
        }
        if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
            uVar3 = uVar3 | 0x100;
        }
    }
    else {
        local_48 = 0;
        uStack68 = 0;
        uVar3 = 0x200;
    }
    *param_1 = uVar3;
    param_1[1] = local_40[0] - (int)param_2;
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack68,local_48);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack136);
    return;
}



ushort FUN_1407ea448(int param_1,ushort param_2,localeinfo_struct *param_3)

{
    int iVar1;
    undefined8 uVar2;
    ushort local_res8 [4];
    undefined local_res20;
    undefined local_res21;
    undefined local_res22;
    localeinfo_struct local_38;
    longlong local_28;
    char local_20;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_3);
    if (param_1 + 1U < 0x101) {
        local_res8[0] = (local_38.locinfo)->pctype[param_1];
    }
    else {
        iVar1 = _isleadbyte_l(param_1 >> 8 & 0xff,&local_38);
        if (iVar1 == 0) {
            local_res21 = 0;
            uVar2 = 1;
            local_res20 = (char)param_1;
        }
        else {
            local_res22 = 0;
            uVar2 = 2;
            local_res20 = (char)((uint)param_1 >> 8);
            local_res21 = (char)param_1;
        }
        iVar1 = FUN_1407e82fc(&local_38,1,&local_res20,uVar2,local_res8,(local_38.locinfo)->lc_codepage,
                              1);
        if (iVar1 == 0) {
            if (local_20 != '\0') {
                *(uint *)(local_28 + 200) = *(uint *)(local_28 + 200) & 0xfffffffd;
            }
            return 0;
        }
    }
    if (local_20 != '\0') {
        *(uint *)(local_28 + 200) = *(uint *)(local_28 + 200) & 0xfffffffd;
    }
    return local_res8[0] & param_2;
}



ulonglong FUN_1407ea540(ulonglong *param_1,longlong param_2)

{
    byte bVar1;
    ulonglong uVar2;

    param_2 = param_2 - (longlong)param_1;
    uVar2 = (ulonglong)param_1 & 7;
    while( true ) {
        if (uVar2 == 0) {
            while ((((int)param_1 + (int)param_2 & 0xfffU) < 0xff9 &&
                    (uVar2 = *param_1, uVar2 == *(ulonglong *)((longlong)param_1 + param_2)))) {
                param_1 = param_1 + 1;
                if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
                    return 0;
                }
            }
        }
        bVar1 = *(byte *)param_1;
        if (bVar1 != *(byte *)((longlong)param_1 + param_2)) break;
        param_1 = (ulonglong *)((longlong)param_1 + 1);
        if (bVar1 == 0) {
            return 0;
        }
        uVar2 = (ulonglong)param_1 & 7;
    }
    return -(ulonglong)(bVar1 < *(byte *)((longlong)param_1 + param_2)) | 1;
}



void FUN_1407ea5a8(longlong *param_1,undefined8 param_2,undefined4 param_3,byte *param_4,int param_5
        ,byte *param_6,int param_7,UINT param_8)

{
    ulonglong uVar1;
    byte bVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    BOOL BVar5;
    int iVar6;
    int iVar7;
    byte *pbVar8;
    BYTE *pBVar9;
    longlong lVar10;
    undefined4 *puVar11;
    undefined4 *puVar12;
    ulonglong uVar13;
    int iVar14;
    undefined *puVar15;
    undefined *puVar16;
    undefined *puVar17;
    undefined auStackY184 [32];
    undefined4 local_88 [2];
    byte *local_80;
    undefined8 local_78;
    _cpinfo local_70;
    ulonglong local_58;

    puVar15 = auStackY184;
    puVar16 = auStackY184;
    local_58 = DAT_140c0f7b0 ^ (ulonglong)local_88;
    puVar12 = (undefined4 *)0x0;
    local_88[0] = param_3;
    local_78 = param_2;
    local_80 = param_6;
    pbVar8 = param_4;
    iVar14 = param_5;
    if (param_5 < 1) {
        if (param_5 < -1) goto LAB_1407ea8d3;
    }
    else {
        do {
            iVar14 = iVar14 + -1;
            iVar6 = iVar14;
            if (*pbVar8 == 0) break;
            pbVar8 = pbVar8 + 1;
            iVar6 = -1;
        } while (iVar14 != 0);
        param_5 = param_5 + (-1 - iVar6);
    }
    pbVar8 = param_6;
    iVar14 = param_7;
    if (param_7 < 1) {
        puVar16 = auStackY184;
        if (param_7 < -1) goto LAB_1407ea8d3;
    }
    else {
        do {
            iVar14 = iVar14 + -1;
            iVar6 = iVar14;
            if (*pbVar8 == 0) break;
            pbVar8 = pbVar8 + 1;
            iVar6 = -1;
        } while (iVar14 != 0);
        param_7 = param_7 + (-1 - iVar6);
    }
    if (param_8 == 0) {
        param_8 = *(UINT *)(*param_1 + 4);
    }
    if ((param_5 == 0) || (param_7 == 0)) {
        puVar16 = auStackY184;
        if ((param_5 == param_7) ||
            (((puVar16 = auStackY184, 1 < param_7 || (puVar16 = auStackY184, 1 < param_5)) ||
              (BVar5 = GetCPInfo(param_8,&local_70), puVar16 = auStackY184, BVar5 == 0))))
            goto LAB_1407ea8d3;
        if (0 < param_5) {
            puVar16 = auStackY184;
            if (1 < local_70.MaxCharSize) {
                pBVar9 = local_70.LeadByte;
                while (((puVar16 = auStackY184, local_70.LeadByte[0] != 0 &&
                                                (puVar16 = auStackY184, pBVar9[1] != 0)) &&
                        ((bVar2 = *param_4, bVar2 < *pBVar9 ||
                                            (puVar16 = auStackY184, pBVar9[1] <= bVar2 && bVar2 != pBVar9[1]))))) {
                    pBVar9 = pBVar9 + 2;
                    local_70.LeadByte[0] = *pBVar9;
                }
            }
            goto LAB_1407ea8d3;
        }
        if (0 < param_7) {
            puVar16 = auStackY184;
            if (1 < local_70.MaxCharSize) {
                pBVar9 = local_70.LeadByte;
                while (((puVar16 = auStackY184, local_70.LeadByte[0] != 0 &&
                                                (puVar16 = auStackY184, pBVar9[1] != 0)) &&
                        ((bVar2 = *param_6, bVar2 < *pBVar9 ||
                                            (puVar16 = auStackY184, pBVar9[1] <= bVar2 && bVar2 != pBVar9[1]))))) {
                    pBVar9 = pBVar9 + 2;
                    local_70.LeadByte[0] = *pBVar9;
                }
            }
            goto LAB_1407ea8d3;
        }
    }
    iVar14 = MultiByteToWideChar(param_8,9,(LPCSTR)param_4,param_5,(LPWSTR)0x0,0);
    uVar13 = (ulonglong)iVar14;
    puVar16 = auStackY184;
    if (iVar14 == 0) goto LAB_1407ea8d3;
    puVar16 = auStackY184;
    puVar11 = puVar12;
    if ((0 < iVar14) && (puVar16 = auStackY184, 1 < 0xffffffffffffffe0 / uVar13)) {
        uVar1 = uVar13 * 2 + 0x10;
        if (uVar1 < 0x401) {
            lVar10 = FUN_1407f0f60(uVar1,0xffffffffffffffe0 % uVar13,0xffffffffffffff0);
            lVar10 = -lVar10;
            puVar15 = auStackY184 + lVar10;
            puVar11 = (undefined4 *)((longlong)local_88 + lVar10);
            puVar16 = auStackY184 + lVar10;
            if (puVar11 == (undefined4 *)0x0) goto LAB_1407ea8d3;
            *puVar11 = 0xcccc;
        }
        else {
            puVar11 = (undefined4 *)malloc(uVar1);
            puVar16 = auStackY184;
            if (puVar11 == (undefined4 *)0x0) goto LAB_1407ea7a2;
            *puVar11 = 0xdddd;
        }
        puVar16 = puVar15;
        puVar11 = puVar11 + 4;
    }
    LAB_1407ea7a2:
    if (puVar11 == (undefined4 *)0x0) goto LAB_1407ea8d3;
    *(int *)(puVar16 + 0x28) = iVar14;
    *(undefined4 **)(puVar16 + 0x20) = puVar11;
    *(undefined8 *)(puVar16 + -8) = 0x1407ea7c9;
    iVar6 = MultiByteToWideChar(param_8,1,(LPCSTR)param_4,param_5,*(LPWSTR *)(puVar16 + 0x20),
                                *(int *)(puVar16 + 0x28));
    pbVar8 = local_80;
    puVar17 = puVar16;
    if (iVar6 != 0) {
        *(undefined4 *)(puVar16 + 0x28) = 0;
        *(undefined8 *)(puVar16 + 0x20) = 0;
        *(undefined8 *)(puVar16 + -8) = 0x1407ea7ef;
        iVar6 = MultiByteToWideChar(param_8,9,(LPCSTR)pbVar8,param_7,*(LPWSTR *)(puVar16 + 0x20),
                                    *(int *)(puVar16 + 0x28));
        uVar13 = (ulonglong)iVar6;
        if (iVar6 != 0) {
            if ((0 < iVar6) && (1 < 0xffffffffffffffe0 / uVar13)) {
                uVar1 = uVar13 * 2 + 0x10;
                if (uVar1 < 0x401) {
                    *(undefined8 *)(puVar16 + -8) = 0x1407ea838;
                    lVar10 = FUN_1407f0f60(uVar1,0xffffffffffffffe0 % uVar13);
                    lVar10 = -lVar10;
                    puVar17 = puVar16 + lVar10;
                    puVar12 = (undefined4 *)(puVar16 + lVar10 + 0x30);
                    if (puVar12 == (undefined4 *)0x0) goto LAB_1407ea8c0;
                    *puVar12 = 0xcccc;
                    puVar16 = puVar16 + lVar10;
                }
                else {
                    *(undefined8 *)(puVar16 + -8) = 0x1407ea852;
                    puVar12 = (undefined4 *)malloc(uVar1);
                    if (puVar12 == (undefined4 *)0x0) goto LAB_1407ea869;
                    *puVar12 = 0xdddd;
                }
                puVar12 = puVar12 + 4;
                puVar17 = puVar16;
            }
            LAB_1407ea869:
            pbVar8 = local_80;
            if (puVar12 != (undefined4 *)0x0) {
                *(int *)(puVar17 + 0x28) = iVar6;
                *(undefined4 **)(puVar17 + 0x20) = puVar12;
                *(undefined8 *)(puVar17 + -8) = 0x1407ea88d;
                iVar7 = MultiByteToWideChar(param_8,1,(LPCSTR)pbVar8,param_7,*(LPWSTR *)(puVar17 + 0x20),
                                            *(int *)(puVar17 + 0x28));
                uVar4 = local_78;
                uVar3 = local_88[0];
                if (iVar7 != 0) {
                    *(int *)(puVar17 + 0x28) = iVar6;
                    *(undefined4 **)(puVar17 + 0x20) = puVar12;
                    *(undefined8 *)(puVar17 + -8) = 0x1407ea8ad;
                    FUN_1407e8448(uVar4,uVar3,puVar11,iVar14);
                }
                if (puVar12[-4] == 0xdddd) {
                    *(undefined8 *)(puVar17 + -8) = 0x1407ea8c0;
                    free(puVar12 + -4);
                }
            }
        }
    }
    LAB_1407ea8c0:
    puVar16 = puVar17;
    if (puVar11[-4] == 0xdddd) {
        *(undefined8 *)(puVar17 + -8) = 0x1407ea8d1;
        free(puVar11 + -4);
    }
    LAB_1407ea8d3:
    uVar13 = local_58 ^ (ulonglong)local_88;
    *(undefined8 *)(puVar16 + -8) = 0x1407ea8df;
    FUN_1407db4f0(uVar13);
    return;
}



void FUN_1407ea8f0(localeinfo_struct *param_1,undefined8 param_2,undefined4 param_3,
                   undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
                   undefined4 param_8)

{
    _LocaleUpdate local_28 [16];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28,param_1);
    FUN_1407ea5a8(local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return;
}



// Library Function - Single Match
//  _whiteout
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release

short _whiteout(int *param_1,undefined8 param_2)

{
    short sVar1;
    int iVar2;

    do {
        *param_1 = *param_1 + 1;
        sVar1 = FUN_1407f3700(param_2);
        if (sVar1 == -1) {
            return -1;
        }
        iVar2 = FUN_1407ed1c8(sVar1,8);
    } while (iVar2 != 0);
    return sVar1;
}



void FUN_1407ea9cc(longlong param_1,ushort *param_2,localeinfo_struct *param_3,longlong **param_4)

{
    byte *pbVar1;
    ushort uVar2;
    byte bVar3;
    undefined2 *puVar4;
    short sVar5;
    ushort uVar6;
    ushort uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int *piVar12;
    void *_Memory;
    code *pcVar13;
    char cVar14;
    void *_Memory_00;
    longlong *plVar15;
    longlong lVar16;
    uint uVar17;
    longlong lVar18;
    longlong lVar19;
    char cVar20;
    uint uVar21;
    ulonglong uVar22;
    ushort *puVar23;
    ushort *puVar24;
    uint uVar25;
    char cVar26;
    char cVar27;
    int iVar28;
    int iVar29;
    int iVar30;
    ulonglong uVar31;
    bool bVar32;
    undefined auStack1000 [32];
    int *local_3c8;
    int local_3b8;
    char local_3b4;
    char local_3b3;
    char local_3b2;
    int local_3b0;
    int local_3ac;
    uint local_3a8;
    int local_3a4;
    char local_3a0;
    int local_39c;
    int local_398;
    byte local_394;
    int local_390;
    void *local_388;
    ushort *local_380;
    longlong local_378;
    int local_370 [2];
    undefined2 *local_368;
    longlong local_360;
    longlong *local_358;
    uint local_350;
    uint local_34c;
    longlong local_348;
    int local_340;
    longlong **local_338;
    longlong **local_330;
    longlong local_328 [2];
    longlong local_318;
    char local_310;
    undefined2 local_308 [352];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack1000;
    iVar9 = 0;
    local_368 = local_308;
    local_340 = 0;
    local_3a8 = 0;
    local_348 = 0x15e;
    local_370[0] = 0;
    local_388 = (void *)0x0;
    local_380 = param_2;
    local_378 = param_1;
    local_338 = param_4;
    if ((param_2 == (ushort *)0x0) || (param_1 == 0)) {
        piVar12 = _errno();
        *piVar12 = 0x16;
        FUN_1407dc370();
        goto LAB_1407ebb4a;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_328,param_3);
    local_3b2 = '\0';
    local_3b8 = 0;
    local_3a4 = 0;
    local_3b0 = 0;
    if (*param_2 != 0) {
        LAB_1407eaa9b:
        iVar8 = FUN_1407ed1c8();
        if (iVar8 != 0) {
            local_3a4 = iVar9 + -1;
            sVar5 = _whiteout(&local_3a4,param_1);
            if (sVar5 != -1) {
                FUN_1407f38f8(sVar5,param_1);
            }
            do {
                param_2 = param_2 + 1;
                iVar9 = FUN_1407ed1c8(*param_2,8);
            } while (iVar9 != 0);
            local_3b8 = local_3a4;
            local_380 = param_2;
            iVar9 = local_3a4;
            goto LAB_1407ebab0;
        }
        if (*local_380 != 0x25) {
            LAB_1407eba67:
            iVar9 = iVar9 + 1;
            local_3b8 = iVar9;
            local_3a4 = iVar9;
            uVar7 = FUN_1407f3700();
            uVar6 = *local_380;
            local_380 = local_380 + 1;
            local_3a8 = (uint)uVar7;
            if (uVar6 == uVar7) goto LAB_1407eba99;
            _Memory_00 = local_388;
            if (uVar7 != 0xffff) {
                FUN_1407f38f8(uVar7,param_1);
                _Memory_00 = local_388;
            }
            goto LAB_1407eaf8f;
        }
        if (local_380[1] == 0x25) {
            if ((*local_380 == 0x25) && (local_380[1] == 0x25)) {
                local_380 = local_380 + 1;
            }
            goto LAB_1407eba67;
        }
        iVar8 = 0;
        local_34c = 0;
        local_358 = (longlong *)((ulonglong)local_358 & 0xffffffff00000000);
        local_350 = 0;
        cVar26 = '\x01';
        local_398 = 0;
        local_390 = 0;
        local_3ac = 0;
        local_394 = 0;
        local_3a0 = '\0';
        cVar20 = '\0';
        cVar14 = '\0';
        cVar27 = '\0';
        iVar28 = iVar8;
        iVar9 = iVar8;
        do {
            local_380 = local_380 + 1;
            uVar25 = (uint)*local_380;
            if (((*local_380 & 0xff00) == 0) &&
                (iVar10 = isdigit(uVar25 & 0xff), iVar8 = local_390, iVar28 = local_3ac, iVar10 != 0)) {
                local_390 = local_390 + 1;
                local_3ac = uVar25 + (local_3ac * 5 + -0x18) * 2;
                puVar23 = local_380;
                iVar8 = local_390;
                iVar28 = local_3ac;
            }
            else {
                puVar23 = local_380;
                if (uVar25 == 0x2a) {
                    cVar20 = cVar20 + '\x01';
                }
                else if (uVar25 != 0x46) {
                    if (uVar25 == 0x49) {
                        uVar6 = local_380[1];
                        if ((uVar6 == 0x36) && (puVar24 = local_380 + 2, local_380[2] == 0x34)) {
                            LAB_1407eac34:
                            local_380 = puVar24;
                            iVar9 = iVar9 + 1;
                            local_360 = 0;
                            puVar23 = local_380;
                        }
                        else if ((uVar6 != 0x33) || (puVar23 = local_380 + 2, local_380[2] != 0x32)) {
                            if (((ushort)(uVar6 - 0x58) < 0x21) &&
                                (puVar24 = local_380,
                                        (0x100821001U >> ((ulonglong)(ushort)(uVar6 - 0x58) & 0x3f) & 1) != 0))
                                goto LAB_1407eac34;
                            iVar9 = iVar9 + 1;
                            local_360 = 0;
                            LAB_1407eac7f:
                            cVar14 = cVar14 + '\x01';
                            puVar23 = local_380;
                        }
                    }
                    else if (uVar25 == 0x4c) {
                        cVar26 = cVar26 + '\x01';
                    }
                    else if (uVar25 != 0x4e) {
                        if (uVar25 == 0x68) {
                            cVar26 = cVar26 + -1;
                            cVar27 = cVar27 + -1;
                        }
                        else {
                            if (uVar25 == 0x6c) {
                                puVar24 = local_380 + 1;
                                if (local_380[1] == 0x6c) goto LAB_1407eac34;
                                cVar26 = cVar26 + '\x01';
                            }
                            else if (uVar25 != 0x77) goto LAB_1407eac7f;
                            cVar27 = cVar27 + '\x01';
                        }
                    }
                }
            }
            local_380 = puVar23;
            iVar10 = local_34c;
            uVar25 = local_350;
        } while (cVar14 == '\0');
        uVar31 = (ulonglong)local_358 & 0xffffffff;
        if (cVar20 == '\0') {
            local_330 = local_338;
            local_358 = *local_338;
            local_338 = local_338 + 1;
        }
        else {
            local_358 = (longlong *)0x0;
        }
        cVar14 = '\0';
        if (cVar27 == '\0') {
            cVar27 = (-((*local_380 - 0x43 & 0xffef) != 0) & 2U) - 1;
        }
        uVar17 = *local_380 | 0x20;
        local_3b4 = cVar20;
        local_3b3 = cVar26;
        local_39c = iVar9;
        local_34c = uVar17;
        if (uVar17 != 0x6e) {
            if ((uVar17 == 99) || (uVar17 == 0x7b)) {
                local_3b8 = local_3b8 + 1;
                local_3a4 = local_3b8;
                uVar6 = FUN_1407f3700();
            }
            else {
                uVar6 = _whiteout();
                local_3b8 = local_3a4;
            }
            local_3a8 = (uint)uVar6;
            _Memory_00 = local_388;
            iVar8 = local_390;
            iVar28 = local_3ac;
            if (uVar6 == 0xffff) goto LAB_1407eaf8f;
        }
        lVar16 = local_378;
        uVar21 = local_3a8;
        uVar6 = (ushort)local_3a8;
        if ((iVar8 != 0) && (iVar28 == 0)) goto LAB_1407ebacc;
        puVar23 = local_380;
        iVar11 = local_39c;
        iVar9 = local_3b8;
        if (uVar17 < 0x70) {
            if (uVar17 == 0x6f) {
                LAB_1407eb7b7:
                if (uVar6 == 0x2d) {
                    local_3a0 = '\x01';
                }
                else {
                    iVar29 = local_3ac;
                    if (uVar6 != 0x2b) goto LAB_1407eb52f;
                }
                local_3ac = iVar28 + -1;
                if ((local_3ac == 0) && (iVar8 != 0)) {
                    cVar14 = '\x01';
                    iVar29 = local_3ac;
                }
                else {
                    iVar9 = local_3b8 + 1;
                    local_3b8 = iVar9;
                    local_3a4 = iVar9;
                    uVar6 = FUN_1407f3700();
                    local_3a8 = (uint)uVar6;
                    iVar29 = local_3ac;
                    cVar14 = '\0';
                }
                goto LAB_1407eb52f;
            }
            if (uVar17 == 99) {
                if (iVar8 == 0) {
                    local_3ac = iVar28 + 1;
                    local_390 = 1;
                }
                if ('\0' < cVar27) {
                    uVar25 = 1;
                }
                goto LAB_1407eb5ea;
            }
            if (uVar17 == 100) goto LAB_1407eb7b7;
            if (uVar17 < 0x65) {
                LAB_1407eb2a3:
                if (*local_380 != uVar6) goto LAB_1407ebacc;
                local_3b2 = local_3b2 + -1;
                if (local_3b4 == '\0') {
                    local_338 = local_330;
                }
                goto LAB_1407eade1;
            }
            if (0x67 < uVar17) {
                if (uVar17 == 0x69) {
                    uVar17 = 100;
                    goto LAB_1407eae0b;
                }
                if (uVar17 != 0x6e) goto LAB_1407eb2a3;
                iVar10 = local_3b8;
                if (local_3b4 != '\0') goto LAB_1407eade1;
                goto LAB_1407eba1d;
            }
            lVar18 = 0;
            if (uVar6 == 0x2d) {
                *local_368 = 0x2d;
                lVar18 = 1;
                LAB_1407eae4e:
                iVar28 = local_3ac + -1;
                iVar9 = local_3b8 + 1;
                uVar6 = FUN_1407f3700();
                local_3a8 = (uint)uVar6;
                iVar8 = local_390;
            }
            else {
                iVar28 = local_3ac;
                if (uVar6 == 0x2b) goto LAB_1407eae4e;
            }
            if (iVar8 == 0) {
                iVar28 = -1;
            }
            while (((uVar21 = local_3a8, cVar14 = (char)local_3a8, iVar8 = iVar28,
                    (local_3a8 & 0xff00) == 0 && (iVar10 = isdigit(local_3a8 & 0xff), iVar10 != 0)) &&
                    (iVar8 = iVar28 + -1, iVar28 != 0))) {
                local_398 = local_398 + 1;
                local_368[lVar18] = (short)cVar14;
                local_3c8 = local_370;
                lVar18 = lVar18 + 1;
                iVar28 = FUN_1407ebb9c(lVar18,&local_348);
                _Memory_00 = local_388;
                if (iVar28 == 0) goto LAB_1407eaf8f;
                iVar9 = iVar9 + 1;
                uVar6 = FUN_1407f3700();
                local_3a8 = (uint)uVar6;
                iVar28 = iVar8;
            }
            uVar6 = **(ushort **)(*(longlong *)(local_328[0] + 0xf0) + 0x58);
            iVar28 = iVar8;
            if (((uint)uVar6 == (int)cVar14) && (iVar28 = iVar8 + -1, iVar8 != 0)) {
                uVar7 = FUN_1407f3700(lVar16);
                local_368[lVar18] = uVar6;
                local_3c8 = local_370;
                lVar18 = lVar18 + 1;
                local_3a8 = (uint)uVar7;
                iVar28 = FUN_1407ebb9c(lVar18,&local_348);
                _Memory_00 = local_388;
                iVar8 = iVar8 + -1;
                if (iVar28 == 0) goto LAB_1407eaf8f;
                while( true ) {
                    uVar21 = (uint)uVar7;
                    iVar9 = iVar9 + 1;
                    iVar28 = iVar8;
                    if ((((uVar7 & 0xff00) != 0) || (iVar10 = isdigit(uVar21 & 0xff), iVar10 == 0)) ||
                        (iVar28 = iVar8 + -1, iVar8 == 0)) break;
                    local_398 = local_398 + 1;
                    local_368[lVar18] = uVar7;
                    local_3c8 = local_370;
                    lVar18 = lVar18 + 1;
                    iVar8 = FUN_1407ebb9c(lVar18,&local_348);
                    _Memory_00 = local_388;
                    if (iVar8 == 0) goto LAB_1407eaf8f;
                    uVar7 = FUN_1407f3700();
                    local_3a8 = (uint)uVar7;
                    iVar8 = iVar28;
                }
            }
            iVar8 = local_398;
            lVar19 = lVar18;
            if (((local_398 != 0) && (((short)uVar21 - 0x45U & 0xffdf) == 0)) &&
                (iVar10 = iVar28 + -1, iVar28 != 0)) {
                local_368[lVar18] = 0x65;
                lVar19 = lVar18 + 1;
                local_3c8 = local_370;
                iVar28 = FUN_1407ebb9c(lVar19,&local_348);
                _Memory_00 = local_388;
                if (iVar28 == 0) goto LAB_1407eaf8f;
                uVar6 = FUN_1407f3700(lVar16);
                uVar21 = (uint)uVar6;
                local_3a8 = (uint)uVar6;
                iVar28 = iVar9 + 1;
                if (uVar6 == 0x2d) {
                    local_368[lVar19] = 0x2d;
                    local_3c8 = local_370;
                    lVar19 = lVar18 + 2;
                    iVar11 = FUN_1407ebb9c(lVar19,&local_348);
                    _Memory_00 = local_388;
                    if (iVar11 == 0) goto LAB_1407eaf8f;
                    LAB_1407eb0fe:
                    iVar11 = 0;
                    if (iVar10 != 0) {
                        iVar28 = iVar9 + 2;
                        goto LAB_1407eb16b;
                    }
                }
                else {
                    iVar11 = iVar10;
                    if (uVar6 == 0x2b) goto LAB_1407eb0fe;
                }
                while (((iVar9 = iVar28, (uVar21 & 0xff00) == 0 &&
                                         (iVar28 = isdigit(uVar21 & 0xff), iVar28 != 0)) && (iVar11 != 0))) {
                    iVar8 = iVar8 + 1;
                    local_368[lVar19] = (short)uVar21;
                    lVar19 = lVar19 + 1;
                    local_3c8 = local_370;
                    iVar28 = FUN_1407ebb9c(lVar19,&local_348);
                    _Memory_00 = local_388;
                    if (iVar28 == 0) goto LAB_1407eaf8f;
                    iVar28 = iVar9 + 1;
                    iVar10 = iVar11;
                    LAB_1407eb16b:
                    uVar6 = FUN_1407f3700();
                    uVar21 = (uint)uVar6;
                    local_3a8 = (uint)uVar6;
                    iVar11 = iVar10 + -1;
                }
            }
            iVar9 = iVar9 + -1;
            local_3b8 = iVar9;
            local_3a4 = iVar9;
            if ((short)uVar21 != -1) {
                FUN_1407f38f8(uVar21 & 0xffff,lVar16);
            }
            puVar4 = local_368;
            _Memory_00 = local_388;
            if (iVar8 == 0) goto LAB_1407eaf8f;
            if (local_3b4 == '\0') {
                local_3b0 = local_3b0 + 1;
                local_368[lVar19] = 0;
                lVar16 = local_348 * 2;
                lVar18 = lVar16 + 2;
                _Memory = (void *)FUN_1407e2c30(lVar18);
                _Memory_00 = local_388;
                if (_Memory != (void *)0x0) {
                    local_3c8 = (int *)(lVar16 + 1);
                    iVar8 = FUN_1407f3f18(0,_Memory,lVar18,puVar4);
                    if ((iVar8 == 0x16) || (iVar8 == 0x22)) {
                        local_3c8 = (int *)0x0;
                        FUN_1407dc390(0,0,0,0);
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                    }
                    iVar8 = (int)local_3b3;
                    pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa58);
                    (*pcVar13)(iVar8 + -1,local_358);
                    free(_Memory);
                    goto LAB_1407eade1;
                }
                goto LAB_1407eaf8f;
            }
        }
        else {
            if (uVar17 == 0x70) {
                local_360 = 0;
                local_3b3 = '\x01';
                iVar11 = local_39c + 1;
                goto LAB_1407eb7b7;
            }
            if (uVar17 == 0x73) {
                uVar25 = uVar25 & 0xff;
                if ('\0' < cVar27) {
                    uVar25 = 1;
                }
                LAB_1407eb5ea:
                local_380 = puVar23;
                plVar15 = local_358;
                lVar16 = local_378;
                iVar9 = local_3b8 + -1;
                local_3b8 = iVar9;
                local_3a4 = iVar9;
                bVar3 = local_394;
                if (uVar6 != 0xffff) {
                    FUN_1407f38f8();
                    bVar3 = local_394;
                }
                do {
                    if ((local_390 != 0) &&
                        (iVar8 = local_3ac + -1, bVar32 = local_3ac == 0, local_3ac = iVar8, bVar32))
                        goto LAB_1407eb752;
                    iVar8 = iVar9 + 1;
                    local_3b8 = iVar8;
                    local_3a4 = iVar8;
                    uVar6 = FUN_1407f3700();
                    uVar21 = (uint)uVar6;
                    local_3a8 = (uint)uVar6;
                    if (uVar6 == 0xffff) goto LAB_1407eb71c;
                    if (uVar17 != 99) {
                        if (uVar17 == 0x73) {
                            if ((ushort)(uVar6 - 9) < 5) goto LAB_1407eb71c;
                            if (uVar6 != 0x20) goto LAB_1407eb6ae;
                        }
                        if ((uVar17 != 0x7b) ||
                            (((uint)(int)(char)(*(byte *)((ulonglong)(uVar6 >> 3) + (longlong)local_388) ^ bVar3)
                                                 >> (uVar6 & 7) & 1) == 0)) goto LAB_1407eb71c;
                    }
                    LAB_1407eb6ae:
                    iVar9 = iVar8;
                    if (local_3b4 == '\0') {
                        if ((char)uVar25 == '\0') {
                            local_350 = 0;
                            iVar8 = FUN_1407f2338();
                            if (iVar8 == 0) {
                                local_358 = (longlong *)((longlong)local_358 + (longlong)(int)local_350);
                            }
                            else if ((iVar8 == 0x16) || (iVar8 == 0x22)) {
                                local_3c8 = (int *)0x0;
                                FUN_1407dc390(0,0,0,0);
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                            }
                        }
                        else {
                            *(ushort *)local_358 = uVar6;
                            local_358 = (longlong *)((longlong)local_358 + 2);
                        }
                    }
                    else {
                        plVar15 = (longlong *)((longlong)plVar15 + 2);
                    }
                } while( true );
            }
            if (uVar17 == 0x75) goto LAB_1407eb7b7;
            if (uVar17 != 0x78) {
                if (uVar17 != 0x7b) goto LAB_1407eb2a3;
                uVar25 = uVar25 & 0xff;
                if ('\0' < cVar27) {
                    uVar25 = 1;
                }
                puVar23 = local_380 + 1;
                if (local_380[1] == 0x5e) {
                    local_394 = 0xff;
                    puVar23 = local_380 + 2;
                }
                local_380 = puVar23;
                local_350 = uVar25;
                if (local_388 == (void *)0x0) {
                    local_388 = (void *)FUN_1407e2c30(0x2000);
                    _Memory_00 = local_388;
                    if (local_388 == (void *)0x0) goto LAB_1407eaf8f;
                    local_340 = 1;
                }
                _Memory_00 = local_388;
                FUN_1407e4830(local_388,0);
                puVar23 = local_380;
                if (*local_380 == 0x5d) {
                    uVar31 = 0x5d;
                    puVar23 = local_380 + 1;
                    *(undefined *)((longlong)_Memory_00 + 0xb) = 0x20;
                }
                uVar7 = *puVar23;
                while (uVar7 != 0x5d) {
                    puVar24 = puVar23 + 1;
                    if (((uVar7 == 0x2d) && ((ushort)uVar31 != 0)) && (uVar2 = *puVar24, uVar2 != 0x5d)) {
                        puVar24 = puVar23 + 2;
                        if ((ushort)uVar31 < uVar2) {
                            uVar22 = (ulonglong)uVar2;
                        }
                        else {
                            uVar22 = uVar31 & 0xffff;
                            uVar31 = (ulonglong)uVar2;
                        }
                        while( true ) {
                            uVar25 = (uint)uVar31 & 0xffff;
                            if ((uint)uVar22 <= uVar25) break;
                            pbVar1 = (byte *)(((uVar31 & 0xffff) >> 3) + (longlong)_Memory_00);
                            *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar25 & 7);
                            uVar31 = (ulonglong)(ushort)((short)uVar31 + 1);
                        }
                        uVar31 = 0;
                        pbVar1 = (byte *)((uVar22 >> 3) + (longlong)_Memory_00);
                        *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar22 & 7);
                    }
                    else {
                        uVar31 = (ulonglong)uVar7;
                        pbVar1 = (byte *)((ulonglong)(uVar7 >> 3) + (longlong)_Memory_00);
                        *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar7 & 7);
                    }
                    uVar17 = local_34c;
                    puVar23 = puVar24;
                    uVar25 = local_350;
                    uVar7 = *puVar24;
                }
                if (*puVar23 != 0) goto LAB_1407eb5ea;
                goto LAB_1407eaf8f;
            }
            LAB_1407eae0b:
            iVar30 = local_3b8;
            if (uVar6 == 0x2d) {
                local_3a0 = '\x01';
                LAB_1407eb445:
                local_3ac = iVar28 + -1;
                if ((local_3ac == 0) && (iVar8 != 0)) {
                    cVar14 = '\x01';
                }
                else {
                    iVar30 = local_3b8 + 1;
                    local_3b8 = iVar30;
                    local_3a4 = iVar30;
                    uVar6 = FUN_1407f3700();
                    local_3a8 = (uint)uVar6;
                }
            }
            else if (uVar6 == 0x2b) goto LAB_1407eb445;
            iVar29 = local_3ac;
            iVar11 = local_39c;
            iVar9 = local_3b8;
            if ((short)local_3a8 == 0x30) {
                local_3b8 = iVar30 + 1;
                local_3a4 = local_3b8;
                uVar6 = FUN_1407f3700(lVar16);
                local_3a8 = (uint)uVar6;
                if ((uVar6 - 0x58 & 0xffdf) == 0) {
                    local_3b8 = iVar30 + 2;
                    local_3a4 = local_3b8;
                    uVar6 = FUN_1407f3700();
                    local_3a8 = (uint)uVar6;
                    if ((local_390 != 0) && (local_3ac = local_3ac + -2, local_3ac < 1)) {
                        cVar14 = cVar14 + '\x01';
                    }
                    uVar17 = 0x78;
                    iVar29 = local_3ac;
                    iVar11 = local_39c;
                    iVar9 = local_3b8;
                }
                else {
                    local_398 = 1;
                    if (uVar17 == 0x78) {
                        local_3b8 = iVar30;
                        local_3a4 = iVar30;
                        if (uVar6 != 0xffff) {
                            FUN_1407f38f8(uVar6,lVar16);
                        }
                        local_3a8 = 0x30;
                        iVar29 = local_3ac;
                        iVar11 = local_39c;
                        iVar9 = local_3b8;
                    }
                    else {
                        iVar29 = local_3ac;
                        if ((local_390 != 0) && (iVar29 = local_3ac + -1, iVar29 == 0)) {
                            cVar14 = cVar14 + '\x01';
                        }
                        uVar17 = 0x6f;
                        iVar11 = local_39c;
                        iVar9 = local_3b8;
                    }
                }
            }
            LAB_1407eb52f:
            uVar21 = local_3a8;
            if (iVar11 == 0) {
                if (cVar14 == '\0') {
                    while (uVar21 = local_3a8, uVar6 = (ushort)local_3a8, (uVar17 - 0x70 & 0xfffffff7) != 0) {
                        if (((local_3a8 & 0xff00) != 0) || (iVar8 = isdigit(local_3a8 & 0xff), iVar8 == 0))
                            goto LAB_1407eb9c3;
                        if (uVar17 == 0x6f) {
                            if (0x37 < uVar6) goto LAB_1407eb9c3;
                            iVar10 = iVar10 << 3;
                        }
                        else {
                            iVar10 = iVar10 * 10;
                        }
                        LAB_1407eb980:
                        local_398 = local_398 + 1;
                        iVar10 = iVar10 + -0x30 + (uVar21 & 0xffff);
                        if ((local_390 != 0) && (iVar29 = iVar29 + -1, iVar29 == 0)) goto LAB_1407eb9e7;
                        iVar9 = iVar9 + 1;
                        local_3b8 = iVar9;
                        local_3a4 = iVar9;
                        uVar6 = FUN_1407f3700();
                        local_3a8 = (uint)uVar6;
                    }
                    if ((local_3a8 & 0xff00) == 0) {
                        uVar25 = local_3a8 & 0xff;
                        iVar8 = isxdigit(uVar25);
                        if (iVar8 != 0) {
                            iVar10 = iVar10 << 4;
                            iVar8 = isdigit(uVar25);
                            if (iVar8 == 0) {
                                local_3a8 = uVar21 & 0xffff0000 | (uint)(ushort)((uVar6 & 0xffdf) - 7);
                                uVar21 = local_3a8;
                            }
                            goto LAB_1407eb980;
                        }
                    }
                    LAB_1407eb9c3:
                    iVar9 = iVar9 + -1;
                    local_3b8 = iVar9;
                    local_3a4 = iVar9;
                    if (uVar6 != 0xffff) {
                        FUN_1407f38f8(uVar21 & 0xffff,local_378);
                    }
                }
                LAB_1407eb9e7:
                if (local_3a0 != '\0') {
                    iVar10 = -iVar10;
                }
            }
            else {
                lVar16 = local_360;
                if (cVar14 == '\0') {
                    while (uVar21 = local_3a8, uVar6 = (ushort)local_3a8, (uVar17 - 0x70 & 0xfffffff7) != 0) {
                        if (((local_3a8 & 0xff00) != 0) || (iVar8 = isdigit(local_3a8 & 0xff), iVar8 == 0))
                            goto LAB_1407eb8aa;
                        if (uVar17 == 0x6f) {
                            if (0x37 < uVar6) goto LAB_1407eb8aa;
                            local_360 = lVar16 << 3;
                        }
                        else {
                            local_360 = lVar16 * 10;
                        }
                        LAB_1407eb862:
                        local_398 = local_398 + 1;
                        lVar16 = local_360 + (int)((uVar21 & 0xffff) - 0x30);
                        local_360 = lVar16;
                        if ((local_390 != 0) && (iVar29 = iVar29 + -1, iVar29 == 0)) goto LAB_1407eb8d2;
                        iVar9 = iVar9 + 1;
                        local_3b8 = iVar9;
                        local_3a4 = iVar9;
                        uVar6 = FUN_1407f3700();
                        local_3a8 = (uint)uVar6;
                    }
                    if ((local_3a8 & 0xff00) == 0) {
                        uVar25 = local_3a8 & 0xff;
                        iVar8 = isxdigit(uVar25);
                        if (iVar8 != 0) {
                            local_360 = local_360 << 4;
                            iVar8 = isdigit(uVar25);
                            if (iVar8 == 0) {
                                local_3a8 = uVar21 & 0xffff0000 | (uint)(ushort)((uVar6 & 0xffdf) - 7);
                                uVar21 = local_3a8;
                            }
                            goto LAB_1407eb862;
                        }
                    }
                    LAB_1407eb8aa:
                    iVar9 = iVar9 + -1;
                    local_3b8 = iVar9;
                    local_3a4 = iVar9;
                    if (uVar6 != 0xffff) {
                        FUN_1407f38f8(uVar21 & 0xffff,local_378);
                    }
                }
                LAB_1407eb8d2:
                if (local_3a0 != '\0') {
                    local_360 = -local_360;
                }
            }
            iVar8 = local_398;
            if (uVar17 == 0x46) {
                iVar8 = 0;
            }
            _Memory_00 = local_388;
            if (iVar8 == 0) goto LAB_1407eaf8f;
            if (local_3b4 == '\0') {
                local_3b0 = local_3b0 + 1;
                LAB_1407eba1d:
                if (iVar11 == 0) {
                    if (local_3b3 == '\0') {
                        *(ushort *)local_358 = (ushort)iVar10;
                    }
                    else {
                        *(int *)local_358 = iVar10;
                    }
                }
                else {
                    *local_358 = local_360;
                }
            }
        }
        goto LAB_1407eade1;
    }
    goto LAB_1407ebb39;
    LAB_1407eb71c:
    local_3b8 = iVar9;
    local_3a4 = iVar9;
    if (uVar6 != 0xffff) {
        FUN_1407f38f8(uVar6,lVar16);
    }
    LAB_1407eb752:
    _Memory_00 = local_388;
    if (plVar15 == local_358) goto LAB_1407eaf8f;
    if ((local_3b4 == '\0') && (local_3b0 = local_3b0 + 1, uVar17 != 99)) {
        if ((char)uVar25 == '\0') {
            *(undefined *)local_358 = 0;
        }
        else {
            *(ushort *)local_358 = 0;
        }
    }
    LAB_1407eade1:
    uVar7 = (ushort)uVar21;
    local_3b2 = local_3b2 + '\x01';
    local_380 = local_380 + 1;
    param_1 = local_378;
    LAB_1407eba99:
    if ((uVar7 == 0xffff) && ((_Memory_00 = local_388, *local_380 != 0x25 || (local_380[1] != 0x6e))))
        goto LAB_1407eaf8f;
    LAB_1407ebab0:
    _Memory_00 = local_388;
    param_2 = local_380;
    if (*local_380 == 0) goto LAB_1407eaf8f;
    goto LAB_1407eaa9b;
    LAB_1407ebacc:
    _Memory_00 = local_388;
    if (uVar6 != 0xffff) {
        FUN_1407f38f8(local_3a8 & 0xffff,local_378);
        _Memory_00 = local_388;
    }
    LAB_1407eaf8f:
    if (local_340 == 1) {
        free(_Memory_00);
    }
    if (local_370[0] == 1) {
        free(local_368);
    }
    LAB_1407ebb39:
    if (local_310 != '\0') {
        *(uint *)(local_318 + 200) = *(uint *)(local_318 + 200) & 0xfffffffd;
    }
    LAB_1407ebb4a:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack1000);
    return;
}



undefined8
FUN_1407ebb9c(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
              undefined4 *param_5)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_1 == *param_2) {
        if (*param_3 == param_4) {
            lVar1 = FUN_1407e2bb0(*param_2,4);
            *param_3 = lVar1;
            if (lVar1 != 0) {
                *param_5 = 1;
                FUN_1407db590(*param_3,param_4,*param_2 * 2);
                *param_2 = *param_2 * 2;
                goto LAB_1407ebc20;
            }
        }
        else {
            lVar1 = FUN_1407e2d30(*param_3,*param_2,4);
            if (lVar1 != 0) {
                *param_3 = lVar1;
                *param_2 = *param_2 * 2;
                goto LAB_1407ebc20;
            }
        }
        uVar2 = 0;
    }
    else {
        LAB_1407ebc20:
        uVar2 = 1;
    }
    return uVar2;
}



void FUN_1407ebc38(longlong param_1,ushort *param_2,localeinfo_struct *param_3,longlong **param_4)

{
    byte *pbVar1;
    ushort uVar2;
    byte bVar3;
    undefined2 *puVar4;
    short sVar5;
    ushort uVar6;
    ushort uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int *piVar12;
    void *_Memory;
    code *pcVar13;
    void *pvVar14;
    char cVar15;
    uint uVar16;
    longlong lVar17;
    longlong lVar18;
    longlong *plVar19;
    longlong lVar20;
    uint uVar21;
    char cVar22;
    longlong **pplVar23;
    ulonglong uVar24;
    ushort *puVar25;
    ushort *puVar26;
    char cVar27;
    ulonglong uVar28;
    uint uVar29;
    int iVar30;
    char cVar31;
    int iVar32;
    int iVar33;
    ulonglong uVar34;
    bool bVar35;
    undefined auStack1016 [32];
    int *local_3d8;
    int local_3c8;
    char local_3c4;
    char local_3c3;
    int local_3c0;
    char local_3bc;
    uint local_3b8;
    int local_3b4;
    int local_3b0;
    char local_3ac;
    int local_3a8;
    int local_3a4;
    int local_3a0;
    byte local_39c;
    int local_398;
    int local_394;
    void *local_390;
    longlong local_388;
    ushort *local_380;
    longlong local_378;
    longlong *local_370;
    undefined2 *local_368;
    int local_360;
    uint local_35c;
    uint local_358;
    longlong local_350;
    longlong **local_348;
    int local_340;
    longlong **local_338;
    longlong local_330 [2];
    longlong local_320;
    char local_318;
    undefined2 local_308 [352];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack1016;
    iVar9 = 0;
    local_368 = local_308;
    uVar16 = 0;
    local_340 = 0;
    local_3b8 = 0;
    local_350 = 0x15e;
    local_360 = 0;
    local_390 = (void *)0x0;
    local_3a8 = 0;
    local_388 = param_1;
    local_380 = param_2;
    local_338 = param_4;
    if ((param_2 == (ushort *)0x0) || (param_1 == 0)) {
        piVar12 = _errno();
        *piVar12 = 0x16;
        FUN_1407dc370();
        goto LAB_1407ecef1;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_330,param_3);
    local_3bc = '\0';
    local_3c8 = 0;
    local_3b0 = 0;
    local_3c0 = 0;
    if (*param_2 != 0) {
        LAB_1407ebd0b:
        iVar11 = 0;
        iVar8 = FUN_1407ed1c8();
        if (iVar8 != 0) {
            local_3b0 = iVar9 + -1;
            sVar5 = _whiteout(&local_3b0,param_1);
            if (sVar5 != -1) {
                FUN_1407f38f8(sVar5,param_1);
            }
            do {
                param_2 = param_2 + 1;
                iVar9 = FUN_1407ed1c8(*param_2,8);
            } while (iVar9 != 0);
            local_3c8 = local_3b0;
            local_380 = param_2;
            iVar9 = local_3b0;
            goto LAB_1407ecd8f;
        }
        if (*local_380 != 0x25) {
            LAB_1407ecd42:
            iVar9 = iVar9 + 1;
            local_3c8 = iVar9;
            local_3b0 = iVar9;
            uVar7 = FUN_1407f3700();
            uVar16 = (uint)uVar7;
            uVar6 = *local_380;
            local_380 = local_380 + 1;
            local_3b8 = (uint)uVar7;
            if (uVar6 == uVar7) goto LAB_1407ecd78;
            joined_r0x0001407ece3b:
            uVar16 = local_3b8;
            pvVar14 = local_390;
            iVar10 = local_3a8;
            local_3b8 = uVar16;
            if (uVar7 != 0xffff) {
                FUN_1407f38f8(uVar16 & 0xffff,param_1);
                pvVar14 = local_390;
                iVar10 = local_3a8;
            }
            goto LAB_1407ece7f;
        }
        if (local_380[1] == 0x25) {
            if ((*local_380 == 0x25) && (local_380[1] == 0x25)) {
                local_380 = local_380 + 1;
            }
            goto LAB_1407ecd42;
        }
        iVar9 = 0;
        local_398 = 0;
        local_358 = 0;
        local_394 = 0;
        local_3a0 = 0;
        local_370 = (longlong *)0x0;
        local_39c = 0;
        local_3ac = '\0';
        cVar22 = '\0';
        cVar15 = '\0';
        local_35c = 0;
        cVar27 = '\x01';
        local_3b4 = 0;
        cVar31 = '\0';
        iVar8 = iVar11;
        do {
            local_380 = local_380 + 1;
            uVar16 = (uint)*local_380;
            if (((*local_380 & 0xff00) == 0) &&
                (iVar10 = isdigit(uVar16 & 0xff), iVar11 = local_3a0, iVar8 = local_3b4, iVar10 != 0)) {
                local_3a0 = local_3a0 + 1;
                local_3b4 = uVar16 + (local_3b4 * 5 + -0x18) * 2;
                puVar25 = local_380;
                iVar11 = local_3a0;
                iVar8 = local_3b4;
            }
            else {
                puVar25 = local_380;
                if (uVar16 == 0x2a) {
                    cVar22 = cVar22 + '\x01';
                }
                else if (uVar16 != 0x46) {
                    if (uVar16 == 0x49) {
                        uVar6 = local_380[1];
                        if ((uVar6 == 0x36) && (puVar26 = local_380 + 2, local_380[2] == 0x34)) {
                            LAB_1407ebea9:
                            local_380 = puVar26;
                            iVar9 = iVar9 + 1;
                            local_378 = 0;
                            puVar25 = local_380;
                        }
                        else if ((uVar6 != 0x33) || (puVar25 = local_380 + 2, local_380[2] != 0x32)) {
                            if (((ushort)(uVar6 - 0x58) < 0x21) &&
                                (puVar26 = local_380,
                                        (0x100821001U >> ((ulonglong)(ushort)(uVar6 - 0x58) & 0x3f) & 1) != 0))
                                goto LAB_1407ebea9;
                            iVar9 = iVar9 + 1;
                            local_378 = 0;
                            LAB_1407ebef4:
                            cVar15 = cVar15 + '\x01';
                            puVar25 = local_380;
                        }
                    }
                    else if (uVar16 == 0x4c) {
                        cVar27 = cVar27 + '\x01';
                    }
                    else if (uVar16 != 0x4e) {
                        if (uVar16 == 0x68) {
                            cVar27 = cVar27 + -1;
                            cVar31 = cVar31 + -1;
                        }
                        else {
                            if (uVar16 == 0x6c) {
                                puVar26 = local_380 + 1;
                                if (local_380[1] == 0x6c) goto LAB_1407ebea9;
                                cVar27 = cVar27 + '\x01';
                            }
                            else if (uVar16 != 0x77) goto LAB_1407ebef4;
                            cVar31 = cVar31 + '\x01';
                        }
                    }
                }
            }
            local_380 = puVar25;
            uVar29 = local_35c;
            uVar28 = (ulonglong)local_370;
        } while (cVar15 == '\0');
        uVar34 = (ulonglong)local_358;
        if (cVar22 == '\0') {
            local_348 = local_338;
            local_370 = *local_338;
            local_338 = local_338 + 1;
        }
        else {
            local_370 = (longlong *)0x0;
        }
        cVar15 = '\0';
        if (cVar31 == '\0') {
            cVar31 = (-((*local_380 - 0x43 & 0xffef) != 0) & 2U) - 1;
        }
        uVar21 = *local_380 | 0x20;
        local_3c4 = cVar22;
        local_3c3 = cVar27;
        local_3a4 = iVar9;
        local_358 = uVar21;
        if (uVar21 != 0x6e) {
            if ((uVar21 == 99) || (uVar21 == 0x7b)) {
                local_3c8 = local_3c8 + 1;
                local_3b0 = local_3c8;
                uVar6 = FUN_1407f3700();
            }
            else {
                uVar6 = _whiteout();
                local_3c8 = local_3b0;
            }
            uVar16 = (uint)uVar6;
            local_3b8 = (uint)uVar6;
            pvVar14 = local_390;
            iVar10 = local_3a8;
            iVar11 = local_3a0;
            iVar8 = local_3b4;
            if (uVar6 == 0xffff) goto LAB_1407ece7f;
        }
        lVar20 = local_388;
        uVar16 = local_3b8;
        uVar7 = (ushort)local_3b8;
        if ((iVar11 != 0) && (param_1 = local_388, iVar8 == 0)) goto joined_r0x0001407ece3b;
        if (((local_3c4 == '\0') && ((uVar21 - 99 & 0xffffffe7) == 0)) && (uVar21 != 0x6b)) {
            local_370 = *local_348;
            pplVar23 = local_348 + 1;
            uVar28 = (ulonglong)*(uint *)pplVar23;
            local_338 = local_348 + 2;
            local_348 = pplVar23;
            if (uVar28 == 0) {
                if (cVar31 < '\x01') {
                    *(undefined *)local_370 = 0;
                }
                else {
                    *(ushort *)local_370 = 0;
                }
                piVar12 = _errno();
                *piVar12 = 0xc;
                pvVar14 = local_390;
                iVar10 = local_3a8;
                LAB_1407ece7f:
                if (local_340 == 1) {
                    free(pvVar14);
                }
                if (local_360 == 1) {
                    free(local_368);
                }
                if (((short)uVar16 != -1) && (iVar10 == 1)) {
                    piVar12 = _errno();
                    *piVar12 = 0x16;
                    FUN_1407dc370();
                }
                goto LAB_1407ecedf;
            }
        }
        puVar25 = local_380;
        iVar33 = local_3a4;
        iVar9 = local_3c8;
        if (uVar21 < 0x70) {
            if (uVar21 == 0x6f) {
                LAB_1407eca19:
                iVar30 = local_394;
                if (uVar7 == 0x2d) {
                    local_3ac = '\x01';
                }
                else {
                    iVar10 = local_3b4;
                    if (uVar7 != 0x2b) goto LAB_1407eca98;
                }
                local_3b4 = iVar8 + -1;
                if ((local_3b4 == 0) && (iVar11 != 0)) {
                    cVar15 = '\x01';
                    iVar10 = local_3b4;
                }
                else {
                    iVar9 = local_3c8 + 1;
                    local_3c8 = iVar9;
                    local_3b0 = iVar9;
                    uVar6 = FUN_1407f3700();
                    local_3b8 = (uint)uVar6;
                    iVar30 = local_394;
                    iVar10 = local_3b4;
                    cVar15 = '\0';
                }
                goto LAB_1407eca98;
            }
            if (uVar21 == 99) {
                if (iVar11 == 0) {
                    local_3b4 = iVar8 + 1;
                    local_3a0 = 1;
                }
                if ('\0' < cVar31) {
                    uVar29 = 1;
                }
                goto LAB_1407ec81c;
            }
            if (uVar21 == 100) goto LAB_1407eca19;
            if (uVar21 < 0x65) {
                LAB_1407ec53b:
                if (*local_380 == uVar7) {
                    local_3bc = local_3bc + -1;
                    if (local_3c4 == '\0') {
                        local_338 = local_348;
                    }
                    goto LAB_1407ec4cb;
                }
                if (uVar7 != 0xffff) {
                    FUN_1407f38f8(local_3b8 & 0xffff,local_388);
                }
                pvVar14 = local_390;
                iVar10 = 1;
                goto LAB_1407ece7f;
            }
            if (0x67 < uVar21) {
                if (uVar21 == 0x69) {
                    uVar21 = 100;
                    goto LAB_1407ec0cf;
                }
                if (uVar21 != 0x6e) goto LAB_1407ec53b;
                iVar11 = local_3c8;
                if (local_3c4 != '\0') goto LAB_1407ec4cb;
                goto LAB_1407ec0b1;
            }
            lVar17 = 0;
            if (uVar7 == 0x2d) {
                lVar17 = 1;
                *local_368 = 0x2d;
                LAB_1407ec10c:
                iVar8 = local_3b4 + -1;
                iVar9 = local_3c8 + 1;
                uVar6 = FUN_1407f3700();
                local_3b8 = (uint)uVar6;
                iVar11 = local_3a0;
            }
            else {
                iVar8 = local_3b4;
                if (uVar7 == 0x2b) goto LAB_1407ec10c;
            }
            if (iVar11 == 0) {
                iVar8 = -1;
            }
            iVar11 = iVar8;
            uVar16 = local_3b8;
            if ((local_3b8 & 0xff00) == 0) {
                do {
                    uVar16 = local_3b8;
                    cVar31 = (char)local_3b8;
                    iVar10 = isdigit(local_3b8 & 0xff);
                    iVar11 = iVar8;
                    if ((iVar10 == 0) || (iVar11 = iVar8 + -1, iVar8 == 0)) break;
                    local_394 = local_394 + 1;
                    local_368[lVar17] = (short)cVar31;
                    local_3d8 = &local_360;
                    lVar17 = lVar17 + 1;
                    iVar8 = FUN_1407ebb9c(lVar17,&local_350);
                    pvVar14 = local_390;
                    iVar10 = local_3a8;
                    if (iVar8 == 0) goto LAB_1407ece7f;
                    iVar9 = iVar9 + 1;
                    uVar6 = FUN_1407f3700();
                    uVar16 = (uint)uVar6;
                    local_3b8 = (uint)uVar6;
                    iVar8 = iVar11;
                } while ((uVar6 & 0xff00) == 0);
            }
            uVar6 = **(ushort **)(*(longlong *)(local_330[0] + 0xf0) + 0x58);
            iVar8 = iVar11;
            if (((uint)uVar6 == (int)(char)uVar16) && (iVar33 = iVar11 + -1, iVar8 = iVar33, iVar11 != 0))
            {
                uVar7 = FUN_1407f3700(lVar20);
                uVar16 = (uint)uVar7;
                local_368[lVar17] = uVar6;
                local_3d8 = &local_360;
                lVar17 = lVar17 + 1;
                local_3b8 = (uint)uVar7;
                iVar11 = FUN_1407ebb9c(lVar17,&local_350);
                pvVar14 = local_390;
                iVar10 = local_3a8;
                if (iVar11 == 0) goto LAB_1407ece7f;
                while( true ) {
                    iVar9 = iVar9 + 1;
                    iVar8 = iVar33;
                    if ((((uVar16 & 0xff00) != 0) || (iVar11 = isdigit(uVar16 & 0xff), iVar11 == 0)) ||
                        (iVar8 = iVar33 + -1, iVar33 == 0)) break;
                    local_394 = local_394 + 1;
                    local_368[lVar17] = (short)uVar16;
                    local_3d8 = &local_360;
                    lVar17 = lVar17 + 1;
                    iVar11 = FUN_1407ebb9c(lVar17,&local_350);
                    pvVar14 = local_390;
                    iVar10 = local_3a8;
                    if (iVar11 == 0) goto LAB_1407ece7f;
                    uVar6 = FUN_1407f3700();
                    uVar16 = (uint)uVar6;
                    local_3b8 = (uint)uVar6;
                    iVar33 = iVar8;
                }
            }
            iVar11 = local_394;
            lVar18 = lVar17;
            if (((local_394 != 0) && (((short)uVar16 - 0x45U & 0xffdf) == 0)) &&
                (iVar33 = iVar8 + -1, iVar8 != 0)) {
                local_368[lVar17] = 0x65;
                lVar18 = lVar17 + 1;
                local_3d8 = &local_360;
                iVar8 = FUN_1407ebb9c(lVar18,&local_350);
                pvVar14 = local_390;
                iVar10 = local_3a8;
                if (iVar8 == 0) goto LAB_1407ece7f;
                uVar6 = FUN_1407f3700(lVar20);
                uVar16 = (uint)uVar6;
                local_3b8 = (uint)uVar6;
                iVar8 = iVar9 + 1;
                if (uVar6 == 0x2d) {
                    local_368[lVar18] = 0x2d;
                    local_3d8 = &local_360;
                    lVar18 = lVar17 + 2;
                    iVar30 = FUN_1407ebb9c(lVar18,&local_350);
                    pvVar14 = local_390;
                    iVar10 = local_3a8;
                    if (iVar30 == 0) goto LAB_1407ece7f;
                    LAB_1407ec36e:
                    iVar30 = 0;
                    if (iVar33 != 0) {
                        iVar8 = iVar9 + 2;
                        goto LAB_1407ec3da;
                    }
                }
                else {
                    iVar30 = iVar33;
                    if (uVar6 == 0x2b) goto LAB_1407ec36e;
                }
                while (((iVar9 = iVar8, (uVar16 & 0xff00) == 0 &&
                                        (iVar8 = isdigit(uVar16 & 0xff), iVar8 != 0)) && (iVar30 != 0))) {
                    iVar11 = iVar11 + 1;
                    local_368[lVar18] = (short)uVar16;
                    lVar18 = lVar18 + 1;
                    local_3d8 = &local_360;
                    iVar8 = FUN_1407ebb9c(lVar18,&local_350);
                    pvVar14 = local_390;
                    iVar10 = local_3a8;
                    if (iVar8 == 0) goto LAB_1407ece7f;
                    iVar8 = iVar9 + 1;
                    iVar33 = iVar30;
                    LAB_1407ec3da:
                    uVar6 = FUN_1407f3700();
                    uVar16 = (uint)uVar6;
                    local_3b8 = (uint)uVar6;
                    iVar30 = iVar33 + -1;
                }
            }
            iVar9 = iVar9 + -1;
            local_3c8 = iVar9;
            local_3b0 = iVar9;
            if ((short)uVar16 != -1) {
                FUN_1407f38f8(uVar16 & 0xffff,lVar20);
            }
            puVar4 = local_368;
            pvVar14 = local_390;
            iVar10 = local_3a8;
            if (iVar11 == 0) goto LAB_1407ece7f;
            if (local_3c4 != '\0') goto LAB_1407ec4cb;
            local_3c0 = local_3c0 + 1;
            local_368[lVar18] = 0;
            lVar20 = local_350 * 2;
            _Memory = (void *)FUN_1407e2c30();
            pvVar14 = local_390;
            iVar10 = 0;
            if (_Memory == (void *)0x0) goto LAB_1407ece7f;
            local_3d8 = (int *)(lVar20 + 1);
            iVar11 = FUN_1407f3f18(0,_Memory,lVar20 + 2,puVar4);
            if ((iVar11 == 0x16) || (iVar11 == 0x22)) {
                local_3d8 = (int *)0x0;
                FUN_1407dc390(0,0,0,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
            }
            iVar11 = (int)local_3c3;
            pcVar13 = (code *)DecodePointer(PTR_LAB_140c0fa58);
            (*pcVar13)(iVar11 + -1,local_370);
            free(_Memory);
        }
        else {
            if (uVar21 == 0x70) {
                local_3c3 = '\x01';
                local_378 = 0;
                iVar33 = local_3a4 + 1;
                goto LAB_1407eca19;
            }
            if (uVar21 == 0x73) {
                uVar29 = uVar29 & 0xff;
                if ('\0' < cVar31) {
                    uVar29 = 1;
                }
                goto LAB_1407ec81c;
            }
            if (uVar21 == 0x75) goto LAB_1407eca19;
            if (uVar21 != 0x78) {
                if (uVar21 != 0x7b) goto LAB_1407ec53b;
                uVar29 = uVar29 & 0xff;
                if ('\0' < cVar31) {
                    uVar29 = 1;
                }
                puVar25 = local_380 + 1;
                if (local_380[1] == 0x5e) {
                    local_39c = 0xff;
                    puVar25 = local_380 + 2;
                }
                local_380 = puVar25;
                local_35c = uVar29;
                if (local_390 == (void *)0x0) {
                    pvVar14 = (void *)FUN_1407e2c30();
                    local_390 = pvVar14;
                    if (pvVar14 != (void *)0x0) {
                        local_340 = 1;
                        goto LAB_1407ec5c8;
                    }
                }
                else {
                    LAB_1407ec5c8:
                    pvVar14 = local_390;
                    FUN_1407e4830(local_390,0);
                    puVar25 = local_380;
                    if (*local_380 == 0x5d) {
                        uVar34 = 0x5d;
                        puVar25 = local_380 + 1;
                        *(undefined *)((longlong)pvVar14 + 0xb) = 0x20;
                    }
                    uVar6 = *puVar25;
                    while (uVar6 != 0x5d) {
                        puVar26 = puVar25 + 1;
                        if (((uVar6 == 0x2d) && ((ushort)uVar34 != 0)) && (uVar2 = *puVar26, uVar2 != 0x5d)) {
                            puVar26 = puVar25 + 2;
                            if ((ushort)uVar34 < uVar2) {
                                uVar24 = (ulonglong)uVar2;
                            }
                            else {
                                uVar24 = uVar34 & 0xffff;
                                uVar34 = (ulonglong)uVar2;
                            }
                            while( true ) {
                                uVar29 = (uint)uVar34 & 0xffff;
                                if ((uint)uVar24 <= uVar29) break;
                                pbVar1 = (byte *)(((uVar34 & 0xffff) >> 3) + (longlong)pvVar14);
                                *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar29 & 7);
                                uVar34 = (ulonglong)(ushort)((short)uVar34 + 1);
                            }
                            uVar34 = 0;
                            pbVar1 = (byte *)((uVar24 >> 3) + (longlong)pvVar14);
                            *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar24 & 7);
                        }
                        else {
                            uVar34 = (ulonglong)uVar6;
                            pbVar1 = (byte *)((ulonglong)(uVar6 >> 3) + (longlong)pvVar14);
                            *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar6 & 7);
                        }
                        uVar21 = local_358;
                        puVar25 = puVar26;
                        uVar29 = local_35c;
                        uVar6 = *puVar26;
                    }
                    if (*puVar25 != 0) {
                        LAB_1407ec81c:
                        local_380 = puVar25;
                        plVar19 = local_370;
                        iVar9 = local_3c8 + -1;
                        local_3c8 = iVar9;
                        local_3b0 = iVar9;
                        if (uVar7 != 0xffff) {
                            FUN_1407f38f8(uVar16 & 0xffff,local_388);
                        }
                        bVar3 = local_39c;
                        if (uVar21 != 99) {
                            uVar28 = uVar28 - 1;
                        }
                        do {
                            cVar31 = (char)uVar29;
                            if ((local_3a0 != 0) &&
                                (iVar11 = local_3b4 + -1, bVar35 = local_3b4 == 0, local_3b4 = iVar11, bVar35))
                                goto LAB_1407ec9b7;
                            iVar11 = iVar9 + 1;
                            local_3c8 = iVar11;
                            local_3b0 = iVar11;
                            uVar6 = FUN_1407f3700();
                            uVar16 = (uint)uVar6;
                            local_3b8 = (uint)uVar6;
                            if (uVar6 == 0xffff) goto LAB_1407ec978;
                            if (uVar21 != 99) {
                                if (uVar21 == 0x73) {
                                    if ((ushort)(uVar6 - 9) < 5) goto LAB_1407ec978;
                                    if (uVar6 != 0x20) goto LAB_1407ec8f7;
                                }
                                if ((uVar21 != 0x7b) ||
                                    (((uint)(int)(char)(*(byte *)((ulonglong)(uVar6 >> 3) + (longlong)local_390) ^
                                                        bVar3) >> (uVar6 & 7) & 1) == 0)) goto LAB_1407ec978;
                            }
                            LAB_1407ec8f7:
                            iVar9 = iVar11;
                            if (local_3c4 == '\0') {
                                if (uVar28 == 0) {
                                    LAB_1407ece07:
                                    piVar12 = _errno();
                                    *piVar12 = 0xc;
                                    pvVar14 = local_390;
                                    iVar10 = 0;
                                    if (cVar31 == '\0') {
                                        *(undefined *)plVar19 = 0;
                                    }
                                    else {
                                        *(ushort *)plVar19 = 0;
                                    }
                                    goto LAB_1407ece7f;
                                }
                                if (cVar31 == '\0') {
                                    local_35c = 0;
                                    iVar11 = FUN_1407f2338();
                                    if (iVar11 == 0x22) goto LAB_1407ece07;
                                    if (0 < (int)local_35c) {
                                        local_370 = (longlong *)((longlong)local_370 + (longlong)(int)local_35c);
                                        uVar28 = uVar28 - (longlong)(int)local_35c;
                                    }
                                }
                                else {
                                    *(ushort *)local_370 = uVar6;
                                    local_370 = (longlong *)((longlong)local_370 + 2);
                                    uVar28 = uVar28 - 1;
                                }
                            }
                            else {
                                plVar19 = (longlong *)((longlong)plVar19 + 2);
                            }
                        } while( true );
                    }
                }
                iVar10 = 0;
                goto LAB_1407ece7f;
            }
            LAB_1407ec0cf:
            iVar32 = local_3c8;
            if (uVar7 == 0x2d) {
                local_3ac = '\x01';
                LAB_1407ec6de:
                local_3b4 = iVar8 + -1;
                if ((local_3b4 == 0) && (iVar11 != 0)) {
                    cVar15 = '\x01';
                }
                else {
                    iVar32 = local_3c8 + 1;
                    local_3c8 = iVar32;
                    local_3b0 = iVar32;
                    uVar6 = FUN_1407f3700();
                    local_3b8 = (uint)uVar6;
                }
            }
            else if (uVar7 == 0x2b) goto LAB_1407ec6de;
            iVar33 = local_3a4;
            iVar30 = local_394;
            iVar10 = local_3b4;
            iVar9 = local_3c8;
            if ((short)local_3b8 == 0x30) {
                local_3c8 = iVar32 + 1;
                local_3b0 = local_3c8;
                uVar6 = FUN_1407f3700(lVar20);
                local_3b8 = (uint)uVar6;
                if ((uVar6 - 0x58 & 0xffdf) == 0) {
                    local_3c8 = iVar32 + 2;
                    local_3b0 = local_3c8;
                    uVar6 = FUN_1407f3700();
                    local_3b8 = (uint)uVar6;
                    if ((local_3a0 != 0) && (local_3b4 = local_3b4 + -2, local_3b4 < 1)) {
                        cVar15 = cVar15 + '\x01';
                    }
                    uVar21 = 0x78;
                    iVar33 = local_3a4;
                    iVar30 = local_394;
                    iVar10 = local_3b4;
                    iVar9 = local_3c8;
                }
                else {
                    iVar30 = 1;
                    if (uVar21 == 0x78) {
                        local_3c8 = iVar32;
                        local_3b0 = iVar32;
                        if (uVar6 != 0xffff) {
                            FUN_1407f38f8(uVar6,lVar20);
                        }
                        local_3b8 = 0x30;
                        iVar33 = local_3a4;
                        iVar10 = local_3b4;
                        iVar9 = local_3c8;
                    }
                    else {
                        iVar10 = local_3b4;
                        if ((local_3a0 != 0) && (iVar10 = local_3b4 + -1, iVar10 == 0)) {
                            cVar15 = cVar15 + '\x01';
                        }
                        uVar21 = 0x6f;
                        iVar33 = local_3a4;
                        iVar9 = local_3c8;
                    }
                }
            }
            LAB_1407eca98:
            uVar16 = local_3b8;
            if (iVar33 == 0) {
                iVar11 = local_398;
                if (cVar15 == '\0') {
                    while (uVar16 = local_3b8, uVar6 = (ushort)local_3b8, (uVar21 - 0x70 & 0xfffffff7) != 0) {
                        if (((local_3b8 & 0xff00) != 0) || (iVar8 = isdigit(local_3b8 & 0xff), iVar8 == 0))
                            goto LAB_1407ecca0;
                        if (uVar21 == 0x6f) {
                            if (0x37 < uVar6) goto LAB_1407ecca0;
                            local_398 = iVar11 << 3;
                        }
                        else {
                            local_398 = iVar11 * 10;
                        }
                        LAB_1407ecc5c:
                        iVar11 = local_398 + -0x30 + (uVar16 & 0xffff);
                        iVar30 = iVar30 + 1;
                        local_398 = iVar11;
                        if ((local_3a0 != 0) && (iVar10 = iVar10 + -1, iVar10 == 0)) goto LAB_1407eccc8;
                        iVar9 = iVar9 + 1;
                        local_3c8 = iVar9;
                        local_3b0 = iVar9;
                        uVar6 = FUN_1407f3700();
                        local_3b8 = (uint)uVar6;
                    }
                    if ((local_3b8 & 0xff00) == 0) {
                        uVar29 = local_3b8 & 0xff;
                        iVar11 = isxdigit(uVar29);
                        if (iVar11 != 0) {
                            local_398 = local_398 << 4;
                            iVar11 = isdigit(uVar29);
                            if (iVar11 == 0) {
                                local_3b8 = uVar16 & 0xffff0000 | (uint)(ushort)((uVar6 & 0xffdf) - 7);
                                uVar16 = local_3b8;
                            }
                            goto LAB_1407ecc5c;
                        }
                    }
                    LAB_1407ecca0:
                    iVar9 = iVar9 + -1;
                    local_3c8 = iVar9;
                    local_3b0 = iVar9;
                    if (uVar6 != 0xffff) {
                        FUN_1407f38f8(uVar16 & 0xffff,local_388);
                    }
                }
                LAB_1407eccc8:
                if (local_3ac != '\0') {
                    local_398 = -local_398;
                }
            }
            else {
                lVar20 = local_378;
                if (cVar15 == '\0') {
                    while (uVar16 = local_3b8, uVar6 = (ushort)local_3b8, (uVar21 - 0x70 & 0xfffffff7) != 0) {
                        if (((local_3b8 & 0xff00) != 0) || (iVar11 = isdigit(local_3b8 & 0xff), iVar11 == 0))
                            goto LAB_1407ecb7d;
                        if (uVar21 == 0x6f) {
                            if (0x37 < uVar6) goto LAB_1407ecb7d;
                            local_378 = lVar20 << 3;
                        }
                        else {
                            local_378 = lVar20 * 10;
                        }
                        LAB_1407ecb36:
                        iVar30 = iVar30 + 1;
                        lVar20 = local_378 + (int)((uVar16 & 0xffff) - 0x30);
                        local_378 = lVar20;
                        if ((local_3a0 != 0) && (iVar10 = iVar10 + -1, iVar10 == 0)) goto LAB_1407ecba5;
                        iVar9 = iVar9 + 1;
                        local_3c8 = iVar9;
                        local_3b0 = iVar9;
                        uVar6 = FUN_1407f3700();
                        local_3b8 = (uint)uVar6;
                    }
                    if ((local_3b8 & 0xff00) == 0) {
                        uVar29 = local_3b8 & 0xff;
                        iVar11 = isxdigit(uVar29);
                        if (iVar11 != 0) {
                            local_378 = local_378 << 4;
                            iVar11 = isdigit(uVar29);
                            if (iVar11 == 0) {
                                local_3b8 = uVar16 & 0xffff0000 | (uint)(ushort)((uVar6 & 0xffdf) - 7);
                                uVar16 = local_3b8;
                            }
                            goto LAB_1407ecb36;
                        }
                    }
                    LAB_1407ecb7d:
                    iVar9 = iVar9 + -1;
                    local_3c8 = iVar9;
                    local_3b0 = iVar9;
                    if (uVar6 != 0xffff) {
                        FUN_1407f38f8(uVar16 & 0xffff,local_388);
                    }
                }
                LAB_1407ecba5:
                if (local_3ac != '\0') {
                    local_378 = -local_378;
                }
            }
            if (uVar21 == 0x46) {
                iVar30 = 0;
            }
            pvVar14 = local_390;
            iVar10 = local_3a8;
            if (iVar30 == 0) goto LAB_1407ece7f;
            if (local_3c4 == '\0') {
                local_3c0 = local_3c0 + 1;
                iVar11 = local_398;
                LAB_1407ec0b1:
                if (iVar33 == 0) {
                    if (local_3c3 == '\0') {
                        *(ushort *)local_370 = (ushort)iVar11;
                    }
                    else {
                        *(int *)local_370 = iVar11;
                    }
                }
                else {
                    *local_370 = local_378;
                }
            }
        }
        LAB_1407ec4cb:
        local_3bc = local_3bc + '\x01';
        local_380 = local_380 + 1;
        param_1 = local_388;
        LAB_1407ecd78:
        if (((short)uVar16 == -1) &&
            ((pvVar14 = local_390, iVar10 = local_3a8, *local_380 != 0x25 || (local_380[1] != 0x6e))))
            goto LAB_1407ece7f;
        LAB_1407ecd8f:
        pvVar14 = local_390;
        param_2 = local_380;
        iVar10 = local_3a8;
        if (*local_380 == 0) goto LAB_1407ece7f;
        goto LAB_1407ebd0b;
    }
    LAB_1407ecedf:
    if (local_318 != '\0') {
        *(uint *)(local_320 + 200) = *(uint *)(local_320 + 200) & 0xfffffffd;
    }
    LAB_1407ecef1:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack1016);
    return;
    LAB_1407ec978:
    local_3c8 = iVar9;
    local_3b0 = iVar9;
    if (uVar6 != 0xffff) {
        FUN_1407f38f8();
    }
    LAB_1407ec9b7:
    pvVar14 = local_390;
    iVar10 = local_3a8;
    if (plVar19 == local_370) goto LAB_1407ece7f;
    if ((local_3c4 == '\0') && (local_3c0 = local_3c0 + 1, uVar21 != 99)) {
        if (cVar31 == '\0') {
            *(undefined *)local_370 = 0;
        }
        else {
            *(ushort *)local_370 = 0;
        }
    }
    goto LAB_1407ec4cb;
}



ulonglong FUN_1407ecf30(localeinfo_struct *param_1,ushort *param_2,ushort **param_3,uint param_4,
                        uint param_5)

{
    undefined auVar1 [16];
    int iVar2;
    uint uVar3;
    int *piVar4;
    ulonglong uVar5;
    ushort *puVar6;
    ushort uVar7;
    ulonglong uVar8;
    _LocaleUpdate local_58 [16];
    longlong local_48;
    char local_40;

    _LocaleUpdate::_LocaleUpdate(local_58,param_1);
    if (param_3 != (ushort **)0x0) {
        *param_3 = param_2;
    }
    if ((param_2 == (ushort *)0x0) || ((param_4 != 0 && (0x22 < param_4 - 2)))) {
        piVar4 = _errno();
        *piVar4 = 0x16;
        FUN_1407dc370();
    }
    else {
        uVar7 = *param_2;
        uVar8 = 0;
        puVar6 = param_2 + 1;
        while( true ) {
            iVar2 = FUN_1407ed1c8(uVar7);
            if (iVar2 == 0) break;
            uVar7 = *puVar6;
            puVar6 = puVar6 + 1;
        }
        if (uVar7 == 0x2d) {
            param_5 = param_5 | 2;
            LAB_1407ecfca:
            uVar7 = *puVar6;
            puVar6 = puVar6 + 1;
        }
        else if (uVar7 == 0x2b) goto LAB_1407ecfca;
        if ((param_4 == 0) || (param_4 - 2 < 0x23)) {
            if (param_4 == 0) {
                iVar2 = _wchartodigit(uVar7);
                if (iVar2 != 0) {
                    param_4 = 10;
                    goto LAB_1407ed04f;
                }
                if ((*puVar6 - 0x58 & 0xffdf) != 0) {
                    param_4 = 8;
                    goto LAB_1407ed04f;
                }
                param_4 = 0x10;
            }
            if (param_4 == 0x10) {
                iVar2 = _wchartodigit(uVar7);
                if ((iVar2 == 0) && ((*puVar6 - 0x58 & 0xffdf) == 0)) {
                    uVar7 = puVar6[1];
                    puVar6 = puVar6 + 2;
                }
            }
            LAB_1407ed04f:
            auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff);
            uVar5 = SUB168(auVar1 / ZEXT816((ulonglong)(longlong)(int)param_4),0);
            do {
                uVar3 = _wchartodigit();
                if (uVar3 == 0xffffffff) {
                    if ((0x19 < (ushort)(uVar7 - 0x41)) && (0x19 < (ushort)(uVar7 - 0x61)))
                        goto LAB_1407ed0c4;
                    uVar3 = (uint)uVar7;
                    if ((ushort)(uVar7 - 0x61) < 0x1a) {
                        uVar3 = uVar7 - 0x20;
                    }
                    uVar3 = uVar3 - 0x37;
                }
                if (param_4 <= uVar3) goto LAB_1407ed0c4;
                if ((uVar8 < uVar5) ||
                    ((uVar8 == uVar5 &&
                      ((ulonglong)uVar3 <= SUB168(auVar1 % ZEXT816((ulonglong)(longlong)(int)param_4),0))))) {
                    uVar8 = (ulonglong)uVar3 + (longlong)(int)param_4 * uVar8;
                    param_5 = param_5 | 8;
                }
                else {
                    param_5 = param_5 | 0xc;
                    if (param_3 == (ushort **)0x0) goto LAB_1407ed0c4;
                }
                uVar7 = *puVar6;
                puVar6 = puVar6 + 1;
            } while( true );
        }
        if (param_3 != (ushort **)0x0) {
            *param_3 = param_2;
        }
    }
    uVar8 = 0;
    LAB_1407ed167:
    if (local_40 != '\0') {
        *(uint *)(local_48 + 200) = *(uint *)(local_48 + 200) & 0xfffffffd;
    }
    return uVar8;
    LAB_1407ed0c4:
    puVar6 = puVar6 + -1;
    if ((param_5 & 8) == 0) {
        if (param_3 != (ushort **)0x0) {
            puVar6 = param_2;
        }
        uVar8 = 0;
    }
    else if (((param_5 & 4) != 0) ||
             (((param_5 & 1) == 0 &&
               ((((param_5 & 2) != 0 && (0x8000000000000000 < uVar8)) ||
                 (((param_5 & 2) == 0 && (0x7fffffffffffffff < uVar8)))))))) {
        piVar4 = _errno();
        *piVar4 = 0x22;
        if ((param_5 & 1) == 0) {
            uVar8 = (ulonglong)((param_5 & 2) != 0) + 0x7fffffffffffffff;
        }
        else {
            uVar8 = 0xffffffffffffffff;
        }
    }
    if (param_3 != (ushort **)0x0) {
        *param_3 = puVar6;
    }
    if ((param_5 & 2) != 0) {
        uVar8 = -uVar8;
    }
    goto LAB_1407ed167;
}



void FUN_1407ed198(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    undefined **ppuVar1;

    if (DAT_140c5f560 == 0) {
        ppuVar1 = &PTR_DAT_140c10448;
    }
    else {
        ppuVar1 = (undefined **)0x0;
    }
    FUN_1407ecf30(ppuVar1,param_1,param_2,param_3,0);
    return;
}



ushort FUN_1407ed1c8(WCHAR param_1,ushort param_2)

{
    ushort uVar1;
    BOOL BVar2;
    WCHAR local_res8 [8];
    ushort local_res18 [8];

    if (param_1 == L'\xffff') {
        uVar1 = 0;
    }
    else {
        if ((ushort)param_1 < 0x100) {
            uVar1 = *(ushort *)(PTR_DAT_140c10468 + (ulonglong)(ushort)param_1 * 2);
        }
        else {
            local_res8[0] = param_1;
            BVar2 = GetStringTypeW(1,local_res8,1,local_res18);
            uVar1 = 0;
            if (BVar2 != 0) {
                uVar1 = local_res18[0];
            }
        }
        uVar1 = uVar1 & param_2;
    }
    return uVar1;
}



void FUN_1407ed230(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
    if (0 < param_4) {
        param_4 = FUN_1407e6cbc(param_3,(longlong)param_4);
    }
    FUN_1407e87c8(param_1,param_2,param_3,param_4);
    return;
}



void FUN_1407ed27c(uint *param_1,longlong param_2,undefined8 param_3)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    undefined auStack136 [32];
    undefined4 local_68;
    undefined4 local_60;
    undefined4 local_58;
    undefined8 local_50;
    undefined4 local_48;
    undefined4 uStack68;
    longlong local_40;
    undefined local_38 [16];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    uVar3 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = param_3;
    uVar1 = FUN_1407f3f38(local_38,&local_40,param_2,0);
    if ((uVar1 & 4) == 0) {
        iVar2 = FUN_1407f234c(local_38,&local_48);
        if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
            uVar3 = 0x80;
        }
        if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
            uVar3 = uVar3 | 0x100;
        }
    }
    else {
        local_48 = 0;
        uStack68 = 0;
        uVar3 = 0x200;
    }
    *param_1 = uVar3;
    param_1[1] = (uint)(local_40 - param_2 >> 1);
    *(ulonglong *)(param_1 + 4) = CONCAT44(uStack68,local_48);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack136);
    return;
}



void FUN_1407ee870(byte param_1,byte **param_2,int *param_3)

{
    byte **ppbVar1;
    uint uVar2;

    if (((*(byte *)(param_2 + 3) & 0x40) == 0) || (param_2[2] != (byte *)0x0)) {
        ppbVar1 = param_2 + 1;
        *(int *)ppbVar1 = *(int *)ppbVar1 + -1;
        if (*(int *)ppbVar1 < 0) {
            uVar2 = FUN_1407e88ec((int)(char)param_1);
        }
        else {
            **param_2 = param_1;
            *param_2 = *param_2 + 1;
            uVar2 = (uint)param_1;
        }
        if (uVar2 == 0xffffffff) {
            *param_3 = -1;
        }
        else {
            *param_3 = *param_3 + 1;
        }
    }
    else {
        *param_3 = *param_3 + 1;
    }
    return;
}



void FUN_1407ee8b8(undefined param_1,int param_2,undefined8 param_3,int *param_4)

{
    if (0 < param_2) {
        do {
            param_2 = param_2 + -1;
            FUN_1407ee870(param_1,param_3,param_4);
            if (*param_4 == -1) {
                return;
            }
        } while (0 < param_2);
    }
    return;
}



// Library Function - Single Match
//  _getstream
//
// Library: Visual Studio 2012 Release

FILE * _getstream(void)

{
    int iVar1;
    longlong lVar2;
    FILE *_File;
    longlong lVar3;
    int _Index;

    _lock(1);
    _Index = 0;
    do {
        _File = (FILE *)0x0;
        if (DAT_140dc5330 <= _Index) {
            LAB_1407eea00:
            if (_File != (FILE *)0x0) {
                _File->_flag = _File->_flag & 0x8000;
                _File->_cnt = 0;
                _File->_base = (char *)0x0;
                _File->_ptr = (char *)0x0;
                _File->_tmpfname = (char *)0x0;
                _File->_file = -1;
            }
            FUN_1407e2528(1);
            return _File;
        }
        lVar3 = (longlong)_Index;
        lVar2 = *(longlong *)(DAT_140dc5328 + lVar3 * 8);
        if (lVar2 == 0) {
            lVar2 = FUN_1407e2c30(0x58);
            lVar3 = (longlong)_Index;
            *(longlong *)(DAT_140dc5328 + lVar3 * 8) = lVar2;
            _File = (FILE *)0x0;
            if (lVar2 != 0) {
                InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(lVar2 + 0x30),4000);
                EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_140dc5328 + lVar3 * 8) + 0x30));
                _File = *(FILE **)(DAT_140dc5328 + lVar3 * 8);
                _File->_flag = 0;
            }
            goto LAB_1407eea00;
        }
        if (((*(byte *)(lVar2 + 0x18) & 0x83) == 0) && ((*(uint *)(lVar2 + 0x18) & 0x8000) == 0)) {
            if ((_Index - 3U < 0x11) && (iVar1 = FUN_1407e240c(), iVar1 == 0)) goto LAB_1407eea00;
            _lock_file2(_Index,*(void **)(DAT_140dc5328 + lVar3 * 8));
            _File = *(FILE **)(DAT_140dc5328 + lVar3 * 8);
            if ((*(byte *)&_File->_flag & 0x83) == 0) goto LAB_1407eea00;
            _unlock_file2(_Index,_File);
        }
        _Index = _Index + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1407eea40(undefined8 param_1,short *param_2,undefined4 param_3,undefined8 *param_4)

{
    short sVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    ushort uVar5;
    int iVar6;
    int *piVar7;
    ushort *puVar8;
    ushort *puVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    undefined4 local_res10 [2];

    uVar14 = 0;
    bVar3 = false;
    sVar1 = *param_2;
    while (sVar1 == 0x20) {
        param_2 = param_2 + 1;
        sVar1 = *param_2;
    }
    sVar1 = *param_2;
    if (sVar1 == 0x61) {
        uVar11 = 0x109;
        LAB_1407eead2:
        uVar10 = DAT_140c60870 | 2;
    }
    else {
        if (sVar1 != 0x72) {
            if (sVar1 != 0x77) goto LAB_1407eeaa7;
            uVar11 = 0x301;
            goto LAB_1407eead2;
        }
        uVar10 = DAT_140c60870 | 1;
        uVar11 = uVar14;
    }
    puVar9 = (ushort *)(param_2 + 1);
    bVar2 = true;
    uVar5 = *puVar9;
    uVar12 = uVar14;
    uVar13 = uVar14;
    if (uVar5 != 0) {
        do {
            if (!bVar2) break;
            bVar4 = bVar2;
            if (uVar5 < 0x54) {
                if (uVar5 == 0x53) {
                    bVar4 = bVar3;
                    if (uVar13 == 0) {
                        uVar13 = 1;
                        uVar11 = uVar11 | 0x20;
                        bVar4 = bVar2;
                    }
                }
                else if (uVar5 != 0x20) {
                    if (uVar5 == 0x2b) {
                        bVar4 = bVar3;
                        if ((uVar11 & 2) == 0) {
                            uVar11 = uVar11 & 0xfffffffe | 2;
                            uVar10 = uVar10 & 0xfffffffc | 0x80;
                            bVar4 = bVar2;
                        }
                    }
                    else if (uVar5 == 0x2c) {
                        uVar14 = 1;
                        bVar4 = bVar3;
                    }
                    else if (uVar5 == 0x44) {
                        bVar4 = bVar3;
                        if ((uVar11 & 0x40) == 0) {
                            uVar11 = uVar11 | 0x40;
                            bVar4 = bVar2;
                        }
                    }
                    else if (uVar5 == 0x4e) {
                        uVar11 = uVar11 | 0x80;
                    }
                    else {
                        if (uVar5 != 0x52) goto LAB_1407eeaa7;
                        bVar4 = bVar3;
                        if (uVar13 == 0) {
                            uVar13 = 1;
                            uVar11 = uVar11 | 0x10;
                            bVar4 = bVar2;
                        }
                    }
                }
            }
            else if (uVar5 == 0x54) {
                bVar4 = bVar3;
                if ((uVar11 >> 0xc & 1) == 0) {
                    uVar11 = uVar11 | 0x1000;
                    bVar4 = bVar2;
                }
            }
            else if (uVar5 == 0x62) {
                bVar4 = bVar3;
                if ((uVar11 & 0xc000) == 0) {
                    uVar11 = uVar11 | 0x8000;
                    bVar4 = bVar2;
                }
            }
            else if (uVar5 == 99) {
                bVar4 = bVar3;
                if (uVar12 == 0) {
                    uVar12 = 1;
                    uVar10 = uVar10 | 0x4000;
                    bVar4 = bVar2;
                }
            }
            else if (uVar5 == 0x6e) {
                bVar4 = bVar3;
                if (uVar12 == 0) {
                    uVar12 = 1;
                    uVar10 = uVar10 & 0xffffbfff;
                    bVar4 = bVar2;
                }
            }
            else {
                if (uVar5 != 0x74) goto LAB_1407eeaa7;
                bVar4 = bVar3;
                if ((uVar11 & 0xc000) == 0) {
                    uVar11 = uVar11 | 0x4000;
                    bVar4 = bVar2;
                }
            }
            bVar2 = bVar4;
            puVar9 = puVar9 + 1;
            uVar5 = *puVar9;
        } while (uVar5 != 0);
        if (uVar14 != 0) {
            for (; *puVar9 == 0x20; puVar9 = puVar9 + 1) {
            }
            iVar6 = FUN_1407e6cdc(&DAT_1409639e0,puVar9,3);
            if (iVar6 != 0) goto LAB_1407eeaa7;
            for (puVar9 = puVar9 + 3; *puVar9 == 0x20; puVar9 = puVar9 + 1) {
            }
            if (*puVar9 != 0x3d) goto LAB_1407eeaa7;
            do {
                puVar8 = puVar9;
                puVar9 = puVar8 + 1;
            } while (*puVar9 == 0x20);
            iVar6 = FUN_1407f0d9c(puVar9,L"UTF-8",5);
            if (iVar6 == 0) {
                puVar9 = puVar8 + 6;
                uVar11 = uVar11 | 0x40000;
            }
            else {
                iVar6 = FUN_1407f0d9c(puVar9,L"UTF-16LE",8);
                if (iVar6 == 0) {
                    puVar9 = puVar8 + 9;
                    uVar11 = uVar11 | 0x20000;
                }
                else {
                    iVar6 = FUN_1407f0d9c(puVar9,L"UNICODE",7);
                    if (iVar6 != 0) goto LAB_1407eeaa7;
                    puVar9 = puVar8 + 8;
                    uVar11 = uVar11 | 0x10000;
                }
            }
        }
    }
    for (; *puVar9 == 0x20; puVar9 = puVar9 + 1) {
    }
    if (*puVar9 == 0) {
        iVar6 = FUN_1407f5234(local_res10,param_1,uVar11,param_3,0x180);
        if (iVar6 != 0) {
            return (undefined8 *)0x0;
        }
        _DAT_140c5f564 = _DAT_140c5f564 + 1;
        *(uint *)(param_4 + 3) = uVar10;
        *(undefined4 *)((longlong)param_4 + 0x1c) = local_res10[0];
        *(undefined4 *)(param_4 + 1) = 0;
        *param_4 = 0;
        param_4[2] = 0;
        param_4[5] = 0;
        return param_4;
    }
    LAB_1407eeaa7:
    piVar7 = _errno();
    *piVar7 = 0x16;
    FUN_1407dc370();
    return (undefined8 *)0x0;
}



void FUN_1407eed30(PVOID param_1,PVOID param_2)

{
    RtlUnwindEx(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0,(PCONTEXT)&stack0xfffffffffffffb28,
                (PUNWIND_HISTORY_TABLE)0x0);
    return;
}



void FUN_1407eed60(void)

{
    return;
}



void FUN_1407eed90(void)

{
    return;
}



undefined4 FUN_1407eed94(uint param_1)

{
    undefined4 uVar1;
    ulong *puVar2;
    int *piVar3;
    longlong lVar4;
    longlong lVar5;

    if (param_1 == 0xfffffffe) {
        puVar2 = __doserrno();
        *puVar2 = 0;
        piVar3 = _errno();
        *piVar3 = 9;
    }
    else {
        if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
            lVar4 = (longlong)(int)param_1 >> 5;
            lVar5 = (ulonglong)(param_1 & 0x1f) * 0x58;
            if ((*(byte *)((&DAT_140c60410)[lVar4] + 8 + lVar5) & 1) != 0) {
                FUN_1407f5268((longlong)(int)param_1 & 0xffffffff);
                if ((*(byte *)((&DAT_140c60410)[lVar4] + 8 + lVar5) & 1) == 0) {
                    piVar3 = _errno();
                    *piVar3 = 9;
                    uVar1 = 0xffffffff;
                }
                else {
                    uVar1 = FUN_1407eee58(param_1);
                }
                FUN_1407f56c8(param_1);
                return uVar1;
            }
        }
        puVar2 = __doserrno();
        *puVar2 = 0;
        piVar3 = _errno();
        *piVar3 = 9;
        FUN_1407dc370();
    }
    return 0xffffffff;
}



undefined8 FUN_1407eee58(uint param_1)

{
    BOOL BVar1;
    DWORD DVar2;
    intptr_t iVar3;
    intptr_t iVar4;
    HANDLE hObject;
    undefined8 uVar5;

    iVar3 = _get_osfhandle(param_1);
    if (iVar3 != -1) {
        if (((param_1 == 1) && ((*(byte *)(DAT_140c60410 + 0xb8) & 1) != 0)) ||
            ((param_1 == 2 && ((*(byte *)(DAT_140c60410 + 0x60) & 1) != 0)))) {
            iVar3 = _get_osfhandle(2);
            iVar4 = _get_osfhandle(1);
            if (iVar4 == iVar3) goto LAB_1407eeecb;
        }
        hObject = (HANDLE)_get_osfhandle(param_1);
        BVar1 = CloseHandle(hObject);
        if (BVar1 == 0) {
            DVar2 = GetLastError();
            goto LAB_1407eeecd;
        }
    }
    LAB_1407eeecb:
    DVar2 = 0;
    LAB_1407eeecd:
    FUN_1407f54f8((longlong)(int)param_1 & 0xffffffff);
    *(undefined *)
            ((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + 8 + (ulonglong)(param_1 & 0x1f) * 0x58) = 0;
    if (DVar2 == 0) {
        uVar5 = 0;
    }
    else {
        _dosmaperr(DVar2);
        uVar5 = 0xffffffff;
    }
    return uVar5;
}



// Library Function - Single Match
//  _freebuf
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void _freebuf(FILE *_File)

{
    if (((*(byte *)&_File->_flag & 0x83) != 0) && ((*(byte *)&_File->_flag & 8) != 0)) {
        free(_File->_base);
        _File->_flag = _File->_flag & 0xfffffbf7;
        _File->_ptr = (char *)0x0;
        _File->_base = (char *)0x0;
        _File->_cnt = 0;
    }
    return;
}



undefined4 FUN_1407eef4c(uint param_1,undefined8 param_2,undefined4 param_3)

{
    undefined4 uVar1;
    ulong *puVar2;
    int *piVar3;
    longlong lVar4;
    longlong lVar5;

    if (param_1 == 0xfffffffe) {
        puVar2 = __doserrno();
        *puVar2 = 0;
        piVar3 = _errno();
        *piVar3 = 9;
    }
    else {
        if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
            lVar5 = (longlong)(int)param_1 >> 5;
            lVar4 = (ulonglong)(param_1 & 0x1f) * 0x58;
            if ((*(byte *)((&DAT_140c60410)[lVar5] + 8 + lVar4) & 1) != 0) {
                FUN_1407f5268((longlong)(int)param_1 & 0xffffffff);
                if ((*(byte *)((&DAT_140c60410)[lVar5] + 8 + lVar4) & 1) == 0) {
                    piVar3 = _errno();
                    *piVar3 = 9;
                    puVar2 = __doserrno();
                    *puVar2 = 0;
                    uVar1 = 0xffffffff;
                }
                else {
                    uVar1 = FUN_1407ef02c(param_1,param_2,param_3);
                }
                FUN_1407f56c8(param_1);
                return uVar1;
            }
        }
        puVar2 = __doserrno();
        *puVar2 = 0;
        piVar3 = _errno();
        *piVar3 = 9;
        FUN_1407dc370();
    }
    return 0xffffffff;
}



void FUN_1407ef02c(uint param_1,short *param_2,ulonglong param_3)

{
    char cVar1;
    undefined uVar2;
    longlong lVar3;
    wchar_t *pwVar4;
    HANDLE pvVar5;
    short sVar6;
    int iVar7;
    BOOL BVar8;
    UINT UVar9;
    int iVar10;
    DWORD DVar11;
    longlong lVar12;
    ulong *puVar13;
    int *piVar14;
    _ptiddata p_Var15;
    ulonglong uVar16;
    short *psVar17;
    char cVar18;
    int iVar19;
    short *psVar20;
    uint uVar21;
    uint uVar22;
    undefined8 uVar23;
    longlong lVar24;
    uint uVar25;
    longlong lVar26;
    int iVar27;
    uint nNumberOfBytesToWrite;
    WCHAR aWStackX8 [2];
    uint auStackX12 [2];
    DWORD DStackX20;
    longlong lStackX24;
    short local_1448 [2560];
    ulonglong local_48;
    undefined8 uStack64;

    iVar10 = (int)register0x00000020;
    uStack64 = 0x1407ef04e;
    lVar12 = FUN_1407f0f60();
    lVar12 = -lVar12;
    local_48 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar12);
    uVar21 = 0;
    *(undefined4 *)((longlong)auStackX12 + lVar12 + 4) = 0;
    if ((int)param_3 == 0) goto LAB_1407ef73e;
    if (param_2 != (short *)0x0) {
        lVar26 = (longlong)(int)param_1 >> 5;
        lVar3 = (&DAT_140c60410)[lVar26];
        *(longlong *)((longlong)&lStackX24 + lVar12) = lVar26;
        lVar24 = (ulonglong)(param_1 & 0x1f) * 0x58;
        cVar18 = (char)(*(char *)(lVar24 + 0x38 + lVar3) * '\x02') >> 1;
        nNumberOfBytesToWrite = (uint)(param_3 & 0xffffffff);
        if ((1 < (byte)(cVar18 - 1U)) || ((~nNumberOfBytesToWrite & 1) != 0)) {
            if ((*(byte *)(lVar24 + 8 + lVar3) & 0x20) != 0) {
                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef0f3;
                FUN_1407f1094((longlong)(int)param_1 & 0xffffffff,0,2);
            }
            *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef0fa;
            iVar7 = _isatty(param_1);
            iVar27 = (int)param_2;
            if ((iVar7 == 0) || ((*(byte *)(lVar24 + 8 + (&DAT_140c60410)[lVar26]) & 0x80) == 0)) {
                LAB_1407ef3be:
                if ((*(byte *)(lVar24 + 8 + (&DAT_140c60410)[lVar26]) & 0x80) == 0) {
                    pvVar5 = *(HANDLE *)(lVar24 + (&DAT_140c60410)[lVar26]);
                    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef6ba;
                    BVar8 = WriteFile(pvVar5,param_2,nNumberOfBytesToWrite,
                                      (LPDWORD)((longlong)&DStackX20 + lVar12),
                                      *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar12));
                    uVar22 = 0;
                    if (BVar8 == 0) {
                        LAB_1407ef6c6:
                        uVar21 = uVar22;
                        *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef6cc;
                        DVar11 = GetLastError();
                    }
                    else {
                        uVar21 = *(uint *)((longlong)&DStackX20 + lVar12);
                        DVar11 = 0;
                    }
                    LAB_1407ef6ce:
                    if (uVar21 != 0) goto LAB_1407ef73e;
                    goto LAB_1407ef6d2;
                }
                DVar11 = 0;
                *(undefined4 *)((longlong)auStackX12 + lVar12) = 0;
                if (cVar18 == '\0') {
                    psVar17 = param_2;
                    if (nNumberOfBytesToWrite == 0) goto LAB_1407ef6fe;
                    do {
                        iVar7 = *(int *)((longlong)auStackX12 + lVar12 + 4);
                        psVar20 = local_1448;
                        uVar16 = 0;
                        do {
                            if (nNumberOfBytesToWrite <= (uint)((int)psVar17 - iVar27)) break;
                            cVar18 = *(char *)psVar17;
                            psVar17 = (short *)((longlong)psVar17 + 1);
                            if (cVar18 == '\n') {
                                *(char *)psVar20 = '\r';
                                iVar7 = iVar7 + 1;
                                psVar20 = (short *)((longlong)psVar20 + 1);
                                uVar16 = uVar16 + 1;
                            }
                            uVar16 = uVar16 + 1;
                            *(char *)psVar20 = cVar18;
                            psVar20 = (short *)((longlong)psVar20 + 1);
                        } while (uVar16 < 0x13ff);
                        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                        pvVar5 = *(HANDLE *)
                                (lVar24 + (&DAT_140c60410)[*(longlong *)((longlong)&lStackX24 + lVar12)]);
                        *(int *)((longlong)auStackX12 + lVar12 + 4) = iVar7;
                        *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef46e;
                        BVar8 = WriteFile(pvVar5,local_1448,(int)psVar20 - (iVar10 + -0x1448),
                                          (LPDWORD)((longlong)&DStackX20 + lVar12),
                                          *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar12));
                        DVar11 = *(DWORD *)((longlong)auStackX12 + lVar12);
                        uVar22 = uVar21;
                        if (BVar8 == 0) goto LAB_1407ef6c6;
                        uVar21 = uVar21 + *(int *)((longlong)&DStackX20 + lVar12);
                    } while (((longlong)psVar20 - (longlong)local_1448 <=
                              (longlong)*(int *)((longlong)&DStackX20 + lVar12)) &&
                             ((uint)((int)psVar17 - iVar27) < nNumberOfBytesToWrite));
                    goto LAB_1407ef6ce;
                }
                if (cVar18 == '\x02') {
                    psVar17 = param_2;
                    if (nNumberOfBytesToWrite != 0) {
                        do {
                            iVar7 = *(int *)((longlong)auStackX12 + lVar12 + 4);
                            psVar20 = local_1448;
                            uVar16 = 0;
                            do {
                                if (nNumberOfBytesToWrite <= (uint)((int)psVar17 - iVar27)) break;
                                sVar6 = *psVar17;
                                psVar17 = psVar17 + 1;
                                if (sVar6 == 10) {
                                    *psVar20 = 0xd;
                                    iVar7 = iVar7 + 2;
                                    psVar20 = psVar20 + 1;
                                    uVar16 = uVar16 + 2;
                                }
                                uVar16 = uVar16 + 2;
                                *psVar20 = sVar6;
                                psVar20 = psVar20 + 1;
                            } while (uVar16 < 0x13fe);
                            *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                            pvVar5 = *(HANDLE *)
                                    (lVar24 + (&DAT_140c60410)[*(longlong *)((longlong)&lStackX24 + lVar12)]);
                            *(int *)((longlong)auStackX12 + lVar12 + 4) = iVar7;
                            *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef54d;
                            BVar8 = WriteFile(pvVar5,local_1448,(int)psVar20 - (iVar10 + -0x1448),
                                              (LPDWORD)((longlong)&DStackX20 + lVar12),
                                              *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar12));
                            DVar11 = *(DWORD *)((longlong)auStackX12 + lVar12);
                            uVar22 = uVar21;
                            if (BVar8 == 0) goto LAB_1407ef6c6;
                            uVar21 = uVar21 + *(int *)((longlong)&DStackX20 + lVar12);
                        } while (((longlong)psVar20 - (longlong)local_1448 <=
                                  (longlong)*(int *)((longlong)&DStackX20 + lVar12)) &&
                                 ((uint)((int)psVar17 - iVar27) < nNumberOfBytesToWrite));
                        goto LAB_1407ef6ce;
                    }
                }
                else {
                    psVar17 = param_2;
                    if (nNumberOfBytesToWrite != 0) {
                        do {
                            psVar20 = (short *)(&stack0x00000038 + lVar12);
                            uVar16 = 0;
                            do {
                                if (nNumberOfBytesToWrite <= (uint)((int)psVar17 - iVar27)) break;
                                sVar6 = *psVar17;
                                psVar17 = psVar17 + 1;
                                if (sVar6 == 10) {
                                    *psVar20 = 0xd;
                                    psVar20 = psVar20 + 1;
                                    uVar16 = uVar16 + 2;
                                }
                                uVar16 = uVar16 + 2;
                                *psVar20 = sVar6;
                                psVar20 = psVar20 + 1;
                            } while (uVar16 < 0x6a8);
                            *(undefined8 *)(&stack0x00000000 + lVar12) = 0;
                            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0;
                            *(undefined4 *)(&stack0xfffffffffffffff0 + lVar12) = 0xd55;
                            *(short **)(&stack0xffffffffffffffe8 + lVar12) = local_1448;
                            *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef621;
                            iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&stack0x00000038 + lVar12),
                                                        ((int)psVar20 - (iVar10 + (int)lVar12 + 0x38)) / 2,
                                                        *(LPSTR *)(&stack0xffffffffffffffe8 + lVar12),
                                                        *(int *)(&stack0xfffffffffffffff0 + lVar12),
                                                        *(LPCSTR *)(&stack0xfffffffffffffff8 + lVar12),
                                                        *(LPBOOL *)(&stack0x00000000 + lVar12));
                            *(int *)((longlong)auStackX12 + lVar12) = iVar7;
                            uVar22 = uVar21;
                            if (iVar7 == 0) goto LAB_1407ef6c6;
                            iVar19 = 0;
                            do {
                                *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                                pvVar5 = *(HANDLE *)
                                        (lVar24 + (&DAT_140c60410)[*(longlong *)((longlong)&lStackX24 + lVar12)]);
                                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef667;
                                BVar8 = WriteFile(pvVar5,(LPCVOID)((longlong)local_1448 + (longlong)iVar19),
                                                  iVar7 - iVar19,(LPDWORD)((longlong)&DStackX20 + lVar12),
                                                  *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar12));
                                if (BVar8 == 0) {
                                    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef67f;
                                    DVar11 = GetLastError();
                                    iVar7 = *(int *)((longlong)auStackX12 + lVar12);
                                    break;
                                }
                                iVar19 = iVar19 + *(int *)((longlong)&DStackX20 + lVar12);
                                iVar7 = *(int *)((longlong)auStackX12 + lVar12);
                            } while (iVar19 < iVar7);
                        } while ((iVar7 <= iVar19) &&
                                 (uVar21 = (int)psVar17 - iVar27, uVar21 < nNumberOfBytesToWrite));
                        goto LAB_1407ef6ce;
                    }
                }
            }
            else {
                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef11e;
                p_Var15 = _getptd();
                pwVar4 = p_Var15->ptlocinfo->locale_name[2];
                pvVar5 = *(HANDLE *)(lVar24 + (&DAT_140c60410)[lVar26]);
                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef14b;
                BVar8 = GetConsoleMode(pvVar5,(LPDWORD)(&stack0x00000024 + lVar12));
                if ((BVar8 == 0) || ((pwVar4 == (wchar_t *)0x0 && (cVar18 == '\0')))) goto LAB_1407ef3be;
                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef166;
                UVar9 = GetConsoleCP();
                *(undefined4 *)(&stack0x00000020 + lVar12) = 0;
                *(UINT *)(&stack0x00000024 + lVar12) = UVar9;
                psVar17 = param_2;
                if (nNumberOfBytesToWrite != 0) {
                    do {
                        uVar22 = uVar21;
                        if (cVar18 == '\0') {
                            cVar1 = *(char *)psVar17;
                            *(uint *)((longlong)auStackX12 + lVar12) = (uint)(cVar1 == '\n');
                            lVar3 = (&DAT_140c60410)[lVar26];
                            if (*(int *)(lVar24 + 0x50 + lVar3) == 0) {
                                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef1cc;
                                iVar10 = isleadbyte((int)cVar1);
                                if (iVar10 == 0) {
                                    uVar23 = 1;
                                    psVar20 = psVar17;
                                    goto LAB_1407ef20d;
                                }
                                if ((longlong)(((param_3 & 0xffffffff) - (longlong)psVar17) + (longlong)param_2) < 2
                                        ) {
                                    uVar21 = uVar21 + 1;
                                    *(char *)(lVar24 + 0x4c + (&DAT_140c60410)[lVar26]) = *(char *)psVar17;
                                    *(undefined4 *)(lVar24 + 0x50 + (&DAT_140c60410)[lVar26]) = 1;
                                    break;
                                }
                                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef1f6;
                                iVar10 = FUN_1407f156c((longlong)aWStackX8 + lVar12,psVar17,2);
                                if (iVar10 == -1) break;
                                psVar17 = (short *)((longlong)psVar17 + 1);
                            }
                            else {
                                uVar2 = *(undefined *)(lVar24 + 0x4c + lVar3);
                                (&stack0x00000029)[lVar12] = cVar1;
                                uVar23 = 2;
                                (&stack0x00000028)[lVar12] = uVar2;
                                *(undefined4 *)(lVar24 + 0x50 + lVar3) = 0;
                                psVar20 = (short *)(&stack0x00000028 + lVar12);
                                LAB_1407ef20d:
                                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef217;
                                iVar10 = FUN_1407f156c((longlong)aWStackX8 + lVar12,psVar20,uVar23);
                                if (iVar10 == -1) break;
                            }
                            *(undefined8 *)(&stack0x00000000 + lVar12) = 0;
                            *(undefined8 *)(&stack0xfffffffffffffff8 + lVar12) = 0;
                            *(undefined4 *)(&stack0xfffffffffffffff0 + lVar12) = 5;
                            psVar17 = (short *)((longlong)psVar17 + 1);
                            *(undefined **)(&stack0xffffffffffffffe8 + lVar12) = &stack0x00000028 + lVar12;
                            *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef258;
                            DVar11 = WideCharToMultiByte(*(UINT *)(&stack0x00000024 + lVar12),0,
                                                         (LPCWSTR)((longlong)aWStackX8 + lVar12),1,
                                                         *(LPSTR *)(&stack0xffffffffffffffe8 + lVar12),
                                                         *(int *)(&stack0xfffffffffffffff0 + lVar12),
                                                         *(LPCSTR *)(&stack0xfffffffffffffff8 + lVar12),
                                                         *(LPBOOL *)(&stack0x00000000 + lVar12));
                            if (DVar11 == 0) break;
                            *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                            pvVar5 = *(HANDLE *)
                                    (lVar24 + (&DAT_140c60410)[*(longlong *)((longlong)&lStackX24 + lVar12)]);
                            *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef290;
                            BVar8 = WriteFile(pvVar5,&stack0x00000028 + lVar12,DVar11,
                                              (LPDWORD)(&stack0x00000020 + lVar12),
                                              *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar12));
                            if (BVar8 == 0) goto LAB_1407ef6c6;
                            uVar21 = ((int)psVar17 - iVar27) + *(int *)((longlong)auStackX12 + lVar12 + 4);
                            if (*(int *)(&stack0x00000020 + lVar12) < (int)DVar11) break;
                            lVar26 = *(longlong *)((longlong)&lStackX24 + lVar12);
                            if (*(int *)((longlong)auStackX12 + lVar12) != 0) {
                                *(undefined8 *)(&stack0xffffffffffffffe8 + lVar12) = 0;
                                (&stack0x00000028)[lVar12] = 0xd;
                                pvVar5 = *(HANDLE *)(lVar24 + (&DAT_140c60410)[lVar26]);
                                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef2ec;
                                BVar8 = WriteFile(pvVar5,&stack0x00000028 + lVar12,1,
                                                  (LPDWORD)(&stack0x00000020 + lVar12),
                                                  *(LPOVERLAPPED *)(&stack0xffffffffffffffe8 + lVar12));
                                uVar22 = uVar21;
                                if (BVar8 == 0) goto LAB_1407ef6c6;
                                if (*(int *)(&stack0x00000020 + lVar12) < 1) break;
                                piVar14 = (int *)((longlong)auStackX12 + lVar12 + 4);
                                *piVar14 = *piVar14 + 1;
                                uVar21 = uVar21 + 1;
                            }
                        }
                        else {
                            if ((byte)(cVar18 - 1U) < 2) {
                                sVar6 = *psVar17;
                                *(short *)((longlong)aWStackX8 + lVar12) = sVar6;
                                psVar17 = psVar17 + 1;
                                uVar25 = (uint)(sVar6 == 10);
                                *(uint *)((longlong)auStackX12 + lVar12) = uVar25;
                            }
                            else {
                                uVar25 = *(uint *)((longlong)auStackX12 + lVar12);
                            }
                            if ((byte)(cVar18 - 1U) < 2) {
                                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef342;
                                sVar6 = FUN_1407f56f4();
                                if (sVar6 != *(short *)((longlong)aWStackX8 + lVar12)) goto LAB_1407ef6c6;
                                uVar22 = uVar21 + 2;
                                if (uVar25 != 0) {
                                    *(undefined2 *)((longlong)aWStackX8 + lVar12) = 0xd;
                                    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef366;
                                    sVar6 = FUN_1407f56f4();
                                    if (sVar6 != *(short *)((longlong)aWStackX8 + lVar12)) goto LAB_1407ef6c6;
                                    uVar22 = uVar21 + 3;
                                    piVar14 = (int *)((longlong)auStackX12 + lVar12 + 4);
                                    *piVar14 = *piVar14 + 1;
                                }
                            }
                            lVar26 = *(longlong *)((longlong)&lStackX24 + lVar12);
                            uVar21 = uVar22;
                        }
                    } while ((uint)((int)psVar17 - iVar27) < nNumberOfBytesToWrite);
                    DVar11 = *(DWORD *)((longlong)auStackX12 + lVar12);
                    goto LAB_1407ef6ce;
                }
                DVar11 = *(ulong *)((longlong)auStackX12 + lVar12);
                LAB_1407ef6d2:
                if (DVar11 != 0) {
                    if (DVar11 == 5) {
                        *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef6e0;
                        piVar14 = _errno();
                        *piVar14 = 9;
                        *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef6eb;
                        puVar13 = __doserrno();
                        *puVar13 = 5;
                    }
                    else {
                        *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef6f9;
                        _dosmaperr(DVar11);
                    }
                    goto LAB_1407ef73e;
                }
            }
            LAB_1407ef6fe:
            if (((*(byte *)(lVar24 + 8 + (&DAT_140c60410)[*(longlong *)((longlong)&lStackX24 + lVar12)]) &
                  0x40) == 0) || (*(char *)param_2 != '\x1a')) {
                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef725;
                piVar14 = _errno();
                *piVar14 = 0x1c;
                *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef730;
                puVar13 = __doserrno();
                *puVar13 = 0;
            }
            goto LAB_1407ef73e;
        }
    }
    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef087;
    puVar13 = __doserrno();
    *puVar13 = 0;
    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef08e;
    piVar14 = _errno();
    *piVar14 = 0x16;
    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef099;
    FUN_1407dc370();
    LAB_1407ef73e:
    *(undefined8 *)((longlong)&uStack64 + lVar12) = 0x1407ef74d;
    FUN_1407db4f0(local_48 ^ (ulonglong)(&stack0xffffffffffffffc8 + lVar12));
    return;
}



DWORD FUN_1407ef768(uint param_1)

{
    BOOL BVar1;
    DWORD DVar2;
    int *piVar3;
    HANDLE hFile;
    ulong *puVar4;
    longlong lVar5;

    if (param_1 == 0xfffffffe) {
        piVar3 = _errno();
        *piVar3 = 9;
    }
    else {
        if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
            lVar5 = (ulonglong)(param_1 & 0x1f) * 0x58;
            if ((*(byte *)((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + 8 + lVar5) & 1) != 0) {
                FUN_1407f5268();
                if ((*(byte *)((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + 8 + lVar5) & 1) != 0) {
                    hFile = (HANDLE)_get_osfhandle(param_1);
                    BVar1 = FlushFileBuffers(hFile);
                    if (BVar1 == 0) {
                        DVar2 = GetLastError();
                    }
                    else {
                        DVar2 = 0;
                    }
                    if (DVar2 == 0) goto LAB_1407ef813;
                    puVar4 = __doserrno();
                    *puVar4 = DVar2;
                }
                piVar3 = _errno();
                *piVar3 = 9;
                DVar2 = 0xffffffff;
                LAB_1407ef813:
                FUN_1407f56c8(param_1);
                return DVar2;
            }
        }
        piVar3 = _errno();
        *piVar3 = 9;
        FUN_1407dc370();
    }
    return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1407ef840(undefined8 param_1,char *param_2,undefined4 param_3,undefined8 *param_4)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    char cVar8;
    int iVar9;
    int *piVar10;
    char *pcVar11;
    uint uVar12;
    uint uVar13;
    undefined4 local_res10 [2];

    bVar3 = false;
    bVar4 = false;
    bVar7 = false;
    bVar5 = true;
    bVar2 = true;
    cVar8 = *param_2;
    while (cVar8 == ' ') {
        param_2 = param_2 + 1;
        cVar8 = *param_2;
    }
    if (*param_2 == 'a') {
        uVar13 = 0x109;
        LAB_1407ef8bb:
        uVar12 = DAT_140c60870 | 2;
    }
    else {
        if (*param_2 != 'r') {
            if (*param_2 != 'w') goto LAB_1407ef891;
            uVar13 = 0x301;
            goto LAB_1407ef8bb;
        }
        uVar13 = 0;
        uVar12 = DAT_140c60870 | 1;
    }
    param_2 = param_2 + 1;
    cVar8 = *param_2;
    bVar1 = bVar2;
    if (cVar8 != '\0') {
        do {
            if (!bVar1) break;
            bVar6 = bVar7;
            if (cVar8 < 'T') {
                if (cVar8 == 'S') {
                    if (bVar4) goto LAB_1407ef9b5;
                    uVar13 = uVar13 | 0x20;
                    bVar4 = bVar5;
                }
                else if (cVar8 != ' ') {
                    if (cVar8 == '+') {
                        if ((uVar13 & 2) != 0) goto LAB_1407ef9b5;
                        uVar13 = uVar13 & 0xfffffffe | 2;
                        uVar12 = uVar12 & 0xfffffffc | 0x80;
                    }
                    else {
                        bVar6 = bVar5;
                        if (cVar8 == ',') {
                            LAB_1407ef9b5:
                            bVar1 = false;
                            bVar7 = bVar6;
                        }
                        else if (cVar8 == 'D') {
                            bVar6 = bVar7;
                            if ((uVar13 & 0x40) != 0) goto LAB_1407ef9b5;
                            uVar13 = uVar13 | 0x40;
                        }
                        else if (cVar8 == 'N') {
                            uVar13 = uVar13 | 0x80;
                        }
                        else {
                            if (cVar8 != 'R') goto LAB_1407ef891;
                            bVar6 = bVar7;
                            if (bVar4) goto LAB_1407ef9b5;
                            uVar13 = uVar13 | 0x10;
                            bVar4 = bVar5;
                        }
                    }
                }
            }
            else if (cVar8 == 'T') {
                if ((uVar13 >> 0xc & 1) != 0) goto LAB_1407ef9b5;
                uVar13 = uVar13 | 0x1000;
            }
            else if (cVar8 == 'b') {
                if ((uVar13 & 0xc000) != 0) goto LAB_1407ef9b5;
                uVar13 = uVar13 | 0x8000;
            }
            else if (cVar8 == 'c') {
                if (bVar3) goto LAB_1407ef9b5;
                uVar12 = uVar12 | 0x4000;
                bVar3 = bVar2;
            }
            else if (cVar8 == 'n') {
                if (bVar3) goto LAB_1407ef9b5;
                uVar12 = uVar12 & 0xffffbfff;
                bVar3 = bVar2;
            }
            else {
                if (cVar8 != 't') goto LAB_1407ef891;
                if ((uVar13 & 0xc000) != 0) goto LAB_1407ef9b5;
                uVar13 = uVar13 | 0x4000;
            }
            param_2 = param_2 + 1;
            cVar8 = *param_2;
        } while (cVar8 != '\0');
        if (bVar7) {
            for (; *param_2 == ' '; param_2 = param_2 + 1) {
            }
            iVar9 = FUN_1407f58e8(&DAT_140963a28,param_2,3);
            if (iVar9 != 0) goto LAB_1407ef891;
            for (param_2 = param_2 + 3; *param_2 == ' '; param_2 = param_2 + 1) {
            }
            if (*param_2 != '=') goto LAB_1407ef891;
            do {
                pcVar11 = param_2;
                param_2 = pcVar11 + 1;
            } while (*param_2 == ' ');
            iVar9 = FUN_1407f5a1c(param_2,"UTF-8",5);
            if (iVar9 == 0) {
                param_2 = pcVar11 + 6;
                uVar13 = uVar13 | 0x40000;
            }
            else {
                iVar9 = FUN_1407f5a1c(param_2,"UTF-16LE",8);
                if (iVar9 == 0) {
                    param_2 = pcVar11 + 9;
                    uVar13 = uVar13 | 0x20000;
                }
                else {
                    iVar9 = FUN_1407f5a1c(param_2,"UNICODE",7);
                    if (iVar9 != 0) goto LAB_1407ef891;
                    param_2 = pcVar11 + 8;
                    uVar13 = uVar13 | 0x10000;
                }
            }
        }
    }
    for (; *param_2 == ' '; param_2 = param_2 + 1) {
    }
    if (*param_2 == '\0') {
        iVar9 = FUN_1407f58b4(local_res10,param_1,uVar13,param_3,0x180);
        if (iVar9 != 0) {
            return (undefined8 *)0x0;
        }
        _DAT_140c5f564 = _DAT_140c5f564 + 1;
        *(undefined4 *)(param_4 + 1) = 0;
        *param_4 = 0;
        param_4[2] = 0;
        param_4[5] = 0;
        *(undefined4 *)((longlong)param_4 + 0x1c) = local_res10[0];
        *(uint *)(param_4 + 3) = uVar12;
        return param_4;
    }
    LAB_1407ef891:
    piVar10 = _errno();
    *piVar10 = 0x16;
    FUN_1407dc370();
    return (undefined8 *)0x0;
}



// Library Function - Single Match
//  _call_matherr
//
// Libraries: Visual Studio 2012 Release, Visual Studio 2019 Release

undefined8
_call_matherr(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
    int iVar1;
    undefined8 in_XMM3_Qa;
    undefined4 local_38 [2];
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    local_20 = param_5;
    local_18 = param_6;
    local_38[0] = param_1;
    local_30 = param_3;
    local_28 = in_XMM3_Qa;
    _ctrlfp(param_7,0xffc0);
    iVar1 = FUN_1407f6660(local_38);
    if (iVar1 == 0) {
        _set_errno_from_matherr(param_1);
    }
    return local_18;
}



// Library Function - Single Match
//  _exception_enabled
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release

bool _exception_enabled(uint param_1,ulonglong param_2)

{
    uint uVar1;

    uVar1 = param_1 & 0x1f;
    if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
        if (((param_1 & 4) == 0) || ((param_2 & 0x200) == 0)) {
            if (((param_1 & 1) == 0) || ((param_2 & 0x400) == 0)) {
                if (((param_1 & 2) != 0) && ((param_2 & 0x800) != 0)) {
                    if ((param_1 & 0x10) != 0) {
                        _set_statfp(0x10);
                    }
                    uVar1 = param_1 & 0x1d;
                }
            }
            else {
                _set_statfp(8);
                uVar1 = param_1 & 0x1e;
            }
        }
        else {
            _set_statfp();
            uVar1 = param_1 & 0x1b;
        }
    }
    else {
        _set_statfp(1);
        uVar1 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((param_2 & 0x1000) != 0)) {
        _set_statfp(0x20);
        uVar1 = uVar1 & 0xffffffef;
    }
    return uVar1 == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407efc20(undefined8 param_1,undefined4 param_2,undefined8 ***param_3,int param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                   int param_9)

{
    int iVar1;
    undefined8 ***pppuVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined auStack280 [32];
    undefined8 *local_f8;
    undefined8 ***local_f0;
    undefined8 local_e8;
    undefined8 local_d8;
    undefined8 ***local_d0;
    undefined8 ***local_c8;
    undefined local_b8 [48];
    undefined8 local_88;
    uint local_78;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    local_d8 = _ctrlfp(0x1f80,0xffc0);
    local_d0 = param_3;
    local_c8 = param_3;
    iVar1 = _exception_enabled(param_5,local_d8);
    uVar3 = (undefined4)param_8;
    uVar4 = (undefined4)((ulonglong)param_8 >> 0x20);
    if (iVar1 == 0) {
        if (param_9 == 2) {
            local_88 = param_8;
            local_78 = local_78 & 0xffffffe3 | 3;
        }
        local_f0 = &local_d0;
        local_f8 = &param_7;
        FUN_1407f6134(local_b8,&local_d8,param_5,param_2);
    }
    if ((_DAT_140c106b4 == 0) && (param_4 != 0)) {
        local_e8 = local_d8;
        local_f0 = local_d0;
        local_f8 = (undefined8 *)CONCAT44(uVar4,uVar3);
        pppuVar2 = (undefined8 ***)_call_matherr(param_4,param_6,param_1);
    }
    else {
        _set_errno_from_matherr(param_4);
        _ctrlfp(local_d8,0xffc0);
        pppuVar2 = local_d0;
    }
    FUN_1407db4f0(pppuVar2,local_48 ^ (ulonglong)auStack280);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407efd48(undefined8 param_1,undefined4 param_2,float param_3,int param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,int param_9
)

{
    int iVar1;
    double dVar2;
    ulonglong uVar3;
    float fVar4;
    undefined auStack280 [32];
    undefined4 *local_f8;
    float *local_f0;
    undefined8 local_e8;
    float local_d8 [2];
    undefined8 local_d0;
    float local_c8;
    undefined local_b8 [48];
    float local_88;
    uint local_78;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    local_d0 = _ctrlfp(0x1f80,0xffc0);
    local_d8[0] = param_3;
    local_c8 = param_3;
    iVar1 = _exception_enabled(param_5,local_d0);
    fVar4 = param_8;
    if (iVar1 == 0) {
        if (param_9 == 2) {
            local_88 = param_8;
            local_78 = local_78 & 0xffffffe1 | 1;
        }
        local_f0 = local_d8;
        local_f8 = &param_7;
        FUN_1407f6460(local_b8,&local_d0,param_5,param_2);
    }
    if ((_DAT_140c106b4 == 0) && (param_4 != 0)) {
        local_e8 = local_d0;
        local_f0 = (float *)(double)local_d8[0];
        local_f8 = (undefined4 *)(double)fVar4;
        dVar2 = (double)_call_matherr(param_4,param_6,param_1);
        uVar3 = (ulonglong)dVar2 & 0xffffffff00000000 | (ulonglong)(uint)(float)dVar2;
    }
    else {
        _set_errno_from_matherr(param_4);
        _ctrlfp(local_d0,0xffc0);
        uVar3 = (ulonglong)(uint)local_d8[0];
    }
    FUN_1407db4f0(uVar3,local_48 ^ (ulonglong)auStack280);
    return;
}



// Library Function - Single Match
//  _wchartodigit
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
// Visual Studio 2019 Release

int _wchartodigit(ushort param_1)

{
    ushort uVar1;
    int iVar2;

    iVar2 = 0x30;
    if (param_1 < 0x30) {
        return -1;
    }
    if (param_1 < 0x3a) goto LAB_1407efe90;
    iVar2 = 0xff10;
    if (param_1 < 0xff10) {
        iVar2 = 0x660;
        if (param_1 < 0x660) {
            return -1;
        }
        if (param_1 < 0x66a) goto LAB_1407efe90;
        iVar2 = 0x6f0;
        if (param_1 < 0x6f0) {
            return -1;
        }
        if (param_1 < 0x6fa) goto LAB_1407efe90;
        iVar2 = 0x966;
        if (param_1 < 0x966) {
            return -1;
        }
        if (param_1 < 0x970) goto LAB_1407efe90;
        iVar2 = 0x9e6;
        if (param_1 < 0x9e6) {
            return -1;
        }
        if (param_1 < 0x9f0) goto LAB_1407efe90;
        iVar2 = 0xa66;
        if (param_1 < 0xa66) {
            return -1;
        }
        if (param_1 < 0xa70) goto LAB_1407efe90;
        iVar2 = 0xae6;
        if (param_1 < 0xae6) {
            return -1;
        }
        if (param_1 < 0xaf0) goto LAB_1407efe90;
        iVar2 = 0xb66;
        if (param_1 < 0xb66) {
            return -1;
        }
        if (param_1 < 0xb70) goto LAB_1407efe90;
        iVar2 = 0xc66;
        if (param_1 < 0xc66) {
            return -1;
        }
        if (param_1 < 0xc70) goto LAB_1407efe90;
        iVar2 = 0xce6;
        if (param_1 < 0xce6) {
            return -1;
        }
        if (param_1 < 0xcf0) goto LAB_1407efe90;
        iVar2 = 0xd66;
        if (param_1 < 0xd66) {
            return -1;
        }
        if (param_1 < 0xd70) goto LAB_1407efe90;
        iVar2 = 0xe50;
        if (param_1 < 0xe50) {
            return -1;
        }
        if (param_1 < 0xe5a) goto LAB_1407efe90;
        iVar2 = 0xed0;
        if (param_1 < 0xed0) {
            return -1;
        }
        if (param_1 < 0xeda) goto LAB_1407efe90;
        iVar2 = 0xf20;
        if (param_1 < 0xf20) {
            return -1;
        }
        if (param_1 < 0xf2a) goto LAB_1407efe90;
        iVar2 = 0x1040;
        if (param_1 < 0x1040) {
            return -1;
        }
        if (param_1 < 0x104a) goto LAB_1407efe90;
        iVar2 = 0x17e0;
        if (param_1 < 0x17e0) {
            return -1;
        }
        if (param_1 < 0x17ea) goto LAB_1407efe90;
        iVar2 = 0x1810;
        if (param_1 < 0x1810) {
            return -1;
        }
        uVar1 = 0x181a;
    }
    else {
        uVar1 = 0xff1a;
    }
    if (uVar1 <= param_1) {
        return -1;
    }
    LAB_1407efe90:
    return (uint)param_1 - iVar2;
}



// Library Function - Single Match
//  __DestructExceptionObject
//
// Library: Visual Studio 2012 Release

void __DestructExceptionObject(int *param_1)

{
    byte *pbVar1;

    if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
        ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
            ) {
        if (*(int *)(pbVar1 + 4) == 0) {
            if (((*pbVar1 & 0x10) != 0) && (**(longlong ***)(param_1 + 10) != (longlong *)0x0)) {
                (**(code **)(***(longlong ***)(param_1 + 10) + 0x10))();
            }
        }
        else {
            (*(code *)(*(longlong *)(param_1 + 0xe) + (longlong)*(int *)(pbVar1 + 4)))
                    (*(undefined8 *)(param_1 + 10));
        }
    }
    return;
}



// Library Function - Single Match
//  private: static void __cdecl type_info::_Type_info_dtor(class type_info * __ptr64)
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void type_info::_Type_info_dtor(type_info *param_1)

{
    longlong *_Memory;
    longlong *plVar1;
    longlong *plVar2;

    _lock(0xe);
    _Memory = DAT_140c60838;
    if (*(longlong *)(param_1 + 8) != 0) {
        plVar1 = (longlong *)&DAT_140c60830;
        do {
            plVar2 = plVar1;
            if (DAT_140c60838 == (longlong *)0x0) goto LAB_1407f00d2;
            plVar1 = DAT_140c60838;
        } while (*DAT_140c60838 != *(longlong *)(param_1 + 8));
        plVar2[1] = DAT_140c60838[1];
        free(_Memory);
        LAB_1407f00d2:
        free(*(void **)(param_1 + 8));
        *(undefined8 *)(param_1 + 8) = 0;
    }
    FUN_1407e2528(0xe);
    return;
}



void FUN_1407f00f0(LPCWSTR param_1,undefined8 param_2,uint param_3)

{
    int iVar1;
    DWORD DVar2;
    BOOL BVar3;
    PVOID pvVar4;
    HMODULE hModule;
    FARPROC pFVar5;
    code *pcVar6;
    code *pcVar7;
    longlong lVar8;
    longlong lVar9;
    undefined auStack136 [32];
    undefined *local_68;
    undefined local_58 [8];
    undefined local_50 [8];
    byte local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    pvVar4 = EncodePointer((PVOID)0x0);
    lVar9 = 0;
    iVar1 = FUN_1407e26c0();
    if (DAT_140c60840 == (PVOID)0x0) {
        hModule = LoadLibraryExW(L"USER32.DLL",(HANDLE)0x0,0x800);
        if (((hModule == (HMODULE)0x0) &&
             ((DVar2 = GetLastError(), DVar2 != 0x57 ||
                                       (hModule = LoadLibraryW(L"USER32.DLL"), hModule == (HMODULE)0x0)))) ||
            (pFVar5 = GetProcAddress(hModule,"MessageBoxW"), pFVar5 == (FARPROC)0x0)) goto LAB_1407f0342;
        DAT_140c60840 = EncodePointer(pFVar5);
        pFVar5 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_140c60848 = EncodePointer(pFVar5);
        pFVar5 = GetProcAddress(hModule,"GetLastActivePopup");
        DAT_140c60850 = EncodePointer(pFVar5);
        pFVar5 = GetProcAddress(hModule,"GetUserObjectInformationW");
        DAT_140c60860 = EncodePointer(pFVar5);
        if (DAT_140c60860 != (PVOID)0x0) {
            pFVar5 = GetProcAddress(hModule,"GetProcessWindowStation");
            DAT_140c60858 = EncodePointer(pFVar5);
        }
    }
    BVar3 = IsDebuggerPresent();
    if (BVar3 == 0) {
        if (iVar1 != 0) {
            DecodePointer(DAT_140c60840);
            goto LAB_1407f0342;
        }
    }
    else {
        if (param_1 != (LPCWSTR)0x0) {
            OutputDebugStringW(param_1);
        }
        if (iVar1 != 0) goto LAB_1407f0342;
    }
    if ((DAT_140c60858 == pvVar4) || (DAT_140c60860 == pvVar4)) {
        LAB_1407f02de:
        if (((DAT_140c60848 != pvVar4) &&
             (((pcVar6 = (code *)DecodePointer(DAT_140c60848), pcVar6 != (code *)0x0 &&
                                                               (lVar9 = (*pcVar6)(), lVar9 != 0)) && (DAT_140c60850 != pvVar4)))) &&
            (pcVar6 = (code *)DecodePointer(DAT_140c60850), pcVar6 != (code *)0x0)) {
            lVar9 = (*pcVar6)(lVar9);
        }
    }
    else {
        pcVar6 = (code *)DecodePointer(DAT_140c60858);
        pcVar7 = (code *)DecodePointer(DAT_140c60860);
        if ((pcVar6 == (code *)0x0) || (pcVar7 == (code *)0x0)) goto LAB_1407f02de;
        lVar8 = (*pcVar6)();
        if (lVar8 != 0) {
            local_68 = local_58;
            iVar1 = (*pcVar7)(lVar8,1,local_50);
            if ((iVar1 != 0) && ((local_48 & 1) != 0)) goto LAB_1407f02de;
        }
        param_3 = param_3 | 0x200000;
    }
    pcVar6 = (code *)DecodePointer(DAT_140c60840);
    if (pcVar6 != (code *)0x0) {
        (*pcVar6)(lVar9,param_1,param_2,param_3);
    }
    LAB_1407f0342:
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack136);
    return;
}



void FUN_1407f0360(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   int param_5)

{
    ulonglong _Size;
    UINT CodePage;
    int iVar1;
    longlong lVar2;
    undefined4 *lpWideCharStr;
    undefined *puVar3;
    undefined *puVar4;
    ulonglong uVar5;
    undefined auStack120 [64];
    ulonglong local_38 [2];

    puVar4 = auStack120;
    puVar3 = auStack120;
    local_38[0] = DAT_140c0f7b0 ^ (ulonglong)local_38;
    CodePage = *(UINT *)(*param_1 + 4);
    lpWideCharStr = (undefined4 *)0x0;
    iVar1 = FUN_1407e8688(param_2,param_3,0,0);
    uVar5 = (ulonglong)iVar1;
    if (iVar1 == 0) goto LAB_1407f0493;
    puVar4 = auStack120;
    if ((0 < iVar1) && (puVar4 = auStack120, 1 < 0xffffffffffffffe0 / uVar5)) {
        _Size = uVar5 * 2 + 0x10;
        if (_Size < 0x401) {
            lVar2 = FUN_1407f0f60(_Size,0xffffffffffffffe0 % uVar5);
            lVar2 = -lVar2;
            puVar4 = auStack120 + lVar2;
            puVar3 = auStack120 + lVar2;
            lpWideCharStr = (undefined4 *)((longlong)local_38 + lVar2);
            if (lpWideCharStr == (undefined4 *)0x0) goto LAB_1407f0493;
            *lpWideCharStr = 0xcccc;
        }
        else {
            lpWideCharStr = (undefined4 *)malloc(_Size);
            puVar4 = auStack120;
            if (lpWideCharStr == (undefined4 *)0x0) goto LAB_1407f042d;
            *lpWideCharStr = 0xdddd;
        }
        lpWideCharStr = lpWideCharStr + 4;
        puVar4 = puVar3;
    }
    LAB_1407f042d:
    if (lpWideCharStr != (undefined4 *)0x0) {
        *(undefined8 *)(puVar4 + -8) = 0x1407f0443;
        iVar1 = FUN_1407e8688(param_2,param_3,lpWideCharStr,iVar1);
        if (iVar1 != 0) {
            *(undefined8 *)(puVar4 + 0x38) = 0;
            *(undefined8 *)(puVar4 + 0x30) = 0;
            if (param_5 == 0) {
                *(undefined4 *)(puVar4 + 0x28) = 0;
                *(undefined8 *)(puVar4 + 0x20) = 0;
            }
            else {
                *(int *)(puVar4 + 0x28) = param_5;
                *(undefined8 *)(puVar4 + 0x20) = param_4;
            }
            *(undefined8 *)(puVar4 + -8) = 0x1407f047e;
            WideCharToMultiByte(CodePage,0,(LPCWSTR)lpWideCharStr,-1,*(LPSTR *)(puVar4 + 0x20),
                                *(int *)(puVar4 + 0x28),*(LPCSTR *)(puVar4 + 0x30),
                                *(LPBOOL *)(puVar4 + 0x38));
        }
        if (lpWideCharStr[-4] == 0xdddd) {
            *(undefined8 *)(puVar4 + -8) = 0x1407f0491;
            free(lpWideCharStr + -4);
        }
    }
    LAB_1407f0493:
    uVar5 = local_38[0] ^ (ulonglong)local_38;
    *(undefined8 *)(puVar4 + -8) = 0x1407f049f;
    FUN_1407db4f0(uVar5);
    return;
}



void FUN_1407f04bc(localeinfo_struct *param_1,undefined8 param_2,undefined4 param_3,
                   undefined8 param_4,undefined4 param_5)

{
    _LocaleUpdate local_28 [16];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28,param_1);
    FUN_1407f0360(local_28,param_2,param_3,param_4,param_5);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  realloc
//
// Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release

void * realloc(void *_Memory,size_t _NewSize)

{
    int iVar1;
    DWORD DVar2;
    void *pvVar3;
    LPVOID pvVar4;
    int *piVar5;

    if (_Memory == (void *)0x0) {
        pvVar3 = malloc(_NewSize);
    }
    else {
        if (_NewSize == 0) {
            free(_Memory);
        }
        else {
            if (_NewSize < 0xffffffffffffffe1) {
                do {
                    if (_NewSize == 0) {
                        _NewSize = 1;
                    }
                    pvVar4 = HeapReAlloc(DAT_140c60400,0,_Memory,_NewSize);
                    if (pvVar4 != (LPVOID)0x0) {
                        return pvVar4;
                    }
                    if (_DAT_140c6082c == 0) {
                        piVar5 = _errno();
                        DVar2 = GetLastError();
                        iVar1 = FUN_1407de1d0(DVar2);
                        *piVar5 = iVar1;
                        return (void *)0x0;
                    }
                    iVar1 = _callnewh(_NewSize);
                    if (iVar1 == 0) {
                        piVar5 = _errno();
                        DVar2 = GetLastError();
                        iVar1 = FUN_1407de1d0(DVar2);
                        *piVar5 = iVar1;
                        goto LAB_1407f05b0;
                    }
                } while (_NewSize < 0xffffffffffffffe1);
            }
            _callnewh(_NewSize);
            piVar5 = _errno();
            *piVar5 = 0xc;
        }
        LAB_1407f05b0:
        pvVar3 = (void *)0x0;
    }
    return pvVar3;
}



void * FUN_1407f05f8(void *param_1,ulonglong param_2,ulonglong param_3)

{
    int *piVar1;
    size_t sVar2;
    void *pvVar3;

    sVar2 = 0;
    if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
        param_2 = param_2 * param_3;
        if (param_1 != (void *)0x0) {
            sVar2 = _msize(param_1);
        }
        pvVar3 = realloc(param_1,param_2);
        if ((pvVar3 != (void *)0x0) && (sVar2 < param_2)) {
            FUN_1407e4830(sVar2 + (longlong)pvVar3,0,param_2 - sVar2);
        }
    }
    else {
        piVar1 = _errno();
        *piVar1 = 0xc;
        pvVar3 = (void *)0x0;
    }
    return pvVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LPVOID FUN_1407f0680(ulonglong param_1,ulonglong param_2,undefined4 *param_3)

{
    int iVar1;
    int *piVar2;
    LPVOID pvVar3;

    if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
        param_2 = param_2 * param_1;
        if (param_2 == 0) {
            param_2 = 1;
        }
        do {
            pvVar3 = (LPVOID)0x0;
            if ((param_2 < 0xffffffffffffffe1) &&
                (pvVar3 = HeapAlloc(DAT_140c60400,8,param_2), pvVar3 != (LPVOID)0x0)) {
                return pvVar3;
            }
            if (_DAT_140c6082c == 0) {
                if (param_3 == (undefined4 *)0x0) {
                    return pvVar3;
                }
                *param_3 = 0xc;
                return pvVar3;
            }
            iVar1 = _callnewh(param_2);
        } while (iVar1 != 0);
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = 0xc;
        }
    }
    else {
        piVar2 = _errno();
        *piVar2 = 0xc;
    }
    return (LPVOID)0x0;
}



void FUN_1407f0728(longlong *param_1,undefined8 param_2,uint param_3,LPCSTR param_4,int param_5,
                   undefined8 param_6,int param_7,UINT param_8,int param_9)

{
    ulonglong _Size;
    size_t _Size_00;
    undefined8 uVar1;
    int iVar2;
    char *pcVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined4 *lpWideCharStr;
    undefined *puVar6;
    undefined *puVar7;
    undefined *puVar8;
    int iVar9;
    ulonglong uVar10;
    undefined auStackY120 [32];
    undefined8 local_38;
    ulonglong local_30;

    puVar7 = auStackY120;
    puVar6 = auStackY120;
    local_30 = DAT_140c0f7b0 ^ (ulonglong)&local_38;
    puVar5 = (undefined4 *)0x0;
    pcVar3 = param_4;
    iVar9 = param_5;
    if (0 < param_5) {
        do {
            iVar9 = iVar9 + -1;
            if (*pcVar3 == '\0') goto LAB_1407f0782;
            pcVar3 = pcVar3 + 1;
        } while (iVar9 != 0);
        iVar9 = -1;
        LAB_1407f0782:
        iVar2 = (param_5 - iVar9) + -1;
        iVar9 = param_5 - iVar9;
        if (param_5 <= iVar2) {
            iVar9 = iVar2;
        }
    }
    if (param_8 == 0) {
        param_8 = *(UINT *)(*param_1 + 4);
    }
    local_38 = param_2;
    iVar2 = MultiByteToWideChar(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar9,(LPWSTR)0x0,0);
    uVar10 = (ulonglong)iVar2;
    if (iVar2 == 0) goto LAB_1407f09d0;
    puVar7 = auStackY120;
    if ((0 < iVar2) && (puVar7 = auStackY120, 1 < 0xffffffffffffffe0 / uVar10)) {
        _Size = uVar10 * 2 + 0x10;
        if (_Size < 0x401) {
            lVar4 = FUN_1407f0f60(_Size,0xffffffffffffffe0 % uVar10,0xffffffffffffff0);
            lVar4 = -lVar4;
            puVar7 = auStackY120 + lVar4;
            puVar6 = auStackY120 + lVar4;
            puVar5 = (undefined4 *)((longlong)&local_38 + lVar4);
            if (puVar5 == (undefined4 *)0x0) goto LAB_1407f09d0;
            *puVar5 = 0xcccc;
        }
        else {
            puVar5 = (undefined4 *)malloc(_Size);
            puVar7 = auStackY120;
            if (puVar5 == (undefined4 *)0x0) goto LAB_1407f0846;
            *puVar5 = 0xdddd;
        }
        puVar5 = puVar5 + 4;
        puVar7 = puVar6;
    }
    LAB_1407f0846:
    if (puVar5 == (undefined4 *)0x0) goto LAB_1407f09d0;
    *(int *)(puVar7 + 0x28) = iVar2;
    *(undefined4 **)(puVar7 + 0x20) = puVar5;
    *(undefined8 *)(puVar7 + -8) = 0x1407f0869;
    iVar9 = MultiByteToWideChar(param_8,1,param_4,iVar9,*(LPWSTR *)(puVar7 + 0x20),
                                *(int *)(puVar7 + 0x28));
    uVar1 = local_38;
    puVar8 = puVar7;
    if (iVar9 != 0) {
        *(undefined4 *)(puVar7 + 0x28) = 0;
        *(undefined8 *)(puVar7 + 0x20) = 0;
        *(undefined8 *)(puVar7 + -8) = 0x1407f088f;
        iVar9 = FUN_1407e87c8(uVar1,param_3,puVar5,iVar2);
        uVar10 = (ulonglong)iVar9;
        if (iVar9 != 0) {
            if ((param_3 & 0x400) == 0) {
                if ((iVar9 < 1) || (0xffffffffffffffe0 / uVar10 < 2)) {
                    lpWideCharStr = (undefined4 *)0x0;
                }
                else {
                    _Size_00 = uVar10 * 2 + 0x10;
                    if (_Size_00 < 0x401) {
                        *(undefined8 *)(puVar7 + -8) = 0x1407f0917;
                        lVar4 = FUN_1407f0f60(_Size_00,0xffffffffffffffe0 % uVar10);
                        lVar4 = -lVar4;
                        puVar8 = puVar7 + lVar4;
                        lpWideCharStr = (undefined4 *)(puVar7 + lVar4 + 0x40);
                        if (lpWideCharStr == (undefined4 *)0x0) goto LAB_1407f09bd;
                        *lpWideCharStr = 0xcccc;
                        puVar7 = puVar7 + lVar4;
                    }
                    else {
                        *(undefined8 *)(puVar7 + -8) = 0x1407f0935;
                        lpWideCharStr = (undefined4 *)malloc(_Size_00);
                        if (lpWideCharStr == (undefined4 *)0x0) goto LAB_1407f094b;
                        *lpWideCharStr = 0xdddd;
                    }
                    lpWideCharStr = lpWideCharStr + 4;
                    puVar8 = puVar7;
                }
                LAB_1407f094b:
                if (lpWideCharStr != (undefined4 *)0x0) {
                    *(int *)(puVar8 + 0x28) = iVar9;
                    *(undefined4 **)(puVar8 + 0x20) = lpWideCharStr;
                    *(undefined8 *)(puVar8 + -8) = 0x1407f096a;
                    iVar2 = FUN_1407e87c8(uVar1,param_3,puVar5,iVar2);
                    if (iVar2 != 0) {
                        *(undefined8 *)(puVar8 + 0x38) = 0;
                        *(undefined8 *)(puVar8 + 0x30) = 0;
                        if (param_7 == 0) {
                            *(undefined4 *)(puVar8 + 0x28) = 0;
                            *(undefined8 *)(puVar8 + 0x20) = 0;
                        }
                        else {
                            *(int *)(puVar8 + 0x28) = param_7;
                            *(undefined8 *)(puVar8 + 0x20) = param_6;
                        }
                        *(undefined8 *)(puVar8 + -8) = 0x1407f09aa;
                        WideCharToMultiByte(param_8,0,(LPCWSTR)lpWideCharStr,iVar9,*(LPSTR *)(puVar8 + 0x20),
                                            *(int *)(puVar8 + 0x28),*(LPCSTR *)(puVar8 + 0x30),
                                            *(LPBOOL *)(puVar8 + 0x38));
                    }
                    if (lpWideCharStr[-4] == 0xdddd) {
                        *(undefined8 *)(puVar8 + -8) = 0x1407f09bd;
                        free(lpWideCharStr + -4);
                    }
                }
            }
            else if ((param_7 != 0) && (iVar9 <= param_7)) {
                *(int *)(puVar7 + 0x28) = param_7;
                *(undefined8 *)(puVar7 + 0x20) = param_6;
                *(undefined8 *)(puVar7 + -8) = 0x1407f08d6;
                FUN_1407e87c8(uVar1,param_3,puVar5,iVar2);
            }
        }
    }
    LAB_1407f09bd:
    puVar7 = puVar8;
    if (puVar5[-4] == 0xdddd) {
        *(undefined8 *)(puVar8 + -8) = 0x1407f09ce;
        free(puVar5 + -4);
    }
    LAB_1407f09d0:
    uVar10 = local_30 ^ (ulonglong)&local_38;
    *(undefined8 *)(puVar7 + -8) = 0x1407f09dc;
    FUN_1407db4f0(uVar10);
    return;
}



void FUN_1407f09f8(localeinfo_struct *param_1,undefined8 param_2,undefined4 param_3,
                   undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
                   undefined4 param_8,undefined4 param_9)

{
    _LocaleUpdate local_28 [16];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28,param_1);
    FUN_1407f0728(local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return;
}



// Library Function - Single Match
//  _isatty
//
// Library: Visual Studio 2010 Release

int _isatty(int _FileHandle)

{
    int *piVar1;

    if (_FileHandle == -2) {
        piVar1 = _errno();
        *piVar1 = 9;
    }
    else {
        if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_140dc523c)) {
            return (int)*(char *)((&DAT_140c60410)[(longlong)_FileHandle >> 5] + 8 +
                                  (ulonglong)(_FileHandle & 0x1f) * 0x58) & 0x40;
        }
        piVar1 = _errno();
        *piVar1 = 9;
        FUN_1407dc370();
    }
    return 0;
}



void FUN_1407f0af0(void)

{
    FUN_1407f0b18();
    return;
}



int FUN_1407f0b18(ulonglong param_1,short *param_2,ulonglong param_3,uint param_4,int param_5)

{
    ulonglong uVar1;
    short *psVar2;
    int *piVar3;
    ulonglong uVar4;
    short sVar5;
    int iVar6;
    short *psVar7;
    short *psVar8;

    param_1 = param_1 & 0xffffffff;
    if ((param_2 != (short *)0x0) && (param_3 != 0)) {
        *param_2 = 0;
        if (param_3 <= (ulonglong)(param_5 != 0) + 1) {
            piVar3 = _errno();
            iVar6 = 0x22;
            goto LAB_1407f0b49;
        }
        iVar6 = 0x22;
        if (param_4 - 2 < 0x23) {
            psVar7 = param_2;
            if (param_5 != 0) {
                psVar7 = param_2 + 1;
                *param_2 = 0x2d;
                param_1 = (ulonglong)(uint)-(int)param_1;
            }
            uVar4 = (ulonglong)(param_5 != 0);
            psVar2 = psVar7;
            do {
                psVar8 = psVar2;
                uVar1 = param_1 / param_4;
                param_1 = param_1 % (ulonglong)param_4;
                sVar5 = (short)param_1;
                if ((uint)param_1 < 10) {
                    sVar5 = sVar5 + 0x30;
                }
                else {
                    sVar5 = sVar5 + 0x57;
                }
                *psVar8 = sVar5;
                uVar4 = uVar4 + 1;
            } while (((int)uVar1 != 0) && (psVar2 = psVar8 + 1, param_1 = uVar1, uVar4 < param_3));
            if (uVar4 < param_3) {
                psVar8[1] = 0;
                do {
                    sVar5 = *psVar8;
                    *psVar8 = *psVar7;
                    *psVar7 = sVar5;
                    psVar7 = psVar7 + 1;
                    psVar8 = psVar8 + -1;
                } while (psVar7 < psVar8);
                return 0;
            }
            *param_2 = 0;
            piVar3 = _errno();
            goto LAB_1407f0b49;
        }
    }
    piVar3 = _errno();
    iVar6 = 0x16;
    LAB_1407f0b49:
    *piVar3 = iVar6;
    FUN_1407dc370();
    return iVar6;
}



int FUN_1407f0c28(undefined2 *param_1,ushort *param_2)

{
    int iVar1;
    int *piVar2;
    ushort uVar3;
    ushort uVar4;
    longlong lVar5;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    if (DAT_140c5f560 == 0) {
        if ((param_1 != (undefined2 *)0x0) && (param_2 != (ushort *)0x0)) {
            lVar5 = (longlong)param_1 - (longlong)param_2;
            do {
                uVar4 = *(ushort *)(lVar5 + (longlong)param_2);
                if ((ushort)(uVar4 - 0x41) < 0x1a) {
                    uVar4 = uVar4 + 0x20;
                }
                uVar3 = *param_2;
                if ((ushort)(uVar3 - 0x41) < 0x1a) {
                    uVar3 = uVar3 + 0x20;
                }
                param_2 = param_2 + 1;
            } while ((uVar4 != 0) && (uVar4 == uVar3));
            return (uint)uVar4 - (uint)uVar3;
        }
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        return 0x7fffffff;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
    if ((param_1 == (undefined2 *)0x0) || (param_2 == (ushort *)0x0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        iVar1 = 0x7fffffff;
    }
    else {
        if (*(longlong *)(local_28[0] + 0x138) == 0) {
            lVar5 = (longlong)param_1 - (longlong)param_2;
            do {
                uVar4 = *(ushort *)(lVar5 + (longlong)param_2);
                if ((ushort)(uVar4 - 0x41) < 0x1a) {
                    uVar4 = uVar4 + 0x20;
                }
                uVar3 = *param_2;
                if ((ushort)(uVar3 - 0x41) < 0x1a) {
                    uVar3 = uVar3 + 0x20;
                }
                param_2 = param_2 + 1;
            } while ((uVar4 != 0) && (uVar4 == uVar3));
        }
        else {
            do {
                uVar4 = FUN_1407df528(*param_1,local_28);
                param_1 = param_1 + 1;
                uVar3 = FUN_1407df528(*param_2,local_28);
                param_2 = param_2 + 1;
                if (uVar4 == 0) break;
            } while (uVar4 == uVar3);
        }
        iVar1 = (uint)uVar4 - (uint)uVar3;
    }
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return iVar1;
}



int FUN_1407f0d9c(undefined2 *param_1,ushort *param_2,longlong param_3)

{
    int *piVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    longlong lVar5;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    iVar4 = 0;
    if (DAT_140c5f560 == 0) {
        if (param_3 != 0) {
            if ((param_1 == (undefined2 *)0x0) || (param_2 == (ushort *)0x0)) {
                piVar1 = _errno();
                *piVar1 = 0x16;
                FUN_1407dc370();
                return 0x7fffffff;
            }
            lVar5 = (longlong)param_1 - (longlong)param_2;
            do {
                uVar2 = *(ushort *)(lVar5 + (longlong)param_2);
                if ((ushort)(uVar2 - 0x41) < 0x1a) {
                    uVar2 = uVar2 + 0x20;
                }
                uVar3 = *param_2;
                if ((ushort)(uVar3 - 0x41) < 0x1a) {
                    uVar3 = uVar3 + 0x20;
                }
                param_2 = param_2 + 1;
                param_3 = param_3 + -1;
            } while (((param_3 != 0) && (uVar2 != 0)) && (uVar2 == uVar3));
            iVar4 = (uint)uVar2 - (uint)uVar3;
        }
        return iVar4;
    }
    iVar4 = 0;
    if (param_3 != 0) {
        if ((param_1 == (undefined2 *)0x0) || (param_2 == (ushort *)0x0)) {
            piVar1 = _errno();
            *piVar1 = 0x16;
            FUN_1407dc370();
            iVar4 = 0x7fffffff;
        }
        else {
            _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(localeinfo_struct *)0x0);
            if (*(longlong *)(local_28[0] + 0x138) == 0) {
                lVar5 = (longlong)param_1 - (longlong)param_2;
                do {
                    uVar2 = *(ushort *)(lVar5 + (longlong)param_2);
                    if ((ushort)(uVar2 - 0x41) < 0x1a) {
                        uVar2 = uVar2 + 0x20;
                    }
                    uVar3 = *param_2;
                    if ((ushort)(uVar3 - 0x41) < 0x1a) {
                        uVar3 = uVar3 + 0x20;
                    }
                    param_2 = param_2 + 1;
                    param_3 = param_3 + -1;
                } while (((param_3 != 0) && (uVar2 != 0)) && (uVar2 == uVar3));
            }
            else {
                do {
                    uVar2 = FUN_1407df528(*param_1,local_28);
                    uVar3 = FUN_1407df528(*param_2,local_28);
                    param_1 = param_1 + 1;
                    param_2 = param_2 + 1;
                    param_3 = param_3 + -1;
                    if ((param_3 == 0) || (uVar2 == 0)) break;
                } while (uVar2 == uVar3);
            }
            iVar4 = (uint)uVar2 - (uint)uVar3;
            if (local_10 != '\0') {
                *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
            }
        }
    }
    return iVar4;
}



void FUN_1407f0f60(void)

{
    undefined *in_RAX;
    undefined *puVar1;
    undefined *puVar2;
    longlong in_GS_OFFSET;
    undefined local_res8 [32];

    puVar1 = local_res8 + -(longlong)in_RAX;
    if (local_res8 < in_RAX) {
        puVar1 = (undefined *)0x0;
    }
    puVar2 = *(undefined **)(in_GS_OFFSET + 0x10);
    if (puVar1 < puVar2) {
        do {
            puVar2 = puVar2 + -0x1000;
            *puVar2 = 0;
        } while ((undefined *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
    }
    return;
}



undefined8 FUN_1407f0fb0(uint param_1,undefined8 param_2,undefined4 param_3)

{
    ulong *puVar1;
    int *piVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;

    if (param_1 == 0xfffffffe) {
        puVar1 = __doserrno();
        *puVar1 = 0;
        piVar2 = _errno();
        *piVar2 = 9;
    }
    else {
        if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
            lVar5 = (longlong)(int)param_1 >> 5;
            lVar4 = (ulonglong)(param_1 & 0x1f) * 0x58;
            if ((*(byte *)((&DAT_140c60410)[lVar5] + 8 + lVar4) & 1) != 0) {
                FUN_1407f5268((longlong)(int)param_1 & 0xffffffff);
                if ((*(byte *)((&DAT_140c60410)[lVar5] + 8 + lVar4) & 1) == 0) {
                    piVar2 = _errno();
                    *piVar2 = 9;
                    puVar1 = __doserrno();
                    *puVar1 = 0;
                    uVar3 = 0xffffffffffffffff;
                }
                else {
                    uVar3 = FUN_1407f1094(param_1,param_2,param_3);
                }
                FUN_1407f56c8(param_1);
                return uVar3;
            }
        }
        puVar1 = __doserrno();
        *puVar1 = 0;
        piVar2 = _errno();
        *piVar2 = 9;
        FUN_1407dc370();
    }
    return 0xffffffffffffffff;
}



undefined8 FUN_1407f1094(uint param_1,LARGE_INTEGER param_2,DWORD param_3)

{
    byte *pbVar1;
    BOOL BVar2;
    DWORD DVar3;
    HANDLE hFile;
    int *piVar4;
    undefined8 local_res20;

    hFile = (HANDLE)_get_osfhandle(param_1);
    if (hFile == (HANDLE)0xffffffffffffffff) {
        piVar4 = _errno();
        *piVar4 = 9;
    }
    else {
        BVar2 = SetFilePointerEx(hFile,param_2,&local_res20,param_3);
        if (BVar2 != 0) {
            pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + 8 +
                                                                            (ulonglong)(param_1 & 0x1f) * 0x58);
            *pbVar1 = *pbVar1 & 0xfd;
            return local_res20;
        }
        DVar3 = GetLastError();
        _dosmaperr(DVar3);
    }
    return 0xffffffffffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _getbuf
//
// Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release

void _getbuf(FILE *_File)

{
    char *pcVar1;

    _DAT_140c5f564 = _DAT_140c5f564 + 1;
    pcVar1 = (char *)FUN_1407e2c30(0x1000);
    _File->_base = pcVar1;
    if (pcVar1 == (char *)0x0) {
        _File->_flag = _File->_flag | 4;
        _File->_bufsiz = 2;
        _File->_base = (char *)&_File->_charbuf;
    }
    else {
        _File->_flag = _File->_flag | 8;
        _File->_bufsiz = 0x1000;
    }
    _File->_cnt = 0;
    _File->_ptr = _File->_base;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_1407f117c(void)

{
    return _DAT_140c60868 == (DAT_140c0f7b0 | 1);
}



undefined4 FUN_1407f1194(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    int _Flag;
    undefined4 uVar1;
    int *piVar2;
    longlong lVar3;
    undefined8 local_res10;
    undefined8 local_res18;
    undefined8 local_res20;

    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_1 == 0) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        uVar1 = 0xffffffff;
    }
    else {
        lVar3 = FUN_1407ddfa0();
        _lock_file2(1,(void *)(lVar3 + 0x30));
        lVar3 = FUN_1407ddfa0();
        _Flag = FUN_1407e3974(lVar3 + 0x30);
        lVar3 = FUN_1407ddfa0();
        uVar1 = FUN_1407e96d0(lVar3 + 0x30,param_1,0,&local_res10);
        lVar3 = FUN_1407ddfa0();
        _ftbuf(_Flag,(FILE *)(lVar3 + 0x30));
        lVar3 = FUN_1407ddfa0();
        _unlock_file2(1,(void *)(lVar3 + 0x30));
    }
    return uVar1;
}



void FUN_1407f1240(undefined2 param_1,FILE *param_2)

{
    int *piVar1;
    int iVar2;
    uint uVar3;
    undefined *puVar4;
    int iVar5;
    undefined *puVar6;
    char *pcVar7;
    undefined auStack88 [32];
    int local_38;
    char local_34 [12];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if ((*(byte *)&param_2->_flag & 0x40) == 0) {
        iVar2 = _fileno(param_2);
        puVar6 = &DAT_140c0ffb0;
        if ((iVar2 == -1) || (iVar2 = _fileno(param_2), iVar2 == -2)) {
            puVar4 = &DAT_140c0ffb0;
        }
        else {
            iVar2 = _fileno(param_2);
            uVar3 = _fileno(param_2);
            puVar4 = (undefined *)
                    ((ulonglong)(uVar3 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar2 >> 5]);
        }
        if ((puVar4[0x38] & 0x7f) != 2) {
            iVar2 = _fileno(param_2);
            if ((iVar2 == -1) || (iVar2 = _fileno(param_2), iVar2 == -2)) {
                puVar4 = &DAT_140c0ffb0;
            }
            else {
                iVar2 = _fileno(param_2);
                uVar3 = _fileno(param_2);
                puVar4 = (undefined *)
                        ((ulonglong)(uVar3 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar2 >> 5]);
            }
            if ((puVar4[0x38] & 0x7f) != 1) {
                iVar2 = _fileno(param_2);
                if ((iVar2 != -1) && (iVar2 = _fileno(param_2), iVar2 != -2)) {
                    iVar2 = _fileno(param_2);
                    uVar3 = _fileno(param_2);
                    puVar6 = (undefined *)
                            ((ulonglong)(uVar3 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar2 >> 5]);
                }
                if ((puVar6[8] & 0x80) != 0) {
                    iVar2 = FUN_1407f2338(&local_38,local_34,5,param_1);
                    iVar5 = 0;
                    if ((iVar2 == 0) && (0 < local_38)) {
                        pcVar7 = local_34;
                        do {
                            piVar1 = &param_2->_cnt;
                            *piVar1 = *piVar1 + -1;
                            if (*piVar1 < 0) {
                                uVar3 = FUN_1407e88ec((int)*pcVar7,param_2);
                            }
                            else {
                                *param_2->_ptr = *pcVar7;
                                uVar3 = (uint)(byte)*param_2->_ptr;
                                param_2->_ptr = param_2->_ptr + 1;
                            }
                            if (uVar3 == 0xffffffff) break;
                            iVar5 = iVar5 + 1;
                            pcVar7 = pcVar7 + 1;
                        } while (iVar5 < local_38);
                    }
                    goto LAB_1407f13f7;
                }
            }
        }
    }
    iVar2 = param_2->_cnt + -2;
    param_2->_cnt = iVar2;
    if (iVar2 < 0) {
        FUN_1407f66c8(param_1,param_2);
    }
    else {
        *(undefined2 *)param_2->_ptr = param_1;
        param_2->_ptr = param_2->_ptr + 2;
    }
    LAB_1407f13f7:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack88);
    return;
}



undefined4 FUN_1407f1418(LPWSTR param_1,byte *param_2,ulonglong param_3,localeinfo_struct *param_4)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    localeinfo_struct local_28;
    longlong local_18;
    char local_10;

    if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
        if (*param_2 != 0) {
            _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_4);
            if ((local_28.locinfo)->locale_name[2] == (wchar_t *)0x0) {
                if (param_1 != (LPWSTR)0x0) {
                    *param_1 = (ushort)*param_2;
                }
                iVar2 = 1;
            }
            else {
                iVar1 = _isleadbyte_l((uint)*param_2,&local_28);
                iVar2 = 1;
                if (iVar1 == 0) {
                    iVar1 = MultiByteToWideChar((local_28.locinfo)->lc_codepage,9,(LPCSTR)param_2,1,param_1,
                                                (uint)(param_1 != (LPWSTR)0x0));
                    if (iVar1 != 0) goto LAB_1407f154f;
                }
                else {
                    iVar2 = (local_28.locinfo)->mb_cur_max;
                    if ((((1 < iVar2) && (iVar2 <= (int)param_3)) &&
                         (iVar2 = MultiByteToWideChar((local_28.locinfo)->lc_codepage,9,(LPCSTR)param_2,iVar2,
                                                      param_1,(uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) ||
                        (((ulonglong)(longlong)(local_28.locinfo)->mb_cur_max <= param_3 && (param_2[1] != 0)))
                            ) {
                        iVar2 = (local_28.locinfo)->mb_cur_max;
                        goto LAB_1407f154f;
                    }
                }
                piVar3 = _errno();
                iVar2 = -1;
                *piVar3 = 0x2a;
            }
            LAB_1407f154f:
            if (local_10 == '\0') {
                return iVar2;
            }
            *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
            return iVar2;
        }
        if (param_1 != (LPWSTR)0x0) {
            *param_1 = L'\0';
        }
    }
    return 0;
}



void FUN_1407f156c(void)

{
    FUN_1407f1418();
    return;
}



void FUN_1407f1598(void)

{
    int in_R9D;

    if ((in_R9D - 0x45U & 0xffffffdf) == 0) {
        FUN_1407f1bc4();
    }
    else if (in_R9D == 0x66) {
        FUN_1407f1e20();
    }
    else if ((in_R9D - 0x41U & 0xffffffdf) == 0) {
        FUN_1407f1618();
    }
    else {
        FUN_1407f1ef4();
    }
    return;
}



int FUN_1407f1618(ulonglong *param_1,undefined *param_2,ulonglong param_3,ulonglong param_4,
                  int param_5,localeinfo_struct *param_6)

{
    ushort uVar1;
    int iVar2;
    int *piVar3;
    char *pcVar4;
    char *pcVar5;
    longlong lVar6;
    char cVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    short sVar11;
    char *pcVar12;
    char *pcVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong local_48 [2];
    longlong local_38;
    char local_30;

    uVar15 = 0x3ff;
    sVar11 = 0x30;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_48,param_6);
    uVar10 = param_4 & 0xffffffff;
    if ((int)(param_4 & 0xffffffff) < 0) {
        uVar10 = 0;
    }
    if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
        piVar3 = _errno();
        iVar2 = 0x16;
    }
    else {
        *param_2 = 0;
        if ((ulonglong)(longlong)((int)uVar10 + 0xb) < param_3) {
            if ((*param_1 >> 0x34 & 0x7ff) == 0x7ff) {
                uVar15 = param_3 - 2;
                if (param_3 == 0xffffffffffffffff) {
                    uVar15 = param_3;
                }
                iVar2 = FUN_1407f1bc4(param_1,param_2 + 2,uVar15,uVar10,0,0);
                if (iVar2 != 0) {
                    *param_2 = 0;
                    goto LAB_1407f1995;
                }
                if (param_2[2] == '-') {
                    *param_2 = 0x2d;
                    param_2 = param_2 + 1;
                }
                *param_2 = 0x30;
                param_2[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
                pcVar4 = (char *)FUN_1407e05f0(param_2 + 2,0x65);
                if (pcVar4 != (char *)0x0) {
                    *pcVar4 = (-(param_5 != 0) & 0xe0U) + 0x70;
                    pcVar4[3] = '\0';
                }
            }
            else {
                if ((*param_1 & 0x8000000000000000) != 0) {
                    *param_2 = 0x2d;
                    param_2 = param_2 + 1;
                }
                *param_2 = 0x30;
                param_2[1] = (-(param_5 != 0) & 0xe0U) + 0x78;
                uVar8 = (-(uint)(param_5 != 0) & 0xffffffe0) + 0x27;
                if ((*param_1 & 0x7ff0000000000000) == 0) {
                    param_2[2] = 0x30;
                    uVar15 = (ulonglong)(-(uint)((*param_1 & 0xfffffffffffff) != 0) & 0x3fe);
                }
                else {
                    param_2[2] = 0x31;
                }
                pcVar12 = param_2 + 3;
                pcVar4 = param_2 + 4;
                if ((int)uVar10 == 0) {
                    *pcVar12 = '\0';
                }
                else {
                    *pcVar12 = ***(char ***)(local_48[0] + 0xf0);
                }
                if ((*param_1 & 0xfffffffffffff) != 0) {
                    uVar14 = 0xf000000000000;
                    do {
                        if ((int)uVar10 < 1) break;
                        uVar1 = (short)((*param_1 & uVar14) >> ((byte)sVar11 & 0x3f)) + 0x30;
                        if (0x39 < uVar1) {
                            uVar1 = uVar1 + (short)uVar8;
                        }
                        *pcVar4 = (char)uVar1;
                        uVar14 = uVar14 >> 4;
                        uVar10 = (ulonglong)((int)uVar10 - 1);
                        pcVar4 = pcVar4 + 1;
                        sVar11 = sVar11 + -4;
                    } while (-1 < sVar11);
                    if ((-1 < sVar11) &&
                        (pcVar13 = pcVar4, 8 < (ushort)((*param_1 & uVar14) >> ((byte)sVar11 & 0x3f)))) {
                        while (pcVar5 = pcVar13 + -1, (*pcVar5 + 0xbaU & 0xdf) == 0) {
                            *pcVar5 = '0';
                            pcVar13 = pcVar5;
                        }
                        if (pcVar5 == pcVar12) {
                            pcVar13[-2] = pcVar13[-2] + '\x01';
                        }
                        else if (*pcVar5 == '9') {
                            cVar7 = (char)uVar8;
                            uVar8 = uVar8 & 0xffffff00;
                            *pcVar5 = cVar7 + ':';
                        }
                        else {
                            *pcVar5 = *pcVar5 + '\x01';
                        }
                    }
                }
                if (0 < (int)uVar10) {
                    FUN_1407e4830(pcVar4,uVar8 & 0xffffff00 | 0x30,uVar10);
                    pcVar4 = pcVar4 + uVar10;
                }
                if (*pcVar12 == '\0') {
                    pcVar4 = pcVar12;
                }
                *pcVar4 = (-(param_5 != 0) & 0xe0U) + 0x70;
                lVar6 = ((uint)(*param_1 >> 0x34) & 0x7ff) - uVar15;
                if (lVar6 < 0) {
                    pcVar4[1] = '-';
                    lVar6 = -lVar6;
                }
                else {
                    pcVar4[1] = '+';
                }
                pcVar13 = pcVar4 + 2;
                *pcVar13 = '0';
                pcVar12 = pcVar13;
                if (lVar6 < 1000) {
                    LAB_1407f191f:
                    if (99 < lVar6) goto LAB_1407f1925;
                }
                else {
                    *pcVar13 = (char)(lVar6 / 1000) + '0';
                    pcVar12 = pcVar4 + 3;
                    lVar6 = lVar6 % 1000;
                    if (pcVar12 == pcVar13) goto LAB_1407f191f;
                    LAB_1407f1925:
                    lVar9 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar6) >> 0x40,0) + lVar6;
                    lVar9 = (lVar9 >> 6) - (lVar9 >> 0x3f);
                    *pcVar12 = (char)lVar9 + '0';
                    pcVar12 = pcVar12 + 1;
                    lVar6 = lVar6 + lVar9 * -100;
                }
                if ((pcVar12 != pcVar13) || (9 < lVar6)) {
                    *pcVar12 = (char)(lVar6 / 10) + '0';
                    pcVar12 = pcVar12 + 1;
                    lVar6 = lVar6 % 10;
                }
                *pcVar12 = (char)lVar6 + '0';
                pcVar12[1] = '\0';
            }
            iVar2 = 0;
            goto LAB_1407f1995;
        }
        piVar3 = _errno();
        iVar2 = 0x22;
    }
    *piVar3 = iVar2;
    FUN_1407dc370();
    LAB_1407f1995:
    if (local_30 != '\0') {
        *(uint *)(local_38 + 200) = *(uint *)(local_38 + 200) & 0xfffffffd;
    }
    return iVar2;
}



ulonglong FUN_1407f19c8(undefined *param_1,ulonglong param_2,int param_3,int param_4,int *param_5,
                        char param_6,localeinfo_struct *param_7)

{
    code *pcVar1;
    int iVar2;
    uint *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    undefined *puVar7;
    longlong local_38 [2];
    longlong local_28;
    char local_20;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_38,param_7);
    if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
        puVar3 = (uint *)_errno();
        uVar6 = 0x16;
    }
    else {
        iVar2 = 0;
        if (0 < param_3) {
            iVar2 = param_3;
        }
        if ((ulonglong)(longlong)(iVar2 + 9) < param_2) {
            if (param_6 != '\0') {
                puVar7 = param_1 + (*param_5 == 0x2d);
                if (0 < param_3 != 0) {
                    lVar4 = FUN_1407e1990(puVar7);
                    FUN_1407db590(puVar7 + (int)(uint)(0 < param_3),puVar7,lVar4 + 1);
                }
            }
            if (*param_5 == 0x2d) {
                *param_1 = 0x2d;
                param_1 = param_1 + 1;
            }
            if (0 < param_3) {
                *param_1 = param_1[1];
                param_1 = param_1 + 1;
                *param_1 = *(undefined *)**(undefined8 **)(local_38[0] + 0xf0);
            }
            param_1 = param_1 + (ulonglong)(param_6 == '\0') + (longlong)param_3;
            iVar2 = FUN_1407ea194(param_1);
            if (iVar2 != 0) {
                FUN_1407dc390(0,0,0,0,0);
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return uVar5;
            }
            if (param_4 != 0) {
                *param_1 = 0x45;
            }
            if (**(char **)(param_5 + 4) != '0') {
                iVar2 = param_5[1] + -1;
                if (iVar2 < 0) {
                    iVar2 = -iVar2;
                    param_1[1] = 0x2d;
                }
                if (99 < iVar2) {
                    param_1[2] = param_1[2] + (char)(iVar2 / 100);
                    iVar2 = iVar2 % 100;
                }
                if (9 < iVar2) {
                    param_1[3] = param_1[3] + (char)(iVar2 / 10);
                    iVar2 = iVar2 % 10;
                }
                param_1[4] = param_1[4] + (char)iVar2;
            }
            if (((DAT_140c608e8 & 1) != 0) && (param_1[2] == '0')) {
                FUN_1407db590(param_1 + 2,param_1 + 3,3);
            }
            uVar6 = 0;
            goto LAB_1407f1b77;
        }
        puVar3 = (uint *)_errno();
        uVar6 = 0x22;
    }
    *puVar3 = uVar6;
    FUN_1407dc370();
    LAB_1407f1b77:
    if (local_20 != '\0') {
        *(uint *)(local_28 + 200) = *(uint *)(local_28 + 200) & 0xfffffffd;
    }
    return (ulonglong)uVar6;
}



void FUN_1407f1bc4(undefined8 *param_1,undefined *param_2,longlong param_3,int param_4,
                   undefined4 param_5,undefined8 param_6)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    undefined auStack168 [32];
    int *local_88;
    undefined local_80;
    undefined8 local_78;
    int local_68 [6];
    undefined local_50 [24];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    FUN_1407f6cf8(*param_1,local_68,local_50,0x16);
    if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
    }
    else {
        lVar3 = -1;
        if (param_3 != -1) {
            lVar3 = (param_3 - (ulonglong)(local_68[0] == 0x2d)) - (ulonglong)(0 < param_4);
        }
        iVar1 = FUN_1407f69cc(param_2 + (ulonglong)(0 < param_4) + (ulonglong)(local_68[0] == 0x2d),
                              lVar3,param_4 + 1,local_68);
        if (iVar1 == 0) {
            local_78 = param_6;
            local_88 = local_68;
            local_80 = 0;
            FUN_1407f19c8(param_2,param_3,param_4,param_5);
        }
        else {
            *param_2 = 0;
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack168);
    return;
}



undefined4
FUN_1407f1cbc(undefined *param_1,longlong param_2,int param_3,int *param_4,char param_5,
              localeinfo_struct *param_6)

{
    undefined *puVar1;
    int iVar2;
    int *piVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    undefined4 uVar7;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    iVar2 = param_4[1];
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
    if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
        piVar3 = _errno();
        uVar7 = 0x16;
        *piVar3 = 0x16;
        FUN_1407dc370();
    }
    else {
        if ((param_5 != '\0') && (iVar2 + -1 == param_3)) {
            *(undefined2 *)(param_1 + (longlong)(iVar2 + -1) + (ulonglong)(*param_4 == 0x2d)) = 0x30;
        }
        if (*param_4 == 0x2d) {
            *param_1 = 0x2d;
            param_1 = param_1 + 1;
        }
        if (param_4[1] < 1) {
            lVar4 = FUN_1407e1990(param_1);
            FUN_1407db590(param_1 + 1,param_1,lVar4 + 1);
            *param_1 = 0x30;
            param_1 = param_1 + 1;
        }
        else {
            param_1 = param_1 + param_4[1];
        }
        if (0 < param_3) {
            puVar1 = param_1 + 1;
            lVar4 = FUN_1407e1990(param_1);
            FUN_1407db590(puVar1,param_1,lVar4 + 1);
            *param_1 = *(undefined *)**(undefined8 **)(local_28[0] + 0xf0);
            iVar2 = param_4[1];
            if (iVar2 < 0) {
                iVar5 = -iVar2;
                iVar6 = iVar5;
                if ((param_5 == '\0') && (iVar6 = param_3, SBORROW4(param_3,iVar5) == param_3 + iVar2 < 0))
                {
                    iVar6 = iVar5;
                }
                if (iVar6 != 0) {
                    lVar4 = FUN_1407e1990(puVar1);
                    FUN_1407db590(puVar1 + iVar6,puVar1,lVar4 + 1);
                }
                FUN_1407e4830(puVar1,0x30,(longlong)iVar6);
            }
        }
        uVar7 = 0;
    }
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar7;
}



void FUN_1407f1e20(undefined8 *param_1,undefined *param_2,longlong param_3,int param_4,
                   undefined8 param_5)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    undefined auStack152 [32];
    undefined local_78;
    undefined8 local_70;
    int local_68;
    int local_64;
    undefined local_50 [24];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    FUN_1407f6cf8(*param_1,&local_68,local_50,0x16);
    if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
    }
    else {
        lVar3 = -1;
        if (param_3 != -1) {
            lVar3 = param_3 - (ulonglong)(local_68 == 0x2d);
        }
        iVar1 = FUN_1407f69cc(param_2 + (local_68 == 0x2d),lVar3,local_64 + param_4,&local_68);
        if (iVar1 == 0) {
            local_70 = param_5;
            local_78 = 0;
            FUN_1407f1cbc(param_2,param_3,param_4,&local_68);
        }
        else {
            *param_2 = 0;
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack152);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407f1ef4(undefined8 *param_1,undefined *param_2,longlong param_3,int param_4,
                   undefined4 param_5,undefined8 param_6)

{
    char *pcVar1;
    int iVar2;
    int *piVar3;
    longlong lVar4;
    char *pcVar5;
    int iVar6;
    undefined auStack168 [32];
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    int local_68;
    int local_64;
    undefined local_50 [24];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    FUN_1407f6cf8(*param_1,&local_68,local_50,0x16);
    if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
    }
    else {
        iVar6 = local_64 + -1;
        lVar4 = -1;
        if (param_3 != -1) {
            lVar4 = param_3 - (ulonglong)(local_68 == 0x2d);
        }
        iVar2 = FUN_1407f69cc(param_2 + (local_68 == 0x2d),lVar4,param_4,&local_68);
        if (iVar2 == 0) {
            local_64 = local_64 + -1;
            if ((local_64 < -4) || (param_4 <= local_64)) {
                local_78 = param_6;
                local_88 = &local_68;
                local_80 = CONCAT71(local_80._1_7_,1);
                FUN_1407f19c8(param_2,param_3,param_4,param_5);
            }
            else {
                pcVar1 = param_2 + (local_68 == 0x2d);
                if (iVar6 < local_64) {
                    do {
                        pcVar5 = pcVar1;
                        pcVar1 = pcVar5 + 1;
                    } while (*pcVar5 != '\0');
                    pcVar5[-1] = '\0';
                }
                local_80 = param_6;
                local_88 = (int *)CONCAT71(local_88._1_7_,1);
                FUN_1407f1cbc(param_2,param_3,param_4,&local_68);
            }
        }
        else {
            *param_2 = 0;
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack168);
    return;
}



void FUN_1407f2030(char *param_1,localeinfo_struct *param_2)

{
    char cVar1;
    char *pcVar2;
    longlong local_28 [2];
    longlong local_18;
    char local_10;
    char *pcVar3;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_2);
    cVar1 = *param_1;
    if (cVar1 != '\0') {
        do {
            if (cVar1 == ***(char ***)(local_28[0] + 0xf0)) break;
            param_1 = param_1 + 1;
            cVar1 = *param_1;
        } while (cVar1 != '\0');
    }
    if (*param_1 != '\0') {
        do {
            param_1 = param_1 + 1;
            pcVar2 = param_1;
            if (*param_1 == '\0') break;
        } while ((*param_1 + 0xbbU & 0xdf) != 0);
        do {
            pcVar3 = pcVar2;
            pcVar2 = pcVar3 + -1;
        } while (*pcVar2 == '0');
        if (*pcVar2 == ***(char ***)(local_28[0] + 0xf0)) {
            pcVar2 = pcVar3 + -2;
        }
        do {
            cVar1 = *param_1;
            pcVar2 = pcVar2 + 1;
            param_1 = param_1 + 1;
            *pcVar2 = cVar1;
        } while (cVar1 != '\0');
    }
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return;
}



// Library Function - Single Match
//  _forcdecpt_l
//
// Library: Visual Studio 2012 Release

void _forcdecpt_l(char *_Buf,_locale_t _Locale)

{
    byte bVar1;
    int iVar2;
    byte bVar3;
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,_Locale);
    iVar2 = tolower((int)*_Buf);
    if (iVar2 != 0x65) {
        do {
            _Buf = (char *)((byte *)_Buf + 1);
            iVar2 = isdigit((uint)(byte)*_Buf);
        } while (iVar2 != 0);
    }
    iVar2 = tolower((int)*_Buf);
    if (iVar2 == 0x78) {
        _Buf = (char *)((byte *)_Buf + 2);
    }
    bVar3 = *_Buf;
    *_Buf = ***(byte ***)(local_28[0] + 0xf0);
    do {
        _Buf = (char *)((byte *)_Buf + 1);
        bVar1 = *_Buf;
        *_Buf = bVar3;
        bVar3 = bVar1;
    } while (*_Buf != 0);
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return;
}



int FUN_1407f21ac(int *param_1,LPSTR param_2,ulonglong param_3,WCHAR param_4,
                  localeinfo_struct *param_5)

{
    int iVar1;
    DWORD DVar2;
    int *piVar3;
    int local_res10 [2];
    WCHAR local_res20 [4];
    longlong local_28 [2];
    longlong local_18;
    char local_10;

    if ((param_2 == (LPSTR)0x0) && (param_3 != 0)) {
        if (param_1 != (int *)0x0) {
            *param_1 = 0;
        }
        return 0;
    }
    if (param_1 != (int *)0x0) {
        *param_1 = -1;
    }
    local_res20[0] = param_4;
    if (0x7fffffff < param_3) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        return 0x16;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_5);
    if (*(longlong *)(local_28[0] + 0x138) == 0) {
        if ((ushort)local_res20[0] < 0x100) {
            if (param_2 != (LPSTR)0x0) {
                if (param_3 == 0) goto LAB_1407f2320;
                *param_2 = (CHAR)local_res20[0];
            }
            if (param_1 != (int *)0x0) {
                *param_1 = 1;
            }
            LAB_1407f22f3:
            iVar1 = 0;
            goto LAB_1407f2262;
        }
        if ((param_2 != (LPSTR)0x0) && (param_3 != 0)) {
            FUN_1407e4830(param_2,0,param_3);
        }
    }
    else {
        local_res10[0] = 0;
        iVar1 = WideCharToMultiByte(*(UINT *)(local_28[0] + 4),0,local_res20,1,param_2,(int)param_3,
                                    (LPCSTR)0x0,local_res10);
        if (iVar1 == 0) {
            DVar2 = GetLastError();
            if (DVar2 == 0x7a) {
                if ((param_2 != (LPSTR)0x0) && (param_3 != 0)) {
                    FUN_1407e4830(param_2,0,param_3);
                }
                LAB_1407f2320:
                piVar3 = _errno();
                iVar1 = 0x22;
                *piVar3 = 0x22;
                FUN_1407dc370();
                goto LAB_1407f2262;
            }
        }
        else if (local_res10[0] == 0) {
            if (param_1 != (int *)0x0) {
                *param_1 = iVar1;
            }
            goto LAB_1407f22f3;
        }
    }
    piVar3 = _errno();
    *piVar3 = 0x2a;
    piVar3 = _errno();
    iVar1 = *piVar3;
    LAB_1407f2262:
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return iVar1;
}



void FUN_1407f2338(void)

{
    FUN_1407f21ac();
    return;
}



void FUN_1407f234c(ushort *param_1,uint *param_2)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    byte bVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    ulonglong uVar10;
    uint uVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    undefined8 *puVar15;
    longlong lVar16;
    int iVar17;
    longlong lVar18;
    longlong lVar19;
    bool bVar20;
    undefined auStack136 [32];
    int local_68;
    uint local_64;
    int local_60;
    uint *local_58;
    int local_50;
    uint local_4c;
    ulonglong local_48;
    undefined8 local_40;
    int local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    uVar4 = 0;
    local_64 = param_1[5] & 0x8000;
    local_50 = (uint)*param_1 << 0x10;
    uVar11 = param_1[5] & 0x7fff;
    iVar12 = uVar11 - 0x3fff;
    local_40 = CONCAT44(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 3));
    local_38 = local_50;
    uVar10 = 1;
    lVar18 = 3;
    iVar3 = 0;
    local_58 = param_2;
    if (iVar12 == -0x3fff) {
        do {
            if (*(int *)((longlong)&local_40 + uVar4 * 4) != 0) {
                local_40 = 0;
                local_38 = 0;
                iVar3 = 0;
                break;
            }
            uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < 3);
    }
    else {
        local_48 = local_40;
        local_60 = DAT_140c104b8 + -1;
        uVar8 = DAT_140c104b8 >> 0x1f & 0x1f;
        uVar2 = DAT_140c104b8 + uVar8;
        iVar17 = (int)uVar2 >> 5;
        local_4c = 0x1f - ((uVar2 & 0x1f) - uVar8);
        iVar14 = 0;
        if ((*(uint *)((longlong)&local_40 + (longlong)iVar17 * 4) >> (local_4c & 0x1f) & 1) != 0) {
            if ((*(uint *)((longlong)&local_40 + (longlong)iVar17 * 4) & ~(-1 << ((byte)local_4c & 0x1f)))
                == 0) {
                for (lVar5 = (longlong)(iVar17 + 1); iVar14 = iVar3, lVar5 < 3; lVar5 = lVar5 + 1) {
                    if (*(int *)((longlong)&local_40 + lVar5 * 4) != 0) goto LAB_1407f246c;
                }
            }
            else {
                LAB_1407f246c:
                uVar2 = local_60 >> 0x1f & 0x1f;
                iVar3 = local_60 + uVar2;
                iVar13 = iVar3 >> 5;
                uVar8 = *(uint *)((longlong)&local_40 + (longlong)iVar13 * 4);
                uVar9 = 1 << (0x1f - (((byte)iVar3 & 0x1f) - (char)uVar2) & 0x1f);
                uVar2 = uVar8 + uVar9;
                if ((uVar2 < uVar8) || (uVar7 = uVar4, uVar2 < uVar9)) {
                    uVar7 = 1;
                }
                *(uint *)((longlong)&local_40 + (longlong)iVar13 * 4) = uVar2;
                lVar5 = (longlong)(iVar13 + -1);
                iVar14 = (int)uVar7;
                if (-1 < iVar13 + -1) {
                    do {
                        iVar14 = (int)uVar7;
                        if ((int)uVar7 == 0) break;
                        uVar8 = *(uint *)((longlong)&local_40 + lVar5 * 4);
                        uVar2 = uVar8 + 1;
                        if ((uVar2 < uVar8) || (uVar7 = uVar4, uVar2 == 0)) {
                            uVar7 = uVar10;
                        }
                        *(uint *)((longlong)&local_40 + lVar5 * 4) = uVar2;
                        lVar5 = lVar5 + -1;
                        iVar14 = (int)uVar7;
                    } while (-1 < lVar5);
                }
            }
        }
        puVar1 = (uint *)((longlong)&local_40 + (longlong)iVar17 * 4);
        *puVar1 = *puVar1 & -1 << ((byte)local_4c & 0x1f);
        local_68 = iVar12;
        if (iVar17 + 1 < 3) {
            FUN_1407e4830();
        }
        if (iVar14 != 0) {
            iVar12 = uVar11 - 0x3ffe;
        }
        if (iVar12 < DAT_140c104b4 - DAT_140c104b8) {
            local_40 = 0;
            local_38 = 0;
            iVar3 = 0;
        }
        else if (DAT_140c104b4 < iVar12) {
            uVar11 = DAT_140c104bc >> 0x1f & 0x1f;
            iVar14 = DAT_140c104bc + uVar11;
            bVar6 = ((byte)iVar14 & 0x1f) - (char)uVar11;
            iVar14 = iVar14 >> 5;
            uVar11 = ~(-1 << (bVar6 & 0x1f));
            if (iVar12 < DAT_140c104b0) {
                local_40 = local_40 & 0xffffffff7fffffff;
                iVar3 = DAT_140c104c4 + iVar12;
                puVar15 = &local_40;
                do {
                    uVar2 = *(uint *)puVar15;
                    *(uint *)puVar15 = uVar2 >> (bVar6 & 0x1f) | (uint)uVar4;
                    puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                    uVar4 = (ulonglong)((uVar2 & uVar11) << (0x20 - bVar6 & 0x1f));
                    lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                lVar18 = 2;
                do {
                    if (lVar18 < iVar14) {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) = 0;
                    }
                    else {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) =
                                *(undefined4 *)((longlong)&local_40 + lVar18 * 4 + (longlong)iVar14 * -4);
                    }
                    lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
            }
            else {
                local_40 = 0x80000000;
                local_38 = 0;
                puVar15 = &local_40;
                do {
                    uVar2 = (uint)uVar4;
                    uVar4 = (ulonglong)((uVar11 & *(uint *)puVar15) << (0x20 - bVar6 & 0x1f));
                    *(uint *)puVar15 = *(uint *)puVar15 >> (bVar6 & 0x1f) | uVar2;
                    puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                    lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                lVar18 = 2;
                do {
                    if (lVar18 < iVar14) {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) = 0;
                    }
                    else {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) =
                                *(undefined4 *)((longlong)&local_40 + lVar18 * 4 + (longlong)iVar14 * -4);
                    }
                    lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
                iVar3 = DAT_140c104c4 + DAT_140c104b0;
            }
        }
        else {
            local_40 = local_48;
            local_38 = local_50;
            uVar11 = DAT_140c104b4 - local_68 >> 0x1f & 0x1f;
            puVar15 = &local_40;
            iVar3 = (DAT_140c104b4 - local_68) + uVar11;
            bVar6 = ((byte)iVar3 & 0x1f) - (char)uVar11;
            uVar7 = uVar4;
            do {
                uVar11 = *(uint *)puVar15;
                *(uint *)puVar15 = uVar11 >> (bVar6 & 0x1f) | (uint)uVar7;
                puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                uVar7 = (ulonglong)((uVar11 & ~(-1 << (bVar6 & 0x1f))) << (0x20 - bVar6 & 0x1f));
                lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            lVar16 = (longlong)(iVar3 >> 5);
            lVar18 = 2;
            lVar19 = 3;
            lVar5 = 2;
            do {
                if (lVar5 < lVar16) {
                    *(undefined4 *)((longlong)&local_40 + lVar5 * 4) = 0;
                }
                else {
                    *(undefined4 *)((longlong)&local_40 + lVar5 * 4) =
                            *(undefined4 *)((longlong)&local_40 + lVar5 * 4 + lVar16 * -4);
                }
                lVar5 = lVar5 + -1;
            } while (-1 < lVar5);
            uVar2 = local_60 + 1 >> 0x1f & 0x1f;
            uVar11 = local_60 + 1 + uVar2;
            iVar3 = (int)uVar11 >> 5;
            uVar11 = 0x1f - ((uVar11 & 0x1f) - uVar2);
            bVar6 = (byte)uVar11;
            if ((*(uint *)((longlong)&local_40 + (longlong)iVar3 * 4) >> (uVar11 & 0x1f) & 1) != 0) {
                if ((*(uint *)((longlong)&local_40 + (longlong)iVar3 * 4) & ~(-1 << (bVar6 & 0x1f))) == 0) {
                    for (lVar5 = (longlong)(iVar3 + 1); lVar5 < 3; lVar5 = lVar5 + 1) {
                        if (*(int *)((longlong)&local_40 + lVar5 * 4) != 0) goto LAB_1407f2642;
                    }
                }
                else {
                    LAB_1407f2642:
                    uVar11 = local_60 >> 0x1f & 0x1f;
                    iVar12 = local_60 + uVar11;
                    iVar14 = iVar12 >> 5;
                    uVar2 = *(uint *)((longlong)&local_40 + (longlong)iVar14 * 4);
                    uVar8 = 1 << (0x1f - (((byte)iVar12 & 0x1f) - (char)uVar11) & 0x1f);
                    uVar11 = uVar2 + uVar8;
                    if ((uVar11 < uVar2) || (uVar7 = uVar4, uVar11 < uVar8)) {
                        uVar7 = uVar10;
                    }
                    *(uint *)((longlong)&local_40 + (longlong)iVar14 * 4) = uVar11;
                    lVar5 = (longlong)(iVar14 + -1);
                    if (-1 < iVar14 + -1) {
                        do {
                            if ((int)uVar7 == 0) break;
                            uVar2 = *(uint *)((longlong)&local_40 + lVar5 * 4);
                            uVar11 = uVar2 + 1;
                            if ((uVar11 < uVar2) || (uVar7 = uVar4, uVar11 == 0)) {
                                uVar7 = uVar10;
                            }
                            *(uint *)((longlong)&local_40 + lVar5 * 4) = uVar11;
                            lVar5 = lVar5 + -1;
                        } while (-1 < lVar5);
                    }
                }
            }
            puVar1 = (uint *)((longlong)&local_40 + (longlong)iVar3 * 4);
            *puVar1 = *puVar1 & -1 << (bVar6 & 0x1f);
            lVar5 = (longlong)(iVar3 + 1);
            if (lVar5 < 3) {
                FUN_1407e4830((longlong)&local_40 + lVar5 * 4,0,(3 - lVar5) * 4);
            }
            puVar15 = &local_40;
            uVar11 = DAT_140c104bc + 1 >> 0x1f & 0x1f;
            iVar3 = DAT_140c104bc + 1 + uVar11;
            bVar6 = ((byte)iVar3 & 0x1f) - (char)uVar11;
            do {
                uVar11 = *(uint *)puVar15;
                *(uint *)puVar15 = uVar11 >> (bVar6 & 0x1f) | (uint)uVar4;
                puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                uVar4 = (ulonglong)((uVar11 & ~(-1 << (bVar6 & 0x1f))) << (0x20 - bVar6 & 0x1f));
                lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar5 = (longlong)(iVar3 >> 5);
            do {
                if (lVar18 < lVar5) {
                    *(undefined4 *)((longlong)&local_40 + lVar18 * 4) = 0;
                }
                else {
                    *(undefined4 *)((longlong)&local_40 + lVar18 * 4) =
                            *(undefined4 *)((longlong)&local_40 + lVar18 * 4 + lVar5 * -4);
                }
                lVar18 = lVar18 + -1;
            } while (-1 < lVar18);
            iVar3 = 0;
        }
    }
    bVar20 = local_64 != 0;
    local_64 = -local_64;
    local_40._0_4_ =
            iVar3 << (0x1fU - (char)DAT_140c104bc & 0x1f) | -(uint)bVar20 & 0x80000000 | (uint)local_40;
    if (DAT_140c104c0 == 0x40) {
        local_58[1] = (uint)local_40;
        *local_58 = local_40._4_4_;
    }
    else if (DAT_140c104c0 == 0x20) {
        *local_58 = (uint)local_40;
    }
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack136);
    return;
}



void FUN_1407f28fc(ushort *param_1,uint *param_2)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    byte bVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    ulonglong uVar10;
    uint uVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    undefined8 *puVar15;
    longlong lVar16;
    int iVar17;
    longlong lVar18;
    longlong lVar19;
    bool bVar20;
    undefined auStack136 [32];
    int local_68;
    uint local_64;
    int local_60;
    uint *local_58;
    int local_50;
    uint local_4c;
    ulonglong local_48;
    undefined8 local_40;
    int local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    uVar4 = 0;
    local_64 = param_1[5] & 0x8000;
    local_50 = (uint)*param_1 << 0x10;
    uVar11 = param_1[5] & 0x7fff;
    iVar12 = uVar11 - 0x3fff;
    local_40 = CONCAT44(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 3));
    local_38 = local_50;
    uVar10 = 1;
    lVar18 = 3;
    iVar3 = 0;
    local_58 = param_2;
    if (iVar12 == -0x3fff) {
        do {
            if (*(int *)((longlong)&local_40 + uVar4 * 4) != 0) {
                local_40 = 0;
                local_38 = 0;
                iVar3 = 0;
                break;
            }
            uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < 3);
    }
    else {
        local_48 = local_40;
        local_60 = DAT_140c104d0 + -1;
        uVar8 = DAT_140c104d0 >> 0x1f & 0x1f;
        uVar2 = DAT_140c104d0 + uVar8;
        iVar17 = (int)uVar2 >> 5;
        local_4c = 0x1f - ((uVar2 & 0x1f) - uVar8);
        iVar14 = 0;
        if ((*(uint *)((longlong)&local_40 + (longlong)iVar17 * 4) >> (local_4c & 0x1f) & 1) != 0) {
            if ((*(uint *)((longlong)&local_40 + (longlong)iVar17 * 4) & ~(-1 << ((byte)local_4c & 0x1f)))
                == 0) {
                for (lVar5 = (longlong)(iVar17 + 1); iVar14 = iVar3, lVar5 < 3; lVar5 = lVar5 + 1) {
                    if (*(int *)((longlong)&local_40 + lVar5 * 4) != 0) goto LAB_1407f2a1c;
                }
            }
            else {
                LAB_1407f2a1c:
                uVar2 = local_60 >> 0x1f & 0x1f;
                iVar3 = local_60 + uVar2;
                iVar13 = iVar3 >> 5;
                uVar8 = *(uint *)((longlong)&local_40 + (longlong)iVar13 * 4);
                uVar9 = 1 << (0x1f - (((byte)iVar3 & 0x1f) - (char)uVar2) & 0x1f);
                uVar2 = uVar8 + uVar9;
                if ((uVar2 < uVar8) || (uVar7 = uVar4, uVar2 < uVar9)) {
                    uVar7 = 1;
                }
                *(uint *)((longlong)&local_40 + (longlong)iVar13 * 4) = uVar2;
                lVar5 = (longlong)(iVar13 + -1);
                iVar14 = (int)uVar7;
                if (-1 < iVar13 + -1) {
                    do {
                        iVar14 = (int)uVar7;
                        if ((int)uVar7 == 0) break;
                        uVar8 = *(uint *)((longlong)&local_40 + lVar5 * 4);
                        uVar2 = uVar8 + 1;
                        if ((uVar2 < uVar8) || (uVar7 = uVar4, uVar2 == 0)) {
                            uVar7 = uVar10;
                        }
                        *(uint *)((longlong)&local_40 + lVar5 * 4) = uVar2;
                        lVar5 = lVar5 + -1;
                        iVar14 = (int)uVar7;
                    } while (-1 < lVar5);
                }
            }
        }
        puVar1 = (uint *)((longlong)&local_40 + (longlong)iVar17 * 4);
        *puVar1 = *puVar1 & -1 << ((byte)local_4c & 0x1f);
        local_68 = iVar12;
        if (iVar17 + 1 < 3) {
            FUN_1407e4830();
        }
        if (iVar14 != 0) {
            iVar12 = uVar11 - 0x3ffe;
        }
        if (iVar12 < DAT_140c104cc - DAT_140c104d0) {
            local_40 = 0;
            local_38 = 0;
            iVar3 = 0;
        }
        else if (DAT_140c104cc < iVar12) {
            uVar11 = DAT_140c104d4 >> 0x1f & 0x1f;
            iVar14 = DAT_140c104d4 + uVar11;
            bVar6 = ((byte)iVar14 & 0x1f) - (char)uVar11;
            iVar14 = iVar14 >> 5;
            uVar11 = ~(-1 << (bVar6 & 0x1f));
            if (iVar12 < DAT_140c104c8) {
                local_40 = local_40 & 0xffffffff7fffffff;
                iVar3 = DAT_140c104dc + iVar12;
                puVar15 = &local_40;
                do {
                    uVar2 = *(uint *)puVar15;
                    *(uint *)puVar15 = uVar2 >> (bVar6 & 0x1f) | (uint)uVar4;
                    puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                    uVar4 = (ulonglong)((uVar2 & uVar11) << (0x20 - bVar6 & 0x1f));
                    lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                lVar18 = 2;
                do {
                    if (lVar18 < iVar14) {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) = 0;
                    }
                    else {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) =
                                *(undefined4 *)((longlong)&local_40 + lVar18 * 4 + (longlong)iVar14 * -4);
                    }
                    lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
            }
            else {
                local_40 = 0x80000000;
                local_38 = 0;
                puVar15 = &local_40;
                do {
                    uVar2 = (uint)uVar4;
                    uVar4 = (ulonglong)((uVar11 & *(uint *)puVar15) << (0x20 - bVar6 & 0x1f));
                    *(uint *)puVar15 = *(uint *)puVar15 >> (bVar6 & 0x1f) | uVar2;
                    puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                    lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                lVar18 = 2;
                do {
                    if (lVar18 < iVar14) {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) = 0;
                    }
                    else {
                        *(undefined4 *)((longlong)&local_40 + lVar18 * 4) =
                                *(undefined4 *)((longlong)&local_40 + lVar18 * 4 + (longlong)iVar14 * -4);
                    }
                    lVar18 = lVar18 + -1;
                } while (-1 < lVar18);
                iVar3 = DAT_140c104dc + DAT_140c104c8;
            }
        }
        else {
            local_40 = local_48;
            local_38 = local_50;
            uVar11 = DAT_140c104cc - local_68 >> 0x1f & 0x1f;
            puVar15 = &local_40;
            iVar3 = (DAT_140c104cc - local_68) + uVar11;
            bVar6 = ((byte)iVar3 & 0x1f) - (char)uVar11;
            uVar7 = uVar4;
            do {
                uVar11 = *(uint *)puVar15;
                *(uint *)puVar15 = uVar11 >> (bVar6 & 0x1f) | (uint)uVar7;
                puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                uVar7 = (ulonglong)((uVar11 & ~(-1 << (bVar6 & 0x1f))) << (0x20 - bVar6 & 0x1f));
                lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            lVar16 = (longlong)(iVar3 >> 5);
            lVar18 = 2;
            lVar19 = 3;
            lVar5 = 2;
            do {
                if (lVar5 < lVar16) {
                    *(undefined4 *)((longlong)&local_40 + lVar5 * 4) = 0;
                }
                else {
                    *(undefined4 *)((longlong)&local_40 + lVar5 * 4) =
                            *(undefined4 *)((longlong)&local_40 + lVar5 * 4 + lVar16 * -4);
                }
                lVar5 = lVar5 + -1;
            } while (-1 < lVar5);
            uVar2 = local_60 + 1 >> 0x1f & 0x1f;
            uVar11 = local_60 + 1 + uVar2;
            iVar3 = (int)uVar11 >> 5;
            uVar11 = 0x1f - ((uVar11 & 0x1f) - uVar2);
            bVar6 = (byte)uVar11;
            if ((*(uint *)((longlong)&local_40 + (longlong)iVar3 * 4) >> (uVar11 & 0x1f) & 1) != 0) {
                if ((*(uint *)((longlong)&local_40 + (longlong)iVar3 * 4) & ~(-1 << (bVar6 & 0x1f))) == 0) {
                    for (lVar5 = (longlong)(iVar3 + 1); lVar5 < 3; lVar5 = lVar5 + 1) {
                        if (*(int *)((longlong)&local_40 + lVar5 * 4) != 0) goto LAB_1407f2bf2;
                    }
                }
                else {
                    LAB_1407f2bf2:
                    uVar11 = local_60 >> 0x1f & 0x1f;
                    iVar12 = local_60 + uVar11;
                    iVar14 = iVar12 >> 5;
                    uVar2 = *(uint *)((longlong)&local_40 + (longlong)iVar14 * 4);
                    uVar8 = 1 << (0x1f - (((byte)iVar12 & 0x1f) - (char)uVar11) & 0x1f);
                    uVar11 = uVar2 + uVar8;
                    if ((uVar11 < uVar2) || (uVar7 = uVar4, uVar11 < uVar8)) {
                        uVar7 = uVar10;
                    }
                    *(uint *)((longlong)&local_40 + (longlong)iVar14 * 4) = uVar11;
                    lVar5 = (longlong)(iVar14 + -1);
                    if (-1 < iVar14 + -1) {
                        do {
                            if ((int)uVar7 == 0) break;
                            uVar2 = *(uint *)((longlong)&local_40 + lVar5 * 4);
                            uVar11 = uVar2 + 1;
                            if ((uVar11 < uVar2) || (uVar7 = uVar4, uVar11 == 0)) {
                                uVar7 = uVar10;
                            }
                            *(uint *)((longlong)&local_40 + lVar5 * 4) = uVar11;
                            lVar5 = lVar5 + -1;
                        } while (-1 < lVar5);
                    }
                }
            }
            puVar1 = (uint *)((longlong)&local_40 + (longlong)iVar3 * 4);
            *puVar1 = *puVar1 & -1 << (bVar6 & 0x1f);
            lVar5 = (longlong)(iVar3 + 1);
            if (lVar5 < 3) {
                FUN_1407e4830((longlong)&local_40 + lVar5 * 4,0,(3 - lVar5) * 4);
            }
            puVar15 = &local_40;
            uVar11 = DAT_140c104d4 + 1 >> 0x1f & 0x1f;
            iVar3 = DAT_140c104d4 + 1 + uVar11;
            bVar6 = ((byte)iVar3 & 0x1f) - (char)uVar11;
            do {
                uVar11 = *(uint *)puVar15;
                *(uint *)puVar15 = uVar11 >> (bVar6 & 0x1f) | (uint)uVar4;
                puVar15 = (undefined8 *)((longlong)puVar15 + 4);
                uVar4 = (ulonglong)((uVar11 & ~(-1 << (bVar6 & 0x1f))) << (0x20 - bVar6 & 0x1f));
                lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar5 = (longlong)(iVar3 >> 5);
            do {
                if (lVar18 < lVar5) {
                    *(undefined4 *)((longlong)&local_40 + lVar18 * 4) = 0;
                }
                else {
                    *(undefined4 *)((longlong)&local_40 + lVar18 * 4) =
                            *(undefined4 *)((longlong)&local_40 + lVar18 * 4 + lVar5 * -4);
                }
                lVar18 = lVar18 + -1;
            } while (-1 < lVar18);
            iVar3 = 0;
        }
    }
    bVar20 = local_64 != 0;
    local_64 = -local_64;
    local_40._0_4_ =
            iVar3 << (0x1fU - (char)DAT_140c104d4 & 0x1f) | -(uint)bVar20 & 0x80000000 | (uint)local_40;
    if (DAT_140c104d8 == 0x40) {
        local_58[1] = (uint)local_40;
        *local_58 = local_40._4_4_;
    }
    else if (DAT_140c104d8 == 0x20) {
        *local_58 = (uint)local_40;
    }
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack136);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407f2eac(ushort *param_1,byte **param_2,byte *param_3,int param_4,int param_5,int param_6,
                   int param_7,longlong *param_8)

{
    ushort uVar1;
    uint uVar2;
    int *piVar3;
    ushort uVar4;
    uint uVar5;
    uint *puVar6;
    byte bVar7;
    ulonglong uVar8;
    uint uVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    byte *pbVar13;
    ushort *puVar14;
    ushort uVar15;
    byte *pbVar16;
    uint uVar17;
    int iVar18;
    char *pcVar19;
    int iVar20;
    ushort uVar21;
    uint uVar22;
    uint uVar23;
    uint uVar24;
    longlong lVar25;
    byte **ppbVar26;
    undefined auStack216 [32];
    int local_b8;
    int local_b4;
    uint local_b0;
    int local_ac;
    byte **local_a8;
    longlong local_a0;
    ushort *local_98;
    byte local_90;
    undefined uStack143;
    ushort uStack142;
    ushort auStack140 [6];
    ushort local_80 [4];
    undefined2 uStack120;
    ushort uStack118;
    byte *local_70;
    undefined4 local_68;
    char local_60 [23];
    char local_49;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    uVar9 = 0;
    uVar2 = 0;
    pcVar19 = local_60;
    uVar1 = 0;
    local_b0 = local_b0 & 0xffff0000;
    iVar10 = 0;
    local_b4 = 1;
    local_b8 = 0;
    uVar24 = 0;
    pbVar13 = param_3;
    local_ac = param_4;
    local_a8 = param_2;
    local_98 = param_1;
    if (param_8 == (longlong *)0x0) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        goto LAB_1407f36d6;
    }
    while ((uVar12 = uVar9, uVar5 = uVar9, uVar11 = uVar9, uVar17 = uVar9, uVar22 = uVar9,
            *pbVar13 < 0x21 &&
            (uVar12 = 0, uVar5 = 0, uVar11 = 0, uVar17 = 0, uVar22 = 0,
                    (0x100002600U >> ((longlong)(char)*pbVar13 & 0x3fU) & 1) != 0))) {
        pbVar13 = pbVar13 + 1;
    }
    LAB_1407f2f49:
    do {
        bVar7 = *pbVar13;
        pbVar16 = pbVar13 + 1;
        uVar23 = uVar2;
        if (uVar5 < 6) {
            if (uVar5 == 5) {
                local_b8 = 1;
                pbVar13 = param_3;
                uVar23 = 0;
                if (9 < (byte)(bVar7 - 0x30)) break;
                uVar5 = 4;
            }
            else {
                if (uVar5 != 0) {
                    if (uVar5 == 1) {
                        uVar12 = 1;
                        if ((byte)(bVar7 - 0x31) < 9) {
                            uVar5 = 3;
                            pbVar13 = param_3;
                            goto LAB_1407f306c;
                        }
                        if (bVar7 == ***(byte ***)(*param_8 + 0xf0)) {
                            LAB_1407f3050:
                            uVar12 = 1;
                            uVar5 = 4;
                            pbVar13 = pbVar16;
                            goto LAB_1407f2f49;
                        }
                        if ((bVar7 - 0x2b & 0xfd) == 0) goto LAB_1407f3000;
                        if (bVar7 == 0x30) goto LAB_1407f30a4;
                    }
                    else {
                        if (uVar5 == 2) {
                            if ((byte)(bVar7 - 0x31) < 9) goto LAB_1407f3061;
                            if (bVar7 == ***(byte ***)(*param_8 + 0xf0)) goto LAB_1407f3085;
                            pbVar13 = param_3;
                            if (bVar7 == 0x30) goto LAB_1407f30a4;
                            break;
                        }
                        if (uVar5 == 3) {
                            while (('/' < (char)bVar7 && ((char)bVar7 < ':'))) {
                                if (uVar17 < 0x19) {
                                    uVar17 = uVar17 + 1;
                                    *pcVar19 = bVar7 - 0x30;
                                    pcVar19 = pcVar19 + 1;
                                }
                                else {
                                    uVar11 = uVar11 + 1;
                                }
                                bVar7 = *pbVar16;
                                pbVar16 = pbVar16 + 1;
                            }
                            if (bVar7 == ***(byte ***)(*param_8 + 0xf0)) goto LAB_1407f3050;
                        }
                        else {
                            if (uVar5 != 4) goto LAB_1407f3227;
                            local_b8 = 1;
                            if (uVar17 == 0) {
                                while (bVar7 == 0x30) {
                                    uVar11 = uVar11 - 1;
                                    bVar7 = *pbVar16;
                                    pbVar16 = pbVar16 + 1;
                                }
                            }
                            while (('/' < (char)bVar7 && ((char)bVar7 < ':'))) {
                                if (uVar17 < 0x19) {
                                    uVar17 = uVar17 + 1;
                                    *pcVar19 = bVar7 - 0x30;
                                    pcVar19 = pcVar19 + 1;
                                    uVar11 = uVar11 - 1;
                                }
                                bVar7 = *pbVar16;
                                pbVar16 = pbVar16 + 1;
                            }
                        }
                        if ((bVar7 - 0x2b & 0xfd) == 0) {
                            LAB_1407f3000:
                            uVar12 = 1;
                            uVar5 = 0xb;
                            pbVar13 = pbVar16 + -1;
                            goto LAB_1407f2f49;
                        }
                    }
                    uVar12 = 1;
                    uVar23 = 0;
                    if (((char)bVar7 < 'D') ||
                        (('E' < (char)bVar7 && (uVar23 = uVar24, bVar7 != 100 && bVar7 != 0x65))))
                        goto LAB_1407f3121;
                    uVar5 = 6;
                    pbVar13 = pbVar16;
                    uVar12 = 1;
                    goto LAB_1407f2f49;
                }
                if (8 < (byte)(bVar7 - 0x31)) {
                    if (bVar7 == ***(byte ***)(*param_8 + 0xf0)) {
                        LAB_1407f3085:
                        uVar5 = 5;
                        pbVar13 = pbVar16;
                    }
                    else if (bVar7 == 0x2b) {
                        uVar5 = 2;
                        local_b0 = local_b0 & 0xffff0000;
                        pbVar13 = pbVar16;
                    }
                    else if (bVar7 == 0x2d) {
                        uVar5 = 2;
                        local_b0 = 0x8000;
                        pbVar13 = pbVar16;
                    }
                    else {
                        uVar23 = uVar24;
                        if (bVar7 != 0x30) goto LAB_1407f3121;
                        LAB_1407f30a4:
                        uVar5 = 1;
                        pbVar13 = pbVar16;
                    }
                    goto LAB_1407f2f49;
                }
                LAB_1407f3061:
                uVar5 = 3;
                pbVar13 = param_3;
            }
            LAB_1407f306c:
            param_3 = pbVar13;
            pbVar13 = pbVar16 + -1;
            goto LAB_1407f2f49;
        }
        if (uVar5 == 6) {
            pbVar13 = pbVar13 + -1;
            if ((byte)(bVar7 - 0x31) < 9) goto LAB_1407f31ee;
            if (bVar7 != 0x2b) {
                if (bVar7 != 0x2d) goto LAB_1407f31f8;
                LAB_1407f31a3:
                local_b4 = -1;
                uVar5 = 7;
                param_3 = pbVar13;
                pbVar13 = pbVar16;
                goto LAB_1407f2f49;
            }
            uVar5 = 7;
            param_3 = pbVar13;
        }
        else {
            if (uVar5 == 7) {
                pbVar13 = param_3;
                if ((byte)(bVar7 - 0x31) < 9) {
                    LAB_1407f31ee:
                    uVar5 = 9;
                    goto LAB_1407f306c;
                }
                LAB_1407f31f8:
                if (bVar7 != 0x30) break;
                uVar5 = 8;
                param_3 = pbVar13;
                pbVar13 = pbVar16;
                goto LAB_1407f2f49;
            }
            if (uVar5 == 8) {
                uVar22 = 1;
                while (bVar7 == 0x30) {
                    bVar7 = *pbVar16;
                    pbVar16 = pbVar16 + 1;
                }
                uVar23 = uVar24;
                if ((byte)(bVar7 - 0x31) < 9) {
                    uVar5 = 9;
                    pbVar13 = param_3;
                    uVar22 = 1;
                    goto LAB_1407f306c;
                }
                goto LAB_1407f3121;
            }
            if (uVar5 == 9) {
                uVar22 = 1;
                uVar23 = uVar9;
                goto LAB_1407f3268;
            }
            if (uVar5 == 0xb) {
                uVar23 = uVar24;
                if (param_7 == 0) goto LAB_1407f3121;
                if (bVar7 != 0x2b) {
                    uVar23 = uVar2;
                    if (bVar7 == 0x2d) goto LAB_1407f31a3;
                    break;
                }
                uVar5 = 7;
                param_3 = pbVar13;
                pbVar13 = pbVar16;
                goto LAB_1407f2f49;
            }
        }
        LAB_1407f3227:
        pbVar13 = pbVar16;
    } while (uVar5 != 10);
    goto LAB_1407f3299;
    LAB_1407f3268:
    if (((char)bVar7 < '0') || ('9' < (char)bVar7)) goto LAB_1407f3286;
    uVar23 = (int)(char)bVar7 + (uVar23 * 5 + -0x18) * 2;
    if ((int)uVar23 < 0x1451) {
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
        goto LAB_1407f3268;
    }
    uVar23 = 0x1451;
    LAB_1407f3286:
    while (('/' < (char)bVar7 && ((char)bVar7 < ':'))) {
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
    }
    LAB_1407f3121:
    pbVar13 = pbVar16 + -1;
    LAB_1407f3299:
    *param_2 = pbVar13;
    iVar18 = iVar10;
    if (uVar12 == 0) {
        uVar1 = 0;
        uVar4 = 0;
    }
    else {
        if (0x18 < uVar17) {
            if ('\x04' < local_49) {
                local_49 = local_49 + '\x01';
            }
            pcVar19 = pcVar19 + -1;
            uVar17 = 0x18;
            uVar11 = uVar11 + 1;
        }
        if (uVar17 == 0) {
            uVar4 = 0;
            uVar1 = 0;
        }
        else {
            while (pcVar19 = pcVar19 + -1, *pcVar19 == '\0') {
                uVar11 = uVar11 + 1;
            }
            FUN_1407f6db0();
            if (local_b4 < 0) {
                uVar23 = -uVar23;
            }
            uVar23 = uVar23 + uVar11;
            if (uVar22 == 0) {
                uVar23 = uVar23 + param_5;
            }
            if (local_b8 == 0) {
                uVar23 = uVar23 - param_6;
            }
            if ((int)uVar23 < 0x1451) {
                if ((int)uVar23 < -0x1450) {
                    uVar4 = 0;
                }
                else {
                    lVar25 = 0x140c10660;
                    if (uVar23 != 0) {
                        if ((int)uVar23 < 0) {
                            uVar23 = -uVar23;
                            lVar25 = 0x140c107c0;
                        }
                        if (local_ac == 0) {
                            local_80[0] = 0;
                        }
                        joined_r0x0001407f3361:
                        do {
                            if (uVar23 == 0) break;
                            lVar25 = lVar25 + 0x54;
                            uVar24 = (int)uVar23 >> 3;
                            uVar2 = uVar23 & 7;
                            uVar23 = uVar24;
                            local_a0 = lVar25;
                            if (uVar2 != 0) {
                                local_a8 = (byte **)(lVar25 + (longlong)(int)uVar2 * 0xc);
                                if (0x7fff < *(ushort *)local_a8) {
                                    pbVar13 = *local_a8;
                                    ppbVar26 = local_a8 + 1;
                                    local_a8 = &local_70;
                                    local_68 = *(undefined4 *)ppbVar26;
                                    local_70._0_6_ = CONCAT42((int)((ulonglong)pbVar13 >> 0x10) + -1,(short)pbVar13);
                                    local_70 = (byte *)((ulonglong)pbVar13 & 0xffff000000000000 |
                                                        (ulonglong)(uint6)local_70);
                                }
                                local_90 = 0;
                                uStack143 = 0;
                                uStack142 = 0;
                                auStack140[0] = 0;
                                auStack140[1] = 0;
                                uVar1 = *(ushort *)((longlong)local_a8 + 10) & 0x7fff;
                                auStack140[2] = 0;
                                auStack140[3] = 0;
                                uVar4 = uStack118 & 0x7fff;
                                uVar21 = (*(ushort *)((longlong)local_a8 + 10) ^ uStack118) & 0x8000;
                                uVar15 = uVar4 + uVar1;
                                if (((0x7ffe < uVar4) || (0x7ffe < uVar1)) || (0xbffd < uVar15)) {
                                    LAB_1407f3657:
                                    local_80[0] = 0;
                                    local_80[1] = 0;
                                    local_80[2] = 0;
                                    local_80[3] = 0;
                                    iVar18 = (-(uint)(uVar21 != 0) & 0x80000000) + 0x7fff8000;
                                    uStack120 = (undefined2)iVar18;
                                    uStack118 = (ushort)((uint)iVar18 >> 0x10);
                                    goto joined_r0x0001407f3361;
                                }
                                if (0x3fbf < uVar15) {
                                    if (((uVar4 == 0) &&
                                         (uVar15 = uVar15 + 1, (CONCAT22(uStack118,uStack120) & 0x7fffffff) == 0)) &&
                                        ((CONCAT22(local_80[3],local_80[2]) == 0 &&
                                          (CONCAT22(local_80[1],local_80[0]) == 0)))) {
                                        uStack118 = 0;
                                        goto joined_r0x0001407f3361;
                                    }
                                    if (((uVar1 != 0) ||
                                         (uVar15 = uVar15 + 1, (*(uint *)(local_a8 + 1) & 0x7fffffff) != 0)) ||
                                        ((*(int *)((longlong)local_a8 + 4) != 0 || (*(int *)local_a8 != 0)))) {
                                        puVar6 = (uint *)&local_90;
                                        iVar18 = 5;
                                        uVar2 = uVar9;
                                        do {
                                            local_b8 = iVar18;
                                            if (0 < iVar18) {
                                                ppbVar26 = local_a8 + 1;
                                                puVar14 = (ushort *)((longlong)local_80 + (longlong)(int)(uVar2 * 2));
                                                do {
                                                    uVar24 = *puVar6 + (uint)*puVar14 * (uint)*(ushort *)ppbVar26;
                                                    if ((uVar24 < *puVar6) ||
                                                        (iVar20 = iVar10, uVar24 < (uint)*puVar14 * (uint)*(ushort *)ppbVar26))
                                                    {
                                                        iVar20 = 1;
                                                    }
                                                    *puVar6 = uVar24;
                                                    if (iVar20 != 0) {
                                                        *(short *)(puVar6 + 1) = *(short *)(puVar6 + 1) + 1;
                                                    }
                                                    puVar14 = puVar14 + 1;
                                                    ppbVar26 = (byte **)((longlong)ppbVar26 + -2);
                                                    local_b8 = local_b8 + -1;
                                                } while (0 < local_b8);
                                            }
                                            iVar18 = iVar18 + -1;
                                            puVar6 = (uint *)((longlong)puVar6 + 2);
                                            uVar2 = uVar2 + 1;
                                        } while (0 < iVar18);
                                        uVar24 = CONCAT22(auStack140[3],auStack140[2]);
                                        uVar2 = CONCAT22(uStack142,CONCAT11(uStack143,local_90));
                                        uVar15 = uVar15 + 0xc002;
                                        uVar12 = uVar2;
                                        if ((short)uVar15 < 1) {
                                            LAB_1407f355d:
                                            uVar15 = uVar15 - 1;
                                            if (-1 < (short)uVar15) goto LAB_1407f35c5;
                                            uVar8 = (ulonglong)(ushort)-uVar15;
                                            uVar15 = 0;
                                            uVar12 = uVar9;
                                            do {
                                                uVar5 = uVar24;
                                                if ((local_90 & 1) != 0) {
                                                    uVar12 = uVar12 + 1;
                                                }
                                                uVar11 = CONCAT22(auStack140[1],auStack140[0]);
                                                uVar17 = uVar2 >> 1;
                                                auStack140[1] = auStack140[1] >> 1 | (ushort)((uVar5 << 0x1f) >> 0x10);
                                                uVar24 = uVar5 >> 1;
                                                uVar2 = uVar17 | uVar11 << 0x1f;
                                                auStack140[0] = (ushort)(uVar11 >> 1);
                                                local_90 = (byte)uVar17;
                                                uStack143 = (undefined)(uVar17 >> 8);
                                                uStack142 = (ushort)(uVar2 >> 0x10);
                                                uVar8 = uVar8 - 1;
                                            } while (uVar8 != 0);
                                            auStack140[2] = (ushort)uVar24;
                                            auStack140[3] = (ushort)(uVar5 >> 0x11);
                                            if (uVar12 == 0) goto LAB_1407f35c5;
                                            uVar1 = (ushort)uVar17 | 1;
                                            local_90 = (byte)uVar1;
                                            uVar2 = uVar17 | 1;
                                        }
                                        else {
                                            do {
                                                uVar2 = uVar12;
                                                if ((uVar24 & 0x80000000) != 0) break;
                                                uVar5 = uVar24 * 2;
                                                uVar2 = uVar12 * 2;
                                                iVar18 = CONCAT22(auStack140[1],auStack140[0]) * 2;
                                                uVar15 = uVar15 - 1;
                                                auStack140[0] = (ushort)iVar18 | (ushort)(uVar12 >> 0x1f);
                                                uVar24 = uVar5 | auStack140[1] >> 0xf;
                                                local_90 = (byte)uVar2;
                                                uStack143 = (undefined)(uVar2 >> 8);
                                                uStack142 = (ushort)(uVar2 >> 0x10);
                                                auStack140[1] = (ushort)((uint)iVar18 >> 0x10);
                                                auStack140[2] = (ushort)uVar24;
                                                auStack140[3] = (ushort)(uVar5 >> 0x10);
                                                uVar12 = uVar2;
                                            } while (0 < (short)uVar15);
                                            if ((short)uVar15 < 1) goto LAB_1407f355d;
                                            LAB_1407f35c5:
                                            uVar1 = CONCAT11(uStack143,local_90);
                                        }
                                        if ((0x8000 < uVar1) || ((uVar2 & 0x1ffff) == 0x18000)) {
                                            if (CONCAT22(auStack140[0],uStack142) == -1) {
                                                uStack142 = 0;
                                                auStack140[0] = 0;
                                                if (CONCAT22(auStack140[2],auStack140[1]) == -1) {
                                                    auStack140[1] = 0;
                                                    auStack140[2] = 0;
                                                    if (auStack140[3] == 0xffff) {
                                                        auStack140[3] = 0x8000;
                                                        uVar15 = uVar15 + 1;
                                                    }
                                                    else {
                                                        auStack140[3] = auStack140[3] + 1;
                                                    }
                                                }
                                                else {
                                                    iVar18 = CONCAT22(auStack140[2],auStack140[1]) + 1;
                                                    auStack140[1] = (ushort)iVar18;
                                                    auStack140[2] = (ushort)((uint)iVar18 >> 0x10);
                                                }
                                                uVar24 = CONCAT22(auStack140[3],auStack140[2]);
                                            }
                                            else {
                                                iVar18 = CONCAT22(auStack140[0],uStack142) + 1;
                                                uStack142 = (ushort)iVar18;
                                                auStack140[0] = (ushort)((uint)iVar18 >> 0x10);
                                            }
                                        }
                                        if (0x7ffe < uVar15) goto LAB_1407f3657;
                                        local_80[3] = (ushort)uVar24;
                                        uStack120 = (undefined2)(uVar24 >> 0x10);
                                        local_80[0] = uStack142;
                                        uStack118 = uVar15 | uVar21;
                                        local_80[1] = auStack140[0];
                                        local_80[2] = auStack140[1];
                                        goto joined_r0x0001407f3361;
                                    }
                                }
                                local_80[2] = 0;
                                local_80[3] = 0;
                                uStack120 = 0;
                                uStack118 = 0;
                                local_80[0] = 0;
                                local_80[1] = 0;
                            }
                        } while( true );
                    }
                    iVar10 = CONCAT22(local_80[2],local_80[1]);
                    uVar4 = uStack118;
                    uVar1 = local_80[0];
                    iVar18 = CONCAT22(uStack120,local_80[3]);
                }
            }
            else {
                uVar1 = 0;
                uVar4 = 0x7fff;
                iVar18 = -0x80000000;
            }
        }
    }
    local_98[5] = uVar4 | (ushort)local_b0;
    *local_98 = uVar1;
    *(int *)(local_98 + 1) = iVar10;
    *(int *)(local_98 + 3) = iVar18;
    LAB_1407f36d6:
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack216);
    return;
}



ulonglong FUN_1407f3700(FILE *param_1)

{
    int iVar1;
    uint uVar2;
    undefined *puVar3;
    int *piVar4;
    ulonglong uVar5;
    undefined4 uVar6;
    undefined *puVar7;
    ushort local_res8 [4];
    char local_res10;
    undefined local_res11;

    puVar7 = &DAT_140c0ffb0;
    if ((*(byte *)&param_1->_flag & 0x40) == 0) {
        iVar1 = _fileno(param_1);
        if ((iVar1 == -1) || (iVar1 = _fileno(param_1), iVar1 == -2)) {
            puVar3 = &DAT_140c0ffb0;
        }
        else {
            iVar1 = _fileno(param_1);
            uVar2 = _fileno(param_1);
            puVar3 = (undefined *)
                    ((ulonglong)(uVar2 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar1 >> 5]);
        }
        if ((puVar3[0x38] & 0x7f) == 0) goto LAB_1407f37cc;
        piVar4 = &param_1->_cnt;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 < 0) {
            uVar2 = FUN_1407f6fdc();
        }
        else {
            uVar2 = (uint)(byte)*param_1->_ptr;
            param_1->_ptr = param_1->_ptr + 1;
        }
        if (uVar2 == 0xffffffff) {
            return 0xffff;
        }
        piVar4 = &param_1->_cnt;
        *piVar4 = *piVar4 + -1;
        local_res8[0] = local_res8[0] & 0xff00 | (ushort)(byte)uVar2;
        if (*piVar4 < 0) {
            uVar2 = FUN_1407f6fdc();
        }
        else {
            uVar2 = (uint)(byte)*param_1->_ptr;
            param_1->_ptr = param_1->_ptr + 1;
        }
        if (uVar2 == 0xffffffff) {
            return 0xffff;
        }
        local_res8[0] = local_res8[0] & 0xff | (ushort)(byte)uVar2 << 8;
        LAB_1407f37c2:
        uVar5 = (ulonglong)local_res8[0];
    }
    else {
        LAB_1407f37cc:
        if ((*(byte *)&param_1->_flag & 0x40) == 0) {
            iVar1 = _fileno(param_1);
            if ((iVar1 != -1) && (iVar1 = _fileno(param_1), iVar1 != -2)) {
                iVar1 = _fileno(param_1);
                uVar2 = _fileno(param_1);
                puVar7 = (undefined *)
                        ((ulonglong)(uVar2 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar1 >> 5]);
            }
            if ((puVar7[8] & 0x80) != 0) {
                piVar4 = &param_1->_cnt;
                *piVar4 = *piVar4 + -1;
                uVar6 = 1;
                if (*piVar4 < 0) {
                    uVar2 = FUN_1407f6fdc();
                }
                else {
                    uVar2 = (uint)(byte)*param_1->_ptr;
                    param_1->_ptr = param_1->_ptr + 1;
                }
                if (uVar2 == 0xffffffff) {
                    return 0xffff;
                }
                local_res10 = (char)uVar2;
                iVar1 = isleadbyte(uVar2 & 0xff);
                if (iVar1 != 0) {
                    piVar4 = &param_1->_cnt;
                    *piVar4 = *piVar4 + -1;
                    if (*piVar4 < 0) {
                        uVar2 = FUN_1407f6fdc();
                    }
                    else {
                        uVar2 = (uint)(byte)*param_1->_ptr;
                        param_1->_ptr = param_1->_ptr + 1;
                    }
                    if (uVar2 == 0xffffffff) {
                        ungetc((int)local_res10,param_1);
                        return 0xffff;
                    }
                    local_res11 = (undefined)uVar2;
                    uVar6 = 2;
                }
                iVar1 = FUN_1407f156c(local_res8,&local_res10,uVar6);
                if (iVar1 == -1) {
                    piVar4 = _errno();
                    *piVar4 = 0x2a;
                    return 0xffff;
                }
                goto LAB_1407f37c2;
            }
        }
        iVar1 = param_1->_cnt + -2;
        param_1->_cnt = iVar1;
        if (iVar1 < 0) {
            uVar5 = FUN_1407f7288(param_1);
        }
        else {
            uVar5 = (ulonglong)*(ushort *)param_1->_ptr;
            param_1->_ptr = (char *)((longlong)param_1->_ptr + 2);
        }
    }
    return uVar5;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407f38f8(short param_1,FILE *param_2)

{
    char *pcVar1;
    short *psVar2;
    int iVar3;
    uint uVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined auStack104 [32];
    int local_48;
    undefined2 local_44;
    char local_40 [8];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    local_44 = param_1;
    if ((param_1 == -1) ||
        (((*(byte *)&param_2->_flag & 1) == 0 &&
          (((*(byte *)&param_2->_flag & 0x80) == 0 || ((*(byte *)&param_2->_flag & 2) != 0))))))
        goto LAB_1407f3ad1;
    if (param_2->_base == (char *)0x0) {
        _getbuf(param_2);
    }
    if ((*(byte *)&param_2->_flag & 0x40) == 0) {
        iVar3 = _fileno(param_2);
        puVar7 = &DAT_140c0ffb0;
        if ((iVar3 == -1) || (iVar3 = _fileno(param_2), iVar3 == -2)) {
            puVar5 = &DAT_140c0ffb0;
        }
        else {
            iVar3 = _fileno(param_2);
            uVar4 = _fileno(param_2);
            puVar5 = (undefined *)
                    ((ulonglong)(uVar4 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar3 >> 5]);
        }
        if ((puVar5[8] & 0x80) == 0) goto LAB_1407f3a96;
        iVar3 = _fileno(param_2);
        if ((iVar3 != -1) && (iVar3 = _fileno(param_2), iVar3 != -2)) {
            iVar3 = _fileno(param_2);
            uVar4 = _fileno(param_2);
            puVar7 = (undefined *)
                    ((ulonglong)(uVar4 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)iVar3 >> 5]);
        }
        if ((puVar7[0x38] & 0x7f) == 0) {
            iVar3 = FUN_1407f2338(&local_48,local_40,5,param_1);
            if (iVar3 != 0) goto LAB_1407f3ad1;
        }
        else {
            local_40[0] = (char)param_1;
            local_48 = 2;
            local_40[1] = local_44._1_1_;
        }
        if (param_2->_ptr < param_2->_base + local_48) {
            if ((param_2->_cnt != 0) || (param_2->_bufsiz < local_48)) goto LAB_1407f3ad1;
            param_2->_ptr = param_2->_base + local_48;
        }
        lVar6 = (longlong)(local_48 + -1);
        iVar3 = local_48;
        if (-1 < local_48 + -1) {
            do {
                param_2->_ptr = param_2->_ptr + -1;
                pcVar1 = local_40 + lVar6;
                lVar6 = lVar6 + -1;
                *param_2->_ptr = *pcVar1;
            } while (-1 < lVar6);
        }
    }
    else {
        LAB_1407f3a96:
        if (param_2->_ptr < param_2->_base + 2) {
            if ((param_2->_cnt != 0) || ((uint)param_2->_bufsiz < 2)) goto LAB_1407f3ad1;
            param_2->_ptr = param_2->_base + 2;
        }
        param_2->_ptr = param_2->_ptr + -2;
        psVar2 = (short *)param_2->_ptr;
        iVar3 = 2;
        if ((*(byte *)&param_2->_flag & 0x40) == 0) {
            *psVar2 = param_1;
        }
        else if (*psVar2 != param_1) {
            param_2->_ptr = (char *)(psVar2 + 1);
            goto LAB_1407f3ad1;
        }
    }
    param_2->_cnt = param_2->_cnt + iVar3;
    param_2->_flag = param_2->_flag & 0xffffffef;
    param_2->_flag = param_2->_flag | 1;
    LAB_1407f3ad1:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack104);
    return;
}



void FUN_1407f3afc(LPSTR param_1,WCHAR *param_2,ulonglong param_3,localeinfo_struct *param_4)

{
    char cVar1;
    WCHAR WVar2;
    int iVar3;
    DWORD DVar4;
    int *piVar5;
    LPCWSTR pWVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined auStackY184 [32];
    int local_78 [2];
    longlong local_70 [2];
    longlong local_60;
    char local_58;
    CHAR local_50 [8];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStackY184;
    uVar9 = 0;
    local_78[0] = 0;
    if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) goto LAB_1407f3e03;
    if (param_2 == (LPCWSTR)0x0) {
        piVar5 = _errno();
        *piVar5 = 0x16;
        FUN_1407dc370();
        goto LAB_1407f3e03;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_70,param_4);
    if (param_1 == (LPSTR)0x0) {
        if (*(longlong *)(local_70[0] + 0x138) == 0) {
            WVar2 = *param_2;
            while (WVar2 != L'\0') {
                if (0xff < (ushort)WVar2) {
                    piVar5 = _errno();
                    *piVar5 = 0x2a;
                    break;
                }
                param_2 = param_2 + 1;
                WVar2 = *param_2;
            }
        }
        else {
            iVar3 = WideCharToMultiByte(*(UINT *)(local_70[0] + 4),0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        local_78);
            if (iVar3 != 0) {
                joined_r0x0001407f3dda:
                if (local_78[0] == 0) goto LAB_1407f3def;
            }
            LAB_1407f3de1:
            piVar5 = _errno();
            LAB_1407f3de6:
            *piVar5 = 0x2a;
        }
    }
    else if (*(longlong *)(local_70[0] + 0x138) == 0) {
        if (param_3 != 0) {
            do {
                if (0xff < (ushort)*param_2) goto LAB_1407f3bc1;
                param_1[uVar9] = *(CHAR *)param_2;
                WVar2 = *param_2;
                param_2 = param_2 + 1;
            } while ((WVar2 != L'\0') && (uVar9 = uVar9 + 1, uVar9 < param_3));
        }
    }
    else if (*(int *)(local_70[0] + 0xd4) == 1) {
        pWVar6 = param_2;
        uVar9 = param_3;
        if (param_3 != 0) {
            do {
                if (*pWVar6 == L'\0') break;
                pWVar6 = pWVar6 + 1;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            if ((uVar9 != 0) && (*pWVar6 == L'\0')) {
                param_3 = ((longlong)pWVar6 - (longlong)param_2 >> 1) + 1;
            }
        }
        iVar3 = WideCharToMultiByte(*(UINT *)(local_70[0] + 4),0,param_2,(int)param_3,param_1,
                                    (int)param_3,(LPCSTR)0x0,local_78);
        if ((iVar3 == 0) || (local_78[0] != 0)) {
            LAB_1407f3bc1:
            piVar5 = _errno();
            goto LAB_1407f3de6;
        }
    }
    else {
        iVar3 = WideCharToMultiByte(*(UINT *)(local_70[0] + 4),0,param_2,-1,param_1,(int)param_3,
                                    (LPCSTR)0x0,local_78);
        uVar10 = (ulonglong)iVar3;
        if (iVar3 != 0) goto joined_r0x0001407f3dda;
        if ((local_78[0] != 0) || (DVar4 = GetLastError(), DVar4 != 0x7a)) goto LAB_1407f3de1;
        if (param_3 != 0) {
            do {
                iVar3 = WideCharToMultiByte(*(UINT *)(local_70[0] + 4),0,param_2,1,local_50,
                                            *(int *)(local_70[0] + 0xd4),(LPCSTR)0x0,local_78);
                if ((((iVar3 == 0) || (local_78[0] != 0)) || (iVar3 < 0)) ||
                    (uVar8 = (ulonglong)iVar3, 5 < uVar8)) goto LAB_1407f3de1;
                if (param_3 < uVar8 + uVar10) break;
                uVar7 = uVar9;
                if (0 < (longlong)uVar8) {
                    do {
                        cVar1 = local_50[uVar7];
                        param_1[uVar10] = cVar1;
                        if (cVar1 == '\0') goto LAB_1407f3def;
                        uVar7 = uVar7 + 1;
                        uVar10 = uVar10 + 1;
                    } while ((longlong)uVar7 < (longlong)uVar8);
                }
                param_2 = param_2 + 1;
            } while (uVar10 < param_3);
        }
    }
    LAB_1407f3def:
    if (local_58 != '\0') {
        *(uint *)(local_60 + 200) = *(uint *)(local_60 + 200) & 0xfffffffd;
    }
    LAB_1407f3e03:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStackY184);
    return;
}



int FUN_1407f3e2c(ulonglong *param_1,undefined *param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    int iVar4;

    iVar4 = 0;
    if (param_3 == 0) {
        if (param_2 != (undefined *)0x0) {
            *param_2 = 0;
        }
        if (param_1 != (ulonglong *)0x0) {
            *param_1 = 0;
        }
        uVar3 = param_5;
        if (param_5 != 0) {
            uVar3 = param_3;
        }
        if (uVar3 < 0x80000000) {
            lVar1 = FUN_1407f3afc(param_2,param_4,uVar3,param_6);
            if (lVar1 == -1) {
                if (param_2 != (undefined *)0x0) {
                    *param_2 = 0;
                }
                piVar2 = _errno();
                return *piVar2;
            }
            uVar3 = lVar1 + 1;
            if (param_2 != (undefined *)0x0) {
                if (uVar3 != 0) {
                    if (param_5 != 0xffffffffffffffff) {
                        *param_2 = 0;
                        piVar2 = _errno();
                        iVar4 = 0x22;
                        goto LAB_1407f3eb5;
                    }
                    iVar4 = 0x50;
                    uVar3 = param_3;
                }
                param_2[uVar3 - 1] = 0;
            }
            if (param_1 == (ulonglong *)0x0) {
                return iVar4;
            }
            *param_1 = uVar3;
            return iVar4;
        }
    }
    piVar2 = _errno();
    iVar4 = 0x16;
    LAB_1407f3eb5:
    *piVar2 = iVar4;
    FUN_1407dc370();
    return iVar4;
}



void FUN_1407f3f18(void)

{
    FUN_1407f3e2c();
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407f3f38(ushort *param_1,ushort **param_2,ushort *param_3,int param_4,int param_5,
                   int param_6,int param_7,longlong *param_8)

{
    ushort uVar1;
    uint uVar2;
    int *piVar3;
    ushort uVar4;
    uint *puVar5;
    ulonglong uVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    ushort *puVar12;
    ushort uVar13;
    ushort *puVar14;
    ushort *puVar15;
    uint uVar16;
    int iVar17;
    char *pcVar18;
    uint uVar19;
    int iVar20;
    ushort uVar21;
    uint uVar22;
    longlong lVar23;
    ushort **ppuVar24;
    undefined auStack216 [32];
    int local_b8;
    int local_b4;
    uint local_b0;
    int local_ac;
    ushort **local_a8;
    longlong local_a0;
    ushort *local_98;
    byte local_90;
    undefined uStack143;
    ushort uStack142;
    ushort auStack140 [6];
    ushort local_80 [4];
    undefined2 uStack120;
    ushort uStack118;
    ushort *local_70;
    undefined4 local_68;
    char local_60 [23];
    char local_49;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    uVar7 = 0;
    pcVar18 = local_60;
    uVar1 = 0;
    local_b0 = local_b0 & 0xffff0000;
    iVar8 = 0;
    local_b4 = 1;
    local_b8 = 0;
    uVar9 = 0;
    puVar12 = param_3;
    local_ac = param_4;
    local_a8 = param_2;
    local_98 = param_1;
    if (param_8 == (longlong *)0x0) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        goto LAB_1407f4880;
    }
    while ((uVar10 = uVar7, uVar2 = uVar7, uVar11 = uVar7, uVar22 = uVar7, uVar19 = uVar7,
            *puVar12 < 0x21 &&
            (uVar10 = 0, uVar2 = 0, uVar11 = 0, uVar22 = 0, uVar19 = 0,
                    (0x100002600U >> ((ulonglong)*puVar12 & 0x3f) & 1) != 0))) {
        puVar12 = puVar12 + 1;
    }
    LAB_1407f3fdc:
    uVar4 = *puVar12;
    puVar14 = puVar12 + 1;
    puVar15 = param_3;
    if (uVar11 < 6) {
        if (uVar11 == 5) {
            local_b8 = 1;
            if (9 < (ushort)(uVar4 - 0x30)) goto LAB_1407f4398;
            uVar11 = 4;
            uVar16 = uVar2;
            LAB_1407f42d1:
            puVar12 = puVar14 + -1;
            uVar2 = uVar16;
            goto LAB_1407f3fdc;
        }
        if (uVar11 == 0) {
            if (8 < (ushort)(uVar4 - 0x31)) {
                if ((uint)uVar4 == (int)***(char ***)(*param_8 + 0xf0)) {
                    LAB_1407f4190:
                    uVar11 = 5;
                    puVar12 = puVar14;
                }
                else if (uVar4 == 0x2b) {
                    uVar11 = 2;
                    local_b0 = local_b0 & 0xffff0000;
                    puVar12 = puVar14;
                }
                else if (uVar4 == 0x2d) {
                    uVar11 = 2;
                    local_b0 = 0x8000;
                    puVar12 = puVar14;
                }
                else {
                    puVar15 = puVar12;
                    if (uVar4 != 0x30) goto LAB_1407f4398;
                    LAB_1407f41ab:
                    puVar12 = puVar14;
                    uVar11 = 1;
                }
                goto LAB_1407f3fdc;
            }
        }
        else {
            if (uVar11 == 1) {
                uVar10 = 1;
                if (8 < (ushort)(uVar4 - 0x31)) {
                    if ((uint)uVar4 == (int)***(char ***)(*param_8 + 0xf0)) {
                        LAB_1407f4104:
                        uVar11 = 4;
                    }
                    else {
                        if ((uVar4 - 0x2b & 0xfffffffd) != 0) {
                            if (uVar4 == 0x30) goto LAB_1407f41ab;
                            if ((uVar4 < 0x44) || ((0x45 < uVar4 && (uVar4 != 100 && uVar4 != 0x65)))) {
                                LAB_1407f4138:
                                uVar10 = 1;
                                uVar9 = 0;
                                goto LAB_1407f4485;
                            }
                            puVar12 = puVar14;
                            uVar11 = 6;
                            goto LAB_1407f3fdc;
                        }
                        LAB_1407f4148:
                        puVar14 = puVar14 + -1;
                        uVar11 = 0xb;
                    }
                    uVar10 = 1;
                    puVar12 = puVar14;
                    goto LAB_1407f3fdc;
                }
                uVar11 = 3;
                goto LAB_1407f3fdc;
            }
            if (uVar11 != 2) {
                if (uVar11 == 3) {
                    while ((0x2f < uVar4 && (uVar4 < 0x3a))) {
                        if (uVar19 < 0x19) {
                            uVar19 = uVar19 + 1;
                            *pcVar18 = (char)uVar4 + -0x30;
                            pcVar18 = pcVar18 + 1;
                        }
                        else {
                            uVar22 = uVar22 + 1;
                        }
                        uVar4 = *puVar14;
                        puVar14 = puVar14 + 1;
                    }
                    if ((uint)uVar4 == (int)***(char ***)(*param_8 + 0xf0)) goto LAB_1407f4104;
                    if ((uVar4 - 0x2b & 0xfffffffd) == 0) goto LAB_1407f4148;
                    if ((uVar4 < 0x44) || ((0x45 < uVar4 && (uVar4 != 100 && uVar4 != 0x65))))
                        goto LAB_1407f4138;
                }
                else {
                    if (uVar11 != 4) goto LAB_1407f4417;
                    uVar10 = 1;
                    local_b8 = 1;
                    if (uVar19 == 0) {
                        while (uVar4 == 0x30) {
                            uVar22 = uVar22 - 1;
                            uVar4 = *puVar14;
                            puVar14 = puVar14 + 1;
                        }
                    }
                    while ((0x2f < uVar4 && (uVar4 < 0x3a))) {
                        if (uVar19 < 0x19) {
                            uVar19 = uVar19 + 1;
                            *pcVar18 = (char)uVar4 + -0x30;
                            pcVar18 = pcVar18 + 1;
                            uVar22 = uVar22 - 1;
                        }
                        uVar4 = *puVar14;
                        puVar14 = puVar14 + 1;
                    }
                    if ((uVar4 - 0x2b & 0xfffffffd) == 0) {
                        uVar11 = 0xb;
                        puVar12 = puVar14 + -1;
                        uVar10 = 1;
                        goto LAB_1407f3fdc;
                    }
                    if ((uVar4 < 0x44) || ((0x45 < uVar4 && (uVar4 != 100 && uVar4 != 0x65))))
                        goto LAB_1407f4425;
                }
                uVar11 = 6;
                puVar12 = puVar14;
                uVar10 = 1;
                goto LAB_1407f3fdc;
            }
            if (8 < (ushort)(uVar4 - 0x31)) {
                if ((uint)uVar4 == (int)***(char ***)(*param_8 + 0xf0)) goto LAB_1407f4190;
                if (uVar4 == 0x30) goto LAB_1407f41ab;
                goto LAB_1407f4398;
            }
        }
        uVar11 = 3;
        goto LAB_1407f3fdc;
    }
    if (uVar11 != 6) {
        if (uVar11 == 7) {
            uVar11 = 8;
            if ((ushort)(uVar4 - 0x31) < 9) {
                LAB_1407f4377:
                uVar11 = 9;
            }
            else {
                puVar12 = puVar14;
                if (uVar4 != 0x30) goto LAB_1407f4398;
            }
        }
        else {
            if (uVar11 == 8) {
                uVar16 = 1;
                uVar2 = 1;
                while (uVar4 == 0x30) {
                    uVar4 = *puVar14;
                    puVar14 = puVar14 + 1;
                }
                if ((ushort)(uVar4 - 0x31) < 9) {
                    uVar11 = 9;
                    goto LAB_1407f42d1;
                }
                LAB_1407f4425:
                puVar15 = puVar14 + -1;
                uVar9 = 0;
                goto LAB_1407f4398;
            }
            if (uVar11 == 9) {
                uVar9 = uVar7;
                goto LAB_1407f4462;
            }
            if (uVar11 == 0xb) {
                puVar15 = puVar12;
                if (param_7 == 0) goto LAB_1407f4398;
                param_3 = puVar12;
                if (uVar4 != 0x2b) {
                    if (uVar4 == 0x2d) goto LAB_1407f431a;
                    goto LAB_1407f4398;
                }
                uVar11 = 7;
                puVar12 = puVar14;
            }
            else {
                LAB_1407f4417:
                puVar15 = puVar14;
                puVar12 = puVar14;
                if (uVar11 == 10) goto LAB_1407f4398;
            }
        }
        goto LAB_1407f3fdc;
    }
    uVar11 = 8;
    param_3 = puVar12 + -1;
    if ((ushort)(uVar4 - 0x31) < 9) goto LAB_1407f4377;
    if (uVar4 == 0x2b) {
        uVar11 = 7;
        goto LAB_1407f4417;
    }
    if (uVar4 == 0x2d) {
        LAB_1407f431a:
        local_b4 = -1;
        uVar11 = 7;
        puVar12 = puVar14;
        goto LAB_1407f3fdc;
    }
    puVar15 = param_3;
    puVar12 = puVar14;
    if (uVar4 == 0x30) goto LAB_1407f3fdc;
    goto LAB_1407f4398;
    LAB_1407f4462:
    if ((uVar4 < 0x30) || (0x39 < uVar4)) goto LAB_1407f447f;
    uVar9 = (uint)uVar4 + (uVar9 * 5 + -0x18) * 2;
    if ((int)uVar9 < 0x1451) {
        uVar4 = *puVar14;
        puVar14 = puVar14 + 1;
        goto LAB_1407f4462;
    }
    uVar9 = 0x1451;
    LAB_1407f447f:
    while ((uVar2 = 1, 0x2f < uVar4 && (uVar2 = 1, uVar4 < 0x3a))) {
        uVar4 = *puVar14;
        puVar14 = puVar14 + 1;
    }
    LAB_1407f4485:
    puVar15 = puVar14 + -1;
    LAB_1407f4398:
    *param_2 = puVar15;
    iVar17 = iVar8;
    if (uVar10 == 0) {
        uVar1 = 0;
        uVar4 = 0;
    }
    else {
        if (0x18 < uVar19) {
            if ('\x04' < local_49) {
                local_49 = local_49 + '\x01';
            }
            pcVar18 = pcVar18 + -1;
            uVar19 = 0x18;
            uVar22 = uVar22 + 1;
        }
        if (uVar19 == 0) {
            uVar4 = 0;
            uVar1 = 0;
        }
        else {
            while (pcVar18 = pcVar18 + -1, *pcVar18 == '\0') {
                uVar22 = uVar22 + 1;
            }
            FUN_1407f6db0();
            if (local_b4 < 0) {
                uVar9 = -uVar9;
            }
            uVar9 = uVar9 + uVar22;
            if (uVar2 == 0) {
                uVar9 = uVar9 + param_5;
            }
            if (local_b8 == 0) {
                uVar9 = uVar9 - param_6;
            }
            if ((int)uVar9 < 0x1451) {
                if ((int)uVar9 < -0x1450) {
                    uVar4 = 0;
                }
                else {
                    lVar23 = 0x140c10660;
                    if (uVar9 != 0) {
                        if ((int)uVar9 < 0) {
                            uVar9 = -uVar9;
                            lVar23 = 0x140c107c0;
                        }
                        if (local_ac == 0) {
                            local_80[0] = 0;
                        }
                        joined_r0x0001407f450b:
                        do {
                            if (uVar9 == 0) break;
                            lVar23 = lVar23 + 0x54;
                            uVar10 = (int)uVar9 >> 3;
                            uVar2 = uVar9 & 7;
                            uVar9 = uVar10;
                            local_a0 = lVar23;
                            if (uVar2 != 0) {
                                local_a8 = (ushort **)(lVar23 + (longlong)(int)uVar2 * 0xc);
                                if (0x7fff < *(ushort *)local_a8) {
                                    puVar12 = *local_a8;
                                    ppuVar24 = local_a8 + 1;
                                    local_a8 = &local_70;
                                    local_68 = *(undefined4 *)ppuVar24;
                                    local_70._0_6_ = CONCAT42((int)((ulonglong)puVar12 >> 0x10) + -1,(short)puVar12);
                                    local_70 = (ushort *)
                                            ((ulonglong)puVar12 & 0xffff000000000000 | (ulonglong)(uint6)local_70);
                                }
                                local_90 = 0;
                                uStack143 = 0;
                                uStack142 = 0;
                                auStack140[0] = 0;
                                auStack140[1] = 0;
                                uVar1 = *(ushort *)((longlong)local_a8 + 10) & 0x7fff;
                                auStack140[2] = 0;
                                auStack140[3] = 0;
                                uVar4 = uStack118 & 0x7fff;
                                uVar21 = (*(ushort *)((longlong)local_a8 + 10) ^ uStack118) & 0x8000;
                                uVar13 = uVar4 + uVar1;
                                if (((0x7ffe < uVar4) || (0x7ffe < uVar1)) || (0xbffd < uVar13)) {
                                    LAB_1407f4804:
                                    local_80[0] = 0;
                                    local_80[1] = 0;
                                    local_80[2] = 0;
                                    local_80[3] = 0;
                                    iVar17 = (-(uint)(uVar21 != 0) & 0x80000000) + 0x7fff8000;
                                    uStack120 = (undefined2)iVar17;
                                    uStack118 = (ushort)((uint)iVar17 >> 0x10);
                                    goto joined_r0x0001407f450b;
                                }
                                if (0x3fbf < uVar13) {
                                    if (((uVar4 == 0) &&
                                         (uVar13 = uVar13 + 1, (CONCAT22(uStack118,uStack120) & 0x7fffffff) == 0)) &&
                                        ((CONCAT22(local_80[3],local_80[2]) == 0 &&
                                          (CONCAT22(local_80[1],local_80[0]) == 0)))) {
                                        uStack118 = 0;
                                        goto joined_r0x0001407f450b;
                                    }
                                    if (((uVar1 != 0) ||
                                         (uVar13 = uVar13 + 1, (*(uint *)(local_a8 + 1) & 0x7fffffff) != 0)) ||
                                        ((*(int *)((longlong)local_a8 + 4) != 0 || (*(int *)local_a8 != 0)))) {
                                        puVar5 = (uint *)&local_90;
                                        iVar17 = 5;
                                        uVar2 = uVar7;
                                        do {
                                            local_b8 = iVar17;
                                            if (0 < iVar17) {
                                                ppuVar24 = local_a8 + 1;
                                                puVar12 = (ushort *)((longlong)local_80 + (longlong)(int)(uVar2 * 2));
                                                do {
                                                    uVar10 = *puVar5 + (uint)*(ushort *)ppuVar24 * (uint)*puVar12;
                                                    if ((uVar10 < *puVar5) ||
                                                        (iVar20 = iVar8, uVar10 < (uint)*(ushort *)ppuVar24 * (uint)*puVar12))
                                                    {
                                                        iVar20 = 1;
                                                    }
                                                    *puVar5 = uVar10;
                                                    if (iVar20 != 0) {
                                                        *(short *)(puVar5 + 1) = *(short *)(puVar5 + 1) + 1;
                                                    }
                                                    puVar12 = puVar12 + 1;
                                                    ppuVar24 = (ushort **)((longlong)ppuVar24 + -2);
                                                    local_b8 = local_b8 + -1;
                                                } while (0 < local_b8);
                                            }
                                            iVar17 = iVar17 + -1;
                                            puVar5 = (uint *)((longlong)puVar5 + 2);
                                            uVar2 = uVar2 + 1;
                                        } while (0 < iVar17);
                                        uVar10 = CONCAT22(auStack140[3],auStack140[2]);
                                        uVar2 = CONCAT22(uStack142,CONCAT11(uStack143,local_90));
                                        uVar13 = uVar13 + 0xc002;
                                        uVar11 = uVar2;
                                        if ((short)uVar13 < 1) {
                                            LAB_1407f4705:
                                            uVar13 = uVar13 - 1;
                                            if (-1 < (short)uVar13) goto LAB_1407f476f;
                                            uVar6 = (ulonglong)(ushort)-uVar13;
                                            uVar13 = 0;
                                            uVar11 = uVar7;
                                            do {
                                                uVar22 = uVar10;
                                                if ((local_90 & 1) != 0) {
                                                    uVar11 = uVar11 + 1;
                                                }
                                                uVar19 = CONCAT22(auStack140[1],auStack140[0]);
                                                uVar16 = uVar2 >> 1;
                                                auStack140[1] = auStack140[1] >> 1 | (ushort)((uVar22 << 0x1f) >> 0x10);
                                                uVar10 = uVar22 >> 1;
                                                uVar2 = uVar16 | uVar19 << 0x1f;
                                                auStack140[0] = (ushort)(uVar19 >> 1);
                                                local_90 = (byte)uVar16;
                                                uStack143 = (undefined)(uVar16 >> 8);
                                                uStack142 = (ushort)(uVar2 >> 0x10);
                                                uVar6 = uVar6 - 1;
                                            } while (uVar6 != 0);
                                            auStack140[2] = (ushort)uVar10;
                                            auStack140[3] = (ushort)(uVar22 >> 0x11);
                                            if (uVar11 == 0) goto LAB_1407f476f;
                                            uVar1 = (ushort)uVar16 | 1;
                                            local_90 = (byte)uVar1;
                                            uVar2 = uVar16 | 1;
                                        }
                                        else {
                                            do {
                                                uVar2 = uVar11;
                                                if ((uVar10 & 0x80000000) != 0) break;
                                                uVar22 = uVar10 * 2;
                                                uVar2 = uVar11 * 2;
                                                iVar17 = CONCAT22(auStack140[1],auStack140[0]) * 2;
                                                uVar13 = uVar13 - 1;
                                                auStack140[0] = (ushort)iVar17 | (ushort)(uVar11 >> 0x1f);
                                                uVar10 = uVar22 | auStack140[1] >> 0xf;
                                                local_90 = (byte)uVar2;
                                                uStack143 = (undefined)(uVar2 >> 8);
                                                uStack142 = (ushort)(uVar2 >> 0x10);
                                                auStack140[1] = (ushort)((uint)iVar17 >> 0x10);
                                                auStack140[2] = (ushort)uVar10;
                                                auStack140[3] = (ushort)(uVar22 >> 0x10);
                                                uVar11 = uVar2;
                                            } while (0 < (short)uVar13);
                                            if ((short)uVar13 < 1) goto LAB_1407f4705;
                                            LAB_1407f476f:
                                            uVar1 = CONCAT11(uStack143,local_90);
                                        }
                                        if ((0x8000 < uVar1) || ((uVar2 & 0x1ffff) == 0x18000)) {
                                            if (CONCAT22(auStack140[0],uStack142) == -1) {
                                                uStack142 = 0;
                                                auStack140[0] = 0;
                                                if (CONCAT22(auStack140[2],auStack140[1]) == -1) {
                                                    auStack140[1] = 0;
                                                    auStack140[2] = 0;
                                                    if (auStack140[3] == 0xffff) {
                                                        auStack140[3] = 0x8000;
                                                        uVar13 = uVar13 + 1;
                                                    }
                                                    else {
                                                        auStack140[3] = auStack140[3] + 1;
                                                    }
                                                }
                                                else {
                                                    iVar17 = CONCAT22(auStack140[2],auStack140[1]) + 1;
                                                    auStack140[1] = (ushort)iVar17;
                                                    auStack140[2] = (ushort)((uint)iVar17 >> 0x10);
                                                }
                                                uVar10 = CONCAT22(auStack140[3],auStack140[2]);
                                            }
                                            else {
                                                iVar17 = CONCAT22(auStack140[0],uStack142) + 1;
                                                uStack142 = (ushort)iVar17;
                                                auStack140[0] = (ushort)((uint)iVar17 >> 0x10);
                                            }
                                        }
                                        if (0x7ffe < uVar13) goto LAB_1407f4804;
                                        local_80[3] = (ushort)uVar10;
                                        uStack120 = (undefined2)(uVar10 >> 0x10);
                                        local_80[0] = uStack142;
                                        uStack118 = uVar13 | uVar21;
                                        local_80[1] = auStack140[0];
                                        local_80[2] = auStack140[1];
                                        goto joined_r0x0001407f450b;
                                    }
                                }
                                local_80[2] = 0;
                                local_80[3] = 0;
                                uStack120 = 0;
                                uStack118 = 0;
                                local_80[0] = 0;
                                local_80[1] = 0;
                            }
                        } while( true );
                    }
                    iVar8 = CONCAT22(local_80[2],local_80[1]);
                    uVar4 = uStack118;
                    uVar1 = local_80[0];
                    iVar17 = CONCAT22(uStack120,local_80[3]);
                }
            }
            else {
                uVar1 = 0;
                uVar4 = 0x7fff;
                iVar17 = -0x80000000;
            }
        }
    }
    local_98[5] = uVar4 | (ushort)local_b0;
    *local_98 = uVar1;
    *(int *)(local_98 + 1) = iVar8;
    *(int *)(local_98 + 3) = iVar17;
    LAB_1407f4880:
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack216);
    return;
}



HANDLE FUN_1407f48a8(LPCWSTR param_1,DWORD param_2,DWORD param_3,LPSECURITY_ATTRIBUTES param_4,
                     DWORD param_5,uint param_6,uint param_7)

{
    int iVar1;
    HMODULE hModule;
    HANDLE pvVar2;
    FARPROC local_38;

    iVar1 = FUN_1407e26c0();
    if (iVar1 != 0) {
        hModule = GetModuleHandleW(L"kernel32.dll");
        local_38 = GetProcAddress(hModule,"CreateFile2");
        if (local_38 == (FARPROC)0x0) {
            return (HANDLE)0xffffffffffffffff;
        }
    }
    iVar1 = FUN_1407e26c0();
    if (iVar1 == 0) {
        pvVar2 = CreateFileW(param_1,param_2,param_3,param_4,param_5,param_6 | param_7,(HANDLE)0x0);
    }
    else {
        pvVar2 = (HANDLE)(*local_38)();
    }
    return pvVar2;
}



int FUN_1407f499c(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
                  int param_6)

{
    byte *pbVar1;
    int iVar2;
    int *piVar3;
    int local_18;
    int local_14;

    local_18 = 0;
    if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
        ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar2 = 0x16;
    }
    else {
        iVar2 = FUN_1407f4a78(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
        if (local_18 != 0) {
            if (iVar2 != 0) {
                pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_5 >> 5] + 8 +
                                                                                 (ulonglong)(*param_5 & 0x1f) * 0x58);
                *pbVar1 = *pbVar1 & 0xfe;
            }
            local_14 = iVar2;
            FUN_1407f56c8(*param_5);
        }
        if (iVar2 != 0) {
            *param_5 = 0xffffffff;
        }
    }
    return iVar2;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1407f4a78(undefined4 *param_1,uint *param_2,undefined8 param_3,uint param_4,
                        int param_5,byte param_6)

{
    byte *pbVar1;
    code *pcVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    DWORD DVar6;
    int iVar7;
    ulong *puVar8;
    int *piVar9;
    uint *puVar10;
    longlong lVar11;
    ulonglong uVar12;
    longlong lVar13;
    byte bVar14;
    byte bVar15;
    uint uVar16;
    int iVar17;
    bool bVar18;
    byte bVar19;
    byte local_res20;
    undefined8 in_stack_ffffffffffffff58;
    undefined4 uVar20;
    uint local_88;
    uint local_80;
    uint local_78;
    short local_74 [2];
    undefined8 local_70;
    uint local_68;
    HANDLE local_60;
    undefined4 local_58 [2];
    undefined8 local_50;
    uint local_48;

    uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    uVar5 = 0;
    local_58[0] = 0x18;
    uVar16 = 1;
    local_68 = 0;
    local_res20 = 0;
    local_50 = 0;
    bVar18 = (param_4 & 0x80) == 0;
    if (bVar18) {
        bVar14 = 0;
    }
    else {
        bVar14 = 0x10;
    }
    local_48 = (uint)bVar18;
    iVar3 = FUN_1407f7ee8();
    if (iVar3 != 0) {
        FUN_1407dc390(0,0,0,0,0);
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return uVar12;
    }
    if (((param_4 & 0x8000) == 0) && (((param_4 & 0x74000) != 0 || (local_68 != 0x8000)))) {
        bVar14 = bVar14 | 0x80;
    }
    local_88 = 0x80000000;
    if ((param_4 & 3) != 0) {
        if ((param_4 & 3) == 1) {
            if (((param_4 & 8) == 0) || ((param_4 & 0x70000) == 0)) {
                local_88 = 0x40000000;
                goto LAB_1407f4b71;
            }
        }
        else if ((param_4 & 3) != 2) goto LAB_1407f4b1b;
        local_88 = 0xc0000000;
    }
    LAB_1407f4b71:
    iVar3 = 2;
    if (param_5 == 0x10) {
        bVar19 = 0;
    }
    else if (param_5 == 0x20) {
        bVar19 = 1;
    }
    else if (param_5 == 0x30) {
        bVar19 = 2;
    }
    else if (param_5 == 0x40) {
        bVar19 = 3;
    }
    else {
        if (param_5 != 0x80) goto LAB_1407f4b1b;
        bVar19 = local_88 == 0x80000000;
    }
    uVar4 = param_4 & 0x700;
    if ((param_4 & 0x700) == 0) {
        LAB_1407f4c0c:
        uVar16 = 3;
    }
    else if (uVar4 == 0x100) {
        uVar16 = 4;
    }
    else if (uVar4 == 0x200) {
        LAB_1407f4bfc:
        uVar16 = 5;
    }
    else if (uVar4 == 0x300) {
        uVar16 = 2;
    }
    else {
        if (uVar4 == 0x400) goto LAB_1407f4c0c;
        if (uVar4 != 0x500) {
            if (uVar4 == 0x600) goto LAB_1407f4bfc;
            if (uVar4 != 0x700) {
                LAB_1407f4b1b:
                puVar8 = __doserrno();
                *puVar8 = 0;
                *param_2 = 0xffffffff;
                piVar9 = _errno();
                *piVar9 = 0x16;
                FUN_1407dc370();
                return 0x16;
            }
        }
    }
    local_78 = 0x80;
    local_80 = 0;
    if (((param_4 & 0x100) != 0) && (local_78 = 0x80, (~DAT_140c5f520 & param_6 & 0x80) == 0)) {
        local_78 = 1;
    }
    if ((param_4 & 0x40) != 0) {
        local_88 = local_88 | 0x10000;
        uVar5 = 0x4000000;
        bVar19 = bVar19 | 4;
        local_80 = 0x4000000;
    }
    if ((param_4 >> 0xc & 1) != 0) {
        local_78 = local_78 | 0x100;
    }
    if ((param_4 >> 0xd & 1) != 0) {
        uVar5 = uVar5 | 0x2000000;
        local_80 = uVar5;
    }
    if ((param_4 & 0x20) == 0) {
        if ((param_4 & 0x10) != 0) {
            local_80 = uVar5 | 0x10000000;
        }
    }
    else {
        local_80 = uVar5 | 0x8000000;
    }
    uVar5 = FUN_1407f5300();
    *param_2 = uVar5;
    if (uVar5 == 0xffffffff) {
        puVar8 = __doserrno();
        *puVar8 = 0;
        *param_2 = 0xffffffff;
        piVar9 = _errno();
        *piVar9 = 0x18;
        puVar10 = (uint *)_errno();
        return (ulonglong)*puVar10;
    }
    *param_1 = 1;
    uVar12 = CONCAT44(uVar20,uVar16);
    local_60 = (HANDLE)FUN_1407f48a8(param_3,local_88,bVar19,local_58,uVar12,local_78,local_80);
    if (local_60 == (HANDLE)0xffffffffffffffff) {
        if (((local_88 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            local_88 = local_88 & 0x7fffffff;
            local_60 = (HANDLE)FUN_1407f48a8(param_3,local_88,bVar19,local_58,
                                             uVar12 & 0xffffffff00000000 | (ulonglong)uVar16,local_78,
                                             local_80);
            if (local_60 != (HANDLE)0xffffffffffffffff) goto LAB_1407f4d81;
        }
        pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_2 >> 5] + 8 +
                                                                         (ulonglong)(*param_2 & 0x1f) * 0x58);
        *pbVar1 = *pbVar1 & 0xfe;
        DVar6 = GetLastError();
        _dosmaperr(DVar6);
        goto LAB_1407f4d75;
    }
    LAB_1407f4d81:
    DVar6 = GetFileType(local_60);
    if (DVar6 == 0) {
        pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_2 >> 5] + 8 +
                                                                         (ulonglong)(*param_2 & 0x1f) * 0x58);
        *pbVar1 = *pbVar1 & 0xfe;
        DVar6 = GetLastError();
        _dosmaperr(DVar6);
        CloseHandle(local_60);
        if (DVar6 == 0) {
            piVar9 = _errno();
            *piVar9 = 0xd;
        }
        goto LAB_1407f4d75;
    }
    if (DVar6 == 2) {
        bVar14 = bVar14 | 0x40;
    }
    else if (DVar6 == 3) {
        bVar14 = bVar14 | 8;
    }
    FUN_1407f5618(*param_2,local_60);
    bVar15 = bVar14 | 1;
    *(byte *)((&DAT_140c60410)[(longlong)(int)*param_2 >> 5] + 8 + (ulonglong)(*param_2 & 0x1f) * 0x58
    ) = bVar15;
    pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_2 >> 5] + 0x38 +
                                                                     (ulonglong)(*param_2 & 0x1f) * 0x58);
    *pbVar1 = *pbVar1 & 0x80;
    if ((bVar14 & 0x48) == 0) {
        if (-1 < (char)bVar15) goto LAB_1407f50f9;
        if ((param_4 & 2) == 0) goto LAB_1407f4ed4;
        local_70 = FUN_1407f1094(*param_2,0xffffffffffffffff,2);
        if (local_70 == 0xffffffffffffffff) {
            puVar8 = __doserrno();
            if (*puVar8 == 0x83) goto LAB_1407f4ed4;
        }
        else {
            local_74[0] = 0;
            iVar17 = FUN_1407f7684(*param_2,local_74,1);
            if ((((iVar17 != 0) || (local_74[0] != 0x1a)) ||
                 (iVar17 = FUN_1407f73d0(*param_2,local_70), iVar17 != -1)) &&
                (lVar11 = FUN_1407f1094(*param_2,0,0), lVar11 != -1)) goto LAB_1407f4ed4;
        }
        LAB_1407f4e80:
        FUN_1407eee58(*param_2);
    }
    else {
        LAB_1407f4ed4:
        if ((char)bVar15 < '\0') {
            if ((param_4 & 0x74000) == 0) {
                if ((local_68 & 0x74000) == 0) {
                    param_4 = param_4 | 0x4000;
                }
                else {
                    param_4 = param_4 | local_68 & 0x74000;
                }
            }
            uVar5 = param_4 & 0x74000;
            if (uVar5 == 0x4000) {
                local_res20 = 0;
            }
            else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
                if ((param_4 & 0x301) == 0x301) goto LAB_1407f4f3a;
            }
            else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
                LAB_1407f4f3a:
                local_res20 = 2;
            }
            else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
                local_res20 = 1;
            }
            if (((param_4 & 0x70000) != 0) &&
                (local_70 = local_70 & 0xffffffff00000000, (bVar14 & 0x40) == 0)) {
                uVar5 = local_88 & 0xc0000000;
                if (uVar5 == 0x40000000) {
                    if (uVar16 != 0) {
                        if (2 < uVar16) {
                            if (uVar16 < 5) {
                                lVar11 = FUN_1407f1094(*param_2,0,2);
                                if (lVar11 != 0) goto LAB_1407f50a1;
                            }
                            else {
                                LAB_1407f4f99:
                                if (uVar16 != 5) goto LAB_1407f50f9;
                            }
                        }
                        LAB_1407f4fa3:
                        iVar17 = 0;
                        if (local_res20 == 1) {
                            local_70 = CONCAT44(local_70._4_4_,0xbfbbef);
                            iVar3 = 3;
                        }
                        else {
                            if (local_res20 != 2) goto LAB_1407f50f9;
                            local_70 = CONCAT44(local_70._4_4_,0xfeff);
                            iVar17 = 0;
                        }
                        do {
                            iVar7 = FUN_1407eef4c(*param_2,(longlong)&local_70 + (longlong)iVar17,iVar3 - iVar17);
                            if (iVar7 == -1) goto LAB_1407f4e80;
                            iVar17 = iVar17 + iVar7;
                        } while (iVar17 < iVar3);
                    }
                }
                else if (uVar5 == 0x80000000) {
                    LAB_1407f4fed:
                    iVar3 = FUN_1407f7684(*param_2,&local_70);
                    if (iVar3 == -1) goto LAB_1407f4e80;
                    if (iVar3 == 2) {
                        LAB_1407f502b:
                        if ((short)local_70 == -2) {
                            FUN_1407eee58(*param_2);
                            piVar9 = _errno();
                            *piVar9 = 0x16;
                            return 0x16;
                        }
                        if ((short)local_70 == -0x101) {
                            lVar11 = FUN_1407f1094(*param_2,2,0);
                            if (lVar11 == -1) goto LAB_1407f4e80;
                            local_res20 = 2;
                            goto LAB_1407f50f9;
                        }
                    }
                    else if (iVar3 == 3) {
                        if ((int)local_70 == 0xbfbbef) {
                            local_res20 = 1;
                            goto LAB_1407f50f9;
                        }
                        goto LAB_1407f502b;
                    }
                    LAB_1407f50a1:
                    lVar11 = FUN_1407f1094(*param_2,0,0);
                    if (lVar11 == -1) goto LAB_1407f4e80;
                }
                else if ((uVar5 == 0xc0000000) && (uVar16 != 0)) {
                    if (2 < uVar16) {
                        if (4 < uVar16) goto LAB_1407f4f99;
                        lVar11 = FUN_1407f1094(*param_2,0,2);
                        if (lVar11 != 0) {
                            lVar11 = FUN_1407f1094(*param_2,0,0);
                            if (lVar11 == -1) goto LAB_1407f4e80;
                            goto LAB_1407f4fed;
                        }
                    }
                    goto LAB_1407f4fa3;
                }
            }
        }
        LAB_1407f50f9:
        lVar13 = (ulonglong)(*param_2 & 0x1f) * 0x58;
        lVar11 = (&DAT_140c60410)[(longlong)(int)*param_2 >> 5];
        pbVar1 = (byte *)(lVar11 + 0x38 + lVar13);
        *pbVar1 = *pbVar1 & 0x80;
        pbVar1 = (byte *)(lVar11 + 0x38 + lVar13);
        *pbVar1 = *pbVar1 | local_res20;
        lVar13 = (ulonglong)(*param_2 & 0x1f) * 0x58;
        lVar11 = (&DAT_140c60410)[(longlong)(int)*param_2 >> 5];
        pbVar1 = (byte *)(lVar11 + 0x38 + lVar13);
        *pbVar1 = *pbVar1 & 0x7f;
        pbVar1 = (byte *)(lVar11 + 0x38 + lVar13);
        *pbVar1 = *pbVar1 | (char)(param_4 >> 0x10) << 7;
        if (((bVar14 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_2 >> 5] + 8 +
                                                                             (ulonglong)(*param_2 & 0x1f) * 0x58);
            *pbVar1 = *pbVar1 | 0x20;
        }
        if ((local_88 & 0xc0000000) != 0xc0000000) {
            return 0;
        }
        if ((param_4 & 1) == 0) {
            return 0;
        }
        CloseHandle(local_60);
        lVar11 = FUN_1407f48a8(param_3,local_88 & 0x7fffffff,bVar19,local_58,3,local_78,local_80);
        if (lVar11 != -1) {
            *(longlong *)
                    ((ulonglong)(*param_2 & 0x1f) * 0x58 + (&DAT_140c60410)[(longlong)(int)*param_2 >> 5]) =
            lVar11;
            return 0;
        }
        DVar6 = GetLastError();
        _dosmaperr(DVar6);
        pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_2 >> 5] + 8 +
                                                                         (ulonglong)(*param_2 & 0x1f) * 0x58);
        *pbVar1 = *pbVar1 & 0xfe;
        FUN_1407f54f8(*param_2);
    }
    LAB_1407f4d75:
    puVar10 = (uint *)_errno();
    return (ulonglong)*puVar10;
}



void FUN_1407f5234(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    FUN_1407f499c(param_2,param_3,param_4,param_5,param_1,1);
    return;
}



undefined8 FUN_1407f5268(uint param_1)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
    lVar2 = (&DAT_140c60410)[(longlong)(int)param_1 >> 5];
    if (*(int *)(lVar3 + 0xc + lVar2) == 0) {
        _lock(10);
        if (*(int *)(lVar3 + 0xc + lVar2) == 0) {
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(lVar3 + 0x10 + lVar2),4000);
            piVar1 = (int *)(lVar3 + 0xc + lVar2);
            *piVar1 = *piVar1 + 1;
        }
        FUN_1407e2528(10);
    }
    EnterCriticalSection
    ((LPCRITICAL_SECTION)((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + 0x10 + lVar3));
    return 1;
}



int FUN_1407f5300(void)

{
    int iVar1;
    undefined8 *puVar2;
    int iVar3;

    iVar3 = -1;
    iVar1 = FUN_1407e240c();
    if (iVar1 == 0) {
        iVar3 = -1;
    }
    else {
        _lock(0xb);
        for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
            puVar2 = (undefined8 *)(&DAT_140c60410)[iVar1];
            if (puVar2 == (undefined8 *)0x0) {
                puVar2 = (undefined8 *)FUN_1407e2bb0(0x20);
                if (puVar2 != (undefined8 *)0x0) {
                    (&DAT_140c60410)[iVar1] = puVar2;
                    DAT_140dc523c = DAT_140dc523c + 0x20;
                    for (; puVar2 < (undefined8 *)((&DAT_140c60410)[iVar1] + 0xb00); puVar2 = puVar2 + 0xb) {
                        *(undefined2 *)(puVar2 + 1) = 0xa00;
                        *puVar2 = 0xffffffffffffffff;
                        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
                    }
                    iVar3 = iVar1 << 5;
                    *(undefined *)((&DAT_140c60410)[(longlong)iVar3 >> 5] + 8) = 1;
                    iVar1 = FUN_1407f5268(iVar3);
                    if (iVar1 == 0) {
                        iVar3 = -1;
                    }
                }
                break;
            }
            for (; puVar2 < (undefined8 *)((&DAT_140c60410)[iVar1] + 0xb00); puVar2 = puVar2 + 0xb) {
                if ((*(byte *)(puVar2 + 1) & 1) == 0) {
                    if (*(int *)((longlong)puVar2 + 0xc) == 0) {
                        _lock(10);
                        if (*(int *)((longlong)puVar2 + 0xc) == 0) {
                            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar2 + 2),4000);
                            *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
                        }
                        FUN_1407e2528();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
                    if ((*(byte *)(puVar2 + 1) & 1) == 0) {
                        *(undefined *)(puVar2 + 1) = 1;
                        *puVar2 = 0xffffffffffffffff;
                        iVar3 = (int)(((longlong)puVar2 - (&DAT_140c60410)[iVar1]) / 0x58) + iVar1 * 0x20;
                        break;
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
                }
            }
            if (iVar3 != -1) break;
        }
        FUN_1407e2528(0xb);
    }
    return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407f54f8(uint param_1)

{
    int *piVar1;
    ulong *puVar2;
    DWORD nStdHandle;
    longlong lVar3;

    if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
        lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
        if (((*(byte *)((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + 8 + lVar3) & 1) != 0) &&
        (*(longlong *)((&DAT_140c60410)[(longlong)(int)param_1 >> 5] + lVar3) != -1)) {
            if (_DAT_140c5fb30 == 1) {
                if (param_1 == 0) {
                    nStdHandle = 0xfffffff6;
                }
                else if (param_1 == 1) {
                    nStdHandle = 0xfffffff5;
                }
                else {
                    if (param_1 != 2) goto LAB_1407f556e;
                    nStdHandle = 0xfffffff4;
                }
                SetStdHandle(nStdHandle,(HANDLE)0x0);
            }
            LAB_1407f556e:
            *(undefined8 *)(lVar3 + (&DAT_140c60410)[(longlong)(int)param_1 >> 5]) = 0xffffffffffffffff;
            return 0;
        }
    }
    piVar1 = _errno();
    *piVar1 = 9;
    puVar2 = __doserrno();
    *puVar2 = 0;
    return 0xffffffff;
}



// Library Function - Single Match
//  _get_osfhandle
//
// Library: Visual Studio 2010 Release

intptr_t _get_osfhandle(int _FileHandle)

{
    ulong *puVar1;
    int *piVar2;
    longlong lVar3;

    if (_FileHandle == -2) {
        puVar1 = __doserrno();
        *puVar1 = 0;
        piVar2 = _errno();
        *piVar2 = 9;
    }
    else {
        if ((-1 < _FileHandle) && ((uint)_FileHandle < DAT_140dc523c)) {
            lVar3 = (ulonglong)(_FileHandle & 0x1f) * 0x58;
            if ((*(byte *)((&DAT_140c60410)[(longlong)_FileHandle >> 5] + 8 + lVar3) & 1) != 0) {
                return *(intptr_t *)((&DAT_140c60410)[(longlong)_FileHandle >> 5] + lVar3);
            }
        }
        puVar1 = __doserrno();
        *puVar1 = 0;
        piVar2 = _errno();
        *piVar2 = 9;
        FUN_1407dc370();
    }
    return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407f5618(uint param_1,HANDLE param_2)

{
    int *piVar1;
    ulong *puVar2;
    DWORD nStdHandle;
    longlong lVar3;

    if ((-1 < (int)param_1) && (param_1 < DAT_140dc523c)) {
        lVar3 = (ulonglong)(param_1 & 0x1f) * 0x58;
        if (*(longlong *)(lVar3 + (&DAT_140c60410)[(longlong)(int)param_1 >> 5]) == -1) {
            if (_DAT_140c5fb30 == 1) {
                if (param_1 == 0) {
                    nStdHandle = 0xfffffff6;
                }
                else if (param_1 == 1) {
                    nStdHandle = 0xfffffff5;
                }
                else {
                    if (param_1 != 2) goto LAB_1407f568d;
                    nStdHandle = 0xfffffff4;
                }
                SetStdHandle(nStdHandle,param_2);
            }
            LAB_1407f568d:
            *(HANDLE *)(lVar3 + (&DAT_140c60410)[(longlong)(int)param_1 >> 5]) = param_2;
            return 0;
        }
    }
    piVar1 = _errno();
    *piVar1 = 9;
    puVar2 = __doserrno();
    *puVar2 = 0;
    return 0xffffffff;
}



void FUN_1407f56c8(uint param_1)

{
    // WARNING: Could not recover jumptable at 0x0001407f56eb. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection
    ((LPCRITICAL_SECTION)
            ((ulonglong)(param_1 & 0x1f) * 0x58 + 0x10 +
             (&DAT_140c60410)[(longlong)(int)param_1 >> 5]));
    return;
}



undefined2 FUN_1407f56f4(undefined2 param_1)

{
    BOOL BVar1;
    undefined2 local_res8 [4];
    DWORD local_res10 [6];

    local_res8[0] = param_1;
    if (DAT_140c10a80 == (HANDLE)0xfffffffffffffffe) {
        FUN_1407f8018();
    }
    if ((DAT_140c10a80 == (HANDLE)0xffffffffffffffff) ||
        (BVar1 = WriteConsoleW(DAT_140c10a80,local_res8,1,local_res10,(LPVOID)0x0), BVar1 == 0)) {
        local_res8[0] = 0xffff;
    }
    return local_res8[0];
}



int FUN_1407f5750(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
                  int param_6)

{
    byte *pbVar1;
    int iVar2;
    int *piVar3;
    int local_18;
    int local_14;

    local_18 = 0;
    if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
        ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        iVar2 = 0x16;
    }
    else {
        iVar2 = FUN_1407f582c(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
        if (local_18 != 0) {
            if (iVar2 != 0) {
                pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)*param_5 >> 5] + 8 +
                                                                                 (ulonglong)(*param_5 & 0x1f) * 0x58);
                *pbVar1 = *pbVar1 & 0xfe;
            }
            local_14 = iVar2;
            FUN_1407f56c8(*param_5);
        }
        if (iVar2 != 0) {
            *param_5 = 0xffffffff;
        }
    }
    return iVar2;
}



undefined4
FUN_1407f582c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
    int iVar1;
    undefined4 uVar2;
    void *local_18 [2];

    local_18[0] = (void *)0x0;
    iVar1 = FUN_1407dba74(param_3,local_18);
    if (iVar1 == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = FUN_1407f4a78(param_1,param_2,local_18[0],param_4,param_5,param_6,param_7);
        free(local_18[0]);
    }
    return uVar2;
}



void FUN_1407f58b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    FUN_1407f5750(param_2,param_3,param_4,param_5,param_1,1);
    return;
}



ulonglong FUN_1407f58e8(byte *param_1,byte *param_2,longlong param_3)

{
    ulonglong uVar1;
    int *piVar2;
    ushort uVar3;
    longlong lVar4;
    byte *pbVar5;
    byte *pbVar6;
    _LocaleUpdate local_28 [8];
    longlong local_20;
    longlong local_18;
    char local_10;

    if (param_3 == 0) {
        return 0;
    }
    _LocaleUpdate::_LocaleUpdate(local_28,(localeinfo_struct *)0x0);
    if (*(int *)(local_20 + 8) == 0) {
        uVar1 = FUN_1407f8070(param_1,param_2,param_3);
    }
    else {
        if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
            do {
                uVar1 = (ulonglong)*param_1;
                lVar4 = param_3 + -1;
                pbVar5 = param_1 + 1;
                if ((*(byte *)(uVar1 + 0x19 + local_20) & 4) == 0) {
                    LAB_1407f59aa:
                    uVar3 = (ushort)uVar1;
                    uVar1 = (ulonglong)*param_2;
                    pbVar6 = param_2 + 1;
                    if ((*(byte *)(uVar1 + 0x19 + local_20) & 4) != 0) {
                        if (lVar4 == 0) {
                            uVar1 = 0;
                        }
                        else {
                            lVar4 = param_3 + -2;
                            if (*pbVar6 == 0) {
                                uVar1 = 0;
                            }
                            else {
                                uVar1 = (ulonglong)CONCAT11(*param_2,*pbVar6);
                                pbVar6 = param_2 + 2;
                            }
                        }
                    }
                }
                else {
                    if (lVar4 != 0) {
                        if (*pbVar5 == 0) {
                            uVar1 = 0;
                        }
                        else {
                            uVar1 = (ulonglong)CONCAT11(*param_1,*pbVar5);
                            pbVar5 = param_1 + 2;
                        }
                        goto LAB_1407f59aa;
                    }
                    uVar3 = 0;
                    if ((*(byte *)((ulonglong)*param_2 + 0x19 + local_20) & 4) != 0) goto LAB_1407f59e9;
                    uVar1 = (ulonglong)*param_2;
                    pbVar6 = param_2;
                }
                if ((ushort)uVar1 != uVar3) {
                    uVar1 = (ulonglong)((-(uint)((ushort)uVar1 < uVar3) & 2) - 1);
                    goto LAB_1407f59f4;
                }
                if ((uVar3 == 0) || (param_3 = lVar4, param_1 = pbVar5, param_2 = pbVar6, lVar4 == 0))
                    goto LAB_1407f59e9;
            } while( true );
        }
        piVar2 = _errno();
        *piVar2 = 0x16;
        FUN_1407dc370();
        uVar1 = 0x7fffffff;
    }
    LAB_1407f59f4:
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar1;
    LAB_1407f59e9:
    uVar1 = 0;
    goto LAB_1407f59f4;
}



ulonglong FUN_1407f5a1c(byte *param_1,byte *param_2,longlong param_3)

{
    byte bVar1;
    ulonglong uVar2;
    int *piVar3;
    ushort uVar4;
    longlong lVar5;
    byte *pbVar6;
    byte *pbVar7;
    ushort uVar8;
    _LocaleUpdate local_28 [8];
    longlong local_20;
    longlong local_18;
    char local_10;

    _LocaleUpdate::_LocaleUpdate(local_28,(localeinfo_struct *)0x0);
    if (param_3 == 0) {
        LAB_1407f5b9e:
        uVar2 = 0;
    }
    else if (*(int *)(local_20 + 8) == 0) {
        uVar2 = FUN_1407f8138(param_1,param_2,param_3);
    }
    else {
        if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
            do {
                uVar2 = (ulonglong)*param_1;
                lVar5 = param_3 + -1;
                pbVar6 = param_1 + 1;
                if ((*(byte *)(uVar2 + 0x19 + local_20) & 4) == 0) {
                    if ((*(byte *)(uVar2 + 0x19 + local_20) & 0x10) != 0) {
                        uVar2 = (ulonglong)*(byte *)(uVar2 + 0x119 + local_20);
                    }
                    LAB_1407f5b23:
                    uVar8 = (ushort)uVar2;
                    uVar2 = (ulonglong)*param_2;
                    pbVar7 = param_2 + 1;
                    if ((*(byte *)(uVar2 + 0x19 + local_20) & 4) == 0) {
                        if ((*(byte *)(uVar2 + 0x19 + local_20) & 0x10) != 0) {
                            uVar2 = (ulonglong)*(byte *)(uVar2 + 0x119 + local_20);
                        }
                    }
                    else if (lVar5 == 0) {
                        uVar2 = 0;
                    }
                    else {
                        lVar5 = param_3 + -2;
                        if (*pbVar7 == 0) {
                            uVar2 = 0;
                        }
                        else {
                            bVar1 = *pbVar7;
                            pbVar7 = param_2 + 2;
                            uVar4 = CONCAT11(*param_2,bVar1);
                            uVar2 = (ulonglong)uVar4;
                            if ((uVar4 < *(ushort *)(local_20 + 0xc)) ||
                                (*(ushort *)(local_20 + 0xe) <= uVar4 && uVar4 != *(ushort *)(local_20 + 0xe))) {
                                if ((*(ushort *)(local_20 + 0x12) <= uVar4) &&
                                    (uVar4 < *(ushort *)(local_20 + 0x14) || uVar4 == *(ushort *)(local_20 + 0x14)))
                                {
                                    uVar2 = (ulonglong)(ushort)(uVar4 + *(short *)(local_20 + 0x16));
                                }
                            }
                            else {
                                uVar2 = (ulonglong)(ushort)(uVar4 + *(short *)(local_20 + 0x10));
                            }
                        }
                    }
                }
                else {
                    if (lVar5 != 0) {
                        if (*pbVar6 == 0) {
                            uVar2 = 0;
                        }
                        else {
                            bVar1 = *pbVar6;
                            pbVar6 = param_1 + 2;
                            uVar8 = CONCAT11(*param_1,bVar1);
                            uVar2 = (ulonglong)uVar8;
                            if ((uVar8 < *(ushort *)(local_20 + 0xc)) ||
                                (*(ushort *)(local_20 + 0xe) <= uVar8 && uVar8 != *(ushort *)(local_20 + 0xe))) {
                                if ((*(ushort *)(local_20 + 0x12) <= uVar8) &&
                                    (uVar8 < *(ushort *)(local_20 + 0x14) || uVar8 == *(ushort *)(local_20 + 0x14)))
                                {
                                    uVar2 = (ulonglong)(ushort)(uVar8 + *(short *)(local_20 + 0x16));
                                }
                            }
                            else {
                                uVar2 = (ulonglong)(ushort)(uVar8 + *(short *)(local_20 + 0x10));
                            }
                        }
                        goto LAB_1407f5b23;
                    }
                    uVar8 = 0;
                    if ((*(byte *)((ulonglong)*param_2 + 0x19 + local_20) & 4) != 0) goto LAB_1407f5b9e;
                    uVar2 = (ulonglong)*param_2;
                    pbVar7 = param_2;
                }
                if ((ushort)uVar2 != uVar8) {
                    uVar2 = (ulonglong)((-(uint)((ushort)uVar2 < uVar8) & 2) - 1);
                    goto LAB_1407f5ba9;
                }
                if ((uVar8 == 0) || (param_3 = lVar5, param_1 = pbVar6, param_2 = pbVar7, lVar5 == 0))
                    goto LAB_1407f5b9e;
            } while( true );
        }
        piVar3 = _errno();
        *piVar3 = 0x16;
        FUN_1407dc370();
        uVar2 = 0x7fffffff;
    }
    LAB_1407f5ba9:
    if (local_10 != '\0') {
        *(uint *)(local_18 + 200) = *(uint *)(local_18 + 200) & 0xfffffffd;
    }
    return uVar2;
}



// Library Function - Single Match
//  _errcode
//
// Library: Visual Studio

int _errcode(uint param_1)

{
    int iVar1;

    if ((param_1 & 0x20) == 0) {
        if ((param_1 & 8) == 0) {
            if ((param_1 & 4) == 0) {
                if ((param_1 & 1) == 0) {
                    iVar1 = (param_1 & 2) * 2;
                }
                else {
                    iVar1 = 3;
                }
            }
            else {
                iVar1 = 2;
            }
        }
        else {
            iVar1 = 1;
        }
    }
    else {
        iVar1 = 5;
    }
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407f5c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                   ulonglong param_5_00,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 **param_5)

{
    int iVar1;
    undefined8 **ppuVar2;
    undefined8 *puVar3;
    undefined4 uVar4;
    undefined auStack248 [32];
    undefined8 *local_d8;
    undefined8 **local_d0;
    undefined4 local_c8;
    undefined8 *local_b8;
    undefined8 local_b0;
    undefined local_a8 [64];
    uint local_68;
    ulonglong local_38;

    ppuVar2 = param_5;
    uVar4 = (undefined4)param_3;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    local_b8 = param_4;
    local_b0 = param_3;
    iVar1 = FUN_1407f5e0c(param_5_00,&local_b8,param_5);
    if (iVar1 == 0) {
        local_c8 = 0;
        local_68 = local_68 & 0xfffffffe;
        local_d0 = &local_b8;
        local_d8 = &local_b0;
        FUN_1407f615c(local_a8,&param_5,param_5_00 & 0xffffffff,param_6);
        ppuVar2 = param_5;
    }
    iVar1 = _errcode(param_5_00 & 0xffffffff);
    if ((_DAT_140c106b4 == 0) && (iVar1 != 0)) {
        local_d8 = local_b8;
        local_d0 = ppuVar2;
        puVar3 = (undefined8 *)FUN_1407f64bc(local_b8,param_2,uVar4,0,iVar1,param_6);
    }
    else {
        _set_errno_from_matherr(iVar1);
        _ctrlfp(ppuVar2,0xffc0);
        puVar3 = local_b8;
    }
    FUN_1407db4f0(puVar3,local_38 ^ (ulonglong)auStack248);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407f5d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5_00,undefined4 param_6_00,undefined8 param_7,undefined8 param_8,
                   undefined8 *param_5,undefined8 *param_6)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined auStack264 [32];
    undefined8 *local_e8;
    undefined8 *local_e0;
    undefined4 local_d8;
    undefined8 local_c8 [2];
    undefined local_b8 [48];
    undefined8 local_88;
    uint local_78;
    ulonglong local_48;

    puVar2 = param_6;
    uVar4 = (undefined4)((ulonglong)param_4 >> 0x20);
    uVar3 = (undefined4)param_4;
    uVar5 = (undefined4)param_3;
    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    local_c8[0] = param_3;
    iVar1 = FUN_1407f5e0c(param_5_00,&param_5,param_6);
    if (iVar1 == 0) {
        local_d8 = 0;
        local_88 = CONCAT44(uVar4,uVar3);
        local_78 = local_78 & 0xffffffe3 | 3;
        local_e0 = &param_5;
        local_e8 = local_c8;
        FUN_1407f615c(local_b8,&param_6,param_5_00 & 0xffffffff,param_6_00);
        puVar2 = param_6;
    }
    iVar1 = _errcode(param_5_00 & 0xffffffff);
    if ((_DAT_140c106b4 == 0) && (iVar1 != 0)) {
        local_e8 = param_5;
        local_e0 = puVar2;
        puVar2 = (undefined8 *)FUN_1407f64bc(param_5,param_2,uVar5,uVar3,iVar1,param_6_00);
    }
    else {
        _set_errno_from_matherr(iVar1);
        _ctrlfp(puVar2,0xffc0);
        puVar2 = param_5;
    }
    FUN_1407db4f0(puVar2,local_48 ^ (ulonglong)auStack264);
    return;
}



// WARNING: Could not reconcile some variable overlaps

bool FUN_1407f5e0c(uint param_1,double *param_2,ulonglong param_3,undefined8 param_4)

{
    double dVar1;
    double dVar2;
    ulonglong uVar3;
    uint uVar4;
    bool bVar5;
    double dVar6;
    undefined4 in_XMM6_Da;
    undefined4 uVar7;
    undefined4 in_XMM6_Db;
    undefined4 uVar8;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    int local_res8 [2];
    undefined8 local_res20;

    uVar4 = param_1 & 0x1f;
    if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
        _set_statfp(1);
        uVar4 = param_1 & 0x17;
        goto LAB_1407f6034;
    }
    if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
        _set_statfp();
        uVar4 = param_1 & 0x1b;
        goto LAB_1407f6034;
    }
    if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 >> 0xb & 1) != 0)) {
            bVar5 = (param_1 & 0x10) != 0;
            uVar7 = 0;
            uVar8 = 0;
            if (*param_2 == 0.0) {
                bVar5 = true;
            }
            else {
                dVar6 = (double)FUN_1407f8264(4,local_res8,param_3,param_4,
                                              CONCAT412(in_XMM6_Dd,
                                                        CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))
                                              ));
                local_res8[0] = local_res8[0] + -0x600;
                if (local_res8[0] < -0x432) {
                    local_res20 = dVar6 * (double)CONCAT44(uVar8,uVar7);
                    bVar5 = true;
                }
                else {
                    local_res20 = (double)((ulonglong)dVar6 & 0xfffffffffffff | 0x10000000000000);
                    if (local_res8[0] < -0x3fd) {
                        local_res20._0_4_ = (uint)((ulonglong)dVar6 & 0xfffffffffffff);
                        uVar3 = (ulonglong)(-local_res8[0] - 0x3fd);
                        do {
                            if ((((uint)local_res20 & 1) != 0) && (!bVar5)) {
                                bVar5 = true;
                            }
                            local_res20._0_4_ = (uint)local_res20 >> 1;
                            if ((local_res20._4_4_ & 1) != 0) {
                                local_res20._0_4_ = (uint)local_res20 | 0x80000000;
                            }
                            local_res20._4_4_ = local_res20._4_4_ >> 1;
                            uVar3 = uVar3 - 1;
                        } while (uVar3 != 0);
                    }
                    if (dVar6 <= (double)CONCAT44(uVar8,uVar7) && (double)CONCAT44(uVar8,uVar7) != dVar6) {
                        local_res20 = (double)((ulonglong)local_res20 ^ 0x8000000000000000);
                    }
                }
                *param_2 = local_res20;
            }
            if (bVar5) {
                _set_statfp(0x10);
            }
            uVar4 = param_1 & 0x1d;
        }
        goto LAB_1407f6034;
    }
    _set_statfp(8);
    uVar3 = param_3 & 0x6000;
    dVar6 = DAT_140c10a90;
    dVar2 = DAT_140c10a90;
    if (uVar3 == 0) {
        dVar1 = *param_2;
        joined_r0x0001407f5eda:
        if (dVar1 <= 0.0) {
            dVar6 = (double)((ulonglong)dVar2 ^ 0x8000000000000000);
        }
        *param_2 = dVar6;
    }
    else {
        if (uVar3 == 0x2000) {
            dVar1 = *param_2;
            dVar6 = DAT_140c10aa0;
            goto joined_r0x0001407f5eda;
        }
        dVar2 = DAT_140c10aa0;
        if (uVar3 == 0x4000) {
            dVar1 = *param_2;
            goto joined_r0x0001407f5eda;
        }
        if (uVar3 == 0x6000) {
            dVar1 = *param_2;
            dVar6 = DAT_140c10aa0;
            goto joined_r0x0001407f5eda;
        }
    }
    uVar4 = param_1 & 0x1e;
    LAB_1407f6034:
    if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
        _set_statfp(0x20);
        uVar4 = uVar4 & 0xffffffef;
    }
    return uVar4 == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1407f6070(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (_DAT_140c106b4 == 0) {
        uVar2 = FUN_1407f64bc(param_1,(int)param_2,(int)param_2,0,1,param_3,param_5,param_6,param_2,
                              param_5,CONCAT412(in_XMM6_Dd,
                                                CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    }
    else {
        piVar1 = _errno();
        *piVar1 = 0x21;
        _ctrlfp(param_5,0xffc0);
        uVar2 = extraout_XMM0_Qa;
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1407f60d0(undefined4 param_1,double param_2,double param_3,undefined4 param_4,undefined8 param_5
        ,undefined8 param_6,undefined8 param_7)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    if (_DAT_140c106b4 == 0) {
        uVar2 = FUN_1407f64bc(param_1,SUB84(param_2,0),SUB84(param_2,0),SUB84(param_3,0),1,param_4,
                              param_6,param_7,param_2 + param_3,param_7,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
    }
    else {
        piVar1 = _errno();
        *piVar1 = 0x21;
        _ctrlfp(param_7,0xffc0);
        uVar2 = extraout_XMM0_Qa;
    }
    return uVar2;
}



void FUN_1407f6134(void)

{
    FUN_1407f615c();
    return;
}



void FUN_1407f615c(uint *param_1,ulonglong *param_2,ulonglong param_3,uint param_4,
                   undefined8 *param_5,undefined8 *param_6,DWORD param_7)

{
    uint uVar1;
    ulonglong uVar2;
    DWORD dwExceptionCode;
    uint *local_res8;

    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    dwExceptionCode = param_7;
    if ((param_3 & 0x10) != 0) {
        param_1[1] = param_1[1] | 1;
        dwExceptionCode = 0xc000008f;
    }
    if ((param_3 & 2) != 0) {
        dwExceptionCode = 0xc0000093;
        param_1[1] = param_1[1] | 2;
    }
    if ((param_3 & 1) != 0) {
        dwExceptionCode = 0xc0000091;
        param_1[1] = param_1[1] | 4;
    }
    if ((param_3 & 4) != 0) {
        dwExceptionCode = 0xc000008e;
        param_1[1] = param_1[1] | 8;
    }
    if ((param_3 & 8) != 0) {
        dwExceptionCode = 0xc0000090;
        param_1[1] = param_1[1] | 0x10;
    }
    param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
    param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
    param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
    param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
    param_1[2] = param_1[2] ^ (~(*(uint *)param_2 >> 0xc) ^ param_1[2]) & 1;
    local_res8 = param_1;
    uVar2 = FUN_1407f664c();
    if ((uVar2 & 1) != 0) {
        local_res8[3] = local_res8[3] | 0x10;
    }
    if ((uVar2 & 4) != 0) {
        local_res8[3] = local_res8[3] | 8;
    }
    if ((uVar2 & 8) != 0) {
        local_res8[3] = local_res8[3] | 4;
    }
    if ((uVar2 & 0x10) != 0) {
        local_res8[3] = local_res8[3] | 2;
    }
    if ((uVar2 & 0x20) != 0) {
        local_res8[3] = local_res8[3] | 1;
    }
    uVar1 = *(uint *)param_2 & 0x6000;
    if ((*(uint *)param_2 & 0x6000) == 0) {
        *local_res8 = *local_res8 & 0xfffffffc;
    }
    else if (uVar1 == 0x2000) {
        *local_res8 = *local_res8 & 0xfffffffd;
        *local_res8 = *local_res8 | 1;
    }
    else if (uVar1 == 0x4000) {
        *local_res8 = *local_res8 & 0xfffffffe;
        *local_res8 = *local_res8 | 2;
    }
    else if (uVar1 == 0x6000) {
        *local_res8 = *local_res8 | 3;
    }
    *local_res8 = *local_res8 & 0xfffe001f;
    *local_res8 = *local_res8 | (param_4 & 0xfff) << 5;
    local_res8[8] = local_res8[8] | 1;
    if (param_7 == 0) {
        local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
        *(undefined8 *)(local_res8 + 4) = *param_5;
        local_res8[0x18] = local_res8[0x18] | 1;
        local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
        *(undefined8 *)(local_res8 + 0x14) = *param_6;
    }
    else {
        local_res8[8] = local_res8[8] & 0xffffffe1;
        local_res8[4] = *(uint *)param_5;
        local_res8[0x18] = local_res8[0x18] | 1;
        local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
        local_res8[0x14] = *(uint *)param_6;
    }
    _clrfp();
    RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
    if ((*(byte *)(local_res8 + 2) & 0x10) != 0) {
        *param_2 = *param_2 & 0xffffffffffffff7f;
    }
    if ((*(byte *)(local_res8 + 2) & 8) != 0) {
        *param_2 = *param_2 & 0xfffffffffffffdff;
    }
    if ((*(byte *)(local_res8 + 2) & 4) != 0) {
        *param_2 = *param_2 & 0xfffffffffffffbff;
    }
    if ((*(byte *)(local_res8 + 2) & 2) != 0) {
        *param_2 = *param_2 & 0xfffffffffffff7ff;
    }
    if ((*(byte *)(local_res8 + 2) & 1) != 0) {
        *param_2 = *param_2 & 0xffffffffffffefff;
    }
    uVar1 = *local_res8 & 3;
    if (uVar1 == 0) {
        *param_2 = *param_2 & 0xffffffffffff9fff;
    }
    else if (uVar1 == 1) {
        *param_2 = *param_2 & 0xffffffffffffbfff;
        *param_2 = *param_2 | 0x2000;
    }
    else if (uVar1 == 2) {
        *param_2 = *param_2 & 0xffffffffffffdfff;
        *param_2 = *param_2 | 0x4000;
    }
    else if (uVar1 == 3) {
        *param_2 = *param_2 | 0x6000;
    }
    if (param_7 == 0) {
        *param_6 = *(undefined8 *)(local_res8 + 0x14);
    }
    else {
        *(uint *)param_6 = local_res8[0x14];
    }
    return;
}

