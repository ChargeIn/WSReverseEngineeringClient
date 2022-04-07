//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Removing unreachable block (ram,0x00014018fe8d)

void FUN_14018fe50(undefined8 param_1, undefined8 param_2, ulonglong param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    wchar_t *pwVar3;
    float fVar4;
    undefined *puStack0000000000000028;

    fVar4 = (float) param_3;
    if ((longlong) param_3 < 0) {
        fVar4 = fVar4 + 1.844674e+19;
    }
    uVar2 = 0;
    uVar1 = param_3;
    if (0x18fff < param_3) {
        do {
            uVar2 = uVar2 + 1;
            fVar4 = (float) uVar1;
            if ((longlong) uVar1 < 0) {
                fVar4 = fVar4 + 1.844674e+19;
            }
            uVar1 = uVar1 >> 10;
            fVar4 = fVar4 * 0.0009765625;
        } while (0x18fff < uVar1);
        if (8 < uVar2) {
            uVar2 = 8;
        }
    }
    if (((param_3 < 0x400) || (0x2800 < uVar1)) || (fVar4 - (float) (int) fVar4 < 0.01)) {
        puStack0000000000000028 = (&PTR_u_bytes_140b5e4d0)[uVar2];
        pwVar3 = L"%.0f%s";
    } else if ((0x400 < uVar1) || (fVar4 - (float) (int) fVar4 < 0.1)) {
        puStack0000000000000028 = (&PTR_u_bytes_140b5e4d0)[uVar2];
        pwVar3 = L"%.1f%s";
    } else {
        puStack0000000000000028 = (&PTR_u_bytes_140b5e4d0)[uVar2];
        pwVar3 = L"%.2f%s";
    }
    FUN_14001b370(param_1, 0x20, pwVar3, (double) fVar4);
    return;
}


longlong FUN_14018ff60(longlong param_1, longlong param_2, ulonglong param_3) {
    short *psVar1;
    longlong lVar2;
    short *psVar3;
    short *psVar4;
    short *psVar5;
    short *psVar6;

    psVar1 = *(short **) (param_1 + 0x10);
    lVar2 = *(longlong * )(param_1 + 8);
    psVar3 = *(short **) (param_2 + 8);
    if (param_3 < (ulonglong)((longlong) psVar1 - lVar2 >> 1)) {
        psVar5 = (short *) (lVar2 + param_3 * 2);
        psVar6 = psVar1;
        if (psVar5 != psVar1) {
            do {
                if (psVar3 != psVar3 + (*(longlong * )(param_2 + 0x10) - (longlong) psVar3 >> 1)) {
                    psVar4 = psVar3;
                    do {
                        psVar6 = psVar5;
                        if (*psVar5 == *psVar4) goto LAB_14018ffbd;
                        psVar4 = psVar4 + 1;
                    } while (psVar4 != psVar3 + (*(longlong * )(param_2 + 0x10) - (longlong) psVar3 >> 1));
                }
                psVar5 = psVar5 + 1;
                psVar6 = psVar1;
            } while (psVar5 != psVar1);
        }
        LAB_14018ffbd:
        if (psVar6 != psVar1) {
            return (longlong) psVar6 - lVar2 >> 1;
        }
    }
    return -1;
}


longlong FUN_14018ffe0(longlong param_1, longlong param_2, longlong param_3, undefined param_4) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong local_res8;
    longlong local_res10;
    ulonglong local_48[2];

    lVar6 = *(longlong * )(param_2 + 0x10);
    lVar7 = *(longlong * )(param_2 + 8);
    lVar5 = *(longlong * )(param_1 + 0x10);
    lVar9 = *(longlong * )(param_1 + 8);
    lVar8 = 0;
    local_res10 = param_2;
    lVar3 = FUN_14010a450(lVar9, lVar5, lVar7, lVar6, param_4);
    if (lVar3 != lVar5) {
        do {
            lVar1 = *(longlong * )(param_3 + 8);
            lVar2 = *(longlong * )(param_3 + 0x10);
            local_48[0] = lVar6 - lVar7 >> 1;
            lVar3 = lVar3 - lVar9 >> 1;
            local_res8 = (lVar5 - lVar9 >> 1) - lVar3;
            puVar4 = &local_res8;
            if (local_48[0] <= local_res8) {
                puVar4 = local_48;
            }
            lVar7 = lVar2 - lVar1 >> 1;
            lVar6 = lVar9 + (*puVar4 + lVar3) * 2;
            lVar9 = lVar9 + lVar3 * 2;
            lVar5 = lVar6 - lVar9 >> 1;
            if (lVar5 < lVar7) {
                lVar7 = lVar1 + lVar5 * 2;
                FUN_1407db590(lVar9, lVar1, (lVar7 - lVar1 >> 1) * 2);
                FUN_1401905c0(param_1, lVar6, lVar7, lVar2);
            } else {
                lVar7 = lVar7 * 2;
                FUN_1407db590(lVar9, lVar1, lVar7);
                lVar7 = lVar7 + lVar9;
                if (lVar7 != lVar6) {
                    FUN_1407db590(lVar7, lVar6, (*(longlong * )(param_1 + 0x10) - lVar6 >> 1) * 2 + 2);
                    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (lVar6 - lVar7 >> 1) * -2;
                }
            }
            lVar6 = *(longlong * )(local_res10 + 0x10);
            lVar7 = *(longlong * )(local_res10 + 8);
            lVar9 = *(longlong * )(param_1 + 8);
            lVar5 = *(longlong * )(param_1 + 0x10);
            lVar8 = lVar8 + 1;
            lVar3 = FUN_14010a450(lVar9 + ((*(longlong * )(param_3 + 0x10) - *(longlong * )(param_3 + 8) >>
                                                                                                         1) + lVar3) *
                                          2, lVar5, lVar7, lVar6, param_4);
        } while (lVar3 != lVar5);
    }
    return lVar8;
}


longlong FUN_140190180(longlong param_1, longlong param_2, longlong param_3, byte param_4) {
    longlong lVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong local_res8;
    ulonglong local_res10;
    ulonglong in_stack_ffffffffffffffb8;

    lVar7 = *(longlong * )(param_2 + 0x10);
    lVar4 = *(longlong * )(param_1 + 0x10);
    lVar8 = *(longlong * )(param_1 + 8);
    lVar5 = 0;
    lVar1 = FUN_140190290(lVar8, lVar4, *(undefined8 * )(param_2 + 8), lVar7,
                          in_stack_ffffffffffffffb8 & 0xffffffffffffff00 | (ulonglong) param_4);
    if (lVar1 != lVar4) {
        uVar3 = *(ulonglong * )(param_3 + 0x10);
        uVar6 = *(undefined8 * )(param_3 + 8);
        do {
            local_res10 = lVar7 - *(longlong * )(param_2 + 8);
            lVar1 = lVar1 - lVar8;
            local_res8 = (lVar4 - lVar8) - lVar1;
            puVar2 = &local_res8;
            if (local_res10 <= local_res8) {
                puVar2 = &local_res10;
            }
            FUN_140190360(param_1, lVar8 + lVar1, *puVar2 + lVar8 + lVar1, uVar6, uVar3);
            lVar8 = *(longlong * )(param_1 + 8);
            lVar7 = *(longlong * )(param_2 + 0x10);
            lVar4 = *(longlong * )(param_1 + 0x10);
            lVar5 = lVar5 + 1;
            lVar1 = FUN_140190290((*(longlong * )(param_3 + 0x10) - *(longlong * )(param_3 + 8)) + lVar8 +
                                  lVar1, lVar4, *(undefined8 * )(param_2 + 8), lVar7,
                                  uVar3 & 0xffffffffffffff00 | (ulonglong) param_4);
            uVar3 = *(ulonglong * )(param_3 + 0x10);
            uVar6 = *(undefined8 * )(param_3 + 8);
        } while (lVar1 != lVar4);
    }
    return lVar5;
}


char *FUN_140190290(char *param_1, char *param_2, char *param_3, char *param_4) {
    char *pcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;

    if ((param_1 == param_2) || (param_3 == param_4)) {
        return param_1;
    }
    pcVar1 = param_3 + 1;
    if (pcVar1 == param_4) {
        do {
            if (*param_1 == *param_3) {
                return param_1;
            }
            param_1 = param_1 + 1;
        } while (param_1 != param_2);
        return param_1;
    }
    do {
        while (*param_1 != *param_3) {
            param_1 = param_1 + 1;
            if (param_1 == param_2) {
                return param_2;
            }
        }
        pcVar2 = param_1 + 1;
        if (pcVar2 == param_2) {
            return param_2;
        }
        pcVar3 = pcVar2;
        pcVar4 = pcVar1;
        if (*pcVar2 == *pcVar1) {
            do {
                pcVar4 = pcVar4 + 1;
                if (pcVar4 == param_4) {
                    return param_1;
                }
                pcVar3 = pcVar3 + 1;
                if (pcVar3 == param_2) {
                    return param_2;
                }
            } while (*pcVar3 == *pcVar4);
        }
        param_1 = pcVar2;
        if (pcVar2 == param_2) {
            return pcVar2;
        }
    } while (true);
}


longlong FUN_140190360(longlong param_1, longlong param_2, longlong param_3, longlong param_4,
                       longlong param_5) {
    longlong lVar1;

    lVar1 = param_5 - param_4;
    if (param_3 - param_2 < lVar1) {
        lVar1 = (param_3 - param_2) + param_4;
        FUN_1407db590(param_2, param_4, lVar1 - param_4);
        FUN_140190400(param_1, param_3, lVar1, param_5);
    } else {
        FUN_1407db590(param_2, param_4, lVar1);
        lVar1 = lVar1 + param_2;
        if (lVar1 != param_3) {
            FUN_1407db590(lVar1, param_3, (*(longlong * )(param_1 + 0x10) - param_3) + 1);
            *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (lVar1 - param_3);
        }
    }
    return param_1;
}


void FUN_140190400(longlong param_1, longlong param_2, longlong param_3, longlong param_4) {
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    undefined *puVar5;
    ulonglong uVar6;
    ulonglong local_res18;
    ulonglong local_res20;

    if (param_3 != param_4) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        uVar6 = param_4 - param_3;
        if (*(longlong * )(param_1 + 0x18) - lVar3 < (longlong)(uVar6 + 1)) {
            local_res20 = lVar3 - *(longlong * )(param_1 + 8);
            local_res18 = uVar6;
            puVar1 = &local_res18;
            if (uVar6 <= local_res20) {
                puVar1 = &local_res20;
            }
            local_res18 = *puVar1 + local_res20 + 1;
            lVar2 = FUN_14018b280(local_res18, 0);
            lVar3 = *(longlong * )(param_1 + 8);
            FUN_1407db590(lVar2, lVar3, param_2 - lVar3);
            lVar4 = (lVar2 - lVar3) + param_2;
            FUN_1407db590(lVar4, param_3, uVar6);
            lVar3 = *(longlong * )(param_1 + 0x10);
            param_4 = (lVar4 - param_3) + param_4;
            FUN_1407db590(param_4, param_2, lVar3 - param_2);
            puVar5 = (undefined * )((param_4 - param_2) + lVar3);
            if (puVar5 != (undefined *) 0x0) {
                *puVar5 = 0;
            }
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar2;
            *(undefined * *)(param_1 + 0x10) = puVar5;
            *(ulonglong * )(param_1 + 0x18) = local_res18 + lVar2;
        } else {
            lVar2 = *(longlong * )(param_1 + 0x10);
            lVar3 = lVar3 - param_2;
            if (lVar3 < (longlong) uVar6) {
                lVar4 = param_3 + 1 + lVar3;
                FUN_1407db590(lVar2 + 1, lVar4, param_4 - lVar4);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (uVar6 - lVar3);
                FUN_14001b010(param_2, lVar2 + 1, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + lVar3;
                FUN_1407db590(param_2, param_3, lVar4 - param_3);
            } else {
                FUN_14001b010((lVar2 - uVar6) + 1, lVar2 + 1, lVar2 + 1);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar6;
                FUN_1407db590(uVar6 + param_2, param_2, (lVar3 - uVar6) + 1);
                FUN_1407db590(param_2, param_3, uVar6);
            }
        }
    }
    return;
}


void FUN_1401905c0(longlong param_1, undefined2 *param_2, longlong param_3, longlong param_4) {
    undefined2 *puVar1;
    ulonglong *puVar2;
    undefined2 *puVar3;
    undefined2 *puVar4;
    longlong lVar5;
    undefined2 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong local_res18;
    ulonglong local_res20;

    if (param_3 != param_4) {
        lVar5 = *(longlong * )(param_1 + 0x10);
        uVar8 = param_4 - param_3 >> 1;
        if (*(longlong * )(param_1 + 0x18) - lVar5 >> 1 < (longlong)(uVar8 + 1)) {
            local_res20 = lVar5 - *(longlong * )(param_1 + 8) >> 1;
            local_res18 = uVar8;
            puVar2 = &local_res18;
            if (uVar8 <= local_res20) {
                puVar2 = &local_res20;
            }
            lVar5 = local_res20 + 1 + *puVar2;
            puVar3 = (undefined2 *) FUN_14018b280(lVar5 * 2, 0);
            puVar4 = puVar3;
            for (puVar6 = *(undefined2 * *)(param_1 + 8); puVar6 != param_2; puVar6 = puVar6 + 1) {
                if (puVar4 != (undefined2 *) 0x0) {
                    *puVar4 = *puVar6;
                }
                puVar4 = puVar4 + 1;
            }
            FUN_1407db590(puVar4, param_3, uVar8 * 2);
            puVar1 = *(undefined2 * *)(param_1 + 0x10);
            puVar6 = puVar4 + uVar8;
            if (param_2 != puVar1) {
                param_2 = (undefined2 * )
                        ((longlong) puVar6 + (uVar8 * -2 - (longlong) puVar4) + (longlong) param_2);
                do {
                    if (puVar6 != (undefined2 *) 0x0) {
                        *puVar6 = *param_2;
                    }
                    param_2 = param_2 + 1;
                    puVar6 = puVar6 + 1;
                } while (param_2 != puVar1);
            }
            if (puVar6 != (undefined2 *) 0x0) {
                *puVar6 = 0;
            }
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(undefined2 * *)(param_1 + 8) = puVar3;
            *(undefined2 * *)(param_1 + 0x10) = puVar6;
            *(undefined2 * *)(param_1 + 0x18) = puVar3 + lVar5;
        } else {
            lVar7 = *(longlong * )(param_1 + 0x10);
            lVar5 = lVar5 - (longlong) param_2 >> 1;
            if (lVar5 < (longlong) uVar8) {
                puVar6 = (undefined2 * )(lVar7 + 2);
                lVar7 = param_3 + 2 + lVar5 * 2;
                FUN_1407db590(puVar6, lVar7, (param_4 - lVar7 >> 1) * 2);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (uVar8 - lVar5) * 2;
                puVar4 = *(undefined2 * *)(param_1 + 0x10);
                puVar3 = param_2;
                if (param_2 != puVar6) {
                    do {
                        if (puVar4 != (undefined2 *) 0x0) {
                            *puVar4 = *puVar3;
                        }
                        puVar3 = puVar3 + 1;
                        puVar4 = puVar4 + 1;
                    } while (puVar3 != puVar6);
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + lVar5 * 2;
                FUN_1407db590(param_2, param_3, (lVar7 - param_3 >> 1) * 2);
            } else {
                puVar4 = (undefined2 * )(lVar7 + uVar8 * -2);
                puVar6 = (undefined2 * )(lVar7 + 2);
                while (puVar4 = puVar4 + 1, puVar4 != (undefined2 * )(lVar7 + 2)) {
                    if (puVar6 != (undefined2 *) 0x0) {
                        *puVar6 = *puVar4;
                    }
                    puVar6 = puVar6 + 1;
                }
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + uVar8 * 2;
                FUN_1407db590(param_2 + uVar8, param_2, (lVar5 - uVar8) * 2 + 2);
                FUN_1407db590(param_2, param_3, uVar8 * 2);
            }
        }
    }
    return;
}


void FUN_140190900(longlong param_1, undefined8 param_2, undefined8 param_3) {
    FUN_14001b370(param_2, param_3, L"(%d, %d) to (%d, %d)", *(undefined4 * )(param_1 + 0x18),
                  *(undefined4 * )(param_1 + 0x1c), *(undefined4 * )(param_1 + 0x20),
                  *(undefined4 * )(param_1 + 0x24));
    return;
}


undefined8 *FUN_140190940(undefined8 *param_1, undefined4 param_2) {
    DWORD dwTlsIndex;
    LPVOID pvVar1;

    *param_1 = &PTR_LAB_140b5e648;
    param_1[1] = L"Result";
    pvVar1 = TlsGetValue(DAT_140c63720);
    dwTlsIndex = DAT_140c63720;
    param_1[2] = pvVar1;
    TlsSetValue(dwTlsIndex, param_1);
    *param_1 = &PTR_LAB_140b5e640;
    *(undefined4 * )(param_1 + 3) = param_2;
    return param_1;
}


void FUN_1401909c0(void) {
    undefined auStack1128[32];
    LPWSTR local_448[2];
    WCHAR local_438[264];
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1128;
    if (DAT_140c884b0 == 0) {
        GetModuleFileNameW((HMODULE) 0x0, local_438, 0x104);
        GetFullPathNameW(local_438, 0x104, local_228, local_448);
        *local_448[0] = L'\0';
        FUN_14001b370(&DAT_140c884b0, 0x104, L"%s..\\Errors", local_228);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1128);
    return;
}


int FUN_140190a70(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_140190e60();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140190ab0(void) {
    WCHAR WVar1;
    WCHAR *pWVar2;
    int iVar3;
    uint uVar4;
    DWORD DVar5;
    HMODULE hModule;
    WCHAR *pWVar6;
    ulonglong uVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    undefined auStack600[32];
    wchar_t *local_238;
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack600;
    if (_DAT_140c8e0e0 != 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong) auStack600);
        return;
    }
    if (_DAT_140c88ec0 == 0) {
        DVar5 = GetModuleFileNameW((HMODULE) 0x0, local_228, 0x104);
        uVar7 = (ulonglong) DVar5;
        do {
            uVar4 = DVar5;
            if (uVar4 == 0) break;
            uVar4 = (uint) uVar7;
            uVar7 = (ulonglong)(uVar4 - 1);
            DVar5 = uVar4 - 1;
        } while (local_228[uVar7] != L'\\');
        uVar8 = 0x104 - uVar4;
        uVar7 = (ulonglong) uVar8;
        pWVar6 = local_228 + uVar4;
        iVar3 = 0;
        if (0x7ffffffe < uVar7 - 1) {
            iVar3 = -0x7ff8ffa9;
        }
        if (iVar3 < 0) {
            if (uVar8 == 0) goto LAB_140190bd9;
        } else {
            iVar3 = 0;
            if (uVar8 == 0) {
                LAB_140190bc3:
                pWVar6 = pWVar6 + -1;
                iVar3 = -0x7ff8ff86;
            } else {
                lVar10 = 0x7ffffffe - uVar7;
                lVar9 = (longlong) L"DbgHelp.dll" - (longlong) pWVar6;
                pWVar2 = pWVar6;
                do {
                    pWVar6 = pWVar2;
                    if ((lVar10 + uVar7 == 0) ||
                        (WVar1 = *(WCHAR * )(lVar9 + (longlong) pWVar6), WVar1 == L'\0')) {
                        if (uVar7 != 0) goto LAB_140190bd3;
                        goto LAB_140190bc3;
                    }
                    *pWVar6 = WVar1;
                    uVar7 = uVar7 - 1;
                    pWVar2 = pWVar6 + 1;
                } while (uVar7 != 0);
                iVar3 = -0x7ff8ff86;
            }
        }
        LAB_140190bd3:
        *pWVar6 = L'\0';
    } else {
        local_238 = L"DbgHelp.dll";
        iVar3 = FUN_14001b370(local_228, 0x104, L"%ls\\%ls", &DAT_140c88ec0);
    }
    LAB_140190bd9:
    if ((((((iVar3 < 0) && (iVar3 < 0)) ||
           (hModule = LoadLibraryW(local_228), hModule == (HMODULE) 0x0)) ||
          ((((DAT_140c636f0 = GetProcAddress(hModule, "SymSetOptions"), DAT_140c636f0 == (FARPROC) 0x0 ||
                                                                        (DAT_140c636f8 = GetProcAddress(hModule,
                                                                                                        "SymInitialize"),
                                                                                DAT_140c636f8 == (FARPROC) 0x0))
             || ((DAT_140c636e0 = GetProcAddress(hModule, "SymCleanup"), DAT_140c636e0 == (FARPROC) 0x0 ||
                                                                         ((DAT_140c636e8 = GetProcAddress(hModule,
                                                                                                          "StackWalk64"),
                                                                                 DAT_140c636e8 == (FARPROC) 0x0
                                                                                 || (DAT_140c63710 = GetProcAddress(
                                                                                         hModule, "SymGetModuleBase64"),
                                                                                         DAT_140c63710 ==
                                                                                         (FARPROC) 0x0)))))) ||
            (DAT_140c63718 = GetProcAddress(hModule, "SymGetModuleInfo64"), DAT_140c63718 == (FARPROC) 0x0
            )))) || ((((DAT_140c63700 = GetProcAddress(hModule, "SymFunctionTableAccess64"),
            DAT_140c63700 == (FARPROC) 0x0 ||
            (DAT_140c63708 = GetProcAddress(hModule, "SymFromAddr"),
                    DAT_140c63708 == (FARPROC) 0x0)) ||
                       (DAT_140c636d0 = GetProcAddress(hModule, "SymGetLineFromAddr64"),
                               DAT_140c636d0 == (FARPROC) 0x0)) ||
                      ((_DAT_140c636d8 = GetProcAddress(hModule, "SymEnumerateModules64"),
                              _DAT_140c636d8 == (FARPROC) 0x0 ||
                              (DAT_140c636c8 = GetProcAddress(hModule, "MiniDumpWriteDump"), DVar5 = 0,
                                      DAT_140c636c8 == (FARPROC) 0x0)))))) &&
        (DVar5 = GetLastError(), 0 < (int) DVar5)) {
        DVar5 = DVar5 & 0xffff | 0x80070000;
    }
    DAT_140c8e0e4 = DVar5;
    _DAT_140c8e0e0 = 1;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack600);
    return;
}


void FUN_140190dc0(undefined8 *param_1) {
    undefined *puVar1;
    HANDLE pvVar2;
    undefined auStack392[32];
    CHAR local_168[336];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
    *param_1 = &PTR_LAB_140b5e620;
    *(undefined4 * )(param_1 + 1) = 1;
    (*DAT_140c636f0)(6);
    GetModuleFileNameA((HMODULE) 0x0, local_168, 0x144);
    puVar1 = (undefined *) FUN_1407e05f0(local_168, 0x5c);
    if (puVar1 != (undefined *) 0x0) {
        *puVar1 = 0;
    }
    pvVar2 = GetCurrentProcess();
    (*DAT_140c636f8)(pvVar2, local_168, 1);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack392);
    return;
}


void FUN_140190e60(undefined8 *param_1) {
    DWORD DVar1;
    HANDLE pvVar2;
    ulonglong uVar3;
    bool bVar4;

    *param_1 = &PTR_LAB_140b5e620;
    DVar1 = GetCurrentThreadId();
    uVar3 = 0;
    if (DAT_140c67460 == DVar1) {
        DAT_140c67468 = DAT_140c67468 + 1;
        DVar1 = DAT_140c67460;
    } else {
        do {
            LOCK();
            bVar4 = DAT_140c67468 == 0;
            DAT_140c67468 = DAT_140c67468 ^ (ulonglong) bVar4 * (DAT_140c67468 ^ 1);
            if (bVar4) goto LAB_140190ecf;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x400);
        FUN_14019fb60(&DAT_140c67460);
        DVar1 = DAT_140c67460;
    }
    LAB_140190ecf:
    DAT_140c67460 = DVar1;
    if (DAT_140c636e0 != (code *) 0x0) {
        pvVar2 = GetCurrentProcess();
        (*DAT_140c636e0)(pvVar2);
    }
    DAT_140c884a8 = 0;
    if (DAT_140c67468 < 2) {
        DAT_140c67460 = 0;
        DAT_140c67468 = 0;
        if (DAT_140c67470 == 0) {
            DAT_140c67460 = 0;
            DAT_140c67468 = 0;
            DAT_140c884a8 = 0;
            return;
        }
        if (DAT_140c67478 == (HANDLE) 0x0) {
            pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            bVar4 = DAT_140c67478 == (HANDLE) 0x0;
            DAT_140c67478 =
                    (HANDLE)((ulonglong) DAT_140c67478 ^
                             (ulonglong) bVar4 * ((ulonglong) DAT_140c67478 ^ (ulonglong) pvVar2));
            if (!bVar4) {
                CloseHandle(pvVar2);
            }
        }
        // WARNING: Could not recover jumptable at 0x000140190f5f. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(DAT_140c67478);
        return;
    }
    DAT_140c67468 = DAT_140c67468 - 1;
    DAT_140c884a8 = 0;
    return;
}


ulonglong FUN_140190f70(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                        undefined8 param_5, undefined4 *param_6) {
    ulonglong *puVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    HANDLE hObject;
    ulonglong uVar4;

    FUN_14003d8f0(&param_6, &DAT_140c67460);
    uVar3 = (*DAT_140c636e8)(0x8664, param_2, param_3, param_4, param_5, 0, FUN_1401911d0, &LAB_140191060, 0);
    puVar2 = param_6;
    uVar4 = uVar3 & 0xffffffff;
    if (*(ulonglong * )(param_6 + 2) < 2) {
        *param_6 = 0;
        *(undefined8 * )(param_6 + 2) = 0;
        if (*(longlong * )(param_6 + 4) != 0) {
            if (*(longlong * )(param_6 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(puVar2 + 6);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar3 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(puVar2 + 6));
        }
    } else {
        *(longlong * )(param_6 + 2) = *(longlong * )(param_6 + 2) + -1;
        uVar4 = uVar3;
    }
    return uVar4;
}


ulonglong FUN_140191110(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    HANDLE hObject;
    undefined4 *local_res20;

    FUN_14003d8f0(&local_res20, &DAT_140c67460);
    uVar3 = (*DAT_140c63718)(param_1, param_2, param_3);
    if (1 < *(ulonglong * )(local_res20 + 2)) {
        *(longlong * )(local_res20 + 2) = *(longlong * )(local_res20 + 2) + -1;
        return uVar3;
    }
    *local_res20 = 0;
    *(undefined8 * )(local_res20 + 2) = 0;
    if (*(longlong * )(local_res20 + 4) != 0) {
        if (*(longlong * )(local_res20 + 6) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar1 = (ulonglong * )(local_res20 + 6);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
            if (uVar2 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(local_res20 + 6));
    }
    return uVar3 & 0xffffffff;
}


undefined8 FUN_1401911d0(undefined8 param_1, undefined8 param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    HANDLE hObject;
    undefined4 *local_res18[2];

    FUN_14003d8f0(local_res18, &DAT_140c67460);
    uVar3 = (*DAT_140c63700)(param_1, param_2);
    if (1 < *(ulonglong * )(local_res18[0] + 2)) {
        *(longlong * )(local_res18[0] + 2) = *(longlong * )(local_res18[0] + 2) + -1;
        return uVar3;
    }
    *local_res18[0] = 0;
    *(undefined8 * )(local_res18[0] + 2) = 0;
    if (*(longlong * )(local_res18[0] + 4) != 0) {
        if (*(longlong * )(local_res18[0] + 6) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar1 = (ulonglong * )(local_res18[0] + 6);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
            if (uVar2 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(local_res18[0] + 6));
    }
    return uVar3;
}


ulonglong FUN_140191280(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    ulonglong *puVar1;
    ulonglong uVar2;
    HANDLE hObject;
    ulonglong uVar3;
    undefined4 *local_18[2];

    FUN_14003d8f0(local_18, &DAT_140c67460);
    uVar2 = (*DAT_140c63708)(param_1, param_2, param_3, param_4);
    uVar3 = uVar2 & 0xffffffff;
    if (*(ulonglong * )(local_18[0] + 2) < 2) {
        *local_18[0] = 0;
        *(undefined8 * )(local_18[0] + 2) = 0;
        if (*(longlong * )(local_18[0] + 4) != 0) {
            if (*(longlong * )(local_18[0] + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(local_18[0] + 6);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar2 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(local_18[0] + 6));
        }
    } else {
        *(longlong * )(local_18[0] + 2) = *(longlong * )(local_18[0] + 2) + -1;
        uVar3 = uVar2;
    }
    return uVar3;
}


ulonglong FUN_140191340(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined4 param_4,
                        undefined8 param_5, undefined4 *param_6) {
    ulonglong *puVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    HANDLE hObject;
    ulonglong uVar4;

    FUN_14003d8f0(&param_6, &DAT_140c67460);
    uVar3 = (*DAT_140c636c8)(param_1, param_2, param_3, param_4, param_5, 0, 0);
    puVar2 = param_6;
    uVar4 = uVar3 & 0xffffffff;
    if (*(ulonglong * )(param_6 + 2) < 2) {
        *param_6 = 0;
        *(undefined8 * )(param_6 + 2) = 0;
        if (*(longlong * )(param_6 + 4) != 0) {
            if (*(longlong * )(param_6 + 6) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(puVar2 + 6);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar3 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(puVar2 + 6));
        }
    } else {
        *(longlong * )(param_6 + 2) = *(longlong * )(param_6 + 2) + -1;
        uVar4 = uVar3;
    }
    return uVar4;
}


int FUN_140191420(longlong *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    HANDLE hObject;
    undefined4 *local_res10;

    FUN_14003d8f0(&local_res10, &DAT_140c67460);
    iVar3 = FUN_140190ab0();
    if (-1 < iVar3) {
        if (DAT_140c884a8 == 0) {
            lVar4 = FUN_14018b280(0x10, 0);
            if (lVar4 == 0) {
                DAT_140c884a8 = 0;
            } else {
                DAT_140c884a8 = FUN_140190dc0(lVar4);
            }
        } else {
            LOCK();
            *(int *) (DAT_140c884a8 + 8) = *(int *) (DAT_140c884a8 + 8) + 1;
        }
        *param_1 = DAT_140c884a8;
        iVar3 = 0;
    }
    if (1 < *(ulonglong * )(local_res10 + 2)) {
        *(longlong * )(local_res10 + 2) = *(longlong * )(local_res10 + 2) + -1;
        return iVar3;
    }
    *local_res10 = 0;
    *(undefined8 * )(local_res10 + 2) = 0;
    if (*(longlong * )(local_res10 + 4) != 0) {
        if (*(longlong * )(local_res10 + 6) == 0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            puVar1 = (ulonglong * )(local_res10 + 6);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
            if (uVar2 != 0) {
                CloseHandle(hObject);
            }
        }
        SetEvent(*(HANDLE * )(local_res10 + 6));
    }
    return iVar3;
}



// WARNING: Removing unreachable block (ram,0x000140191c5c)
// WARNING: Removing unreachable block (ram,0x000140191bf3)
// WARNING: Removing unreachable block (ram,0x000140191bca)
// WARNING: Removing unreachable block (ram,0x000140191ba1)
// WARNING: Removing unreachable block (ram,0x000140191b80)
// WARNING: Could not reconcile some variable overlaps

void FUN_140191520(undefined8 param_1, ushort *param_2, uint **param_3) {
    WCHAR WVar1;
    uint uVar2;
    uint *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined4 *puVar6;
    BOOL BVar7;
    undefined8 *puVar8;
    LPWSTR lpCmdLine;
    LPWSTR *ppWVar9;
    longlong lVar10;
    WCHAR *pWVar11;
    char *pcVar12;
    int iVar13;
    undefined auStack3416[32];
    undefined8 local_d38;
    uint local_d30;
    uint local_d28;
    uint local_d20;
    int local_d18;
    DWORD local_d14;
    DWORD local_d10[2];
    ushort local_d08;
    uint local_ce8;
    undefined4 local_cd8;
    undefined4 uStack3284;
    undefined4 local_cd0;
    undefined4 uStack3276;
    undefined8 local_cc8;
    undefined8 local_cc0;
    undefined8 local_cb8;
    undefined8 local_cb0;
    undefined8 local_ca8;
    undefined8 local_ca0;
    undefined local_c98;
    WCHAR local_c90[20];
    WCHAR local_c68[264];
    WCHAR local_a58[264];
    undefined local_848[2048];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack3416;
    puVar3 = *param_3;
    FUN_1407de220(param_1, &DAT_1409e1b64);
    FUN_1407de220(param_1, "// Exception\n");
    FUN_1407de220(param_1, &DAT_1409e1b84);
    FUN_1407de220(param_1, &DAT_1409e1c54);
    FUN_1407de220(param_1, &DAT_1409e1bc4);
    uVar2 = *puVar3;
    if (uVar2 == 0xc0000005) {
        pcVar12 = "reading";
        if (*(longlong * )(puVar3 + 8) != 0) {
            pcVar12 = "writing";
        }
        FUN_1407de220(param_1, "Access violation %s location 0x%p\n", pcVar12, *(undefined8 * )(puVar3 + 10)
        );
        goto LAB_140191911;
    }
    if (uVar2 + 0x3000ffff < 3) {
        FUN_1407de220(param_1, &DAT_1409e1b9c, *(undefined8 * )(puVar3 + 8));
        goto LAB_140191911;
    }
    if (uVar2 < 0xc000008e) {
        if (uVar2 == 0xc000008d) {
            FUN_1407de220(param_1, "%s (%0.8x)\n", "Float denormal operand");
            goto LAB_140191911;
        }
        if (uVar2 < 0xc0000007) {
            if (uVar2 == 0xc0000006) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "In page error");
                goto LAB_140191911;
            }
            if (uVar2 == 0x40000015) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Runtime error");
                goto LAB_140191911;
            }
            if (uVar2 == 0x80000001) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Guard page");
                goto LAB_140191911;
            }
            if (uVar2 == 0x80000002) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Datatype misalignment");
                goto LAB_140191911;
            }
            if (uVar2 == 0x80000003) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Breakpoint");
                goto LAB_140191911;
            }
            if (uVar2 == 0x80000004) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Single step");
                goto LAB_140191911;
            }
        } else {
            if (uVar2 == 0xc0000008) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Invalid handle");
                goto LAB_140191911;
            }
            if (uVar2 == 0xc000001d) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Illegal instruction");
                goto LAB_140191911;
            }
            if (uVar2 == 0xc0000025) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Noncontinuable exception");
                goto LAB_140191911;
            }
            if (uVar2 == 0xc0000026) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Invalid disposition");
                goto LAB_140191911;
            }
            if (uVar2 == 0xc000008c) {
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Array bounds exceeded");
                goto LAB_140191911;
            }
        }
        switchD_1401917c8_caseD_c0000097:
        FUN_1407de220(param_1, "%s (%0.8x)\n", "Unknown error");
    } else {
        switch (uVar2) {
            case 0xc000008e:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Float divide by zero");
                break;
            case 0xc000008f:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Float inexact result");
                break;
            case 0xc0000090:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Float invalid operation");
                break;
            case 0xc0000091:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Float overflow");
                break;
            case 0xc0000092:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Float stack check");
                break;
            case 0xc0000093:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Float underflow");
                break;
            case 0xc0000094:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Integer divide by zero");
                break;
            case 0xc0000095:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Integer overflow");
                break;
            case 0xc0000096:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Privileged instruction");
                break;
            default:
                goto switchD_1401917c8_caseD_c0000097;
            case 0xc00000fd:
                FUN_1407de220(param_1, "%s (%0.8x)\n", "Stack overflow");
        }
    }
    LAB_140191911:
    puVar8 = (undefined8 *) TlsGetValue(DAT_140c63720);
    for (; puVar8 != (undefined8 *) 0x0; puVar8 = (undefined8 *) puVar8[2]) {
        lVar10 = puVar8[1];
        if (lVar10 != 0) {
            (**(code * *) * puVar8)(puVar8, local_848, 0x400);
            FUN_1407de220(param_1, "  %S: %S\n", lVar10, local_848);
        }
    }
    FUN_1407de220();
    local_d20 = (uint) param_2[6];
    local_d28 = (uint) param_2[5];
    local_d30 = (uint) param_2[4];
    local_d38 = (undefined4 *) CONCAT44(local_d38._4_4_, (uint) * param_2 % 100);
    FUN_1407de220(param_1, "  %0.2u/%0.2u/%0.2u %0.2u:%0.2u:%0.2u UTC\n", param_2[1], param_2[3]);
    GetModuleFileNameW((HMODULE) 0x0, local_a58, 0x104);
    FUN_1407de220(param_1, &DAT_140a40604, local_a58);
    lpCmdLine = GetCommandLineW();
    ppWVar9 = CommandLineToArgvW(lpCmdLine, &local_d18);
    iVar13 = 1;
    if (1 < local_d18) {
        do {
            ppWVar9 = ppWVar9 + 1;
            lVar10 = FUN_1407dd988(*ppWVar9, 0x20);
            pcVar12 = " \"%S\"";
            if (lVar10 == 0) {
                pcVar12 = " %S";
            }
            FUN_1407de220(param_1, pcVar12, *ppWVar9);
            iVar13 = iVar13 + 1;
        } while (iVar13 < local_d18);
    }
    FUN_1407de220(param_1, &DAT_1409e1c8c);
    lVar10 = 0x101;
    local_d10[0] = 0x101;
    BVar7 = GetUserNameW(local_c68, local_d10);
    if (BVar7 == 0) {
        pWVar11 = local_c68;
        do {
            if ((lVar10 == -0x7ffffefd) ||
                (WVar1 = *(WCHAR * )(((longlong) L"unknown" - (longlong) local_c68) + (longlong) pWVar11),
                        WVar1 == L'\0')) {
                if (lVar10 != 0) goto LAB_140191adc;
                break;
            }
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        pWVar11 = pWVar11 + -1;
        LAB_140191adc:
        *pWVar11 = L'\0';
    }
    lVar10 = 0x10;
    local_d14 = 0x10;
    if (((DAT_140c63724 & 4) != 0) || (BVar7 = GetComputerNameW(local_c90, &local_d14), BVar7 == 0)) {
        pWVar11 = local_c90;
        do {
            if ((lVar10 == -0x7fffffee) ||
                (WVar1 = *(WCHAR * )(((longlong) L"UNKNOWN" - (longlong) local_c90) + (longlong) pWVar11),
                        WVar1 == L'\0')) {
                if (lVar10 != 0) goto LAB_140191b4c;
                break;
            }
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        pWVar11 = pWVar11 + -1;
        LAB_140191b4c:
        *pWVar11 = L'\0';
    }
    FUN_1407de220(param_1, "  %S@%S\n", local_c68, local_c90);
    GetSystemInfo((LPSYSTEM_INFO) & local_d08);
    puVar3 = (uint *) cpuid(0x80000000);
    if (0x80000003 < *puVar3) {
        local_c98 = 0;
        puVar4 = (undefined8 *) cpuid_brand_part1_info(0x80000002);
        local_cc8 = *puVar4;
        puVar8 = &local_cc8;
        local_cc0 = CONCAT44(*(undefined4 * )(puVar4 + 1), *(undefined4 * )((longlong) puVar4 + 0xc));
        puVar5 = (undefined8 *) cpuid_brand_part2_info(0x80000003);
        local_cc8._0_1_ = (char) *(undefined4 *) puVar4;
        local_cb8 = *puVar5;
        local_cb0 = CONCAT44(*(undefined4 * )(puVar5 + 1), *(undefined4 * )((longlong) puVar5 + 0xc));
        puVar4 = (undefined8 *) cpuid_brand_part3_info(0x80000004);
        local_cd8 = *(undefined4 *) puVar4;
        uStack3284 = *(undefined4 * )((longlong) puVar4 + 4);
        uStack3276 = *(undefined4 * )(puVar4 + 1);
        local_cd0 = *(undefined4 * )((longlong) puVar4 + 0xc);
        local_ca8 = *puVar4;
        local_ca0 = CONCAT44(uStack3276, local_cd0);
        while ((char) local_cc8 == ' ') {
            puVar8 = (undefined8 * )((longlong) puVar8 + 1);
            local_cc8._0_1_ = *(char *) puVar8;
        }
        FUN_1407de220(param_1, &DAT_140a412a4);
        if (1 < local_ce8) {
            FUN_1407de220(param_1, " (%u CPUs)");
        }
        FUN_1407de220(param_1, &DAT_1409e1d5c);
    }
    puVar6 = (undefined4 *) cpuid_basic_info(0);
    local_cd8 = *puVar6;
    uStack3284 = puVar6[1];
    uStack3276 = puVar6[2];
    local_cd0 = puVar6[3];
    local_d38 = &local_cd0;
    FUN_1407de220(param_1, "  %.4s%.4s%.4s (", &uStack3284, &uStack3276);
    if (local_d08 < 0xb) {
        FUN_1407de220(param_1, &DAT_1409e1d6c, (&PTR_DAT_140c586c0)[local_d08]);
    }
    BVar7 = IsProcessorFeaturePresent(3);
    if (BVar7 != 0) {
        FUN_1407de220(param_1, &DAT_140a430f0);
    }
    BVar7 = IsProcessorFeaturePresent(6);
    if (BVar7 != 0) {
        FUN_1407de220(param_1, &DAT_140a430e8);
    }
    BVar7 = IsProcessorFeaturePresent(10);
    if (BVar7 != 0) {
        FUN_1407de220(param_1, " SSE2");
    }
    BVar7 = IsProcessorFeaturePresent(7);
    if (BVar7 != 0) {
        FUN_1407de220(param_1, " 3DNOW");
    }
    BVar7 = IsProcessorFeaturePresent(8);
    if (BVar7 != 0) {
        FUN_1407de220(param_1, " RDTSC");
    }
    FUN_1407de220(param_1, &DAT_1409e1dbc);
    FUN_1407de220(param_1, &DAT_1409e1dfc);
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack3416);
    return;
}


void FUN_140191e30(longlong param_1, longlong *param_2) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    undefined auStack392[32];
    longlong local_168;
    undefined8 local_138;
    undefined4 local_12c;
    undefined8 local_118;
    undefined4 local_10c;
    undefined8 local_108;
    undefined4 local_fc;
    ulonglong local_28;

    if (param_1 != 0) {
        local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack392;
        lVar1 = param_2[1];
        GetCurrentProcess();
        GetCurrentThread();
        FUN_1407e4830(&local_138, 0, 0x108);
        local_12c = 3;
        local_138 = *(undefined8 * )(lVar1 + 0xf8);
        local_10c = 3;
        local_118 = *(undefined8 * )(lVar1 + 0xa0);
        local_fc = 3;
        local_108 = *(undefined8 * )(lVar1 + 0x98);
        uVar3 = 0;
        do {
            local_168 = lVar1;
            iVar2 = FUN_140190f70();
            if (iVar2 == 0) break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(undefined8 * )(*param_2 + 0x10) = local_138;
        FUN_1407db4f0(local_28 ^ (ulonglong) auStack392);
    }
    return;
}


void FUN_140191f50(longlong param_1, undefined8 param_2, longlong param_3) {
    ulonglong *puVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    int iVar8;
    longlong lVar9;
    HANDLE pvVar10;
    HANDLE pvVar11;
    longlong lVar12;
    HANDLE pvVar13;
    undefined4 *puVar14;
    char *pcVar15;
    undefined8 unaff_RBX;
    undefined4 *puVar16;
    undefined8 unaff_RSI;
    undefined8 unaff_R12;
    undefined8 unaff_R13;
    undefined8 unaff_R14;
    ulonglong uVar17;
    undefined8 unaff_R15;
    longlong alStackX16[2];
    code *pcStackX32;
    longlong local_14e8;
    undefined4 local_14dc;
    undefined8 local_14c8;
    undefined4 local_14bc;
    undefined8 local_14b8;
    undefined4 local_14ac;
    undefined4 local_13d8[308];
    undefined4 local_f08[2];
    longlong local_f00;
    undefined local_ee4[1644];
    undefined4 local_878[20];
    undefined4 local_828;
    undefined local_824[2012];
    ulonglong local_48;
    undefined8 uStack24;

    if (param_1 != 0) {
        uStack24 = 0x140191f6d;
        lVar9 = FUN_1407f0f60();
        lVar9 = -lVar9;
        local_48 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xfffffffffffffff0 + lVar9);
        *(undefined8 * )(&stack0x00001580 + lVar9) = unaff_RBX;
        puVar2 = *(undefined4 * *)(param_3 + 8);
        *(undefined8 * )(&stack0x00001560 + lVar9) = unaff_RSI;
        *(undefined8 * )(&stack0x00001558 + lVar9) = unaff_R12;
        *(undefined8 * )(&stack0x00001550 + lVar9) = unaff_R13;
        *(undefined8 * )(&stack0x00001548 + lVar9) = unaff_R14;
        *(undefined8 * )(&stack0x00001540 + lVar9) = unaff_R15;
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140191fbe;
        pvVar10 = GetCurrentProcess();
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140191fc7;
        pvVar11 = GetCurrentThread();
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140191fd9;
        FUN_1407de220(param_2, &DAT_1409e1de4);
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140191fe8;
        FUN_1407de220(param_2, &DAT_1409e1e0c);
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140191ff7;
        FUN_1407de220(param_2, "// Call stack\n");
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192006;
        FUN_1407de220(param_2, &DAT_1409e1e6c);
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192015;
        FUN_1407de220(param_2, &DAT_1409e1e1c);
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192026;
        FUN_1407e4830(&local_14e8, 0, 0x108);
        local_14dc = 3;
        local_14e8 = *(longlong * )(puVar2 + 0x3e);
        local_14bc = 3;
        local_14c8 = *(undefined8 * )(puVar2 + 0x28);
        local_14ac = 3;
        local_14b8 = *(undefined8 * )(puVar2 + 0x26);
        if ((((uint) puVar2 | (uint) local_13d8) & 0xf) == 0) {
            lVar12 = 9;
            puVar7 = local_13d8;
            do {
                puVar16 = puVar2;
                puVar14 = puVar7;
                uVar4 = puVar16[1];
                uVar5 = puVar16[2];
                uVar6 = puVar16[3];
                *puVar14 = *puVar16;
                puVar14[1] = uVar4;
                puVar14[2] = uVar5;
                puVar14[3] = uVar6;
                uVar4 = puVar16[5];
                uVar5 = puVar16[6];
                uVar6 = puVar16[7];
                puVar14[4] = puVar16[4];
                puVar14[5] = uVar4;
                puVar14[6] = uVar5;
                puVar14[7] = uVar6;
                uVar4 = puVar16[9];
                uVar5 = puVar16[10];
                uVar6 = puVar16[0xb];
                puVar14[8] = puVar16[8];
                puVar14[9] = uVar4;
                puVar14[10] = uVar5;
                puVar14[0xb] = uVar6;
                uVar4 = puVar16[0xd];
                uVar5 = puVar16[0xe];
                uVar6 = puVar16[0xf];
                puVar14[0xc] = puVar16[0xc];
                puVar14[0xd] = uVar4;
                puVar14[0xe] = uVar5;
                puVar14[0xf] = uVar6;
                uVar4 = puVar16[0x11];
                uVar5 = puVar16[0x12];
                uVar6 = puVar16[0x13];
                puVar14[0x10] = puVar16[0x10];
                puVar14[0x11] = uVar4;
                puVar14[0x12] = uVar5;
                puVar14[0x13] = uVar6;
                uVar4 = puVar16[0x15];
                uVar5 = puVar16[0x16];
                uVar6 = puVar16[0x17];
                puVar14[0x14] = puVar16[0x14];
                puVar14[0x15] = uVar4;
                puVar14[0x16] = uVar5;
                puVar14[0x17] = uVar6;
                uVar4 = puVar16[0x19];
                uVar5 = puVar16[0x1a];
                uVar6 = puVar16[0x1b];
                puVar14[0x18] = puVar16[0x18];
                puVar14[0x19] = uVar4;
                puVar14[0x1a] = uVar5;
                puVar14[0x1b] = uVar6;
                uVar4 = puVar16[0x1d];
                uVar5 = puVar16[0x1e];
                uVar6 = puVar16[0x1f];
                puVar14[0x1c] = puVar16[0x1c];
                puVar14[0x1d] = uVar4;
                puVar14[0x1e] = uVar5;
                puVar14[0x1f] = uVar6;
                lVar12 = lVar12 + -1;
                puVar7 = puVar14 + 0x20;
                puVar2 = puVar16 + 0x20;
            } while (lVar12 != 0);
            uVar4 = puVar16[0x21];
            uVar5 = puVar16[0x22];
            uVar6 = puVar16[0x23];
            puVar14[0x20] = puVar16[0x20];
            puVar14[0x21] = uVar4;
            puVar14[0x22] = uVar5;
            puVar14[0x23] = uVar6;
            uVar4 = puVar16[0x25];
            uVar5 = puVar16[0x26];
            uVar6 = puVar16[0x27];
            puVar14[0x24] = puVar16[0x24];
            puVar14[0x25] = uVar4;
            puVar14[0x26] = uVar5;
            puVar14[0x27] = uVar6;
            uVar4 = puVar16[0x29];
            uVar5 = puVar16[0x2a];
            uVar6 = puVar16[0x2b];
            puVar14[0x28] = puVar16[0x28];
            puVar14[0x29] = uVar4;
            puVar14[0x2a] = uVar5;
            puVar14[0x2b] = uVar6;
            uVar4 = puVar16[0x2d];
            uVar5 = puVar16[0x2e];
            uVar6 = puVar16[0x2f];
            puVar14[0x2c] = puVar16[0x2c];
            puVar14[0x2d] = uVar4;
            puVar14[0x2e] = uVar5;
            puVar14[0x2f] = uVar6;
            uVar4 = puVar16[0x31];
            uVar5 = puVar16[0x32];
            uVar6 = puVar16[0x33];
            puVar14[0x30] = puVar16[0x30];
            puVar14[0x31] = uVar4;
            puVar14[0x32] = uVar5;
            puVar14[0x33] = uVar6;
        } else {
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019210b;
            FUN_1407db590(local_13d8, puVar2, 0x4d0);
        }
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019211a;
        FUN_1407de220(param_2, "  rip              rsp\n");
        uVar17 = 0;
        do {
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192141;
            FUN_14003d8f0(&stack0x00000048 + lVar9, &DAT_140c67460);
            *(undefined8 * )(&stack0x00000030 + lVar9) = 0;
            *(undefined * *)(&stack0x00000028 + lVar9) = &LAB_140191060;
            *(code * *)((longlong) alStackX16 + lVar9 + 0x10) = FUN_1401911d0;
            *(undefined8 * )((longlong) alStackX16 + lVar9 + 8) = 0;
            *(undefined4 * *)((longlong) alStackX16 + lVar9) = local_13d8;
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192176;
            iVar8 = (*DAT_140c636e8)(0x8664, pvVar10, pvVar11, &local_14e8);
            lVar12 = *(longlong * )(&stack0x00000048 + lVar9);
            if (*(ulonglong * )(lVar12 + 8) < 2) {
                **(undefined4 * *)(&stack0x00000048 + lVar9) = 0;
                *(undefined8 * )(lVar12 + 8) = 0;
                if (*(longlong * )(lVar12 + 0x10) != 0) {
                    if (*(longlong * )(lVar12 + 0x18) == 0) {
                        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401921be;
                        pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar1 = (ulonglong * )(lVar12 + 0x18);
                        uVar3 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) pvVar13);
                        if (uVar3 != 0) {
                            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401921d1;
                            CloseHandle(pvVar13);
                        }
                    }
                    pvVar13 = *(HANDLE * )(lVar12 + 0x18);
                    *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401921db;
                    SetEvent(pvVar13);
                }
            } else {
                *(longlong * )(lVar12 + 8) = *(longlong * )(lVar12 + 8) + -1;
            }
            if (iVar8 == 0) break;
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401921fa;
            FUN_1407de220(param_2, "  %p %p", local_14e8, local_14c8);
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019220e;
            FUN_1407e4830(local_f08, 0, 0x690);
            local_f08[0] = 0x690;
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019222b;
            iVar8 = FUN_140191110(pvVar10, local_14e8, local_f08);
            if (iVar8 != 0) {
                *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192249;
                FUN_1407de220(param_2, &DAT_140a43118, local_ee4);
                *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019225b;
                FUN_1407e4830(local_878, 0, 0x58);
                local_878[0] = 0x58;
                local_828 = 2000;
                *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192287;
                iVar8 = FUN_140191280(pvVar10, local_14e8, &stack0x00000058 + lVar9, local_878);
                if (iVar8 == 0) {
                    pcVar15 = " + 0x%I64x";
                    lVar12 = local_14e8 - local_f00;
                    LAB_1401923af:
                    *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401923b4;
                    FUN_1407de220(param_2, pcVar15, lVar12);
                } else {
                    *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401922a5;
                    FUN_1407de220(param_2, "!%s()", local_824);
                    lVar12 = local_14e8;
                    *(undefined8 * )(&stack0x00000060 + lVar9) = 0;
                    *(undefined4 * )(&stack0x00000060 + lVar9) = 0x28;
                    *(undefined8 * )(&stack0x00000068 + lVar9) = 0;
                    *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401922da;
                    FUN_14003d8f0(&stack0x00000050 + lVar9, &DAT_140c67460);
                    *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401922f0;
                    iVar8 = (*DAT_140c636d0)(pvVar10, lVar12, &stack0x00000040 + lVar9, &stack0x00000060 + lVar9);
                    lVar12 = *(longlong * )(&stack0x00000050 + lVar9);
                    if (*(ulonglong * )(lVar12 + 8) < 2) {
                        **(undefined4 * *)(&stack0x00000050 + lVar9) = 0;
                        *(undefined8 * )(lVar12 + 8) = 0;
                        if (*(longlong * )(lVar12 + 0x10) != 0) {
                            if (*(longlong * )(lVar12 + 0x18) == 0) {
                                *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192338;
                                pvVar13 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                                LOCK();
                                puVar1 = (ulonglong * )(lVar12 + 0x18);
                                uVar3 = *puVar1;
                                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ (ulonglong) pvVar13);
                                if (uVar3 != 0) {
                                    *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019234b;
                                    CloseHandle(pvVar13);
                                }
                            }
                            pvVar13 = *(HANDLE * )(lVar12 + 0x18);
                            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192355;
                            SetEvent(pvVar13);
                        }
                    } else {
                        *(longlong * )(lVar12 + 8) = *(longlong * )(lVar12 + 8) + -1;
                    }
                    if (iVar8 == 0) {
                        lVar12 = *(longlong * )(&stack0x00000058 + lVar9);
                        if (lVar12 != 0) {
                            pcVar15 = " + 0x%I64x";
                            goto LAB_1401923af;
                        }
                    } else {
                        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019236c;
                        FUN_1407de220(param_2, " Line %u");
                        if (*(int *) (&stack0x00000040 + lVar9) != 0) {
                            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x140192385;
                            FUN_1407de220(param_2, " + 0x%x");
                        }
                    }
                }
            }
            *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401923c3;
            FUN_1407de220(param_2, &DAT_1409e1ec4);
            uVar17 = uVar17 + 1;
        } while (uVar17 < 0x100);
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x1401923f0;
        FUN_1407de220(param_2, &DAT_1409e1e8c);
        *(undefined8 * )((longlong) & uStack24 + lVar9) = 0x14019242f;
        FUN_1407db4f0(local_48 ^ (ulonglong)(&stack0xfffffffffffffff0 + lVar9));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140192440(uint **param_1) {
    ulonglong *puVar1;
    WCHAR WVar2;
    ushort uVar3;
    uint *puVar4;
    uint *puVar5;
    undefined8 uVar6;
    code *pcVar7;
    uint uVar8;
    uint uVar9;
    bool bVar10;
    bool bVar11;
    LPWSTR pWVar12;
    longlong *plVar13;
    BOOL BVar14;
    int iVar15;
    DWORD DVar16;
    int iVar17;
    uint uVar18;
    UINT UVar19;
    int iVar20;
    longlong lVar21;
    undefined2 *puVar22;
    undefined8 *puVar23;
    ulonglong uVar24;
    FILE *_File;
    HANDLE pvVar25;
    HANDLE pvVar26;
    longlong lVar27;
    WCHAR *pWVar28;
    uint *puVar29;
    longlong lVar30;
    uint *puVar31;
    ulonglong uVar32;
    wchar_t *pwVar33;
    ulonglong uVar34;
    ushort *puVar35;
    byte bVar36;
    wchar_t *pwVar37;
    ulonglong uVar38;
    undefined4 *puVar39;
    longlong in_GS_OFFSET;
    bool bVar40;
    LPWSTR pWStackX8;
    wchar_t *local_2528;
    uint local_2520;
    undefined4 local_2518;
    uint local_2514;
    uint **local_2510;
    LPCWSTR local_2500;
    LPWSTR local_24f8;
    DWORD local_24f0[2];
    DWORD local_24e8;
    undefined4 uStack9444;
    undefined4 local_24e0;
    undefined4 uStack9436;
    DWORD local_24d8[2];
    undefined *local_24d0;
    undefined4 *local_24c8;
    undefined4 *local_24c0;
    undefined *local_24b8;
    longlong local_24b0;
    longlong *local_24a8;
    undefined8 local_24a0;
    undefined8 local_2498[2];
    undefined8 local_2488[4];
    undefined8 local_2468;
    undefined2 local_245c;
    _SYSTEMTIME local_2418;
    undefined local_2408[16];
    HANDLE local_23f8;
    undefined local_23f0[72];
    uint local_23a8;
    uint uStack9124;
    uint uStack9120;
    uint uStack9116;
    uint local_2398;
    uint uStack9108;
    uint uStack9104;
    uint uStack9100;
    uint local_2388;
    uint uStack9092;
    uint uStack9088;
    uint uStack9084;
    uint local_2378;
    uint uStack9076;
    uint uStack9072;
    uint uStack9068;
    uint local_2368;
    uint uStack9060;
    uint uStack9056;
    uint uStack9052;
    uint local_2358;
    uint uStack9044;
    uint uStack9040;
    uint uStack9036;
    uint local_2348;
    uint uStack9028;
    uint uStack9024;
    uint uStack9020;
    uint local_2338;
    uint uStack9012;
    uint uStack9008;
    uint uStack9004;
    uint local_2328;
    uint uStack8996;
    uint uStack8992;
    uint uStack8988;
    undefined8 local_2318;
    uint local_2308[308];
    undefined local_1e38[24];
    WCHAR local_1e20[16];
    undefined local_1e00[32];
    wchar_t local_1de0[20];
    undefined local_1db8[256];
    undefined local_1cb8[528];
    undefined local_1aa8[528];
    WCHAR local_1898[264];
    undefined local_1688[528];
    WCHAR local_1478[264];
    undefined local_1268[1024];
    WCHAR local_e68[264];
    WCHAR local_c58[264];
    WCHAR local_a48[264];
    ushort local_838;
    ushort local_836[1023];
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x14019246a;
    lVar21 = FUN_1407f0f60();
    lVar21 = -lVar21;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar21);
    local_2518 = *(undefined4 * )(*(longlong * )(in_GS_OFFSET + 8) + -4);
    puVar39 = (undefined4 * )(*(longlong * )(in_GS_OFFSET + 8) + -4);
    local_24c0 = puVar39;
    *puVar39 = 1;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401924b6;
    FUN_14003d8f0(&local_24c8, &DAT_140c67400);
    uVar38 = 0;
    local_2520 = (uint)(**param_1 + 0x30010000 < 4);
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401924e7;
    BVar14 = IsDebuggerPresent();
    if (BVar14 != 0) goto LAB_140193228;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019250b;
    GetModuleFileNameW((HMODULE) 0x0, local_e68, 0x104);
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192528;
    GetFullPathNameW(local_e68, 0x104, local_c58, &local_24f8);
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192537;
    puVar22 = (undefined2 *) FUN_1407dd8d8(local_c58, 0x2e);
    if (puVar22 != (undefined2 *) 0x0) {
        *puVar22 = 0;
    }
    WVar2 = *local_24f8;
    pWVar28 = local_24f8;
    while (WVar2 != L'\0') {
        if (*pWVar28 == L'.') {
            *pWVar28 = L'_';
        }
        pWVar28 = pWVar28 + 1;
        WVar2 = *pWVar28;
    }
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192581;
    FUN_14001b370(local_1e00, 0x10, &DAT_1409e33a4);
    local_24f0[0] = 0x10;
    if ((DAT_140c63724 & 4) == 0) {
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401925a2;
        BVar14 = GetComputerNameW(local_1e20, local_24f0);
        if (BVar14 == 0) goto LAB_1401925a6;
    } else {
        LAB_1401925a6:
        lVar30 = 0x10;
        pWVar28 = local_1e20;
        do {
            if ((lVar30 == -0x7fffffee) ||
                (WVar2 = *(WCHAR * )(((longlong) L"UNKNOWN" - (longlong) local_1e20) + (longlong) pWVar28),
                        WVar2 == L'\0')) {
                if (lVar30 != 0) goto LAB_1401925f0;
                break;
            }
            *pWVar28 = WVar2;
            pWVar28 = pWVar28 + 1;
            lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        pWVar28 = pWVar28 + -1;
        LAB_1401925f0:
        *pWVar28 = L'\0';
    }
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192601;
    GetSystemTime(&local_2418);
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192606;
    local_2500 = (LPCWSTR) FUN_1401909c0();
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192615;
    CreateDirectoryW(local_2500, (LPSECURITY_ATTRIBUTES) 0x0);
    uVar18 = **param_1;
    if (uVar18 < 0xc000008f) {
        if (uVar18 == 0xc000008e) {
            pwVar37 = L"FloatDivideByZero";
        } else if (uVar18 < 0xc0000007) {
            if (uVar18 == 0xc0000006) {
                pwVar37 = L"InPageError";
            } else if (uVar18 < 0x80000004) {
                if (uVar18 == 0x80000003) {
                    pwVar37 = L"Breakpoint";
                } else if (uVar18 == 0x40000015) {
                    pwVar37 = L"RuntimeError";
                } else if (uVar18 == 0x80000001) {
                    pwVar37 = L"GuardPage";
                } else {
                    if (uVar18 != 0x80000002) goto switchD_14019277b_caseD_8;
                    pwVar37 = L"DatatypeMisalignment";
                }
            } else if (uVar18 == 0x80000004) {
                pwVar37 = L"SingleStep";
            } else {
                if (uVar18 != 0xc0000005) goto switchD_14019277b_caseD_8;
                pwVar37 = L"AccessViolation";
            }
        } else {
            switch (uVar18) {
                case 0xc0000008:
                    pwVar37 = L"InvalidHandle";
                    break;
                default:
                switchD_14019277b_caseD_8:
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192815;
                    FUN_14001b370(local_1de0, 0x10, L"%0.8x");
                    pwVar37 = local_1de0;
                    break;
                case 0xc000001d:
                    pwVar37 = L"IllegalInstruction";
                    break;
                case 0xc0000025:
                    pwVar37 = L"NoncontinuableException";
                    break;
                case 0xc0000026:
                    pwVar37 = L"InvalidDisposition";
                    break;
                case 0xc000008c:
                    pwVar37 = L"ArrayBoundsExceeded";
                    break;
                case 0xc000008d:
                    pwVar37 = L"FloatDenormalOperand";
            }
        }
    } else if (uVar18 < 0xc00000fe) {
        if (uVar18 == 0xc00000fd) {
            pwVar37 = L"StackOverflow";
        } else {
            switch (uVar18) {
                default:
                    goto switchD_14019277b_caseD_8;
                case 0xc000008f:
                    pwVar37 = L"FloatInexactResult";
                    break;
                case 0xc0000090:
                    pwVar37 = L"FloatInvalidOperation";
                    break;
                case 0xc0000091:
                    pwVar37 = L"FloatOverflow";
                    break;
                case 0xc0000092:
                    pwVar37 = L"FloatStackCheck";
                    break;
                case 0xc0000093:
                    pwVar37 = L"FloatUnderflow";
                    break;
                case 0xc0000094:
                    pwVar37 = L"IntegerDivideByZero";
                    break;
                case 0xc0000095:
                    pwVar37 = L"IntegerOverflow";
                    break;
                case 0xc0000096:
                    pwVar37 = L"PrivilegedInstruction";
            }
        }
    } else if (uVar18 == 0xcfff0000) {
        pwVar37 = L"Warning";
    } else if (uVar18 == 0xcfff0001) {
        pwVar37 = L"Error";
    } else if (uVar18 == 0xcfff0002) {
        pwVar37 = L"FatalError";
    } else {
        if (uVar18 != 0xcfff0003) goto switchD_14019277b_caseD_8;
        pwVar37 = L"Assert";
    }
    local_24a8 = (longlong *) 0x0;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192851;
    FUN_140191420(&local_24a8);
    plVar13 = local_24a8;
    if (local_2520 != 0) {
        puVar4 = *param_1;
        puVar5 = param_1[1];
        local_23a8 = *puVar4;
        uStack9124 = puVar4[1];
        uStack9120 = puVar4[2];
        uStack9116 = puVar4[3];
        local_2398 = puVar4[4];
        uStack9108 = puVar4[5];
        uStack9104 = puVar4[6];
        uStack9100 = puVar4[7];
        local_2388 = puVar4[8];
        uStack9092 = puVar4[9];
        uStack9088 = puVar4[10];
        uStack9084 = puVar4[0xb];
        local_2378 = puVar4[0xc];
        uStack9076 = puVar4[0xd];
        uStack9072 = puVar4[0xe];
        uStack9068 = puVar4[0xf];
        local_2368 = puVar4[0x10];
        uStack9060 = puVar4[0x11];
        uStack9056 = puVar4[0x12];
        uStack9052 = puVar4[0x13];
        local_2358 = puVar4[0x14];
        uStack9044 = puVar4[0x15];
        uStack9040 = puVar4[0x16];
        uStack9036 = puVar4[0x17];
        local_2348 = puVar4[0x18];
        uStack9028 = puVar4[0x19];
        uStack9024 = puVar4[0x1a];
        uStack9020 = puVar4[0x1b];
        local_2338 = puVar4[0x1c];
        uStack9012 = puVar4[0x1d];
        uStack9008 = puVar4[0x1e];
        uStack9004 = puVar4[0x1f];
        local_2328 = puVar4[0x20];
        uStack8996 = puVar4[0x21];
        uStack8992 = puVar4[0x22];
        uStack8988 = puVar4[0x23];
        local_2318 = *(undefined8 * )(puVar4 + 0x24);
        if ((((uint) puVar5 | (uint) local_2308) & 0xf) == 0) {
            lVar30 = 9;
            puVar4 = local_2308;
            do {
                puVar31 = puVar5;
                puVar29 = puVar4;
                uVar18 = puVar31[1];
                uVar8 = puVar31[2];
                uVar9 = puVar31[3];
                *puVar29 = *puVar31;
                puVar29[1] = uVar18;
                puVar29[2] = uVar8;
                puVar29[3] = uVar9;
                uVar18 = puVar31[5];
                uVar8 = puVar31[6];
                uVar9 = puVar31[7];
                puVar29[4] = puVar31[4];
                puVar29[5] = uVar18;
                puVar29[6] = uVar8;
                puVar29[7] = uVar9;
                uVar18 = puVar31[9];
                uVar8 = puVar31[10];
                uVar9 = puVar31[0xb];
                puVar29[8] = puVar31[8];
                puVar29[9] = uVar18;
                puVar29[10] = uVar8;
                puVar29[0xb] = uVar9;
                uVar18 = puVar31[0xd];
                uVar8 = puVar31[0xe];
                uVar9 = puVar31[0xf];
                puVar29[0xc] = puVar31[0xc];
                puVar29[0xd] = uVar18;
                puVar29[0xe] = uVar8;
                puVar29[0xf] = uVar9;
                uVar18 = puVar31[0x11];
                uVar8 = puVar31[0x12];
                uVar9 = puVar31[0x13];
                puVar29[0x10] = puVar31[0x10];
                puVar29[0x11] = uVar18;
                puVar29[0x12] = uVar8;
                puVar29[0x13] = uVar9;
                uVar18 = puVar31[0x15];
                uVar8 = puVar31[0x16];
                uVar9 = puVar31[0x17];
                puVar29[0x14] = puVar31[0x14];
                puVar29[0x15] = uVar18;
                puVar29[0x16] = uVar8;
                puVar29[0x17] = uVar9;
                uVar18 = puVar31[0x19];
                uVar8 = puVar31[0x1a];
                uVar9 = puVar31[0x1b];
                puVar29[0x18] = puVar31[0x18];
                puVar29[0x19] = uVar18;
                puVar29[0x1a] = uVar8;
                puVar29[0x1b] = uVar9;
                uVar18 = puVar31[0x1d];
                uVar8 = puVar31[0x1e];
                uVar9 = puVar31[0x1f];
                puVar29[0x1c] = puVar31[0x1c];
                puVar29[0x1d] = uVar18;
                puVar29[0x1e] = uVar8;
                puVar29[0x1f] = uVar9;
                lVar30 = lVar30 + -1;
                puVar4 = puVar29 + 0x20;
                puVar5 = puVar31 + 0x20;
            } while (lVar30 != 0);
            uVar18 = puVar31[0x21];
            uVar8 = puVar31[0x22];
            uVar9 = puVar31[0x23];
            puVar29[0x20] = puVar31[0x20];
            puVar29[0x21] = uVar18;
            puVar29[0x22] = uVar8;
            puVar29[0x23] = uVar9;
            uVar18 = puVar31[0x25];
            uVar8 = puVar31[0x26];
            uVar9 = puVar31[0x27];
            puVar29[0x24] = puVar31[0x24];
            puVar29[0x25] = uVar18;
            puVar29[0x26] = uVar8;
            puVar29[0x27] = uVar9;
            uVar18 = puVar31[0x29];
            uVar8 = puVar31[0x2a];
            uVar9 = puVar31[0x2b];
            puVar29[0x28] = puVar31[0x28];
            puVar29[0x29] = uVar18;
            puVar29[0x2a] = uVar8;
            puVar29[0x2b] = uVar9;
            uVar18 = puVar31[0x2d];
            uVar8 = puVar31[0x2e];
            uVar9 = puVar31[0x2f];
            puVar29[0x2c] = puVar31[0x2c];
            puVar29[0x2d] = uVar18;
            puVar29[0x2e] = uVar8;
            puVar29[0x2f] = uVar9;
            uVar18 = puVar31[0x31];
            uVar8 = puVar31[0x32];
            uVar9 = puVar31[0x33];
            puVar29[0x30] = puVar31[0x30];
            puVar29[0x31] = uVar18;
            puVar29[0x32] = uVar8;
            puVar29[0x33] = uVar9;
        } else {
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019297f;
            FUN_1407db590(local_2308, puVar5, 0x4d0);
        }
        *param_1 = &local_23a8;
        param_1[1] = local_2308;
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019299f;
        FUN_140191e30(plVar13, param_1);
    }
    if (local_2520 != 0) {
        uVar6 = *(undefined8 * )(*param_1 + 8);
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401929b3;
        FUN_1400564a0(uVar6);
    }
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401929c2;
    for (puVar23 = (undefined8 *) TlsGetValue(DAT_140c63720);
         (puVar23 != (undefined8 *) 0x0 && (puVar23[1] != 0)); puVar23 = (undefined8 *) puVar23[2]) {
        pcVar7 = *(code * *) * puVar23;
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192a02;
        (*pcVar7)(puVar23, &local_838, 0x400);
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192a0a;
        FUN_1400564a0();
        puVar35 = &local_838;
        uVar3 = local_838;
        while (uVar3 != 0) {
            if (0x7f < uVar3) {
                uVar32 = uVar38;
                uVar34 = 0x3d1;
                do {
                    uVar24 = (uVar34 - uVar32 >> 1) + uVar32;
                    if (*(ushort * )(&UNK_140a41a80 + uVar24 * 2) <= uVar3) {
                        if (uVar3 <= *(ushort * )(&UNK_140a41a80 + uVar24 * 2)) break;
                        uVar32 = uVar24 + 1;
                        uVar24 = uVar34;
                    }
                    uVar34 = uVar24;
                } while (uVar32 < uVar24);
            }
            puVar35 = puVar35 + 1;
            uVar3 = *puVar35;
        }
    }
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192ae8;
    FUN_14001b370();
    pWVar12 = local_24f8;
    *(uint * )(&stack0x00000048 + lVar21) = (uint) local_2418.wSecond;
    *(uint * )(&stack0x00000040 + lVar21) = (uint) local_2418.wMinute;
    *(uint * )(&stack0x00000038 + lVar21) = (uint) local_2418.wHour;
    *(uint * )(&stack0x00000030 + lVar21) = (uint) local_2418.wDay;
    *(uint * )(&stack0x00000028 + lVar21) = (uint) local_2418.wMonth;
    uVar6 = *(undefined8 * )(*param_1 + 4);
    *(uint * )(&stack0x00000020 + lVar21) = (uint) local_2418.wYear % 100;
    *(WCHAR * *)(&stack0x00000018 + lVar21) = local_1e20;
    *(undefined * *)(&stack0x00000010 + lVar21) = local_1e38;
    *(undefined8 * )((longlong) & pWStackX8 + lVar21) = uVar6;
    local_2528 = pwVar37;
    local_2510 = param_1;
    *(wchar_t **) (&stack0x00000000 + lVar21) = pwVar37;
    *(undefined * *)(&stack0xfffffffffffffff8 + lVar21) = local_1e00;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192b99;
    FUN_14001b370(local_1cb8, 0x104, L"%s.%s.%s.%p.%s.%s.%0.2u%0.2u%0.2u.%0.2u%0.2u%0.2u", pWVar12);
    local_2514 = 0;
    bVar36 = (byte)
    ~DAT_140c63724 >> 1 & 1;
    *(undefined * *)(&stack0xfffffffffffffff8 + lVar21) = local_1cb8;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192bdc;
    iVar15 = FUN_14001b370(local_1aa8, 0x104, L"%s\\%s.txt", local_2500);
    if (-1 < iVar15) {
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192bf3;
        _File = (FILE *) FUN_1407e0734(local_1aa8, &DAT_1409e1ee4);
        if (_File != (FILE *) 0x0) {
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192c0d;
            FUN_140191520(_File, &local_2418, param_1);
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192c1b;
            FUN_140191f50(plVar13, _File, param_1);
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192c23;
            fclose(_File);
        }
        local_2514 = (uint)(_File != (FILE *) 0x0);
    }
    bVar10 = false;
    bVar40 = bVar10;
    if (plVar13 != (longlong *) 0x0) {
        *(undefined * *)(&stack0xfffffffffffffff8 + lVar21) = local_1cb8;
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192c61;
        iVar15 = FUN_14001b370(local_1898, 0x104, L"%s\\%s.dmp", local_2500);
        if (-1 < iVar15) {
            *(undefined8 * )((longlong) & pWStackX8 + lVar21) = 0;
            *(undefined4 * )(&stack0x00000000 + lVar21) = 0;
            *(undefined4 * )(&stack0xfffffffffffffff8 + lVar21) = 2;
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192c94;
            pvVar25 = CreateFileW(local_1898, 0xc0000000, 3, (LPSECURITY_ATTRIBUTES) 0x0,
                                  *(DWORD * )(&stack0xfffffffffffffff8 + lVar21),
                                  *(DWORD * )(&stack0x00000000 + lVar21),
                                  *(HANDLE * )((longlong) & pWStackX8 + lVar21));
            if (pvVar25 != (HANDLE) 0xffffffffffffffff) {
                local_24e8 = 0;
                uStack9444 = 0;
                local_24e0 = 0;
                uStack9436 = 0;
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192cb1;
                local_24e8 = GetCurrentThreadId();
                uStack9444 = SUB84(local_2510, 0);
                local_24e0 = (undefined4)((ulonglong) local_2510 >> 0x20);
                uStack9436 = 1;
                if (((DAT_140c63724 & 1) != 0) && ((local_2520 == 0 || (**local_2510 == 0xcfff0002)))) {
                    uVar38 = 2;
                    bVar36 = 0;
                }
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192cf1;
                DVar16 = GetCurrentProcessId();
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192cf9;
                pvVar26 = GetCurrentProcess();
                *(DWORD * *)(&stack0xfffffffffffffff8 + lVar21) = &local_24e8;
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192d12;
                iVar15 = FUN_140191340(pvVar26, DVar16, pvVar25, uVar38);
                bVar40 = iVar15 != 0;
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192d25;
                CloseHandle(pvVar25);
                pwVar37 = local_2528;
            }
        }
    }
    *(undefined * *)(&stack0xfffffffffffffff8 + lVar21) = local_1cb8;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192d54;
    iVar15 = FUN_14001b370(local_1688, 0x104, L"%s\\%s.log", local_2500);
    bVar11 = bVar10;
    if (-1 < iVar15) {
        if (_DAT_140c674a0 == 0) {
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192d6d;
            OutputDebugStringA("WARNING! Log called before CRT startup");
        } else {
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192d7b;
            FUN_1401a2bc0(local_1688);
        }
        bVar11 = true;
    }
    if ((((bVar36 != 0) && (local_2514 != 0)) && (bVar40)) && (bVar11)) {
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192da8;
        iVar15 = FUN_14018cdf0();
        if ((DAT_140c8a1ac == 0) || (-1 < iVar15 - _DAT_140c8a1a8)) {
            pwVar33 = (wchar_t *) &DAT_140c886c0;
            if (_DAT_140c886c0 == 0) {
                pwVar33 = L"http://crash.na.wildstar-online.com/errors.php";
            }
            local_24b0 = 0;
            local_2488[0] = 0;
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192deb;
            FUN_1401c3640(local_2488, pwVar33);
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192dfe;
            iVar17 = FUN_1401c37f0(&local_24b0, local_2488[0], 0);
            lVar30 = local_24b0;
            if (iVar17 < 0) {
                LAB_1401931b8:
                if (DAT_140c8a1ac < 30000) {
                    uVar18 = 30000;
                } else {
                    uVar18 = DAT_140c8a1ac;
                    if (DAT_140c8a1ac < 0x7fffffff) {
                        uVar18 = DAT_140c8a1ac * 2;
                    }
                }
            } else {
                local_23f8 = (HANDLE) 0xffffffffffffffff;
                local_2408 = ZEXT816(0);
                pcVar7 = *(code * *)(DAT_140c77890 + 0x18);
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192e31;
                uVar18 = (*pcVar7)(&DAT_140c77890);
                pcVar7 = *(code * *)(DAT_140c77890 + 0x18);
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192e61;
                (*pcVar7)(&DAT_140c77890);
                *(int *) (&stack0xfffffffffffffff8 + lVar21) =
                        (int) (longlong)((double) (ulonglong) uVar18 * 2.328306436538696e-10 * 4294967296.0);
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192e9c;
                FUN_1400efdd0(local_23f0);
                local_24a0 = 0x400;
                local_24b8 = local_1268;
                *(uint * )(&stack0x00000060 + lVar21) = (uint) local_2418.wSecond;
                *(uint * )(&stack0x00000058 + lVar21) = (uint) local_2418.wMinute;
                *(uint * )(&stack0x00000050 + lVar21) = (uint) local_2418.wHour;
                *(uint * )(&stack0x00000048 + lVar21) = (uint) local_2418.wDay;
                *(uint * )(&stack0x00000040 + lVar21) = (uint) local_2418.wMonth;
                uVar6 = *(undefined8 * )(*local_2510 + 4);
                *(uint * )(&stack0x00000038 + lVar21) = (uint) local_2418.wYear % 100;
                *(WCHAR * *)(&stack0x00000030 + lVar21) = local_1e20;
                *(undefined * *)(&stack0x00000028 + lVar21) = local_1e38;
                *(undefined8 * )(&stack0x00000020 + lVar21) = uVar6;
                *(wchar_t **) (&stack0x00000018 + lVar21) = pwVar37;
                *(undefined * *)(&stack0x00000010 + lVar21) = local_1e00;
                *(LPWSTR * )((longlong) & pWStackX8 + lVar21) = local_24f8;
                *(char **) (&stack0x00000000 + lVar21) =
                        "Program=%S\r\nBuild=%S\r\nType=%S\r\nAddress=%p\r\nHash=%S\r\nMachine=%S\r\nDate=%0.2u%0.2u%0.2u\r\nTime=%0.2u%0.2u%0.2u\r\n";
                *(undefined8 * )(&stack0xfffffffffffffff8 + lVar21) = 0;
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192f81;
                FUN_140193940(local_1268, 0x400, &local_24b8, &local_24a0);
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192f96;
                lVar27 = WinHttpConnect(lVar30, local_2468, local_245c, 0);
                local_2408 = CONCAT88(local_2408._8_8_, lVar27);
                if (lVar27 == 0) {
                    LAB_140193014:
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019301a;
                    DVar16 = GetLastError();
                    if (0 < (int) DVar16) {
                        DVar16 = DVar16 & 0xffff | 0x80070000;
                    }
                    if (-1 < (int) DVar16) goto LAB_14019302e;
                } else {
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192fb4;
                    DVar16 = GetTempPathW(0x104, local_1478);
                    if (DVar16 == 0) goto LAB_140193014;
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140192fd6;
                    UVar19 = GetTempFileNameW(local_1478, L"ERR", 0, local_a48);
                    if (UVar19 == 0) goto LAB_140193014;
                    *(undefined8 * )((longlong) & pWStackX8 + lVar21) = 0;
                    *(undefined4 * )(&stack0x00000000 + lVar21) = 0x4000100;
                    *(undefined4 * )(&stack0xfffffffffffffff8 + lVar21) = 2;
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140193007;
                    local_23f8 = CreateFileW(local_a48, 0xc0000000, 0, (LPSECURITY_ATTRIBUTES) 0x0,
                                             *(DWORD * )(&stack0xfffffffffffffff8 + lVar21),
                                             *(DWORD * )(&stack0x00000000 + lVar21),
                                             *(HANDLE * )((longlong) & pWStackX8 + lVar21));
                    if (local_23f8 == (HANDLE) 0xffffffffffffffff) goto LAB_140193014;
                    LAB_14019302e:
                    iVar17 = (int) local_24b8;
                    local_24d0 = local_1db8;
                    *(undefined * *)(&stack0x00000010 + lVar21) = &DAT_1409e1f1c;
                    *(undefined * *)((longlong) & pWStackX8 + lVar21) = local_23f0;
                    local_2498[0] = 0x100;
                    *(char **) (&stack0x00000000 + lVar21) =
                            "\r\n--%s\r\nContent-Disposition: form-data; name=\"%s\"\r\n\r\n";
                    *(undefined8 * )(&stack0xfffffffffffffff8 + lVar21) = 0;
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140193091;
                    iVar20 = FUN_140193940(local_1db8, 0x100, &local_24d0, local_2498);
                    if (-1 < iVar20) {
                        *(undefined8 * )(&stack0xfffffffffffffff8 + lVar21) = 0;
                        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401930c4;
                        BVar14 = WriteFile(local_23f8, local_1db8,
                                           (int) local_24d0 - ((int) register0x00000020 + -0x1db8), local_24d8,
                                           *(LPOVERLAPPED * )(&stack0xfffffffffffffff8 + lVar21));
                        if (BVar14 == 0) {
                            LAB_1401930ec:
                            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401930f2;
                            DVar16 = GetLastError();
                            if (0 < (int) DVar16) {
                                DVar16 = DVar16 & 0xffff | 0x80070000;
                            }
                            if ((int) DVar16 < 0) goto LAB_140193177;
                        } else {
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar21) = 0;
                            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401930e8;
                            BVar14 = WriteFile(local_23f8, local_1268, iVar17 - ((int) register0x00000020 + -0x1268),
                                               local_24d8, *(LPOVERLAPPED * )(&stack0xfffffffffffffff8 + lVar21));
                            if (BVar14 == 0) goto LAB_1401930ec;
                        }
                        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019311c;
                        iVar17 = FUN_1401c4370(local_2408, &DAT_140a435a4, local_1aa8);
                        if (-1 < iVar17) {
                            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019313a;
                            iVar17 = FUN_1401c4370(local_2408, &DAT_140a434a4, local_1898);
                            if (-1 < iVar17) {
                                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140193158;
                                iVar17 = FUN_1401c4370(local_2408, &DAT_1409e1f04, local_1688);
                                if (-1 < iVar17) {
                                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019316c;
                                    iVar17 = FUN_1401c4540(local_2408, local_2488);
                                    if (-1 < iVar17) {
                                        bVar10 = true;
                                    }
                                }
                            }
                        }
                    }
                }
                LAB_140193177:
                if (local_2408._8_8_ != 0) {
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140193189;
                    WinHttpCloseHandle();
                }
                if (local_2408._0_8_ != 0) {
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019319b;
                    WinHttpCloseHandle();
                }
                if (local_23f8 != (HANDLE) 0xffffffffffffffff) {
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401931ae;
                    CloseHandle(local_23f8);
                }
                uVar18 = 0;
                if (!bVar10) goto LAB_1401931b8;
            }
            DAT_140c8a1ac = uVar18;
            _DAT_140c8a1a8 = DAT_140c8a1ac + iVar15;
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401931ef;
            FUN_14018b900(local_2488[0], 0);
            if (lVar30 != 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401931fd;
                WinHttpCloseHandle(lVar30);
            }
        }
    }
    puVar39 = local_24c0;
    if (plVar13 != (longlong *) 0x0) {
        pcVar7 = *(code * *)(*plVar13 + 8);
        *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x14019320b;
        (*pcVar7)(plVar13);
        puVar39 = local_24c0;
    }
    LAB_140193228:
    if (*(ulonglong * )(local_24c8 + 2) < 2) {
        *local_24c8 = 0;
        *(undefined8 * )(local_24c8 + 2) = 0;
        if (*(longlong * )(local_24c8 + 4) != 0) {
            if (*(longlong * )(local_24c8 + 6) == 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x140193290;
                pvVar25 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(local_24c8 + 6);
                uVar38 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar38 == 0) * (*puVar1 ^ (ulonglong) pvVar25);
                if (uVar38 != 0) {
                    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401932a3;
                    CloseHandle(pvVar25);
                }
            }
            pvVar25 = *(HANDLE * )(local_24c8 + 6);
            *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401932ad;
            SetEvent(pvVar25);
        }
    } else {
        *(longlong * )(local_24c8 + 2) = *(longlong * )(local_24c8 + 2) + -1;
    }
    *puVar39 = local_2518;
    *(undefined8 * )((longlong) & uStack48 + lVar21) = 0x1401932c1;
    FUN_1407db4f0(local_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar21));
    return;
}


PACL FUN_1401933b0(void) {
    uint uVar1;
    BOOL BVar2;
    HANDLE handle;
    PACL pSid;
    PACL pAcl;
    PACL pAVar3;
    DWORD dwAclRevision;
    bool bVar4;
    bool bVar5;
    DWORD local_res8[2];
    PACL local_res10;
    HLOCAL local_res18;

    handle = GetCurrentProcess();
    pAVar3 = (PACL) 0x0;
    local_res10 = (PACL) 0x0;
    local_res18 = (HLOCAL) 0x0;
    uVar1 = GetSecurityInfo(handle, SE_KERNEL_OBJECT, 4, (PSID *) 0x0, (PSID *) 0x0, &local_res10, (PACL *) 0x0,
                            &local_res18);
    bVar5 = (int) uVar1 < 0;
    bVar4 = uVar1 == 0;
    pSid = pAVar3;
    pAcl = pAVar3;
    if (bVar4) {
        if (local_res10 == (PACL) 0x0) {
            uVar1 = 8;
        } else {
            uVar1 = (uint) local_res10->AclSize;
        }
        local_res8[0] = 0x44;
        pSid = (PACL) LocalAlloc(0x40, 0x44);
        if ((pSid != (PACL) 0x0) &&
            (BVar2 = CreateWellKnownSid(WinWorldSid, (PSID) 0x0, pSid, local_res8), pAcl = (PACL) 0x0,
                    BVar2 != 0)) {
            uVar1 = uVar1 + local_res8[0] + 0xb & 0xfffffffc;
            if (local_res10 == (PACL) 0x0) {
                dwAclRevision = 2;
            } else {
                dwAclRevision = (DWORD) local_res10->AclRevision;
            }
            pAcl = (PACL) LocalAlloc(0x40, (ulonglong) uVar1);
            if ((((pAcl != (PACL) 0x0) && (BVar2 = InitializeAcl(pAcl, uVar1, dwAclRevision), BVar2 != 0)) &&
                 (BVar2 = AddAccessDeniedAce(pAcl, (uint) pAcl->AclRevision, 0xc03fa, pSid), BVar2 != 0)) &&
                ((local_res10 == (PACL) 0x0 ||
                  (BVar2 = AddAce(pAcl, (uint) pAcl->AclRevision, 0xffffffff, local_res10 + 1,
                                  local_res10->AclSize - 8), BVar2 != 0)))) {
                uVar1 = SetSecurityInfo(handle, SE_KERNEL_OBJECT, 0x80000004, (PSID) 0x0, (PSID) 0x0, pAcl,
                                        (PACL) 0x0);
                bVar5 = (int) uVar1 < 0;
                bVar4 = uVar1 == 0;
                if (bVar4) goto LAB_140193540;
                goto LAB_140193531;
            }
        }
        uVar1 = GetLastError();
        bVar5 = (int) uVar1 < 0;
        bVar4 = uVar1 == 0;
    }
    LAB_140193531:
    if (bVar4 || bVar5) {
        pAVar3 = (PACL)(ulonglong)
        uVar1;
    } else {
        pAVar3 = (PACL)(ulonglong)(uVar1 & 0xffff | 0x80070000);
    }
    LAB_140193540:
    LocalFree(local_res18);
    LocalFree(pSid);
    LocalFree(pAcl);
    return pAVar3;
}


void FUN_140193580(void) {
    int iVar1;
    undefined8 local_48;
    undefined **local_40;
    undefined8 local_38;
    LPVOID local_30;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    local_38 = 0;
    local_40 = &PTR_LAB_140b5e648;
    local_30 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_40);
    local_28 = local_40;
    local_48 = 0x141d3dcc8;
    local_18 = local_30;
    local_20 = local_38;
    iVar1 = FUN_140197770(1, &local_48, &local_28);
    local_40 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_30);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140193640(void) {
    BOOL BVar1;
    FARPROC lpAddress;
    DWORD local_res8[8];

    _DAT_140c67460 = 0;
    DAT_140c67468 = 0;
    DAT_140c67470 = 0;
    DAT_140c67478 = 0;
    DAT_140c63720 = TlsAlloc();
    FUN_1407e0904(0, 0xffffffff);
    SetUnhandledExceptionFilter(FUN_140192440);
    DAT_140c636c0 = GetModuleHandleW(L"kernel32.dll");
    lpAddress = GetProcAddress(DAT_140c636c0, "SetUnhandledExceptionFilter");
    if (lpAddress != (FARPROC) 0x0) {
        BVar1 = VirtualProtect(lpAddress, 1, 0x40, local_res8);
        if (BVar1 != 0) {
            *lpAddress = (FARPROC) 0xc3;
            VirtualProtect(lpAddress, 1, local_res8[0], local_res8);
        }
    }
    return;
}


void FUN_140193730(void) {
    wchar_t *local_res8[4];

    local_res8[0] = L"Fatal Error: Pure virtual function call\n";
    RaiseException(0xcfff0002, 1, 1, (ULONG_PTR *) local_res8);
    // WARNING: Subroutine does not return
    ExitProcess(1);
}


void FUN_140193770(undefined8 param_1) {
    UINT UVar1;
    int iVar2;
    undefined auStack584[32];
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack584;
    UVar1 = GetSystemDirectoryW(local_228, 0x104);
    if ((UVar1 != 0) &&
        (iVar2 = FUN_14001b370(local_228 + UVar1, 0x104 - (ulonglong) UVar1, &DAT_140a43680, param_1),
                -1 < iVar2)) {
        LoadLibraryW(local_228);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack584);
    return;
}


ulonglong FUN_140193800(LPWSTR param_1, undefined8 param_2, undefined8 param_3, longlong param_4) {
    DWORD DVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    uint uVar5;

    if (param_4 == 0) {
        DVar1 = GetModuleFileNameW((HMODULE) 0x0, param_1, 0x104);
        uVar4 = (ulonglong) DVar1;
        do {
            uVar2 = DVar1;
            if (uVar2 == 0) break;
            uVar2 = (uint) uVar4;
            uVar4 = (ulonglong)(uVar2 - 1);
            DVar1 = uVar2 - 1;
        } while (param_1[uVar4] != L'\\');
        uVar5 = 0x104 - uVar2;
        uVar3 = 0;
        if (0x7ffffffe < (ulonglong) uVar5 - 1) {
            uVar3 = 0x80070057;
        }
        if ((int) uVar3 < 0) {
            if (uVar5 != 0) {
                param_1[uVar2] = L'\0';
            }
        } else {
            uVar3 = FUN_14001b680(param_1 + uVar2, (ulonglong) uVar5, uVar3, param_3);
        }
        if ((int) uVar3 < 0) {
            return (ulonglong) uVar3;
        }
    } else {
        uVar4 = FUN_14001b370(param_1, 0x104, L"%ls\\%ls", param_4, param_3);
        if ((int) uVar4 < 0) {
            return uVar4;
        }
    }
    return 0;
}


void FUN_1401938d0(undefined8 param_1, undefined8 param_2) {
    int iVar1;
    undefined auStack584[32];
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack584;
    iVar1 = FUN_140193800(local_228, param_2, param_1, param_2);
    if (iVar1 < 0) {
        FUN_1407db4f0(local_18 ^ (ulonglong) auStack584);
        return;
    }
    LoadLibraryW(local_228);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack584);
    return;
}


int FUN_140193940(undefined *param_1, ulonglong param_2, undefined8 *param_3, ulonglong *param_4,
                  uint param_5, char *param_6) {
    int iVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    char *pcVar5;
    int iVar6;
    undefined *puVar7;
    undefined *puVar8;

    iVar6 = 0;
    iVar1 = -0x7ff8ffa9;
    if ((param_5 & 0x100) == 0) {
        iVar3 = 0;
        if (0x7ffffffe < param_2 - 1) {
            iVar3 = iVar1;
        }
    } else if (((param_1 == (undefined *) 0x0) && (param_2 != 0)) || (iVar3 = 0, 0x7fffffff < param_2)) {
        iVar3 = iVar1;
    }
    if (iVar3 < 0) {
        if (param_2 == 0) {
            return iVar3;
        }
        *param_1 = 0;
        return iVar3;
    }
    pcVar5 = param_6;
    if (((param_5 & 0x100) != 0) && (pcVar5 = "", param_6 != (char *) 0x0)) {
        pcVar5 = param_6;
    }
    uVar4 = param_2;
    puVar8 = param_1;
    if ((param_5 & 0xffffe000) == 0) {
        if (param_2 == 0) {
            iVar6 = 0;
            if (*pcVar5 == '\0') goto LAB_140193ad0;
            iVar6 = -0x7ff8ff86;
            if (param_1 == (undefined *) 0x0) {
                iVar6 = iVar1;
            }
        } else {
            uVar4 = param_2 - 1;
            iVar1 = FUN_1407df5fc(param_1, uVar4, pcVar5, &stack0x00000038);
            if (iVar1 < 0) {
                LAB_140193a98:
                param_1[uVar4] = 0;
                iVar6 = -0x7ff8ff86;
                uVar2 = uVar4;
            } else {
                uVar2 = (ulonglong) iVar1;
                if (uVar4 < uVar2) goto LAB_140193a98;
                if (uVar2 == uVar4) {
                    param_1[uVar4] = 0;
                    uVar2 = uVar4;
                    iVar6 = 0;
                }
            }
            uVar4 = param_2 - uVar2;
            puVar8 = param_1 + uVar2;
            if (-1 < iVar6) {
                if (((param_5 >> 9 & 1) != 0) && (1 < uVar4)) {
                    FUN_1407e4830(puVar8 + 1, param_5 & 0xff, uVar4 - 1);
                }
                goto LAB_140193ad0;
            }
        }
    } else {
        iVar6 = iVar1;
        if (param_2 != 0) {
            *param_1 = 0;
        }
    }
    if (((param_5 & 0x1c00) != 0) && (param_2 != 0)) {
        if ((param_5 >> 0xc & 1) != 0) {
            *param_1 = 0;
            uVar4 = param_2;
            puVar8 = param_1;
        }
        uVar2 = uVar4;
        puVar7 = puVar8;
        if (((param_5 >> 10 & 1) != 0) &&
            (FUN_1407e4830(param_1, param_5 & 0xff, param_2), uVar2 = param_2, puVar7 = param_1,
                    (char) param_5 != '\0')) {
            if (param_2 == 0) goto LAB_140193b32;
            param_1[param_2 - 1] = 0;
            uVar2 = 1;
            puVar7 = param_1 + (param_2 - 1);
        }
        uVar4 = uVar2;
        puVar8 = puVar7;
        if ((param_2 != 0) && ((param_5 >> 0xb & 1) != 0)) {
            *param_1 = 0;
            uVar4 = param_2;
            puVar8 = param_1;
        }
    }
    LAB_140193b32:
    if (((iVar6 + 0x80000000U & 0x80000000) == 0) && (iVar6 != -0x7ff8ff86)) {
        return iVar6;
    }
    LAB_140193ad0:
    if (param_3 != (undefined8 *) 0x0) {
        *param_3 = puVar8;
    }
    if (param_4 != (ulonglong *) 0x0) {
        *param_4 = uVar4;
    }
    return iVar6;
}


void FUN_140193b70(ushort param_1, uint param_2, WORD param_3) {
    undefined8 uVar1;
    DWORDLONG dwlConditionMask;
    undefined auStack360[32];
    undefined local_148[4];
    uint local_144;
    uint local_140;
    WORD local_34;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack360;
    local_140 = param_2 & 0xffff;
    FUN_1407e4830(local_148 + 4, 0, 0x118);
    local_148 = 0x11c;
    local_144 = (uint) param_1;
    local_34 = param_3;
    uVar1 = VerSetConditionMask(0, 2, 3);
    uVar1 = VerSetConditionMask(uVar1, 1, 3);
    uVar1 = VerSetConditionMask(uVar1, 0x20, 3);
    dwlConditionMask = VerSetConditionMask(uVar1, 0x10, 3);
    VerifyVersionInfoW((LPOSVERSIONINFOEXW) local_148, 0x33, dwlConditionMask);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack360);
    return;
}


ulonglong FUN_140193c40(void) {
    ulonglong uVar1;

    if ((DAT_140c8e0f8 & 1) == 0) {
        DAT_140c8e0f8 = DAT_140c8e0f8 | 1;
        uVar1 = FUN_140193b70(6);
        DAT_140c8e0fc = (int) uVar1;
        return uVar1;
    }
    return (ulonglong) DAT_140c8e0fc;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140193f10(short *param_1) {
    byte *pbVar1;
    byte *pbVar2;
    undefined ***pppuVar3;
    byte bVar4;
    short sVar5;
    code *pcVar6;
    undefined *puVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    BOOL BVar13;
    DWORD DVar14;
    UINT UVar15;
    longlong lVar16;
    longlong lVar17;
    HMODULE pHVar18;
    FARPROC pFVar19;
    longlong lVar20;
    longlong lVar21;
    FARPROC pFVar22;
    longlong *plVar23;
    ushort uVar24;
    uint uVar25;
    wchar_t *pwVar26;
    short *psVar27;
    short *psVar28;
    byte *pbVar29;
    longlong lVar30;
    ulonglong uVar31;
    undefined **ppuVar32;
    ulonglong uVar33;
    ulonglong uVar34;
    undefined8 uStackX8;
    longlong local_3928;
    longlong *local_3920;
    undefined **local_3918[2];
    LPVOID local_3908;
    longlong *local_3900;
    longlong *local_38f8;
    longlong local_38f0;
    longlong local_38e8;
    longlong local_38e0;
    short *local_38d8;
    undefined8 local_38d0;
    LPVOID local_38c8;
    LPVOID local_38c0;
    DWORD_PTR local_38b8;
    undefined8 local_38b0;
    undefined8 local_38a8;
    uint local_3898;
    undefined local_3894[1024];
    undefined4 auStack13460[1801];
    FARPROC local_1870;
    _MEMORYSTATUSEX local_1868;
    _OSVERSIONINFOW local_1828;
    undefined2 local_1714;
    undefined2 local_1712;
    undefined2 local_1710;
    undefined local_170e;
    byte local_1508[512];
    byte local_1308[40];
    undefined4 local_12e0;
    undefined4 local_12dc;
    undefined4 local_12d8;
    undefined4 local_12d4;
    short local_12b8[512];
    short local_eb8[520];
    uint auStack2728[520];
    ushort local_288[32];
    WCHAR local_248[264];
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x140193f3a;
    lVar16 = FUN_1407f0f60();
    lVar16 = -lVar16;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar16);
    local_38d8 = param_1;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193f62;
    FUN_1407e4830();
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193f76;
    FUN_1407e4830(local_12b8, 0, 0x1028);
    local_38d0 = 0;
    local_38c8 = (LPVOID) 0x0;
    local_38c0 = (LPVOID) 0x0;
    local_38b8 = 0;
    local_38b0 = 0;
    local_38a8 = 0;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193f9a;
    GetNativeSystemInfo((LPSYSTEM_INFO) & local_38d0);
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193fa5;
    iVar8 = GetSystemMetrics(0x59);
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193fb3;
    iVar9 = GetSystemMetrics(0x57);
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193fc0;
    iVar10 = GetSystemMetrics(0x58);
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140193fcd;
    iVar11 = GetSystemMetrics(0x56);
    uVar12 = 0;
    if ((short) local_38d0 == 0) {
        uVar12 = 1;
    } else if ((short) local_38d0 == 5) {
        uVar12 = 4;
    } else if ((short) local_38d0 == 6) {
        uVar12 = 3;
    } else if ((short) local_38d0 == 9) {
        uVar12 = 2;
    }
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019401a;
    FUN_1407e4830(&local_1828);
    local_1828.dwOSVersionInfoSize = 0x11c;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194031;
    BVar13 = GetVersionExW(&local_1828);
    if (BVar13 != 0) {
        *(DWORD * )(param_1 + 0xa18) =
                local_1828.dwMinorVersion & 0xffff | local_1828.dwMajorVersion << 0x10;
        *(uint * )(param_1 + 0xa1a) = CONCAT22(local_1714, local_1712);
        uVar25 = (uint) CONCAT21(local_1710, local_170e) << 8;
        *(uint * )(param_1 + 0xa1c) = uVar25;
        if (iVar8 != 0) {
            *(uint * )(param_1 + 0xa1c) = uVar25 | 1;
        }
        if (iVar9 != 0) {
            *(uint * )(param_1 + 0xa1c) = *(uint * )(param_1 + 0xa1c) | 2;
        }
        if (iVar10 != 0) {
            *(uint * )(param_1 + 0xa1c) = *(uint * )(param_1 + 0xa1c) | 4;
        }
        if (iVar11 != 0) {
            *(uint * )(param_1 + 0xa1c) = *(uint * )(param_1 + 0xa1c) | 8;
        }
    }
    local_38f8 = (longlong *) 0x0;
    local_3900 = (longlong *) 0x0;
    *(uint * )(param_1 + 0xa16) = uVar12 | 0x10000;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401940dd;
    DVar14 = CoInitialize((LPVOID) 0x0);
    if (-1 < (int) DVar14) {
        *(longlong * **)(&stack0xfffffffffffffff8 + lVar16) = &local_38f8;
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194110;
        DVar14 = CoCreateInstance((IID * ) & DAT_1409646a0, (LPUNKNOWN) 0x0, 1, (IID * ) & DAT_140964700,
                                  *(LPVOID * *)(&stack0xfffffffffffffff8 + lVar16));
        if ((int) DVar14 < 0) {
            LAB_14019496c:
            if (local_38f8 != (longlong *) 0x0) {
                pcVar6 = *(code * *)(*local_38f8 + 0x10);
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019497b;
                (*pcVar6)();
                local_38f8 = (longlong *) 0x0;
            }
        } else if (local_38f8 != (longlong *) 0x0) {
            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194131;
            lVar17 = Ordinal_2(L"\\\\.\\root\\CIMV2");
            plVar23 = local_38f8;
            lVar20 = *local_38f8;
            *(longlong * **)(&stack0x00000018 + lVar16) = &local_3900;
            *(undefined8 * )(&stack0x00000010 + lVar16) = 0;
            *(undefined8 * )((longlong) & uStackX8 + lVar16) = 0;
            local_3928 = lVar17;
            *(undefined4 * )(&stack0x00000000 + lVar16) = 0;
            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
            pcVar6 = *(code * *)(lVar20 + 0x18);
            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194168;
            DVar14 = (*pcVar6)(plVar23, lVar17, 0, 0);
            if ((-1 < (int) DVar14) && (local_3900 != (longlong *) 0x0)) {
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019418b;
                pHVar18 = (HMODULE) FUN_140193770(L"ole32.dll");
                if (pHVar18 != (HMODULE) 0x0) {
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401941a3;
                    pFVar19 = GetProcAddress(pHVar18, "CoSetProxyBlanket");
                    plVar23 = local_3900;
                    if (pFVar19 != (FARPROC) 0x0) {
                        *(undefined4 * )(&stack0x00000010 + lVar16) = 0;
                        *(undefined8 * )((longlong) & uStackX8 + lVar16) = 0;
                        *(undefined4 * )(&stack0x00000000 + lVar16) = 3;
                        *(undefined4 * )(&stack0xfffffffffffffff8 + lVar16) = 3;
                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401941d0;
                        (*pFVar19)(plVar23, 10, 0, 0);
                    }
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401941d9;
                    FreeLibrary(pHVar18);
                }
                local_3920 = (longlong *) 0x0;
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401941ea;
                lVar20 = Ordinal_2(L"Win32_Processor");
                if (lVar20 != 0) {
                    lVar30 = *local_3900;
                    *(longlong * **)(&stack0xfffffffffffffff8 + lVar16) = &local_3920;
                    pcVar6 = *(code * *)(lVar30 + 0x90);
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194216;
                    DVar14 = (*pcVar6)(local_3900, lVar20, 0, 0);
                    if ((-1 < (int) DVar14) && (local_3920 != (longlong *) 0x0)) {
                        *(undefined8 * )(&stack0x00000028 + lVar16) = 0;
                        *(undefined4 * )(&stack0x00000030 + lVar16) = 0;
                        pcVar6 = *(code * *)(*local_3920 + 0x18);
                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019423c;
                        (*pcVar6)();
                        lVar30 = *local_3920;
                        *(undefined * *)(&stack0xfffffffffffffff8 + lVar16) = &stack0x00000030 + lVar16;
                        pcVar6 = *(code * *)(lVar30 + 0x20);
                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194260;
                        DVar14 = (*pcVar6)(local_3920, 5000, 1, &stack0x00000028 + lVar16);
                        if ((-1 < (int) DVar14) &&
                            ((*(int *) (&stack0x00000030 + lVar16) != 0 &&
                              (plVar23 = *(longlong * *)(&stack0x00000028 + lVar16), plVar23 != (longlong *) 0x0)))) {
                            if (local_1828.dwPlatformId == 2) {
                                if ((local_1828.dwMajorVersion != 5) || (local_1828.dwMinorVersion != 0))
                                    goto LAB_1401942a6;
                                LAB_14019437d:
                                pwVar26 = L"CurrentClockSpeed";
                            } else {
                                if (local_1828.dwPlatformId == 1) goto LAB_14019437d;
                                LAB_1401942a6:
                                pwVar26 = L"MaxClockSpeed";
                            }
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401942b3;
                            lVar21 = Ordinal_2(pwVar26);
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401942d7;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            if (-1 < iVar8) {
                                *(undefined4 * )(param_1 + 0x606) = *(undefined4 * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401942f4;
                                Ordinal_6(lVar21);
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194306;
                            lVar21 = Ordinal_2(L"Manufacturer");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194328;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            lVar30 = local_3928;
                            if (-1 < iVar8) {
                                lVar30 = *(longlong * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194344;
                                Ordinal_6(lVar21);
                            }
                            if (-1 < iVar8) {
                                lVar21 = 0x200;
                                psVar27 = param_1;
                                do {
                                    if ((lVar21 == -0x7ffffdfe) ||
                                        (sVar5 = *(short *) ((lVar30 - (longlong) param_1) + (longlong) psVar27),
                                                sVar5 == 0)) {
                                        if (lVar21 != 0) goto LAB_140194392;
                                        break;
                                    }
                                    *psVar27 = sVar5;
                                    psVar27 = psVar27 + 1;
                                    lVar21 = lVar21 + -1;
                                } while (lVar21 != 0);
                                psVar27 = psVar27 + -1;
                                LAB_140194392:
                                *psVar27 = 0;
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401943a9;
                            lVar21 = Ordinal_2(L"Name");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401943cd;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            lVar30 = local_3928;
                            if (-1 < iVar8) {
                                lVar30 = *(longlong * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401943e9;
                                Ordinal_6(lVar21);
                            }
                            if (-1 < iVar8) {
                                psVar27 = param_1 + 0x200;
                                lVar21 = 0x200;
                                lVar30 = lVar30 - (longlong) psVar27;
                                do {
                                    if ((lVar21 == -0x7ffffdfe) ||
                                        (sVar5 = *(short *) (lVar30 + (longlong) psVar27), sVar5 == 0)) {
                                        if (lVar21 != 0) goto LAB_14019442c;
                                        break;
                                    }
                                    *psVar27 = sVar5;
                                    psVar27 = psVar27 + 1;
                                    lVar21 = lVar21 + -1;
                                } while (lVar21 != 0);
                                psVar27 = psVar27 + -1;
                                LAB_14019442c:
                                *psVar27 = 0;
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194443;
                            lVar21 = Ordinal_2(L"Description");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194467;
                            DVar14 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            lVar30 = local_3928;
                            if (-1 < (int) DVar14) {
                                lVar30 = *(longlong * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194483;
                                Ordinal_6(lVar21);
                            }
                            if (-1 < (int) DVar14) {
                                psVar27 = param_1 + 0x400;
                                lVar21 = 0x200;
                                lVar30 = lVar30 - (longlong) psVar27;
                                do {
                                    if ((lVar21 == -0x7ffffdfe) ||
                                        (sVar5 = *(short *) (lVar30 + (longlong) psVar27), sVar5 == 0)) {
                                        if (lVar21 != 0) goto LAB_1401944c0;
                                        break;
                                    }
                                    *psVar27 = sVar5;
                                    psVar27 = psVar27 + 1;
                                    lVar21 = lVar21 + -1;
                                } while (lVar21 != 0);
                                psVar27 = psVar27 + -1;
                                LAB_1401944c0:
                                *psVar27 = 0;
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401944d7;
                            lVar21 = Ordinal_2(L"Family");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401944fb;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            if (-1 < iVar8) {
                                *(undefined4 * )(param_1 + 0x600) = *(undefined4 * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194518;
                                Ordinal_6(lVar21);
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019452a;
                            lVar21 = Ordinal_2(L"Level");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019454e;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            if (-1 < iVar8) {
                                *(undefined4 * )(param_1 + 0x602) = *(undefined4 * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019456b;
                                Ordinal_6(lVar21);
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019457d;
                            lVar21 = Ordinal_2(L"Revision");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401945a1;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            if (-1 < iVar8) {
                                *(undefined4 * )(param_1 + 0x604) = *(undefined4 * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401945be;
                                Ordinal_6(lVar21);
                            }
                            plVar23 = *(longlong * *)(&stack0x00000028 + lVar16);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401945d0;
                            lVar21 = Ordinal_2(L"NumberOfCores");
                            lVar30 = *plVar23;
                            *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                            *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                            pcVar6 = *(code * *)(lVar30 + 0x20);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401945f4;
                            iVar8 = (*pcVar6)(plVar23, lVar21, 0, &stack0x00000038 + lVar16);
                            if (-1 < iVar8) {
                                *(undefined4 * )(param_1 + 0x608) = *(undefined4 * )(&stack0x00000040 + lVar16);
                            }
                            if (lVar21 != 0) {
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194611;
                                Ordinal_6(lVar21);
                            }
                            if (*(longlong * *)(&stack0x00000028 + lVar16) != (longlong *) 0x0) {
                                pcVar6 = *(code * *)(**(longlong * *)(&stack0x00000028 + lVar16) + 0x10);
                                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194621;
                                (*pcVar6)();
                                *(undefined8 * )(&stack0x00000028 + lVar16) = 0;
                            }
                        }
                        if (local_3920 != (longlong *) 0x0) {
                            pcVar6 = *(code * *)(*local_3920 + 0x10);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019463b;
                            (*pcVar6)();
                            local_3920 = (longlong *) 0x0;
                        }
                    }
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194648;
                    Ordinal_6(lVar20);
                }
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194655;
                lVar20 = Ordinal_2(L"Win32_VideoController");
                local_38e0 = lVar20;
                if (lVar20 != 0) {
                    lVar30 = *local_3900;
                    *(longlong * **)(&stack0xfffffffffffffff8 + lVar16) = &local_3920;
                    pcVar6 = *(code * *)(lVar30 + 0x90);
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194685;
                    DVar14 = (*pcVar6)(local_3900, lVar20, 0, 0);
                    if ((-1 < (int) DVar14) && (local_3920 != (longlong *) 0x0)) {
                        uVar31 = 0;
                        *(undefined4 * )(&stack0x00000030 + lVar16) = 0;
                        local_3918[0] = (undefined **) 0x0;
                        local_3918[1] = (undefined **) 0x0;
                        pcVar6 = *(code * *)(*local_3920 + 0x18);
                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401946b4;
                        (*pcVar6)();
                        lVar30 = *local_3920;
                        *(undefined * *)(&stack0xfffffffffffffff8 + lVar16) = &stack0x00000030 + lVar16;
                        pcVar6 = *(code * *)(lVar30 + 0x20);
                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401946d5;
                        DVar14 = (*pcVar6)(local_3920, 5000, 2, local_3918);
                        if ((-1 < (int) DVar14) && (*(int *) (&stack0x00000030 + lVar16) != 0)) {
                            do {
                                ppuVar32 = local_3918[uVar31];
                                pppuVar3 = local_3918 + uVar31;
                                if (ppuVar32 != (undefined **) 0x0) {
                                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194725;
                                    lVar20 = Ordinal_2(L"AdapterRAM");
                                    puVar7 = *ppuVar32;
                                    *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                                    *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                                    pcVar6 = *(code * *)(puVar7 + 0x20);
                                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194747;
                                    iVar8 = (*pcVar6)(ppuVar32, lVar20, 0, &stack0x00000038 + lVar16);
                                    uVar12 = *(uint * )(&stack0x00000028 + lVar16);
                                    if (-1 < iVar8) {
                                        uVar12 = *(uint * )(&stack0x00000040 + lVar16);
                                    }
                                    *(uint * )(&stack0x00000028 + lVar16) = uVar12;
                                    if (lVar20 != 0) {
                                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194766;
                                        Ordinal_6();
                                        uVar12 = *(uint * )(&stack0x00000028 + lVar16);
                                    }
                                    if (-1 < iVar8) {
                                        auStack2728[uVar31 * 0x205] = uVar12 >> 0x14;
                                    }
                                    ppuVar32 = *pppuVar3;
                                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194794;
                                    lVar20 = Ordinal_2(L"Description");
                                    puVar7 = *ppuVar32;
                                    *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                                    *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                                    pcVar6 = *(code * *)(puVar7 + 0x20);
                                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401947b6;
                                    iVar8 = (*pcVar6)(ppuVar32, lVar20, 0, &stack0x00000038 + lVar16);
                                    if (-1 < iVar8) {
                                        local_38e8 = *(longlong * )(&stack0x00000040 + lVar16);
                                    }
                                    if (lVar20 != 0) {
                                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401947d6;
                                        Ordinal_6(lVar20);
                                    }
                                    if (-1 < iVar8) {
                                        lVar20 = 0x200;
                                        psVar27 = local_12b8 + uVar31 * 0x40a;
                                        lVar17 = local_38e8 - (longlong) psVar27;
                                        do {
                                            if ((lVar20 == -0x7ffffdfe) ||
                                                (sVar5 = *(short *) (lVar17 + (longlong) psVar27), sVar5 == 0)) {
                                                if (lVar20 != 0) goto LAB_14019482d;
                                                break;
                                            }
                                            *psVar27 = sVar5;
                                            psVar27 = psVar27 + 1;
                                            lVar20 = lVar20 + -1;
                                        } while (lVar20 != 0);
                                        psVar27 = psVar27 + -1;
                                        LAB_14019482d:
                                        *psVar27 = 0;
                                    }
                                    ppuVar32 = *pppuVar3;
                                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194841;
                                    lVar20 = Ordinal_2(L"DriverVersion");
                                    puVar7 = *ppuVar32;
                                    *(undefined8 * )(&stack0x00000000 + lVar16) = 0;
                                    *(undefined8 * )(&stack0xfffffffffffffff8 + lVar16) = 0;
                                    pcVar6 = *(code * *)(puVar7 + 0x20);
                                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194865;
                                    DVar14 = (*pcVar6)(ppuVar32, lVar20, 0, &stack0x00000038 + lVar16);
                                    if (-1 < (int) DVar14) {
                                        local_38f0 = *(longlong * )(&stack0x00000040 + lVar16);
                                    }
                                    if (lVar20 != 0) {
                                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194885;
                                        Ordinal_6(lVar20);
                                    }
                                    if (-1 < (int) DVar14) {
                                        lVar20 = 0x200;
                                        psVar27 = local_eb8 + uVar31 * 0x40a;
                                        do {
                                            psVar28 = psVar27;
                                            if ((lVar20 == -0x7ffffdfe) ||
                                                (sVar5 = *(short *) (
                                                        (local_38f0 - (longlong)(local_eb8 + uVar31 * 0x40a)) +
                                                        (longlong) psVar28), sVar5 == 0)) {
                                                if (lVar20 == 0) {
                                                    psVar28 = psVar28 + -1;
                                                }
                                                *psVar28 = 0;
                                                goto LAB_1401948f4;
                                            }
                                            *psVar28 = sVar5;
                                            lVar20 = lVar20 + -1;
                                            psVar27 = psVar28 + 1;
                                        } while (lVar20 != 0);
                                        *psVar28 = 0;
                                    }
                                    LAB_1401948f4:
                                    if (*pppuVar3 != (undefined **) 0x0) {
                                        pcVar6 = *(code * *)(**pppuVar3 + 0x10);
                                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194902;
                                        (*pcVar6)();
                                        *pppuVar3 = (undefined **) 0x0;
                                    }
                                }
                                uVar12 = (int) uVar31 + 1;
                                uVar31 = (ulonglong) uVar12;
                                lVar20 = local_38e0;
                                param_1 = local_38d8;
                                lVar17 = local_3928;
                            } while (uVar12 < *(uint * )(&stack0x00000030 + lVar16));
                        }
                        if (local_3920 != (longlong *) 0x0) {
                            pcVar6 = *(code * *)(*local_3920 + 0x10);
                            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194934;
                            (*pcVar6)();
                            local_3920 = (longlong *) 0x0;
                        }
                    }
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194941;
                    Ordinal_6(lVar20);
                }
            }
            if (lVar17 != 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194953;
                Ordinal_6(lVar17);
            }
            if (local_3900 != (longlong *) 0x0) {
                pcVar6 = *(code * *)(*local_3900 + 0x10);
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194962;
                (*pcVar6)();
                local_3900 = (longlong *) 0x0;
            }
            goto LAB_14019496c;
        }
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194985;
        CoUninitialize();
    }
    lVar20 = 0x200;
    local_1868.dwLength = 0x40;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x14019499c;
    BVar13 = GlobalMemoryStatusEx(&local_1868);
    if (BVar13 == 0) {
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401949c0;
        DVar14 = GetLastError();
        if (0 < (int) DVar14) {
            DVar14 = DVar14 & 0xffff | 0x80070000;
        }
    } else {
        *(int *) (param_1 + 0x60a) = (int) (local_1868.ullTotalPhys + 0xfffff >> 0x14);
    }
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401949e0;
    FUN_1407e4830(&local_3898, 0, 0x2030);
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401949f4;
    UVar15 = GetSystemDirectoryW(local_248, 0x104);
    if (UVar15 != 0) {
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194a21;
        iVar8 = FUN_14001b370(local_248 + UVar15, 0x104 - (ulonglong) UVar15, &DAT_140a43680, L"ddraw.dll");
        if (-1 < iVar8) {
            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194a32;
            pHVar18 = LoadLibraryW(local_248);
            if (pHVar18 != (HMODULE) 0x0) {
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194a4a;
                pFVar19 = GetProcAddress(pHVar18, "DirectDrawCreateEx");
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194a5d;
                pFVar22 = GetProcAddress(pHVar18, "DirectDrawEnumerateExA");
                if ((pFVar19 != (FARPROC) 0x0) && (pFVar22 != (FARPROC) 0x0)) {
                    local_3898 = 0;
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194a84;
                    local_1870 = pFVar19;
                    (*pFVar22)(&DAT_140193c80, &local_3898, 1);
                }
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194a8d;
                FreeLibrary(pHVar18);
            }
        }
    }
    if ((int) DVar14 < 0) goto LAB_140194fc1;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194aa9;
    UVar15 = GetSystemDirectoryW(local_248, 0x104);
    if (UVar15 == 0) goto LAB_140194fc1;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194ad7;
    iVar8 = FUN_14001b370(local_248 + UVar15, 0x104 - (ulonglong) UVar15, &DAT_140a43680, L"d3d9.dll");
    if (iVar8 < 0) goto LAB_140194fc1;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194aec;
    pHVar18 = LoadLibraryW(local_248);
    if (pHVar18 == (HMODULE) 0x0) goto LAB_140194fc1;
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194b08;
    pFVar19 = GetProcAddress(pHVar18, "Direct3DCreate9");
    if (pFVar19 != (FARPROC) 0x0) {
        uVar31 = 0x20;
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194b1a;
        plVar23 = (longlong * )(*pFVar19)(0x20);
        if (plVar23 != (longlong *) 0x0) {
            pcVar6 = *(code * *)(*plVar23 + 0x28);
            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194b3c;
            iVar8 = (*pcVar6)(plVar23, 0, 0);
            *(undefined4 * )(param_1 + 0xa0c) = local_12e0;
            *(undefined4 * )(param_1 + 0xa0e) = local_12dc;
            *(undefined4 * )(param_1 + 0xa10) = local_12d8;
            *(undefined4 * )(param_1 + 0xa12) = local_12d4;
            if (iVar8 < 0) {
                local_3918[0] = &PTR_LAB_140b5e648;
                local_3918[1] = (undefined **) 0x0;
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194b97;
                local_3908 = TlsGetValue(DAT_140c63720);
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194bab;
                TlsSetValue(DAT_140c63720, local_3918);
                *(undefined * **)(&stack0x00000038 + lVar16) = local_3918[0];
                local_3928 = 0x141d3df18;
                *(undefined * **)(&stack0x00000040 + lVar16) = local_3918[1];
                *(LPVOID * )(&stack0x00000048 + lVar16) = local_3908;
                *(undefined * *)(&stack0xfffffffffffffff8 + lVar16) = &stack0x00000038 + lVar16;
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194bf7;
                iVar8 = FUN_1401971e0(&DAT_140c8a1b8, 1);
                local_3918[0] = &PTR_LAB_140b5e648;
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194c0d;
                TlsSetValue(DAT_140c63720, local_3908);
                if (iVar8 != 0) {
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194c17;
                    DebugBreak();
                }
                param_1[0x60c] = 0;
            } else {
                psVar27 = param_1 + 0x60c;
                uVar33 = 0x200;
                pbVar29 = local_1508;
                if (psVar27 == (short *) 0x0) {
                    LAB_140194d67:
                    local_3918[0] = &PTR_LAB_140b5e648;
                    local_3918[1] = (undefined **) 0x0;
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194d84;
                    local_3908 = TlsGetValue(DAT_140c63720);
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194d98;
                    TlsSetValue(DAT_140c63720, local_3918);
                    *(undefined * **)(&stack0x00000038 + lVar16) = local_3918[0];
                    local_3928 = 0x141d3df00;
                    *(undefined * **)(&stack0x00000040 + lVar16) = local_3918[1];
                    *(LPVOID * )(&stack0x00000048 + lVar16) = local_3908;
                    *(undefined * *)(&stack0xfffffffffffffff8 + lVar16) = &stack0x00000038 + lVar16;
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194de6;
                    iVar8 = FUN_1401971e0(&DAT_140c8a1b4, 1);
                    local_3918[0] = &PTR_LAB_140b5e648;
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194e03;
                    TlsSetValue(DAT_140c63720, local_3908);
                    if (iVar8 != 0) {
                        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194e0d;
                        DebugBreak();
                    }
                    *psVar27 = 0;
                } else {
                    lVar17 = 0;
                    do {
                        bVar4 = *pbVar29;
                        if ((char) bVar4 < '\0') {
                            if (((1 < uVar33) && ((bVar4 & 0xe0) == 0xc0)) &&
                                (pbVar1 = pbVar29 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                                pbVar29 = pbVar29 + 2;
                                uVar24 = (short) (char) (bVar4 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                                uVar33 = uVar33 - 2;
                                goto LAB_140194d08;
                            }
                            if (((2 < uVar33) && ((bVar4 & 0xf0) == 0xe0)) &&
                                ((pbVar1 = pbVar29 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                                        (pbVar2 = pbVar29 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                                pbVar29 = pbVar29 + 3;
                                uVar24 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar4 << 6) << 6 |
                                         (short) (char) (*pbVar2 & 0x3f);
                                uVar33 = uVar33 - 3;
                                goto LAB_140194d08;
                            }
                            pbVar29 = pbVar29 + 1;
                            uVar33 = uVar33 - 1;
                        } else {
                            pbVar29 = pbVar29 + 1;
                            uVar24 = (ushort)(char)
                            bVar4;
                            uVar33 = uVar33 - 1;
                            LAB_140194d08:
                            if (lVar17 == 0x200) goto LAB_140194d67;
                            psVar27[lVar17] = uVar24;
                            lVar17 = lVar17 + 1;
                            if (uVar24 == 0) break;
                        }
                    } while (uVar33 != 0);
                }
                uVar33 = 0;
                do {
                    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194d3b;
                    iVar8 = FUN_14018e2c0(psVar27, local_12b8 + uVar33 * 0x40a);
                    if (iVar8 == 0) {
                        psVar27 = param_1 + 0x80c;
                        lVar17 = uVar33 * 0x814 - (longlong) psVar27;
                        *(uint * )(param_1 + 0xa14) = auStack2728[uVar33 * 0x205];
                        goto LAB_140194e42;
                    }
                    uVar12 = (int) uVar33 + 1;
                    uVar33 = (ulonglong) uVar12;
                } while (uVar12 < 2);
            }
            goto LAB_140194e75;
        }
    }
    goto LAB_140194fb8;
    while (true) {
        *psVar27 = sVar5;
        psVar27 = psVar27 + 1;
        lVar20 = lVar20 + -1;
        if (lVar20 == 0) break;
        LAB_140194e42:
        if ((lVar20 == -0x7ffffdfe) ||
            (sVar5 = *(short *) ((longlong) local_eb8 + lVar17 + (longlong) psVar27), sVar5 == 0)) {
            if (lVar20 != 0) goto LAB_140194e70;
            break;
        }
    }
    psVar27 = psVar27 + -1;
    LAB_140194e70:
    *psVar27 = 0;
    LAB_140194e75:
    uVar12 = local_3898;
    uVar33 = 0;
    if (*(int *) (param_1 + 0xa14) == 0) {
        pbVar29 = local_1308;
        uVar34 = uVar33;
        do {
            bVar4 = *pbVar29;
            if ((char) bVar4 < '\0') {
                if (((1 < uVar31) && ((bVar4 & 0xe0) == 0xc0)) &&
                    (pbVar1 = pbVar29 + 1, (*pbVar1 & 0xc0) == 0x80)) {
                    pbVar29 = pbVar29 + 2;
                    uVar24 = (short) (char) (bVar4 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar31 = uVar31 - 2;
                    goto LAB_140194f3c;
                }
                if (((2 < uVar31) && ((bVar4 & 0xf0) == 0xe0)) &&
                    ((pbVar1 = pbVar29 + 1, (*pbVar1 & 0xc0) == 0x80 &&
                                            (pbVar2 = pbVar29 + 2, (*pbVar2 & 0xc0) == 0x80)))) {
                    pbVar29 = pbVar29 + 3;
                    uVar24 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar4 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar31 = uVar31 - 3;
                    goto LAB_140194f3c;
                }
                pbVar29 = pbVar29 + 1;
                uVar31 = uVar31 - 1;
            } else {
                pbVar29 = pbVar29 + 1;
                uVar24 = (ushort)(char)
                bVar4;
                uVar31 = uVar31 - 1;
                LAB_140194f3c:
                if (uVar34 == 0x20) break;
                local_288[uVar34] = uVar24;
                uVar34 = uVar34 + 1;
                if (uVar24 == 0) break;
            }
        } while (uVar31 != 0);
        if (local_3898 != 0) {
            do {
                *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194f8c;
                iVar8 = FUN_14018e2c0(local_288, local_3894 + uVar33 * 0x404);
                if (iVar8 == 0) {
                    *(undefined4 * )(param_1 + 0xa14) = auStack13460[uVar33 * 0x101];
                    break;
                }
                uVar25 = (int) uVar33 + 1;
                uVar33 = (ulonglong) uVar25;
            } while (uVar25 < uVar12);
        }
    }
    pcVar6 = *(code * *)(*plVar23 + 0x10);
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194fb8;
    (*pcVar6)(plVar23);
    LAB_140194fb8:
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140194fc1;
    FreeLibrary(pHVar18);
    LAB_140194fc1:
    if (*(int *) (param_1 + 0x608) == 0) {
        *(DWORD * )(param_1 + 0x608) = (DWORD) local_38b0;
    }
    if (param_1[0x60c] != 0) {
        ppuVar32 = &PTR_DAT_140b5e650;
        uVar31 = 0;
        do {
            psVar27 = (short *) *ppuVar32;
            sVar5 = *psVar27;
            uVar33 = 0;
            while (sVar5 != 0) {
                uVar33 = uVar33 + 1;
                sVar5 = psVar27[uVar33];
            }
            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140195016;
            iVar8 = FUN_14018e3e0(psVar27, param_1 + 0x60c);
            if (iVar8 == 0) goto LAB_1401950ca;
            uVar12 = (int) uVar31 + 1;
            uVar31 = (ulonglong) uVar12;
            ppuVar32 = (undefined * *)((short **) ppuVar32 + 1);
        } while (uVar12 < 0xb);
        local_3918[1] = (undefined **) 0x0;
        local_3918[0] = &PTR_LAB_140b5e648;
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140195044;
        local_3908 = TlsGetValue(DAT_140c63720);
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x140195058;
        TlsSetValue(DAT_140c63720, local_3918);
        *(undefined * **)(&stack0x00000038 + lVar16) = local_3918[0];
        local_3928 = 0x141d3e030;
        *(undefined * **)(&stack0x00000040 + lVar16) = local_3918[1];
        *(LPVOID * )(&stack0x00000048 + lVar16) = local_3908;
        *(undefined * *)(&stack0xfffffffffffffff8 + lVar16) = &stack0x00000038 + lVar16;
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401950aa;
        iVar8 = FUN_1401971e0(&DAT_140c8a1b0, 1, &local_3928, param_1 + 0x60c);
        local_3918[0] = &PTR_LAB_140b5e648;
        *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401950c0;
        TlsSetValue(DAT_140c63720, local_3908);
        if (iVar8 != 0) {
            *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401950ca;
            DebugBreak();
        }
    }
    LAB_1401950ca:
    *(undefined8 * )((longlong) & uStack48 + lVar16) = 0x1401950db;
    FUN_1407db4f0(local_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar16));
    return;
}


HRESULT FUN_140195100(LPCWSTR param_1) {
    HRESULT HVar1;
    HINSTANCE pHVar2;

    if (param_1 != (LPCWSTR) 0x0) {
        HVar1 = CoInitialize((LPVOID) 0x0);
        if (-1 < HVar1) {
            HVar1 = 0;
            pHVar2 = ShellExecuteW((HWND) 0x0, L"open", param_1, (LPCWSTR) 0x0, (LPCWSTR) 0x0, 1);
            CoUninitialize();
            if ((int) pHVar2 < 0x21) {
                HVar1 = -0x7fffbffb;
            }
        }
        return HVar1;
    }
    return -0x7ff8ffa9;
}


undefined8 *FUN_140195170(undefined8 *param_1) {
    undefined4 uVar1;
    undefined *puVar2;
    longlong *plVar3;
    int iVar4;

    *param_1 = &PTR_LAB_140b5e6a8;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    iVar4 = 5;
    plVar3 = param_1 + 6;
    do {
        puVar2 = (undefined *) FUN_14018b280(0x40);
        iVar4 = iVar4 + -1;
        plVar3[1] = 0;
        *plVar3 = (longlong) puVar2;
        *puVar2 = 0;
        *(undefined8 * )(*plVar3 + 8) = 0;
        *(longlong * )(*plVar3 + 0x10) = *plVar3;
        *(longlong * )(*plVar3 + 0x18) = *plVar3;
        plVar3 = plVar3 + 4;
    } while (-1 < iVar4);
    uVar1 = FUN_14018cdf0();
    *(undefined4 * )(param_1 + 0x1d) = uVar1;
    *(undefined8 * )((longlong) param_1 + 0xec) = 0;
    *(undefined8 * )((longlong) param_1 + 0xf4) = 0;
    *(undefined8 * )((longlong) param_1 + 0xfc) = 0;
    FUN_1407e4830(param_1 + 0x21, 0, 0x868);
    return param_1;
}


void FUN_140195230(undefined8 *param_1) {
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = 5;
    *param_1 = &PTR_LAB_140b5e6a8;
    plVar2 = param_1 + 0x1e;
    do {
        plVar1 = plVar2 + -4;
        if (plVar2[-3] != 0) {
            FUN_1401961e0(plVar2 + -5, *(undefined8 * )(*plVar1 + 8));
            *(longlong * )(*plVar1 + 0x10) = *plVar1;
            *(undefined8 * )(*plVar1 + 8) = 0;
            *(longlong * )(*plVar1 + 0x18) = *plVar1;
            plVar2[-3] = 0;
        }
        FUN_14018b900(*plVar1, 0);
        iVar3 = iVar3 + -1;
        plVar2 = plVar1;
    } while (-1 < iVar3);
    if (param_1[4] != 0) {
        CloseHandle((HANDLE) param_1[4]);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401952d0(undefined8 param_1, uint *param_2) {
    ulonglong *puVar1;
    longlong *plVar2;
    int *piVar3;
    undefined8 *puVar4;
    uint *puVar5;
    DWORD DVar6;
    undefined4 uVar7;
    int iVar8;
    longlong lVar9;
    longlong **pplVar10;
    longlong lVar11;
    HANDLE pvVar12;
    longlong **pplVar13;
    ulonglong uVar14;
    uint uVar15;
    longlong **pplVar16;
    longlong lVar17;
    longlong lVar18;
    longlong lVar19;
    longlong lVar20;
    longlong **pplVar21;
    undefined auStack280[32];
    longlong local_f8;
    undefined **local_f0;
    undefined8 local_e8;
    LPVOID local_e0;
    longlong local_d8;
    longlong local_d0;
    longlong local_c8;
    uint *local_c0;
    longlong local_b8;
    undefined8 local_b0;
    longlong local_a8[2];
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    longlong local_78;
    longlong local_70[7];
    ulonglong local_38;

    puVar4 = DAT_140c63728;
    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack280;
    local_c0 = param_2;
    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c4fb0(0);
        } else {
            _DAT_140c796cc = 1;
        }
    }
    QueryPerformanceCounter(local_a8);
    local_d8 = local_a8[0] - _DAT_140c87988;
    if ((DAT_140c8e100 & 1) == 0) {
        DAT_140c8e100 = DAT_140c8e100 | 1;
        FUN_1407dd89c();
    }
    lVar11 = DAT_140c63760;
    pplVar21 = (longlong **) 0x0;
    if (DAT_140c8e108 == (longlong **) 0x0) {
        DVar6 = GetCurrentThreadId();
        pplVar10 = pplVar21;
        if (*(DWORD * )(lVar11 + 0x10) == DVar6) {
            *(longlong * )(lVar11 + 0x18) = *(longlong * )(lVar11 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar11 + 0x18);
                uVar14 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar14 == 0) * (*puVar1 ^ 1);
                if (uVar14 == 0) {
                    *(DWORD * )(lVar11 + 0x10) = DVar6;
                    goto LAB_1401953d6;
                }
                pplVar10 = (longlong * *)((longlong) pplVar10 + 1);
            } while (pplVar10 < &DAT_00000400);
            FUN_14019fb60();
        }
        LAB_1401953d6:
        pplVar10 = DAT_140c8e108;
        if ((DAT_140c8e108 == (longlong **) 0x0) &&
            (lVar9 = FUN_14018b280(), pplVar10 = pplVar21, lVar9 != 0)) {
            pplVar10 = (longlong **) FUN_14019e5d0();
        }
        DAT_140c8e108 = pplVar10;
        if (*(ulonglong * )(lVar11 + 0x18) < 2) {
            *(undefined4 * )(lVar11 + 0x10) = 0;
            *(undefined8 * )(lVar11 + 0x18) = 0;
            if (*(longlong * )(lVar11 + 0x20) != 0) {
                if (*(longlong * )(lVar11 + 0x28) == 0) {
                    pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar11 + 0x28);
                    uVar14 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar14 == 0) * (*puVar1 ^ (ulonglong) pvVar12);
                    if (uVar14 != 0) {
                        CloseHandle(pvVar12);
                    }
                }
                SetEvent(*(HANDLE * )(lVar11 + 0x28));
            }
        } else {
            *(longlong * )(lVar11 + 0x18) = *(longlong * )(lVar11 + 0x18) + -1;
        }
        pplVar10 = DAT_140c8e108;
        if (DAT_140c8e108 == (longlong **) 0x0) goto LAB_140195474;
    }
    pplVar10 = DAT_140c8e108;
    FUN_14019e8f0();
    LAB_140195474:
    uVar7 = FUN_14018cdf0();
    *(undefined4 * )(puVar4 + 0x1d) = uVar7;
    lVar11 = 6;
    do {
        lVar9 = lVar11 + -1;
        local_70[lVar11] = lVar9;
        lVar11 = lVar9;
    } while (lVar9 != 0);
    local_70[0] = 6;
    lVar11 = local_d8;
    do {
        do {
            do {
                if (_DAT_140c796cc == 0) {
                    if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
                        if (DAT_140c796c8 == 0) {
                            lVar9 = FUN_1401c4bb0();
                            plVar2 = (longlong * )(lVar9 * 0x38 + 8 + DAT_140c78598);
                            *plVar2 = *plVar2 + 1;
                            plVar2 = (longlong * )(DAT_140c785a0 + lVar9 * 0x10);
                            *plVar2 = *plVar2 + 1;
                        }
                    } else {
                        _DAT_140c796cc = 1;
                    }
                }
                DVar6 = GetCurrentThreadId();
                pplVar13 = pplVar21;
                if (*(DWORD * )(puVar4 + 1) == DVar6) {
                    puVar4[2] = puVar4[2] + 1;
                } else {
                    do {
                        LOCK();
                        puVar1 = puVar4 + 2;
                        uVar14 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar14 == 0) * (*puVar1 ^ 1);
                        if (uVar14 == 0) {
                            *(DWORD * )(puVar4 + 1) = DVar6;
                            goto LAB_140195547;
                        }
                        pplVar13 = (longlong * *)((longlong) pplVar13 + 1);
                    } while (pplVar13 < &DAT_00000400);
                    FUN_14019fb60(puVar4 + 1);
                }
                LAB_140195547:
                lVar19 = 6;
                local_f8 = 6;
                lVar20 = 6;
                lVar9 = local_70[6];
                if (local_70[6] == 6) {
                    LAB_14019583f:
                    if ((ulonglong) puVar4[2] < 2) {
                        *(undefined4 * )(puVar4 + 1) = 0;
                        puVar4[2] = 0;
                        if (puVar4[3] != 0) {
                            if (puVar4[4] == 0) {
                                pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                                LOCK();
                                puVar1 = puVar4 + 4;
                                uVar14 = *puVar1;
                                *puVar1 = *puVar1 ^ (ulonglong)(uVar14 == 0) * (*puVar1 ^ (ulonglong) pvVar12);
                                if (uVar14 != 0) {
                                    CloseHandle(pvVar12);
                                }
                            }
                            SetEvent((HANDLE) puVar4[4]);
                        }
                    } else {
                        puVar4[2] = puVar4[2] + -1;
                    }
                    goto LAB_140195896;
                }
                do {
                    lVar18 = lVar9;
                    lVar17 = *(longlong * )(puVar4[lVar18 * 4 + 6] + 0x10);
                    if (lVar17 == puVar4[lVar18 * 4 + 6]) {
                        LAB_1401955d7:
                        *(undefined8 * )(&DAT_ffffffffffffff90 + (longlong)(&stack0x00000000 + lVar20 * 8)) =
                                *(undefined8 * )(&DAT_ffffffffffffff90 + (longlong)(&stack0x00000000 + lVar18 * 8));
                        lVar17 = lVar11;
                    } else {
                        if (0 < *(int *) (lVar17 + 0x20) - *(int *) (puVar4 + 0x1d)) goto LAB_1401955d7;
                        if (*(longlong * )(lVar17 + 0x28) == lVar17 + 0x30) {
                            local_c8 = lVar17;
                            local_78 = lVar17;
                            FUN_140196510(puVar4 + lVar18 * 4 + 5);
                            lVar17 = lVar11;
                            lVar18 = lVar20;
                            lVar19 = local_f8;
                        } else {
                            if ((*(int *) (lVar17 + 0x20) == *(int *) (puVar4 + 0x1d)) &&
                                (lVar19 = local_f8, *(int *) (*(longlong * )(lVar17 + 0x28) + -8) == 0))
                                goto LAB_1401955d7;
                            piVar3 = (int *) ((longlong) puVar4 + lVar18 * 4 + 0xec);
                            *piVar3 = *piVar3 + 1;
                            uVar15 = *(uint * )((longlong) puVar4 + lVar18 * 4 + 0xec) %
                                     (*(int *) (&DAT_140a43be8 + lVar18 * 4) + 1U);
                            *(uint * )((longlong) puVar4 + lVar18 * 4 + 0xec) = uVar15;
                            lVar19 = lVar18;
                            local_f8 = lVar18;
                            if (uVar15 != 0) {
                                pplVar13 = *(longlong * **)(lVar17 + 0x28);
                                pplVar16 = pplVar21;
                                if (pplVar13 != (longlong * *)(lVar17 + 0x30)) {
                                    if ((longlong * *) * pplVar13 != (longlong **) 0x0) {
                                        **pplVar13 = (longlong) pplVar13[1];
                                    }
                                    if ((longlong **) pplVar13[1] != (longlong **) 0x0) {
                                        *pplVar13[1] = (longlong) * pplVar13;
                                    }
                                    *pplVar13 = (longlong *) 0x0;
                                    pplVar13[1] = (longlong *) 0x0;
                                    pplVar16 = pplVar13;
                                }
                                lVar17 = lVar11;
                                pplVar13 = pplVar16 + -2;
                                break;
                            }
                        }
                    }
                    lVar11 = lVar17;
                    lVar9 = *(longlong * )(&DAT_ffffffffffffff90 + (longlong)(&stack0x00000000 + lVar18 * 8));
                    pplVar13 = pplVar21;
                    lVar20 = lVar18;
                } while (*(longlong * )(&DAT_ffffffffffffff90 + (longlong)(&stack0x00000000 + lVar18 * 8)) !=
                         6);
                if (lVar19 == 6) goto LAB_14019583f;
                if (pplVar13 == (longlong **) 0x0) {
                    pplVar16 = *(longlong * **)(lVar17 + 0x28);
                    pplVar13 = pplVar21;
                    if (pplVar16 != (longlong * *)(lVar17 + 0x30)) {
                        if ((longlong * *) * pplVar16 != (longlong **) 0x0) {
                            **pplVar16 = (longlong) pplVar16[1];
                        }
                        if ((longlong **) pplVar16[1] != (longlong **) 0x0) {
                            *pplVar16[1] = (longlong) * pplVar16;
                        }
                        *pplVar16 = (longlong *) 0x0;
                        pplVar16[1] = (longlong *) 0x0;
                        pplVar13 = pplVar16;
                    }
                    pplVar13 = pplVar13 + -2;
                }
                puVar4[(longlong) * (int *) (pplVar13 + 8) + 0x22] =
                        puVar4[(longlong) * (int *) (pplVar13 + 8) + 0x22] + -1;
                puVar4[(longlong) * (int *) ((longlong) pplVar13 + 0x44) + 0x28] =
                        puVar4[(longlong) * (int *) ((longlong) pplVar13 + 0x44) + 0x28] + -1;
                if ((ulonglong) puVar4[2] < 2) {
                    *(undefined4 * )(puVar4 + 1) = 0;
                    puVar4[2] = 0;
                    if (puVar4[3] != 0) {
                        if (puVar4[4] == 0) {
                            pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar1 = puVar4 + 4;
                            uVar14 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar14 == 0) * (*puVar1 ^ (ulonglong) pvVar12);
                            if (uVar14 != 0) {
                                CloseHandle(pvVar12);
                            }
                        }
                        SetEvent((HANDLE) puVar4[4]);
                    }
                } else {
                    puVar4[2] = puVar4[2] + -1;
                }
                if (*(int *) pplVar13 == 0x544e5645) {
                    (**(code * *) * puVar4)();
                } else {
                    local_e8 = 0;
                    local_f0 = &PTR_LAB_140b5e648;
                    local_e0 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_f0);
                    local_98 = local_f0;
                    local_b0 = 0x141d3e1d8;
                    local_88 = local_e0;
                    local_90 = local_e8;
                    iVar8 = FUN_140196f30(&DAT_140c8a1d0, 1, &local_b0);
                    local_f0 = &PTR_LAB_140b5e648;
                    TlsSetValue(DAT_140c63720, local_e0);
                    if (iVar8 != 0) {
                        DebugBreak();
                    }
                }
                puVar5 = local_c0;
                lVar11 = lVar17;
            } while (local_70[6] == 5);
            if (*local_c0 == 0) goto LAB_140195896;
        } while ((int) *local_c0 < 0);
        QueryPerformanceCounter(&local_d0);
        uVar14 = (local_d0 - *(longlong * )(puVar5 + 2)) - _DAT_140c87988;
        if (*puVar5 * DAT_140c636b0 <= uVar14) {
            *puVar5 = 0;
            break;
        }
    } while ((int) ((*puVar5 * DAT_140c636b0 - uVar14) / DAT_140c636b0) != -1);
    LAB_140195896:
    if (pplVar10 != (longlong **) 0x0) {
        FUN_14019ea00(pplVar10);
    }
    QueryPerformanceCounter(&local_b8);
    if (_DAT_140c796cc == 0) {
        if ((uint)(DAT_140c636a8 - _DAT_140c785b0) < 0x7531) {
            FUN_1401c5100(L"H Event_Poll", 0, (local_b8 - local_d8) - _DAT_140c87988, 1);
        } else {
            _DAT_140c796cc = 1;
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack280);
    return;
}


void FUN_140195960(int *param_1, int param_2, int *param_3, int param_4) {
    undefined8 *puVar1;
    undefined8 *puVar2;
    ulonglong *puVar3;
    longlong *plVar4;
    longlong *plVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong **pplVar9;
    ulonglong uVar10;
    int iVar11;
    longlong lVar12;
    HANDLE hObject;
    int iVar13;
    undefined4 *local_res8;
    undefined **local_d8;
    undefined8 local_d0;
    LPVOID local_c8;
    undefined **local_c0;
    undefined8 local_b8;
    LPVOID local_b0;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    if (*param_1 == 0x544e5645) {
        if ((*(longlong * )(param_3 + 2) == 0) && (*(longlong * )(param_3 + 4) == 0)) {
            local_d8 = &PTR_LAB_140b5e648;
            local_d0 = 0;
            local_c8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_d8);
            local_58 = local_d8;
            local_88 = 0x141d3e128;
            local_48 = local_c8;
            local_50 = local_d0;
            iVar11 = FUN_140196f30(&DAT_140c8a1c8, 1, &local_88, &local_58);
            local_d8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_c8);
            if (iVar11 != 0) {
                DebugBreak();
            }
        } else if (DAT_140c63728 == 0) {
            local_c0 = &PTR_LAB_140b5e648;
            local_b8 = 0;
            local_b0 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_c0);
            local_38 = local_c0;
            local_80 = 0x141d3e108;
            local_28 = local_b0;
            local_30 = local_b8;
            iVar11 = FUN_140196f30(&DAT_140c8a1c4, 1, &local_80, &local_38);
            local_c0 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_b0);
            if (iVar11 != 0) {
                DebugBreak();
            }
        } else {
            FUN_14003d8f0(&local_res8);
            plVar5 = (longlong * )(param_1 + 4);
            if (*(longlong * )(param_1 + 4) != 0) {
                plVar4 = (longlong * )(DAT_140c63728 + 0x110 + (longlong) param_1[0x10] * 8);
                *plVar4 = *plVar4 + -1;
                plVar4 = (longlong * )(DAT_140c63728 + 0x140 + (longlong) param_1[0x11] * 8);
                *plVar4 = *plVar4 + -1;
            }
            lVar12 = DAT_140c63728;
            param_1[8] = *param_3;
            *(undefined8 * )(param_1 + 0xc) = *(undefined8 * )(param_3 + 4);
            *(undefined8 * )(param_1 + 10) = *(undefined8 * )(param_3 + 2);
            *(undefined8 * )(param_1 + 0xe) = *(undefined8 * )(param_3 + 6);
            param_1[0x10] = param_4;
            iVar11 = 0;
            if ((-1 < param_2) &&
                (lVar7 = *(longlong * )((longlong) param_4 * 0x20 + 0x30 + lVar12),
                 lVar8 = *(longlong * )(lVar7 + 0x10), iVar11 = param_2, lVar8 != lVar7)) {
                iVar6 = *(int *) (lVar8 + 0x20);
                iVar13 = iVar6 - *(int *) (lVar12 + 0xe8);
                if ((iVar13 < 0) && ((*(int *) (lVar12 + 0xe8) - iVar6) + param_2 < 0)) {
                    iVar11 = iVar13 + 0x7fffffff;
                }
            }
            if ((undefined8 * ) * plVar5 != (undefined8 *) 0x0) {
                *(undefined8 * ) * plVar5 = *(undefined8 * )(param_1 + 6);
                lVar12 = DAT_140c63728;
            }
            puVar1 = (undefined8 * )(param_1 + 6);
            if (*(longlong * *)(param_1 + 6) != (longlong *) 0x0) {
                **(longlong * *)(param_1 + 6) = *plVar5;
                lVar12 = DAT_140c63728;
            }
            *plVar5 = 0;
            *puVar1 = 0;
            iVar6 = *(int *) (lVar12 + 0xe8);
            param_1[2] = iVar11;
            param_1[1] = iVar6 + iVar11;
            lVar12 = FUN_140196090((longlong) param_1[0x10] * 0x20 + 0x28 + lVar12);
            puVar2 = (undefined8 * )(lVar12 + 8);
            if (*plVar5 == 0) {
                pplVar9 = (longlong * *) * puVar2;
                *puVar1 = puVar2;
                *plVar5 = (longlong) pplVar9;
                if (pplVar9 != (longlong **) 0x0) {
                    *pplVar9 = plVar5;
                }
                *puVar2 = puVar1;
            }
            plVar5 = (longlong * )(DAT_140c63728 + 0x110 + (longlong) param_1[0x10] * 8);
            *plVar5 = *plVar5 + 1;
            plVar5 = (longlong * )(DAT_140c63728 + 0x140 + (longlong) param_1[0x11] * 8);
            *plVar5 = *plVar5 + 1;
            plVar5 = (longlong * )(DAT_140c63728 + 0x558 + (longlong) param_1[0x11] * 8);
            *plVar5 = *plVar5 + 1;
            if (*(ulonglong * )(local_res8 + 2) < 2) {
                *local_res8 = 0;
                *(undefined8 * )(local_res8 + 2) = 0;
                if (*(longlong * )(local_res8 + 4) != 0) {
                    if (*(longlong * )(local_res8 + 6) == 0) {
                        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar3 = (ulonglong * )(local_res8 + 6);
                        uVar10 = *puVar3;
                        *puVar3 = *puVar3 ^ (ulonglong)(uVar10 == 0) * (*puVar3 ^ (ulonglong) hObject);
                        if (uVar10 != 0) {
                            CloseHandle(hObject);
                        }
                    }
                    SetEvent(*(HANDLE * )(local_res8 + 6));
                }
            } else {
                *(longlong * )(local_res8 + 2) = *(longlong * )(local_res8 + 2) + -1;
            }
        }
    } else {
        local_a8 = &PTR_LAB_140b5e648;
        local_a0 = 0;
        local_98 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a8);
        local_78 = local_a8;
        local_90 = 0x141d3e1b0;
        local_68 = local_98;
        local_70 = local_a0;
        iVar11 = FUN_140196f30(&DAT_140c8a1cc, 1, &local_90, &local_78);
        local_a8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_98);
        if (iVar11 != 0) {
            DebugBreak();
        }
    }
    return;
}


void FUN_140195d70(int *param_1) {
    ulonglong *puVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;
    int iVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar4 = DAT_140c63728;
    if (*param_1 == 0x544e5645) {
        if (DAT_140c63728 != 0) {
            DVar6 = GetCurrentThreadId();
            uVar7 = 0;
            if (*(DWORD * )(lVar4 + 8) == DVar6) {
                *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + 1;
            } else {
                do {
                    LOCK();
                    puVar1 = (ulonglong * )(lVar4 + 0x10);
                    uVar3 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                    if (uVar3 == 0) {
                        *(DWORD * )(lVar4 + 8) = DVar6;
                        goto LAB_140195e9f;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 0x400);
                FUN_14019fb60(lVar4 + 8, DVar6);
            }
            LAB_140195e9f:
            if (*(longlong * )(param_1 + 4) != 0) {
                plVar2 = (longlong * )(DAT_140c63728 + 0x110 + (longlong) param_1[0x10] * 8);
                *plVar2 = *plVar2 + -1;
                plVar2 = (longlong * )(DAT_140c63728 + 0x140 + (longlong) param_1[0x11] * 8);
                *plVar2 = *plVar2 + -1;
                if (*(undefined8 * *)(param_1 + 4) != (undefined8 *) 0x0) {
                    **(undefined8 * *)(param_1 + 4) = *(undefined8 * )(param_1 + 6);
                }
                if (*(undefined8 * *)(param_1 + 6) != (undefined8 *) 0x0) {
                    **(undefined8 * *)(param_1 + 6) = *(undefined8 * )(param_1 + 4);
                }
                *(undefined8 * )(param_1 + 4) = 0;
                *(undefined8 * )(param_1 + 6) = 0;
            }
            if (1 < *(ulonglong * )(lVar4 + 0x10)) {
                *(longlong * )(lVar4 + 0x10) = *(longlong * )(lVar4 + 0x10) + -1;
                return;
            }
            *(undefined4 * )(lVar4 + 8) = 0;
            *(undefined8 * )(lVar4 + 0x10) = 0;
            if (*(longlong * )(lVar4 + 0x18) != 0) {
                if (*(longlong * )(lVar4 + 0x20) == 0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar4 + 0x20);
                    uVar7 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar7 == 0) * (*puVar1 ^ (ulonglong) hObject);
                    if (uVar7 != 0) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(*(HANDLE * )(lVar4 + 0x20));
            }
        }
    } else {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141d3e148;
        local_18 = local_38;
        local_20 = local_40;
        iVar5 = FUN_140196f30(&DAT_140c8a1c0, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar5 != 0) {
            // WARNING: Could not recover jumptable at 0x000140195e3e. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    return;
}


int FUN_140195f70(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar2 = DAT_140c63728;
    if (DAT_140c63728 == 0) {
        return 0;
    }
    pDVar5 = (DWORD * )(DAT_140c63728 + 8);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar2 + 0x10);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar1 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar1 == 0) * (*puVar6 ^ 1);
            if (uVar1 == 0) {
                *pDVar5 = DVar3;
                goto LAB_140195ffa;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5);
    }
    LAB_140195ffa:
    iVar7 = *(int *) (param_1 + 4) - *(int *) (DAT_140c63728 + 0xe8);
    if (iVar7 < 0) {
        iVar7 = 0;
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar2 + 0x18) != 0) {
            if (*(longlong * )(lVar2 + 0x20) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar2 + 0x20);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x20));
        }
        return iVar7;
    }
    *puVar6 = *puVar6 - 1;
    return iVar7;
}


longlong FUN_140196090(longlong param_1, int *param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    longlong local_res18;
    undefined8 ****local_48;
    longlong ****local_40;
    longlong ***local_38;
    int local_30[2];
    undefined8 ****local_28;
    undefined8 ****local_20;
    undefined8 local_18;

    lVar1 = *(longlong * )(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong * )(lVar1 + 8) != 0) {
        lVar2 = *(longlong * )(lVar1 + 8);
        do {
            if (*(int *) (lVar2 + 0x20) - *param_2 < 0) {
                lVar3 = *(longlong * )(lVar2 + 0x18);
            } else {
                lVar3 = *(longlong * )(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((local_res8 != lVar1) && (-1 < *param_2 - *(int *) (local_res8 + 0x20))) {
        return local_res8 + 0x28;
    }
    local_40 = (longlong * ***) & local_48;
    local_48 = &local_40;
    local_30[0] = *param_2;
    local_20 = &local_28;
    local_28 = &local_20;
    local_38 = (longlong ***) 0x0;
    local_18 = 0;
    FUN_1401962d0(param_1, &local_res18, &local_res8, local_30);
    FUN_140196890(&local_28);
    while (local_48 != (undefined8 ****) 0x0) {
        if (*local_48 != (undefined8 ***) 0x0) {
            **local_48 = local_48[1];
        }
        if (local_48[1] != (undefined8 ***) 0x0) {
            *local_48[1] = *local_48;
        }
        *local_48 = (undefined8 ***) 0x0;
        local_48[1] = (undefined8 ***) 0x0;
    }
    if (local_40 != (longlong ****) 0x0) {
        *local_40 = local_38;
    }
    if (local_38 != (longlong ***) 0x0) {
        *local_38 = (longlong **) local_40;
    }
    local_40 = (longlong ****) 0x0;
    local_38 = (longlong ***) 0x0;
    if (local_48 != (undefined8 ****) 0x0) {
        FUN_1401a4a00(&local_48);
    }
    return local_res18 + 0x28;
}


void FUN_1401961e0(undefined8 param_1, longlong param_2) {
    longlong *plVar1;
    longlong lVar2;

    if (param_2 != 0) {
        do {
            FUN_1401961e0(param_1, *(undefined8 * )(param_2 + 0x18));
            lVar2 = *(longlong * )(param_2 + 0x10);
            plVar1 = *(longlong * *)(param_2 + 0x28);
            while (plVar1 != (longlong *) 0x0) {
                if ((longlong * ) * plVar1 != (longlong *) 0x0) {
                    *(longlong * ) * plVar1 = plVar1[1];
                }
                if ((longlong *) plVar1[1] != (longlong *) 0x0) {
                    *(longlong *) plVar1[1] = *plVar1;
                }
                *plVar1 = 0;
                plVar1[1] = 0;
                plVar1 = *(longlong * *)(param_2 + 0x28);
            }
            if (*(undefined8 * *)(param_2 + 0x30) != (undefined8 *) 0x0) {
                **(undefined8 * *)(param_2 + 0x30) = *(undefined8 * )(param_2 + 0x38);
            }
            if (*(undefined8 * *)(param_2 + 0x38) != (undefined8 *) 0x0) {
                **(undefined8 * *)(param_2 + 0x38) = *(undefined8 * )(param_2 + 0x30);
            }
            *(undefined8 * )(param_2 + 0x30) = 0;
            *(undefined8 * )(param_2 + 0x38) = 0;
            if (*(longlong * )(param_2 + 0x28) != 0) {
                FUN_1401a4a00(param_2 + 0x28);
            }
            FUN_14018b900(param_2, 0);
            param_2 = lVar2;
        } while (lVar2 != 0);
    }
    return;
}


longlong *FUN_1401962d0(longlong param_1, longlong *param_2, char **param_3, int *param_4) {
    longlong **pplVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    bool bVar8;
    undefined local_28[16];

    pcVar2 = *param_3;
    pcVar3 = *(char **) (param_1 + 8);
    if (pcVar2 == *(char **) (pcVar3 + 0x10)) {
        if ((*(longlong * )(param_1 + 0x10) != 0) && (*param_4 - *(int *) (pcVar2 + 0x20) < 0)) {
            FUN_140196620(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    } else {
        if (pcVar2 == pcVar3) {
            pcVar2 = *(char **) (pcVar3 + 0x18);
            if (*(int *) (pcVar2 + 0x20) - *param_4 < 0) {
                if ((pcVar2 == pcVar3) || (*param_4 - *(int *) (pcVar2 + 0x20) < 0)) {
                    lVar5 = FUN_14018b280(0x40);
                    if ((int *) (lVar5 + 0x20) != (int *) 0x0) {
                        puVar6 = (undefined8 * )(lVar5 + 0x28);
                        *(int *) (lVar5 + 0x20) = *param_4;
                        *puVar6 = 0;
                        *(undefined8 * )(lVar5 + 0x38) = 0;
                        pplVar1 = (longlong * *)(lVar5 + 0x38);
                        *(undefined8 * )(lVar5 + 0x30) = puVar6;
                        *pplVar1 = (longlong * ) * puVar6;
                        *puVar6 = (undefined8 * )(lVar5 + 0x30);
                        if (*pplVar1 != (longlong *) 0x0) {
                            **pplVar1 = (longlong) pplVar1;
                        }
                    }
                    *(longlong * )(pcVar2 + 0x10) = lVar5;
                    pcVar3 = *(char **) (param_1 + 8);
                    if (pcVar2 == pcVar3) {
                        *(longlong * )(pcVar3 + 8) = lVar5;
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar5;
                    } else if (pcVar2 == *(char **) (pcVar3 + 0x10)) {
                        *(longlong * )(pcVar3 + 0x10) = lVar5;
                    }
                } else {
                    lVar5 = FUN_140196830(pcVar3, param_4);
                    *(longlong * )(pcVar2 + 0x18) = lVar5;
                    if (pcVar2 == *(char **) (*(longlong * )(param_1 + 8) + 0x18)) {
                        *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **) (lVar5 + 8) = pcVar2;
                *(undefined8 * )(lVar5 + 0x10) = 0;
                *(undefined8 * )(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5, *(longlong * )(param_1 + 8) + 8);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
                *param_2 = lVar5;
                return param_2;
            }
            plVar4 = (longlong *) FUN_140196730(param_1, local_28, param_4);
            *param_2 = *plVar4;
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **) (*(longlong * )(pcVar2 + 8) + 8) == pcVar2)) {
            lVar5 = *(longlong * )(pcVar2 + 0x18);
        } else {
            lVar5 = *(longlong * )(pcVar2 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong * )(pcVar2 + 8);
                lVar7 = lVar5;
                if (pcVar2 == *(char **) (lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong * )(lVar7 + 8);
                        bVar8 = lVar7 == *(longlong * )(lVar5 + 0x10);
                        lVar7 = lVar5;
                    } while (bVar8);
                }
            } else {
                for (lVar7 = *(longlong * )(lVar5 + 0x18); lVar7 != 0; lVar7 = *(longlong * )(lVar7 + 0x18)) {
                    lVar5 = lVar7;
                }
            }
        }
        if ((*(int *) (lVar5 + 0x20) - *param_4 < 0) && (*param_4 - *(int *) (pcVar2 + 0x20) < 0)) {
            if (*(longlong * )(lVar5 + 0x18) == 0) {
                FUN_140196620(param_1, param_2, 0, lVar5, param_4);
                return param_2;
            }
            FUN_140196620(param_1, param_2, pcVar2, pcVar2, param_4);
            return param_2;
        }
    }
    plVar4 = (longlong *) FUN_140196730(param_1, local_28, param_4);
    *param_2 = *plVar4;
    return param_2;
}


void FUN_140196510(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a1bc, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x0001401965d5. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        lVar2 = FUN_140007db0(*param_2, lVar2 + 8, lVar2 + 0x10, lVar2 + 0x18);
        FUN_140196890(lVar2 + 0x28);
        FUN_14018b900(lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


longlong *
FUN_140196620(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, int *param_5) {
    longlong **pplVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;

    if (((param_4 == *(longlong * )(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 - *(int *) (param_4 + 0x20) < 0)) {
        lVar3 = FUN_14018b280(0x40);
        if ((int *) (lVar3 + 0x20) != (int *) 0x0) {
            puVar4 = (undefined8 * )(lVar3 + 0x28);
            *(int *) (lVar3 + 0x20) = *param_5;
            *puVar4 = 0;
            *(undefined8 * )(lVar3 + 0x38) = 0;
            pplVar1 = (longlong * *)(lVar3 + 0x38);
            *(undefined8 * )(lVar3 + 0x30) = puVar4;
            *pplVar1 = (longlong * ) * puVar4;
            *puVar4 = (undefined8 * )(lVar3 + 0x30);
            if (*pplVar1 != (longlong *) 0x0) {
                **pplVar1 = (longlong) pplVar1;
            }
        }
        *(longlong * )(param_4 + 0x10) = lVar3;
        lVar2 = *(longlong * )(param_1 + 8);
        if (param_4 == lVar2) {
            *(longlong * )(lVar2 + 8) = lVar3;
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
        } else if (param_4 == *(longlong * )(lVar2 + 0x10)) {
            *(longlong * )(lVar2 + 0x10) = lVar3;
        }
    } else {
        lVar3 = FUN_140196830(param_1, param_5);
        *(longlong * )(param_4 + 0x18) = lVar3;
        if (param_4 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x18)) {
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = lVar3;
        }
    }
    *(longlong * )(lVar3 + 8) = param_4;
    *(undefined8 * )(lVar3 + 0x10) = 0;
    *(undefined8 * )(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3, *(longlong * )(param_1 + 8) + 8);
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}


char **FUN_140196730(longlong param_1, char **param_2, int *param_3) {
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8[8];

    pcVar2 = *(char **) (param_1 + 8);
    pcVar4 = *(char **) (pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *) 0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 - *(int *) (pcVar5 + 0x20) < 0;
            if (bVar6) {
                pcVar4 = *(char **) (pcVar5 + 0x10);
            } else {
                pcVar4 = *(char **) (pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *) 0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **) (pcVar2 + 0x10)) goto LAB_140196790;
        if ((*pcVar5 == '\0') && (*(char **) (*(longlong * )(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **) (pcVar5 + 0x18);
        } else {
            pcVar3 = *(char **) (pcVar5 + 0x10);
            if (pcVar3 == (char *) 0x0) {
                pcVar3 = *(char **) (pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **) (pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **) (pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **) (pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            } else {
                for (pcVar2 = *(char **) (pcVar3 + 0x18); pcVar2 != (char *) 0x0;
                     pcVar2 = *(char **) (pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (-1 < *(int *) (pcVar3 + 0x20) - *param_3) {
        *param_2 = pcVar3;
        *(undefined * )(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140196790:
    ppcVar1 = (char **) FUN_140196620(param_1, local_res8, pcVar4, pcVar5, param_3);
    *param_2 = *ppcVar1;
    *(undefined * )(param_2 + 1) = 1;
    return param_2;
}


void FUN_140196830(undefined8 param_1, undefined4 *param_2) {
    longlong **pplVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_14018b280();
    if ((undefined4 * )(lVar2 + 0x20) != (undefined4 *) 0x0) {
        puVar3 = (undefined8 * )(lVar2 + 0x28);
        *(undefined4 * )(lVar2 + 0x20) = *param_2;
        *puVar3 = 0;
        *(undefined8 * )(lVar2 + 0x38) = 0;
        pplVar1 = (longlong * *)(lVar2 + 0x38);
        *(undefined8 * )(lVar2 + 0x30) = puVar3;
        *pplVar1 = (longlong * ) * puVar3;
        *puVar3 = (undefined8 * )(lVar2 + 0x30);
        if (*pplVar1 != (longlong *) 0x0) {
            **pplVar1 = (longlong) pplVar1;
        }
    }
    return;
}


void FUN_140196890(longlong **param_1) {
    longlong *plVar1;

    plVar1 = *param_1;
    while (plVar1 != (longlong *) 0x0) {
        if ((longlong * ) * plVar1 != (longlong *) 0x0) {
            *(longlong * ) * plVar1 = plVar1[1];
        }
        if ((longlong *) plVar1[1] != (longlong *) 0x0) {
            *(longlong *) plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1 = *param_1;
    }
    if ((longlong **) param_1[1] != (longlong **) 0x0) {
        *param_1[1] = (longlong) param_1[2];
    }
    if ((longlong **) param_1[2] != (longlong **) 0x0) {
        *param_1[2] = (longlong) param_1[1];
    }
    param_1[1] = (longlong *) 0x0;
    param_1[2] = (longlong *) 0x0;
    if (*param_1 == (longlong *) 0x0) {
        return;
    }
    FUN_1401a4a00(param_1);
    return;
}


void FUN_140196910(longlong *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar4 = DAT_140c63760;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar4 + 0x10) == DVar5) {
        *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar4 + 0x18);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar4 + 0x10) = DVar5;
                goto LAB_14019697a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar4 + 0x10, DVar5);
    }
    LAB_14019697a:
    lVar3 = *param_1;
    if (lVar3 != 0) {
        FUN_14019e780(lVar3);
        FUN_14018b900(lVar3, 0);
        *param_1 = 0;
    }
    if (*(ulonglong * )(lVar4 + 0x18) < 2) {
        *(undefined4 * )(lVar4 + 0x10) = 0;
        *(undefined8 * )(lVar4 + 0x18) = 0;
        if (*(longlong * )(lVar4 + 0x20) != 0) {
            if (*(longlong * )(lVar4 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar4 + 0x28);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x28));
        }
    } else {
        *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + -1;
    }
    return;
}


void FUN_140196a10(void) {
    HANDLE hObject;
    bool bVar1;

    DAT_140c63730 = DAT_140c63730 + -1;
    if (1 < DAT_140c67408) {
        DAT_140c67408 = DAT_140c67408 - 1;
        return;
    }
    DAT_140c67400 = 0;
    DAT_140c67408 = 0;
    if (DAT_140c67410 != 0) {
        if (DAT_140c67418 == (HANDLE) 0x0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            bVar1 = DAT_140c67418 == (HANDLE) 0x0;
            DAT_140c67418 =
                    (HANDLE)((ulonglong) DAT_140c67418 ^
                             (ulonglong) bVar1 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
            if (!bVar1) {
                CloseHandle(hObject);
            }
        }
        // WARNING: Could not recover jumptable at 0x000140196a8b. Too many branches
        // WARNING: Treating indirect jump as call
        SetEvent(DAT_140c67418);
        return;
    }
    DAT_140c67400 = 0;
    DAT_140c67408 = 0;
    return;
}


undefined8 FUN_140196aa0(undefined8 param_1) {
    HANDLE hObject;
    bool bVar1;

    if (1 < DAT_140c67408) {
        DAT_140c67408 = DAT_140c67408 - 1;
        return param_1;
    }
    DAT_140c67400 = 0;
    DAT_140c67408 = 0;
    if (DAT_140c67410 != 0) {
        if (DAT_140c67418 == (HANDLE) 0x0) {
            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
            LOCK();
            bVar1 = DAT_140c67418 == (HANDLE) 0x0;
            DAT_140c67418 =
                    (HANDLE)((ulonglong) DAT_140c67418 ^
                             (ulonglong) bVar1 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
            if (!bVar1) {
                CloseHandle(hObject);
            }
        }
        SetEvent(DAT_140c67418);
    }
    return param_1;
}


void FUN_140196b30(undefined8 param_1) {
    undefined2 *puVar1;
    undefined auStack1144[48];
    LPWSTR local_448[2];
    WCHAR local_438[264];
    WCHAR local_228[264];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack1144;
    GetModuleFileNameW((HMODULE) 0x0, local_438, 0x104);
    GetFullPathNameW(local_438, 0x104, local_228, local_448);
    puVar1 = (undefined2 *) FUN_1407dd8d8(local_448[0], 0x2e);
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    FUN_14001b680(param_1, 0x104);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack1144);
    return;
}


void FUN_140196bd0(uint *param_1, undefined4 param_2, longlong *param_3, undefined8 param_4) {
    DWORD DVar1;
    uint uVar2;
    int iVar3;
    HANDLE hObject;
    ulonglong uVar4;
    bool bVar5;
    undefined8 local_res20;
    undefined auStack1128[32];
    undefined8 local_448;
    undefined8 local_440;
    undefined local_438[1023];
    undefined local_39;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1128;
    local_res20 = param_4;
    DVar1 = GetCurrentThreadId();
    uVar4 = 0;
    if (DAT_140c67400 == DVar1) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar1 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar5 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar5 * (DAT_140c67408 ^ 1);
            if (bVar5) goto LAB_140196c53;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c67400, DVar1);
        DVar1 = DAT_140c67400;
    }
    LAB_140196c53:
    DAT_140c67400 = DVar1;
    DAT_140c63730 = DAT_140c63730 + 1;
    if (DAT_140c63730 == 1) {
        uVar2 = FUN_1407df5fc(local_438, 0x3ff, *param_3 + -0x12fa640, &local_res20);
        if ((((int) uVar2 < 0) || (0x3ff < uVar2)) || (uVar2 == 0x3ff)) {
            local_39 = 0;
        }
        local_440 = 0;
        local_448 = 0x141d3e258;
        iVar3 = FUN_1401a3130(param_2, 1, &local_448, local_438);
        if (((iVar3 != 0) && (DAT_140c63730 == 1)) && (*param_1 < DAT_140c1e44c)) {
            *param_1 = *param_1 + 1;
        }
    }
    DAT_140c63730 = DAT_140c63730 + -1;
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
    } else {
        DAT_140c67408 = DAT_140c67408 - 1;
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1128);
    return;
}


void FUN_140196d80(uint *param_1, undefined4 param_2, longlong *param_3, undefined8 param_4) {
    DWORD DVar1;
    uint uVar2;
    int iVar3;
    HANDLE hObject;
    ulonglong uVar4;
    bool bVar5;
    undefined8 local_res20;
    undefined auStack2152[32];
    undefined8 local_848;
    undefined8 local_840;
    undefined local_838[2046];
    undefined2 local_3a;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack2152;
    local_res20 = param_4;
    DVar1 = GetCurrentThreadId();
    uVar4 = 0;
    if (DAT_140c67400 == DVar1) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar1 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar5 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar5 * (DAT_140c67408 ^ 1);
            if (bVar5) goto LAB_140196e03;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(&DAT_140c67400, DVar1);
        DVar1 = DAT_140c67400;
    }
    LAB_140196e03:
    DAT_140c67400 = DVar1;
    DAT_140c63730 = DAT_140c63730 + 1;
    if (DAT_140c63730 == 1) {
        uVar2 = FUN_1407dda14(local_838, 0x3ff, *param_3 + -0x12fa640, &local_res20);
        if ((((int) uVar2 < 0) || (0x3ff < uVar2)) || (uVar2 == 0x3ff)) {
            local_3a = 0;
        }
        local_840 = 0;
        local_848 = 0x141d3e240;
        iVar3 = FUN_1401a3130(param_2, 1, &local_848, local_838);
        if (((iVar3 != 0) && (DAT_140c63730 == 1)) && (*param_1 < DAT_140c1e44c)) {
            *param_1 = *param_1 + 1;
        }
    }
    DAT_140c63730 = DAT_140c63730 + -1;
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
    } else {
        DAT_140c67408 = DAT_140c67408 - 1;
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack2152);
    return;
}


void FUN_140196f30(uint *param_1, undefined8 param_2, longlong *param_3, undefined8 param_4) {
    longlong lVar1;
    DWORD DVar2;
    uint uVar3;
    int iVar4;
    BOOL BVar5;
    longlong lVar6;
    HANDLE hObject;
    ulonglong uVar7;
    bool bVar8;
    longlong alStackX8[4];
    undefined8 uStack48;

    uStack48 = 0x140196f45;
    alStackX8[3] = param_4;
    lVar6 = FUN_1407f0f60();
    lVar6 = -lVar6;
    *(ulonglong * )(&stack0x00001198 + lVar6) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar6);
    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140196f69;
    DVar2 = GetCurrentThreadId();
    uVar7 = 0;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar8 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar8 * (DAT_140c67408 ^ 1);
            if (bVar8) goto LAB_140196fc3;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140196fba;
        FUN_14019fb60();
        DVar2 = DAT_140c67400;
    }
    LAB_140196fc3:
    DAT_140c67400 = DVar2;
    DAT_140c63730 = DAT_140c63730 + 1;
    if (DAT_140c63730 == 1) {
        lVar1 = *param_3;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140196ffd;
        uVar3 = FUN_1407df5fc(&stack0x00000598 + lVar6, 0x3ff, lVar1 + -0x12fa640, &stack0x000011f0 + lVar6
        );
        if ((((int) uVar3 < 0) || (0x3ff < uVar3)) || (uVar3 == 0x3ff)) {
            (&stack0x00000997)[lVar6] = 0;
        }
        *(undefined8 * )((longlong) alStackX8 + lVar6 + 0x18) = 0;
        *(undefined8 * )((longlong) alStackX8 + lVar6) = 0x141d3e400;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019703b;
        iVar4 = FUN_1401a3130();
        if (iVar4 == 0) {
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197044;
            FUN_140196a10();
            goto LAB_1401971bf;
        }
        if ((DAT_140c63730 == 1) && (*param_1 < DAT_140c1e44c)) {
            *(undefined * *)(&stack0xfffffffffffffff8 + lVar6) = &stack0x00000598 + lVar6;
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401970a7;
            FUN_14001b370();
            *param_1 = *param_1 + 1;
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401970af;
            BVar5 = IsDebuggerPresent();
            if (BVar5 == 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401970c9;
                FUN_1407e4830(&stack0x00000028 + lVar6, 0, 0x98);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401970de;
                FUN_1407e4830(&stack0x000000c8 + lVar6);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401970ec;
                RtlCaptureContext(&stack0x000000c8 + lVar6);
                *(undefined8 * )(&stack0x00000038 + lVar6) = *(undefined8 * )(&stack0x000011d0 + lVar6);
                *(undefined4 * )(&stack0x00000028 + lVar6) = 0xcfff0001;
                *(undefined * *)(&stack0x00000048 + lVar6) = &stack0x00000998 + lVar6;
                *(undefined4 * )(&stack0x0000002c + lVar6) = 0;
                *(undefined * *)((longlong) alStackX8 + lVar6 + 8) = &stack0x00000028 + lVar6;
                *(undefined4 * )(&stack0x00000040 + lVar6) = 1;
                *(undefined * *)((longlong) alStackX8 + lVar6 + 0x10) = &stack0x000000c8 + lVar6;
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197137;
                iVar4 = FUN_140192440();
                if (iVar4 == 1) {
                    // WARNING: Subroutine does not return
                    *(undefined * *)((longlong) & uStack48 + lVar6) = &UNK_140197143;
                    ExitProcess(1);
                }
            }
        }
    }
    DAT_140c63730 = DAT_140c63730 + -1;
    if (DAT_140c67408 < 2) {
        DAT_140c67400 = 0;
        DAT_140c67408 = 0;
        if (DAT_140c67410 != 0) {
            if (DAT_140c67418 == (HANDLE) 0x0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019719c;
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar8 = DAT_140c67418 == (HANDLE) 0x0;
                DAT_140c67418 =
                        (HANDLE)((ulonglong) DAT_140c67418 ^
                                 (ulonglong) bVar8 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                if (!bVar8) {
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401971b2;
                    CloseHandle(hObject);
                }
            }
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401971bf;
            SetEvent(DAT_140c67418);
        }
    } else {
        DAT_140c67408 = DAT_140c67408 - 1;
    }
    LAB_1401971bf:
    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401971d1;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00001198 + lVar6) ^
                  (ulonglong)(&stack0xffffffffffffffd8 + lVar6));
    return;
}


void FUN_1401971e0(uint *param_1, undefined8 param_2, longlong *param_3, undefined8 param_4) {
    longlong lVar1;
    DWORD DVar2;
    uint uVar3;
    int iVar4;
    BOOL BVar5;
    longlong lVar6;
    HANDLE hObject;
    ulonglong uVar7;
    bool bVar8;
    longlong alStackX8[4];
    undefined8 uStack48;

    uStack48 = 0x1401971f5;
    alStackX8[3] = param_4;
    lVar6 = FUN_1407f0f60();
    lVar6 = -lVar6;
    *(ulonglong * )(&stack0x00001598 + lVar6) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar6);
    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197219;
    DVar2 = GetCurrentThreadId();
    uVar7 = 0;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar8 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar8 * (DAT_140c67408 ^ 1);
            if (bVar8) goto LAB_140197273;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019726a;
        FUN_14019fb60();
        DVar2 = DAT_140c67400;
    }
    LAB_140197273:
    DAT_140c67400 = DVar2;
    DAT_140c63730 = DAT_140c63730 + 1;
    if (DAT_140c63730 == 1) {
        lVar1 = *param_3;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401972ad;
        uVar3 = FUN_1407dda14(&stack0x00000598 + lVar6, 0x3ff, lVar1 + -0x12fa640, &stack0x000015f0 + lVar6
        );
        if ((((int) uVar3 < 0) || (0x3ff < uVar3)) || (uVar3 == 0x3ff)) {
            *(undefined2 * )(&stack0x00000d96 + lVar6) = 0;
        }
        *(undefined8 * )((longlong) alStackX8 + lVar6 + 0x18) = 0;
        *(undefined8 * )((longlong) alStackX8 + lVar6) = 0x141d3e438;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401972ec;
        iVar4 = FUN_1401a3130();
        if (iVar4 == 0) {
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401972f5;
            FUN_140196a10();
            goto LAB_140197470;
        }
        if ((DAT_140c63730 == 1) && (*param_1 < DAT_140c1e44c)) {
            *(undefined * *)(&stack0xfffffffffffffff8 + lVar6) = &stack0x00000598 + lVar6;
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197358;
            FUN_14001b370();
            *param_1 = *param_1 + 1;
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197360;
            BVar5 = IsDebuggerPresent();
            if (BVar5 == 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019737a;
                FUN_1407e4830(&stack0x00000028 + lVar6, 0, 0x98);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019738f;
                FUN_1407e4830(&stack0x000000c8 + lVar6);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019739d;
                RtlCaptureContext(&stack0x000000c8 + lVar6);
                *(undefined8 * )(&stack0x00000038 + lVar6) = *(undefined8 * )(&stack0x000015d0 + lVar6);
                *(undefined4 * )(&stack0x00000028 + lVar6) = 0xcfff0001;
                *(undefined * *)(&stack0x00000048 + lVar6) = &stack0x00000d98 + lVar6;
                *(undefined4 * )(&stack0x0000002c + lVar6) = 0;
                *(undefined * *)((longlong) alStackX8 + lVar6 + 8) = &stack0x00000028 + lVar6;
                *(undefined4 * )(&stack0x00000040 + lVar6) = 1;
                *(undefined * *)((longlong) alStackX8 + lVar6 + 0x10) = &stack0x000000c8 + lVar6;
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401973e8;
                iVar4 = FUN_140192440();
                if (iVar4 == 1) {
                    // WARNING: Subroutine does not return
                    *(undefined * *)((longlong) & uStack48 + lVar6) = &UNK_1401973f4;
                    ExitProcess(1);
                }
            }
        }
    }
    DAT_140c63730 = DAT_140c63730 + -1;
    if (DAT_140c67408 < 2) {
        DAT_140c67400 = 0;
        DAT_140c67408 = 0;
        if (DAT_140c67410 != 0) {
            if (DAT_140c67418 == (HANDLE) 0x0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019744d;
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                bVar8 = DAT_140c67418 == (HANDLE) 0x0;
                DAT_140c67418 =
                        (HANDLE)((ulonglong) DAT_140c67418 ^
                                 (ulonglong) bVar8 * ((ulonglong) DAT_140c67418 ^ (ulonglong) hObject));
                if (!bVar8) {
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197463;
                    CloseHandle(hObject);
                }
            }
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197470;
            SetEvent(DAT_140c67418);
        }
    } else {
        DAT_140c67408 = DAT_140c67408 - 1;
    }
    LAB_140197470:
    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197482;
    FUN_1407db4f0(*(ulonglong * )(&stack0x00001598 + lVar6) ^
                  (ulonglong)(&stack0xffffffffffffffd8 + lVar6));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140197490(int param_1, longlong *param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    DWORD DVar2;
    uint uVar3;
    int iVar4;
    BOOL BVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    wchar_t *pwVar9;
    bool bVar10;
    undefined8 in_stack_00000000;
    longlong alStackX16[3];
    undefined local_1b18[1232];
    WCHAR local_1648[264];
    undefined local_1438[1023];
    undefined local_1039;
    undefined local_1038[2048];
    WCHAR local_838[1024];
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x1401974b2;
    alStackX16[1] = param_3;
    alStackX16[2] = param_4;
    lVar6 = FUN_1407f0f60();
    lVar6 = -lVar6;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar6);
    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401974d2;
    DVar2 = GetCurrentThreadId();
    uVar8 = 0;
    uVar7 = uVar8;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar10 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar10 * (DAT_140c67408 ^ 1);
            if (bVar10) goto LAB_140197526;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019751d;
        FUN_14019fb60(&DAT_140c67400, DVar2);
        DVar2 = DAT_140c67400;
    }
    LAB_140197526:
    DAT_140c67400 = DVar2;
    DAT_140c63730 = DAT_140c63730 + 1;
    if (DAT_140c63730 == 1) {
        lVar1 = *param_2;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019755f;
        uVar3 = FUN_1407df5fc(local_1438, 0x3ff, lVar1 + -0x12fa640, alStackX16 + 1);
        if ((((int) uVar3 < 0) || (0x3ff < uVar3)) || (uVar3 == 0x3ff)) {
            local_1039 = 0;
        }
        *(undefined8 * )(&stack0x00000028 + lVar6) = 0;
        *(undefined8 * )((longlong) alStackX16 + lVar6) = 0x141d3e2a0;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019759b;
        FUN_1401a3130((longlong) param_1 & 0xffffffff, 0, (longlong) alStackX16 + lVar6, local_1438);
        if (DAT_140c63730 == 1) {
            if (param_1 < 0x83) {
                pwVar9 = (wchar_t *) (&PTR_u_None_140c2ce70)[param_1];
            } else {
                pwVar9 = L"Unknown";
            }
            *(undefined * *)(&stack0xfffffffffffffff8 + lVar6) = local_1438;
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401975e8;
            FUN_14001b370(local_1038, 0x400, L"(%s) FatalError: %S\n", pwVar9);
            if (_DAT_140c63734 != 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197600;
                FUN_140196b30(local_1648);
                *(undefined * *)(&stack0xfffffffffffffff8 + lVar6) = local_1038;
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019762b;
                FUN_14001b370(local_838, 0x400,
                              L"%s has encountered a fatal error and needs to exit:\n\n%s\nAn error report will be generated and placed in the Errors directory.\n",
                              local_1648);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197635;
                FUN_140196aa0();
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197651;
                iVar4 = MessageBoxW((HWND) 0x0, local_838, local_1648, 0x2010);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197659;
                DVar2 = GetCurrentThreadId();
                if (DAT_140c67400 == DVar2) {
                    DAT_140c67408 = DAT_140c67408 + 1;
                    DVar2 = DAT_140c67400;
                } else {
                    do {
                        LOCK();
                        bVar10 = DAT_140c67408 == 0;
                        DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar10 * (DAT_140c67408 ^ 1);
                        if (bVar10) goto LAB_14019769f;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < 0x400);
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197697;
                    FUN_14019fb60();
                    DVar2 = DAT_140c67400;
                }
                LAB_14019769f:
                DAT_140c67400 = DVar2;
                if (iVar4 == 6) {
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401976a9;
                    FUN_140196a10();
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401976bb;
                    FUN_1407db4f0(local_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar6));
                    return;
                }
            }
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401976cf;
            BVar5 = IsDebuggerPresent();
            if (BVar5 == 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401976e9;
                FUN_1407e4830(&stack0x00000038 + lVar6, 0, 0x98);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401976fa;
                FUN_1407e4830(local_1b18, 0, 0x4d0);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197704;
                RtlCaptureContext(local_1b18);
                *(undefined8 * )(&stack0x00000048 + lVar6) = in_stack_00000000;
                *(undefined4 * )(&stack0x00000038 + lVar6) = 0xcfff0002;
                *(undefined4 * )(&stack0x0000003c + lVar6) = 1;
                *(undefined * *)((longlong) alStackX16 + lVar6 + 8) = &stack0x00000038 + lVar6;
                *(undefined4 * )(&stack0x00000050 + lVar6) = 1;
                *(undefined * *)((longlong) alStackX16 + lVar6 + 0x10) = local_1b18;
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019774a;
                iVar4 = FUN_140192440();
                if (iVar4 == 1) {
                    // WARNING: Subroutine does not return
                    *(undefined * *)((longlong) & uStack48 + lVar6) = &UNK_140197758;
                    ExitProcess(1);
                }
            }
        }
    }
    // WARNING: Subroutine does not return
    *(undefined * *)((longlong) & uStack48 + lVar6) = &UNK_140197762;
    ExitProcess(1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140197770(int param_1, longlong *param_2, undefined8 param_3, undefined8 param_4) {
    longlong lVar1;
    DWORD DVar2;
    uint uVar3;
    int iVar4;
    BOOL BVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    wchar_t *pwVar9;
    bool bVar10;
    undefined8 in_stack_00000000;
    longlong alStackX16[3];
    undefined local_1f18[1232];
    WCHAR local_1a48[264];
    undefined local_1838[2046];
    undefined2 local_103a;
    undefined local_1038[2048];
    WCHAR local_838[1024];
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x140197792;
    alStackX16[1] = param_3;
    alStackX16[2] = param_4;
    lVar6 = FUN_1407f0f60();
    lVar6 = -lVar6;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar6);
    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401977b2;
    DVar2 = GetCurrentThreadId();
    uVar8 = 0;
    uVar7 = uVar8;
    if (DAT_140c67400 == DVar2) {
        DAT_140c67408 = DAT_140c67408 + 1;
        DVar2 = DAT_140c67400;
    } else {
        do {
            LOCK();
            bVar10 = DAT_140c67408 == 0;
            DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar10 * (DAT_140c67408 ^ 1);
            if (bVar10) goto LAB_140197806;
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401977fd;
        FUN_14019fb60(&DAT_140c67400, DVar2);
        DVar2 = DAT_140c67400;
    }
    LAB_140197806:
    DAT_140c67400 = DVar2;
    DAT_140c63730 = DAT_140c63730 + 1;
    if (DAT_140c63730 == 1) {
        lVar1 = *param_2;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019783f;
        uVar3 = FUN_1407dda14(local_1838, 0x3ff, lVar1 + -0x12fa640, alStackX16 + 1);
        if ((((int) uVar3 < 0) || (0x3ff < uVar3)) || (uVar3 == 0x3ff)) {
            local_103a = 0;
        }
        *(undefined8 * )(&stack0x00000028 + lVar6) = 0;
        *(undefined8 * )((longlong) alStackX16 + lVar6) = 0x141d3e2c0;
        *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019787c;
        FUN_1401a3130((longlong) param_1 & 0xffffffff, 0, (longlong) alStackX16 + lVar6, local_1838);
        if (DAT_140c63730 == 1) {
            if (param_1 < 0x83) {
                pwVar9 = (wchar_t *) (&PTR_u_None_140c2ce70)[param_1];
            } else {
                pwVar9 = L"Unknown";
            }
            *(undefined * *)(&stack0xfffffffffffffff8 + lVar6) = local_1838;
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401978c9;
            FUN_14001b370(local_1038, 0x400, L"(%s) FatalError: %s\n", pwVar9);
            if (_DAT_140c63734 != 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401978e1;
                FUN_140196b30(local_1a48);
                *(undefined * *)(&stack0xfffffffffffffff8 + lVar6) = local_1038;
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019790c;
                FUN_14001b370(local_838, 0x400,
                              L"%s has encountered a fatal error and needs to exit:\n\n%s\nAn error report will be generated and placed in the Errors directory.\n",
                              local_1a48);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197916;
                FUN_140196aa0();
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197932;
                iVar4 = MessageBoxW((HWND) 0x0, local_838, local_1a48, 0x2010);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019793a;
                DVar2 = GetCurrentThreadId();
                if (DAT_140c67400 == DVar2) {
                    DAT_140c67408 = DAT_140c67408 + 1;
                    DVar2 = DAT_140c67400;
                } else {
                    do {
                        LOCK();
                        bVar10 = DAT_140c67408 == 0;
                        DAT_140c67408 = DAT_140c67408 ^ (ulonglong) bVar10 * (DAT_140c67408 ^ 1);
                        if (bVar10) goto LAB_14019797f;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < 0x400);
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197977;
                    FUN_14019fb60();
                    DVar2 = DAT_140c67400;
                }
                LAB_14019797f:
                DAT_140c67400 = DVar2;
                if (iVar4 == 6) {
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197989;
                    FUN_140196a10();
                    *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x14019799b;
                    FUN_1407db4f0(local_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar6));
                    return;
                }
            }
            *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401979af;
            BVar5 = IsDebuggerPresent();
            if (BVar5 == 0) {
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401979c9;
                FUN_1407e4830(&stack0x00000038 + lVar6, 0, 0x98);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401979da;
                FUN_1407e4830(local_1f18, 0, 0x4d0);
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x1401979e4;
                RtlCaptureContext(local_1f18);
                *(undefined8 * )(&stack0x00000048 + lVar6) = in_stack_00000000;
                *(undefined4 * )(&stack0x00000038 + lVar6) = 0xcfff0002;
                *(undefined4 * )(&stack0x0000003c + lVar6) = 1;
                *(undefined * *)((longlong) alStackX16 + lVar6 + 8) = &stack0x00000038 + lVar6;
                *(undefined4 * )(&stack0x00000050 + lVar6) = 1;
                *(undefined * *)((longlong) alStackX16 + lVar6 + 0x10) = local_1f18;
                *(undefined8 * )((longlong) & uStack48 + lVar6) = 0x140197a2a;
                iVar4 = FUN_140192440();
                if (iVar4 == 1) {
                    // WARNING: Subroutine does not return
                    *(undefined * *)((longlong) & uStack48 + lVar6) = &UNK_140197a38;
                    ExitProcess(1);
                }
            }
        }
    }
    // WARNING: Subroutine does not return
    *(undefined * *)((longlong) & uStack48 + lVar6) = &UNK_140197a42;
    ExitProcess(1);
}


int FUN_140197a50(undefined2 *param_1, longlong param_2) {
    ulonglong uVar1;
    int iVar2;
    int iVar3;

    iVar3 = 0;
    iVar2 = 0;
    if (0x7ffffffe < param_2 - 1U) {
        iVar2 = -0x7ff8ffa9;
    }
    if (-1 < iVar2) {
        uVar1 = param_2 - 1;
        iVar2 = FUN_1407dda14(param_1, uVar1);
        if ((iVar2 < 0) || (uVar1 < (ulonglong)(longlong)iVar2)) {
            param_1[uVar1] = 0;
            iVar3 = -0x7ff8ff86;
        }
        else if ((longlong) iVar2 == uVar1) {
            param_1[uVar1] = 0;
            return 0;
        }
        return iVar3;
    }
    if (param_2 != 0) {
        *param_1 = 0;
    }
    return iVar2;
}


void FUN_140197ae0(longlong param_1) {
    FUN_140197ff0();
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    if (*(longlong * )(param_1 + 0x48) != 0) {
        CloseHandle(*(HANDLE * )(param_1 + 0x48));
    }
    if (*(undefined8 * *)(param_1 + 0x20) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x20) = *(undefined8 * )(param_1 + 0x28);
    }
    if (*(longlong * )(param_1 + 0x28) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x28) + 0x20) = *(undefined8 * )(param_1 + 0x20);
    }
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    if (*(undefined8 * *)(param_1 + 0x10) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x10) = *(undefined8 * )(param_1 + 0x18);
    }
    if (*(longlong * )(param_1 + 0x18) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x10) = *(undefined8 * )(param_1 + 0x10);
    }
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    return;
}


void FUN_140197b70(void) {
    ulonglong *puVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    longlong lVar6;
    DWORD DVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;
    ulonglong uVar11;
    HANDLE pvVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined auStack152[32];
    _MEMORYSTATUSEX local_78;
    ulonglong local_38;

    pplVar5 = DAT_140c63740;
    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    if ((DAT_140c8e110 & 1) == 0) {
        DAT_140c8e110 = DAT_140c8e110 | 1;
        FUN_1407dd89c();
    }
    lVar6 = DAT_140c63760;
    uVar14 = 0;
    if (DAT_140c8e118 == 0) {
        DVar7 = GetCurrentThreadId();
        uVar11 = uVar14;
        if (*(DWORD * )(lVar6 + 0x10) == DVar7) {
            *(longlong * )(lVar6 + 0x18) = *(longlong * )(lVar6 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar6 + 0x18);
                uVar13 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar13 == 0) * (*puVar1 ^ 1);
                if (uVar13 == 0) {
                    *(DWORD * )(lVar6 + 0x10) = DVar7;
                    goto LAB_140197c1c;
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < 0x400);
            FUN_14019fb60();
        }
        LAB_140197c1c:
        uVar11 = DAT_140c8e118;
        if ((DAT_140c8e118 == 0) && (lVar10 = FUN_14018b280(), uVar11 = uVar14, lVar10 != 0)) {
            uVar11 = FUN_14019e5d0();
        }
        DAT_140c8e118 = uVar11;
        if (*(ulonglong * )(lVar6 + 0x18) < 2) {
            *(undefined4 * )(lVar6 + 0x10) = 0;
            *(undefined8 * )(lVar6 + 0x18) = 0;
            if (*(longlong * )(lVar6 + 0x20) != 0) {
                if (*(longlong * )(lVar6 + 0x28) == 0) {
                    pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar6 + 0x28);
                    uVar11 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar11 == 0) * (*puVar1 ^ (ulonglong) pvVar12);
                    if (uVar11 != 0) {
                        CloseHandle(pvVar12);
                    }
                }
                SetEvent(*(HANDLE * )(lVar6 + 0x28));
            }
        } else {
            *(longlong * )(lVar6 + 0x18) = *(longlong * )(lVar6 + 0x18) + -1;
        }
        uVar11 = DAT_140c8e118;
        if (DAT_140c8e118 != 0) goto LAB_140197cb1;
    } else {
        LAB_140197cb1:
        uVar11 = DAT_140c8e118;
        FUN_14019e8f0();
    }
    DVar7 = GetCurrentThreadId();
    uVar13 = uVar14;
    if (*(DWORD * )(pplVar5 + 6) == DVar7) {
        pplVar5[7] = (longlong * )((longlong) pplVar5[7] + 1);
    } else {
        do {
            LOCK();
            pplVar2 = pplVar5 + 7;
            plVar3 = *pplVar2;
            *pplVar2 = (longlong * )
                    ((ulonglong) * pplVar2 ^
                     (ulonglong)(plVar3 == (longlong *) 0x0) * ((ulonglong) * pplVar2 ^ 1));
            if (plVar3 == (longlong *) 0x0) {
                *(DWORD * )(pplVar5 + 6) = DVar7;
                goto LAB_140197cf9;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 < 0x400);
        FUN_14019fb60(pplVar5 + 6);
    }
    LAB_140197cf9:
    local_78.dwLength = 0x40;
    GlobalMemoryStatusEx(&local_78);
    iVar8 = FUN_14018cdf0();
    pplVar2 = (longlong **) pplVar5[5];
    while (true) {
        if ((pplVar2 == pplVar5) ||
            ((int) ((local_78.dwMemoryLoad * 600 + -60000 + iVar8) - *(int *) (pplVar2 + 1)) < 1))
            goto LAB_140197e57;
        plVar3 = *pplVar2;
        FUN_1401984d0();
        DAT_140c890d0 = DAT_140c890d0 + 1;
        if (pplVar5[7] < (longlong *) 0x2) {
            *(undefined4 * )(pplVar5 + 6) = 0;
            pplVar5[7] = (longlong *) 0x0;
            if (pplVar5[8] != (longlong *) 0x0) {
                if (pplVar5[9] == (longlong *) 0x0) {
                    pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    pplVar2 = pplVar5 + 9;
                    plVar4 = *pplVar2;
                    *pplVar2 = (longlong * )
                            ((ulonglong) * pplVar2 ^
                             (ulonglong)(plVar4 == (longlong *) 0x0) *
                             ((ulonglong) * pplVar2 ^ (ulonglong) pvVar12));
                    if (plVar4 != (longlong *) 0x0) {
                        CloseHandle(pvVar12);
                    }
                }
                SetEvent(pplVar5[9]);
            }
        } else {
            pplVar5[7] = (longlong * )((longlong) pplVar5[7] + -1);
        }
        (**(code * *)(*plVar3 + 8))();
        iVar9 = FUN_14018cdf0();
        if (-1 < iVar9 - (iVar8 + 10)) break;
        DVar7 = GetCurrentThreadId();
        uVar13 = uVar14;
        if (*(DWORD * )(pplVar5 + 6) == DVar7) {
            pplVar5[7] = (longlong * )((longlong) pplVar5[7] + 1);
        } else {
            do {
                LOCK();
                pplVar2 = pplVar5 + 7;
                plVar3 = *pplVar2;
                *pplVar2 = (longlong * )
                        ((ulonglong) * pplVar2 ^
                         (ulonglong)(plVar3 == (longlong *) 0x0) * ((ulonglong) * pplVar2 ^ 1));
                if (plVar3 == (longlong *) 0x0) {
                    *(DWORD * )(pplVar5 + 6) = DVar7;
                    goto LAB_140197e08;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < 0x400);
            FUN_14019fb60(pplVar5 + 6);
        }
        LAB_140197e08:
        pplVar2 = (longlong **) pplVar5[5];
    }
    DVar7 = GetCurrentThreadId();
    uVar13 = uVar14;
    if (*(DWORD * )(pplVar5 + 6) != DVar7) goto LAB_140197e30;
    pplVar5[7] = (longlong * )((longlong) pplVar5[7] + 1);
    LAB_140197e57:
    pplVar2 = (longlong **) pplVar5[5];
    while (pplVar2 != pplVar5) {
        GlobalMemoryStatusEx(&local_78);
        uVar13 = local_78.ullAvailPageFile;
        if (local_78.ullAvailVirtual < local_78.ullAvailPageFile) {
            uVar13 = local_78.ullAvailVirtual;
        }
        if (0x1fffffff < uVar13) break;
        plVar3 = *pplVar2;
        FUN_1401984d0(pplVar2);
        DAT_140c890d0 = DAT_140c890d0 + 1;
        if (pplVar5[7] < (longlong *) 0x2) {
            *(undefined4 * )(pplVar5 + 6) = 0;
            pplVar5[7] = (longlong *) 0x0;
            if (pplVar5[8] != (longlong *) 0x0) {
                if (pplVar5[9] == (longlong *) 0x0) {
                    pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    pplVar2 = pplVar5 + 9;
                    plVar4 = *pplVar2;
                    *pplVar2 = (longlong * )
                            ((ulonglong) * pplVar2 ^
                             (ulonglong)(plVar4 == (longlong *) 0x0) *
                             ((ulonglong) * pplVar2 ^ (ulonglong) pvVar12));
                    if (plVar4 != (longlong *) 0x0) {
                        CloseHandle(pvVar12);
                    }
                }
                SetEvent(pplVar5[9]);
            }
        } else {
            pplVar5[7] = (longlong * )((longlong) pplVar5[7] + -1);
        }
        (**(code * *)(*plVar3 + 8))();
        DVar7 = GetCurrentThreadId();
        uVar13 = uVar14;
        if (*(DWORD * )(pplVar5 + 6) == DVar7) {
            pplVar5[7] = (longlong * )((longlong) pplVar5[7] + 1);
        } else {
            do {
                LOCK();
                pplVar2 = pplVar5 + 7;
                plVar3 = *pplVar2;
                *pplVar2 = (longlong * )
                        ((ulonglong) * pplVar2 ^
                         (ulonglong)(plVar3 == (longlong *) 0x0) * ((ulonglong) * pplVar2 ^ 1));
                if (plVar3 == (longlong *) 0x0) {
                    *(DWORD * )(pplVar5 + 6) = DVar7;
                    goto LAB_140197f47;
                }
                uVar13 = uVar13 + 1;
            } while (uVar13 < 0x400);
            FUN_14019fb60(pplVar5 + 6);
        }
        LAB_140197f47:
        pplVar2 = (longlong **) pplVar5[5];
    }
    if (pplVar5[7] < (longlong *) 0x2) {
        *(undefined4 * )(pplVar5 + 6) = 0;
        pplVar5[7] = (longlong *) 0x0;
        if (pplVar5[8] != (longlong *) 0x0) {
            if (pplVar5[9] == (longlong *) 0x0) {
                pvVar12 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                pplVar2 = pplVar5 + 9;
                plVar3 = *pplVar2;
                *pplVar2 = (longlong * )
                        ((ulonglong) * pplVar2 ^
                         (ulonglong)(plVar3 == (longlong *) 0x0) *
                         ((ulonglong) * pplVar2 ^ (ulonglong) pvVar12));
                if (plVar3 != (longlong *) 0x0) {
                    CloseHandle(pvVar12);
                }
            }
            SetEvent(pplVar5[9]);
        }
    } else {
        pplVar5[7] = (longlong * )((longlong) pplVar5[7] + -1);
    }
    if (uVar11 != 0) {
        FUN_14019ea00(uVar11);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack152);
    return;
    while (uVar13 = uVar13 + 1, uVar13 < 0x400) {
        LAB_140197e30:
        LOCK();
        pplVar2 = pplVar5 + 7;
        plVar3 = *pplVar2;
        *pplVar2 = (longlong * )
                ((ulonglong) * pplVar2 ^
                 (ulonglong)(plVar3 == (longlong *) 0x0) * ((ulonglong) * pplVar2 ^ 1));
        if (plVar3 == (longlong *) 0x0) {
            *(DWORD * )(pplVar5 + 6) = DVar7;
            goto LAB_140197e57;
        }
    }
    FUN_14019fb60(pplVar5 + 6);
    goto LAB_140197e57;
}


void FUN_140197ff0(longlong **param_1) {
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE pvVar6;
    ulonglong uVar7;

    pplVar1 = param_1 + 6;
    DVar5 = GetCurrentThreadId();
    uVar7 = 0;
    if (*(DWORD *) pplVar1 == DVar5) {
        param_1[7] = (longlong * )((longlong) param_1[7] + 1);
    } else {
        do {
            LOCK();
            pplVar2 = param_1 + 7;
            plVar3 = *pplVar2;
            *pplVar2 = (longlong * )
                    ((ulonglong) * pplVar2 ^
                     (ulonglong)(plVar3 == (longlong *) 0x0) * ((ulonglong) * pplVar2 ^ 1));
            if (plVar3 == (longlong *) 0x0) {
                *(DWORD *) pplVar1 = DVar5;
                goto LAB_140198058;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(pplVar1);
    }
    LAB_140198058:
    pplVar2 = (longlong **) param_1[5];
    do {
        if (pplVar2 == param_1) {
            if ((longlong *) 0x1 < param_1[7]) {
                param_1[7] = (longlong * )((longlong) param_1[7] + -1);
                return;
            }
            *(int *) pplVar1 = 0;
            param_1[7] = (longlong *) 0x0;
            if (param_1[8] != (longlong *) 0x0) {
                if (param_1[9] == (longlong *) 0x0) {
                    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    pplVar1 = param_1 + 9;
                    plVar3 = *pplVar1;
                    *pplVar1 = (longlong * )
                            ((ulonglong) * pplVar1 ^
                             (ulonglong)(plVar3 == (longlong *) 0x0) *
                             ((ulonglong) * pplVar1 ^ (ulonglong) pvVar6));
                    if (plVar3 != (longlong *) 0x0) {
                        CloseHandle(pvVar6);
                    }
                }
                SetEvent(param_1[9]);
            }
            return;
        }
        plVar3 = *pplVar2;
        FUN_1401984d0(pplVar2);
        DAT_140c890d0 = DAT_140c890d0 + 1;
        if (param_1[7] < (longlong *) 0x2) {
            *(int *) pplVar1 = 0;
            param_1[7] = (longlong *) 0x0;
            if (param_1[8] != (longlong *) 0x0) {
                if (param_1[9] == (longlong *) 0x0) {
                    pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    pplVar2 = param_1 + 9;
                    plVar4 = *pplVar2;
                    *pplVar2 = (longlong * )
                            ((ulonglong) * pplVar2 ^
                             (ulonglong)(plVar4 == (longlong *) 0x0) *
                             ((ulonglong) * pplVar2 ^ (ulonglong) pvVar6));
                    if (plVar4 != (longlong *) 0x0) {
                        CloseHandle(pvVar6);
                    }
                }
                SetEvent(param_1[9]);
            }
        } else {
            param_1[7] = (longlong * )((longlong) param_1[7] + -1);
        }
        (**(code * *)(*plVar3 + 8))();
        DVar5 = GetCurrentThreadId();
        uVar7 = 0;
        if (*(DWORD *) pplVar1 == DVar5) {
            param_1[7] = (longlong * )((longlong) param_1[7] + 1);
        } else {
            do {
                LOCK();
                pplVar2 = param_1 + 7;
                plVar3 = *pplVar2;
                *pplVar2 = (longlong * )
                        ((ulonglong) * pplVar2 ^
                         (ulonglong)(plVar3 == (longlong *) 0x0) * ((ulonglong) * pplVar2 ^ 1));
                if (plVar3 == (longlong *) 0x0) {
                    *(DWORD *) pplVar1 = DVar5;
                    goto LAB_140198124;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x400);
            FUN_14019fb60(pplVar1);
        }
        LAB_140198124:
        pplVar2 = (longlong **) param_1[5];
    } while (true);
}


void FUN_1401981b0(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong **pplVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    DWORD DVar7;
    HANDLE pvVar8;
    ulonglong uVar9;

    lVar5 = DAT_140c63740;
    DVar7 = GetCurrentThreadId();
    uVar9 = 0;
    if (*(DWORD * )(lVar5 + 0x30) == DVar7) {
        *(longlong * )(lVar5 + 0x38) = *(longlong * )(lVar5 + 0x38) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar5 + 0x38);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar5 + 0x30) = DVar7;
                goto LAB_14019821a;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x400);
        FUN_14019fb60(lVar5 + 0x30);
    }
    LAB_14019821a:
    pplVar2 = (longlong * *) * param_1;
    do {
        if (pplVar2 == (longlong **) 0x0) {
            if (1 < *(ulonglong * )(lVar5 + 0x38)) {
                *(longlong * )(lVar5 + 0x38) = *(longlong * )(lVar5 + 0x38) + -1;
                return;
            }
            *(undefined4 * )(lVar5 + 0x30) = 0;
            *(undefined8 * )(lVar5 + 0x38) = 0;
            if (*(longlong * )(lVar5 + 0x40) != 0) {
                if (*(longlong * )(lVar5 + 0x48) == 0) {
                    pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar5 + 0x48);
                    uVar9 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar9 == 0) * (*puVar1 ^ (ulonglong) pvVar8);
                    if (uVar9 != 0) {
                        CloseHandle(pvVar8);
                    }
                }
                // WARNING: Could not recover jumptable at 0x000140198362. Too many branches
                // WARNING: Treating indirect jump as call
                SetEvent(*(HANDLE * )(lVar5 + 0x48));
                return;
            }
            return;
        }
        plVar3 = *pplVar2;
        FUN_1401984d0(pplVar2);
        lVar6 = DAT_140c63740;
        DAT_140c890d0 = DAT_140c890d0 + 1;
        if (*(ulonglong * )(DAT_140c63740 + 0x38) < 2) {
            *(undefined4 * )(DAT_140c63740 + 0x30) = 0;
            *(undefined8 * )(lVar6 + 0x38) = 0;
            if (*(longlong * )(lVar6 + 0x40) != 0) {
                if (*(longlong * )(lVar6 + 0x48) == 0) {
                    pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                    LOCK();
                    puVar1 = (ulonglong * )(lVar6 + 0x48);
                    uVar9 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar9 == 0) * (*puVar1 ^ (ulonglong) pvVar8);
                    if (uVar9 != 0) {
                        CloseHandle(pvVar8);
                    }
                }
                SetEvent(*(HANDLE * )(lVar6 + 0x48));
            }
        } else {
            *(longlong * )(DAT_140c63740 + 0x38) = *(longlong * )(DAT_140c63740 + 0x38) + -1;
        }
        (**(code * *)(*plVar3 + 8))();
        DVar7 = GetCurrentThreadId();
        uVar9 = 0;
        if (*(DWORD * )(lVar6 + 0x30) == DVar7) {
            *(longlong * )(lVar6 + 0x38) = *(longlong * )(lVar6 + 0x38) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar6 + 0x38);
                uVar4 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
                if (uVar4 == 0) {
                    *(DWORD * )(lVar6 + 0x30) = DVar7;
                    goto LAB_1401982e7;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < 0x400);
            FUN_14019fb60(lVar6 + 0x30);
        }
        LAB_1401982e7:
        pplVar2 = (longlong * *) * param_1;
    } while (true);
}


void FUN_140198370(undefined8 *param_1, undefined8 param_2, longlong *param_3) {
    longlong *plVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    DWORD DVar7;
    undefined4 uVar8;
    HANDLE hObject;
    ulonglong uVar9;

    lVar5 = DAT_140c63740;
    DVar7 = GetCurrentThreadId();
    uVar9 = 0;
    if (*(DWORD * )(lVar5 + 0x30) == DVar7) {
        *(longlong * )(lVar5 + 0x38) = *(longlong * )(lVar5 + 0x38) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(lVar5 + 0x38);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar3 == 0) * (*puVar2 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar5 + 0x30) = DVar7;
                goto LAB_1401983ea;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < 0x400);
        FUN_14019fb60(lVar5 + 0x30, DVar7);
    }
    LAB_1401983ea:
    *param_1 = param_2;
    uVar8 = FUN_14018cdf0();
    *(undefined4 * )(param_1 + 1) = uVar8;
    if (param_1[2] == 0) {
        param_1[2] = param_3;
        plVar1 = param_1 + 3;
        *plVar1 = *param_3;
        *param_3 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x10) = plVar1;
        }
    }
    lVar6 = DAT_140c63740;
    if (param_1[4] == 0) {
        uVar4 = *(undefined8 * )(DAT_140c63740 + 0x20);
        param_1[5] = DAT_140c63740;
        param_1[4] = uVar4;
        if ((longlong *) param_1[4] != (longlong *) 0x0) {
            *(longlong *) param_1[4] = (longlong) param_1;
        }
        *(undefined8 * *)(lVar6 + 0x20) = param_1 + 5;
    }
    DAT_140c890c8 = DAT_140c890c8 + 1;
    DAT_140c890cc = DAT_140c890cc + 1;
    if (*(ulonglong * )(lVar5 + 0x38) < 2) {
        *(undefined4 * )(lVar5 + 0x30) = 0;
        *(undefined8 * )(lVar5 + 0x38) = 0;
        if (*(longlong * )(lVar5 + 0x40) != 0) {
            if (*(longlong * )(lVar5 + 0x48) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar5 + 0x48);
                uVar9 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar9 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar9 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar5 + 0x48));
        }
    } else {
        *(longlong * )(lVar5 + 0x38) = *(longlong * )(lVar5 + 0x38) + -1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1401984d0(undefined8 *param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar3 = DAT_140c63740;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar3 + 0x30) == DVar4) {
        *(longlong * )(lVar3 + 0x38) = *(longlong * )(lVar3 + 0x38) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x38);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar3 + 0x30) = DVar4;
                goto LAB_14019853a;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar3 + 0x30, DVar4);
    }
    LAB_14019853a:
    if (param_1[4] != 0) {
        *param_1 = 0;
        *(undefined4 * )(param_1 + 1) = 0;
        if ((undefined8 *) param_1[2] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[2] = param_1[3];
        }
        if (param_1[3] != 0) {
            *(undefined8 * )(param_1[3] + 0x10) = param_1[2];
        }
        param_1[2] = 0;
        param_1[3] = 0;
        if ((undefined8 *) param_1[4] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[4] = param_1[5];
        }
        if (param_1[5] != 0) {
            *(undefined8 * )(param_1[5] + 0x20) = param_1[4];
        }
        param_1[4] = 0;
        param_1[5] = 0;
        DAT_140c890c8 = DAT_140c890c8 + -1;
        _DAT_140c890e0 = _DAT_140c890e0 + 1;
    }
    if (*(ulonglong * )(lVar3 + 0x38) < 2) {
        *(undefined4 * )(lVar3 + 0x30) = 0;
        *(undefined8 * )(lVar3 + 0x38) = 0;
        if (*(longlong * )(lVar3 + 0x40) != 0) {
            if (*(longlong * )(lVar3 + 0x48) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x48);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x48));
        }
        return;
    }
    *(longlong * )(lVar3 + 0x38) = *(longlong * )(lVar3 + 0x38) + -1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_140198620(void) {
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    _DAT_140c890cc = 0;
    _DAT_140c890e0 = 0;
    iVar1 = FUN_14018cdf0();
    FUN_140197b70();
    iVar2 = FUN_14018cdf0();
    _DAT_140c890dc = iVar2 - iVar1;
    if (DAT_140c890e8 < DAT_140c890cc) {
        DAT_140c890e8 = DAT_140c890cc;
    }
    if (DAT_140c890ec < DAT_140c890d0) {
        DAT_140c890ec = DAT_140c890d0;
    }
    if (DAT_140c890f0 < _DAT_140c890dc) {
        DAT_140c890f0 = _DAT_140c890dc;
    }
    if (DAT_140c890e4 < DAT_140c890c8) {
        DAT_140c890e4 = DAT_140c890c8;
    }
    (&DAT_140c89100)[DAT_140c890d8 % 0x3c] = DAT_140c890d0;
    uVar3 = 0;
    do {
        uVar4 = uVar3 + 0x18;
        DAT_140c890d4 =
                DAT_140c890d4 +
                *(int *) ((longlong) & DAT_140c89114 + uVar3) + *(int *) ((longlong) & DAT_140c89110 + uVar3) +
                *(int *) ((longlong) & DAT_140c8910c + uVar3) + *(int *) ((longlong) & DAT_140c89108 + uVar3) +
                *(int *) ((longlong) & DAT_140c89104 + uVar3) + *(int *) ((longlong) & DAT_140c89100 + uVar3);
        uVar3 = uVar4;
    } while (uVar4 < 0xf0);
    iVar1 = DAT_140c890d4 * -0x77777777;
    DAT_140c890d4 = DAT_140c890d4 / 0x3c;
    DAT_140c890d8 = DAT_140c890d8 % 0x3c + 1;
    return iVar1;
}


undefined8 FUN_140198740(undefined8 param_1, ulonglong param_2) {
    FUN_140198780();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140198780(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b5e6b0;
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    if (param_1[4] != 0) {
        FUN_140044ca0(param_1 + 2, *(undefined8 * )(param_1[3] + 8));
        *(undefined8 * )(param_1[3] + 0x10) = param_1[3];
        *(undefined8 * )(param_1[3] + 8) = 0;
        *(undefined8 * )(param_1[3] + 0x18) = param_1[3];
        param_1[4] = 0;
    }
    FUN_14018b900(param_1[3], 0);
    *param_1 = &PTR_LAB_140b55048;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 *FUN_140198800(undefined8 param_1, ushort *param_2) {
    ulonglong uVar1;
    ushort uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined2 *puVar5;
    int iVar6;
    undefined2 *puVar7;
    undefined2 *puVar8;
    undefined8 uVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined2 *puVar12;
    ushort *puVar14;
    ushort *puVar15;
    undefined2 *puVar16;
    bool bVar17;
    longlong local_res8;
    undefined local_48[8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;
    undefined2 *puVar13;

    lVar4 = DAT_140c63748;
    uVar2 = *param_2;
    while (true) {
        if (uVar2 == 0) {
            return (undefined2 *) 0x2;
        }
        iVar6 = isspace((uint) uVar2);
        if (iVar6 == 0) break;
        uVar2 = param_2[1];
        param_2 = param_2 + 1;
    }
    puVar15 = param_2;
    if (*param_2 == 0) {
        return (undefined2 *) 0x2;
    }
    do {
        iVar6 = isspace((uint) * puVar15);
        if (iVar6 != 0) break;
        puVar15 = puVar15 + 1;
    } while (*puVar15 != 0);
    puVar13 = (undefined2 *) 0x0;
    puVar12 = (undefined2 *) 0x0;
    lVar11 = (longlong) puVar15 - (longlong) param_2 >> 1;
    uVar1 = lVar11 + 1;
    puVar7 = puVar13;
    if (uVar1 < 0x7fffffffffffffff) {
        puVar7 = (undefined2 *) FUN_14018b280(uVar1 * 2, 0);
    }
    FUN_1407db590(puVar7, param_2);
    if (puVar7 + lVar11 != (undefined2 *) 0x0) {
        puVar7[lVar11] = 0;
    }
    uVar2 = *puVar15;
    while ((uVar2 != 0 && (iVar6 = isspace((uint) * puVar15), iVar6 != 0))) {
        puVar15 = puVar15 + 1;
        uVar2 = *puVar15;
    }
    local_40 = (undefined2 *) 0x0;
    local_38 = (undefined2 *) 0x0;
    local_30 = (undefined2 *) 0x0;
    local_40 = (undefined2 *) FUN_14018b280(0x10);
    local_30 = local_40 + 8;
    if (local_40 != (undefined2 *) 0x0) {
        *local_40 = 0;
    }
    puVar14 = puVar15;
    local_38 = local_40;
    if (*puVar15 != 0) {
        do {
            puVar14 = puVar14 + 1;
        } while (*puVar14 != 0);
        lVar11 = (longlong) puVar14 - (longlong) puVar15 >> 1;
        uVar1 = lVar11 + 1;
        puVar16 = puVar13;
        puVar8 = puVar13;
        if (uVar1 < 0x7fffffffffffffff) {
            puVar8 = (undefined2 *) FUN_14018b280(uVar1 * 2, 0);
            puVar16 = puVar8 + uVar1;
        }
        FUN_1407db590(puVar8, puVar15);
        puVar5 = local_40;
        local_38 = puVar8 + lVar11;
        if (local_38 != (undefined2 *) 0x0) {
            *local_38 = 0;
        }
        bVar17 = local_40 != (undefined2 *) 0x0;
        local_40 = puVar8;
        local_30 = puVar16;
        if (bVar17) {
            FUN_14018b900(puVar5, 0);
        }
    }
    puVar16 = local_40;
    lVar11 = *(longlong * )(lVar4 + 0x18);
    local_res8 = lVar11;
    lVar3 = *(longlong * )(lVar11 + 8);
    while (lVar3 != 0) {
        iVar6 = FUN_14018e2c0(*(undefined8 * )(lVar3 + 0x28), puVar7);
        if (iVar6 < 0) {
            lVar3 = *(longlong * )(lVar3 + 0x18);
        } else {
            local_res8 = lVar3;
            lVar3 = *(longlong * )(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar11) ||
        (iVar6 = FUN_14018e2c0(puVar7, *(undefined8 * )(local_res8 + 0x28)), iVar6 < 0)) {
        local_res8 = lVar11;
    }
    if (local_res8 == lVar11) {
        if (puVar16 == local_38) {
            FUN_14019d3a0();
            puVar12 = (undefined2 * )(**(code * *)(_DAT_00000000 + 0x10))(0);
            if (puVar12 == (undefined2 *) 0x0) {
                (**(code * *)(_DAT_00000000 + 8))(0);
                puVar12 = (undefined2 *) 0x2;
            } else {
                puVar16 = puVar13;
                if (puVar12 != (undefined2 *) 0x0) {
                    do {
                        uVar9 = (**(code * *)(_DAT_00000000 + 0x18))(0, puVar16);
                        FUN_140198b40(lVar4, uVar9);
                        puVar16 = (undefined2 * )((longlong) puVar16 + 1);
                    } while (puVar16 < puVar12);
                }
                (**(code * *)(_DAT_00000000 + 8))(0);
                puVar12 = puVar13;
            }
        } else {
            plVar10 = (longlong *) FUN_14019d200();
            if (plVar10 == (longlong *) 0x0) {
                puVar12 = (undefined2 *) 0x2;
            } else {
                iVar6 = *(int *) (plVar10 + 2);
                if (*DAT_140c63750 < *(int *) (plVar10 + 2)) {
                    iVar6 = *DAT_140c63750;
                }
                (**(code * *)(*plVar10 + 0x18))(plVar10, iVar6, local_48);
                FUN_140198b40(lVar4, plVar10);
            }
        }
    } else {
        iVar6 = (**(code * *)(local_res8 + 0x40))(local_48, *(undefined8 * )(local_res8 + 0x48));
        puVar12 = (undefined2 * )(ulonglong)(iVar6 < 0);
    }
    if (local_40 != (undefined2 *) 0x0) {
        FUN_14018b900(local_40, 0);
    }
    if (puVar7 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar7, 0);
    }
    return puVar12;
}



// WARNING: Removing unreachable block (ram,0x000140198bc4)

void FUN_140198b40(longlong param_1, longlong *param_2) {
    short sVar1;
    short *psVar2;
    int iVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined local_48[8];
    undefined2 *local_40;
    undefined2 *local_38;
    undefined2 *local_30;
    undefined local_28[8];
    longlong local_20;
    undefined8 local_18;

    local_40 = (undefined2 *) FUN_14018b280(0x10);
    lVar8 = 0;
    local_30 = local_40 + 8;
    if (local_40 != (undefined2 *) 0x0) {
        *local_40 = 0;
    }
    psVar2 = (short *) param_2[1];
    sVar1 = *psVar2;
    lVar6 = lVar8;
    while (sVar1 != 0) {
        lVar6 = lVar6 + 1;
        sVar1 = psVar2[lVar6];
    }
    lVar5 = lVar8;
    local_38 = local_40;
    if (lVar6 * 2 >> 1 == 0) {
        FUN_1407db590(local_40, psVar2, 0);
    } else {
        FUN_14001c310(local_48);
    }
    do {
        psVar2 = &DAT_1409e1f66 + lVar5;
        lVar5 = lVar5 + 1;
    } while (*psVar2 != 0);
    FUN_14001c310();
    iVar3 = *(int *) (param_2 + 2);
    if (*DAT_140c63750 < *(int *) (param_2 + 2)) {
        iVar3 = *DAT_140c63750;
    }
    (**(code * *)(*param_2 + 0x10))(param_2, local_28, iVar3);
    FUN_14001c310(local_48, local_20, local_18);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    lVar6 = lVar8;
    if (*(int *) (param_2 + 2) != 1) {
        do {
            psVar2 = &DAT_1409e345e + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(local_48, &DAT_1409e345c, &DAT_1409e345c + lVar6 * 2);
        psVar2 = (short *) (&PTR_u_Machine_140c2cba0)[*(int *) (param_2 + 2)];
        sVar1 = *psVar2;
        lVar6 = lVar8;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar2[lVar6];
        }
        FUN_14001c310(local_48, psVar2, psVar2 + lVar6);
        lVar6 = lVar8;
        do {
            psVar2 = &DAT_1409e1f7e + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(local_48, &DAT_1409e1f7c, &DAT_1409e1f7c + lVar6 * 2);
    }
    if ((*(byte * )((longlong) param_2 + 0x14) & 1) != 0) {
        do {
            lVar6 = lVar8 + 1;
            lVar8 = lVar8 + 1;
        } while (L" [Unsaved]"[lVar6] != L'\0');
        FUN_14001c310(local_48, L" [Unsaved]", L" [Unsaved]" + lVar8);
    }
    puVar4 = local_40;
    if (local_40 != (undefined2 *) 0x0) {
        puVar7 = *(undefined8 * *)(param_1 + 0x38);
        if (puVar7 != *(undefined8 * *)(param_1 + 0x40)) {
            do {
                (*(code *) puVar7[1])(*puVar7, puVar4);
                puVar7 = puVar7 + 2;
            } while (puVar7 != *(undefined8 * *)(param_1 + 0x40));
        }
        FUN_14018b900(puVar4, 0);
    }
    return;
}


undefined8 FUN_140198d60(undefined8 param_1, short *param_2, undefined8 param_3, undefined8 param_4) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    longlong local_res8;
    undefined local_58[8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;

    lVar6 = DAT_140c63748;
    lVar9 = 0;
    sVar3 = *param_2;
    lVar8 = lVar9;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = param_2[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar9 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(lVar9, param_2, lVar8);
    puVar2 = (undefined2 * )(lVar8 + lVar9);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar8 = *(longlong * )(lVar6 + 0x18);
    lVar4 = *(longlong * )(lVar6 + 0x18);
    local_res8 = lVar8;
    lVar5 = *(longlong * )(lVar8 + 8);
    while (lVar5 != 0) {
        iVar7 = FUN_14018e2c0(*(undefined8 * )(lVar5 + 0x28), lVar9);
        if (iVar7 < 0) {
            lVar5 = *(longlong * )(lVar5 + 0x18);
        } else {
            local_res8 = lVar5;
            lVar5 = *(longlong * )(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar8) ||
        (iVar7 = FUN_14018e2c0(lVar9, *(undefined8 * )(local_res8 + 0x28)), iVar7 < 0)) {
        local_res8 = lVar8;
    }
    if (lVar9 != 0) {
        FUN_14018b900(lVar9, 0);
    }
    if (local_res8 == lVar4) {
        lVar8 = 0;
        local_50 = 0;
        local_40 = 0;
        sVar3 = *param_2;
        while (sVar3 != 0) {
            lVar8 = lVar8 + 1;
            sVar3 = param_2[lVar8];
        }
        lVar8 = lVar8 * 2 >> 1;
        uVar1 = lVar8 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar9 = uVar1 * 2;
            local_50 = FUN_14018b280(lVar9, 0);
            local_40 = lVar9 + local_50;
        }
        lVar9 = local_50;
        lVar8 = lVar8 * 2;
        FUN_1407db590(local_50, param_2, lVar8);
        local_48 = (undefined2 * )(lVar8 + lVar9);
        if (local_48 != (undefined2 *) 0x0) {
            *local_48 = 0;
        }
        puVar11 = (undefined8 *) FUN_1400edb70(lVar6 + 0x10, local_58);
        *puVar11 = param_3;
        puVar11[1] = param_4;
        if (lVar9 != 0) {
            FUN_14018b900(lVar9, 0);
        }
        uVar10 = 0;
    } else {
        uVar10 = 0x800700b7;
    }
    return uVar10;
}


undefined8 FUN_140198f50(undefined8 param_1, short *param_2) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong local_res8;
    undefined local_48[8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    lVar6 = DAT_140c63748;
    lVar11 = 0;
    sVar3 = *param_2;
    lVar8 = lVar11;
    while (sVar3 != 0) {
        lVar8 = lVar8 + 1;
        sVar3 = param_2[lVar8];
    }
    lVar8 = lVar8 * 2 >> 1;
    uVar1 = lVar8 + 1;
    lVar9 = lVar11;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar9 = FUN_14018b280(uVar1 * 2, 0);
    }
    lVar8 = lVar8 * 2;
    FUN_1407db590(lVar9, param_2, lVar8);
    puVar2 = (undefined2 * )(lVar8 + lVar9);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar8 = *(longlong * )(lVar6 + 0x18);
    lVar4 = *(longlong * )(lVar6 + 0x18);
    local_res8 = lVar8;
    lVar5 = *(longlong * )(lVar8 + 8);
    while (lVar5 != 0) {
        iVar7 = FUN_14018e2c0(*(undefined8 * )(lVar5 + 0x28), lVar9);
        if (iVar7 < 0) {
            lVar5 = *(longlong * )(lVar5 + 0x18);
        } else {
            local_res8 = lVar5;
            lVar5 = *(longlong * )(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar8) ||
        (iVar7 = FUN_14018e2c0(lVar9, *(undefined8 * )(local_res8 + 0x28)), iVar7 < 0)) {
        local_res8 = lVar8;
    }
    if (lVar9 != 0) {
        FUN_14018b900(lVar9, 0);
    }
    if (local_res8 == lVar4) {
        uVar10 = 0x80070490;
    } else {
        local_40 = 0;
        local_30 = 0;
        sVar3 = *param_2;
        while (sVar3 != 0) {
            lVar11 = lVar11 + 1;
            sVar3 = param_2[lVar11];
        }
        lVar8 = lVar11 * 2 >> 1;
        uVar1 = lVar8 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar11 = uVar1 * 2;
            local_40 = FUN_14018b280(lVar11, 0);
            local_30 = lVar11 + local_40;
        }
        lVar11 = local_40;
        lVar8 = lVar8 * 2;
        FUN_1407db590(local_40, param_2, lVar8);
        local_38 = (undefined2 * )(lVar8 + lVar11);
        if (local_38 != (undefined2 *) 0x0) {
            *local_38 = 0;
        }
        FUN_140199f80(lVar6 + 0x10, local_48);
        if (lVar11 != 0) {
            FUN_14018b900(lVar11, 0);
        }
        uVar10 = 0;
    }
    return uVar10;
}


int FUN_140199130(longlong *param_1) {
    short sVar1;
    ushort uVar2;
    short *psVar3;
    longlong *plVar4;
    int iVar5;
    undefined2 *puVar6;
    longlong lVar7;
    undefined2 *puVar8;
    longlong lVar9;
    short *psVar10;
    ushort *puVar11;
    ushort *puVar12;
    ushort *puVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    longlong lVar16;
    ulonglong uVar17;
    longlong lVar18;
    ulonglong uVar19;
    undefined2 *puVar20;
    longlong *local_res8;
    longlong *local_res10;
    longlong local_res18;
    undefined local_98[8];
    undefined2 *local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined local_78[8];
    undefined2 *local_70;
    undefined2 *local_68;
    undefined2 *local_60;
    undefined local_58[8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    lVar9 = DAT_140c63748;
    local_res18 = DAT_140c63748;
    puVar15 = *(undefined8 * *)(DAT_140c63748 + 0x38);
    local_res8 = param_1;
    if (puVar15 != *(undefined8 * *)(DAT_140c63748 + 0x40)) {
        do {
            (*(code *) puVar15[1])(*puVar15, L"FUNCTIONS");
            puVar15 = puVar15 + 2;
        } while (puVar15 != *(undefined8 * *)(lVar9 + 0x40));
    }
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    local_40 = puVar6 + 8;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    lVar18 = *(longlong * )(*(longlong * )(lVar9 + 0x18) + 0x10);
    lVar7 = 0;
    local_50 = puVar6;
    local_48 = puVar6;
    if (lVar18 != *(longlong * )(lVar9 + 0x18)) {
        do {
            do {
                lVar16 = lVar7;
                lVar7 = lVar16 + 1;
            } while ((&DAT_1409e203e)[lVar16] != 0);
            local_90 = (undefined2 *) 0x0;
            local_88 = (undefined2 *) 0x0;
            local_80 = (undefined2 *) 0x0;
            uVar19 = lVar16 + 2 + (*(longlong * )(lVar18 + 0x30) - *(longlong * )(lVar18 + 0x28) >> 1);
            if (uVar19 < 0x7fffffffffffffff) {
                local_88 = (undefined2 *) FUN_14018b280(uVar19 * 2, 0);
                local_80 = local_88 + uVar19;
                if (local_88 != (undefined2 *) 0x0) {
                    *local_88 = 0;
                }
            }
            local_90 = local_88;
            FUN_14001c310(local_98, *(undefined8 * )(lVar18 + 0x28), *(undefined8 * )(lVar18 + 0x30));
            FUN_14001c310(local_98, &DAT_1409e203c, &DAT_1409e203c + (lVar16 + 1) * 2);
            puVar6 = local_90;
            FUN_14001c310(local_58, local_90, local_88);
            if (puVar6 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar6, 0);
            }
            puVar6 = local_50;
            lVar7 = *(longlong * )(lVar18 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong * )(lVar18 + 8);
                if (lVar18 == *(longlong * )(lVar7 + 0x18)) {
                    do {
                        lVar18 = lVar7;
                        lVar7 = *(longlong * )(lVar18 + 8);
                    } while (lVar18 == *(longlong * )(lVar7 + 0x18));
                }
                if (*(longlong * )(lVar18 + 0x18) != lVar7) {
                    lVar18 = lVar7;
                }
            } else {
                for (lVar16 = *(longlong * )(lVar7 + 0x10); lVar18 = lVar7, lVar16 != 0;
                     lVar16 = *(longlong * )(lVar16 + 0x10)) {
                    lVar7 = lVar16;
                }
            }
            lVar7 = 0;
        } while (lVar18 != *(longlong * )(lVar9 + 0x18));
        if (local_50 != local_48) {
            if (local_50 == (undefined2 *) 0x0) goto LAB_140199304;
            puVar15 = *(undefined8 * *)(lVar9 + 0x38);
            if (puVar15 != *(undefined8 * *)(lVar9 + 0x40)) {
                do {
                    (*(code *) puVar15[1])(*puVar15, puVar6);
                    puVar15 = puVar15 + 2;
                } while (puVar15 != *(undefined8 * *)(lVar9 + 0x40));
            }
        }
    }
    if (puVar6 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar6, 0);
    }
    LAB_140199304:
    puVar15 = *(undefined8 * *)(lVar9 + 0x38);
    if (puVar15 != *(undefined8 * *)(lVar9 + 0x40)) {
        do {
            (*(code *) puVar15[1])(*puVar15, &DAT_1409e2074);
            puVar15 = puVar15 + 2;
        } while (puVar15 != *(undefined8 * *)(lVar9 + 0x40));
    }
    puVar15 = *(undefined8 * *)(lVar9 + 0x38);
    if (puVar15 != *(undefined8 * *)(lVar9 + 0x40)) {
        do {
            (*(code *) puVar15[1])(*puVar15, L"VARIABLES");
            puVar15 = puVar15 + 2;
        } while (puVar15 != *(undefined8 * *)(lVar9 + 0x40));
    }
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    local_60 = puVar6 + 8;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    local_70 = puVar6;
    local_68 = puVar6;
    puVar8 = (undefined2 *) FUN_14018b280(0x10);
    local_40 = puVar8 + 8;
    if (puVar8 != (undefined2 *) 0x0) {
        *puVar8 = 0;
    }
    local_res8 = (longlong *) 0x0;
    local_50 = puVar8;
    local_48 = puVar8;
    iVar5 = FUN_14019d2a0(local_40, &local_res8);
    plVar4 = local_res8;
    if (iVar5 < 0) {
        if (local_res8 != (longlong *) 0x0) {
            (**(code * *)(*local_res8 + 8))();
        }
        if (puVar8 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar8, 0);
        }
        if (puVar6 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar6, 0);
        }
    } else {
        local_res10 = (longlong * )(**(code * *)(*local_res8 + 0x10))(local_res8);
        local_res8 = (longlong *) 0x0;
        puVar20 = local_70;
        if (local_res10 != (longlong *) 0x0) {
            do {
                puVar12 = (ushort *) 0x0;
                lVar9 = (**(code * *)(*plVar4 + 0x18))(plVar4, local_res8);
                psVar3 = *(short **) (lVar9 + 8);
                psVar10 = (short *) FUN_1407dd988(psVar3, 0x2e);
                puVar6 = (undefined2 *) FUN_14018b280(0x10);
                if (puVar6 != (undefined2 *) 0x0) {
                    *puVar6 = 0;
                }
                if (psVar10 == (short *) 0x0) {
                    sVar1 = *psVar3;
                    puVar11 = puVar12;
                    while (sVar1 != 0) {
                        puVar11 = (ushort * )((longlong) puVar11 + 1);
                        sVar1 = psVar3[(longlong) puVar11];
                    }
                    psVar10 = psVar3 + (longlong) puVar11;
                }
                lVar9 = (longlong) psVar10 - (longlong) psVar3 >> 1;
                uVar19 = lVar9 + 1;
                if (uVar19 < 0x7fffffffffffffff) {
                    puVar12 = (ushort *) FUN_14018b280(uVar19 * 2, 0);
                }
                FUN_1407db590(puVar12, psVar3);
                puVar11 = puVar12 + lVar9;
                if (puVar11 != (ushort *) 0x0) {
                    *puVar11 = 0;
                }
                if (puVar6 != (undefined2 *) 0x0) {
                    FUN_14018b900(puVar6, 0);
                }
                puVar6 = local_68;
                uVar17 = 0;
                uVar19 = (longlong) local_68 - (longlong) puVar20 >> 1;
                if (uVar19 == (longlong) puVar11 - (longlong) puVar12 >> 1) {
                    if (uVar19 != 0) {
                        puVar13 = puVar12;
                        uVar14 = uVar17;
                        do {
                            uVar2 = *(ushort * )(((longlong) puVar20 - (longlong) puVar12) + (longlong) puVar13);
                            if (uVar2 != *puVar13) {
                                iVar5 = 1;
                                if (uVar2 < *puVar13) {
                                    iVar5 = -1;
                                }
                                if (iVar5 != 0) goto LAB_140199539;
                                break;
                            }
                            uVar14 = uVar14 + 1;
                            puVar13 = puVar13 + 1;
                        } while (uVar14 < uVar19);
                    }
                } else {
                    LAB_140199539:
                    if (puVar20 != local_68) {
                        do {
                            uVar17 = uVar17 + 1;
                        } while (*(short *) (&DAT_1409e1fcc + uVar17 * 2) != 0);
                        local_90 = (undefined2 *) 0x0;
                        uVar19 = uVar19 + 1 + uVar17;
                        local_88 = (undefined2 *) 0x0;
                        local_80 = (undefined2 *) 0x0;
                        if (uVar19 < 0x7fffffffffffffff) {
                            local_88 = (undefined2 *) FUN_14018b280(uVar19 * 2, 0);
                            local_80 = local_88 + uVar19;
                            if (local_88 != (undefined2 *) 0x0) {
                                *local_88 = 0;
                            }
                        }
                        local_90 = local_88;
                        FUN_14001c310(local_98, puVar20, puVar6);
                        FUN_14001c310(local_98, &DAT_1409e1fcc, &DAT_1409e1fcc + uVar17 * 2);
                        puVar6 = local_90;
                        FUN_14001c310(local_58, local_90, local_88);
                        if (puVar6 != (undefined2 *) 0x0) {
                            FUN_14018b900(puVar6, 0);
                        }
                    }
                    FUN_14001c480(local_78, puVar12, puVar11);
                    puVar20 = local_70;
                }
                puVar8 = local_68;
                if (puVar12 != (ushort *) 0x0) {
                    FUN_14018b900(puVar12, 0);
                }
                puVar6 = local_70;
                lVar9 = local_res18;
                local_res8 = (longlong * )((longlong) local_res8 + 1);
            } while (local_res8 < local_res10);
            if (puVar20 != puVar8) {
                lVar18 = 0;
                do {
                    lVar18 = lVar18 + 1;
                } while (*(short *) (&DAT_1409e1f94 + lVar18 * 2) != 0);
                local_90 = (undefined2 *) 0x0;
                local_88 = (undefined2 *) 0x0;
                local_80 = (undefined2 *) 0x0;
                uVar19 = ((longlong) puVar8 - (longlong) local_70 >> 1) + 1 + lVar18;
                if (uVar19 < 0x7fffffffffffffff) {
                    local_88 = (undefined2 *) FUN_14018b280(uVar19 * 2, 0);
                    local_80 = local_88 + uVar19;
                    if (local_88 != (undefined2 *) 0x0) {
                        *local_88 = 0;
                    }
                }
                local_90 = local_88;
                FUN_14001c310(local_98, puVar6, puVar8);
                FUN_14001c310(local_98, &DAT_1409e1f94, &DAT_1409e1f94 + lVar18 * 2);
                puVar8 = local_90;
                FUN_14001c310(local_58, local_90, local_88);
                if (puVar8 != (undefined2 *) 0x0) {
                    FUN_14018b900(puVar8, 0);
                }
            }
            puVar8 = local_50;
            if (((local_50 != local_48) && (local_50 != (undefined2 *) 0x0)) &&
                (puVar15 = *(undefined8 * *)(lVar9 + 0x38), puVar15 != *(undefined8 * *)(lVar9 + 0x40))) {
                do {
                    (*(code *) puVar15[1])(*puVar15, puVar8);
                    puVar15 = puVar15 + 2;
                } while (puVar15 != *(undefined8 * *)(lVar9 + 0x40));
            }
        }
        (**(code * *)(*plVar4 + 8))(plVar4);
        if (puVar8 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar8, 0);
        }
        if (puVar6 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar6, 0);
        }
        iVar5 = 0;
    }
    return iVar5;
}



// WARNING: Removing unreachable block (ram,0x000140199af2)

int FUN_140199760(longlong *param_1, short *param_2, code *param_3, undefined8 param_4) {
    short sVar1;
    undefined2 *puVar2;
    int iVar3;
    longlong lVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined2 *puVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong **pplVar11;
    undefined2 *puVar12;
    short *psVar13;
    ulonglong uVar14;
    undefined2 *puVar15;
    longlong *plVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    undefined2 *puVar19;
    undefined2 *puVar20;
    longlong *plVar21;
    bool bVar22;
    longlong *local_res8;
    longlong *local_res10;
    code *local_res18;
    undefined8 local_res20;
    undefined local_a8[8];
    undefined2 *local_a0;
    undefined2 *local_98;
    undefined2 *local_90;
    undefined local_88[8];
    undefined2 *local_80;
    undefined2 *local_78;
    undefined2 *local_70;
    undefined local_68[8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;

    sVar1 = *param_2;
    while (sVar1 == 0x20) {
        param_2 = param_2 + 1;
        sVar1 = *param_2;
    }
    local_res8 = param_1;
    local_res18 = param_3;
    local_res20 = param_4;
    lVar4 = FUN_1407dd988(param_2, 0x20);
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    lVar7 = 0;
    local_50 = puVar5 + 8;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    local_a0 = (undefined2 *) 0x0;
    local_98 = (undefined2 *) 0x0;
    local_90 = (undefined2 *) 0x0;
    local_60 = puVar5;
    local_58 = puVar5;
    local_a0 = (undefined2 *) FUN_14018b280(0x10);
    local_90 = local_a0 + 8;
    if (local_a0 != (undefined2 *) 0x0) {
        *local_a0 = 0;
    }
    local_98 = local_a0;
    if (lVar4 == 0) {
        sVar1 = *param_2;
        while (sVar1 != 0) {
            lVar7 = lVar7 + 1;
            sVar1 = param_2[lVar7];
        }
        if (lVar7 * 2 >> 1 == 0) {
            FUN_1407db590(puVar5, param_2, 0);
            puVar20 = puVar5;
            puVar8 = puVar5;
        } else {
            FUN_14001c310(local_68, param_2);
            puVar20 = local_58;
            puVar8 = local_60;
        }
        local_res8 = (longlong *) 0x0;
        iVar3 = FUN_14019d3a0();
        plVar9 = local_res8;
        if (-1 < iVar3) {
            uVar14 = (**(code * *)(*local_res8 + 0x10))(local_res8);
            if (uVar14 != 0) {
                lVar7 = (**(code * *)(*plVar9 + 0x18))(plVar9, 0);
                psVar13 = *(short **) (lVar7 + 8);
                lVar7 = 0;
                sVar1 = *psVar13;
                while (sVar1 != 0) {
                    lVar7 = lVar7 + 1;
                    sVar1 = psVar13[lVar7];
                }
                uVar18 = (longlong) local_98 - (longlong) local_a0 >> 1;
                uVar17 = lVar7 * 2 >> 1;
                if (uVar18 < uVar17) {
                    FUN_1407db590(local_a0, psVar13, uVar18 * 2);
                    FUN_14001c310(local_a8, psVar13 + ((longlong) local_98 - (longlong) local_a0 >> 1));
                } else {
                    FUN_1407db590(local_a0, psVar13);
                    puVar5 = local_98;
                    puVar15 = local_a0 + uVar17;
                    if (puVar15 != local_98) {
                        FUN_1407db590(puVar15, local_98);
                        local_98 = local_98 + -((longlong) puVar5 - (longlong) puVar15 >> 1);
                    }
                }
                plVar16 = (longlong * )((longlong) local_98 - (longlong) local_a0 >> 1);
                if (uVar14 == 1) {
                    lVar7 = 0;
                    do {
                        psVar13 = &DAT_1409e20d6 + lVar7;
                        lVar7 = lVar7 + 1;
                    } while (*psVar13 != 0);
                    FUN_14001c310(local_a8);
                    plVar10 = (longlong * )(**(code * *)(*plVar9 + 0x18))(plVar9, 0);
                    iVar3 = *(int *) (plVar10 + 2);
                    if (*DAT_140c63750 < iVar3) {
                        iVar3 = *DAT_140c63750;
                    }
                    (**(code * *)(*plVar10 + 0x10))(plVar10, local_68, iVar3);
                    FUN_14001c310(local_a8, local_60, local_58);
                    if (local_60 != (undefined2 *) 0x0) {
                        FUN_14018b900(local_60, 0);
                    }
                } else {
                    uVar17 = 1;
                    if (1 < uVar14) {
                        plVar21 = (longlong * )((longlong) puVar20 - (longlong) puVar8 >> 1);
                        plVar10 = plVar16;
                        do {
                            lVar7 = (**(code * *)(*plVar9 + 0x18))(plVar9, uVar17);
                            plVar16 = plVar21;
                            if (plVar21 < plVar10) {
                                psVar13 = (short *) (*(longlong * )(lVar7 + 8) + (longlong) plVar21 * 2);
                                do {
                                    if (*(short *) (((longlong) local_a0 - *(longlong * )(lVar7 + 8)) +
                                                    (longlong) psVar13
                                    ) != *psVar13)
                                        break;
                                    plVar16 = (longlong * )((longlong) plVar16 + 1);
                                    psVar13 = psVar13 + 1;
                                } while (plVar16 < plVar10);
                            }
                            uVar17 = uVar17 + 1;
                            plVar10 = plVar16;
                        } while (uVar17 < uVar14);
                    }
                    puVar5 = local_a0;
                    plVar10 = (longlong * )((longlong) local_98 - (longlong) local_a0 >> 1);
                    if (plVar16 < plVar10) {
                        local_res8 = plVar10;
                        local_res10 = plVar16;
                        pplVar11 = &local_res8;
                        if (plVar16 <= plVar10) {
                            pplVar11 = &local_res10;
                        }
                        puVar15 = local_a0 + (longlong) * pplVar11;
                        puVar12 = (undefined2 *) 0x0;
                        puVar19 = (undefined2 *) 0x0;
                        uVar14 = ((longlong) puVar15 - (longlong) local_a0 >> 1) + 1;
                        if (uVar14 < 0x7fffffffffffffff) {
                            puVar12 = (undefined2 *) FUN_14018b280(uVar14 * 2, 0);
                            puVar19 = puVar12 + uVar14;
                        }
                        puVar2 = local_a0;
                        local_98 = puVar12;
                        if (puVar5 != puVar15) {
                            lVar7 = (longlong) puVar5 - (longlong) puVar12;
                            do {
                                if (local_98 != (undefined2 *) 0x0) {
                                    *local_98 = *(undefined2 * )((longlong) local_98 + lVar7);
                                }
                                local_98 = local_98 + 1;
                            } while ((undefined2 * )((longlong) local_98 + lVar7) != puVar15);
                        }
                        if (local_98 != (undefined2 *) 0x0) {
                            *local_98 = 0;
                        }
                        bVar22 = local_a0 != (undefined2 *) 0x0;
                        local_a0 = puVar12;
                        local_90 = puVar19;
                        if (bVar22) {
                            FUN_14018b900(puVar2, 0);
                        }
                    }
                }
                (**(code * *)(*plVar9 + 8))(plVar9);
                goto LAB_140199de7;
            }
            iVar3 = -0x7fffbffb;
        }
        if (plVar9 != (longlong *) 0x0) {
            (**(code * *)(*plVar9 + 8))(plVar9);
        }
    } else {
        sVar1 = *param_2;
        lVar6 = lVar7;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = param_2[lVar6];
        }
        lVar6 = lVar6 * 2 >> 1;
        uVar14 = lVar6 + 1;
        if (uVar14 < 0x7fffffffffffffff) {
            lVar7 = FUN_14018b280(uVar14 * 2, 0);
        }
        lVar6 = lVar6 * 2;
        FUN_1407db590(lVar7, param_2, lVar6);
        puVar20 = (undefined2 * )(lVar7 + lVar6);
        puVar8 = (undefined2 *) 0x0;
        if (puVar20 != (undefined2 *) 0x0) {
            *puVar20 = 0;
        }
        local_res8 = (longlong * )((longlong) puVar20 - lVar7 >> 1);
        local_res10 = (longlong * )(lVar4 - (longlong) param_2 >> 1);
        pplVar11 = &local_res8;
        if (local_res10 <= local_res8) {
            pplVar11 = &local_res10;
        }
        lVar4 = (longlong) * pplVar11 * 2 >> 1;
        if (lVar4 + 1U < 0x7fffffffffffffff) {
            puVar8 = (undefined2 *) FUN_14018b280((lVar4 + 1U) * 2, 0);
        }
        FUN_1407db590(puVar8, lVar7, lVar4 * 2);
        puVar20 = puVar8 + lVar4;
        lVar4 = 0;
        if (puVar20 != (undefined2 *) 0x0) {
            *puVar20 = 0;
        }
        if (puVar5 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar5, 0);
        }
        if (lVar7 != 0) {
            FUN_14018b900(lVar7, 0);
        }
        plVar9 = (longlong *) FUN_14019d200();
        if (plVar9 == (longlong *) 0x0) {
            iVar3 = -0x7fffbffb;
            goto LAB_140199e0b;
        }
        psVar13 = (short *) plVar9[1];
        sVar1 = *psVar13;
        while (sVar1 != 0) {
            lVar4 = lVar4 + 1;
            sVar1 = psVar13[lVar4];
        }
        uVar17 = (longlong) local_98 - (longlong) local_a0 >> 1;
        uVar14 = lVar4 * 2 >> 1;
        if (uVar17 < uVar14) {
            FUN_1407db590(local_a0, psVar13, uVar17 * 2);
            FUN_14001c310(local_a8, psVar13 + ((longlong) local_98 - (longlong) local_a0 >> 1));
        } else {
            FUN_1407db590(local_a0, psVar13);
            puVar5 = local_98;
            puVar15 = local_a0 + uVar14;
            if (puVar15 != local_98) {
                FUN_1407db590(puVar15, local_98);
                local_98 = local_98 + -((longlong) puVar5 - (longlong) puVar15 >> 1);
            }
        }
        plVar16 = (longlong * )((longlong) local_98 - (longlong) local_a0 >> 1);
        iVar3 = *(int *) (plVar9 + 2);
        if (*DAT_140c63750 < *(int *) (plVar9 + 2)) {
            iVar3 = *DAT_140c63750;
        }
        (**(code * *)(*plVar9 + 0x10))(plVar9, local_68, iVar3);
        lVar7 = 0;
        do {
            lVar7 = lVar7 + 1;
        } while (*(short *) (&DAT_1409e20ec + lVar7 * 2) != 0);
        local_80 = (undefined2 *) 0x0;
        local_78 = (undefined2 *) 0x0;
        local_70 = (undefined2 *) 0x0;
        uVar14 = ((longlong) local_58 - (longlong) local_60 >> 1) + 1 + lVar7;
        if (uVar14 < 0x7fffffffffffffff) {
            local_78 = (undefined2 *) FUN_14018b280(uVar14 * 2, 0);
            local_70 = local_78 + uVar14;
            if (local_78 != (undefined2 *) 0x0) {
                *local_78 = 0;
            }
        }
        local_80 = local_78;
        FUN_14001c310(local_88, &DAT_1409e20ec, &DAT_1409e20ec + lVar7 * 2);
        FUN_14001c310(local_88, local_60, local_58);
        puVar5 = local_80;
        FUN_14001c310(local_a8, local_80, local_78);
        if (puVar5 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar5, 0);
        }
        if (local_60 != (undefined2 *) 0x0) {
            FUN_14018b900(local_60, 0);
        }
        LAB_140199de7:
        iVar3 = (*local_res18)(local_a8, local_res20);
        if ((-1 < iVar3) &&
            (iVar3 = 1, plVar16 != (longlong * )((longlong) puVar20 - (longlong) puVar8 >> 1))) {
            iVar3 = 0;
        }
    }
    LAB_140199e0b:
    if (local_a0 != (undefined2 *) 0x0) {
        FUN_14018b900(local_a0, 0);
    }
    if (puVar8 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar8, 0);
    }
    return iVar3;
}


undefined8 FUN_140199e60(void) {
    undefined8 *puVar1;
    undefined *puVar2;

    puVar1 = (undefined8 *) FUN_14018b280();
    if (puVar1 != (undefined8 *) 0x0) {
        *puVar1 = &PTR_LAB_140b55048;
        *(undefined4 * )(puVar1 + 1) = 1;
        *puVar1 = &PTR_LAB_140b5e6b0;
        puVar2 = (undefined *) FUN_14018b280();
        puVar1[3] = puVar2;
        puVar1[4] = 0;
        *puVar2 = 0;
        *(undefined8 * )(puVar1[3] + 8) = 0;
        *(undefined8 * )(puVar1[3] + 0x10) = puVar1[3];
        *(undefined8 * )(puVar1[3] + 0x18) = puVar1[3];
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        DAT_140c63748 = puVar1;
        return 0;
    }
    DAT_140c63748 = (undefined8 *) 0x0;
    return 0;
}


void FUN_140199ef0(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 local_18;
    undefined8 local_10;

    lVar2 = DAT_140c63748;
    local_10 = param_1[1];
    local_18 = *param_1;
    lVar3 = FUN_14019a370(*(undefined8 * )(DAT_140c63748 + 0x38), *(undefined8 * )(DAT_140c63748 + 0x40),
                          &local_18);
    lVar5 = *(longlong * )(lVar2 + 0x40);
    if ((lVar3 + 0x10 != lVar5) && (lVar5 = lVar5 - (lVar3 + 0x10) >> 4, 0 < lVar5)) {
        puVar4 = (undefined8 * )(lVar3 + 8);
        do {
            lVar5 = lVar5 + -1;
            *puVar4 = puVar4[2];
            puVar4[-1] = puVar4[1];
            puVar4 = puVar4 + 2;
        } while (0 < lVar5);
    }
    plVar1 = (longlong * )(lVar2 + 0x40);
    *plVar1 = *plVar1 + -0x10;
    return;
}


longlong FUN_140199f80(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;
    longlong local_res18;

    local_res18 = *(longlong * )(param_1 + 8);
    lVar6 = *(longlong * )(local_res18 + 8);
    local_res8 = local_res18;
    if (lVar6 != 0) {
        uVar1 = *(undefined8 * )(param_2 + 8);
        lVar4 = lVar6;
        do {
            iVar3 = FUN_14018e2c0(uVar1, *(undefined8 * )(lVar4 + 0x28));
            if (iVar3 < 0) {
                lVar5 = *(longlong * )(lVar4 + 0x10);
                local_res8 = lVar4;
            } else {
                lVar5 = *(longlong * )(lVar4 + 0x18);
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
        if (lVar6 != 0) {
            uVar1 = *(undefined8 * )(param_2 + 8);
            do {
                iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar6 + 0x28), uVar1);
                if (iVar3 < 0) {
                    lVar4 = *(longlong * )(lVar6 + 0x18);
                } else {
                    lVar4 = *(longlong * )(lVar6 + 0x10);
                    local_res18 = lVar6;
                }
                lVar6 = lVar4;
            } while (lVar4 != 0);
        }
    }
    lVar6 = 0;
    lVar4 = local_res18;
    while (lVar4 != local_res8) {
        lVar5 = *(longlong * )(lVar4 + 0x18);
        if (lVar5 == 0) {
            lVar5 = *(longlong * )(lVar4 + 8);
            if (lVar4 == *(longlong * )(lVar5 + 0x18)) {
                do {
                    lVar4 = lVar5;
                    lVar5 = *(longlong * )(lVar4 + 8);
                } while (lVar4 == *(longlong * )(lVar5 + 0x18));
            }
            if (*(longlong * )(lVar4 + 0x18) != lVar5) {
                lVar4 = lVar5;
            }
        } else {
            for (lVar2 = *(longlong * )(lVar5 + 0x10); lVar4 = lVar5, lVar2 != 0;
                 lVar2 = *(longlong * )(lVar2 + 0x10)) {
                lVar5 = lVar2;
            }
        }
        lVar6 = lVar6 + 1;
    }
    FUN_14019a270(param_1, &local_res18, &local_res8);
    return lVar6;
}


void FUN_14019a0b0(longlong param_1, undefined8 *param_2, undefined8 *param_3) {
    undefined8 uVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;

    puVar9 = *(undefined8 * *)(param_1 + 0x10);
    if (puVar9 == *(undefined8 * *)(param_1 + 0x18)) {
        lVar10 = (longlong) puVar9 - *(longlong * )(param_1 + 8) >> 4;
        lVar7 = lVar10 * 2;
        if (lVar10 == 0) {
            lVar7 = 1;
        }
        uVar4 = FUN_14018a3e0(lVar7 << 4);
        puVar5 = (undefined8 *) FUN_14018b280(uVar4 & 0xfffffffffffffff0, 0);
        puVar8 = puVar5;
        for (puVar9 = *(undefined8 * *)(param_1 + 8); puVar9 != param_2; puVar9 = puVar9 + 2) {
            if (puVar8 != (undefined8 *) 0x0) {
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8[1] = puVar9[1];
                *puVar8 = *puVar9;
            }
            puVar8 = puVar8 + 2;
        }
        if (puVar8 != (undefined8 *) 0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[1] = param_3[1];
            *puVar8 = *param_3;
        }
        puVar3 = *(undefined8 * *)(param_1 + 0x10);
        puVar9 = puVar8 + 2;
        if (param_2 != puVar3) {
            lVar7 = (longlong) param_2 - (longlong) puVar8;
            puVar8 = puVar9;
            do {
                if (puVar8 != (undefined8 *) 0x0) {
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[1] = *(undefined8 * )(lVar7 + -8 + (longlong) puVar8);
                    *puVar8 = *(undefined8 * )(lVar7 + -0x10 + (longlong) puVar8);
                }
                puVar9 = puVar8 + 2;
                puVar6 = (undefined8 * )((longlong) puVar8 + lVar7);
                puVar8 = puVar9;
            } while (puVar6 != puVar3);
        }
        if (*(longlong * )(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong * )(param_1 + 8), 0);
        }
        *(undefined8 * *)(param_1 + 8) = puVar5;
        *(undefined8 * *)(param_1 + 0x10) = puVar9;
        *(ulonglong * )(param_1 + 0x18) = (uVar4 & 0xfffffffffffffff0) + (longlong) puVar5;
        return;
    }
    if (puVar9 != (undefined8 *) 0x0) {
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[1] = puVar9[-1];
        *puVar9 = puVar9[-2];
    }
    *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + 0x10;
    uVar1 = param_3[1];
    uVar2 = *param_3;
    puVar9 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x20);
    puVar8 = (undefined8 * )(*(longlong * )(param_1 + 0x10) + -0x10);
    for (lVar7 = (longlong) puVar9 - (longlong) param_2 >> 4; 0 < lVar7; lVar7 = lVar7 + -1) {
        puVar5 = puVar9 + -1;
        puVar9 = puVar9 + -2;
        puVar8[-1] = *puVar5;
        puVar8[-2] = *puVar9;
        puVar8 = puVar8 + -2;
    }
    param_2[1] = uVar1;
    *param_2 = uVar2;
    return;
}


void FUN_14019a270(longlong param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong * )(param_1 + 8);
    if ((*param_2 == *(longlong * )(lVar2 + 0x10)) && (*param_3 == lVar2)) {
        if (*(longlong * )(param_1 + 0x10) != 0) {
            FUN_140044ca0(param_1, *(undefined8 * )(lVar2 + 8));
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x10) = *(longlong * )(param_1 + 8);
            *(undefined8 * )(*(longlong * )(param_1 + 8) + 8) = 0;
            *(longlong * )(*(longlong * )(param_1 + 8) + 0x18) = *(longlong * )(param_1 + 8);
            *(undefined8 * )(param_1 + 0x10) = 0;
            return;
        }
    } else if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong * )(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong * )(*param_2 + 8);
                if (*param_2 == *(longlong * )(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong * )(lVar2 + 8);
                    } while (*param_2 == *(longlong * )(lVar2 + 0x18));
                }
                if (*(longlong * )(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            } else {
                *param_2 = lVar2;
                lVar1 = *(longlong * )(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong * )(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong * )(lVar2 + 0x10);
                }
            }
            FUN_14019a450(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


longlong *FUN_14019a370(longlong *param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    longlong lVar2;

    lVar2 = (longlong) param_2 - (longlong) param_1 >> 6;
    if (0 < lVar2) {
        lVar1 = *param_3;
        do {
            if ((*param_1 == lVar1) && (param_1[1] == param_3[1])) {
                return param_1;
            }
            if ((param_1[2] == lVar1) && (param_1[3] == param_3[1])) {
                return param_1 + 2;
            }
            if ((param_1[4] == lVar1) && (param_1[5] == param_3[1])) {
                return param_1 + 4;
            }
            if ((param_1[6] == lVar1) && (param_1[7] == param_3[1])) {
                return param_1 + 6;
            }
            lVar2 = lVar2 + -1;
            param_1 = param_1 + 8;
        } while (0 < lVar2);
    }
    lVar2 = (longlong) param_2 - (longlong) param_1 >> 4;
    if (lVar2 != 1) {
        if (lVar2 != 2) {
            if (lVar2 != 3) {
                return param_2;
            }
            if ((*param_1 == *param_3) && (param_1[1] == param_3[1])) {
                return param_1;
            }
            param_1 = param_1 + 2;
        }
        if ((*param_1 == *param_3) && (param_1[1] == param_3[1])) {
            return param_1;
        }
        param_1 = param_1 + 2;
    }
    if ((*param_1 == *param_3) && (param_1[1] == param_3[1])) {
        return param_1;
    }
    return param_2;
}


void FUN_14019a450(longlong param_1, longlong *param_2) {
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong * )(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8a1d4, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x00014019a515. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    } else {
        lVar2 = FUN_140007db0(*param_2, lVar2 + 8, lVar2 + 0x10, lVar2 + 0x18);
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            FUN_14018b900(*(longlong * )(lVar2 + 0x28), 0);
        }
        FUN_14018b900(lVar2, 0);
        *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + -1;
    }
    return;
}


void FUN_14019a560(short **param_1, short *param_2, uint *param_3) {
    code *pcVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    short sVar6;
    int iVar7;
    short *psVar8;
    short *psVar9;
    short *psVar10;
    ulonglong uVar11;
    undefined auStack248[32];
    uint local_d8[4];
    undefined2 local_c8[64];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack248;
    for (psVar8 = *param_1; (psVar8 < param_2 && ((*psVar8 == 0x20 || (*psVar8 == 9))));
         psVar8 = psVar8 + 1) {
    }
    bVar4 = false;
    bVar5 = false;
    if ((psVar8 < param_2) && (*psVar8 == 0x2d)) {
        psVar8 = psVar8 + 1;
        bVar5 = true;
    }
    bVar2 = false;
    psVar10 = psVar8;
    bVar3 = false;
    if (psVar8 < param_2) {
        iVar7 = FUN_1407dff2c(*psVar8);
        psVar9 = psVar8;
        bVar2 = false;
        bVar3 = bVar4;
        if (iVar7 != 0) {
            psVar9 = psVar8 + 1;
            bVar2 = true;
            psVar10 = psVar9;
            if (param_2 <= psVar9) goto LAB_14019a64c;
            do {
                iVar7 = FUN_1407dff2c(*psVar9);
                bVar2 = true;
                if (iVar7 == 0) break;
                psVar9 = psVar9 + 1;
            } while (psVar9 < param_2);
        }
        psVar10 = psVar9;
        if ((((psVar9 < param_2) && (*psVar9 == 0x2e)) && (psVar10 = psVar9 + 1, psVar10 < param_2)) &&
            (iVar7 = FUN_1407dff2c(*psVar10), iVar7 != 0)) {
            psVar10 = psVar9 + 2;
            bVar3 = true;
            while ((psVar10 < param_2 && (iVar7 = FUN_1407dff2c(*psVar10), iVar7 != 0))) {
                psVar10 = psVar10 + 1;
            }
        }
    }
    LAB_14019a64c:
    if ((!bVar2) && (!bVar3)) goto LAB_14019a656;
    if ((psVar10 < param_2) && (sVar6 = FUN_1407df5f4(*psVar10), sVar6 == 0x65)) {
        psVar9 = psVar10 + 1;
        if (param_2 <= psVar9) goto LAB_14019a656;
        if (*psVar9 == 0x2d) {
            psVar9 = psVar10 + 2;
        }
        if ((param_2 <= psVar9) || (iVar7 = FUN_1407dff2c(*psVar9), psVar10 = psVar9, iVar7 == 0))
            goto LAB_14019a656;
        do {
            psVar10 = psVar10 + 1;
            if (param_2 <= psVar10) break;
            iVar7 = FUN_1407dff2c(*psVar10);
        } while (iVar7 != 0);
    }
    psVar9 = psVar10;
    if ((psVar10 < param_2) && (sVar6 = FUN_1407df5f4(*psVar10), sVar6 == 0x66)) {
        psVar9 = psVar10 + 1;
    }
    uVar11 = (longlong) psVar10 - (longlong) psVar8 >> 1;
    if (uVar11 < 0x40) {
        FUN_1407db590(local_c8, psVar8, uVar11 * 2);
        if (0x7f < uVar11 * 2) {
            __report_rangecheckfailure();
            pcVar1 = (code *) swi(3);
            (*pcVar1)();
            return;
        }
        local_c8[uVar11] = 0;
        iVar7 = FUN_1407df428(local_c8, &DAT_1409e3684, local_d8);
        if (iVar7 != 0) {
            *param_1 = psVar9;
            if (bVar5) {
                local_d8[0] = local_d8[0] ^ 0x80000000;
            }
            *param_3 = local_d8[0];
        }
    }
    LAB_14019a656:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack248);
    return;
}


undefined8 FUN_14019a770(short **param_1, short *param_2, longlong param_3) {
    longlong lVar1;
    int iVar2;
    undefined2 *puVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    ulonglong *puVar6;
    undefined2 *puVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;
    short *psVar10;
    short *psVar11;
    ulonglong uVar12;
    undefined2 *puVar13;
    undefined2 *puVar14;
    ulonglong local_res10;
    ulonglong local_res20;
    undefined local_58[8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    psVar11 = *param_1;
    if (param_2 <= psVar11) {
        return 0;
    }
    do {
        if ((*psVar11 != 0x20) && (*psVar11 != 9)) break;
        psVar11 = psVar11 + 1;
    } while (psVar11 < param_2);
    while (true) {
        if (param_2 <= psVar11) {
            return 0;
        }
        if ((*psVar11 != 0x20) && (*psVar11 != 9)) break;
        psVar11 = psVar11 + 1;
    }
    if (param_2 <= psVar11) {
        return 0;
    }
    iVar2 = FUN_1407dff20(*psVar11);
    psVar10 = psVar11;
    if ((iVar2 == 0) && (*psVar11 != 0x5f)) {
        return 0;
    }
    do {
        psVar10 = psVar10 + 1;
        if (param_2 <= psVar10) break;
        iVar2 = FUN_1407dff14(*psVar10);
    } while ((iVar2 != 0) || (*psVar10 == 0x5f));
    FUN_14001c480(param_3, psVar11, psVar10);
    *param_1 = psVar10;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    local_40 = puVar3 + 8;
    puVar14 = puVar3;
    local_50 = puVar3;
    local_48 = puVar3;
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    while (psVar10 < param_2) {
        while ((*psVar10 == 0x20 || (*psVar10 == 9))) {
            psVar10 = psVar10 + 1;
            if (param_2 <= psVar10) goto LAB_14019a891;
        }
        if ((param_2 <= psVar10) || (psVar11 = psVar10, *psVar10 != 0x2e)) break;
        do {
            psVar11 = psVar11 + 1;
            if (param_2 <= psVar11) goto LAB_14019a891;
        } while ((*psVar11 == 0x20) || (*psVar11 == 9));
        if ((param_2 <= psVar11) ||
            ((iVar2 = FUN_1407dff20(*psVar11), psVar10 = psVar11, iVar2 == 0 && (*psVar11 != 0x5f))))
            break;
        do {
            psVar10 = psVar10 + 1;
            if (param_2 <= psVar10) break;
            iVar2 = FUN_1407dff14(*psVar10);
        } while ((iVar2 != 0) || (*psVar10 == 0x5f));
        uVar12 = (longlong) psVar10 - (longlong) psVar11 >> 1;
        uVar4 = (longlong) puVar14 - (longlong) puVar3 >> 1;
        if (uVar4 < uVar12) {
            FUN_1407db590(puVar3, psVar11, uVar4 * 2);
            FUN_14001c310(local_58, psVar11 + uVar4, psVar10);
            puVar3 = local_50;
            puVar14 = local_48;
        } else {
            FUN_1407db590(puVar3, psVar11, uVar12 * 2);
            puVar8 = puVar3 + uVar12;
            if (puVar8 != puVar14) {
                FUN_1407db590(puVar8, puVar14, 2);
                local_48 = puVar14 + -((longlong) puVar14 - (longlong) puVar8 >> 1);
                puVar14 = local_48;
            }
        }
        lVar1 = *(longlong * )(param_3 + 0x10);
        *param_1 = psVar10;
        if (lVar1 + 2 == *(longlong * )(param_3 + 0x18)) {
            local_res10 = 1;
            local_res10 = lVar1 - *(longlong * )(param_3 + 8) >> 1;
            local_res20 = local_res10;
            puVar5 = &local_res10;
            if (local_res10 != 0) {
                puVar5 = &local_res20;
            }
            local_res20 = *puVar5 + local_res10;
            puVar6 = &local_res10;
            if (local_res10 <= *puVar5 + local_res10) {
                puVar6 = &local_res20;
            }
            uVar4 = *puVar6;
            puVar7 = (undefined2 *) FUN_14018b280((uVar4 + 1) * 2, 0);
            puVar8 = *(undefined2 * *)(param_3 + 0x10);
            puVar13 = puVar7;
            for (puVar9 = *(undefined2 * *)(param_3 + 8); puVar9 != puVar8; puVar9 = puVar9 + 1) {
                if (puVar13 != (undefined2 *) 0x0) {
                    *puVar13 = *puVar9;
                }
                puVar13 = puVar13 + 1;
            }
            if (puVar13 != (undefined2 *) 0x0) {
                *puVar13 = 0;
            }
            if (*(longlong * )(param_3 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_3 + 8), 0);
            }
            *(undefined2 * *)(param_3 + 8) = puVar7;
            *(undefined2 * *)(param_3 + 0x18) = puVar7 + uVar4 + 1;
            *(undefined2 * *)(param_3 + 0x10) = puVar13;
        }
        puVar8 = (undefined2 * )(*(longlong * )(param_3 + 0x10) + 2);
        if (puVar8 != (undefined2 *) 0x0) {
            *puVar8 = 0;
        }
        **(undefined2 * *)(param_3 + 0x10) = 0x2e;
        *(longlong * )(param_3 + 0x10) = *(longlong * )(param_3 + 0x10) + 2;
        FUN_14001c310(param_3, puVar3, puVar14);
    }
    LAB_14019a891:
    if (puVar3 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar3, 0);
    }
    return 1;
}



// WARNING: Removing unreachable block (ram,0x00014019ac60)

undefined8 FUN_14019aae0(short **param_1, short *param_2, uint *param_3) {
    short *psVar1;
    short *psVar2;
    int iVar3;
    undefined2 *puVar4;
    undefined8 uVar5;
    int local_res8[2];
    short *local_res10;
    undefined local_58[8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    for (local_res10 = *param_1;
         (local_res10 < param_2 && ((*local_res10 == 0x20 || (*local_res10 == 9))));
         local_res10 = local_res10 + 1) {
    }
    iVar3 = FUN_14019d5f0(&local_res10, param_2, local_res8);
    if (iVar3 != 0) {
        *param_1 = local_res10;
        *param_3 = (uint)(local_res8[0] != 0);
        return 1;
    }
    puVar4 = (undefined2 *) FUN_14018b280(0x10);
    local_40 = puVar4 + 8;
    psVar1 = local_res10;
    if (puVar4 != (undefined2 *) 0x0) {
        *puVar4 = 0;
    }
    for (; local_50 = puVar4, local_48 = puVar4, psVar1 < param_2; psVar1 = psVar1 + 1) {
        if ((*psVar1 != 0x20) && (*psVar1 != 9)) {
            if ((psVar1 < param_2) &&
                ((iVar3 = FUN_1407dff20(*psVar1), psVar2 = psVar1, iVar3 != 0 || (*psVar1 == 0x5f))))
                goto joined_r0x00014019ac17;
            break;
        }
    }
    goto LAB_14019abc7;
    while ((iVar3 = FUN_1407dff14(*psVar2), iVar3 != 0 || (*psVar2 == 0x5f))) {
        joined_r0x00014019ac17:
        psVar2 = psVar2 + 1;
        if (param_2 <= psVar2) break;
    }
    if ((longlong) psVar2 - (longlong) psVar1 >> 1 == 0) {
        FUN_1407db590(puVar4, psVar1, 0);
    } else {
        FUN_14001c310(local_58, psVar1, psVar2);
        puVar4 = local_50;
    }
    iVar3 = FUN_14018e2c0(puVar4, L"true");
    uVar5 = 1;
    if (iVar3 == 0) {
        *param_3 = 1;
        *param_1 = psVar2;
        goto LAB_14019abc9;
    }
    iVar3 = FUN_14018e2c0(puVar4, L"false");
    if (iVar3 == 0) {
        *param_3 = 0;
        *param_1 = psVar2;
        goto LAB_14019abc9;
    }
    LAB_14019abc7:
    uVar5 = 0;
    LAB_14019abc9:
    if (puVar4 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar4, 0);
    }
    return uVar5;
}


longlong FUN_14019ad50(longlong param_1, longlong param_2, int param_3) {
    wchar_t wVar1;
    longlong lVar2;
    wchar_t *pwVar3;

    pwVar3 = L"false";
    if (*(char *) ((longlong) param_3 + 0x20 + param_1) != '\0') {
        pwVar3 = L"true";
    }
    lVar2 = 0;
    *(undefined8 * )(param_2 + 8) = 0;
    *(undefined8 * )(param_2 + 0x10) = 0;
    *(undefined8 * )(param_2 + 0x18) = 0;
    wVar1 = *pwVar3;
    while (wVar1 != L'\0') {
        lVar2 = lVar2 + 1;
        wVar1 = pwVar3[lVar2];
    }
    FUN_14001c1b0(param_2, pwVar3, pwVar3 + lVar2);
    return param_2;
}


undefined8 FUN_14019adb0(longlong param_1, undefined8 param_2, int param_3) {
    FUN_14018efa0(param_2, &DAT_1409e3994, *(undefined4 * )(param_1 + 0x20 + (longlong) param_3 * 4));
    return param_2;
}


undefined8 FUN_14019ade0(longlong param_1, undefined8 param_2, int param_3) {
    FUN_14018efa0(param_2, &DAT_1409e38ac, *(undefined4 * )(param_1 + 0x20 + (longlong) param_3 * 4));
    return param_2;
}


undefined8 FUN_14019ae10(longlong param_1, undefined8 param_2, int param_3) {
    FUN_14018efa0(param_2, &DAT_1409e38d4, (double) *(float *) (param_1 + 0x20 + (longlong) param_3 * 4));
    return param_2;
}


undefined8 FUN_14019ae50(longlong param_1, undefined8 param_2, int param_3) {
    FUN_14018efa0(param_2, L"%g,%g", (double) *(float *) (param_1 + ((longlong) param_3 + 2) * 0x10),
                  (double) *(float *) (param_1 + 4 + ((longlong) param_3 + 2) * 0x10));
    return param_2;
}


undefined8 FUN_14019aea0(longlong param_1, undefined8 param_2, int param_3) {
    FUN_14018efa0(param_2, L"%i,%i", *(undefined4 * )(param_1 + 0x20 + (longlong) param_3 * 8),
                  *(undefined4 * )(param_1 + 0x24 + (longlong) param_3 * 8));
    return param_2;
}


undefined8 FUN_14019aed0(longlong param_1, undefined8 param_2, int param_3) {
    longlong lVar1;

    lVar1 = (longlong) param_3 + 2;
    FUN_14018efa0(param_2, L"%g,%g,%g", (double) *(float *) (param_1 + lVar1 * 0x10),
                  (double) *(float *) (param_1 + 4 + lVar1 * 0x10),
                  (double) *(float *) (param_1 + 8 + lVar1 * 0x10));
    return param_2;
}


undefined8 FUN_14019af30(longlong param_1, undefined8 param_2, int param_3) {
    longlong lVar1;

    lVar1 = (longlong) param_3;
    FUN_14018efa0(param_2, L"%i,%i,%i", *(undefined4 * )(param_1 + 0x20 + lVar1 * 0xc),
                  *(undefined4 * )(param_1 + 0x24 + lVar1 * 0xc),
                  *(undefined4 * )(param_1 + 0x28 + lVar1 * 0xc));
    return param_2;
}


undefined8 FUN_14019af70(longlong param_1, undefined8 param_2, int param_3) {
    float *pfVar1;

    pfVar1 = (float *) (((longlong) param_3 + 2) * 0x10 + param_1);
    FUN_14018efa0(param_2, L"%g,%g,%g,%g", (double) *pfVar1, (double) pfVar1[1], (double) pfVar1[2],
                  (double) pfVar1[3]);
    return param_2;
}


longlong FUN_14019afe0(longlong param_1, longlong param_2, int param_3) {
    short *psVar1;
    ushort uVar2;
    ulonglong uVar3;
    bool bVar4;
    undefined2 *puVar5;
    ushort *puVar6;
    ushort *puVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    ushort *puVar10;
    ushort *puVar11;
    longlong lVar12;
    undefined *puVar13;
    ushort *puVar14;
    ushort *puVar15;
    undefined *puVar16;
    ulonglong local_res8;
    longlong local_res10;
    ulonglong local_res20;
    undefined local_60[8];
    ushort *local_58;
    ushort *local_50;
    ushort *local_48;

    bVar4 = false;
    param_1 = ((longlong) param_3 + 1) * 0x20 + param_1;
    puVar15 = *(ushort * *)(param_1 + 0x10);
    puVar11 = *(ushort * *)(param_1 + 8);
    puVar6 = puVar11;
    local_res10 = param_2;
    if (puVar11 < puVar15) {
        do {
            if (bVar4) goto LAB_14019b081;
            if ((*puVar6 < 0x23) && ((0x500002600U >> ((ulonglong) * puVar6 & 0x3f) & 1) != 0)) {
                bVar4 = true;
            }
            puVar6 = puVar6 + 1;
        } while (puVar6 < puVar15);
        if (!bVar4) {
            *(undefined8 * )(param_2 + 8) = 0;
            *(undefined8 * )(param_2 + 0x10) = 0;
            *(undefined8 * )(param_2 + 0x18) = 0;
            FUN_14001c1b0(param_2, *(undefined8 * )(param_1 + 8), *(undefined8 * )(param_1 + 0x10));
            return param_2;
        }
    }
    LAB_14019b081:
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    lVar12 = *(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8) >> 1;
    puVar6 = (ushort *) FUN_14018b280(lVar12 * 2 + 6);
    if (puVar6 != (ushort *) 0x0) {
        *puVar6 = 0;
    }
    if (puVar5 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar5);
    }
    local_48 = puVar6 + lVar12 + 3;
    puVar7 = puVar6;
    if (puVar6 + 1 == local_48) {
        local_58 = puVar6;
        puVar7 = (ushort *) FUN_14018b280();
        if (puVar7 != (ushort *) 0x0) {
            *puVar7 = 0;
        }
        if (puVar6 != (ushort *) 0x0) {
            FUN_14018b900();
        }
        local_48 = puVar7 + 2;
    }
    puVar6 = puVar7 + 1;
    if (puVar6 != (ushort *) 0x0) {
        *puVar6 = 0;
    }
    *puVar7 = 0x22;
    local_58 = puVar7;
    do {
        local_50 = puVar6;
        if (puVar15 <= puVar11) {
            puVar11 = puVar7;
            puVar15 = puVar6;
            if (puVar6 + 1 == local_48) {
                local_res8 = 1;
                local_res8 = (longlong) puVar6 - (longlong) puVar7 >> 1;
                local_res20 = local_res8;
                puVar8 = &local_res8;
                if (local_res8 != 0) {
                    puVar8 = &local_res20;
                }
                local_res20 = *puVar8 + local_res8;
                puVar9 = &local_res8;
                if (local_res8 <= *puVar8 + local_res8) {
                    puVar9 = &local_res20;
                }
                uVar3 = *puVar9;
                puVar11 = (ushort *) FUN_14018b280((uVar3 + 1) * 2, 0);
                puVar15 = puVar11;
                if (puVar7 != puVar6) {
                    do {
                        if (puVar15 != (ushort *) 0x0) {
                            *puVar15 = *(ushort * )(((longlong) puVar7 - (longlong) puVar11) + (longlong) puVar15);
                        }
                        puVar15 = puVar15 + 1;
                    } while ((ushort * )(((longlong) puVar7 - (longlong) puVar11) + (longlong) puVar15) != puVar6);
                }
                if (puVar15 != (ushort *) 0x0) {
                    *puVar15 = 0;
                }
                if (puVar7 != (ushort *) 0x0) {
                    FUN_14018b900(puVar7, 0);
                }
                local_48 = puVar11 + uVar3 + 1;
            }
            puVar6 = puVar15 + 1;
            if (puVar6 != (ushort *) 0x0) {
                *puVar6 = 0;
            }
            *puVar15 = 0x22;
            *(ushort * *)(local_res10 + 0x10) = puVar6;
            *(ushort * *)(local_res10 + 8) = puVar11;
            *(ushort * *)(local_res10 + 0x18) = local_48;
            return local_res10;
        }
        lVar12 = 0;
        uVar2 = *puVar11;
        if (uVar2 == 9) {
            do {
                psVar1 = &DAT_1409e3c76 + lVar12;
                lVar12 = lVar12 + 1;
            } while (*psVar1 != 0);
            puVar16 = &DAT_1409e3c74 + lVar12 * 2;
            puVar13 = &DAT_1409e3c74;
            LAB_14019b334:
            FUN_14001c310(local_60, puVar13, puVar16);
            puVar7 = local_58;
        } else {
            if (uVar2 == 10) {
                do {
                    psVar1 = &DAT_1409e3eb6 + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                puVar16 = &DAT_1409e3eb4 + lVar12 * 2;
                puVar13 = &DAT_1409e3eb4;
                goto LAB_14019b334;
            }
            if (uVar2 == 0xd) {
                do {
                    psVar1 = &DAT_1409e3c2e + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                puVar16 = &DAT_1409e3c2c + lVar12 * 2;
                puVar13 = &DAT_1409e3c2c;
                goto LAB_14019b334;
            }
            if (uVar2 == 0x22) {
                do {
                    psVar1 = &DAT_1409e3dde + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                puVar16 = &DAT_1409e3ddc + lVar12 * 2;
                puVar13 = &DAT_1409e3ddc;
                goto LAB_14019b334;
            }
            if (uVar2 == 0x5c) {
                do {
                    psVar1 = &DAT_1409e3f8e + lVar12;
                    lVar12 = lVar12 + 1;
                } while (*psVar1 != 0);
                puVar16 = &DAT_1409e3f8c + lVar12 * 2;
                puVar13 = &DAT_1409e3f8c;
                goto LAB_14019b334;
            }
            puVar10 = puVar7;
            puVar14 = puVar6;
            if (puVar6 + 1 == local_48) {
                local_res8 = 1;
                local_res8 = (longlong) puVar6 - (longlong) puVar7 >> 1;
                local_res20 = local_res8;
                puVar8 = &local_res8;
                if (local_res8 != 0) {
                    puVar8 = &local_res20;
                }
                local_res20 = *puVar8 + local_res8;
                puVar9 = &local_res8;
                if (local_res8 <= *puVar8 + local_res8) {
                    puVar9 = &local_res20;
                }
                uVar3 = *puVar9;
                puVar10 = (ushort *) FUN_14018b280();
                puVar14 = puVar10;
                if (puVar7 != puVar6) {
                    do {
                        if (puVar14 != (ushort *) 0x0) {
                            *puVar14 = *(ushort * )(((longlong) puVar7 - (longlong) puVar10) + (longlong) puVar14);
                        }
                        puVar14 = puVar14 + 1;
                    } while ((ushort * )(((longlong) puVar7 - (longlong) puVar10) + (longlong) puVar14) != puVar6);
                }
                if (puVar14 != (ushort *) 0x0) {
                    *puVar14 = 0;
                }
                if (puVar7 != (ushort *) 0x0) {
                    FUN_14018b900();
                }
                local_48 = puVar10 + uVar3 + 1;
                local_58 = puVar10;
            }
            local_50 = puVar14 + 1;
            if (local_50 != (ushort *) 0x0) {
                *local_50 = 0;
            }
            *puVar14 = uVar2;
            puVar7 = puVar10;
        }
        puVar11 = puVar11 + 1;
        puVar6 = local_50;
    } while (true);
}


undefined8 FUN_14019b470(undefined8 param_1, undefined4 param_2, longlong param_3) {
    int iVar1;
    undefined8 uVar2;
    int *piVar3;
    int local_res18[2];
    undefined8 local_res20;

    local_res20 = *(undefined8 * )(param_3 + 8);
    piVar3 = local_res18;
    iVar1 = FUN_14019aae0(&local_res20, *(undefined8 * )(param_3 + 0x10), piVar3);
    if (iVar1 != 0) {
        uVar2 = FUN_14001a6c0(param_1, param_2,
                              (ulonglong) piVar3 & 0xffffffffffffff00 | (ulonglong)(local_res18[0] != 0));
        return uVar2;
    }
    return 0;
}


undefined8 FUN_14019b4d0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    int iVar1;
    undefined8 uVar2;
    undefined4 local_res18[2];
    undefined8 local_res20;

    local_res20 = *(undefined8 * )(param_3 + 8);
    iVar1 = FUN_14019d5f0(&local_res20, *(undefined8 * )(param_3 + 0x10), local_res18);
    if (iVar1 != 0) {
        uVar2 = FUN_14002c690(param_1, param_2, local_res18[0]);
        return uVar2;
    }
    return 0;
}


undefined8 FUN_14019b530(undefined8 param_1, undefined4 param_2, longlong param_3) {
    int iVar1;
    undefined8 uVar2;
    undefined4 local_res18[2];
    undefined8 local_res20;

    local_res20 = *(undefined8 * )(param_3 + 8);
    iVar1 = FUN_14019d5f0(&local_res20, *(undefined8 * )(param_3 + 0x10), local_res18);
    if (iVar1 != 0) {
        uVar2 = FUN_14001a770(param_1, param_2, local_res18[0]);
        return uVar2;
    }
    return 0;
}


undefined8
FUN_14019b590(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
              longlong param_5) {
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;
    undefined4 local_res18[2];
    undefined8 local_res20;

    local_res20 = *(undefined8 * )(param_5 + 8);
    iVar1 = FUN_14019a560(&local_res20, *(undefined8 * )(param_5 + 0x10), local_res18);
    if (iVar1 != 0) {
        uVar2 = FUN_14001a820(extraout_XMM0_Qa, param_2, local_res18[0], param_3, param_4);
        return uVar2;
    }
    return 0;
}


undefined8 FUN_14019b5f0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    short *psVar1;
    int iVar2;
    undefined8 uVar3;
    short *local_res18[2];
    undefined local_18[4];
    undefined local_14[12];

    psVar1 = *(short **) (param_3 + 0x10);
    local_res18[0] = *(short **) (param_3 + 8);
    iVar2 = FUN_14019a560(local_res18, psVar1);
    if (iVar2 != 0) {
        for (; local_res18[0] < psVar1; local_res18[0] = local_res18[0] + 1) {
            if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) {
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019a560(local_res18, psVar1, local_14);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar3 = FUN_14019d7b0(param_1, param_2, local_18);
                return uVar3;
            }
        }
    }
    return 0;
}


undefined8 FUN_14019b6c0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    short *psVar1;
    int iVar2;
    undefined8 uVar3;
    short *local_res18;
    undefined local_res20[4];
    undefined local_res24[4];

    psVar1 = *(short **) (param_3 + 0x10);
    local_res18 = *(short **) (param_3 + 8);
    iVar2 = FUN_14019d5f0(&local_res18, psVar1);
    if (iVar2 != 0) {
        for (; local_res18 < psVar1; local_res18 = local_res18 + 1) {
            if ((*local_res18 != 0x20) && (*local_res18 != 9)) {
                if (psVar1 <= local_res18) {
                    return 0;
                }
                if (*local_res18 != 0x2c) {
                    return 0;
                }
                local_res18 = local_res18 + 1;
                iVar2 = FUN_14019d5f0(&local_res18, psVar1, local_res24);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar3 = FUN_14001a8d0(param_1, param_2, local_res20);
                return uVar3;
            }
        }
    }
    return 0;
}


undefined8 FUN_14019b790(undefined8 param_1, undefined4 param_2, longlong param_3) {
    short *psVar1;
    int iVar2;
    undefined8 uVar3;
    short *local_res18[2];
    undefined local_28[4];
    undefined local_24[4];
    undefined local_20[8];

    psVar1 = *(short **) (param_3 + 0x10);
    local_res18[0] = *(short **) (param_3 + 8);
    iVar2 = FUN_14019a560(local_res18, psVar1, local_28);
    if (iVar2 != 0) {
        for (; local_res18[0] < psVar1; local_res18[0] = local_res18[0] + 1) {
            if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) {
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019a560(local_res18, psVar1, local_24);
                if (iVar2 == 0) {
                    return 0;
                }
                while (true) {
                    if (psVar1 <= local_res18[0]) {
                        return 0;
                    }
                    if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) break;
                    local_res18[0] = local_res18[0] + 1;
                }
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019a560(local_res18, psVar1, local_20);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar3 = FUN_14019d8a0(param_1, param_2, local_28);
                return uVar3;
            }
        }
    }
    return 0;
}


undefined8 FUN_14019b8a0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    short *psVar1;
    int iVar2;
    undefined8 uVar3;
    short *local_res18[2];
    undefined local_28[4];
    undefined local_24[4];
    undefined local_20[8];

    psVar1 = *(short **) (param_3 + 0x10);
    local_res18[0] = *(short **) (param_3 + 8);
    iVar2 = FUN_14019d5f0(local_res18, psVar1, local_28);
    if (iVar2 != 0) {
        for (; local_res18[0] < psVar1; local_res18[0] = local_res18[0] + 1) {
            if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) {
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019d5f0(local_res18, psVar1, local_24);
                if (iVar2 == 0) {
                    return 0;
                }
                while (true) {
                    if (psVar1 <= local_res18[0]) {
                        return 0;
                    }
                    if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) break;
                    local_res18[0] = local_res18[0] + 1;
                }
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019d5f0(local_res18, psVar1, local_20);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar3 = FUN_14001ac30(param_1, param_2, local_28);
                return uVar3;
            }
        }
    }
    return 0;
}


undefined8 FUN_14019b9b0(undefined8 param_1, undefined4 param_2, longlong param_3) {
    short *psVar1;
    int iVar2;
    undefined8 uVar3;
    short *local_res18[2];
    undefined local_28[4];
    undefined local_24[4];
    undefined local_20[4];
    undefined local_1c[4];

    psVar1 = *(short **) (param_3 + 0x10);
    local_res18[0] = *(short **) (param_3 + 8);
    iVar2 = FUN_14019a560(local_res18, psVar1, local_28);
    if (iVar2 != 0) {
        for (; local_res18[0] < psVar1; local_res18[0] = local_res18[0] + 1) {
            if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) {
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019a560(local_res18, psVar1, local_24);
                if (iVar2 == 0) {
                    return 0;
                }
                while (true) {
                    if (psVar1 <= local_res18[0]) {
                        return 0;
                    }
                    if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) break;
                    local_res18[0] = local_res18[0] + 1;
                }
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019a560(local_res18, psVar1, local_20);
                if (iVar2 == 0) {
                    return 0;
                }
                while (true) {
                    if (psVar1 <= local_res18[0]) {
                        return 0;
                    }
                    if ((*local_res18[0] != 0x20) && (*local_res18[0] != 9)) break;
                    local_res18[0] = local_res18[0] + 1;
                }
                if (psVar1 <= local_res18[0]) {
                    return 0;
                }
                if (*local_res18[0] != 0x2c) {
                    return 0;
                }
                local_res18[0] = local_res18[0] + 1;
                iVar2 = FUN_14019a560(local_res18, psVar1, local_1c);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar3 = FUN_14002c7c0(param_1, param_2, local_28);
                return uVar3;
            }
        }
    }
    return 0;
}


void FUN_14019c1d0(longlong param_1, int *param_2) {
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar4 = *param_2;
    if (*(int *) (param_1 + 0x68) < iVar4) {
        iVar4 = *(int *) (param_1 + 0x68);
    }
    iVar3 = param_2[1];
    if (*(int *) (param_1 + 0x6c) < iVar3) {
        iVar3 = *(int *) (param_1 + 0x6c);
    }
    iVar2 = param_2[2];
    if (*(int *) (param_1 + 0x70) < iVar2) {
        iVar2 = *(int *) (param_1 + 0x70);
    }
    iVar1 = *(int *) (param_1 + 0x5c);
    if (*(int *) (param_1 + 0x5c) < iVar4) {
        iVar1 = iVar4;
    }
    *param_2 = iVar1;
    iVar4 = *(int *) (param_1 + 0x60);
    if (*(int *) (param_1 + 0x60) < iVar3) {
        iVar4 = iVar3;
    }
    param_2[1] = iVar4;
    iVar4 = *(int *) (param_1 + 100);
    if (*(int *) (param_1 + 100) < iVar2) {
        iVar4 = iVar2;
    }
    param_2[2] = iVar4;
    return;
}


void FUN_14019c240(longlong param_1, longlong param_2) {
    int iVar1;
    longlong lVar2;

    lVar2 = param_1 + 0xc0;
    iVar1 = FUN_1400454d0(*(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10),
                          *(undefined8 * )(param_1 + 200), *(undefined8 * )(param_1 + 0xd0));
    if (-1 < iVar1) {
        lVar2 = param_1 + 0xe0;
        iVar1 = FUN_1400454d0(*(undefined8 * )(param_1 + 0xe8), *(undefined8 * )(param_1 + 0xf0),
                              *(undefined8 * )(param_2 + 8), *(undefined8 * )(param_2 + 0x10));
        if (-1 < iVar1) {
            return;
        }
    }
    if (lVar2 != param_2) {
        FUN_14001c480(param_2, *(undefined8 * )(lVar2 + 8), *(undefined8 * )(lVar2 + 0x10));
    }
    return;
}


int FUN_14019c2e0(longlong param_1) {
    int *piVar1;
    longlong lVar2;
    int iVar3;

    LOCK();
    piVar1 = (int *) (param_1 + 0x18);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
        if (param_1 != 0) {
            lVar2 = *(longlong * )(param_1 + 8);
            if (lVar2 != 0) {
                (**(code * *)(*(longlong * )(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            FUN_14018b900(param_1, 0);
        }
        iVar3 = 0;
    }
    return iVar3;
}


undefined4 *FUN_14019c320(undefined4 *param_1) {
    undefined *puVar1;
    undefined8 uVar2;

    puVar1 = (undefined *) FUN_14018b280();
    *(undefined * *)(param_1 + 4) = puVar1;
    *(undefined8 * )(param_1 + 6) = 0;
    *puVar1 = 0;
    *(undefined8 * )(*(longlong * )(param_1 + 4) + 8) = 0;
    *(longlong * )(*(longlong * )(param_1 + 4) + 0x10) = *(longlong * )(param_1 + 4);
    *(longlong * )(*(longlong * )(param_1 + 4) + 0x18) = *(longlong * )(param_1 + 4);
    uVar2 = FUN_14018b280(0x18);
    *(undefined8 * )(param_1 + 0xc) = uVar2;
    *(undefined8 *) uVar2 = uVar2;
    *(longlong * )(*(longlong * )(param_1 + 0xc) + 8) = *(longlong * )(param_1 + 0xc);
    uVar2 = FUN_14018b280(0x30);
    *(undefined8 * )(param_1 + 0x10) = uVar2;
    *(undefined8 *) uVar2 = uVar2;
    *(longlong * )(*(longlong * )(param_1 + 0x10) + 8) = *(longlong * )(param_1 + 0x10);
    *param_1 = 1;
    return param_1;
}


void FUN_14019c3a0(longlong param_1) {
    undefined8 *puVar1;
    longlong *plVar2;
    longlong *plVar3;

    FUN_140008410(param_1 + 8);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x30);
    if (plVar3 != *(longlong * *)(param_1 + 0x30)) {
        do {
            puVar1 = (undefined8 *) plVar3[2];
            if (puVar1 != (undefined8 *) 0x0) {
                (**(code * *) * puVar1)(puVar1, 1);
            }
            plVar3 = (longlong * ) * plVar3;
        } while (plVar3 != (longlong * ) * (longlong * )(param_1 + 0x30));
    }
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x30);
    if (plVar3 != *(longlong * *)(param_1 + 0x30)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x30));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x30) = *(undefined8 * )(param_1 + 0x30);
    *(longlong * )(*(longlong * )(param_1 + 0x30) + 8) = *(longlong * )(param_1 + 0x30);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x40);
    if (plVar3 != *(longlong * *)(param_1 + 0x40)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            if (plVar3[3] != 0) {
                FUN_14018b900(plVar3[3], 0);
            }
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x40));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x40) = *(undefined8 * )(param_1 + 0x40);
    *(longlong * )(*(longlong * )(param_1 + 0x40) + 8) = *(longlong * )(param_1 + 0x40);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x40);
    if (plVar3 != *(longlong * *)(param_1 + 0x40)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            if (plVar3[3] != 0) {
                FUN_14018b900(plVar3[3], 0);
            }
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x40));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x40) = *(undefined8 * )(param_1 + 0x40);
    *(longlong * )(*(longlong * )(param_1 + 0x40) + 8) = *(longlong * )(param_1 + 0x40);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x40), 0);
    plVar3 = (longlong * ) * *(longlong * *)(param_1 + 0x30);
    if (plVar3 != *(longlong * *)(param_1 + 0x30)) {
        do {
            plVar2 = (longlong * ) * plVar3;
            FUN_14018b900(plVar3, 0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong * ) * (longlong * )(param_1 + 0x30));
    }
    *(undefined8 * ) * (undefined8 * )(param_1 + 0x30) = *(undefined8 * )(param_1 + 0x30);
    *(longlong * )(*(longlong * )(param_1 + 0x30) + 8) = *(longlong * )(param_1 + 0x30);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x30), 0);
    FUN_140008410(param_1 + 8);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x10), 0);
    return;
}


void FUN_14019c520(undefined8 param_1, int param_2) {
    longlong lVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;

    piVar2 = DAT_140c63750;
    if (*DAT_140c63750 != param_2) {
        lVar4 = *(longlong * )(*(longlong * )(DAT_140c63750 + 4) + 0x10);
        if (lVar4 != *(longlong * )(DAT_140c63750 + 4)) {
            do {
                (**(code * *)(**(longlong * *)(lVar4 + 0x28) + 0x28))
                        (*(longlong * *)(lVar4 + 0x28), *piVar2, param_2);
                lVar3 = *(longlong * )(lVar4 + 0x18);
                if (lVar3 == 0) {
                    lVar3 = *(longlong * )(lVar4 + 8);
                    if (lVar4 == *(longlong * )(lVar3 + 0x18)) {
                        do {
                            lVar4 = lVar3;
                            lVar3 = *(longlong * )(lVar4 + 8);
                        } while (lVar4 == *(longlong * )(lVar3 + 0x18));
                    }
                    if (*(longlong * )(lVar4 + 0x18) != lVar3) {
                        lVar4 = lVar3;
                    }
                } else {
                    for (lVar1 = *(longlong * )(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                         lVar1 = *(longlong * )(lVar1 + 0x10)) {
                        lVar3 = lVar1;
                    }
                }
            } while (lVar4 != *(longlong * )(piVar2 + 4));
        }
        *piVar2 = param_2;
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014019c7e3)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14019c5c0(undefined8 param_1, longlong **param_2) {
    byte *pbVar1;
    byte *pbVar2;
    ushort *puVar3;
    byte bVar4;
    ushort *puVar5;
    longlong lVar6;
    undefined2 uVar7;
    int iVar8;
    ulonglong uVar9;
    ushort *puVar10;
    byte *pbVar11;
    ulonglong uVar12;
    undefined8 uVar13;
    short *psVar14;
    undefined2 *puVar15;
    byte *pbVar16;
    longlong lVar17;
    ushort uVar18;

    lVar17 = 0;
    iVar8 = FUN_1401b6d00(param_1, param_1);
    if (iVar8 < 0) {
        return iVar8;
    }
    uVar9 = (*_DAT_00000000[2])(0);
    puVar10 = (ushort * )(*_DAT_00000000[4])(0);
    if (uVar9 != 0) {
        if ((uVar9 & 1) == 0) {
            puVar3 = (ushort * )((longlong) puVar10 + uVar9);
            puVar5 = puVar10;
            if (*puVar10 == 0xfeff) goto LAB_14019c7f5;
            for (; puVar5 < puVar3; puVar5 = puVar5 + 1) {
                uVar18 = *puVar5;
                if (((uVar18 == 0) || (uVar18 == 0xa0d)) || (uVar18 - 0xfffe < 2)) goto LAB_14019c681;
            }
            for (; puVar10 < puVar3; puVar10 = (ushort * )((longlong) puVar10 + 1)) {
                if (*(char *) puVar10 == '\0') goto LAB_14019c7f5;
            }
        }
        LAB_14019c681:
        pbVar11 = (byte * )(*_DAT_00000000[4])(0);
        uVar12 = (*_DAT_00000000[2])(0);
        pbVar16 = pbVar11;
        uVar9 = uVar12;
        if ((pbVar11 == (byte *) 0x0) && (uVar12 != 0)) {
            return -0x7ff8ffa9;
        }
        joined_r0x00014019c6b9:
        do {
            if (uVar9 == 0) break;
            bVar4 = *pbVar16;
            if ((char) bVar4 < '\0') {
                if (((uVar9 < 2) || ((bVar4 & 0xe0) != 0xc0)) ||
                    (pbVar1 = pbVar16 + 1, (*pbVar1 & 0xc0) != 0x80)) {
                    if (((uVar9 < 3) || ((bVar4 & 0xf0) != 0xe0)) ||
                        ((pbVar1 = pbVar16 + 1, (*pbVar1 & 0xc0) != 0x80 ||
                                                (pbVar2 = pbVar16 + 2, (*pbVar2 & 0xc0) != 0x80)))) {
                        pbVar16 = pbVar16 + 1;
                        uVar9 = uVar9 - 1;
                        goto joined_r0x00014019c6b9;
                    }
                    pbVar16 = pbVar16 + 3;
                    uVar18 = ((short) (char) (*pbVar1 & 0x3f) | (short) (char) bVar4 << 6) << 6 |
                             (short) (char) (*pbVar2 & 0x3f);
                    uVar9 = uVar9 - 3;
                } else {
                    pbVar16 = pbVar16 + 2;
                    uVar18 = (short) (char) (bVar4 & 0x1f) << 6 | (short) (char) (*pbVar1 & 0x3f);
                    uVar9 = uVar9 - 2;
                }
            } else {
                pbVar16 = pbVar16 + 1;
                uVar18 = (ushort)(char)
                bVar4;
                uVar9 = uVar9 - 1;
            }
            lVar17 = lVar17 + 1;
        } while (uVar18 != 0);
        iVar8 = FUN_1401c5690(lVar17 * 2, param_2, 8);
        if (iVar8 < 0) {
            return iVar8;
        }
        uVar13 = (**(code * *)(**param_2 + 0x20))();
        iVar8 = FUN_14018ea30(pbVar11, uVar12, uVar13, lVar17, 0);
        LAB_14019c7c4:
        if (iVar8 < 0) {
            return iVar8;
        }
        return 0;
    }
    LAB_14019c7f5:
    psVar14 = (short *) (*_DAT_00000000[4])(0);
    uVar9 = (*_DAT_00000000[2])(0);
    if (uVar9 >> 1 != 0) {
        if (*psVar14 == -0x101) {
            iVar8 = FUN_1401c5740(psVar14 + 1, (uVar9 & 0xfffffffffffffffe) - 2, param_2);
            goto LAB_14019c7c4;
        }
        if (*psVar14 == -2) {
            lVar17 = (uVar9 >> 1) - 1;
            iVar8 = FUN_1401c5690(lVar17 * 2, param_2, 0);
            if (iVar8 < 0) {
                return iVar8;
            }
            puVar15 = (undefined2 * )(**(code * *)(**param_2 + 0x20))();
            if (lVar17 != 0) {
                lVar6 = 2 - (longlong) puVar15;
                do {
                    uVar18 = *(ushort * )((longlong) psVar14 + lVar6 + (longlong) puVar15);
                    if (((uVar18 & 0xff00) != 0) || (uVar7 = 0, (char) uVar18 != '\0')) {
                        uVar7 = 1;
                    }
                    *puVar15 = uVar7;
                    puVar15 = puVar15 + 1;
                    lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                return 0;
            }
            return 0;
        }
    }
    if (*param_2 != (longlong *) 0x0) {
        (**_DAT_00000000)(0);
        if (*param_2 != (longlong *) 0x0) {
            (**(code * *)(**param_2 + 8))();
        }
        *param_2 = (longlong *) 0x0;
        return 0;
    }
    return 0;
}


int FUN_14019c8d0(short *param_1, int param_2, undefined8 param_3) {
    longlong lVar1;
    short *psVar2;
    short *psVar3;
    int iVar4;
    int iVar5;
    short *psVar6;
    ulonglong uVar7;
    longlong lVar8;
    short *psVar9;
    longlong *plVar10;
    undefined2 *puVar11;
    short *psVar12;
    short *local_res8;
    int local_res10;
    longlong *local_res20;
    undefined local_80[8];
    longlong local_78;
    undefined2 *local_70;
    longlong local_68;
    undefined local_60[8];
    undefined2 *local_58;
    undefined2 *local_50;
    undefined2 *local_48;

    if (*DAT_140c63750 < param_2) {
        return -0x7fffbffb;
    }
    local_res20 = (longlong *) 0x0;
    local_res8 = param_1;
    local_res10 = param_2;
    iVar4 = FUN_14019c5c0(param_3, &local_res20);
    plVar10 = local_res20;
    if (-1 < iVar4) {
        psVar6 = (short *) (**(code * *)(*local_res20 + 0x20))(local_res20);
        local_res8 = psVar6;
        uVar7 = (**(code * *)(*plVar10 + 0x10))(plVar10);
        lVar8 = (**(code * *)(*plVar10 + 0x20))(plVar10);
        iVar4 = local_res10;
        psVar12 = (short *) ((uVar7 & 0xfffffffffffffffe) + lVar8);
        if (psVar6 < psVar12) {
            LAB_14019c995:
            local_58 = (undefined2 *) FUN_14018b280(0x10);
            local_48 = local_58 + 8;
            if (local_58 != (undefined2 *) 0x0) {
                *local_58 = 0;
            }
            local_50 = local_58;
            iVar5 = FUN_14019a770(&local_res8, psVar12, local_60);
            puVar11 = local_58;
            psVar6 = local_res8;
            if (iVar5 == 0) {
                joined_r0x00014019c9fe:
                do {
                    if (psVar12 <= psVar6) goto LAB_14019cb9d;
                    if ((*psVar6 == 0xd) || (*psVar6 == 10)) goto joined_r0x00014019cb7c;
                    local_res8 = psVar6 + 1;
                    psVar6 = local_res8;
                } while (true);
            }
            psVar9 = local_res8;
            if (local_res8 < psVar12) {
                do {
                    if ((*psVar9 != 0x20) && (*psVar9 != 9)) {
                        if ((psVar9 < psVar12) && (*psVar9 == 0x3d)) {
                            psVar6 = psVar9 + 1;
                            local_res8 = psVar6;
                            plVar10 = (longlong *) FUN_14019d200();
                            psVar9 = psVar6;
                            if (plVar10 != (longlong *) 0x0) goto joined_r0x00014019ca61;
                        }
                        break;
                    }
                    psVar9 = psVar9 + 1;
                } while (psVar9 < psVar12);
                goto joined_r0x00014019c9fe;
            }
            goto LAB_14019cb9d;
        }
        LAB_14019cbc6:
        iVar4 = 0;
    }
    if (plVar10 != (longlong *) 0x0) {
        (**(code * *)(*plVar10 + 8))(plVar10);
    }
    return iVar4;
    joined_r0x00014019ca61:
    while ((psVar6 = psVar9, psVar9 < psVar12 &&
                             ((*psVar9 == 0x20 || (local_res8 = psVar9, *psVar9 == 9))))) {
        local_res8 = psVar9 + 1;
        psVar9 = local_res8;
    }
    for (; ((psVar3 = psVar6, psVar6 < psVar12 && (local_res8 = psVar6, *psVar6 != 0xd)) &&
            (*psVar6 != 10)); psVar6 = psVar6 + 1) {
        local_res8 = psVar6;
    }
    do {
        psVar2 = psVar3;
        if (psVar2 <= psVar9) break;
        psVar3 = psVar2 + -1;
    } while ((psVar2[-1] == 0x20) || (psVar2[-1] == 9));
    lVar8 = (longlong) psVar2 - (longlong) psVar9 >> 1;
    local_78 = 0;
    uVar7 = lVar8 + 1;
    local_70 = (undefined2 *) 0x0;
    local_68 = 0;
    if (uVar7 < 0x7fffffffffffffff) {
        lVar1 = uVar7 * 2;
        local_70 = (undefined2 *) FUN_14018b280(lVar1, 0);
        local_68 = (longlong) local_70 + lVar1;
    }
    lVar1 = (longlong) local_70;
    lVar8 = lVar8 * 2;
    local_78 = (longlong) local_70;
    FUN_1407db590(local_70, psVar9, lVar8);
    local_70 = (undefined2 * )(lVar8 + lVar1);
    if (local_70 != (undefined2 *) 0x0) {
        *local_70 = 0;
    }
    (**(code * *)(*plVar10 + 0x18))(plVar10, iVar4, local_80);
    puVar11 = local_58;
    if (local_78 != 0) {
        FUN_14018b900();
        puVar11 = local_58;
    }
    joined_r0x00014019cb7c:
    while ((psVar6 < psVar12 && ((*psVar6 == 0xd || (local_res8 = psVar6, *psVar6 == 10))))) {
        psVar6 = psVar6 + 1;
        local_res8 = psVar6;
    }
    LAB_14019cb9d:
    if (puVar11 != (undefined2 *) 0x0) {
        FUN_14018b900();
    }
    plVar10 = local_res20;
    if (psVar12 <= psVar6) goto LAB_14019cbc6;
    goto LAB_14019c995;
}


ulonglong FUN_14019cc10(longlong *param_1, uint param_2, undefined8 param_3) {
    undefined2 *puVar1;
    short *psVar2;
    short sVar3;
    ushort uVar4;
    ushort *puVar5;
    undefined2 *puVar6;
    int iVar7;
    uint uVar8;
    ushort *puVar9;
    longlong *plVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    undefined *puVar14;
    longlong *plVar15;
    undefined *puVar16;
    undefined8 uVar17;
    undefined8 uVar18;
    undefined *puVar19;
    ulonglong uVar20;
    undefined *puVar21;
    longlong lVar22;
    longlong *plVar23;
    int *piVar24;
    longlong *plVar25;
    longlong *local_res8;
    uint local_res10;
    undefined8 local_res18;
    longlong *local_res20;
    undefined local_e8[8];
    undefined *local_e0;
    undefined8 local_d8;
    undefined local_c8[8];
    ushort *local_c0;
    ushort *local_b8;
    ushort *local_b0;
    undefined local_a8[8];
    undefined2 *local_a0;
    undefined2 *local_98;
    undefined2 *local_90;
    longlong *local_88;
    int *local_80;
    undefined local_78[8];
    longlong local_70;
    undefined local_58[24];

    piVar24 = DAT_140c63750;
    local_80 = DAT_140c63750;
    if (*DAT_140c63750 < (int) param_2) {
        return 0x80004005;
    }
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    puVar9 = (ushort *) FUN_14018b280(0x10);
    local_b0 = puVar9 + 8;
    if (puVar9 != (ushort *) 0x0) {
        *puVar9 = 0;
    }
    local_res20 = (longlong *) 0x0;
    local_c0 = puVar9;
    local_b8 = puVar9;
    local_e0 = (undefined *) FUN_14018b280(0x28);
    local_d8 = 0;
    *local_e0 = 0;
    *(undefined8 * )(local_e0 + 8) = 0;
    *(undefined * *)(local_e0 + 0x10) = local_e0;
    *(undefined * *)(local_e0 + 0x18) = local_e0;
    iVar7 = FUN_14019c5c0(param_3, &local_res20);
    plVar15 = local_res20;
    if (-1 < iVar7) {
        plVar10 = (longlong * )(**(code * *)(*local_res20 + 0x20))(local_res20);
        local_res8 = plVar10;
        uVar11 = (**(code * *)(*plVar15 + 0x10))(plVar15);
        lVar12 = (**(code * *)(*plVar15 + 0x20))(plVar15);
        plVar25 = (longlong * )((uVar11 & 0xfffffffffffffffe) + lVar12);
        param_2 = local_res10;
        if (plVar10 < plVar25) {
            lVar12 = 0;
            do {
                local_a0 = (undefined2 *) FUN_14018b280(0x10);
                local_90 = local_a0 + 8;
                if (local_a0 != (undefined2 *) 0x0) {
                    *local_a0 = 0;
                }
                local_98 = local_a0;
                iVar7 = FUN_14019a770(&local_res8, plVar25, local_a8);
                puVar6 = local_a0;
                plVar23 = local_res8;
                if (iVar7 == 0) {
                    joined_r0x00014019cd9e:
                    while (((plVar23 < plVar25 && (local_res8 = plVar23, *(short *) plVar23 != 0xd)) &&
                            (*(short *) plVar23 != 10))) {
                        local_res8 = (longlong * )((longlong) plVar23 + 2);
                        plVar23 = local_res8;
                    }
                } else {
                    plVar15 = local_res8;
                    if (local_res8 < plVar25) {
                        do {
                            sVar3 = *(short *) plVar15;
                            if ((sVar3 != 0x20) && (sVar3 != 9)) {
                                if ((plVar15 < plVar25) && (*(short *) plVar15 == 0x3d)) {
                                    plVar23 = (longlong * )((longlong) plVar15 + 2);
                                    local_res8 = plVar23;
                                    plVar15 = (longlong *) FUN_14019d200(sVar3, local_a0);
                                    local_88 = plVar15;
                                    if (plVar15 != (longlong *) 0x0) {
                                        FUN_140007810(local_e8, local_58, &local_88);
                                        if (((*(byte * )((longlong) plVar15 + 0x14) & 1) == 0) &&
                                            ((*(uint * )(plVar15 + 3) >> (local_res10 & 0x1f) & 1) != 0)) {
                                            lVar22 = (**(code * *)(*plVar15 + 0x10))(plVar15, local_78, local_res10);
                                            lVar22 = FUN_14018efa0(local_a8, L"%s=%s\r\n", plVar15[1],
                                                                   *(undefined8 * )(lVar22 + 8));
                                            FUN_14001c310(local_c8, *(undefined8 * )(lVar22 + 8),
                                                          *(undefined8 * )(lVar22 + 0x10));
                                            if (local_a0 != (undefined2 *) 0x0) {
                                                FUN_14018b900();
                                            }
                                            if (local_70 != 0) {
                                                FUN_14018b900();
                                            }
                                        }
                                        goto joined_r0x00014019cfb8;
                                    }
                                }
                                break;
                            }
                            plVar15 = (longlong * )((longlong) plVar15 + 2);
                        } while (plVar15 < plVar25);
                        goto joined_r0x00014019cd9e;
                    }
                }
                lVar22 = (longlong) plVar23 - (longlong) plVar10 >> 1;
                uVar11 = lVar22 + 1;
                lVar13 = lVar12;
                if (uVar11 < 0x7fffffffffffffff) {
                    lVar13 = FUN_14018b280(uVar11 * 2, 0);
                }
                lVar22 = lVar22 * 2;
                FUN_1407db590(lVar13, plVar10, lVar22);
                puVar1 = (undefined2 * )(lVar22 + lVar13);
                if (puVar1 != (undefined2 *) 0x0) {
                    *puVar1 = 0;
                }
                FUN_14001c310(local_c8, lVar13);
                lVar22 = lVar12;
                if (lVar13 != 0) {
                    FUN_14018b900(lVar13, 0);
                }
                do {
                    psVar2 = &DAT_1409e3d26 + lVar22;
                    lVar22 = lVar22 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(local_c8, &DAT_1409e3d24, &DAT_1409e3d24 + lVar22 * 2);
                LAB_14019ce52:
                if (plVar23 < plVar25) {
                    if (*(short *) plVar23 == 0xd) {
                        plVar23 = (longlong * )((longlong) plVar23 + 2);
                        local_res8 = plVar23;
                    }
                    if ((plVar23 < plVar25) && (*(short *) plVar23 == 10)) {
                        plVar23 = (longlong * )((longlong) plVar23 + 2);
                        local_res8 = plVar23;
                    }
                }
                LAB_14019ce78:
                if (puVar6 != (undefined2 *) 0x0) {
                    FUN_14018b900();
                }
                plVar10 = plVar23;
                plVar15 = local_res20;
                piVar24 = local_80;
                puVar9 = local_c0;
                param_2 = local_res10;
            } while (plVar23 < plVar25);
        }
    }
    uVar11 = 0;
    lVar12 = *(longlong * )(*(longlong * )(piVar24 + 4) + 0x10);
    puVar21 = local_e0;
    if (lVar12 != *(longlong * )(piVar24 + 4)) {
        do {
            plVar10 = *(longlong * *)(lVar12 + 0x28);
            if (((*(byte * )((longlong) plVar10 + 0x14) & 1) == 0) &&
                ((*(uint * )(plVar10 + 3) >> (param_2 & 0x1f) & 1) != 0)) {
                puVar14 = *(undefined * *)(puVar21 + 8);
                puVar19 = puVar21;
                if (puVar14 != (undefined *) 0x0) {
                    do {
                        if (*(longlong * *)(puVar14 + 0x20) < plVar10) {
                            puVar16 = *(undefined * *)(puVar14 + 0x18);
                        } else {
                            puVar16 = *(undefined * *)(puVar14 + 0x10);
                            puVar19 = puVar14;
                        }
                        puVar14 = puVar16;
                    } while (puVar16 != (undefined *) 0x0);
                    if ((puVar19 != puVar21) && (*(longlong * *)(puVar19 + 0x20) <= plVar10))
                        goto LAB_14019d05f;
                }
                lVar22 = (**(code * *)(*plVar10 + 0x10))(plVar10, local_a8, param_2);
                lVar22 = FUN_14018efa0(local_78, L"%s=%s\r\n", plVar10[1], *(undefined8 * )(lVar22 + 8));
                FUN_14001c310(local_c8, *(undefined8 * )(lVar22 + 8));
                if (local_70 != 0) {
                    FUN_14018b900(local_70, 0);
                }
                puVar21 = local_e0;
                if (local_a0 != (undefined2 *) 0x0) {
                    FUN_14018b900(local_a0, 0);
                    puVar21 = local_e0;
                }
            }
            LAB_14019d05f:
            lVar22 = *(longlong * )(lVar12 + 0x18);
            if (lVar22 == 0) {
                lVar22 = *(longlong * )(lVar12 + 8);
                if (lVar12 == *(longlong * )(lVar22 + 0x18)) {
                    do {
                        lVar12 = lVar22;
                        lVar22 = *(longlong * )(lVar12 + 8);
                    } while (lVar12 == *(longlong * )(lVar22 + 0x18));
                }
                if (*(longlong * )(lVar12 + 0x18) != lVar22) {
                    lVar12 = lVar22;
                }
            } else {
                for (lVar13 = *(longlong * )(lVar22 + 0x10); lVar12 = lVar22, lVar13 != 0;
                     lVar13 = *(longlong * )(lVar13 + 0x10)) {
                    lVar22 = lVar13;
                }
            }
            puVar9 = local_c0;
        } while (lVar12 != *(longlong * )(piVar24 + 4));
    }
    local_res8 = (longlong *) 0x0;
    lVar22 = (longlong) local_b8 - (longlong) puVar9 >> 1;
    lVar12 = lVar22;
    uVar20 = uVar11;
    puVar5 = puVar9;
    if ((puVar9 == (ushort *) 0x0) && (lVar22 != 0)) {
        uVar8 = 0x80070057;
    } else {
        for (; lVar12 != 0; lVar12 = lVar12 + -1) {
            uVar4 = *puVar5;
            if (uVar4 < 0x80) {
                uVar20 = uVar20 + 1;
            } else if (uVar4 < 0x1000) {
                uVar20 = uVar20 + 2;
            } else {
                uVar20 = uVar20 + 3;
            }
            if (uVar4 == 0) break;
            puVar5 = puVar5 + 1;
        }
        uVar8 = FUN_1401c5690(uVar20, &local_res8, 0);
        plVar10 = local_res8;
        if (-1 < (int) uVar8) {
            uVar17 = (**(code * *)(*local_res8 + 0x10))(local_res8);
            uVar18 = (**(code * *)(*plVar10 + 0x20))(plVar10);
            uVar8 = FUN_14018eb80(puVar9, lVar22, uVar18, uVar17, 0);
            if ((-1 < (int) uVar8) && (uVar8 = FUN_1401b6f30(), -1 < (int) uVar8)) {
                (**(code * *)(*plVar10 + 8))(plVar10);
                goto LAB_14019d192;
            }
        }
        if (plVar10 != (longlong *) 0x0) {
            (**(code * *)(*plVar10 + 8))(plVar10);
        }
    }
    uVar11 = (ulonglong) uVar8;
    LAB_14019d192:
    FUN_140008410(local_e8);
    FUN_14018b900(local_e0, 0);
    if (plVar15 != (longlong *) 0x0) {
        (**(code * *)(*plVar15 + 8))(plVar15);
    }
    if (puVar9 != (ushort *) 0x0) {
        FUN_14018b900(puVar9, 0);
    }
    return uVar11;
    joined_r0x00014019cfb8:
    if (plVar25 <= plVar23) goto LAB_14019ce78;
    if ((*(short *) plVar23 == 0xd) || (*(short *) plVar23 == 10)) goto LAB_14019ce52;
    plVar23 = (longlong * )((longlong) plVar23 + 2);
    local_res8 = plVar23;
    goto joined_r0x00014019cfb8;
}


undefined8 FUN_14019d200(undefined8 param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    longlong local_res8;

    lVar1 = *(longlong * )(DAT_140c63750 + 0x10);
    local_res8 = lVar1;
    lVar2 = *(longlong * )(lVar1 + 8);
    while (lVar2 != 0) {
        iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar2 + 0x20), param_2);
        if (iVar3 < 0) {
            lVar2 = *(longlong * )(lVar2 + 0x18);
        } else {
            local_res8 = lVar2;
            lVar2 = *(longlong * )(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) ||
        (iVar3 = FUN_14018e2c0(param_2, *(undefined8 * )(local_res8 + 0x20)), iVar3 < 0)) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        uVar4 = 0;
    } else {
        uVar4 = *(undefined8 * )(local_res8 + 0x28);
    }
    return uVar4;
}


undefined8 FUN_14019d2a0(undefined8 param_1, undefined8 *param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;

    lVar2 = DAT_140c63750;
    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    puVar3 = (undefined8 *) FUN_14018b280(0x20);
    if (puVar3 == (undefined8 *) 0x0) {
        puVar3 = (undefined8 *) 0x0;
    } else {
        *puVar3 = &PTR_LAB_140b5e6c8;
        puVar3[2] = 0;
        puVar3[1] = 0;
        *(undefined4 * )(puVar3 + 3) = 1;
    }
    lVar4 = *(longlong * )(lVar2 + 0x10);
    lVar5 = *(longlong * )(lVar4 + 0x10);
    if (lVar5 != lVar4) {
        do {
            FUN_140033260(puVar3 + 1, lVar5 + 0x28);
            lVar4 = *(longlong * )(lVar5 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong * )(lVar5 + 8);
                if (lVar5 == *(longlong * )(lVar4 + 0x18)) {
                    do {
                        lVar5 = lVar4;
                        lVar4 = *(longlong * )(lVar5 + 8);
                    } while (lVar5 == *(longlong * )(lVar4 + 0x18));
                }
                if (*(longlong * )(lVar5 + 0x18) != lVar4) {
                    lVar5 = lVar4;
                }
            } else {
                for (lVar1 = *(longlong * )(lVar4 + 0x10); lVar5 = lVar4, lVar1 != 0;
                     lVar1 = *(longlong * )(lVar1 + 0x10)) {
                    lVar4 = lVar1;
                }
            }
        } while (lVar5 != *(longlong * )(lVar2 + 0x10));
    }
    *param_2 = puVar3;
    return 0;
}


undefined8 FUN_14019d3a0(undefined8 param_1, short *param_2, undefined8 *param_3) {
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;

    lVar3 = DAT_140c63750;
    if ((param_2 == (short *) 0x0) || (param_3 == (undefined8 *) 0x0)) {
        return 0x80070057;
    }
    puVar5 = (undefined8 *) FUN_14018b280(0x20);
    puVar8 = (undefined8 *) 0x0;
    puVar9 = puVar8;
    if (puVar5 != (undefined8 *) 0x0) {
        *puVar5 = &PTR_LAB_140b5e6c8;
        puVar5[2] = 0;
        puVar5[1] = 0;
        *(undefined4 * )(puVar5 + 3) = 1;
        puVar9 = puVar5;
    }
    sVar1 = *param_2;
    while (sVar1 != 0) {
        puVar8 = (undefined8 * )((longlong) puVar8 + 1);
        sVar1 = param_2[(longlong) puVar8];
    }
    lVar7 = *(longlong * )(lVar3 + 0x10);
    lVar6 = *(longlong * )(*(longlong * )(lVar3 + 0x10) + 8);
    while (lVar6 != 0) {
        iVar4 = FUN_14018e2c0(*(undefined8 * )(lVar6 + 0x20), param_2);
        if (iVar4 < 0) {
            lVar6 = *(longlong * )(lVar6 + 0x18);
        } else {
            lVar7 = lVar6;
            lVar6 = *(longlong * )(lVar6 + 0x10);
        }
    }
    if (lVar7 != *(longlong * )(lVar3 + 0x10)) {
        do {
            iVar4 = FUN_14018e3e0(param_2, *(undefined8 * )(lVar7 + 0x20), puVar8);
            if (iVar4 != 0) break;
            FUN_140033260(puVar9 + 1, lVar7 + 0x28);
            lVar6 = *(longlong * )(lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong * )(lVar7 + 8);
                if (lVar7 == *(longlong * )(lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong * )(lVar7 + 8);
                    } while (lVar7 == *(longlong * )(lVar6 + 0x18));
                }
                if (*(longlong * )(lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            } else {
                for (lVar2 = *(longlong * )(lVar6 + 0x10); lVar7 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong * )(lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar7 != *(longlong * )(lVar3 + 0x10));
    }
    *param_3 = puVar9;
    return 0;
}


longlong FUN_14019d520(longlong param_1, undefined8 *param_2) {
    longlong lVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_res18[2];
    undefined8 local_38;
    undefined8 local_30;

    lVar1 = *(longlong * )(param_1 + 8);
    local_res8 = lVar1;
    if (*(longlong * )(lVar1 + 8) != 0) {
        uVar2 = *param_2;
        lVar4 = *(longlong * )(lVar1 + 8);
        do {
            iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar4 + 0x20), uVar2);
            if (iVar3 < 0) {
                lVar5 = *(longlong * )(lVar4 + 0x18);
            } else {
                lVar5 = *(longlong * )(lVar4 + 0x10);
                local_res8 = lVar4;
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
    }
    if ((local_res8 != lVar1) &&
        (iVar3 = FUN_14018e2c0(*param_2, *(undefined8 * )(local_res8 + 0x20)), -1 < iVar3)) {
        return local_res8 + 0x28;
    }
    local_38 = *param_2;
    local_30 = 0;
    FUN_140144990(param_1, local_res18, &local_res8, &local_38);
    return local_res18[0] + 0x28;
}


undefined8 FUN_14019d5f0(ushort **param_1, ushort *param_2, int *param_3) {
    ushort uVar1;
    bool bVar2;
    ushort *puVar3;
    ushort *puVar4;
    int iVar5;

    for (puVar3 = *param_1; (puVar3 < param_2 && ((*puVar3 == 0x20 || (*puVar3 == 9))));
         puVar3 = puVar3 + 1) {
    }
    iVar5 = 0;
    bVar2 = false;
    if ((puVar3 < param_2) && (*puVar3 == 0x2d)) {
        bVar2 = true;
        puVar3 = puVar3 + 1;
    }
    if (param_2 <= puVar3) {
        return 0;
    }
    puVar4 = puVar3;
    if (*puVar3 == 0x30) {
        puVar4 = puVar3 + 1;
        if (puVar4 < param_2) {
            if (*puVar4 == 0x78) {
                puVar3 = puVar3 + 2;
                puVar4 = puVar3;
                if (param_2 <= puVar3) {
                    return 0;
                }
                do {
                    uVar1 = *puVar4;
                    if ((ushort)(uVar1 - 0x30) < 10) {
                        iVar5 = (iVar5 + -3) * 0x10;
                    } else if ((ushort)(uVar1 - 0x61) < 6) {
                        iVar5 = iVar5 * 0x10 + -0x57;
                    } else {
                        if (5 < (ushort)(uVar1 - 0x41)) break;
                        iVar5 = iVar5 * 0x10 + -0x37;
                    }
                    puVar4 = puVar4 + 1;
                    iVar5 = iVar5 + (uint) uVar1;
                } while (puVar4 < param_2);
            } else if (*puVar4 == 0x62) {
                puVar3 = puVar3 + 2;
                puVar4 = puVar3;
                if (param_2 <= puVar3) {
                    return 0;
                }
                do {
                    uVar1 = *puVar4;
                    if (1 < (ushort)(uVar1 - 0x30)) break;
                    puVar4 = puVar4 + 1;
                    iVar5 = (uint) uVar1 + (iVar5 + -0x18) * 2;
                } while (puVar4 < param_2);
            } else {
                do {
                    uVar1 = *puVar4;
                    if (7 < (ushort)(uVar1 - 0x30)) break;
                    puVar4 = puVar4 + 1;
                    iVar5 = (uint) uVar1 + (iVar5 + -6) * 8;
                } while (puVar4 < param_2);
            }
        }
    } else {
        do {
            uVar1 = *puVar4;
            if (9 < (ushort)(uVar1 - 0x30)) break;
            puVar4 = puVar4 + 1;
            iVar5 = (uint) uVar1 + (iVar5 * 5 + -0x18) * 2;
        } while (puVar4 < param_2);
    }
    if (puVar4 == puVar3) {
        return 0;
    }
    *param_1 = puVar4;
    if (bVar2) {
        iVar5 = -iVar5;
    }
    *param_3 = iVar5;
    return 1;
}


undefined8 FUN_14019d7b0(longlong *param_1, int param_2, undefined4 *param_3) {
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    int *piVar5;
    undefined(*pauVar6)[16];
    longlong lVar7;
    uint uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    float in_xmmTmp2_Dd;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    local_28 = *param_3;
    uStack36 = param_3[1];
    uStack32 = param_3[2];
    uStack28 = param_3[3];
    uVar10 = (ulonglong) param_2;
    if (*(int *) (param_1 + 0x15) != 0) {
        (**(code * *)(*param_1 + 0x30))(param_1, &local_28);
    }
    piVar5 = DAT_140c63750;
    plVar9 = param_1 + ((longlong) * DAT_140c63750 + 2) * 2;
    local_18 = *(float *) plVar9;
    fStack20 = *(float *) ((longlong) plVar9 + 4);
    fStack16 = *(float *) (plVar9 + 1);
    fStack12 = *(float *) ((longlong) plVar9 + 0xc);
    if (uVar10 < 5) {
        pauVar6 = (undefined(*)[16])(param_1 + (uVar10 + 2) * 2);
        lVar7 = 5 - uVar10;
        do {
            *pauVar6 = CONCAT412(uStack28, CONCAT48(uStack32, CONCAT44(uStack36, local_28)));
            pauVar6 = pauVar6[1];
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    uVar8 = 1 << ((byte) param_2 & 0x1f);
    uVar8 = uVar8 - 1 & *(uint * )(param_1 + 3) | uVar8;
    *(uint * )(param_1 + 3) = uVar8;
    plVar9 = param_1 + ((longlong) * piVar5 + 2) * 2;
    fVar2 = *(float *) ((longlong) plVar9 + 4);
    fVar3 = *(float *) (plVar9 + 1);
    fVar4 = *(float *) ((longlong) plVar9 + 0xc);
    uVar8 = movmskps(uVar8, CONCAT412(-(uint)(fStack12 != in_xmmTmp2_Dd),
                                      CONCAT48(-(uint)(fStack16 != fVar4),
                                               CONCAT44(-(uint)(fStack20 != fVar2),
                                                        -(uint)(local_18 != *(float *) plVar9)))));
    if ((uVar8 & 3) != 0) {
        pfVar1 = (float *) param_1[0x14];
        if (pfVar1 != (float *) 0x0) {
            *pfVar1 = *(float *) plVar9;
            pfVar1[1] = fVar2;
            pfVar1[2] = fVar3;
            pfVar1[3] = fVar4;
        }
        if ((code *) param_1[0x16] != (code *) 0x0) {
            (*(code *) param_1[0x16])(&local_18);
        }
    }
    return 1;
}


undefined8 FUN_14019d8a0(longlong *param_1, int param_2, undefined4 *param_3) {
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    int *piVar5;
    undefined(*pauVar6)[16];
    longlong lVar7;
    uint uVar8;
    longlong *plVar9;
    ulonglong uVar10;
    float in_xmmTmp2_Dd;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    float local_18;
    float fStack20;
    float fStack16;
    float fStack12;

    local_28 = *param_3;
    uStack36 = param_3[1];
    uStack32 = param_3[2];
    uStack28 = param_3[3];
    uVar10 = (ulonglong) param_2;
    if (*(int *) (param_1 + 0x15) != 0) {
        (**(code * *)(*param_1 + 0x30))(param_1, &local_28);
    }
    piVar5 = DAT_140c63750;
    plVar9 = param_1 + ((longlong) * DAT_140c63750 + 2) * 2;
    local_18 = *(float *) plVar9;
    fStack20 = *(float *) ((longlong) plVar9 + 4);
    fStack16 = *(float *) (plVar9 + 1);
    fStack12 = *(float *) ((longlong) plVar9 + 0xc);
    if (uVar10 < 5) {
        pauVar6 = (undefined(*)[16])(param_1 + (uVar10 + 2) * 2);
        lVar7 = 5 - uVar10;
        do {
            *pauVar6 = CONCAT412(uStack28, CONCAT48(uStack32, CONCAT44(uStack36, local_28)));
            pauVar6 = pauVar6[1];
            lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
    }
    uVar8 = 1 << ((byte) param_2 & 0x1f);
    uVar8 = uVar8 - 1 & *(uint * )(param_1 + 3) | uVar8;
    *(uint * )(param_1 + 3) = uVar8;
    plVar9 = param_1 + ((longlong) * piVar5 + 2) * 2;
    fVar2 = *(float *) ((longlong) plVar9 + 4);
    fVar3 = *(float *) (plVar9 + 1);
    fVar4 = *(float *) ((longlong) plVar9 + 0xc);
    uVar8 = movmskps(uVar8, CONCAT412(-(uint)(fStack12 != in_xmmTmp2_Dd),
                                      CONCAT48(-(uint)(fStack16 != fVar4),
                                               CONCAT44(-(uint)(fStack20 != fVar2),
                                                        -(uint)(local_18 != *(float *) plVar9)))));
    if ((uVar8 & 7) != 0) {
        pfVar1 = (float *) param_1[0x14];
        if (pfVar1 != (float *) 0x0) {
            *pfVar1 = *(float *) plVar9;
            pfVar1[1] = fVar2;
            pfVar1[2] = fVar3;
            pfVar1[3] = fVar4;
        }
        if ((code *) param_1[0x16] != (code *) 0x0) {
            (*(code *) param_1[0x16])(&local_18);
        }
    }
    return 1;
}


longlong FUN_14019d990(longlong param_1, undefined8 *param_2) {
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;
    longlong local_res18;

    local_res18 = *(longlong * )(param_1 + 8);
    lVar6 = *(longlong * )(local_res18 + 8);
    local_res8 = local_res18;
    if (lVar6 != 0) {
        uVar1 = *param_2;
        lVar4 = lVar6;
        do {
            iVar3 = FUN_14018e2c0(uVar1, *(undefined8 * )(lVar4 + 0x20));
            if (iVar3 < 0) {
                lVar5 = *(longlong * )(lVar4 + 0x10);
                local_res8 = lVar4;
            } else {
                lVar5 = *(longlong * )(lVar4 + 0x18);
            }
            lVar4 = lVar5;
        } while (lVar5 != 0);
        if (lVar6 != 0) {
            uVar1 = *param_2;
            do {
                iVar3 = FUN_14018e2c0(*(undefined8 * )(lVar6 + 0x20), uVar1);
                if (iVar3 < 0) {
                    lVar4 = *(longlong * )(lVar6 + 0x18);
                } else {
                    lVar4 = *(longlong * )(lVar6 + 0x10);
                    local_res18 = lVar6;
                }
                lVar6 = lVar4;
            } while (lVar4 != 0);
        }
    }
    lVar6 = 0;
    lVar4 = local_res18;
    while (lVar4 != local_res8) {
        lVar5 = *(longlong * )(lVar4 + 0x18);
        if (lVar5 == 0) {
            lVar5 = *(longlong * )(lVar4 + 8);
            if (lVar4 == *(longlong * )(lVar5 + 0x18)) {
                do {
                    lVar4 = lVar5;
                    lVar5 = *(longlong * )(lVar4 + 8);
                } while (lVar4 == *(longlong * )(lVar5 + 0x18));
            }
            if (*(longlong * )(lVar4 + 0x18) != lVar5) {
                lVar4 = lVar5;
            }
        } else {
            for (lVar2 = *(longlong * )(lVar5 + 0x10); lVar4 = lVar5, lVar2 != 0;
                 lVar2 = *(longlong * )(lVar2 + 0x10)) {
                lVar5 = lVar2;
            }
        }
        lVar6 = lVar6 + 1;
    }
    FUN_14019dac0(param_1, &local_res18, &local_res8);
    return lVar6;
}


void FUN_14019dac0(longlong param_1, longlong *param_2, longlong *param_3) {
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong * )(*(longlong * )(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong * )(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong * )(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong * )(*param_2 + 8);
                if (*param_2 == *(longlong * )(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong * )(lVar2 + 8);
                    } while (*param_2 == *(longlong * )(lVar2 + 0x18));
                }
                if (*(longlong * )(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            } else {
                *param_2 = lVar2;
                lVar1 = *(longlong * )(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong * )(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong * )(lVar2 + 0x10);
                }
            }
            FUN_14019dba0(param_1, &local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}


void FUN_14019dba0(longlong param_1, longlong *param_2) {
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
        iVar2 = FUN_1401971e0(&DAT_140c8a1d8, 1, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014019dc66. Too many branches
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


undefined8 FUN_14019dca0(uint *param_1, ulonglong param_2, undefined8 param_3, longlong **param_4) {
    int iVar1;
    uint uVar2;
    longlong *plVar3;
    undefined *puVar4;
    undefined8 local_58;
    undefined **local_50;
    undefined8 local_48;
    LPVOID local_40;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    if (DAT_140c63758 == 0) {
        local_50 = &PTR_LAB_140b5e648;
        local_48 = 0;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_50);
        local_38 = local_50;
        local_58 = 0x141d3e830;
        local_28 = local_40;
        local_30 = local_48;
        iVar1 = FUN_140196f30(&DAT_140c8a200, 0x23, &local_58, &local_38);
        local_50 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_40);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0x80004005;
    }
    if ((*param_1 & 0xffffffe1) != 0) {
        local_50 = &PTR_LAB_140b5e648;
        local_48 = 0;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_50);
        local_58 = 0x141d3e918;
        puVar4 = &DAT_140c8a1f8;
        LAB_14019ddbc:
        local_38 = local_50;
        local_30 = local_48;
        local_28 = local_40;
        iVar1 = FUN_140196f30(puVar4, 0x23, &local_58, &local_38);
        local_50 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_40);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0x80070057;
    }
    if ((param_1[8] != 0) &&
        ((param_1[1] == 0 || ((*(longlong * )(param_1 + 2) == 0 && (*(longlong * )(param_1 + 4) == 0)))))
            ) {
        local_50 = &PTR_LAB_140b5e648;
        local_48 = 0;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_50);
        local_58 = 0x141d3e8f8;
        puVar4 = &DAT_140c8a1fc;
        goto LAB_14019ddbc;
    }
    if ((param_2 & 0xfffffffe) != 0) {
        local_50 = &PTR_LAB_140b5e648;
        local_48 = 0;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_50);
        local_58 = 0x141d3eab0;
        puVar4 = &DAT_140c8a1f0;
        goto LAB_14019ddbc;
    }
    if ((param_4 == (longlong **) 0x0) && ((param_2 & 1) != 0)) {
        local_50 = &PTR_LAB_140b5e648;
        local_48 = 0;
        local_40 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_50);
        local_58 = 0x141d3ea70;
        puVar4 = &DAT_140c8a1ec;
        goto LAB_14019ddbc;
    }
    uVar2 = *param_1 & 6;
    if (uVar2 == 2) {
        plVar3 = (longlong *) FUN_14018b280(0xa0, 0);
        if (plVar3 != (longlong *) 0x0) {
            FUN_1401c75d0(plVar3, param_1, param_3);
            *plVar3 = (longlong) & PTR_LAB_140b5f6d0;
            goto LAB_14019dfc1;
        }
    } else {
        if (uVar2 != 4) {
            local_50 = &PTR_LAB_140b5e648;
            local_48 = 0;
            local_40 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_50);
            local_58 = 0x141d3eb00;
            puVar4 = &DAT_140c8a1f4;
            goto LAB_14019ddbc;
        }
        plVar3 = (longlong *) FUN_14018b280(0xa0, 0);
        if (plVar3 != (longlong *) 0x0) {
            FUN_1401c75d0(plVar3, param_1, param_3);
            *plVar3 = (longlong) & PTR_LAB_140b5f620;
            goto LAB_14019dfc1;
        }
    }
    plVar3 = (longlong *) 0x0;
    LAB_14019dfc1:
    if (param_4 != (longlong **) 0x0) {
        *param_4 = plVar3;
    }
    if ((param_2 & 1) == 0) {
        (**(code * *)(*plVar3 + 0x58))(plVar3);
    }
    if (param_4 == (longlong **) 0x0) {
        (**(code * *)(*plVar3 + 8))(plVar3);
    }
    return 0;
}


undefined8
FUN_14019e010(undefined8 param_1, undefined8 *param_2, undefined8 param_3, undefined8 param_4,
              longlong **param_5) {
    int iVar1;
    undefined8 uVar2;
    longlong *plVar3;
    undefined8 local_48;
    undefined **local_40;
    undefined8 local_38;
    LPVOID local_30;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (DAT_140c63758 == 0) {
        local_40 = &PTR_LAB_140b5e648;
        local_38 = 0;
        local_30 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_40);
        local_28 = local_40;
        local_48 = 0x141d3ec30;
        local_18 = local_30;
        local_20 = local_38;
        iVar1 = FUN_140196f30(&DAT_140c8a1e8, 0x23, &local_48, &local_28);
        local_40 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_30);
        if (iVar1 != 0) {
            DebugBreak();
        }
        uVar2 = 0x80004005;
    } else if (param_2 == (undefined8 *) 0x0) {
        local_40 = &PTR_LAB_140b5e648;
        local_38 = 0;
        local_30 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_40);
        local_28 = local_40;
        local_48 = 0x141d3eb48;
        local_18 = local_30;
        local_20 = local_38;
        iVar1 = FUN_140196f30(&DAT_140c8a1e4, 0x23, &local_48, &local_28);
        local_40 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_30);
        if (iVar1 != 0) {
            DebugBreak();
        }
        uVar2 = 0x80070057;
    } else {
        plVar3 = (longlong *) FUN_14018b280(0x70);
        if (plVar3 == (longlong *) 0x0) {
            plVar3 = (longlong *) 0x0;
        } else {
            FUN_1401c5c80(plVar3, 8, 1, param_4);
            plVar3[0xd] = (longlong) param_2;
            *plVar3 = (longlong) & PTR_LAB_140b5f570;
            (**(code * *) * param_2)(param_2);
        }
        if (param_5 != (longlong **) 0x0) {
            *param_5 = plVar3;
        }
        (**(code * *)(*plVar3 + 0x58))(plVar3);
        if (param_5 == (longlong **) 0x0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        }
        uVar2 = 0;
    }
    return uVar2;
}


void FUN_14019e200(longlong *param_1, undefined4 param_2, ulonglong param_3) {
    int *piVar1;
    ulonglong *puVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    int iVar5;
    HANDLE hObject;
    undefined4 *local_res8;
    undefined8 local_res20;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_80;
    undefined8 local_78;
    LPVOID local_70;
    undefined8 local_68[2];
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    if (param_1 == (longlong *) 0x0) {
        local_80 = &PTR_LAB_140b5e648;
        local_78 = 0;
        local_70 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_80);
        local_58 = local_80;
        local_res20 = 0x141d3ed08;
        local_48 = local_70;
        local_50 = local_78;
        iVar5 = FUN_140196f30(&DAT_140c8a1e0, 0x23, &local_res20, &local_58);
        local_80 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_70);
        if (iVar5 != 0) {
            DebugBreak();
        }
    } else {
        puVar3 = (undefined4 * )(param_1[3] + (param_3 & 0xffffffff) * 8);
        if (*(int *) (param_1[3] + (param_3 & 0xffffffff) * 8) == 0) {
            *puVar3 = 1;
            puVar3[1] = param_2;
            LOCK();
            piVar1 = (int *) ((longlong) param_1 + 0x14);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
                FUN_14003d8f0(&local_res8);
                FUN_1401c6280(param_1);
                if (*(ulonglong * )(local_res8 + 2) < 2) {
                    *local_res8 = 0;
                    *(undefined8 * )(local_res8 + 2) = 0;
                    if (*(longlong * )(local_res8 + 4) != 0) {
                        if (*(longlong * )(local_res8 + 6) == 0) {
                            hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar2 = (ulonglong * )(local_res8 + 6);
                            uVar4 = *puVar2;
                            *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ (ulonglong) hObject);
                            if (uVar4 != 0) {
                                CloseHandle(hObject);
                            }
                        }
                        SetEvent(*(HANDLE * )(local_res8 + 6));
                    }
                } else {
                    *(longlong * )(local_res8 + 2) = *(longlong * )(local_res8 + 2) + -1;
                }
            }
            (**(code * *)(*param_1 + 8))(param_1);
        } else {
            local_98 = &PTR_LAB_140b5e648;
            local_90 = 0;
            local_88 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_98);
            local_68[0] = 0x141d3ec60;
            local_38 = local_98;
            local_30 = local_90;
            local_28 = local_88;
            iVar5 = FUN_140196f30(&DAT_140c8a1dc, 0x23, local_68, param_2, puVar3[1], *puVar3,
                                  *(undefined4 * )(param_1 + 2), *(undefined4 * )((longlong) param_1 + 0x14),
                                  *(undefined4 * )((longlong) param_1 + 0xc), *(undefined4 * )(param_1 + 1),
                                  *(undefined4 * )(param_1 + 5), *(undefined4 * )((longlong) param_1 + 0x2c),
                                  *(undefined4 * )(param_1 + 6), *(undefined4 * )((longlong) param_1 + 0x34),
                                  *(undefined4 * )(param_1 + 7), param_1, param_1[0xc], &local_38);
            local_98 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_88);
            if (iVar5 != 0) {
                DebugBreak();
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_14019e4a0(void) {
    int *piVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if (_DAT_140c6373c == 0) {
        puVar3 = (undefined8 *) FUN_14018b280(0x18);
        if (puVar3 == (undefined8 *) 0x0) {
            puVar3 = (undefined8 *) 0x0;
        } else {
            puVar3[1] = 2;
            puVar3[2] = 0;
            *puVar3 = &DAT_140a446e8;
        }
        _DAT_140c6373c = 1;
        puVar3[2] = DAT_140c63770;
        DAT_140c63770 = puVar3;
    }
    if (DAT_140c63758 == (int *) 0x0) {
        lVar4 = FUN_14018b280(0xd0, 0);
        if (lVar4 == 0) {
            DAT_140c63758 = (int *) 0x0;
        } else {
            DAT_140c63758 = (int *) FUN_1401c7f70(lVar4);
        }
        iVar2 = FUN_1401c80a0();
        piVar1 = DAT_140c63758;
        if (iVar2 < 0) {
            if (DAT_140c63758 != (int *) 0x0) {
                FUN_1401c8010(DAT_140c63758);
                FUN_14018b900(piVar1, 0);
            }
            DAT_140c63758 = (int *) 0x0;
            return iVar2;
        }
    } else {
        LOCK();
        *DAT_140c63758 = *DAT_140c63758 + 1;
    }
    return 0;
}


longlong FUN_14019e5d0(longlong param_1, undefined8 param_2, undefined4 param_3) {
    longlong *plVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    DWORD DVar6;
    HANDLE hObject;
    ulonglong uVar7;
    longlong lVar8;

    uVar7 = 0;
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    RtlCaptureStackBackTrace(1, 1, param_1, 0);
    lVar4 = *(longlong * )(param_1 + 8);
    *(undefined8 * )(param_1 + 8) = 0;
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    *(undefined4 * )(param_1 + 0x10) = param_3;
    lVar4 = *(longlong * )(param_1 + 0x18);
    *(undefined8 * )(param_1 + 0x18) = 0;
    if (lVar4 != 0) {
        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    *(undefined4 * )(param_1 + 0x20) = 0;
    *(undefined4 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined8 * )(param_1 + 0x58) = 0;
    *(undefined8 * )(param_1 + 0x60) = 0xffffffffffffffff;
    *(undefined8 * )(param_1 + 0x68) = 0;
    FUN_14004eed0();
    lVar4 = DAT_140c63760;
    DVar6 = GetCurrentThreadId();
    if (*(DWORD * )(lVar4 + 0x10) == DVar6) {
        *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + 1;
    } else {
        do {
            LOCK();
            puVar3 = (ulonglong * )(lVar4 + 0x18);
            uVar5 = *puVar3;
            *puVar3 = *puVar3 ^ (ulonglong)(uVar5 == 0) * (*puVar3 ^ 1);
            if (uVar5 == 0) {
                *(DWORD * )(lVar4 + 0x10) = DVar6;
                goto LAB_14019e6c6;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 0x400);
        FUN_14019fb60(lVar4 + 0x10);
    }
    LAB_14019e6c6:
    lVar8 = DAT_140c63760;
    plVar1 = (longlong * )(DAT_140c63760 + 0x40);
    if (*(longlong * )(param_1 + 0x70) == 0) {
        *(longlong * *)(param_1 + 0x70) = plVar1;
        plVar2 = (longlong * )(param_1 + 0x78);
        *plVar2 = *plVar1;
        *plVar1 = param_1;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0x70) = plVar2;
            lVar8 = DAT_140c63760;
        }
    }
    *(int *) (lVar8 + 0x34) = *(int *) (lVar8 + 0x34) + 1;
    if (*(ulonglong * )(lVar4 + 0x18) < 2) {
        *(undefined4 * )(lVar4 + 0x10) = 0;
        *(undefined8 * )(lVar4 + 0x18) = 0;
        if (*(longlong * )(lVar4 + 0x20) != 0) {
            if (*(longlong * )(lVar4 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar3 = (ulonglong * )(lVar4 + 0x28);
                uVar7 = *puVar3;
                *puVar3 = *puVar3 ^ (ulonglong)(uVar7 == 0) * (*puVar3 ^ (ulonglong) hObject);
                if (uVar7 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x28));
        }
    } else {
        *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + -1;
    }
    return param_1;
}


void FUN_14019e780(longlong param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar3 = DAT_140c63760;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar3 + 0x10) == DVar4) {
        *(longlong * )(lVar3 + 0x18) = *(longlong * )(lVar3 + 0x18) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x18);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
            if (uVar2 == 0) {
                *(DWORD * )(lVar3 + 0x10) = DVar4;
                goto LAB_14019e7ea;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar3 + 0x10, DVar4);
    }
    LAB_14019e7ea:
    *(int *) (DAT_140c63760 + 0x34) = *(int *) (DAT_140c63760 + 0x34) + -1;
    if (*(undefined8 * *)(param_1 + 0x70) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x70) = *(undefined8 * )(param_1 + 0x78);
    }
    if (*(longlong * )(param_1 + 0x78) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x78) + 0x70) = *(undefined8 * )(param_1 + 0x70);
    }
    *(undefined8 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    if (*(ulonglong * )(lVar3 + 0x18) < 2) {
        *(undefined4 * )(lVar3 + 0x10) = 0;
        *(undefined8 * )(lVar3 + 0x18) = 0;
        if (*(longlong * )(lVar3 + 0x20) != 0) {
            if (*(longlong * )(lVar3 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x28);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x28));
        }
    } else {
        *(longlong * )(lVar3 + 0x18) = *(longlong * )(lVar3 + 0x18) + -1;
    }
    if (*(undefined8 * *)(param_1 + 0x70) != (undefined8 *) 0x0) {
        **(undefined8 * *)(param_1 + 0x70) = *(undefined8 * )(param_1 + 0x78);
    }
    if (*(longlong * )(param_1 + 0x78) != 0) {
        *(undefined8 * )(*(longlong * )(param_1 + 0x78) + 0x70) = *(undefined8 * )(param_1 + 0x70);
    }
    *(undefined8 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0x78) = 0;
    lVar3 = *(longlong * )(param_1 + 0x28);
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = *(longlong * )(param_1 + 0x18);
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = *(longlong * )(param_1 + 8);
    if (lVar3 != 0) {
        (**(code * *)(*(longlong * )(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14019e8f0(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong local_res10;

    lVar4 = DAT_140c63760;
    if (*(int *) (DAT_140c63760 + 0x30) != 0) {
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*(DWORD * )(lVar4 + 0x10) == DVar5) {
            *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar4 + 0x18);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *(DWORD * )(lVar4 + 0x10) = DVar5;
                    goto LAB_14019e95d;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(lVar4 + 0x10, DVar5);
        }
        LAB_14019e95d:
        iVar2 = *(int *) (param_1 + 0x38);
        *(int *) (param_1 + 0x38) = iVar2 + 1;
        if (iVar2 == 0) {
            QueryPerformanceCounter(&local_res10);
            local_res10 = local_res10 - _DAT_140c87988;
            *(longlong * )(param_1 + 0x58) = *(longlong * )(param_1 + 0x58) + 1;
            *(longlong * )(param_1 + 0x40) = local_res10;
        }
        if (1 < *(ulonglong * )(lVar4 + 0x18)) {
            *(longlong * )(lVar4 + 0x18) = *(longlong * )(lVar4 + 0x18) + -1;
            return;
        }
        *(undefined4 * )(lVar4 + 0x10) = 0;
        *(undefined8 * )(lVar4 + 0x18) = 0;
        if (*(longlong * )(lVar4 + 0x20) != 0) {
            if (*(longlong * )(lVar4 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar4 + 0x28);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar4 + 0x28));
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14019ea00(longlong param_1) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong local_res8;

    if ((*(int *) (param_1 + 0x38) != 0) || (*(int *) (DAT_140c63760 + 0x30) != 0)) {
        QueryPerformanceCounter(&local_res8);
        lVar3 = DAT_140c63760;
        uVar7 = (local_res8 - *(longlong * )(param_1 + 0x40)) - _DAT_140c87988;
        DVar4 = GetCurrentThreadId();
        uVar6 = 0;
        if (*(DWORD * )(lVar3 + 0x10) == DVar4) {
            *(longlong * )(lVar3 + 0x18) = *(longlong * )(lVar3 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x18);
                uVar2 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ 1);
                if (uVar2 == 0) {
                    *(DWORD * )(lVar3 + 0x10) = DVar4;
                    goto LAB_14019ea97;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(lVar3 + 0x10);
        }
        LAB_14019ea97:
        if ((*(int *) (param_1 + 0x38) != 0) &&
            (iVar5 = *(int *) (param_1 + 0x38) + -1, *(int *) (param_1 + 0x38) = iVar5, iVar5 == 0)) {
            *(longlong * )(param_1 + 0x48) = *(longlong * )(param_1 + 0x48) + uVar7;
            uVar6 = *(ulonglong * )(param_1 + 0x60);
            if (uVar7 < *(ulonglong * )(param_1 + 0x60)) {
                uVar6 = uVar7;
            }
            *(ulonglong * )(param_1 + 0x60) = uVar6;
            uVar6 = *(ulonglong * )(param_1 + 0x68);
            if (*(ulonglong * )(param_1 + 0x68) < uVar7) {
                uVar6 = uVar7;
            }
            *(ulonglong * )(param_1 + 0x68) = uVar6;
        }
        if (1 < *(ulonglong * )(lVar3 + 0x18)) {
            *(longlong * )(lVar3 + 0x18) = *(longlong * )(lVar3 + 0x18) + -1;
            return;
        }
        *(undefined4 * )(lVar3 + 0x10) = 0;
        *(undefined8 * )(lVar3 + 0x18) = 0;
        if (*(longlong * )(lVar3 + 0x20) != 0) {
            if (*(longlong * )(lVar3 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x28);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x28));
        }
    }
    return;
}


void FUN_14019eb40(longlong param_1) {
    longlong lVar1;
    int iVar2;
    undefined8 local_res8;

    iVar2 = DAT_140c3fe20;
    if (*DAT_140c63750 < DAT_140c3fe20) {
        iVar2 = *DAT_140c63750;
    }
    if (*(ulonglong * )(param_1 + 0x30) != (ulonglong) * (uint * )(&DAT_140c3fe30 + (longlong) iVar2 * 4)) {
        FUN_14004eed0(param_1 + 0x28);
        local_res8 = 0;
        iVar2 = DAT_140c3fe20;
        if (*DAT_140c63750 < DAT_140c3fe20) {
            iVar2 = *DAT_140c63750;
        }
        FUN_14019f340(param_1 + 0x28, *(undefined4 * )(&DAT_140c3fe30 + (longlong) iVar2 * 4), &local_res8);
        *(undefined4 * )(param_1 + 0x20) = 0;
        *(undefined4 * )(param_1 + 0x38) = 0;
        *(undefined8 * )(param_1 + 0x48) = 0;
        *(undefined8 * )(param_1 + 0x50) = 0;
        *(undefined8 * )(param_1 + 0x58) = 0;
        *(undefined8 * )(param_1 + 0x60) = 0xffffffffffffffff;
        *(undefined8 * )(param_1 + 0x68) = 0;
    }
    *(undefined8 * )
            (*(longlong * )(param_1 + 0x28) +
             ((ulonglong) * (uint * )(param_1 + 0x20) % *(ulonglong * )(param_1 + 0x30)) * 8) =
            *(undefined8 * )(param_1 + 0x48);
    lVar1 = *(longlong * )(param_1 + 0x48);
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(longlong * )(param_1 + 0x50) = *(longlong * )(param_1 + 0x50) + lVar1;
    *(int *) (param_1 + 0x20) = *(int *) (param_1 + 0x20) + 1;
    return;
}


void FUN_14019ec10(longlong param_1) {
    int iVar1;
    undefined8 local_res8;

    FUN_14004eed0(param_1 + 0x28);
    local_res8 = 0;
    iVar1 = DAT_140c3fe20;
    if (*DAT_140c63750 < DAT_140c3fe20) {
        iVar1 = *DAT_140c63750;
    }
    FUN_14019f340(param_1 + 0x28, *(undefined4 * )(&DAT_140c3fe30 + (longlong) iVar1 * 4), &local_res8);
    *(undefined4 * )(param_1 + 0x20) = 0;
    *(undefined4 * )(param_1 + 0x38) = 0;
    *(undefined8 * )(param_1 + 0x48) = 0;
    *(undefined8 * )(param_1 + 0x50) = 0;
    *(undefined8 * )(param_1 + 0x58) = 0;
    *(undefined8 * )(param_1 + 0x68) = 0;
    *(undefined8 * )(param_1 + 0x60) = 0xffffffffffffffff;
    return;
}


void FUN_14019ec90(undefined8 *param_1) {
    longlong lVar1;

    lVar1 = param_1[7];
    *param_1 = &PTR_LAB_140b5e718;
    while (lVar1 != 0) {
        lVar1 = param_1[7];
        if (lVar1 != 0) {
            FUN_14019e780(lVar1);
            FUN_14018b900(lVar1, 0);
        }
        lVar1 = param_1[7];
    }
    lVar1 = param_1[8];
    while (lVar1 != 0) {
        lVar1 = param_1[8];
        if (lVar1 != 0) {
            FUN_14019e780(lVar1);
            FUN_14018b900(lVar1, 0);
        }
        lVar1 = param_1[8];
    }
    DAT_140c63760 = 0;
    if ((longlong *) param_1[9] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[9] + 8))();
    }
    if (param_1[8] != 0) {
        FUN_1401a4a00(param_1 + 8);
    }
    if (param_1[7] != 0) {
        FUN_1401a4a00(param_1 + 7);
    }
    if (param_1[5] == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014019ed6e. Too many branches
    // WARNING: Treating indirect jump as call
    CloseHandle((HANDLE) param_1[5]);
    return;
}


int FUN_14019ed80(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_14019ec90();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_14019edc0(undefined8 param_1, int param_2) {
    DWORD *pDVar1;
    ulonglong *puVar2;
    char cVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    DWORD DVar8;
    int iVar9;
    HANDLE pvVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined auStack2248[48];
    int local_898;
    HANDLE local_890;
    longlong local_888;
    longlong local_880;
    undefined local_878[16];
    undefined4 local_868[20];
    undefined4 local_818;
    char local_814;
    char local_813[2011];
    ulonglong local_38;

    lVar7 = DAT_140c63760;
    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack2248;
    pDVar1 = (DWORD * )(DAT_140c63760 + 0x10);
    local_898 = param_2;
    DVar8 = GetCurrentThreadId();
    puVar14 = (undefined8 *) 0x0;
    puVar13 = puVar14;
    if (*pDVar1 == DVar8) {
        *(longlong * )(lVar7 + 0x18) = *(longlong * )(lVar7 + 0x18) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(lVar7 + 0x18);
            uVar6 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar6 == 0) * (*puVar2 ^ 1);
            if (uVar6 == 0) {
                *pDVar1 = DVar8;
                goto LAB_14019ee3e;
            }
            puVar13 = (undefined8 * )((longlong) puVar13 + 1);
        } while (puVar13 < &DAT_00000400);
        FUN_14019fb60(pDVar1, DVar8);
    }
    LAB_14019ee3e:
    if (param_2 != 0) {
        if (*(longlong * )(lVar7 + 0x40) != 0) {
            if ((DAT_140c886b8 != 0) && (*(int *) (DAT_140c886b8 + 4) != -1)) {
                *(int *) (DAT_140c886b8 + 4) = *(int *) (DAT_140c886b8 + 4) + 1;
            }
            if (*(longlong * )(lVar7 + 0x48) == 0) {
                FUN_140191420(lVar7 + 0x48);
            }
            pvVar10 = GetCurrentProcess();
            local_890 = pvVar10;
            for (puVar13 = *(undefined8 * *)(lVar7 + 0x40); puVar13 != (undefined8 *) 0x0;
                 puVar13 = (undefined8 *) puVar13[0xf]) {
                if (puVar13[1] == 0) {
                    if (*(longlong * )(lVar7 + 0x48) != 0) {
                        FUN_1407e4830(local_868, 0, 0x58);
                        local_868[0] = 0x58;
                        local_818 = 2000;
                        iVar9 = FUN_140191280(pvVar10, *puVar13, local_878, local_868);
                        if (iVar9 != 0) {
                            lVar4 = puVar13[1];
                            puVar15 = puVar14;
                            cVar3 = local_814;
                            while (cVar3 != '\0') {
                                puVar15 = (undefined8 * )((longlong) puVar15 + 1);
                                cVar3 = (&local_814)[(longlong) puVar15];
                            }
                            puVar11 = (undefined8 *) FUN_14018b280((undefined * )((longlong) puVar15 + 0x11), 0);
                            puVar12 = puVar14;
                            if (puVar11 != (undefined8 *) 0x0) {
                                *puVar11 = &PTR_LAB_140b55060;
                                puVar11[1] = puVar15;
                                puVar12 = puVar11;
                            }
                            puVar12 = puVar12 + 2;
                            FUN_1407db590(puVar12);
                            *(undefined * )((longlong) puVar15 + (longlong) puVar12) = 0;
                            puVar13[1] = puVar12;
                            pvVar10 = local_890;
                            if (lVar4 != 0) {
                                (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                                pvVar10 = local_890;
                            }
                        }
                    }
                    if (puVar13[1] == 0) {
                        puVar15 = (undefined8 *) FUN_14018ded0(&local_888, &DAT_1409e211c);
                        uVar5 = puVar13[1];
                        puVar13[1] = *puVar15;
                        *puVar15 = uVar5;
                        if (local_888 != 0) {
                            (**(code * *)(*(longlong * )(local_888 + -0x10) + 8))(local_888 + -0x10);
                        }
                    }
                }
                if (puVar13[3] != 0) {
                    puVar15 = (undefined8 *) FUN_14018ded0(&local_880, "%s (%s)", puVar13[1], puVar13[3]);
                    uVar5 = puVar13[1];
                    puVar13[1] = *puVar15;
                    *puVar15 = uVar5;
                    if (local_880 != 0) {
                        (**(code * *)(*(longlong * )(local_880 + -0x10) + 8))(local_880 + -0x10);
                    }
                    lVar4 = puVar13[3];
                    puVar13[3] = 0;
                    if (lVar4 != 0) {
                        (**(code * *)(*(longlong * )(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                    }
                }
            }
            FUN_14019f4c0(lVar7 + 0x40);
            FUN_14019f3f0(lVar7 + 0x40, lVar7 + 0x38);
            param_2 = local_898;
            if ((DAT_140c886b8 != 0) && (*(int *) (DAT_140c886b8 + 4) != 0)) {
                *(int *) (DAT_140c886b8 + 4) = *(int *) (DAT_140c886b8 + 4) + -1;
            }
        }
        if (*(int *) (lVar7 + 0x30) == 0) {
            for (lVar4 = *(longlong * )(lVar7 + 0x38); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x78)) {
                *(undefined8 * )(lVar4 + 0x48) = 0;
                *(undefined4 * )(lVar4 + 0x20) = 0;
            }
        } else {
            for (lVar4 = *(longlong * )(lVar7 + 0x38); lVar4 != 0; lVar4 = *(longlong * )(lVar4 + 0x78)) {
                FUN_14019eb40(lVar4);
            }
        }
    }
    *(int *) (lVar7 + 0x30) = param_2;
    if (*(ulonglong * )(lVar7 + 0x18) < 2) {
        *(undefined4 * )(lVar7 + 0x10) = 0;
        *(undefined8 * )(lVar7 + 0x18) = 0;
        if (*(longlong * )(lVar7 + 0x20) != 0) {
            if (*(longlong * )(lVar7 + 0x28) == 0) {
                pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar7 + 0x28);
                uVar6 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar6 == 0) * (*puVar2 ^ (ulonglong) pvVar10);
                if (uVar6 != 0) {
                    CloseHandle(pvVar10);
                }
            }
            SetEvent(*(HANDLE * )(lVar7 + 0x28));
        }
    } else {
        *(longlong * )(lVar7 + 0x18) = *(longlong * )(lVar7 + 0x18) + -1;
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack2248);
    return;
}


void FUN_14019f150(void) {
    ulonglong *puVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    int *piVar5;
    longlong lVar6;
    DWORD DVar7;
    longlong lVar8;
    HANDLE hObject;
    ulonglong uVar9;
    longlong lVar10;
    undefined8 *puVar11;
    ulonglong uVar12;

    lVar6 = DAT_140c63760;
    if (DAT_140c63760 != 0) {
        DVar7 = GetCurrentThreadId();
        uVar9 = 0;
        if (*(DWORD * )(lVar6 + 0x10) == DVar7) {
            *(longlong * )(lVar6 + 0x18) = *(longlong * )(lVar6 + 0x18) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar6 + 0x18);
                uVar12 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar12 == 0) * (*puVar1 ^ 1);
                if (uVar12 == 0) {
                    *(DWORD * )(lVar6 + 0x10) = DVar7;
                    goto LAB_14019f1ba;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < 0x400);
            FUN_14019fb60();
        }
        LAB_14019f1ba:
        for (lVar3 = *(longlong * )(DAT_140c63760 + 0x38); lVar3 != 0;
             lVar3 = *(longlong * )(lVar3 + 0x78)) {
            FUN_14019ec10();
        }
        piVar5 = DAT_140c63750;
        for (lVar3 = *(longlong * )(DAT_140c63760 + 0x40); DAT_140c63750 = piVar5, lVar3 != 0;
             lVar3 = *(longlong * )(lVar3 + 0x78)) {
            *(undefined8 * )(lVar3 + 0x30) = 0;
            iVar4 = DAT_140c3fe20;
            if (*piVar5 < DAT_140c3fe20) {
                iVar4 = *piVar5;
            }
            uVar2 = *(uint * )(&DAT_140c3fe30 + (longlong) iVar4 * 4);
            uVar12 = (ulonglong) uVar2;
            lVar8 = FUN_14018db00(*(undefined8 * )(lVar3 + 0x28), uVar12, 8);
            uVar9 = *(ulonglong * )(lVar3 + 0x30);
            if (uVar9 < uVar12) {
                puVar11 = (undefined8 * )(lVar8 + uVar9 * 8);
                for (lVar10 = uVar2 - uVar9; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                }
            }
            if (*(longlong * )(lVar3 + 0x28) != lVar8) {
                FUN_1407db590(lVar8, *(longlong * )(lVar3 + 0x28), *(longlong * )(lVar3 + 0x30) << 3);
                if (*(longlong * )(lVar3 + 0x28) != 0) {
                    (**(code * *)(*(longlong * )(*(longlong * )(lVar3 + 0x28) + -0x10) + 8))();
                }
                *(longlong * )(lVar3 + 0x28) = lVar8;
            }
            *(ulonglong * )(lVar3 + 0x30) = uVar12;
            *(undefined4 * )(lVar3 + 0x20) = 0;
            *(undefined4 * )(lVar3 + 0x38) = 0;
            *(undefined8 * )(lVar3 + 0x48) = 0;
            *(undefined8 * )(lVar3 + 0x50) = 0;
            *(undefined8 * )(lVar3 + 0x58) = 0;
            *(undefined8 * )(lVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined8 * )(lVar3 + 0x68) = 0;
            piVar5 = DAT_140c63750;
        }
        if (1 < *(ulonglong * )(lVar6 + 0x18)) {
            *(longlong * )(lVar6 + 0x18) = *(longlong * )(lVar6 + 0x18) + -1;
            return;
        }
        *(undefined4 * )(lVar6 + 0x10) = 0;
        *(undefined8 * )(lVar6 + 0x18) = 0;
        if (*(longlong * )(lVar6 + 0x20) != 0) {
            if (*(longlong * )(lVar6 + 0x28) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar6 + 0x28);
                uVar9 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar9 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar9 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar6 + 0x28));
        }
    }
    return;
}


void FUN_14019f340(longlong *param_1, ulonglong param_2, undefined8 *param_3) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (param_2 <= (ulonglong) param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
        return;
    }
    lVar2 = FUN_14018db00(*param_1, param_2, 8);
    uVar3 = param_1[1];
    while (uVar3 < param_2) {
        uVar3 = uVar3 + 1;
        *(undefined8 * )(lVar2 + -8 + uVar3 * 8) = *param_3;
    }
    if (*param_1 != lVar2) {
        FUN_1407db590(lVar2, *param_1, param_1[1] << 3);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar2;
    }
    param_1[1] = param_2;
    return;
}


void FUN_14019f3f0(longlong *param_1, longlong *param_2, undefined8 param_3, code *param_4) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res18;

    local_res18 = 0;
    plVar4 = &local_res18;
    lVar2 = *param_1;
    lVar1 = *param_2;
    do {
        if (lVar2 == 0) {
            if (lVar1 == 0) {
                LAB_14019f485:
                *plVar4 = 0;
            } else {
                *plVar4 = lVar1;
                *(longlong * *)(lVar1 + 0x70) = plVar4;
            }
            LAB_14019f48c:
            *param_1 = 0;
            *param_2 = local_res18;
            if (local_res18 != 0) {
                *(longlong * *)(local_res18 + 0x70) = param_2;
            }
            return;
        }
        if (lVar1 == 0) {
            if (lVar2 == 0) goto LAB_14019f485;
            *plVar4 = lVar2;
            *(longlong * *)(lVar2 + 0x70) = plVar4;
            goto LAB_14019f48c;
        }
        iVar3 = (*param_4)(lVar2, lVar1, 0);
        if (iVar3 < 1) {
            *plVar4 = lVar2;
            *(longlong * *)(lVar2 + 0x70) = plVar4;
            lVar5 = lVar1;
            lVar6 = *(longlong * )(lVar2 + 0x78);
            lVar1 = lVar2;
        } else {
            *plVar4 = lVar1;
            *(longlong * *)(lVar1 + 0x70) = plVar4;
            lVar5 = *(longlong * )(lVar1 + 0x78);
            lVar6 = lVar2;
        }
        plVar4 = (longlong * )(lVar1 + 0x78);
        lVar2 = lVar6;
        lVar1 = lVar5;
    } while (true);
}


void FUN_14019f4c0(longlong *param_1, undefined8 param_2, code *param_3) {
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
    LAB_14019f4f0:
    lVar5 = *param_1;
    bVar3 = true;
    lVar2 = lVar9;
    lVar7 = lVar5;
    do {
        for (; (lVar6 = lVar9, lVar8 = lVar9, lVar5 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar5 = *(longlong * )(lVar5 + 0x78);
        }
        while (true) {
            if (lVar5 == 0) goto LAB_14019f591;
            if (lVar6 == 0) goto LAB_14019f5a0;
            if (lVar8 == 0) break;
            iVar4 = (*param_3)(lVar7, lVar5, 0);
            if (iVar4 < 1) {
                lVar7 = *(longlong * )(lVar7 + 0x78);
                lVar6 = lVar6 + -1;
            } else {
                lVar8 = lVar8 + -1;
                **(undefined8 * *)(lVar5 + 0x70) = *(undefined8 * )(lVar5 + 0x78);
                plVar1 = *(longlong * *)(lVar5 + 0x70);
                lVar2 = *plVar1;
                if (lVar2 != 0) {
                    *(longlong * *)(lVar2 + 0x70) = plVar1;
                }
                plVar1 = *(longlong * *)(lVar7 + 0x70);
                *(longlong * )(lVar5 + 0x78) = lVar7;
                *(longlong * *)(lVar5 + 0x70) = plVar1;
                *plVar1 = lVar5;
                *(longlong * *)(lVar7 + 0x70) = (longlong * )(lVar5 + 0x78);
                lVar5 = lVar2;
            }
        }
        LAB_14019f5b3:
        bVar3 = false;
        lVar2 = lVar9;
        lVar7 = lVar5;
    } while (true);
    LAB_14019f5a0:
    if (lVar8 == 0) goto LAB_14019f5b3;
    lVar5 = *(longlong * )(lVar5 + 0x78);
    lVar8 = lVar8 + -1;
    if (lVar5 == 0) goto LAB_14019f591;
    goto LAB_14019f5a0;
    LAB_14019f591:
    if (bVar3) {
        return;
    }
    lVar9 = lVar9 * 2;
    goto LAB_14019f4f0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14019f5e0(longlong *param_1) {
    undefined8 uVar1;
    longlong lVar2;
    longlong **pplVar3;
    HANDLE hThread;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined4 local_48;
    longlong local_40;
    undefined8 local_38[2];

    uVar6 = 0;
    uVar1 = FUN_1401a1070(param_1 + 10, 1, 0, 0, 0);
    if ((-1 < (int) uVar1) && (uVar1 = FUN_1401a1070(param_1 + 0xb, 1, 0, 0, 0), -1 < (int) uVar1)) {
        uVar1 = SUB168(ZEXT816(0x10) * ZEXT416(*(uint * )(param_1 + 7)), 0);
        if (SUB168(ZEXT816(0x10) * ZEXT416(*(uint * )(param_1 + 7)) >> 0x40, 0) != 0) {
            uVar1 = 0xffffffffffffffff;
        }
        lVar2 = FUN_14018b280(uVar1, 0);
        param_1[9] = lVar2;
        *(undefined4 * )((longlong) param_1 + 0x44) = 0;
        uVar5 = uVar6;
        if (*(int *) (param_1 + 7) != 0) {
            do {
                pplVar3 = (longlong * *)(uVar5 * 0x10 + param_1[9]);
                *pplVar3 = param_1;
                *(undefined4 * )(pplVar3 + 1) = 0xa0270001;
                uVar4 = (int) uVar5 + 1;
                uVar5 = (ulonglong) uVar4;
            } while (uVar4 < *(uint * )(param_1 + 7));
        }
        *(undefined4 * )(param_1 + 8) = 0;
        local_48 = 0x1000;
        local_40 = param_1[2];
        local_38[0] = 0;
        for (; (uint) uVar6 < *(uint * )(param_1 + 7); uVar6 = (ulonglong)((uint) uVar6 + 1)) {
            hThread = CreateThread((LPSECURITY_ATTRIBUTES) 0x0, 0, FUN_14019f950,
                                   (LPVOID)(uVar6 * 0x10 + param_1[9]), 0, (LPDWORD) local_38);
            if (hThread == (HANDLE) 0x0) {
                (**(code * *)(*param_1 + 0x28))(param_1);
                return 0x80004005;
            }
            if (param_1[2] != 0) {
                RaiseException(0x406d1388, 0, 6, (ULONG_PTR * ) & local_48);
            }
            SetThreadPriority(hThread, *(int *) (&DAT_140b5e7b8 + (longlong) * (int *) (param_1 + 3) * 4));
            CloseHandle(hThread);
            *(int *) (param_1 + 1) = *(int *) (param_1 + 1) + 1;
            *(int *) ((longlong) param_1 + 0x44) = *(int *) ((longlong) param_1 + 0x44) + 1;
            LOCK();
            _DAT_140c884a4 = _DAT_140c884a4 + 1;
        }
        uVar1 = 0;
    }
    return uVar1;
}


int FUN_14019f790(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5e7d0;
            FUN_14018b900(param_1[9], 0);
            if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0xb] + 8))();
            }
            if ((longlong *) param_1[10] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[10] + 8))();
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_14019f850(longlong param_1) {
    int iVar1;
    undefined8 uVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if (*(int *) (param_1 + 0x40) == 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_28 = local_48;
        local_res8 = 0x141d3ed60;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_140196f30(&DAT_140c8a21c, 0x27, &local_res8, &local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        if (iVar1 != 0) {
            DebugBreak();
        }
        return 0;
    }
    // WARNING: Could not recover jumptable at 0x00014019f928. Too many branches
    // WARNING: Treating indirect jump as call
    uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x58) + 0x20))();
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14019f950(longlong **param_1) {
    int *piVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined4 uVar5;
    longlong in_GS_OFFSET;

    plVar3 = *param_1;
    (**(code * *)(*(longlong *) plVar3[10] + 0x20))((longlong *) plVar3[10], 0xffffffff);
    lVar4 = *(longlong * )(in_GS_OFFSET + 8);
    uVar2 = *(undefined4 * )(lVar4 + -4);
    *(undefined4 * )(lVar4 + -4) = 1;
    if (*(int *) (plVar3 + 8) != 1) goto switchD_14019f9b5_caseD_9;
    switch (*(undefined4 * )((longlong) plVar3 + 0x1c)) {
        case 0:
            *(undefined4 * )(param_1 + 1) = 0;
            break;
        case 1:
            (*(code *) plVar3[5])();
            *(undefined4 * )(param_1 + 1) = 0;
            break;
        case 2:
            uVar5 = (*(code *) plVar3[5])();
            goto LAB_14019fae8;
        case 3:
            (*(code *) plVar3[5])(plVar3[4], plVar3[6]);
            *(undefined4 * )(param_1 + 1) = 0;
            break;
        case 4:
            uVar5 = (*(code *) plVar3[5])(plVar3[4], plVar3[6]);
            goto LAB_14019fae8;
        case 5:
            (*(code *) plVar3[5])(plVar3[4], (longlong) param_1 - plVar3[9] >> 4);
            *(undefined4 * )(param_1 + 1) = 0;
            break;
        case 6:
            uVar5 = (*(code *) plVar3[5])(plVar3[4], (longlong) param_1 - plVar3[9] >> 4);
            goto LAB_14019fae8;
        case 7:
            (*(code *) plVar3[5])(plVar3[4], plVar3[6], (longlong) param_1 - plVar3[9] >> 4);
            *(undefined4 * )(param_1 + 1) = 0;
            break;
        case 8:
            uVar5 = (*(code *) plVar3[5])(plVar3[4], plVar3[6], (longlong) param_1 - plVar3[9] >> 4);
        LAB_14019fae8:
            *(undefined4 * )(param_1 + 1) = uVar5;
    }
    switchD_14019f9b5_caseD_9:
    LOCK();
    piVar1 = (int *) ((longlong) plVar3 + 0x44);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        *(undefined4 * )(plVar3 + 8) = 2;
        (**(code * *)(*(longlong *) plVar3[0xb] + 0x10))();
    }
    (**(code * *)(*plVar3 + 8))(plVar3);
    LOCK();
    _DAT_140c884a4 = _DAT_140c884a4 + -1;
    *(undefined4 * )(lVar4 + -4) = uVar2;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_14019fb60(undefined4 *param_1, undefined4 param_2) {
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    bool bVar6;
    undefined8 local_res8;
    undefined4 local_res10;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 uStack112;
    undefined8 local_68;
    DWORD DStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    DWORD DStack64;
    undefined4 uStack60;

    local_res10 = param_2;
    if (*(longlong * )(param_1 + 6) == 0) {
        hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
        LOCK();
        puVar1 = (ulonglong * )(param_1 + 6);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 ^ (ulonglong)(uVar2 == 0) * (*puVar1 ^ (ulonglong) hObject);
        if (uVar2 != 0) {
            CloseHandle(hObject);
        }
    }
    LOCK();
    *(longlong * )(param_1 + 4) = *(longlong * )(param_1 + 4) + 1;
    LOCK();
    puVar1 = (ulonglong * )(param_1 + 2);
    bVar6 = *puVar1 == 0;
    *puVar1 = *puVar1 ^ (ulonglong) bVar6 * (*puVar1 ^ 1);
    lVar3 = (ulonglong)
    !bVar6 * *puVar1;
    while (!bVar6) {
        DVar4 = WaitForSingleObject(*(HANDLE * )(param_1 + 6), 0xffffffff);
        if (DVar4 == 0xffffffff) {
            local_b8 = &PTR_LAB_140b5e648;
            local_b0 = 0;
            local_a8 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_b8);
            local_98 = local_b8;
            local_90 = local_b0;
            local_88 = local_a8;
            DVar4 = GetLastError();
            local_78 = &PTR_LAB_140b5e648;
            uStack112 = L"Result";
            local_68 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_78);
            local_78 = &PTR_LAB_140b5e640;
            local_58 = 0x40b5e640;
            uStack84 = 1;
            uStack80 = (undefined4) uStack112;
            uStack76 = uStack112._4_4_;
            local_48 = (undefined4) local_68;
            uStack68 = local_68._4_4_;
            uStack60 = uStack92;
            local_res8 = 0x141d3ed98;
            DStack96 = DVar4;
            DStack64 = DVar4;
            iVar5 = FUN_140197770(0x27, &local_res8, &local_58, &local_98);
            local_78 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_68);
            local_b8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_a8);
            if (iVar5 != 0) {
                DebugBreak();
            }
        }
        LOCK();
        puVar1 = (ulonglong * )(param_1 + 2);
        bVar6 = *puVar1 == 0;
        *puVar1 = *puVar1 ^ (ulonglong) bVar6 * (*puVar1 ^ 1);
        lVar3 = (ulonglong)
        !bVar6 * *puVar1;
        param_2 = local_res10;
    }
    *param_1 = param_2;
    LOCK();
    *(longlong * )(param_1 + 4) = *(longlong * )(param_1 + 4) + -1;
    return lVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14019fd40(undefined8 param_1, undefined8 param_2, undefined8 param_3, short *param_4,
                   int param_5) {
    short sVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint uVar5;
    undefined *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    byte *pbVar9;
    wchar_t *pwVar10;
    undefined auStack408[32];
    wchar_t *local_178;
    wchar_t *local_170;
    undefined *local_168;
    undefined *local_158;
    undefined8 local_150;
    uint local_148[5];
    undefined8 local_134;
    undefined2 local_12c;
    undefined local_12a[66];
    undefined8 local_e8;
    byte local_d8[32];
    undefined local_b8[96];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack408;
    uVar8 = 0;
    local_134 = 0;
    local_12c = 0;
    local_148[0] = 0x67452301;
    local_148[1] = 0xefcdab89;
    local_148[2] = 0x98badcfe;
    local_148[3] = 0x10325476;
    local_148[4] = 0xc3d2e1f0;
    local_e8 = 0;
    sVar1 = *param_4;
    uVar3 = uVar8;
    while (sVar1 != 0) {
        uVar3 = uVar3 + 1;
        sVar1 = param_4[uVar3];
    }
    if ((uVar3 & 0x7fffffffffffffff) == 0) {
        LAB_14019fdec:
        FUN_1401c8f20(local_148);
        puVar6 = local_12a;
        for (lVar4 = 0x40; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
        }
        local_134 = 0;
        local_e8 = CONCAT44(local_e8._4_4_, 1);
    } else {
        FUN_1401c8c20(local_148, param_4);
        if (local_e8._4_4_ != 0) goto LAB_14019fe4c;
        if ((int) local_e8 == 0) goto LAB_14019fdec;
    }
    uVar3 = uVar8;
    uVar7 = uVar8;
    pbVar9 = local_d8;
    do {
        lVar4 = (longlong) uVar3 >> 2;
        uVar5 = (int) uVar7 + 1;
        uVar3 = (ulonglong)(int)
        uVar5;
        *pbVar9 = (byte)(local_148[lVar4] >> (('\x03' - ((byte) uVar7 & 3)) * '\b' & 0x1f));
        uVar7 = (ulonglong) uVar5;
        pbVar9 = pbVar9 + 1;
    } while (uVar3 < 0x14);
    LAB_14019fe4c:
    local_158 = local_b8;
    local_150 = 0x29;
    do {
        local_168 = (undefined * )
                ((ulonglong) local_168 & 0xffffffff00000000 | (ulonglong) local_d8[uVar8]);
        local_170 = L"%0.2x";
        local_178 = (wchar_t *) 0x0;
        iVar2 = FUN_1401a3210(local_158, local_150, &local_158, &local_150);
        if (iVar2 < 0) break;
        uVar8 = uVar8 + 1;
    } while (uVar8 < 0x14);
    pwVar10 = L"Local";
    if (param_5 != 0) {
        pwVar10 = L"Global";
    }
    local_168 = local_b8;
    local_178 = L"NCSOFT";
    local_170 = (wchar_t *) param_3;
    FUN_14001b370(param_1, param_2, L"%s\\%s.%s.%s", pwVar10);
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack408);
    return;
}


int FUN_14019ff10(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5e790;
            if ((HANDLE) param_1[2] != (HANDLE) 0x0) {
                CloseHandle((HANDLE) param_1[2]);
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_14019ff60(longlong param_1, BOOL param_2, BOOL param_3, longlong param_4, undefined4 param_5) {
    HANDLE pvVar1;
    undefined auStack216[32];
    undefined4 local_b8;
    WCHAR local_a8[64];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack216;
    if (param_4 == 0) {
        pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, param_2, param_3, (LPCWSTR) 0x0);
        *(HANDLE * )(param_1 + 0x10) = pvVar1;
        if (pvVar1 != (HANDLE) 0x0) goto LAB_1401a0001;
    } else {
        local_b8 = param_5;
        FUN_14019fd40(local_a8, 0x40, L"Event");
        pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, param_2, param_3, local_a8);
        *(HANDLE * )(param_1 + 0x10) = pvVar1;
        if (pvVar1 != (HANDLE) 0x0) {
            GetLastError();
            goto LAB_1401a0001;
        }
    }
    GetLastError();
    LAB_1401a0001:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack216);
    return;
}


int FUN_1401a01a0(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5e770;
            if ((HANDLE) param_1[2] != (HANDLE) 0x0) {
                CloseHandle((HANDLE) param_1[2]);
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


int FUN_1401a0380(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5e750;
            if ((HANDLE) param_1[2] != (HANDLE) 0x0) {
                CloseHandle((HANDLE) param_1[2]);
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


int FUN_1401a0550(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;

    LOCK();
    puVar1 = param_1 + 1;
    iVar2 = *(int *) puVar1;
    *(int *) puVar1 = *(int *) puVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != (undefined8 *) 0x0) {
            *param_1 = &PTR_LAB_140b5e728;
            if ((HANDLE) param_1[3] != (HANDLE) 0x0) {
                CloseHandle((HANDLE) param_1[3]);
            }
            if ((HANDLE) param_1[5] != (HANDLE) 0x0) {
                CloseHandle((HANDLE) param_1[5]);
            }
            if ((HANDLE) param_1[6] != (HANDLE) 0x0) {
                CloseHandle((HANDLE) param_1[6]);
            }
            if ((longlong *) param_1[2] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[2] + 8))();
            }
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1401a05d0(longlong param_1, longlong param_2) {
    int iVar1;
    HANDLE pvVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    undefined auStack856[32];
    undefined4 local_338;
    WCHAR local_328[128];
    WCHAR local_228[128];
    WCHAR local_128[128];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack856;
    if (param_2 == 0) {
        pvVar2 = CreateMutexW((LPSECURITY_ATTRIBUTES) 0x0, 0, (LPCWSTR) 0x0);
        *(HANDLE * )(param_1 + 0x18) = pvVar2;
        if (pvVar2 != (HANDLE) 0x0) {
            pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 1, (LPCWSTR) 0x0);
            *(HANDLE * )(param_1 + 0x28) = pvVar2;
            if (pvVar2 != (HANDLE) 0x0) {
                pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 1, (LPCWSTR) 0x0);
                *(HANDLE * )(param_1 + 0x30) = pvVar2;
                if (pvVar2 != (HANDLE) 0x0) {
                    iVar1 = FUN_1401c5690(4, param_1 + 0x10);
                    if (-1 < iVar1) {
                        puVar4 = (undefined4 * )(**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x20))();
                        *(undefined4 * *)(param_1 + 0x20) = puVar4;
                        *puVar4 = 0;
                    }
                    goto LAB_1401a0795;
                }
            }
        }
    } else {
        local_338 = 0;
        FUN_14019fd40(local_228, 0x80, L"RWLock.Mutex", param_2);
        local_338 = 0;
        FUN_14019fd40(local_328, 0x80, L"RWLock.ReadEvent", param_2);
        local_338 = 0;
        FUN_14019fd40(local_128, 0x80, L"RWLock.WriteEvent", param_2);
        pvVar2 = CreateMutexW((LPSECURITY_ATTRIBUTES) 0x0, 0, local_228);
        *(HANDLE * )(param_1 + 0x18) = pvVar2;
        if (pvVar2 != (HANDLE) 0x0) {
            GetLastError();
            pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 1, local_328);
            *(HANDLE * )(param_1 + 0x28) = pvVar2;
            if (pvVar2 != (HANDLE) 0x0) {
                pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 1, 1, local_128);
                *(HANDLE * )(param_1 + 0x30) = pvVar2;
                if (pvVar2 != (HANDLE) 0x0) {
                    iVar1 = FUN_1401c5bb0(param_2);
                    if (-1 < iVar1) {
                        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x20))();
                        *(undefined8 * )(param_1 + 0x20) = uVar3;
                    }
                    goto LAB_1401a0795;
                }
            }
        }
    }
    GetLastError();
    LAB_1401a0795:
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack856);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401a07c0(longlong param_1, DWORD param_2) {
    DWORD DVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_80;
    undefined8 uStack120;
    undefined8 local_70;
    DWORD DStack104;
    undefined4 uStack100;
    HANDLE local_60;
    undefined8 local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    DWORD DStack16;
    undefined4 uStack12;

    local_60 = *(HANDLE * )(param_1 + 0x18);
    local_58 = *(undefined8 * )(param_1 + 0x28);
    DVar1 = WaitForMultipleObjects(2, &local_60, 1, param_2);
    if (DVar1 != 0x102) {
        if (DVar1 != 0xffffffff) {
            iVar2 = **(int **) (param_1 + 0x20);
            **(int **) (param_1 + 0x20) = iVar2 + 1;
            if (iVar2 == 0) {
                ResetEvent(*(HANDLE * )(param_1 + 0x30));
            }
            ReleaseMutex(*(HANDLE * )(param_1 + 0x18));
            return 1;
        }
        local_98 = &PTR_LAB_140b5e648;
        local_90 = 0;
        local_88 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_98);
        local_48 = local_98;
        local_40 = local_90;
        local_38 = local_88;
        DStack104 = GetLastError();
        local_80 = &PTR_LAB_140b5e648;
        uStack120 = L"Result";
        local_70 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_80);
        local_80 = &PTR_LAB_140b5e640;
        local_18 = (undefined4) local_70;
        uStack20 = local_70._4_4_;
        uStack12 = uStack100;
        local_res8 = 0x141d3eef0;
        local_28 = 0x40b5e640;
        uStack36 = 1;
        uStack32 = (undefined4) uStack120;
        uStack28 = uStack120._4_4_;
        DStack16 = DStack104;
        iVar2 = FUN_1401971e0(&DAT_140c8a208, 0x27, &local_res8, &local_28, &local_48);
        local_80 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_70);
        local_98 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_88);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1401a0980(longlong param_1, DWORD param_2) {
    DWORD DVar1;
    int iVar2;
    undefined8 local_res8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_80;
    undefined8 uStack120;
    undefined8 local_70;
    DWORD DStack104;
    undefined4 uStack100;
    HANDLE local_60;
    undefined8 local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    DWORD DStack16;
    undefined4 uStack12;

    local_60 = *(HANDLE * )(param_1 + 0x18);
    local_58 = *(undefined8 * )(param_1 + 0x30);
    DVar1 = WaitForMultipleObjects(2, &local_60, 1, param_2);
    if (DVar1 != 0x102) {
        if (DVar1 != 0xffffffff) {
            ResetEvent(*(HANDLE * )(param_1 + 0x28));
            ResetEvent(*(HANDLE * )(param_1 + 0x30));
            ReleaseMutex(*(HANDLE * )(param_1 + 0x18));
            return 1;
        }
        local_98 = &PTR_LAB_140b5e648;
        local_90 = 0;
        local_88 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_98);
        local_48 = local_98;
        local_40 = local_90;
        local_38 = local_88;
        DStack104 = GetLastError();
        local_80 = &PTR_LAB_140b5e648;
        uStack120 = L"Result";
        local_70 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_80);
        local_80 = &PTR_LAB_140b5e640;
        local_18 = (undefined4) local_70;
        uStack20 = local_70._4_4_;
        uStack12 = uStack100;
        local_res8 = 0x141d3eeb0;
        local_28 = 0x40b5e640;
        uStack36 = 1;
        uStack32 = (undefined4) uStack120;
        uStack28 = uStack120._4_4_;
        DStack16 = DStack104;
        iVar2 = FUN_1401971e0(&DAT_140c8a20c, 0x27, &local_res8, &local_28, &local_48);
        local_80 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_70);
        local_98 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_88);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    return 0;
}