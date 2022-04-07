//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402a9a70(longlong param_1, uint param_2) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong *plVar5;
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
    int iStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    int iStack16;
    undefined4 uStack12;

    lVar1 = (ulonglong) param_2 * 8;
    plVar5 = (longlong * )(*(longlong * )(param_1 + 0x48) + lVar1);
    if ((*plVar5 == 0) &&
        (puVar4 = (undefined4 * )
                ((ulonglong) param_2 * 0x10 + *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10)),
         plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0),
         iStack48 = (**(code * *)(*plVar2 + 0x60))(plVar2, *(undefined8 * )(puVar4 + 2), *puVar4, 0, plVar5),
                iStack48 < 0)) {
        local_80 = 0;
        local_88 = &PTR_LAB_140b5e648;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_68 = local_88;
        local_60 = local_80;
        local_48 = &PTR_LAB_140b5e648;
        uStack64 = L"Result";
        local_58 = local_78;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_48 = &PTR_LAB_140b5e640;
        local_18 = (undefined4) local_38;
        uStack20 = local_38._4_4_;
        uStack12 = uStack44;
        local_res8 = 0x141de6a50;
        local_28 = 0x40b5e640;
        uStack36 = 1;
        uStack32 = (undefined4) uStack64;
        uStack28 = uStack64._4_4_;
        iStack16 = iStack48;
        iVar3 = FUN_1401971e0(&DAT_140c8a520, 0xe, &local_res8, &local_28, &local_68);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar3 != 0) {
            DebugBreak();
        }
        return 0;
    }
    return *(undefined8 * )(lVar1 + *(longlong * )(param_1 + 0x48));
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402a9c10(longlong param_1, uint param_2, uint param_3) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    ulonglong uVar4;
    undefined *puVar5;
    uint *puVar6;
    longlong *plVar7;
    undefined8 local_res8;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 uStack80;
    undefined8 local_48;
    int iStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    lVar1 = (ulonglong)(param_2 * 0x17 + param_3) * 8;
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x50) + lVar1);
    if (*plVar7 == 0) {
        plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        puVar6 = (uint * )(*(longlong * )(*(longlong * )(param_1 + 0x30) + 0x30) +
                           (ulonglong) param_2 * 0x10);
        uVar4 = (ulonglong) * puVar6;
        iStack64 = (**(code * *)(*plVar2 + 0x58))
                (plVar2, *(undefined8 * )
                        (*(longlong * )(param_1 + 0x10) + 0x19b8 +
                         (longlong)(int)
        param_3 * 8),(&DAT_140ae5d90)[(int) param_3],
                *(undefined8 * )(puVar6 + 2), uVar4, plVar7);
        if (iStack64 < 0) {
            puVar5 = &DAT_1409e4134;
            if (*(undefined * *)(param_1 + 0x20) != (undefined *) 0x0) {
                puVar5 = *(undefined * *)(param_1 + 0x20);
            }
            local_res8 = 0x141de6b90;
            FUN_1401a3130(0xe, 2, &local_res8, param_2, uVar4 & 0xffffffff00000000 | (ulonglong) param_3,
                          (ulonglong) plVar7 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 0x28),
                          puVar5, *(undefined4 * )(param_1 + 0x18), *(undefined4 * )(param_1 + 0x1c));
            local_98 = &PTR_LAB_140b5e648;
            local_90 = 0;
            local_88 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_98);
            local_78 = local_98;
            local_70 = local_90;
            local_58 = &PTR_LAB_140b5e648;
            uStack80 = L"Result";
            local_68 = local_88;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720, &local_58);
            local_58 = &PTR_LAB_140b5e640;
            local_28 = (undefined4) local_48;
            uStack36 = local_48._4_4_;
            uStack28 = uStack60;
            local_res8 = 0x141de6b20;
            local_38 = 0x40b5e640;
            uStack52 = 1;
            uStack48 = (undefined4) uStack80;
            uStack44 = uStack80._4_4_;
            iStack32 = iStack64;
            iVar3 = FUN_1401971e0(&DAT_140c8a518, 0xe, &local_res8, &local_38, &local_78);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            local_98 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_88);
            if (iVar3 != 0) {
                DebugBreak();
            }
            return 0;
        }
    }
    return *(undefined8 * )(lVar1 + *(longlong * )(param_1 + 0x50));
}


int FUN_1402a9e30(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402a9e9a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402a9e9a:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        FUN_1401984d0(param_1 + 0x68);
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


int FUN_1402a9f20(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar5 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar2 == 0) * (*puVar6 ^ 1);
            if (uVar2 == 0) {
                *pDVar5 = DVar3;
                goto LAB_1402a9f9e;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5, DVar3);
    }
    LAB_1402a9f9e:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar7 = *(int *) (param_1 + 8);
    if (iVar7 == -1) {
        FUN_1402a9100(param_1);
        FUN_14018b900(param_1, 0);
        iVar7 = 0;
    } else if (iVar7 == 0) {
        if (*(longlong * )(param_1 + 0x20) == 0) {
            FUN_1402a9100(param_1);
            FUN_14018b900(param_1, 0);
        } else {
            FUN_140198370(param_1 + 0x68, param_1, *(longlong * )(param_1 + 0x10) + 0x1870);
        }
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar1 + 0x30);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar6 = *puVar6 - 1;
    }
    return iVar7;
}


void FUN_1402aa070(undefined8 *param_1) {
    int iVar1;

    *param_1 = &PTR_FUN_140b61ed8;
    if ((longlong *) param_1[0xb] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    if (param_1[0x12] != 0) {
        if (param_1[4] != 0) {
            FUN_1400b6120(param_1[2] + 0x1bb8, param_1 + 4);
        }
        if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x12] = param_1[0x13];
        }
        if (param_1[0x13] != 0) {
            *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
        }
        param_1[0x12] = 0;
        param_1[0x13] = 0;
    }
    if (0 < *(int *) (param_1 + 5)) {
        iVar1 = FUN_140296900(param_1);
        if (iVar1 < 0) goto LAB_1402aa112;
    }
    *(undefined4 * )(param_1 + 5) = 0;
    LAB_1402aa112:
    FUN_14018b900(param_1[4], 0);
    if ((undefined8 *) param_1[0x12] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x12] = param_1[0x13];
    }
    if (param_1[0x13] != 0) {
        *(undefined8 * )(param_1[0x13] + 0x90) = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if ((undefined8 *) param_1[0x10] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x10] = param_1[0x11];
    }
    if (param_1[0x11] != 0) {
        *(undefined8 * )(param_1[0x11] + 0x20) = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 * )(param_1[0xf] + 0x10) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
    }
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 8))();
    }
    return;
}


undefined8 FUN_1402aa1f0(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    longlong *plVar8;
    undefined8 local_48;
    undefined4 local_40;
    ulonglong local_38;
    code *local_30;
    undefined8 local_28;
    undefined8 local_20;

    puVar7 = (ulonglong *) 0x0;
    uVar2 = *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0xb4);
    *(undefined4 * )(param_1 + 0x1c) = 0;
    *(undefined4 * )(param_1 + 0x18) = uVar2;
    uVar4 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x20) = uVar4;
    if ((0 < *(int *) (param_1 + 0x28)) || (uVar4 = FUN_1402aa340(param_1), -1 < (int) uVar4)) {
        lVar3 = *(longlong * )(param_1 + 0x10);
        plVar8 = (longlong * )(lVar3 + 0x1bb8);
        *(undefined4 * )(param_1 + 0x28) = 2;
        if (*plVar8 == *(longlong * )(lVar3 + 0x1bc0)) {
            FUN_1400290d0(plVar8);
        }
        uVar5 = (**(code * *)(lVar3 + 0x1bd0))(param_1 + 0x20);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar3 + 0x1bc8) + (uVar5 % *(ulonglong * )(lVar3 + 0x1bc0)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar7 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar7;
            uVar5 = *(ulonglong * )(param_1 + 0x20);
            puVar6[3] = param_1;
            puVar6[2] = uVar5;
            puVar7 = puVar6;
        }
        *ppuVar1 = puVar7;
        *plVar8 = *plVar8 + 1;
        puVar7 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1ae8);
        if (*(longlong * )(param_1 + 0x90) == 0) {
            *(ulonglong * *)(param_1 + 0x90) = puVar7;
            puVar6 = (ulonglong * )(param_1 + 0x98);
            *puVar6 = *puVar7;
            *puVar7 = param_1;
            if (*puVar6 != 0) {
                *(ulonglong * *)(*puVar6 + 0x90) = puVar6;
            }
        }
        local_48 = *(undefined8 * )(param_1 + 0x20);
        local_40 = 0;
        local_28 = 0;
        local_20 = 0;
        local_30 = FUN_1402aa730;
        local_38 = param_1;
        FUN_1401b6bf0(puVar7, &local_48, param_1 + 0x58);
        uVar4 = 0;
    }
    return uVar4;
}


undefined4 FUN_1402aa340(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong *local_res8;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    code *local_28;
    undefined8 local_20;
    undefined4 local_18;

    uVar2 = 0;
    local_res8 = (longlong *) 0x0;
    iVar1 = FUN_1401b6de0(param_1, *(undefined8 * )(param_1 + 0x20), param_1 + 0x38, &local_res8, 0);
    if (-1 < iVar1) {
        local_28 = FUN_1402aa3e0;
        local_38 = 0xc;
        local_34 = 2;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar1 = FUN_14019dca0(&local_38, 0, local_res8, param_1 + 0x40);
        if (-1 < iVar1) goto LAB_1402aa3c2;
    }
    uVar2 = FUN_1402aa530(param_1, iVar1);
    LAB_1402aa3c2:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar2;
}


undefined8 FUN_1402aa3e0(longlong param_1) {
    longlong lVar1;
    undefined auVar2[16];
    int iVar3;
    uint uVar4;
    LPVOID pvVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong local_28;
    longlong local_20;
    undefined8 local_18;

    if (DAT_140c63758 != 0) {
        pvVar5 = TlsGetValue(*(DWORD * )(DAT_140c63758 + 4));
        if ((pvVar5 != (LPVOID) 0x0) && (*(longlong * )((longlong) pvVar5 + 8) != 0)) {
            plVar8 = *(longlong * *)(*(longlong * )((longlong) pvVar5 + 8) + 0x60);
            goto LAB_1402aa414;
        }
    }
    plVar8 = (longlong *) 0x0;
    LAB_1402aa414:
    iVar3 = (**(code * *)(*plVar8 + 0x28))(plVar8, 0);
    if (iVar3 < 0) {
        uVar6 = FUN_1402aa530(param_1, iVar3);
        return uVar6;
    }
    lVar7 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x20))();
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x38) + 0x10))();
    local_18 = 0;
    local_20 = (ulonglong) uVar4 + lVar7;
    local_28 = lVar7;
    iVar3 = FUN_1402956f0(&local_28, lVar7 + 0x50, lVar7);
    if (iVar3 < 0) {
        uVar6 = FUN_1402aa530(param_1, iVar3);
        return uVar6;
    }
    *(undefined4 * )(param_1 + 0x1c) = *(undefined4 * )(lVar7 + 0x18);
    auVar2 = ZEXT816(8) * ZEXT416(*(uint * )(lVar7 + 8));
    uVar6 = SUB168(auVar2, 0);
    if (SUB168(auVar2 >> 0x40, 0) != 0) {
        uVar6 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar6, 0);
    *(undefined8 * )(param_1 + 0x48) = uVar6;
    FUN_1407e4830(uVar6, 0, (ulonglong) * (uint * )(lVar7 + 8) << 3);
    lVar1 = *(longlong * )(param_1 + 0x10);
    *(longlong * )(param_1 + 0x30) = lVar7;
    *(uint * )(param_1 + 0x2c) = uVar4;
    LOCK();
    *(int *) (lVar1 + 0x124) = *(int *) (lVar1 + 0x124) + 1;
    LOCK();
    *(int *) (lVar1 + 0x128) = *(int *) (lVar1 + 0x128) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 300) = *(int *) (lVar1 + 300) + 1;
    LOCK();
    *(int *) (lVar1 + 0x130) = *(int *) (lVar1 + 0x130) + *(int *) (param_1 + 0x2c);
    LOCK();
    *(int *) (lVar1 + 0x144) = *(int *) (lVar1 + 0x144) + 1;
    LOCK();
    *(int *) (lVar1 + 0x148) = *(int *) (lVar1 + 0x148) + *(int *) (param_1 + 0x2c);
    *(undefined4 * )(param_1 + 0x50) = 0;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

int FUN_1402aa530(longlong param_1, int param_2) {
    int iVar1;
    undefined8 local_res8;
    undefined **local_d8;
    wchar_t *local_d0;
    LPVOID local_c8;
    undefined8 local_c0;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_a0;
    undefined8 uStack152;
    undefined8 local_90;
    int iStack136;
    undefined4 uStack132;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    int iStack32;
    undefined4 uStack28;

    if (param_2 < 0) {
        local_b0 = 0;
        local_b8 = &PTR_LAB_140b5e648;
        local_a8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_b8);
        local_78 = local_b8;
        local_70 = local_b0;
        local_a0 = &PTR_LAB_140b5e648;
        uStack152 = L"Result";
        local_68 = local_a8;
        local_90 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_a0);
        local_c0 = *(undefined8 * )(param_1 + 0x20);
        local_d8 = &PTR_LAB_140b5e648;
        local_a0 = &PTR_LAB_140b5e640;
        local_28 = (undefined4) local_90;
        uStack36 = local_90._4_4_;
        uStack28 = uStack132;
        local_d0 = L"FileName";
        local_38 = 0x40b5e640;
        uStack52 = 1;
        uStack48 = (undefined4) uStack152;
        uStack44 = uStack152._4_4_;
        iStack136 = param_2;
        iStack32 = param_2;
        local_c8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_d8);
        local_50 = local_d0;
        local_d8 = &PTR_LAB_140b5e638;
        local_res8 = 0x141de6cb0;
        local_58 = &PTR_LAB_140b5e638;
        local_48 = local_c8;
        local_40 = local_c0;
        iVar1 = FUN_1401971e0(&DAT_140c8a528, 0xe, &local_res8, *(undefined8 * )(param_1 + 0x20), &local_58,
                              &local_38, &local_78);
        local_d8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_c8);
        local_a0 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_90);
        local_b8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_a8);
        if (iVar1 != 0) {
            DebugBreak();
        }
        if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
            *(undefined8 * )(param_1 + 0x38) = 0;
        }
        *(int *) (param_1 + 0x50) = param_2;
        return param_2;
    }
    *(int *) (param_1 + 0x50) = param_2;
    return param_2;
}


void FUN_1402aa730(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    int iVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar2 = *(longlong * )(param_1 + 0x10);
    DVar4 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402aa790;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402aa790:
    if ((*(int *) (param_1 + 0x28) < 1) || (iVar5 = FUN_140296900(param_1), -1 < iVar5)) {
        *(undefined4 * )(param_1 + 0x28) = 0;
        iVar5 = FUN_1402aa340(param_1);
        if (-1 < iVar5) {
            *(undefined4 * )(param_1 + 0x28) = 2;
        }
    }
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402aa830(longlong param_1, uint param_2) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 *puVar4;
    longlong *plVar5;
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
    int iStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;
    int iStack16;
    undefined4 uStack12;

    lVar1 = (ulonglong) param_2 * 8;
    plVar5 = (longlong * )(*(longlong * )(param_1 + 0x48) + lVar1);
    if ((*plVar5 == 0) &&
        (puVar4 = (undefined4 * )
                ((ulonglong) param_2 * 0x10 + *(longlong * )(*(longlong * )(param_1 + 0x30) + 0x10)),
         plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0),
         iStack48 = (**(code * *)(*plVar2 + 0x78))(plVar2, *(undefined8 * )(puVar4 + 2), *puVar4, 0, plVar5),
                iStack48 < 0)) {
        local_80 = 0;
        local_88 = &PTR_LAB_140b5e648;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_88);
        local_68 = local_88;
        local_60 = local_80;
        local_48 = &PTR_LAB_140b5e648;
        uStack64 = L"Result";
        local_58 = local_78;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_48);
        local_48 = &PTR_LAB_140b5e640;
        local_18 = (undefined4) local_38;
        uStack20 = local_38._4_4_;
        uStack12 = uStack44;
        local_res8 = 0x141de6c30;
        local_28 = 0x40b5e640;
        uStack36 = 1;
        uStack32 = (undefined4) uStack64;
        uStack28 = uStack64._4_4_;
        iStack16 = iStack48;
        iVar3 = FUN_1401971e0(&DAT_140c8a524, 0xe, &local_res8, &local_28, &local_68);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_38);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_78);
        if (iVar3 != 0) {
            DebugBreak();
        }
        return 0;
    }
    return *(undefined8 * )(lVar1 + *(longlong * )(param_1 + 0x48));
}


int FUN_1402aa9d0(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar5 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar2 == 0) * (*puVar6 ^ 1);
            if (uVar2 == 0) {
                *pDVar5 = DVar3;
                goto LAB_1402aaa4e;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5, DVar3);
    }
    LAB_1402aaa4e:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar7 = *(int *) (param_1 + 8);
    if (iVar7 == -1) {
        FUN_1402aa070(param_1);
        FUN_14018b900(param_1, 0);
        iVar7 = 0;
    } else if (iVar7 == 0) {
        if (*(longlong * )(param_1 + 0x20) == 0) {
            FUN_1402aa070(param_1);
            FUN_14018b900(param_1, 0);
        } else {
            FUN_140198370(param_1 + 0x60, param_1, *(longlong * )(param_1 + 0x10) + 0x1870);
        }
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar1 + 0x30);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar6 = *puVar6 - 1;
    }
    return iVar7;
}


void FUN_1402aab20(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_FUN_140b61f10;
    if (param_1[0x11] != 0) {
        lVar1 = param_1[2];
        LOCK();
        *(int *) (lVar1 + 0x3f4) = *(int *) (lVar1 + 0x3f4) + -1;
        LOCK();
        *(int *) (lVar1 + 0x3f8) = *(int *) (lVar1 + 0x3f8) + -0x1000;
        LOCK();
        *(int *) (lVar1 + 0x404) = *(int *) (lVar1 + 0x404) + 1;
        LOCK();
        *(int *) (lVar1 + 0x408) = *(int *) (lVar1 + 0x408) + 0x1000;
        if (param_1[3] != 0) {
            FUN_1400b6120(param_1[2] + 0x1be0, param_1 + 3);
        }
        if ((undefined8 *) param_1[0x11] != (undefined8 *) 0x0) {
            *(undefined8 *) param_1[0x11] = param_1[0x12];
        }
        if (param_1[0x12] != 0) {
            *(undefined8 * )(param_1[0x12] + 0x88) = param_1[0x11];
        }
        param_1[0x11] = 0;
        param_1[0x12] = 0;
    }
    if (0 < *(int *) (param_1 + 4)) {
        if ((longlong *) param_1[5] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[5] + 8))();
            param_1[5] = 0;
        }
        *(undefined4 * )(param_1 + 0x10) = 0x8000000a;
    }
    *(undefined4 * )(param_1 + 4) = 0;
    FUN_14018b900(param_1[3], 0);
    DeleteObject((HGDIOBJ) param_1[6]);
    DeleteObject((HGDIOBJ) param_1[7]);
    if ((undefined8 *) param_1[0x11] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x11] = param_1[0x12];
    }
    if (param_1[0x12] != 0) {
        *(undefined8 * )(param_1[0x12] + 0x88) = param_1[0x11];
    }
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 * )(param_1[0xf] + 0x20) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *) param_1[0xc] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 * )(param_1[0xd] + 0x10) = param_1[0xc];
    }
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    return;
}


undefined8 FUN_1402aaca0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;

    uVar3 = FUN_1402aaf00();
    if (-1 < (int) uVar3) {
        if (*(int *) (param_1 + 0x20) < 1) {
            if (*(longlong * )(param_1 + 0x18) == 0) {
                *(undefined4 * )(param_1 + 0x80) = 0;
            } else {
                uVar3 = FUN_140279ed0(*(undefined8 * )(param_1 + 0x10), 0, *(longlong * )(param_1 + 0x18), 0, 0,
                                      0x200, 1, param_1 + 0x28);
                if ((int) uVar3 < 0) {
                    *(int *) (param_1 + 0x80) = (int) uVar3;
                    return uVar3;
                }
            }
        }
        lVar2 = *(longlong * )(param_1 + 0x10);
        *(undefined4 * )(param_1 + 0x20) = 2;
        LOCK();
        *(int *) (lVar2 + 0x3f4) = *(int *) (lVar2 + 0x3f4) + 1;
        LOCK();
        *(int *) (lVar2 + 0x3f8) = *(int *) (lVar2 + 0x3f8) + 0x1000;
        LOCK();
        *(int *) (lVar2 + 0x3fc) = *(int *) (lVar2 + 0x3fc) + 1;
        LOCK();
        *(int *) (lVar2 + 0x400) = *(int *) (lVar2 + 0x400) + 0x1000;
        plVar4 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1af0);
        if (*(longlong * )(param_1 + 0x88) == 0) {
            *(longlong * *)(param_1 + 0x88) = plVar4;
            plVar1 = (longlong * )(param_1 + 0x90);
            *plVar1 = *plVar4;
            *plVar4 = param_1;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x88) = plVar1;
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


undefined8 FUN_1402aad80(ulonglong param_1, undefined8 param_2) {
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    longlong *plVar7;

    uVar3 = FUN_1402aaf00();
    if (-1 < (int) uVar3) {
        lVar4 = FUN_14018e9c0(param_2);
        *(longlong * )(param_1 + 0x18) = lVar4;
        if (*(int *) (param_1 + 0x20) < 1) {
            if (lVar4 == 0) {
                *(undefined4 * )(param_1 + 0x80) = 0;
            } else {
                uVar3 = FUN_140279ed0(*(undefined8 * )(param_1 + 0x10), 0, lVar4, 0, 0, 0x200, 1, param_1 + 0x28);
                if ((int) uVar3 < 0) {
                    *(int *) (param_1 + 0x80) = (int) uVar3;
                    return uVar3;
                }
            }
        }
        lVar4 = *(longlong * )(param_1 + 0x10);
        *(undefined4 * )(param_1 + 0x20) = 2;
        LOCK();
        *(int *) (lVar4 + 0x3f4) = *(int *) (lVar4 + 0x3f4) + 1;
        LOCK();
        *(int *) (lVar4 + 0x3f8) = *(int *) (lVar4 + 0x3f8) + 0x1000;
        LOCK();
        *(int *) (lVar4 + 0x3fc) = *(int *) (lVar4 + 0x3fc) + 1;
        LOCK();
        *(int *) (lVar4 + 0x400) = *(int *) (lVar4 + 0x400) + 0x1000;
        lVar4 = *(longlong * )(param_1 + 0x10);
        plVar7 = (longlong * )(lVar4 + 0x1be0);
        if (*plVar7 == *(longlong * )(lVar4 + 0x1be8)) {
            FUN_1400290d0(plVar7);
        }
        uVar5 = (**(code * *)(lVar4 + 0x1bf8))(param_1 + 0x18);
        ppuVar1 = (ulonglong * *)
                (*(longlong * )(lVar4 + 0x1bf0) + (uVar5 % *(ulonglong * )(lVar4 + 0x1be8)) * 8);
        puVar6 = (ulonglong *) FUN_14018b280(0x20);
        if (puVar6 != (ulonglong *) 0x0) {
            puVar2 = *ppuVar1;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong) puVar2;
            uVar5 = *(ulonglong * )(param_1 + 0x18);
            puVar6[3] = param_1;
            puVar6[2] = uVar5;
        }
        *ppuVar1 = puVar6;
        *plVar7 = *plVar7 + 1;
        puVar6 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x1af0);
        if (*(longlong * )(param_1 + 0x88) == 0) {
            *(ulonglong * *)(param_1 + 0x88) = puVar6;
            puVar2 = (ulonglong * )(param_1 + 0x90);
            *puVar2 = *puVar6;
            *puVar6 = param_1;
            if (*puVar2 != 0) {
                *(ulonglong * *)(*puVar2 + 0x88) = puVar2;
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


void FUN_1402aaf00(longlong param_1) {
    HBITMAP pHVar1;
    HDC hdc;
    undefined auStackY200[32];
    undefined local_98[16];
    DWORD local_88;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStackY200;
    pHVar1 = CreateBitmap(0x20, 0x20, 1, 1, (void *) 0x0);
    *(HBITMAP * )(param_1 + 0x30) = pHVar1;
    FUN_1407e4830(local_98, 0, 0x7c);
    local_98._0_4_ = 0x7c;
    local_98._4_4_ = 0x20;
    local_98._8_4_ = -0x20;
    local_98._12_4_ = 0x200001;
    local_88 = 3;
    local_70 = 0xff0000;
    local_6c = 0xff00;
    local_68 = 0xff;
    local_64 = 0xff000000;
    hdc = GetDC((HWND) 0x0);
    pHVar1 = CreateDIBSection(hdc, (BITMAPINFO *) local_98, 0, (void **) (param_1 + 0x40), (HANDLE) 0x0, 0);
    *(HBITMAP * )(param_1 + 0x38) = pHVar1;
    ReleaseDC((HWND) 0x0, hdc);
    FUN_1407db4f0(local_18 ^ (ulonglong) auStackY200);
    return;
}


undefined8 FUN_1402ab010(longlong param_1, int param_2) {
    undefined8 uVar1;

    if (*(int *) (param_1 + 0x20) < 1) {
        if (0 < param_2) {
            if (*(longlong * )(param_1 + 0x18) == 0) {
                *(undefined4 * )(param_1 + 0x80) = 0;
                *(int *) (param_1 + 0x20) = param_2;
                return 0;
            }
            uVar1 = FUN_140279ed0(*(undefined8 * )(param_1 + 0x10), 0, *(longlong * )(param_1 + 0x18), 0, 0,
                                  0x200, 1, param_1 + 0x28);
            if ((int) uVar1 < 0) {
                *(int *) (param_1 + 0x80) = (int) uVar1;
                return uVar1;
            }
            goto LAB_1402ab0bb;
        }
        if (*(int *) (param_1 + 0x20) < 1) goto LAB_1402ab0bb;
    }
    if (param_2 < 1) {
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
        *(undefined4 * )(param_1 + 0x80) = 0x8000000a;
    }
    LAB_1402ab0bb:
    *(int *) (param_1 + 0x20) = param_2;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402ab0d0(longlong param_1) {
    ulonglong *puVar1;
    int *piVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;
    int iVar7;
    DWORD DVar8;
    int iVar9;
    HANDLE pvVar10;
    ulonglong uVar11;
    DWORD *pDVar12;
    longlong lVar13;
    undefined8 local_res8;
    undefined8 in_stack_fffffffffffffe78;
    uint uVar14;
    undefined **local_168;
    undefined8 local_160;
    LPVOID local_158;
    undefined **local_150;
    wchar_t *local_148;
    LPVOID local_140;
    undefined8 local_138;
    undefined4 local_130;
    undefined4 local_12c;
    undefined4 local_128;
    int local_120;
    int local_11c;
    int local_118;
    undefined4 local_110;
    undefined4 local_10c;
    undefined8 local_108;
    undefined **local_100;
    undefined8 uStack248;
    undefined8 local_f0;
    int iStack232;
    undefined4 uStack228;
    undefined4 local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    int local_d4;
    undefined8 local_d0;
    int local_c8;
    undefined **local_b8;
    undefined8 local_b0;
    LPVOID local_a8;
    undefined **local_98;
    wchar_t *local_90;
    LPVOID local_88;
    undefined8 local_80;
    undefined4 local_78;
    undefined4 local_68[4];
    undefined4 local_58;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar14 = (uint)((ulonglong) in_stack_fffffffffffffe78 >> 0x20);
    plVar3 = *(longlong * *)(param_1 + 0x28);
    local_68[0] = 0xffffffff;
    (**(code * *)(*plVar3 + 0x20))(plVar3, local_68);
    iVar9 = *(int *) (plVar3 + 6);
    uVar11 = 0;
    if (-1 < iVar9) {
        plVar3 = *(longlong * *)(param_1 + 0x28);
        local_78 = 0xffffffff;
        (**(code * *)(*plVar3 + 0x20))(plVar3);
        plVar3 = (longlong *) plVar3[8];
        if (plVar3 == (longlong *) 0x0) {
            iVar9 = -0x7fffbffb;
        } else {
            (**(code * *)(*plVar3 + 8))(plVar3);
            lVar4 = *(longlong * )(param_1 + 0x10);
            pDVar12 = (DWORD * )(lVar4 + 0x18e0);
            DVar8 = GetCurrentThreadId();
            if (*pDVar12 == DVar8) {
                *(longlong * )(lVar4 + 0x18e8) = *(longlong * )(lVar4 + 0x18e8) + 1;
            } else {
                do {
                    LOCK();
                    puVar1 = (ulonglong * )(lVar4 + 0x18e8);
                    uVar5 = *puVar1;
                    *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ 1);
                    if (uVar5 == 0) {
                        *pDVar12 = DVar8;
                        goto LAB_1402ab364;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < 0x400);
                FUN_14019fb60(pDVar12);
            }
            LAB_1402ab364:
            plVar6 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
            iVar9 = (**(code * *)(*plVar6 + 0x70))(plVar6, plVar3, 0, 1, (ulonglong) uVar14 << 0x20, &local_d0);
            if (-1 < iVar9) {
                plVar6 = *(longlong * *)(param_1 + 0x28);
                local_110 = 0x20;
                local_10c = 0x20;
                local_108 = 1;
                local_130 = 0x80;
                local_12c = 0x1000;
                local_128 = 0x1000;
                local_58 = 0xffffffff;
                (**(code * *)(*plVar6 + 0x20))(plVar6);
                local_d4 = *(int *) (plVar6 + 0xb);
                lVar13 = (longlong) local_d4 * 0x2c;
                local_120 = local_c8;
                local_e0 = 0x20;
                local_dc = 0x20;
                local_d8 = 1;
                local_11c = (*(int *) (&DAT_140ae5210 + lVar13) + 0x20U >>
                                                                        ((byte) *
                                                                         (undefined4 * )(&DAT_140ae5214 + lVar13) &
                                                                         0x1f)) * local_c8;
                local_118 = (*(int *) (&DAT_140ae521c + lVar13) + 1U >>
                                                                     ((byte) *
                                                                      (undefined4 * )(&DAT_140ae5220 + lVar13) &
                                                                      0x1f)) * local_11c;
                FUN_1402645d0(*(undefined8 * )(param_1 + 0x40), &local_110, &local_130, local_d0, &local_e0,
                              &local_120);
                plVar6 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
                (**(code * *)(*plVar6 + 0x78))(plVar6, plVar3, 0);
                if (*(ulonglong * )(lVar4 + 0x18e8) < 2) {
                    *pDVar12 = 0;
                    *(undefined8 * )(lVar4 + 0x18e8) = 0;
                    if (*(longlong * )(lVar4 + 0x18f0) != 0) {
                        if (*(longlong * )(lVar4 + 0x18f8) == 0) {
                            pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                            LOCK();
                            puVar1 = (ulonglong * )(lVar4 + 0x18f8);
                            uVar11 = *puVar1;
                            *puVar1 = *puVar1 ^ (ulonglong)(uVar11 == 0) * (*puVar1 ^ (ulonglong) pvVar10);
                            if (uVar11 != 0) {
                                CloseHandle(pvVar10);
                            }
                        }
                        SetEvent(*(HANDLE * )(lVar4 + 0x18f8));
                    }
                } else {
                    *(longlong * )(lVar4 + 0x18e8) = *(longlong * )(lVar4 + 0x18e8) + -1;
                }
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x10))(plVar3);
                }
                lVar4 = *(longlong * )(param_1 + 0x10);
                LOCK();
                piVar2 = (int *) (lVar4 + 0x414);
                *piVar2 = *piVar2 + 1;
                LOCK();
                piVar2 = (int *) (lVar4 + 0x418);
                *piVar2 = *piVar2 + 0x1000;
                *(undefined4 * )(param_1 + 0x48) = 1;
                *(undefined4 * )(param_1 + 0x80) = 0;
                return;
            }
            if (*(ulonglong * )(lVar4 + 0x18e8) < 2) {
                *pDVar12 = 0;
                *(undefined8 * )(lVar4 + 0x18e8) = 0;
                if (*(longlong * )(lVar4 + 0x18f0) != 0) {
                    if (*(longlong * )(lVar4 + 0x18f8) == 0) {
                        pvVar10 = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                        LOCK();
                        puVar1 = (ulonglong * )(lVar4 + 0x18f8);
                        uVar11 = *puVar1;
                        *puVar1 = *puVar1 ^ (ulonglong)(uVar11 == 0) * (*puVar1 ^ (ulonglong) pvVar10);
                        if (uVar11 != 0) {
                            CloseHandle(pvVar10);
                        }
                    }
                    SetEvent(*(HANDLE * )(lVar4 + 0x18f8));
                }
            } else {
                *(longlong * )(lVar4 + 0x18e8) = *(longlong * )(lVar4 + 0x18e8) + -1;
            }
            if (plVar3 != (longlong *) 0x0) {
                (**(code * *)(*plVar3 + 0x10))(plVar3);
            }
        }
    }
    local_160 = 0;
    local_168 = &PTR_LAB_140b5e648;
    local_158 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_168);
    local_b8 = local_168;
    local_b0 = local_160;
    local_100 = &PTR_LAB_140b5e648;
    uStack248 = L"Result";
    local_a8 = local_158;
    local_f0 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_100);
    local_138 = *(undefined8 * )(param_1 + 0x18);
    local_150 = &PTR_LAB_140b5e648;
    local_100 = &PTR_LAB_140b5e640;
    local_38 = (undefined4) local_f0;
    uStack52 = local_f0._4_4_;
    uStack44 = uStack228;
    local_148 = L"FileName";
    local_48 = 0x40b5e640;
    uStack68 = 1;
    uStack64 = (undefined4) uStack248;
    uStack60 = uStack248._4_4_;
    iStack232 = iVar9;
    iStack48 = iVar9;
    local_140 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720, &local_150);
    local_90 = local_148;
    local_150 = &PTR_LAB_140b5e638;
    local_res8 = 0x141de6cf8;
    local_98 = &PTR_LAB_140b5e638;
    local_88 = local_140;
    local_80 = local_138;
    iVar7 = FUN_1401971e0(&DAT_140c8a52c, 0xe, &local_res8, *(undefined8 * )(param_1 + 0x18), &local_98,
                          &local_48, &local_b8);
    local_150 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_140);
    local_100 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_f0);
    local_168 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720, local_158);
    if (iVar7 != 0) {
        DebugBreak();
    }
    *(int *) (param_1 + 0x80) = iVar9;
    return;
}


int FUN_1402ab580(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402ab5ea;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402ab5ea:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        FUN_1401984d0(param_1 + 0x50);
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


int FUN_1402ab670(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    DWORD DVar3;
    HANDLE hObject;
    ulonglong uVar4;
    DWORD *pDVar5;
    ulonglong *puVar6;
    int iVar7;

    lVar1 = *(longlong * )(param_1 + 0x10);
    pDVar5 = (DWORD * )(lVar1 + 0x18);
    DVar3 = GetCurrentThreadId();
    uVar4 = 0;
    puVar6 = (ulonglong * )(lVar1 + 0x20);
    if (*pDVar5 == DVar3) {
        *puVar6 = *puVar6 + 1;
    } else {
        do {
            LOCK();
            uVar2 = *puVar6;
            *puVar6 = *puVar6 ^ (ulonglong)(uVar2 == 0) * (*puVar6 ^ 1);
            if (uVar2 == 0) {
                *pDVar5 = DVar3;
                goto LAB_1402ab6ee;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x400);
        FUN_14019fb60(pDVar5, DVar3);
    }
    LAB_1402ab6ee:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar7 = *(int *) (param_1 + 8);
    if (iVar7 == -1) {
        FUN_1402aab20(param_1);
        FUN_14018b900(param_1, 0);
        iVar7 = 0;
    } else if (iVar7 == 0) {
        if (*(longlong * )(param_1 + 0x18) == 0) {
            FUN_1402aab20(param_1);
            FUN_14018b900(param_1, 0);
        } else {
            FUN_140198370(param_1 + 0x50, param_1, *(longlong * )(param_1 + 0x10) + 0x1870);
        }
    }
    if (*puVar6 < 2) {
        *pDVar5 = 0;
        *puVar6 = 0;
        if (*(longlong * )(lVar1 + 0x28) != 0) {
            if (*(longlong * )(lVar1 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar6 = (ulonglong * )(lVar1 + 0x30);
                uVar4 = *puVar6;
                *puVar6 = *puVar6 ^ (ulonglong)(uVar4 == 0) * (*puVar6 ^ (ulonglong) hObject);
                if (uVar4 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar1 + 0x30));
        }
    } else {
        *puVar6 = *puVar6 - 1;
    }
    return iVar7;
}


undefined8 FUN_1402ab7c0(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
        uVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))();
        if ((int) uVar1 == 0) {
            return uVar1;
        }
        FUN_1402ab0d0(param_1);
        if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
            *(undefined8 * )(param_1 + 0x28) = 0;
        }
    }
    return 1;
}


undefined4 FUN_1402ab820(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    return *(undefined4 * )(param_1 + 9);
}


void FUN_1402ab850(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    *(undefined4 * )(param_1 + 9) = 0;
    return;
}


longlong FUN_1402ab880(longlong *param_1, undefined4 *param_2, ulonglong param_3) {
    longlong lVar1;

    (**(code * *)(*param_1 + 0x20))();
    if ((param_3 & 3) == 0) {
        return 0;
    }
    if ((param_3 & 2) != 0) {
        *(undefined4 * )(param_1 + 9) = 1;
        if (*(longlong * *)(param_1[2] + 0x2158) == param_1) {
            *(undefined8 * )(param_1[2] + 0x2158) = 0;
        }
    }
    lVar1 = param_1[2];
    if ((param_3 & 1) != 0) {
        LOCK();
        *(int *) (lVar1 + 0x40c) = *(int *) (lVar1 + 0x40c) + 1;
        LOCK();
        *(int *) (lVar1 + 0x410) = *(int *) (lVar1 + 0x410) + 0x1000;
    }
    if ((param_3 & 2) != 0) {
        LOCK();
        *(int *) (lVar1 + 0x414) = *(int *) (lVar1 + 0x414) + 1;
        LOCK();
        *(int *) (lVar1 + 0x418) = *(int *) (lVar1 + 0x418) + 0x1000;
    }
    *param_2 = 0x80;
    return param_1[8];
}


void FUN_1402ab940(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61f60;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402ab9aa;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402ab9aa:
    if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
    }
    param_1[6] = 0;
    param_1[7] = 0;
    if ((1 < *(int *) (param_1 + 3)) && ((longlong *) param_1[4] != (longlong *) 0x0)) {
        (**(code * *)(*(longlong *) param_1[4] + 0x10))();
        param_1[4] = 0;
    }
    *(undefined4 * )(param_1 + 3) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[6] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 * )(param_1[7] + 0x30) = param_1[6];
    }
    param_1[7] = 0;
    param_1[6] = 0;
    return;
}


ulonglong FUN_1402aba90(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;
    ulonglong uVar10;
    undefined8 local_res10;

    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    DVar4 = GetCurrentThreadId();
    uVar10 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar10;
    if (*pDVar8 == DVar4) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar4;
                goto LAB_1402abaff;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8, DVar4);
    }
    LAB_1402abaff:
    if (*(int *) (param_1 + 0x18) < 2) {
        local_res10 = 1;
        plVar7 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        uVar5 = (**(code * *)(*plVar7 + 0xc0))(plVar7, &local_res10, param_1 + 0x20);
        uVar6 = (ulonglong) uVar5;
        if ((int) uVar5 < 0) goto LAB_1402abb67;
        *(undefined4 * )(param_1 + 0x28) = 0;
    }
    *(undefined4 * )(param_1 + 0x18) = 2;
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1af8);
    uVar6 = uVar10;
    if (*(longlong * )(param_1 + 0x30) == 0) {
        *(longlong * *)(param_1 + 0x30) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x38);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x30) = plVar1;
        }
    }
    LAB_1402abb67:
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar10 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar10 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar10 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return uVar6;
    }
    *puVar9 = *puVar9 - 1;
    return uVar6;
}


int FUN_1402abbf0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402ab940();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1402abc30(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;

    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar7 = (DWORD * )(lVar2 + 0x18e0);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*pDVar7 == DVar5) {
        *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x18e8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar7 = DVar5;
                goto LAB_1402abc98;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar7, DVar5);
    }
    LAB_1402abc98:
    plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
    (**(code * *)(*plVar4 + 0xd8))(plVar4, *(undefined8 * )(param_1 + 0x20));
    if (*(ulonglong * )(lVar2 + 0x18e8) < 2) {
        *pDVar7 = 0;
        *(undefined8 * )(lVar2 + 0x18e8) = 0;
        if (*(longlong * )(lVar2 + 0x18f0) != 0) {
            if (*(longlong * )(lVar2 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18f8);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x18f8));
        }
        return;
    }
    *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + -1;
    return;
}


void FUN_1402abd30(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;

    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar7 = (DWORD * )(lVar2 + 0x18e0);
    *(undefined4 * )(param_1 + 0x28) = 1;
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*pDVar7 == DVar5) {
        *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x18e8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *pDVar7 = DVar5;
                goto LAB_1402abd9c;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar7, DVar5);
    }
    LAB_1402abd9c:
    plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
    (**(code * *)(*plVar4 + 0xe0))(plVar4, *(undefined8 * )(param_1 + 0x20));
    if (*(ulonglong * )(lVar2 + 0x18e8) < 2) {
        *pDVar7 = 0;
        *(undefined8 * )(lVar2 + 0x18e8) = 0;
        if (*(longlong * )(lVar2 + 0x18f0) != 0) {
            if (*(longlong * )(lVar2 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18f8);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x18f8));
        }
    } else {
        *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + -1;
    }
    return;
}


void FUN_1402ac060(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[2];
    *param_1 = &PTR_LAB_140b61f90;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402ac0ca;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402ac0ca:
    if ((undefined8 *) param_1[5] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 * )(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((1 < *(int *) (param_1 + 3)) && ((longlong *) param_1[4] != (longlong *) 0x0)) {
        (**(code * *)(*(longlong *) param_1[4] + 0x10))();
        param_1[4] = 0;
    }
    *(undefined4 * )(param_1 + 3) = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((undefined8 *) param_1[5] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 * )(param_1[6] + 0x28) = param_1[5];
    }
    param_1[6] = 0;
    param_1[5] = 0;
    return;
}


ulonglong FUN_1402ac1b0(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;
    ulonglong uVar10;
    undefined4 local_res10;
    undefined4 local_res14;

    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    DVar4 = GetCurrentThreadId();
    uVar10 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar10;
    if (*pDVar8 == DVar4) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar4;
                goto LAB_1402ac21f;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8, DVar4);
    }
    LAB_1402ac21f:
    if ((*(int *) (param_1 + 0x18) < 2) && (*(int *) (*(longlong * )(param_1 + 0x10) + 0xe0) != 0)) {
        local_res10 = 5;
        local_res14 = 1;
        plVar7 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
        uVar5 = (**(code * *)(*plVar7 + 200))(plVar7, &local_res10, param_1 + 0x20);
        uVar6 = (ulonglong) uVar5;
        if ((int) uVar5 < 0) goto LAB_1402ac293;
    }
    *(undefined4 * )(param_1 + 0x18) = 2;
    plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1b00);
    uVar6 = uVar10;
    if (*(longlong * )(param_1 + 0x28) == 0) {
        *(longlong * *)(param_1 + 0x28) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x30);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x28) = plVar1;
        }
    }
    LAB_1402ac293:
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar10 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar10 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar10 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
        return uVar6;
    }
    *puVar9 = *puVar9 - 1;
    return uVar6;
}


undefined8 FUN_1402ac310(longlong param_1, int param_2) {
    longlong *plVar1;
    undefined8 uVar2;
    undefined4 local_res8;
    undefined4 local_resc;

    if (*(int *) (param_1 + 0x18) < 2) {
        if (1 < param_2) {
            if (*(int *) (*(longlong * )(param_1 + 0x10) + 0xe0) != 0) {
                local_res8 = 5;
                local_resc = 1;
                plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18c0);
                uVar2 = (**(code * *)(*plVar1 + 200))(plVar1, &local_res8, param_1 + 0x20);
                if ((int) uVar2 < 0) {
                    return uVar2;
                }
            }
            goto LAB_1402ac392;
        }
        if (*(int *) (param_1 + 0x18) < 2) goto LAB_1402ac392;
    }
    if ((param_2 < 2) && (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0)) {
        (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x10))();
        *(undefined8 * )(param_1 + 0x20) = 0;
    }
    LAB_1402ac392:
    *(int *) (param_1 + 0x18) = param_2;
    return 0;
}


int FUN_1402ac3b0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402ac060();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1402ac3f0(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;

    if (*(longlong * )(param_1 + 0x20) != 0) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar7 = (DWORD * )(lVar2 + 0x18e0);
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*pDVar7 == DVar5) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18e8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar7 = DVar5;
                    goto LAB_1402ac468;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(pDVar7, DVar5);
        }
        LAB_1402ac468:
        plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
        (**(code * *)(*plVar4 + 0xd8))(plVar4, *(undefined8 * )(param_1 + 0x20));
        if (1 < *(ulonglong * )(lVar2 + 0x18e8)) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + -1;
            return;
        }
        *pDVar7 = 0;
        *(undefined8 * )(lVar2 + 0x18e8) = 0;
        if (*(longlong * )(lVar2 + 0x18f0) != 0) {
            if (*(longlong * )(lVar2 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18f8);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x18f8));
        }
    }
    return;
}


void FUN_1402ac500(longlong param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    DWORD *pDVar7;

    if (*(longlong * )(param_1 + 0x20) != 0) {
        lVar2 = *(longlong * )(param_1 + 0x10);
        pDVar7 = (DWORD * )(lVar2 + 0x18e0);
        DVar5 = GetCurrentThreadId();
        uVar6 = 0;
        if (*pDVar7 == DVar5) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + 1;
        } else {
            do {
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18e8);
                uVar3 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
                if (uVar3 == 0) {
                    *pDVar7 = DVar5;
                    goto LAB_1402ac578;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x400);
            FUN_14019fb60(pDVar7, DVar5);
        }
        LAB_1402ac578:
        plVar4 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x18d0);
        (**(code * *)(*plVar4 + 0xe0))(plVar4, *(undefined8 * )(param_1 + 0x20));
        if (1 < *(ulonglong * )(lVar2 + 0x18e8)) {
            *(longlong * )(lVar2 + 0x18e8) = *(longlong * )(lVar2 + 0x18e8) + -1;
            return;
        }
        *pDVar7 = 0;
        *(undefined8 * )(lVar2 + 0x18e8) = 0;
        if (*(longlong * )(lVar2 + 0x18f0) != 0) {
            if (*(longlong * )(lVar2 + 0x18f8) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x18f8);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x18f8));
        }
    }
    return;
}


undefined8 *FUN_1402ac610(undefined8 *param_1, longlong param_2) {
    DWORD *pDVar1;
    ulonglong *puVar2;
    longlong *plVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;

    uVar6 = 0;
    *param_1 = &PTR_LAB_140b61b20;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 * )(param_1 + 3) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined4 * )(param_1 + 0xc) = 0x544e5645;
    *(undefined4 * )((longlong) param_1 + 0xa4) = 0;
    param_1[0x16] = 0;
    param_1[0x1a] = 0;
    param_1[0x17] = 0;
    param_1[0x1b] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    pDVar1 = (DWORD * )(param_2 + 0x18);
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    *(undefined4 * )(param_1 + 0x1d) = 0;
    DVar5 = GetCurrentThreadId();
    if (*pDVar1 == DVar5) {
        *(longlong * )(param_2 + 0x20) = *(longlong * )(param_2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(param_2 + 0x20);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ 1);
            if (uVar4 == 0) {
                *pDVar1 = DVar5;
                goto LAB_1402ac6f4;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar1);
    }
    LAB_1402ac6f4:
    plVar7 = (longlong * )(param_1[2] + 0x1b08);
    if (param_1[0x1e] == 0) {
        param_1[0x1e] = plVar7;
        plVar3 = param_1 + 0x1f;
        *plVar3 = *plVar7;
        *plVar7 = (longlong) param_1;
        if (*plVar3 != 0) {
            *(longlong * *)(*plVar3 + 0xf0) = plVar3;
        }
    }
    if (*(ulonglong * )(param_2 + 0x20) < 2) {
        *pDVar1 = 0;
        *(undefined8 * )(param_2 + 0x20) = 0;
        if (*(longlong * )(param_2 + 0x28) != 0) {
            if (*(longlong * )(param_2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(param_2 + 0x30);
                uVar6 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar6 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(param_2 + 0x30));
        }
    } else {
        *(longlong * )(param_2 + 0x20) = *(longlong * )(param_2 + 0x20) + -1;
    }
    return param_1;
}


undefined8 FUN_1402ac7a0(longlong param_1, int param_2) {
    if ((*(int *) (param_1 + 0xe8) < 1) && (0 < param_2)) {
        if ((*(longlong * )(param_1 + 0xb0) != 0) || (*(longlong * )(param_1 + 0xb8) != 0)) {
            FUN_140195960(param_1 + 0x18, 0, param_1 + 0xa8, 5);
        }
        if ((*(longlong * )(param_1 + 0xd0) != 0) || (*(longlong * )(param_1 + 0xd8) != 0)) {
            FUN_140195960(param_1 + 0x60, 0, param_1 + 200, 5);
        }
        *(int *) (param_1 + 0xe8) = param_2;
        return 0;
    }
    *(int *) (param_1 + 0xe8) = param_2;
    return 0;
}


void FUN_1402ac840(undefined8 *param_1) {
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;

    lVar2 = param_1[4];
    *param_1 = &PTR_LAB_140b61fb8;
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    if (*(DWORD * )(lVar2 + 0x18) == DVar4) {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar2 + 0x20);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar3 == 0) * (*puVar1 ^ 1);
            if (uVar3 == 0) {
                *(DWORD * )(lVar2 + 0x18) = DVar4;
                goto LAB_1402ac8aa;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(lVar2 + 0x18, DVar4);
    }
    LAB_1402ac8aa:
    if ((0 < *(int *) (param_1 + 5)) && ((longlong *) param_1[0xe] != (longlong *) 0x0)) {
        (**(code * *)(*(longlong *) param_1[0xe] + 8))();
        param_1[0xe] = 0;
    }
    *(undefined4 * )(param_1 + 5) = 0;
    if ((undefined8 *) param_1[1] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 * )(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    if (*(ulonglong * )(lVar2 + 0x20) < 2) {
        *(undefined4 * )(lVar2 + 0x18) = 0;
        *(undefined8 * )(lVar2 + 0x20) = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar5 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *(longlong * )(lVar2 + 0x20) = *(longlong * )(lVar2 + 0x20) + -1;
    }
    if ((longlong *) param_1[0xe] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0xe] + 8))();
    }
    if ((undefined8 *) param_1[1] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 * )(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}


ulonglong FUN_1402ac990(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    uint uVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;
    ulonglong *puVar9;
    ulonglong uVar10;

    lVar2 = *(longlong * )(param_1 + 0x20);
    pDVar8 = (DWORD * )(lVar2 + 0x18);
    DVar4 = GetCurrentThreadId();
    uVar10 = 0;
    puVar9 = (ulonglong * )(lVar2 + 0x20);
    uVar6 = uVar10;
    if (*pDVar8 == DVar4) {
        *puVar9 = *puVar9 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 ^ (ulonglong)(uVar3 == 0) * (*puVar9 ^ 1);
            if (uVar3 == 0) {
                *pDVar8 = DVar4;
                goto LAB_1402aca0e;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8, DVar4);
    }
    LAB_1402aca0e:
    uVar5 = FUN_1402acb10(param_1, 2);
    uVar6 = (ulonglong) uVar5;
    if ((-1 < (int) uVar5) &&
        (plVar7 = (longlong * )(*(longlong * )(param_1 + 0x20) + 0x1b10), uVar6 = uVar10,
                *(longlong * )(param_1 + 8) == 0)) {
        *(longlong * *)(param_1 + 8) = plVar7;
        plVar1 = (longlong * )(param_1 + 0x10);
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 8) = plVar1;
        }
    }
    if (*puVar9 < 2) {
        *pDVar8 = 0;
        *puVar9 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar9 = (ulonglong * )(lVar2 + 0x30);
                uVar10 = *puVar9;
                *puVar9 = *puVar9 ^ (ulonglong)(uVar10 == 0) * (*puVar9 ^ (ulonglong) hObject);
                if (uVar10 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *puVar9 = *puVar9 - 1;
    }
    return uVar6;
}


int FUN_1402acad0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 0x18);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402ac840();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


void FUN_1402acb10(longlong param_1, int param_2) {
    undefined8 *puVar1;
    longlong *plVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined auStack152[32];
    longlong *local_78;
    undefined8 local_70;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 uStack56;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 local_2c;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    if (*(int *) (param_1 + 0x28) < 1) {
        if (param_2 < 1) {
            if (0 < *(int *) (param_1 + 0x28)) goto LAB_1402accb0;
        } else {
            local_68 = *(undefined4 * )(param_1 + 0x60);
            uStack100 = *(undefined4 * )(param_1 + 100);
            uStack96 = *(undefined4 * )(param_1 + 0x68);
            uStack92 = *(undefined4 * )(param_1 + 0x6c);
            local_28 = *(undefined4 * )(param_1 + 0x44);
            local_78 = (longlong *) 0x0;
            local_2c = *(undefined4 * )(param_1 + 0x40);
            local_58 = *(undefined4 * )(&DAT_140ae7e20 + (longlong) * (int *) (param_1 + 0x30) * 4);
            local_48 = *(undefined4 * )(param_1 + 0x48);
            local_54 = *(undefined4 * )(&DAT_140ae7e60 + (longlong) * (int *) (param_1 + 0x34) * 4);
            local_50 = *(undefined4 * )(&DAT_140ae7e60 + (longlong) * (int *) (param_1 + 0x38) * 4);
            local_4c = *(undefined4 * )(&DAT_140ae7e60 + (longlong) * (int *) (param_1 + 0x3c) * 4);
            local_44 = *(undefined4 * )(param_1 + 0x4c);
            local_40 = *(undefined4 * )(&DAT_140ae8020 + (longlong) * (int *) (param_1 + 0x50) * 4);
            plVar2 = *(longlong * *)(*(longlong * )(param_1 + 0x20) + 0x18c0);
            local_3c = local_68;
            uStack56 = uStack100;
            uStack52 = uStack96;
            uStack48 = uStack92;
            iVar3 = (**(code * *)(*plVar2 + 0xb8))(plVar2, &local_58, &local_78);
            if (iVar3 < 0) {
                local_70 = 0x141de61e8;
                FUN_1401a3130(0xe, 2, &local_70, iVar3);
                if (local_78 != (longlong *) 0x0) {
                    (**(code * *)(*local_78 + 0x10))();
                }
                goto LAB_1402accd1;
            }
            puVar1 = (undefined8 * )(param_1 + 0x70);
            if (puVar1 != (undefined8 *) 0x0) {
                puVar4 = (undefined8 *) FUN_14018b280(0x18);
                if (puVar4 == (undefined8 *) 0x0) {
                    puVar4 = (undefined8 *) 0x0;
                } else {
                    *puVar4 = &PTR_LAB_140b55048;
                    *(undefined4 * )(puVar4 + 1) = 1;
                    *puVar4 = &PTR_LAB_140b61188;
                    puVar4[2] = local_78;
                    if (local_78 != (longlong *) 0x0) {
                        (**(code * *)(*local_78 + 8))();
                        *puVar1 = puVar4;
                        goto LAB_1402acc96;
                    }
                }
                *puVar1 = puVar4;
            }
            LAB_1402acc96:
            if (local_78 != (longlong *) 0x0) {
                (**(code * *)(*local_78 + 0x10))();
            }
        }
    } else {
        LAB_1402accb0:
        if ((param_2 < 1) && (*(longlong * *)(param_1 + 0x70) != (longlong *) 0x0)) {
            (**(code * *)(**(longlong * *)(param_1 + 0x70) + 8))();
            *(undefined8 * )(param_1 + 0x70) = 0;
        }
    }
    *(int *) (param_1 + 0x28) = param_2;
    LAB_1402accd1:
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack152);
    return;
}


longlong *FUN_1402accf0(longlong *param_1, longlong param_2) {
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong **pplVar4;

    *(undefined4 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 4) = 0;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 * )(param_1 + 10) = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *param_1 = param_2;
    lVar2 = *(longlong * )(param_2 + 0x2188);
    *(undefined4 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 4) = 1;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 7) = 1;
    param_1[8] = 0;
    *(undefined4 * )(param_1 + 10) = 1;
    param_1[0xb] = 0;
    plVar3 = *(longlong * *)(lVar2 + 0x70);
    if ((longlong *) param_1[0xd] != plVar3) {
        if (plVar3 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 8))();
        }
        if ((longlong *) param_1[0xd] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[0xd] + 0x10))();
        }
        param_1[0xd] = *(longlong * )(lVar2 + 0x70);
    }
    *(undefined4 * )(param_1 + 0x11) = *(undefined4 * )(lVar2 + 0x18);
    pplVar4 = (longlong * *)(*param_1 + 0x2190);
    *(undefined4 * )((longlong) param_1 + 0x8c) = *(undefined4 * )(lVar2 + 0x1c);
    param_1[0x12] = 0;
    *(undefined4 * )(param_1 + 0x13) = *(undefined4 * )(param_1 + 0x11);
    *(undefined4 * )(param_1 + 0x14) = 0;
    *(undefined4 * )((longlong) param_1 + 0xa4) = 0x3f800000;
    *(undefined4 * )((longlong) param_1 + 0x9c) = *(undefined4 * )((longlong) param_1 + 0x8c);
    if (param_1[0x15] == 0) {
        param_1[0x15] = (longlong) pplVar4;
        pplVar1 = (longlong * *)(param_1 + 0x16);
        *pplVar1 = *pplVar4;
        *pplVar4 = param_1;
        if (*pplVar1 != (longlong *) 0x0) {
            (*pplVar1)[0x15] = (longlong) pplVar1;
        }
    }
    *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 0x18;
    return param_1;
}


longlong *FUN_1402ace40(longlong *param_1, longlong param_2, longlong param_3) {
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;

    plVar5 = param_1 + 1;
    pplVar3 = (longlong * *)(param_1 + 0xd);
    *(undefined4 *) plVar5 = 0;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 4) = 0;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 7) = 0;
    param_1[8] = 0;
    *(undefined4 * )(param_1 + 10) = 0;
    param_1[0xb] = 0;
    *pplVar3 = (longlong *) 0x0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *param_1 = param_2;
    lVar6 = param_3 - (longlong) param_1;
    lVar4 = 4;
    do {
        *plVar5 = *(longlong * )(lVar6 + (longlong) plVar5);
        plVar5[1] = *(longlong * )(lVar6 + 8 + (longlong) plVar5);
        plVar5[2] = *(longlong * )(lVar6 + 0x10 + (longlong) plVar5);
        plVar2 = *(longlong * *)(lVar6 + (longlong) pplVar3);
        if (*pplVar3 != plVar2) {
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            if (*pplVar3 != (longlong *) 0x0) {
                (**(code * *)(**pplVar3 + 0x10))();
            }
            *pplVar3 = *(longlong * *)(lVar6 + (longlong) pplVar3);
        }
        pplVar3 = pplVar3 + 1;
        plVar5 = plVar5 + 3;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 * )(param_1 + 0x11) = *(undefined4 * )(param_3 + 0x88);
    *(undefined4 * )((longlong) param_1 + 0x8c) = *(undefined4 * )(param_3 + 0x8c);
    *(undefined4 * )(param_1 + 0x12) = *(undefined4 * )(param_3 + 0x90);
    pplVar3 = (longlong * *)(*param_1 + 0x2190);
    *(undefined4 * )((longlong) param_1 + 0x94) = *(undefined4 * )(param_3 + 0x94);
    *(undefined4 * )(param_1 + 0x13) = *(undefined4 * )(param_3 + 0x98);
    *(undefined4 * )((longlong) param_1 + 0x9c) = *(undefined4 * )(param_3 + 0x9c);
    *(undefined4 * )(param_1 + 0x14) = *(undefined4 * )(param_3 + 0xa0);
    *(undefined4 * )((longlong) param_1 + 0xa4) = *(undefined4 * )(param_3 + 0xa4);
    if (param_1[0x15] == 0) {
        param_1[0x15] = (longlong) pplVar3;
        pplVar1 = (longlong * *)(param_1 + 0x16);
        *pplVar1 = *pplVar3;
        *pplVar3 = param_1;
        if (*pplVar1 != (longlong *) 0x0) {
            (*pplVar1)[0x15] = (longlong) pplVar1;
        }
    }
    return param_1;
}


void FUN_1402acfc0(longlong *param_1) {
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;

    *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 0x18;
    if ((longlong *) param_1[0x15] != (longlong *) 0x0) {
        *(longlong *) param_1[0x15] = param_1[0x16];
    }
    if (param_1[0x16] != 0) {
        *(longlong * )(param_1[0x16] + 0xa8) = param_1[0x15];
    }
    plVar2 = param_1 + 0x11;
    iVar3 = 3;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    do {
        pplVar1 = (longlong * *)(plVar2 + -1);
        plVar2 = plVar2 + -1;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 0x10))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    return;
}


void FUN_1402ad050(longlong *param_1, ulonglong param_2, longlong *param_3) {
    longlong *plVar1;
    byte bVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined *puVar6;
    uint uVar7;
    longlong lVar8;
    undefined auStack168[32];
    undefined8 local_88[2];
    undefined **local_78;
    longlong local_70;
    LPVOID local_68;
    undefined **local_58;
    longlong local_50;
    LPVOID local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack168;
    param_2 = param_2 & 0xffffffff;
    if (*(int *) param_3 == 0) {
        lVar5 = param_3[1];
        if (lVar5 == 0) {
            lVar5 = *(longlong * )(*param_1 + 0x2188);
        }
        plVar1 = *(longlong * *)(lVar5 + 0x70);
        if ((longlong *) param_1[param_2 + 0xd] != plVar1) {
            if (plVar1 != (longlong *) 0x0) {
                (**(code * *)(*plVar1 + 8))();
            }
            if ((longlong *) param_1[param_2 + 0xd] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[param_2 + 0xd] + 0x10))();
            }
            param_1[param_2 + 0xd] = *(longlong * )(lVar5 + 0x70);
        }
        if ((int) param_2 == 0) {
            uVar4 = *(undefined4 * )(lVar5 + 0x18);
            *(undefined4 * )(param_1 + 0x11) = uVar4;
            iVar3 = *(int *) (lVar5 + 0x1c);
            LAB_1402ad30e:
            *(int *) ((longlong) param_1 + 0x8c) = iVar3;
            local_58 = (undefined **) 0x0;
            local_48 = (LPVOID) 0x3f80000000000000;
            local_50 = CONCAT44(iVar3, uVar4);
            if (((param_1[0x12] != 0) || (param_1[0x13] != local_50)) ||
                (param_1[0x14] != 0x3f80000000000000)) {
                *(undefined4 * )(param_1 + 0x12) = 0;
                *(undefined4 * )((longlong) param_1 + 0x94) = 0;
                *(undefined4 * )(param_1 + 0x13) = uVar4;
                *(int *) ((longlong) param_1 + 0x9c) = iVar3;
                *(undefined4 * )(param_1 + 0x14) = 0;
                *(undefined4 * )((longlong) param_1 + 0xa4) = 0x3f800000;
                *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 0x10;
            }
        }
    } else {
        if ((longlong *) param_3[1] != (longlong *) 0x0) {
            lVar5 = (**(code * *)(*(longlong *) param_3[1] + 0x18))();
            if (*(uint * )((longlong) param_3 + 0x14) < *(uint * )(lVar5 + 0x14)) {
                if ((*(int *) (lVar5 + 0x1c) - 3U & 0xfffffffd) == 0) {
                    if ((&DAT_140ae64c0)[*(int *) (lVar5 + 0x18)] == 0) {
                        iVar3 = *(int *) param_3;
                        if (iVar3 == 1) {
                            lVar8 = param_3[1];
                            FUN_1402a11e0(lVar8);
                            LAB_1402ad2b8:
                            FUN_140282570();
                            *(undefined4 * )(lVar8 + 0xb8) = 1;
                        } else if (iVar3 == 2) {
                            lVar8 = param_3[1];
                            FUN_1402a71b0(lVar8, *(int *) (param_3 + 2));
                            FUN_140282570();
                            *(undefined4 * )(lVar8 + 0x158) = 1;
                        } else if (iVar3 == 3) {
                            lVar8 = param_3[1];
                            FUN_1402a47b0(lVar8, *(int *) (param_3 + 2));
                            goto LAB_1402ad2b8;
                        }
                        if ((int) param_2 == 0) {
                            bVar2 = (byte) * (int *) ((longlong) param_3 + 0x14) & 0x1f;
                            *(uint * )(param_1 + 0x11) =
                                    (uint)(*(uint * )(lVar5 + 4) >> bVar2 == 0) + (*(uint * )(lVar5 + 4) >> bVar2);
                            uVar7 = *(uint * )(lVar5 + 8) >> ((byte) * (int *) ((longlong) param_3 + 0x14) & 0x1f);
                            iVar3 = (uVar7 == 0) + uVar7;
                            uVar4 = *(undefined4 * )(param_1 + 0x11);
                            goto LAB_1402ad30e;
                        }
                        goto LAB_1402ad3c1;
                    }
                    local_58 = &PTR_LAB_140b5e648;
                    local_50 = 0;
                    local_48 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_58);
                    local_88[0] = 0x141de6d50;
                    puVar6 = &DAT_140c8a544;
                } else {
                    local_58 = &PTR_LAB_140b5e648;
                    local_50 = 0;
                    local_48 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_58);
                    local_88[0] = 0x141de6de0;
                    puVar6 = &DAT_140c8a540;
                }
            } else {
                local_58 = &PTR_LAB_140b5e648;
                local_50 = 0;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_58);
                local_88[0] = 0x141de6e50;
                puVar6 = &DAT_140c8a550;
            }
            local_78 = local_58;
            local_70 = local_50;
            local_68 = local_48;
            iVar3 = FUN_1401971e0(puVar6, 0xe, local_88, &local_78);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar3 != 0) {
                DebugBreak();
            }
            goto LAB_1402ad3e9;
        }
        if ((longlong *) param_1[param_2 + 0xd] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[param_2 + 0xd] + 0x10))();
            param_1[param_2 + 0xd] = 0;
        }
    }
    LAB_1402ad3c1:
    param_1[param_2 * 3 + 1] = *param_3;
    param_1[param_2 * 3 + 2] = param_3[1];
    param_1[param_2 * 3 + 3] = param_3[2];
    *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 8;
    LAB_1402ad3e9:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack168);
    return;
}


void FUN_1402ad790(longlong *param_1) {
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = param_1 + 0xd;
    plVar3 = param_1 + 2;
    lVar4 = 4;
    do {
        iVar1 = *(int *) (plVar3 + -1);
        if (iVar1 == 0) {
            lVar2 = *plVar3;
            if (lVar2 == 0) {
                lVar2 = *(longlong * )(*param_1 + 0x2188);
            }
            *(undefined4 * )(lVar2 + 0x78) = *(undefined4 * )(*param_1 + 0xf0);
        } else if (iVar1 == 1) {
            if (*plVar3 != 0) {
                *(undefined4 * )
                        (*(longlong * )(*plVar3 + 0xe0) + (ulonglong) * (uint * )((longlong) plVar3 + 0xc) * 4) =
                        *(undefined4 * )(*param_1 + 0xf0);
            }
        } else if (iVar1 == 2) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
                *(undefined4 * )
                        (*(longlong * )(lVar2 + 0x1f8) +
                         (ulonglong)
                                 (uint)(
                                 *(int *) (plVar3 + 1) * *(int *) (lVar2 + 0x2c) + *(int *) ((longlong) plVar3 + 0xc)) *
                         4) = *(undefined4 * )(*param_1 + 0xf0);
            }
        } else if ((iVar1 == 3) && (lVar2 = *plVar3, lVar2 != 0)) {
            *(undefined4 * )
                    (*(longlong * )(lVar2 + 0xa8) +
                     (ulonglong)
                             (uint)(
                             *(int *) (plVar3 + 1) * *(int *) (lVar2 + 0x2c) + *(int *) ((longlong) plVar3 + 0xc)) * 4)
                    = *(undefined4 * )(*param_1 + 0xf0);
        }
        if (*plVar5 != 0) {
            (**(code * *)(**(longlong * *)(*param_1 + 0x18d0) + 400))();
        }
        plVar5 = plVar5 + 1;
        plVar3 = plVar3 + 3;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
}


void FUN_1402ad8c0(longlong *param_1) {
    int *piVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    uint *puVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined local_18[16];

    plVar9 = param_1 + 0xd;
    puVar7 = (uint * )((longlong) param_1 + 0x1c);
    lVar8 = 4;
    do {
        uVar5 = puVar7[-5];
        if (uVar5 == 0) {
            lVar4 = *(longlong * )(puVar7 + -3);
            if (lVar4 == 0) {
                lVar4 = *(longlong * )(*param_1 + 0x2188);
            }
            if (*(int *) (lVar4 + 0x78) == *(int *) (*param_1 + 0xf0)) goto LAB_1402ada0e;
            *(int *) (lVar4 + 0x78) = *(int *) (*param_1 + 0xf0);
            LAB_1402ad9b2:
            if (*plVar9 != 0) {
                iVar3 = DAT_140c40590;
                if (*DAT_140c63750 < DAT_140c40590) {
                    iVar3 = *DAT_140c63750;
                }
                if ((&DAT_140c405a0)[iVar3] != '\0') {
                    plVar2 = *(longlong * *)(*param_1 + 0x18d8);
                    if (plVar2 == (longlong *) 0x0) {
                        plVar2 = *(longlong * *)(*param_1 + 0x18d0);
                        local_18 = ZEXT816(0);
                        (**(code * *)(*plVar2 + 400))(plVar2, *plVar9, local_18);
                    } else {
                        (**(code * *)(*plVar2 + 0x3b0))();
                    }
                }
            }
        } else if (uVar5 == 1) {
            lVar4 = *(longlong * )(puVar7 + -3);
            if ((lVar4 == 0) || (*(int *) (lVar4 + 0x34) != 5)) goto LAB_1402ada0e;
            uVar5 = *puVar7;
            lVar4 = *(longlong * )(lVar4 + 0xe0);
            LAB_1402ad933:
            piVar1 = (int *) (lVar4 + (ulonglong) uVar5 * 4);
            if (*piVar1 != *(int *) (*param_1 + 0xf0)) {
                *piVar1 = *(int *) (*param_1 + 0xf0);
                goto LAB_1402ad9b2;
            }
        } else if (uVar5 == 2) {
            lVar6 = *(longlong * )(puVar7 + -3);
            if ((lVar6 != 0) && (*(int *) (lVar6 + 0x34) == 5)) {
                lVar4 = *(longlong * )(lVar6 + 0x1f8);
                goto LAB_1402ad92a;
            }
        } else if (((uVar5 == 3) && (lVar6 = *(longlong * )(puVar7 + -3), lVar6 != 0)) &&
                   (*(int *) (lVar6 + 0x34) == 5)) {
            lVar4 = *(longlong * )(lVar6 + 0xa8);
            LAB_1402ad92a:
            uVar5 = puVar7[-1] * *(int *) (lVar6 + 0x2c) + *puVar7;
            goto LAB_1402ad933;
        }
        LAB_1402ada0e:
        plVar9 = plVar9 + 1;
        puVar7 = puVar7 + 6;
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) {
            return;
        }
    } while (true);
}


void FUN_1402ada40(longlong *param_1) {
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    plVar2 = param_1 + 2;
    lVar4 = 4;
    do {
        iVar1 = *(int *) (plVar2 + -1);
        if (iVar1 == 0) {
            lVar3 = *plVar2;
            if (lVar3 == 0) {
                lVar3 = *(longlong * )(*param_1 + 0x2188);
            }
            *(undefined4 * )(lVar3 + 0x78) = *(undefined4 * )(*param_1 + 0xf0);
        } else if (iVar1 == 1) {
            lVar3 = *plVar2;
            if ((lVar3 != 0) && (*(int *) (lVar3 + 0x34) == 5)) {
                *(undefined4 * )
                        (*(longlong * )(lVar3 + 0xe0) + (ulonglong) * (uint * )((longlong) plVar2 + 0xc) * 4) =
                        *(undefined4 * )(*param_1 + 0xf0);
            }
        } else if (iVar1 == 2) {
            lVar3 = *plVar2;
            if ((lVar3 != 0) && (*(int *) (lVar3 + 0x34) == 5)) {
                *(undefined4 * )
                        (*(longlong * )(lVar3 + 0x1f8) +
                         (ulonglong)
                                 (uint)(
                                 *(int *) (plVar2 + 1) * *(int *) (lVar3 + 0x2c) + *(int *) ((longlong) plVar2 + 0xc)) *
                         4) = *(undefined4 * )(*param_1 + 0xf0);
            }
        } else if (((iVar1 == 3) && (lVar3 = *plVar2, lVar3 != 0)) && (*(int *) (lVar3 + 0x34) == 5)) {
            *(undefined4 * )
                    (*(longlong * )(lVar3 + 0xa8) +
                     (ulonglong)
                             (uint)(
                             *(int *) (plVar2 + 1) * *(int *) (lVar3 + 0x2c) + *(int *) ((longlong) plVar2 + 0xc)) * 4)
                    = *(undefined4 * )(*param_1 + 0xf0);
        }
        plVar2 = plVar2 + 3;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
}


void FUN_1402adb40(longlong *param_1) {
    int iVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = param_1 + 2;
    lVar4 = 4;
    do {
        piVar2 = DAT_140c636a0;
        iVar1 = *(int *) (plVar5 + -1);
        if (iVar1 == 0) {
            *DAT_140c636a0 = *DAT_140c636a0 + 0x10000;
            lVar3 = *plVar5;
            if (lVar3 == 0) {
                lVar3 = *(longlong * )(*param_1 + 0x2188);
            }
            FUN_14029e260(lVar3);
            *piVar2 = *piVar2 + -0x10000;
        } else if (iVar1 == 1) {
            LAB_1402adb74:
            if (*plVar5 != 0) {
                *(undefined4 * )(*plVar5 + 0xb8) = 1;
            }
        } else if (iVar1 == 2) {
            if (*plVar5 != 0) {
                *(undefined4 * )(*plVar5 + 0x158) = 1;
            }
        } else if (iVar1 == 3) goto LAB_1402adb74;
        plVar5 = plVar5 + 3;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
            return;
        }
    } while (true);
}


longlong *FUN_1402adbf0(longlong *param_1, longlong param_2) {
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong **pplVar4;

    *(undefined4 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = param_2;
    lVar2 = *(longlong * )(param_2 + 0x2188);
    *(undefined4 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    plVar3 = *(longlong * *)(lVar2 + 0x88);
    if ((longlong *) param_1[4] != plVar3) {
        if (plVar3 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 8))();
        }
        if ((longlong *) param_1[4] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[4] + 0x10))();
        }
        param_1[4] = *(longlong * )(lVar2 + 0x88);
    }
    pplVar4 = (longlong * *)(*param_1 + 0x2198);
    if (param_1[5] == 0) {
        param_1[5] = (longlong) pplVar4;
        pplVar1 = (longlong * *)(param_1 + 6);
        *pplVar1 = *pplVar4;
        *pplVar4 = param_1;
        if (*pplVar1 != (longlong *) 0x0) {
            (*pplVar1)[5] = (longlong) pplVar1;
        }
    }
    *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 8;
    return param_1;
}


longlong *FUN_1402adca0(longlong *param_1, longlong param_2, longlong param_3) {
    longlong **pplVar1;
    longlong *plVar2;
    longlong **pplVar3;

    *(undefined4 * )(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = param_2;
    param_1[1] = *(longlong * )(param_3 + 8);
    param_1[2] = *(longlong * )(param_3 + 0x10);
    param_1[3] = *(longlong * )(param_3 + 0x18);
    plVar2 = *(longlong * *)(param_3 + 0x20);
    if ((longlong *) param_1[4] != plVar2) {
        if (plVar2 != (longlong *) 0x0) {
            (**(code * *)(*plVar2 + 8))();
        }
        if ((longlong *) param_1[4] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[4] + 0x10))();
        }
        param_1[4] = *(longlong * )(param_3 + 0x20);
    }
    pplVar3 = (longlong * *)(*param_1 + 0x2198);
    if (param_1[5] == 0) {
        param_1[5] = (longlong) pplVar3;
        pplVar1 = (longlong * *)(param_1 + 6);
        *pplVar1 = *pplVar3;
        *pplVar3 = param_1;
        if (*pplVar1 != (longlong *) 0x0) {
            (*pplVar1)[5] = (longlong) pplVar1;
        }
    }
    return param_1;
}


void FUN_1402add50(longlong *param_1, longlong *param_2, undefined4 param_3) {
    uint uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined *puVar6;
    undefined8 local_res10;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;

    if (*(int *) param_2 == 0) {
        lVar4 = param_2[1];
        if (lVar4 == 0) {
            lVar4 = *(longlong * )(*param_1 + 0x2188);
        }
        plVar2 = *(longlong * *)(lVar4 + 0x88);
        if ((longlong *) param_1[4] != plVar2) {
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
            }
            if ((longlong *) param_1[4] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[4] + 0x10))();
            }
            param_1[4] = *(longlong * )(lVar4 + 0x88);
        }
    } else {
        if ((longlong *) param_2[1] != (longlong *) 0x0) {
            lVar4 = (**(code * *)(*(longlong *) param_2[1] + 0x18))();
            uVar1 = *(uint * )((longlong) param_2 + 0x14);
            if (uVar1 < *(uint * )(lVar4 + 0x14)) {
                if ((*(int *) (lVar4 + 0x1c) - 3U & 0xfffffffd) == 0) {
                    if ((&DAT_140ae64c0)[*(int *) (lVar4 + 0x18)] != 0) {
                        iVar3 = *(int *) param_2;
                        if (iVar3 == 1) {
                            lVar4 = param_2[1];
                            uVar5 = FUN_1402a1290(lVar4, uVar1, param_3);
                            FUN_140282570(param_1 + 4, uVar5);
                            *(undefined4 * )(lVar4 + 0xb8) = 1;
                        } else if (iVar3 == 2) {
                            lVar4 = param_2[1];
                            uVar5 = FUN_1402a7280(lVar4, *(int *) (param_2 + 2), uVar1);
                            FUN_140282570(param_1 + 4, uVar5);
                            *(undefined4 * )(lVar4 + 0x158) = 1;
                        } else if (iVar3 == 3) {
                            local_58 = &PTR_LAB_140b5e648;
                            local_50 = 0;
                            local_48 = TlsGetValue(DAT_140c63720);
                            TlsSetValue(DAT_140c63720, &local_58);
                            local_38 = local_58;
                            local_res10 = 0x141de6ea0;
                            local_28 = local_48;
                            local_30 = local_50;
                            iVar3 = FUN_1401971e0(&DAT_140c8a53c, 0xe, &local_res10, &local_38);
                            local_58 = &PTR_LAB_140b5e648;
                            TlsSetValue(DAT_140c63720, local_48);
                            if (iVar3 != 0) {
                                DebugBreak();
                            }
                            if ((longlong *) param_1[4] == (longlong *) 0x0) {
                                return;
                            }
                            (**(code * *)(*(longlong *) param_1[4] + 0x10))();
                            param_1[4] = 0;
                            return;
                        }
                        goto LAB_1402ae05b;
                    }
                    local_58 = &PTR_LAB_140b5e648;
                    local_50 = 0;
                    local_48 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_58);
                    local_res10 = 0x141de6f40;
                    puVar6 = &DAT_140c8a538;
                } else {
                    local_58 = &PTR_LAB_140b5e648;
                    local_50 = 0;
                    local_48 = TlsGetValue(DAT_140c63720);
                    TlsSetValue(DAT_140c63720, &local_58);
                    local_res10 = 0x141de6fa0;
                    puVar6 = &DAT_140c8a534;
                }
            } else {
                local_58 = &PTR_LAB_140b5e648;
                local_50 = 0;
                local_48 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720, &local_58);
                local_res10 = 0x141de7050;
                puVar6 = &DAT_140c8a530;
            }
            local_38 = local_58;
            local_30 = local_50;
            local_28 = local_48;
            iVar3 = FUN_1401971e0(puVar6, 0xe, &local_res10, &local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720, local_48);
            if (iVar3 == 0) {
                return;
            }
            DebugBreak();
            return;
        }
        if ((longlong *) param_1[4] != (longlong *) 0x0) {
            (**(code * *)(*(longlong *) param_1[4] + 0x10))();
            param_1[4] = 0;
        }
    }
    LAB_1402ae05b:
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
    *(uint * )(*param_1 + 0x1c08) = *(uint * )(*param_1 + 0x1c08) | 8;
    return;
}


void FUN_1402ae0a0(longlong *param_1, uint param_2, undefined8 param_3, undefined param_4) {
    int iVar1;
    longlong lVar2;
    byte bVar3;

    iVar1 = *(int *) (param_1 + 1);
    if (iVar1 == 0) {
        lVar2 = param_1[2];
        if (lVar2 == 0) {
            lVar2 = *(longlong * )(*param_1 + 0x2188);
        }
        *(undefined4 * )(lVar2 + 0x90) = *(undefined4 * )(*param_1 + 0xf0);
    } else if (iVar1 == 1) {
        if (param_1[2] != 0) {
            *(undefined4 * )
                    (*(longlong * )(param_1[2] + 0xe0) + (ulonglong) * (uint * )((longlong) param_1 + 0x1c) * 4) =
                    *(undefined4 * )(*param_1 + 0xf0);
        }
    } else if (iVar1 == 2) {
        lVar2 = param_1[2];
        if (lVar2 != 0) {
            *(undefined4 * )
                    (*(longlong * )(lVar2 + 0x1f8) +
                     (ulonglong)
                             (uint)(
                             *(int *) (lVar2 + 0x2c) * *(int *) (param_1 + 3) + *(int *) ((longlong) param_1 + 0x1c)) *
                     4) = *(undefined4 * )(*param_1 + 0xf0);
        }
    } else if ((iVar1 == 3) && (lVar2 = param_1[2], lVar2 != 0)) {
        *(undefined4 * )
                (*(longlong * )(lVar2 + 0xa8) +
                 (ulonglong)
                         (uint)(
                         *(int *) (lVar2 + 0x2c) * *(int *) (param_1 + 3) + *(int *) ((longlong) param_1 + 0x1c)) * 4
                ) = *(undefined4 * )(*param_1 + 0xf0);
    }
    if (param_1[4] != 0) {
        bVar3 = (param_2 & 2) != 0;
        if ((param_2 & 4) != 0) {
            bVar3 = bVar3 | 2;
        }
        (**(code * *)(**(longlong * *)(*param_1 + 0x18d0) + 0x1a8))
                (*(longlong * *)(*param_1 + 0x18d0), param_1[4], bVar3, param_4, param_4);
    }
    return;
}


void FUN_1402ae1b0(longlong *param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4) {
    int iVar1;
    uint uVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;

    iVar1 = *(int *) (param_1 + 1);
    if (iVar1 == 0) {
        lVar4 = param_1[2];
        if (lVar4 == 0) {
            lVar4 = *(longlong * )(*param_1 + 0x2188);
        }
        if (*(int *) (lVar4 + 0x90) == *(int *) (*param_1 + 0xf0)) {
            return;
        }
        *(int *) (lVar4 + 0x90) = *(int *) (*param_1 + 0xf0);
    } else if (iVar1 == 1) {
        lVar4 = param_1[2];
        if (lVar4 == 0) {
            return;
        }
        if (*(int *) (lVar4 + 0x34) != 5) {
            return;
        }
        uVar2 = *(uint * )(*param_1 + 0xf0);
        param_4 = (ulonglong) uVar2;
        if (*(uint * )(*(longlong * )(lVar4 + 0xe0) + (ulonglong) * (uint * )((longlong) param_1 + 0x1c) * 4)
            == uVar2) {
            return;
        }
        *(uint * )(*(longlong * )(lVar4 + 0xe0) + (ulonglong) * (uint * )((longlong) param_1 + 0x1c) * 4) =
                uVar2;
    } else {
        if (iVar1 == 2) {
            lVar4 = param_1[2];
            if (lVar4 == 0) {
                return;
            }
            if (*(int *) (lVar4 + 0x34) != 5) {
                return;
            }
            param_4 = *(ulonglong * )(lVar4 + 0x1f8);
        } else {
            if (iVar1 != 3) {
                return;
            }
            lVar4 = param_1[2];
            if (lVar4 == 0) {
                return;
            }
            if (*(int *) (lVar4 + 0x34) != 5) {
                return;
            }
            param_4 = *(ulonglong * )(lVar4 + 0xa8);
        }
        uVar5 = (ulonglong)
                (uint)(*(int *) (lVar4 + 0x2c) * *(int *) (param_1 + 3) +
                       *(int *) ((longlong) param_1 + 0x1c));
        if (*(int *) (param_4 + uVar5 * 4) == *(int *) (*param_1 + 0xf0)) {
            return;
        }
        *(int *) (param_4 + uVar5 * 4) = *(int *) (*param_1 + 0xf0);
    }
    if (param_1[4] != 0) {
        plVar3 = *(longlong * *)(*param_1 + 0x18d8);
        if (plVar3 != (longlong *) 0x0) {
            // WARNING: Could not recover jumptable at 0x0001402ae2b9. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code * *)(*plVar3 + 0x3b0))();
            return;
        }
        plVar3 = *(longlong * *)(*param_1 + 0x18d0);
        (**(code * *)(*plVar3 + 0x1a8))(plVar3, param_1[4], 3, param_4, 0);
    }
    return;
}


void FUN_1402ae2f0(longlong *param_1) {
    int iVar1;
    longlong lVar2;

    iVar1 = *(int *) (param_1 + 1);
    if (iVar1 == 0) {
        lVar2 = param_1[2];
        if (lVar2 == 0) {
            lVar2 = *(longlong * )(*param_1 + 0x2188);
        }
        *(undefined4 * )(lVar2 + 0x90) = *(undefined4 * )(*param_1 + 0xf0);
    } else if (iVar1 == 1) {
        lVar2 = param_1[2];
        if ((lVar2 != 0) && (*(int *) (lVar2 + 0x34) == 5)) {
            *(undefined4 * )
                    (*(longlong * )(lVar2 + 0xe0) + (ulonglong) * (uint * )((longlong) param_1 + 0x1c) * 4) =
                    *(undefined4 * )(*param_1 + 0xf0);
            return;
        }
    } else if (iVar1 == 2) {
        lVar2 = param_1[2];
        if ((lVar2 != 0) && (*(int *) (lVar2 + 0x34) == 5)) {
            *(undefined4 * )
                    (*(longlong * )(lVar2 + 0x1f8) +
                     (ulonglong)
                             (uint)(
                             *(int *) (lVar2 + 0x2c) * *(int *) (param_1 + 3) + *(int *) ((longlong) param_1 + 0x1c)) *
                     4) = *(undefined4 * )(*param_1 + 0xf0);
            return;
        }
    } else if (((iVar1 == 3) && (lVar2 = param_1[2], lVar2 != 0)) && (*(int *) (lVar2 + 0x34) == 5)) {
        *(undefined4 * )
                (*(longlong * )(lVar2 + 0xa8) +
                 (ulonglong)
                         (uint)(
                         *(int *) (lVar2 + 0x2c) * *(int *) (param_1 + 3) + *(int *) ((longlong) param_1 + 0x1c)) * 4
                ) = *(undefined4 * )(*param_1 + 0xf0);
        return;
    }
    return;
}


void FUN_1402ae540(longlong param_1) {
    longlong *plVar1;
    ulonglong *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;
    longlong *plVar7;
    DWORD *pDVar8;

    lVar3 = *(longlong * )(param_1 + 0x10);
    pDVar8 = (DWORD * )(lVar3 + 0x1a80);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*pDVar8 == DVar5) {
        *(longlong * )(lVar3 + 0x1a88) = *(longlong * )(lVar3 + 0x1a88) + 1;
    } else {
        do {
            LOCK();
            puVar2 = (ulonglong * )(lVar3 + 0x1a88);
            uVar4 = *puVar2;
            *puVar2 = *puVar2 ^ (ulonglong)(uVar4 == 0) * (*puVar2 ^ 1);
            if (uVar4 == 0) {
                *pDVar8 = DVar5;
                goto LAB_1402ae5a8;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(pDVar8, DVar5);
    }
    LAB_1402ae5a8:
    if (*(undefined8 * *)(param_1 + 0x40) != (undefined8 *) 0x0) {
        plVar1 = (longlong * )(param_1 + 0x48);
        **(undefined8 * *)(param_1 + 0x40) = *(undefined8 * )(param_1 + 0x48);
        if (*plVar1 != 0) {
            *(undefined8 * )(*plVar1 + 0x40) = *(undefined8 * )(param_1 + 0x40);
        }
        *plVar1 = 0;
        plVar7 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x1aa8);
        *(longlong * *)(param_1 + 0x40) = plVar7;
        *plVar1 = *plVar7;
        *plVar7 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x40) = plVar1;
        }
    }
    if (*(ulonglong * )(lVar3 + 0x1a88) < 2) {
        *pDVar8 = 0;
        *(undefined8 * )(lVar3 + 0x1a88) = 0;
        if (*(longlong * )(lVar3 + 0x1a90) != 0) {
            if (*(longlong * )(lVar3 + 0x1a98) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar2 = (ulonglong * )(lVar3 + 0x1a98);
                uVar6 = *puVar2;
                *puVar2 = *puVar2 ^ (ulonglong)(uVar6 == 0) * (*puVar2 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x1a98));
        }
        return;
    }
    *(longlong * )(lVar3 + 0x1a88) = *(longlong * )(lVar3 + 0x1a88) + -1;
    return;
}


undefined8 *FUN_1402ae670(undefined8 *param_1, undefined8 param_2) {
    param_1[1] = 1;
    *param_1 = &PTR_LAB_140b62010;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    *(undefined4 * )(param_1 + 0x2d) = 1;
    param_1[0x2e] = 0;
    *(undefined4 * )(param_1 + 0x2f) = 1;
    param_1[0x30] = 0;
    *(undefined4 * )(param_1 + 0x31) = 1;
    param_1[0x32] = 0;
    param_1[0x34] = 0;
    param_1[0x33] = 0;
    param_1[7] = param_2;
    param_1[8] = 0;
    *(undefined4 * )((longlong) param_1 + 0x5c) = 0;
    FUN_1407e4830((longlong) param_1 + 0x6c, 0, 0x2c);
    param_1[0xc] = 0;
    return param_1;
}


undefined8 FUN_1402ae720(undefined8 param_1, ulonglong param_2) {
    FUN_1402ae760();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402ae760(undefined8 *param_1) {
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;

    *param_1 = &PTR_LAB_140b62010;
    FUN_14029ca70();
    uVar6 = 0;
    if (param_1[0x2e] != 0) {
        iVar2 = *(int *) (param_1 + 0x2d);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x2d;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                plVar3 = (longlong *) param_1[0x2e];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 0x2d);
                    goto joined_r0x0001402ae7f0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x2d);
        }
    }
    LAB_1402ae83a:
    if (param_1[0x30] != 0) {
        iVar2 = *(int *) (param_1 + 0x2f);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x2f;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                plVar3 = (longlong *) param_1[0x30];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 0x2f);
                    goto joined_r0x0001402ae8b0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x2f);
        }
    }
    LAB_1402ae8fa:
    if (param_1[0x32] != 0) {
        iVar2 = *(int *) (param_1 + 0x31);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x31;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + 1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                plVar3 = (longlong *) param_1[0x32];
                if (plVar3 != (longlong *) 0x0) {
                    (**(code * *)(*plVar3 + 0x68))(plVar3);
                    (**(code * *)(*plVar3 + 0x20))();
                    iVar2 = *(int *) (param_1 + 0x31);
                    goto joined_r0x0001402ae970;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x31);
        }
    }
    LAB_1402ae9ba:
    if (*(int *) (param_1 + 6) == -0x7ffffff6) {
        FUN_1402b1940(param_1);
    }
    if (param_1[0x34] != 0) {
        do {
            FUN_14018b900(*(undefined8 * )(param_1[0x33] + uVar6 * 8));
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong) param_1[0x34]);
    }
    param_1[0x34] = 0;
    FUN_14029cd30(param_1);
    *(undefined4 * )(param_1 + 3) = 1;
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 0x10))();
        param_1[8] = 0;
    }
    if (param_1[0x33] != 0) {
        (**(code * *)(*(longlong * )(param_1[0x33] + -0x10) + 8))();
    }
    lVar4 = param_1[0x32];
    while (lVar4 != 0) {
        iVar2 = *(int *) (param_1 + 0x31);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x31;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x32] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0x32] + 8))();
                    param_1[0x32] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x31);
        }
        lVar4 = param_1[0x32];
    }
    lVar4 = param_1[0x30];
    while (lVar4 != 0) {
        iVar2 = *(int *) (param_1 + 0x2f);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x2f;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x30] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0x30] + 8))();
                    param_1[0x30] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x2f);
        }
        lVar4 = param_1[0x30];
    }
    lVar4 = param_1[0x2e];
    do {
        if (lVar4 == 0) {
            if ((longlong *) param_1[0x2c] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0x2c] + 8))();
            }
            if ((longlong *) param_1[0x2b] != (longlong *) 0x0) {
                (**(code * *)(*(longlong *) param_1[0x2b] + 8))();
            }
            *param_1 = &PTR_LAB_140b61c38;
            FUN_14029ca70(param_1);
            FUN_14029cd30(param_1);
            return;
        }
        iVar2 = *(int *) (param_1 + 0x2d);
        while (iVar2 != 0) {
            LOCK();
            puVar1 = param_1 + 0x2d;
            if (iVar2 == *(int *) puVar1) {
                *(int *) puVar1 = iVar2 + -1;
                iVar5 = iVar2;
            } else {
                iVar5 = *(int *) puVar1;
            }
            if (iVar2 == iVar5) {
                if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x2e] != (longlong *) 0x0)) {
                    (**(code * *)(*(longlong *) param_1[0x2e] + 8))();
                    param_1[0x2e] = 0;
                }
                break;
            }
            iVar2 = *(int *) (param_1 + 0x2d);
        }
        lVar4 = param_1[0x2e];
    } while (true);
    joined_r0x0001402ae7f0:
    if (iVar2 == 0) goto LAB_1402ae83a;
    LOCK();
    puVar1 = param_1 + 0x2d;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar5 = iVar2;
    } else {
        iVar5 = *(int *) puVar1;
    }
    if (iVar2 == iVar5) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x2e] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0x2e] + 8))();
            param_1[0x2e] = 0;
        }
        goto LAB_1402ae83a;
    }
    iVar2 = *(int *) (param_1 + 0x2d);
    goto joined_r0x0001402ae7f0;
    joined_r0x0001402ae8b0:
    if (iVar2 == 0) goto LAB_1402ae8fa;
    LOCK();
    puVar1 = param_1 + 0x2f;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar5 = iVar2;
    } else {
        iVar5 = *(int *) puVar1;
    }
    if (iVar2 == iVar5) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x30] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0x30] + 8))();
            param_1[0x30] = 0;
        }
        goto LAB_1402ae8fa;
    }
    iVar2 = *(int *) (param_1 + 0x2f);
    goto joined_r0x0001402ae8b0;
    joined_r0x0001402ae970:
    if (iVar2 == 0) goto LAB_1402ae9ba;
    LOCK();
    puVar1 = param_1 + 0x31;
    if (iVar2 == *(int *) puVar1) {
        *(int *) puVar1 = iVar2 + -1;
        iVar5 = iVar2;
    } else {
        iVar5 = *(int *) puVar1;
    }
    if (iVar2 == iVar5) {
        if ((iVar2 + -1 == 0) && ((longlong *) param_1[0x32] != (longlong *) 0x0)) {
            (**(code * *)(*(longlong *) param_1[0x32] + 8))();
            param_1[0x32] = 0;
        }
        goto LAB_1402ae9ba;
    }
    iVar2 = *(int *) (param_1 + 0x31);
    goto joined_r0x0001402ae970;
}


ulonglong FUN_1402aebb0(longlong param_1, undefined4 param_2, undefined *param_3, undefined4 param_4,
                        undefined4 param_5, undefined4 param_6, undefined4 param_7) {
    int iVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined *puVar5;
    longlong *local_res8;
    longlong local_18;
    undefined *local_10;

    *(undefined4 * )(param_1 + 0x48) = param_2;
    *(undefined4 * )(param_1 + 0x50) = param_5;
    *(undefined4 * )(param_1 + 0x4c) = param_4;
    *(undefined4 * )(param_1 + 0x54) = param_6;
    *(undefined4 * )(param_1 + 0x58) = 0x1b;
    *(undefined4 * )(param_1 + 0x68) = 6;
    *(undefined4 * )(param_1 + 0x30) = 0x8000000a;
    *(undefined4 * )(param_1 + 0x5c) = param_7;
    lVar3 = FUN_1407dd8d8(param_3, 0x2e);
    if (lVar3 == 0) {
        uVar4 = FUN_1402b1940(param_1, 0x80004005);
        return uVar4;
    }
    iVar1 = FUN_14018e2c0(lVar3, L".tex");
    uVar4 = 0;
    if (iVar1 == 0) {
        *(undefined4 * )(param_1 + 0x68) = 0;
    } else {
        iVar1 = FUN_14018e2c0(lVar3, L".tga");
        if (iVar1 == 0) {
            *(undefined4 * )(param_1 + 0x68) = 1;
        } else {
            iVar1 = FUN_14018e2c0(lVar3, L".dds");
            if (iVar1 == 0) {
                *(undefined4 * )(param_1 + 0x68) = 2;
            } else {
                iVar1 = FUN_14018e2c0(lVar3, L".png");
                if (iVar1 == 0) {
                    *(undefined4 * )(param_1 + 0x68) = 3;
                } else {
                    iVar1 = FUN_14018e2c0(lVar3, L".bmp");
                    if (iVar1 == 0) {
                        *(undefined4 * )(param_1 + 0x68) = 4;
                    } else {
                        iVar1 = FUN_14018e2c0(lVar3, L".jpg");
                        if ((iVar1 != 0) && (iVar1 = FUN_14018e2c0(lVar3, L".jpeg"), iVar1 != 0)) {
                            uVar4 = FUN_1402b1940(param_1, 0x80004005);
                            return uVar4;
                        }
                        *(undefined4 * )(param_1 + 0x68) = 5;
                    }
                }
            }
        }
    }
    local_res8 = (longlong *) 0x0;
    iVar1 = FUN_14018e3e0(param_3, L"http", 4);
    if (iVar1 == 0) {
        iVar1 = FUN_1407b01f0(param_3, 1, param_1 + 0x160, &local_res8);
        if (iVar1 < 0) {
            local_18 = 0x141de66d8;
            puVar5 = &DAT_140ae7144;
        } else {
            LAB_1402aedd7:
            local_10 = &DAT_1402b0970;
            local_18 = param_1;
            iVar1 = FUN_140279d70(*(undefined8 * )(param_1 + 0x38), &local_18);
            if (-1 < iVar1) goto LAB_1402aee4d;
            local_18 = 0x141de6668;
            puVar5 = &DAT_140ae6e54;
        }
        LAB_1402aee1b:
        if (param_3 != (undefined *) 0x0) {
            puVar5 = param_3;
        }
        FUN_1401a3130(0xe, 2, &local_18, iVar1, puVar5);
        LAB_1402aee46:
        uVar2 = FUN_1402b1940(param_1, iVar1);
    } else {
        if (*(int *) (param_1 + 0x68) != 0) {
            iVar1 = FUN_1401b6de0();
            if (-1 < iVar1) goto LAB_1402aedd7;
            local_18 = 0x141de6ab8;
            puVar5 = &DAT_140ae7244;
            goto LAB_1402aee1b;
        }
        iVar1 = FUN_1401b5b50(DAT_140c63788, param_3, 1, 3, (longlong * *)(param_1 + 0x158));
        if (iVar1 < 0) goto LAB_1402aee46;
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x158) + 0x18))();
        if (uVar4 < 0x70) {
            iVar1 = -0x7fffbffb;
            goto LAB_1402aee46;
        }
        uVar2 = FUN_14029cec0(param_1);
    }
    uVar4 = (ulonglong) uVar2;
    LAB_1402aee4d:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar4;
}


ulonglong FUN_1402aee80(longlong param_1) {
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined *puVar5;
    longlong *local_res8;
    undefined8 local_res10;
    undefined4 local_38;
    undefined4 local_34;
    longlong local_30;
    undefined *local_28;
    undefined8 local_20;
    undefined4 local_18;

    iVar1 = FUN_1401c5690(0x70, param_1 + 0x160);
    if (iVar1 < 0) {
        local_res10 = 0x141de7008;
        FUN_1401a3130(0xe, 2, &local_res10, iVar1);
        uVar3 = FUN_1402b1940(param_1, iVar1);
        return uVar3;
    }
    uVar3 = 0;
    local_res8 = (longlong *) 0x0;
    iVar1 = (**(code * *)(**(longlong * *)(param_1 + 0x158) + 0x58))
            (*(longlong * *)(param_1 + 0x158), *(undefined8 * )(param_1 + 0x160), &local_res8, 0);
    if (iVar1 < 0) {
        if (*(longlong * *)(param_1 + 0x158) != (longlong *) 0x0) {
            lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x158) + 0x10))();
            if (lVar4 != 0) {
                puVar5 = (undefined * )(**(code * *)(**(longlong * *)(param_1 + 0x158) + 0x10))();
                local_res10 = 0x141de6d38;
                goto LAB_1402aefd4;
            }
        }
        puVar5 = &DAT_1409e4184;
        local_res10 = 0x141de6d38;
    } else {
        local_28 = &DAT_1402af030;
        local_38 = 0xc;
        local_34 = 2;
        local_20 = 0;
        local_18 = 1;
        local_30 = param_1;
        iVar1 = FUN_14019dca0(&local_38, 0, local_res8, param_1 + 0x170);
        if (-1 < iVar1) goto LAB_1402aefff;
        if (*(longlong * *)(param_1 + 0x158) == (longlong *) 0x0) {
            LAB_1402aefc6:
            puVar5 = &DAT_1409e416c;
        } else {
            lVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x158) + 0x10))();
            if (lVar4 == 0) goto LAB_1402aefc6;
            puVar5 = (undefined * )(**(code * *)(**(longlong * *)(param_1 + 0x158) + 0x10))();
        }
        local_res10 = 0x141de6c18;
    }
    LAB_1402aefd4:
    FUN_1401a3130(0xe, 2, &local_res10, iVar1, puVar5);
    uVar2 = FUN_1402b1940(param_1, iVar1);
    uVar3 = (ulonglong) uVar2;
    LAB_1402aefff:
    if (local_res8 != (longlong *) 0x0) {
        (**(code * *)(*local_res8 + 8))();
    }
    return uVar3;
}


ulonglong FUN_1402afd30(longlong param_1, ulonglong param_2, undefined4 param_3, int param_4,
                        int param_5, uint param_6, int param_7, uint param_8) {
    code *pcVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong local_38[2];

    if (param_5 == param_7) {
        return param_2;
    }
    pcVar1 = *(code * *)(&DAT_140c38410 + (longlong) param_5 * 8);
    uVar3 = param_2;
    if (param_6 < param_8) {
        local_38[0] = FUN_14018b280(param_4 * param_8, 0);
        FUN_140033260(param_1 + 0x198, local_38);
        uVar3 = local_38[0];
    }
    for (uVar2 = uVar3; uVar2 < param_4 * param_8 + uVar3; uVar2 = uVar2 + param_8) {
        (*pcVar1)(uVar2, param_2, param_3);
        param_2 = param_2 + param_6;
    }
    return uVar3;
}


ulonglong FUN_1402afe20(longlong param_1, ulonglong param_2, undefined8 param_3, int param_4,
                        int param_5, int param_6, uint param_7, uint param_8, int param_9, uint param_10,
                        uint param_11) {
    ulonglong uVar1;
    code *pcVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong local_68;
    ulonglong local_60;
    code *local_58;
    ulonglong local_50;
    ulonglong local_48;
    ulonglong local_40;
    ulonglong local_38;

    if (param_6 != param_9) {
        uVar4 = (ulonglong) param_11;
        uVar5 = (ulonglong) param_8;
        local_58 = *(code * *)(&DAT_140c38410 + (longlong) param_6 * 8);
        local_68 = param_2;
        local_60 = param_2;
        if (param_8 < param_11) {
            local_68 = FUN_14018b280(param_5 * param_11, 0);
            FUN_140033260(param_1 + 0x198, &local_68);
        }
        uVar3 = param_5 * param_11 + local_68;
        if (local_68 < uVar3) {
            uVar8 = (ulonglong)(param_4 * param_10);
            uVar7 = local_68;
            local_50 = uVar3;
            local_48 = uVar4;
            local_40 = uVar5;
            local_38 = uVar8;
            do {
                pcVar2 = local_58;
                uVar1 = uVar8 + uVar7;
                uVar9 = param_2;
                if (uVar7 < uVar1) {
                    uVar6 = uVar7;
                    do {
                        (*pcVar2)(uVar6, param_2);
                        uVar6 = uVar6 + param_10;
                        param_2 = param_2 + param_7;
                        uVar3 = local_50;
                        uVar4 = local_48;
                        uVar5 = local_40;
                        uVar8 = local_38;
                        uVar9 = local_60;
                    } while (uVar6 < uVar1);
                }
                param_2 = uVar9 + uVar5;
                uVar7 = uVar7 + uVar4;
                local_60 = param_2;
            } while (uVar7 < uVar3);
        }
        return local_68;
    }
    return param_2;
}


void FUN_1402b08b0(longlong param_1, longlong *param_2) {
    longlong *plVar1;
    int iVar2;
    undefined8 local_res10[3];

    if (param_2 != (longlong *) 0x0) {
        iVar2 = (**(code * *)(*param_2 + 0x28))(param_2, 0);
        if (iVar2 < 0) {
            local_res10[0] = 0x141de72c0;
            goto LAB_1402b08dd;
        }
    }
    if (*(int *) (param_1 + 0x48) != 0) {
        FUN_1402b1940(param_1, 0x80004005);
        return;
    }
    plVar1 = *(longlong * *)(*(longlong * )(param_1 + 0x38) + 0x18c0);
    iVar2 = (**(code * *)(*plVar1 + 0x28))(plVar1, param_1 + 0x6c, param_1 + 0x98, param_1 + 0x40);
    if (-1 < iVar2) {
        FUN_1402b1940(param_1, 0);
        return;
    }
    local_res10[0] = 0x141de72b0;
    LAB_1402b08dd:
    FUN_1401a3130(0xe, 2, local_res10, iVar2);
    FUN_1402b1940(param_1, iVar2);
    return;
}


undefined4 FUN_1402b1940(longlong param_1, undefined4 param_2) {
    int *piVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(longlong * )(param_1 + 0x1a0) != 0) {
        do {
            FUN_14018b900(*(undefined8 * )(*(longlong * )(param_1 + 0x198) + uVar4 * 8));
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong * )(param_1 + 0x1a0));
    }
    *(undefined8 * )(param_1 + 0x1a0) = 0;
    if (*(longlong * *)(param_1 + 0x158) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x158) + 8))();
        *(undefined8 * )(param_1 + 0x158) = 0;
    }
    if (*(longlong * *)(param_1 + 0x160) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x160) + 8))();
        *(undefined8 * )(param_1 + 0x160) = 0;
    }
    *(undefined4 * )(param_1 + 0x30) = param_2;
    iVar2 = *(int *) (param_1 + 0x168);
    while (iVar2 != 0) {
        LOCK();
        piVar1 = (int *) (param_1 + 0x168);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x170) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x170) + 8))();
                *(undefined8 * )(param_1 + 0x170) = 0;
            }
            break;
        }
        iVar2 = *(int *) (param_1 + 0x168);
    }
    iVar2 = *(int *) (param_1 + 0x178);
    while (iVar2 != 0) {
        LOCK();
        piVar1 = (int *) (param_1 + 0x178);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 0x180) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 0x180) + 8))();
                *(undefined8 * )(param_1 + 0x180) = 0;
            }
            break;
        }
        iVar2 = *(int *) (param_1 + 0x178);
    }
    iVar2 = *(int *) (param_1 + 0x188);
    do {
        if (iVar2 == 0) {
            LAB_1402b1aba:
            FUN_14029cd30(param_1);
            *(undefined4 * )(param_1 + 0x18) = 1;
            return param_2;
        }
        LOCK();
        piVar1 = (int *) (param_1 + 0x188);
        if (iVar2 == *piVar1) {
            *piVar1 = iVar2 + -1;
            iVar3 = iVar2;
        } else {
            iVar3 = *piVar1;
        }
        if (iVar2 == iVar3) {
            if ((iVar2 + -1 == 0) && (*(longlong * *)(param_1 + 400) != (longlong *) 0x0)) {
                (**(code * *)(**(longlong * *)(param_1 + 400) + 8))();
                *(undefined8 * )(param_1 + 400) = 0;
            }
            goto LAB_1402b1aba;
        }
        iVar2 = *(int *) (param_1 + 0x188);
    } while (true);
}


int FUN_1402b1de0(longlong *param_1, undefined8 param_2) {
    int iVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 local_res8;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x20))(param_1, local_18);
    if (param_1[8] == 0) {
        return -0x7fffbffb;
    }
    iVar1 = FUN_14027a1a0(param_1[7], param_2);
    if (-1 < iVar1) {
        return 0;
    }
    if ((longlong *) param_1[0x2b] != (longlong *) 0x0) {
        lVar2 = (**(code * *)(*(longlong *) param_1[0x2b] + 0x10))();
        if (lVar2 != 0) {
            puVar3 = (undefined * )(**(code * *)(*(longlong *) param_1[0x2b] + 0x10))();
            goto LAB_1402b1e5b;
        }
    }
    puVar3 = &DAT_1409e429c;
    LAB_1402b1e5b:
    local_res8 = 0x141de7380;
    FUN_1401a3130(0xe, 2, &local_res8, iVar1, puVar3);
    return iVar1;
}


void FUN_1402b1ea0(longlong *param_1) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_1[1] != 0) {
        do {
            lVar1 = *param_1;
            lVar2 = *(longlong * )(uVar4 + 0x48 + lVar1);
            *(undefined8 * )(uVar4 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 8 + lVar1) = 0;
            if (lVar2 != 0) {
                FUN_14018b900(lVar2, 0);
                *(undefined8 * )(uVar4 + 0x48 + lVar1) = 0;
            }
            lVar2 = *(longlong * )(uVar4 + 0x50 + lVar1);
            if (lVar2 != 0) {
                FUN_14018b900(lVar2, 0);
                *(undefined8 * )(uVar4 + 0x50 + lVar1) = 0;
            }
            uVar3 = uVar3 + 1;
            *(undefined8 * )(uVar4 + 0x10 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 0x18 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 0x20 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 0x28 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 0x30 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 0x38 + lVar1) = 0;
            *(undefined8 * )(uVar4 + 0x40 + lVar1) = 0;
            uVar4 = uVar4 + 0x58;
        } while (uVar3 < (ulonglong) param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001402b1f67. Too many branches
    // WARNING: Treating indirect jump as call
    (***(code * **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
}


undefined4 FUN_1402b1f70(longlong *param_1) {
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    plVar1 = &DAT_140c406a0;
    uVar3 = uVar2;
    do {
        if ((*plVar1 == *param_1) && (plVar1[1] == param_1[1])) {
            return (&DAT_140c406b0)[uVar3 * 6];
        }
        uVar2 = uVar2 + 0x18;
        uVar3 = uVar3 + 1;
        plVar1 = plVar1 + 3;
    } while (uVar2 < 0x180);
    if (((DAT_140c63663 != '\0') && (*param_1 == 0x4acfe8dbe3fed78f)) &&
        (param_1[1] == 0x27b336617fe9c184)) {
        return 6;
    }
    return 0;
}


undefined8 FUN_1402b1fe0(int param_1, undefined4 *param_2) {
    undefined4 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    switch (param_1) {
        case 6:
            if (DAT_140c63663 != '\0') {
                *param_2 = 0xe3fed78f;
                param_2[1] = 0x4acfe8db;
                param_2[2] = 0x7fe9c184;
                param_2[3] = 0x27b33661;
                return 0x27b33601;
            }
            break;
        default:
            uVar2 = 0;
            uVar3 = uVar2;
            do {
                if (*(int *) ((longlong) & DAT_140c406b0 + uVar2) == param_1) {
                    *param_2 = *(undefined4 * )(&DAT_140c406a0 + uVar3 * 3);
                    param_2[1] = *(undefined4 * )((longlong) & DAT_140c406a0 + uVar3 * 0x18 + 4);
                    param_2[2] = *(undefined4 * )(&DAT_140c406a8 + uVar3 * 3);
                    uVar1 = *(undefined4 * )((longlong) & DAT_140c406a8 + uVar3 * 0x18 + 4);
                    param_2[3] = uVar1;
                    return CONCAT71((uint7)(uint3)((uint) uVar1 >> 8), 1);
                }
                uVar2 = uVar2 + 0x18;
                uVar3 = uVar3 + 1;
            } while (uVar2 < 0x180);
            break;
        case 0x1d:
            *param_2 = 0xf5c7ad2d;
            param_2[1] = 0x43dd6a8d;
            param_2[2] = 0x99a2a8a7;
            param_2[3] = 0xe91a2635;
            return 0xe91a2601;
        case 0x28:
            *param_2 = 0x6fddc324;
            param_2[1] = 0x4bfe4e03;
            param_2[2] = 0x773d85b1;
            param_2[3] = 0x11c98d76;
            return 0x11c98d01;
        case 0x37:
            *param_2 = 0x6fddc324;
            param_2[1] = 0x4bfe4e03;
            param_2[2] = 0x773d85b1;
            param_2[3] = 0xbc98d76;
            return 0xbc98d01;
        case 0x5b:
            *param_2 = 0x6fddc324;
            param_2[1] = 0x4bfe4e03;
            param_2[2] = 0x773d85b1;
            param_2[3] = 0xfc98d76;
            return 0xfc98d01;
        case 0x5d:
            *param_2 = 0x6fddc324;
            param_2[1] = 0x4bfe4e03;
            param_2[2] = 0x773d85b1;
            param_2[3] = 0xec98d76;
            return 0xec98d01;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return 0;
}


longlong FUN_1402b21e0(void) {
    HRESULT HVar1;

    if (DAT_140c8a558 == 0) {
        HVar1 = CoCreateInstance((IID * ) & DAT_140964b50, (LPUNKNOWN) 0x0, 1, (IID * ) & DAT_140b62038,
                                 (LPVOID * ) & DAT_140c8a558);
        if (HVar1 < 0) {
            HVar1 = CoCreateInstance((IID * ) & DAT_140964b40, (LPUNKNOWN) 0x0, 1, (IID * ) & DAT_140b62048,
                                     (LPVOID * ) & DAT_140c8a558);
            if (HVar1 < 0) {
                DAT_140c8a558 = 0;
                return 0;
            }
        } else {
            DAT_140c63663 = 1;
        }
    }
    return DAT_140c8a558;
}


void FUN_1402b2280(int param_1) {
    // WARNING: Could not recover jumptable at 0x0001402b2294. Too many branches
    // WARNING: Treating indirect jump as call
    (*(code * )(IMAGE_DOS_HEADER_140000000.e_magic + *(uint * )(&DAT_1402b22d8 + (longlong) param_1 * 4))
    )(IMAGE_DOS_HEADER_140000000.e_magic + *(uint * )(&DAT_1402b22d8 + (longlong) param_1 * 4));
    return;
}


undefined8 FUN_1402b2300(undefined4 param_1) {
    switch (param_1) {
        case 1:
        case 2:
        case 3:
        case 4:
            return 0x80;
        case 5:
        case 6:
        case 7:
        case 8:
            return 0x60;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
            return 0x40;
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
            return 0x20;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x55:
        case 0x56:
        case 0x73:
            return 0x10;
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
            return 8;
        case 0x42:
            return 1;
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x4f:
        case 0x50:
        case 0x51:
            return 4;
        default:
            return 0;
    }
}


void FUN_1402b23f0(int param_1, longlong param_2, longlong param_3, ulonglong *param_4,
                   longlong *param_5, uint param_6) {
    ulonglong *puVar1;
    ulonglong uVar2;
    int iVar3;
    longlong lVar4;
    ulonglong local_28;
    ulonglong local_20;
    ulonglong local_18;
    ulonglong local_10[2];

    if ((0x45 < param_1) && ((param_1 < 0x55 || (param_1 - 0x5eU < 6)))) {
        if ((param_1 - 0x46U < 3) || (iVar3 = 0x10, param_1 - 0x4fU < 3)) {
            iVar3 = 8;
        }
        local_28 = param_2 + 3U >> 2;
        local_18 = param_3 + 3U >> 2;
        puVar1 = &local_28;
        if (local_28 < 2) {
            puVar1 = &local_20;
        }
        local_20 = 1;
        uVar2 = *puVar1;
        local_10[0] = 1;
        puVar1 = &local_18;
        if (local_18 < 2) {
            puVar1 = local_10;
        }
        *param_4 = uVar2 * (longlong) iVar3;
        *param_5 = *puVar1 * uVar2 * (longlong) iVar3;
        return;
    }
    if (param_1 - 0x44U < 2) {
        uVar2 = (param_2 + 1U >> 1) * 4;
        *param_4 = uVar2;
        *param_5 = uVar2 * param_3;
        return;
    }
    uVar2 = (ulonglong) param_6;
    if ((param_6 >> 0x10 & 1) == 0) {
        if ((param_6 >> 0x11 & 1) == 0) {
            if ((param_6 >> 0x12 & 1) == 0) {
                lVar4 = FUN_1402b2300();
            } else {
                lVar4 = 8;
            }
        } else {
            lVar4 = 0x10;
        }
    } else {
        lVar4 = 0x18;
    }
    if ((uVar2 & 1) != 0) {
        uVar2 = (lVar4 * param_2 + 0x1fU >> 5) * 4;
        *param_4 = uVar2;
        *param_5 = uVar2 * param_3;
        return;
    }
    uVar2 = lVar4 * param_2 + 7U >> 3;
    *param_4 = uVar2;
    *param_5 = uVar2 * param_3;
    return;
}


undefined4 FUN_1402b2540(undefined4 param_1) {
    switch (param_1) {
        case 9:
            return 0xb;
        default:
            return param_1;
        case 0x17:
            return 0x18;
        case 0x1b:
            return 0x1c;
        case 0x21:
            return 0x23;
        case 0x30:
            return 0x31;
        case 0x35:
            return 0x38;
        case 0x3c:
            return 0x3d;
        case 0x46:
            return 0x47;
        case 0x49:
            return 0x4a;
        case 0x4c:
            return 0x4d;
        case 0x4f:
            return 0x50;
        case 0x52:
            return 0x53;
        case 0x5a:
            return 0x57;
        case 0x5c:
            return 0x58;
        case 0x61:
            return 0x62;
    }
}


undefined4 FUN_1402b2660(undefined4 param_1) {
    switch (param_1) {
        case 1:
            return 2;
        default:
            return param_1;
        case 5:
            return 6;
        case 9:
            return 10;
        case 0xf:
            return 0x10;
        case 0x21:
            return 0x22;
        case 0x27:
            return 0x29;
        case 0x35:
            return 0x36;
    }
}


void FUN_1402b2710(longlong *param_1) {
    if (*param_1 != 0) {
        FUN_14018b900(*param_1, 0);
        *param_1 = 0;
        param_1[1] = 0;
        return;
    }
    param_1[1] = 0;
    return;
}


undefined8 FUN_1402b2750(longlong *param_1, longlong param_2) {
    longlong lVar1;

    if (param_2 == 0) {
        return 0x80070057;
    }
    if (*param_1 != 0) {
        FUN_14018b900(*param_1, 0);
        *param_1 = 0;
    }
    param_1[1] = 0;
    lVar1 = FUN_14018b280(param_2, 1);
    *param_1 = lVar1;
    if (lVar1 == 0) {
        param_1[1] = 0;
        return 0x8007000e;
    }
    param_1[1] = param_2;
    return 0;
}



// WARNING: Switch with 1 destination removed at 0x0001402b27ec : 15 cases all go to same
// destination

ulonglong FUN_1402b27d0(int param_1) {
    ulonglong in_RAX;

    if (0xe < param_1 - 100U) {
        return in_RAX & 0xffffffffffffff00;
    }
    return CONCAT71((int7)(int3)(param_1 - 100U >> 8), 1);
}


void FUN_1402b2830(ulonglong *param_1, undefined4 param_2, longlong *param_3, longlong *param_4,
                   int param_5) {
    undefined4 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong local_58;
    longlong local_50;
    undefined local_48[16];

    lVar7 = 0;
    if (param_5 < 4) {
        local_58 = param_1[3];
        lVar6 = 0;
        if (local_58 != 0) {
            uVar3 = param_1[4];
            lVar6 = lVar7;
            do {
                uVar5 = *param_1;
                uVar4 = param_1[1];
                if (uVar3 != 0) {
                    uVar1 = *(undefined4 * )(param_1 + 6);
                    lVar6 = lVar6 + uVar3;
                    do {
                        FUN_1402b23f0(uVar1, uVar5, uVar4, local_48, &local_50, param_2);
                        lVar7 = lVar7 + local_50;
                        if (1 < uVar4) {
                            uVar4 = uVar4 >> 1;
                        }
                        if (1 < uVar5) {
                            uVar5 = uVar5 >> 1;
                        }
                        uVar3 = uVar3 - 1;
                    } while (uVar3 != 0);
                    uVar3 = param_1[4];
                }
                local_58 = local_58 - 1;
            } while (local_58 != 0);
        }
    } else {
        lVar6 = lVar7;
        if (param_5 == 4) {
            uVar3 = param_1[4];
            uVar5 = *param_1;
            uVar4 = param_1[1];
            uVar2 = param_1[2];
            lVar6 = 0;
            if (uVar3 != 0) {
                uVar1 = *(undefined4 * )(param_1 + 6);
                lVar6 = lVar7;
                do {
                    FUN_1402b23f0(uVar1, uVar5, uVar4, &local_50, &local_58, param_2);
                    if (uVar2 != 0) {
                        lVar7 = lVar7 + local_58 * uVar2;
                        lVar6 = lVar6 + uVar2;
                    }
                    if (1 < uVar4) {
                        uVar4 = uVar4 >> 1;
                    }
                    if (1 < uVar5) {
                        uVar5 = uVar5 >> 1;
                    }
                    if (1 < uVar2) {
                        uVar2 = uVar2 >> 1;
                    }
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
            }
        }
    }
    *param_3 = lVar6;
    *param_4 = lVar7;
    return;
}


undefined8
FUN_1402b29b0(ulonglong param_1, longlong param_2, ulonglong *param_3, undefined4 param_4,
              longlong param_5, ulonglong param_6) {
    ulonglong uVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong local_40;
    undefined8 local_38;
    undefined4 *local_30;

    if (param_5 == 0) {
        return 0;
    }
    uVar1 = param_1 + param_2;
    uVar6 = 0;
    iVar2 = *(int *) ((longlong) param_3 + 0x34);
    if (iVar2 < 2) {
        LAB_1402b2c36:
        uVar5 = 0;
    } else {
        if (iVar2 < 4) {
            if ((param_3[3] == 0) || (uVar9 = param_3[4], uVar9 == 0)) goto LAB_1402b2c36;
            local_40 = 0;
            if (param_3[3] != 0) {
                do {
                    uVar8 = *param_3;
                    uVar7 = param_3[1];
                    uVar11 = 0;
                    if (uVar9 != 0) {
                        puVar4 = (undefined4 * )(param_5 + 0x10 + uVar6 * 0x30);
                        do {
                            if (param_6 <= uVar6) goto LAB_1402b2c36;
                            FUN_1402b23f0(*(undefined4 * )(param_3 + 6), uVar8, uVar7, &local_38, &local_30, param_4);
                            *(ulonglong * )(puVar4 + -4) = uVar8;
                            *(ulonglong * )(puVar4 + -2) = uVar7;
                            uVar3 = *(undefined4 * )(param_3 + 6);
                            *(ulonglong * )(puVar4 + 6) = param_1;
                            *puVar4 = uVar3;
                            uVar6 = uVar6 + 1;
                            *(undefined8 * )(puVar4 + 2) = local_38;
                            param_1 = param_1 + (longlong) local_30;
                            *(undefined4 * *)(puVar4 + 4) = local_30;
                            if (uVar1 < param_1) goto LAB_1402b2c36;
                            if (1 < uVar7) {
                                uVar7 = uVar7 >> 1;
                            }
                            if (1 < uVar8) {
                                uVar8 = uVar8 >> 1;
                            }
                            uVar9 = param_3[4];
                            uVar11 = uVar11 + 1;
                            puVar4 = puVar4 + 0xc;
                        } while (uVar11 < uVar9);
                    }
                    local_40 = local_40 + 1;
                } while (local_40 < param_3[3]);
            }
        } else {
            if (((iVar2 != 4) || (param_3[4] == 0)) || (uVar9 = param_3[2], uVar9 == 0))
                goto LAB_1402b2c36;
            uVar8 = *param_3;
            uVar7 = param_3[1];
            uVar11 = 0;
            if (param_3[4] != 0) {
                do {
                    FUN_1402b23f0(*(undefined4 * )(param_3 + 6), uVar8, uVar7, &local_38, &local_40, param_4);
                    uVar10 = 0;
                    if (uVar9 != 0) {
                        puVar4 = (undefined4 * )(uVar6 * 0x30 + param_5 + 0x10);
                        do {
                            if (param_6 <= uVar6) goto LAB_1402b2c36;
                            *(ulonglong * )(puVar4 + -4) = uVar8;
                            *(ulonglong * )(puVar4 + -2) = uVar7;
                            uVar3 = *(undefined4 * )(param_3 + 6);
                            *(ulonglong * )(puVar4 + 6) = param_1;
                            param_1 = param_1 + local_40;
                            *(undefined8 * )(puVar4 + 2) = local_38;
                            *puVar4 = uVar3;
                            *(ulonglong * )(puVar4 + 4) = local_40;
                            puVar4 = puVar4 + 0xc;
                            uVar6 = uVar6 + 1;
                            if (uVar1 < param_1) goto LAB_1402b2c36;
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < uVar9);
                    }
                    if (1 < uVar7) {
                        uVar7 = uVar7 >> 1;
                    }
                    if (1 < uVar8) {
                        uVar8 = uVar8 >> 1;
                    }
                    if (1 < uVar9) {
                        uVar9 = uVar9 >> 1;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < param_3[4]);
            }
        }
        uVar5 = 1;
    }
    return uVar5;
}


undefined8 FUN_1402b2c70(ulonglong *param_1, ulonglong *param_2) {
    int iVar1;
    uint uVar2;
    char cVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong local_res10;
    ulonglong local_res18[2];
    ulonglong in_stack_ffffffffffffffd8;

    if ((0x72 < (longlong) * (int *) (param_2 + 6) - 1U) || (cVar3 = FUN_1402b27d0(), cVar3 != '\0')) {
        return 0x80070057;
    }
    iVar1 = *(int *) ((longlong) param_2 + 0x34);
    local_res10 = param_2[4];
    uVar7 = local_res10;
    if (iVar1 == 2) {
        uVar6 = *param_2;
        if (uVar6 == 0) {
            return 0x80070057;
        }
        if (param_2[1] != 1) {
            return 0x80070057;
        }
        if (param_2[2] != 1) {
            return 0x80070057;
        }
        if (param_2[3] == 0) {
            return 0x80070057;
        }
        if (1 < local_res10) {
            uVar8 = 1;
            uVar4 = 1;
            do {
                if (uVar8 < 2) {
                    if (uVar6 < 2) goto code_r0x0001402b2e2f;
                    LAB_1402b2e4f:
                    uVar6 = uVar6 >> 1;
                } else {
                    uVar8 = 0;
                    if (1 < uVar6) goto LAB_1402b2e4f;
                }
                uVar4 = uVar4 + 1;
            } while (true);
        }
        if (local_res10 == 0) {
            uVar8 = 1;
            uVar7 = 1;
            while (true) {
                while (1 < uVar8) {
                    uVar8 = 0;
                    if (1 < uVar6) {
                        uVar6 = uVar6 >> 1;
                    }
                    uVar7 = uVar7 + 1;
                }
                if (uVar6 < 2) break;
                uVar6 = uVar6 >> 1;
                uVar7 = uVar7 + 1;
            }
        } else {
            uVar7 = 1;
        }
    } else if (iVar1 == 3) {
        uVar6 = *param_2;
        if (uVar6 == 0) {
            return 0x80070057;
        }
        uVar8 = param_2[1];
        if (uVar8 == 0) {
            return 0x80070057;
        }
        if (param_2[2] != 1) {
            return 0x80070057;
        }
        uVar4 = param_2[3];
        if (uVar4 == 0) {
            return 0x80070057;
        }
        if (((*(uint * )(param_2 + 5) >> 2 & 1) != 0) && (uVar4 != (uVar4 / 6) * 6)) {
            return 0x80070057;
        }
        if (1 < local_res10) {
            uVar4 = 1;
            do {
                if (uVar8 < 2) {
                    if (uVar6 < 2) goto code_r0x0001402b2d91;
                    LAB_1402b2db5:
                    uVar6 = uVar6 >> 1;
                } else {
                    uVar8 = uVar8 >> 1;
                    if (1 < uVar6) goto LAB_1402b2db5;
                }
                uVar4 = uVar4 + 1;
            } while (true);
        }
        uVar7 = 1;
        if (local_res10 == 0) {
            while (true) {
                while (1 < uVar8) {
                    uVar8 = uVar8 >> 1;
                    if (1 < uVar6) {
                        uVar6 = uVar6 >> 1;
                    }
                    uVar7 = uVar7 + 1;
                }
                if (uVar6 < 2) break;
                uVar6 = uVar6 >> 1;
                uVar7 = uVar7 + 1;
            }
        }
    } else {
        if (iVar1 != 4) {
            return 0x80070032;
        }
        if ((((*param_2 == 0) || (param_2[1] == 0)) || (param_2[2] == 0)) ||
            ((param_2[3] != 1 || (cVar3 = FUN_1402c1120(), uVar7 = local_res10, cVar3 == '\0')))) {
            return 0x80070057;
        }
    }
    LAB_1402b2e8d:
    FUN_1402b34d0(param_1);
    param_1[2] = *param_2;
    param_1[3] = param_2[1];
    param_1[4] = param_2[2];
    uVar6 = param_2[3];
    param_1[6] = uVar7;
    param_1[5] = uVar6;
    *(undefined4 * )(param_1 + 7) = *(undefined4 * )(param_2 + 5);
    *(undefined4 * )((longlong) param_1 + 0x3c) = *(undefined4 * )((longlong) param_2 + 0x2c);
    *(undefined4 * )(param_1 + 8) = *(undefined4 * )(param_2 + 6);
    uVar2 = *(uint * )((longlong) param_2 + 0x34);
    *(uint * )((longlong) param_1 + 0x44) = uVar2;
    if ((int) uVar2 < 2) {
        uVar7 = 0;
        local_res18[0] = uVar7;
    } else {
        FUN_1402b2830(param_1 + 2, 0, local_res18, &local_res10,
                      in_stack_ffffffffffffffd8 & 0xffffffff00000000 | (ulonglong) uVar2);
        uVar7 = local_res10;
    }
    uVar5 = SUB168(ZEXT816(0x30) * ZEXT816(local_res18[0]), 0);
    if (SUB168(ZEXT816(0x30) * ZEXT816(local_res18[0]) >> 0x40, 0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar5, 1);
    param_1[9] = uVar6;
    if (uVar6 != 0) {
        *param_1 = local_res18[0];
        FUN_1407e4830(uVar6, 0, local_res18[0] * 0x30);
        uVar6 = FUN_14018b280(uVar7, 1);
        param_1[10] = uVar6;
        if (uVar6 != 0) {
            param_1[1] = uVar7;
            cVar3 = FUN_1402b29b0(uVar6, uVar7, param_1 + 2, 0, param_1[9], local_res18[0]);
            if (cVar3 != '\0') {
                return 0;
            }
            FUN_1402b34d0(param_1);
            return 0x80004005;
        }
        FUN_1402b34d0(param_1);
    }
    return 0x8007000e;
    code_r0x0001402b2d91:
    if (uVar4 < local_res10) {
        return 0x80070057;
    }
    goto LAB_1402b2e8d;
    code_r0x0001402b2e2f:
    if (uVar4 < local_res10) {
        return 0x80070057;
    }
    goto LAB_1402b2e8d;
}


undefined8
FUN_1402b2fe0(ulonglong *param_1, int param_2, ulonglong param_3, ulonglong param_4, ulonglong param_5,
              ulonglong param_6) {
    char cVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong in_stack_ffffffffffffffc8;
    ulonglong local_28;
    ulonglong local_20;

    if (((((longlong) param_2 - 1U < 0x73) &&
          (cVar1 = FUN_1402b27d0((longlong) param_2 & 0xffffffff), cVar1 == '\0')) && (param_3 != 0)) &&
        (((param_4 != 0 && (param_5 != 0)) &&
          (cVar1 = FUN_1402c10b0(param_3, param_4, &param_6), cVar1 != '\0')))) {
        FUN_1402b34d0(param_1);
        param_1[3] = param_4;
        uVar4 = 0;
        param_1[6] = param_6;
        param_1[2] = param_3;
        param_1[4] = 1;
        param_1[5] = param_5;
        *(int *) (param_1 + 8) = param_2;
        param_1[7] = 0;
        *(undefined4 * )((longlong) param_1 + 0x44) = 3;
        uVar5 = uVar4;
        if (1 < (int) *(uint * )((longlong) param_1 + 0x44)) {
            FUN_1402b2830(param_1 + 2, 0, &local_20, &local_28,
                          in_stack_ffffffffffffffc8 & 0xffffffff00000000 |
                          (ulonglong) * (uint * )((longlong) param_1 + 0x44));
            uVar4 = local_20;
            uVar5 = local_28;
        }
        uVar2 = SUB168(ZEXT816(0x30) * ZEXT816(uVar4), 0);
        if (SUB168(ZEXT816(0x30) * ZEXT816(uVar4) >> 0x40, 0) != 0) {
            uVar2 = 0xffffffffffffffff;
        }
        uVar3 = FUN_14018b280(uVar2, 1);
        param_1[9] = uVar3;
        if (uVar3 != 0) {
            *param_1 = uVar4;
            FUN_1407e4830(uVar3, 0, uVar4 * 0x30);
            uVar3 = FUN_14018b280(uVar5, 1);
            param_1[10] = uVar3;
            if (uVar3 != 0) {
                param_1[1] = uVar5;
                cVar1 = FUN_1402b29b0(uVar3, uVar5, param_1 + 2, 0, param_1[9], uVar4);
                if (cVar1 == '\0') {
                    FUN_1402b34d0(param_1);
                    return 0x80004005;
                }
                return 0;
            }
            FUN_1402b34d0(param_1);
        }
        uVar2 = 0x8007000e;
    } else {
        uVar2 = 0x80070057;
    }
    return uVar2;
}


undefined8
FUN_1402b3170(ulonglong *param_1, int param_2, ulonglong param_3, ulonglong param_4, ulonglong param_5,
              ulonglong param_6) {
    char cVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong in_stack_ffffffffffffffc8;
    ulonglong local_28;
    ulonglong local_20;

    if (((((longlong) param_2 - 1U < 0x73) &&
          (cVar1 = FUN_1402b27d0((longlong) param_2 & 0xffffffff), cVar1 == '\0')) && (param_3 != 0)) &&
        (((param_4 != 0 && (param_5 != 0)) &&
          (cVar1 = FUN_1402c1120(param_3, param_4, param_5, &param_6), cVar1 != '\0')))) {
        FUN_1402b34d0(param_1);
        param_1[4] = param_5;
        uVar4 = 0;
        param_1[6] = param_6;
        param_1[2] = param_3;
        param_1[3] = param_4;
        param_1[5] = 1;
        *(int *) (param_1 + 8) = param_2;
        param_1[7] = 0;
        *(undefined4 * )((longlong) param_1 + 0x44) = 4;
        uVar5 = uVar4;
        if (1 < (int) *(uint * )((longlong) param_1 + 0x44)) {
            FUN_1402b2830(param_1 + 2, 0, &local_20, &local_28,
                          in_stack_ffffffffffffffc8 & 0xffffffff00000000 |
                          (ulonglong) * (uint * )((longlong) param_1 + 0x44));
            uVar4 = local_20;
            uVar5 = local_28;
        }
        uVar2 = SUB168(ZEXT816(0x30) * ZEXT816(uVar4), 0);
        if (SUB168(ZEXT816(0x30) * ZEXT816(uVar4) >> 0x40, 0) != 0) {
            uVar2 = 0xffffffffffffffff;
        }
        uVar3 = FUN_14018b280(uVar2, 1);
        param_1[9] = uVar3;
        if (uVar3 != 0) {
            *param_1 = uVar4;
            FUN_1407e4830(uVar3, 0, uVar4 * 0x30);
            uVar3 = FUN_14018b280(uVar5, 1);
            param_1[10] = uVar3;
            if (uVar3 != 0) {
                param_1[1] = uVar5;
                cVar1 = FUN_1402b29b0(uVar3, uVar5, param_1 + 2, 0, param_1[9], uVar4);
                if (cVar1 == '\0') {
                    FUN_1402b34d0(param_1);
                    return 0x80004005;
                }
                return 0;
            }
        }
        FUN_1402b34d0(param_1);
        uVar2 = 0x8007000e;
    } else {
        uVar2 = 0x80070057;
    }
    return uVar2;
}


undefined8 FUN_1402b3300(longlong param_1, longlong *param_2, ulonglong param_3) {
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;

    if ((param_2 == (longlong *) 0x0) || (param_3 == 0)) {
        return 0x80070057;
    }
    lVar2 = param_2[1];
    plVar3 = param_2 + 2;
    uVar11 = 0;
    uVar1 = *(uint *) plVar3;
    if (param_3 != 0) {
        do {
            if (plVar3[3] == 0) {
                return 0x80004003;
            }
            if (((*(uint *) plVar3 != uVar1) || (plVar3[-2] != *param_2)) || (plVar3[-1] != lVar2)) {
                return 0x80004005;
            }
            uVar11 = uVar11 + 1;
            plVar3 = plVar3 + 6;
        } while (uVar11 < param_3);
    }
    uVar11 = 0;
    uVar13 = param_3;
    uVar4 = FUN_1402b3170(param_1, uVar1, *param_2, lVar2, param_3, 1);
    if (-1 < (int) uVar4) {
        uVar12 = 0;
        if (param_3 != 0) {
            lVar7 = 0;
            do {
                lVar10 = *(longlong * )((longlong) param_2 + lVar7 + 0x28);
                if (lVar10 == 0) {
                    return 0x80004003;
                }
                lVar9 = *(longlong * )(*(longlong * )(param_1 + 0x48) + 0x28 + lVar7);
                if (lVar9 == 0) {
                    return 0x80004003;
                }
                if (lVar2 != 0) {
                    lVar6 = *(longlong * )((longlong) param_2 + lVar7 + 0x18);
                    lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x48) + 0x18 + lVar7);
                    lVar8 = lVar2;
                    do {
                        uVar11 = uVar11 & 0xffffffff00000000;
                        uVar13 = uVar13 & 0xffffffff00000000 | (ulonglong) uVar1;
                        FUN_1402c2a00(lVar9, lVar5, lVar10, lVar6, uVar13, uVar11);
                        lVar6 = *(longlong * )((longlong) param_2 + lVar7 + 0x18);
                        lVar5 = *(longlong * )(*(longlong * )(param_1 + 0x48) + 0x18 + lVar7);
                        lVar10 = lVar10 + lVar6;
                        lVar9 = lVar9 + lVar5;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
                uVar12 = uVar12 + 1;
                lVar7 = lVar7 + 0x30;
            } while (uVar12 < param_3);
        }
        uVar4 = 0;
    }
    return uVar4;
}


void FUN_1402b34d0(undefined8 *param_1) {
    *param_1 = 0;
    param_1[1] = 0;
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
        param_1[9] = 0;
    }
    if (param_1[10] != 0) {
        FUN_14018b900(param_1[10], 0);
        param_1[10] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    return;
}


longlong FUN_1402b3540(longlong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4) {
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;

    if (param_2 < *(ulonglong * )(param_1 + 0x30)) {
        iVar1 = *(int *) (param_1 + 0x44);
        lVar3 = 0;
        if (1 < iVar1) {
            if (iVar1 < 4) {
                if ((param_4 == 0) && (param_3 < *(ulonglong * )(param_1 + 0x28))) {
                    return (*(ulonglong * )(param_1 + 0x30) * param_3 + param_2) * 0x30 +
                           *(longlong * )(param_1 + 0x48);
                }
            } else if ((iVar1 == 4) && (param_3 == 0)) {
                uVar2 = *(ulonglong * )(param_1 + 0x20);
                if (param_2 != 0) {
                    do {
                        lVar3 = lVar3 + uVar2;
                        if (1 < uVar2) {
                            uVar2 = uVar2 >> 1;
                        }
                        param_2 = param_2 - 1;
                    } while (param_2 != 0);
                }
                if (param_4 < uVar2) {
                    return (lVar3 + param_4) * 0x30 + *(longlong * )(param_1 + 0x48);
                }
            }
        }
    }
    return 0;
}


undefined8 FUN_1402b35c0(undefined4 param_1) {
    switch (param_1) {
        case 1:
        case 5:
        case 9:
        case 0xf:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x1b:
        case 0x21:
        case 0x27:
        case 0x2c:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x35:
        case 0x3c:
        case 0x46:
        case 0x49:
        case 0x4c:
        case 0x4f:
        case 0x52:
        case 0x5a:
        case 0x5c:
        case 0x5e:
        case 0x61:
            return 1;
        default:
            return 0;
    }
}


undefined8 FUN_1402b3660(longlong *param_1, longlong param_2, longlong param_3, longlong param_4) {
    int iVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    ulonglong uVar11;
    uint uVar12;
    longlong lVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong local_68;
    ulonglong local_60;
    ulonglong local_58;
    ulonglong local_50;
    longlong local_48;
    uint local_40;
    uint local_3c;

    if ((param_2 == 0) || (*(longlong * )(param_4 + 0x50) == 0)) {
        return 0x80004003;
    }
    if (*(int *) (param_3 + 0x34) == 4) {
        uVar3 = *(ulonglong * )(param_3 + 8);
        uVar7 = *(ulonglong * )(param_3 + 0x10);
        uVar15 = 0;
        local_60 = uVar3;
        local_58 = uVar7;
        if (*(longlong * )(param_3 + 0x20) != 0) {
            do {
                uVar2 = (**(code * *)(*param_1 + 0x70))(param_1, param_2, uVar15 & 0xffffffff, 1, 0, &local_48);
                if ((int) uVar2 < 0) {
                    return uVar2;
                }
                if (local_48 == 0) {
                    (**(code * *)(*param_1 + 0x78))(param_1, param_2, uVar15 & 0xffffffff);
                    return 0x80004003;
                }
                iVar1 = *(int *) (param_3 + 0x30);
                local_68 = uVar3;
                if ((0x45 < iVar1) && ((iVar1 < 0x55 || (iVar1 - 0x5eU < 6)))) {
                    local_68 = uVar3 + 3 >> 2;
                    local_50 = 1;
                    puVar4 = &local_68;
                    if (local_68 < 2) {
                        puVar4 = &local_50;
                    }
                    local_68 = *puVar4;
                }
                uVar14 = 0;
                if (uVar7 != 0) {
                    uVar6 = (ulonglong) local_40;
                    uVar9 = local_68;
                    lVar13 = local_48;
                    do {
                        if (*(ulonglong * )(param_4 + 0x30) <= uVar15) {
                            LAB_1402b38f4:
                            uVar15 = uVar15 & 0xffffffff;
                            lVar13 = *param_1;
                            LAB_1402b390a:
                            (**(code * *)(lVar13 + 0x78))(param_1, param_2, uVar15);
                            return 0x80004005;
                        }
                        iVar1 = *(int *) (param_4 + 0x44);
                        lVar5 = 0;
                        if (iVar1 < 2) goto LAB_1402b38f4;
                        if (iVar1 < 4) {
                            if ((uVar14 != 0) || (uVar3 = uVar15, *(longlong * )(param_4 + 0x28) == 0))
                                goto LAB_1402b38f4;
                        } else {
                            if (iVar1 != 4) goto LAB_1402b38f4;
                            uVar3 = *(ulonglong * )(param_4 + 0x20);
                            for (uVar7 = uVar15; uVar7 != 0; uVar7 = uVar7 - 1) {
                                lVar5 = lVar5 + uVar3;
                                if (1 < uVar3) {
                                    uVar3 = uVar3 >> 1;
                                }
                            }
                            if (uVar3 <= uVar14) goto LAB_1402b38f4;
                            uVar3 = lVar5 + uVar14;
                        }
                        lVar5 = uVar3 * 0x30 + *(longlong * )(param_4 + 0x48);
                        if (lVar5 == 0) goto LAB_1402b38f4;
                        lVar8 = *(longlong * )(lVar5 + 0x28);
                        if (lVar8 == 0) {
                            (**(code * *)(*param_1 + 0x78))(param_1, param_2, uVar15 & 0xffffffff);
                            return 0x80004003;
                        }
                        uVar11 = uVar9;
                        if (uVar9 != 0) {
                            puVar4 = (ulonglong * )(lVar5 + 0x18);
                            uVar3 = *puVar4;
                            lVar5 = lVar13;
                            do {
                                local_50 = uVar6;
                                puVar10 = &local_50;
                                if (uVar3 <= uVar6) {
                                    puVar10 = puVar4;
                                }
                                FUN_1407e15b8(lVar8, uVar3, lVar5, *puVar10);
                                uVar6 = (ulonglong) local_40;
                                uVar3 = *puVar4;
                                lVar5 = lVar5 + uVar6;
                                lVar8 = lVar8 + uVar3;
                                uVar9 = uVar9 - 1;
                                uVar11 = local_68;
                            } while (uVar9 != 0);
                        }
                        uVar14 = uVar14 + 1;
                        lVar13 = lVar13 + (ulonglong) local_3c;
                        uVar7 = local_58;
                        uVar3 = local_60;
                        uVar9 = uVar11;
                    } while (uVar14 < local_58);
                }
                (**(code * *)(*param_1 + 0x78))(param_1, param_2);
                if (1 < uVar3) {
                    uVar3 = uVar3 >> 1;
                    local_60 = uVar3;
                }
                if (1 < uVar7) {
                    uVar7 = uVar7 >> 1;
                    local_58 = uVar7;
                }
                uVar15 = uVar15 + 1;
            } while (uVar15 < *(ulonglong * )(param_3 + 0x20));
        }
    } else {
        local_58 = 0;
        if (*(longlong * )(param_3 + 0x18) != 0) {
            do {
                uVar15 = *(ulonglong * )(param_3 + 8);
                uVar7 = 0;
                uVar3 = local_58;
                if (*(longlong * )(param_3 + 0x20) != 0) {
                    do {
                        uVar12 = (int) uVar3 * *(int *) (param_3 + 0x20) + (int) uVar7;
                        uVar2 = (**(code * *)(*param_1 + 0x70))(param_1, param_2, uVar12, 1, 0, &local_48);
                        if ((int) uVar2 < 0) {
                            return uVar2;
                        }
                        if (*(ulonglong * )(param_4 + 0x30) <= uVar7) {
                            LAB_1402b39fc:
                            lVar13 = *param_1;
                            uVar15 = (ulonglong) uVar12;
                            goto LAB_1402b390a;
                        }
                        iVar1 = *(int *) (param_4 + 0x44);
                        lVar13 = 0;
                        if (iVar1 < 2) goto LAB_1402b39fc;
                        if (3 < iVar1) {
                            if ((iVar1 == 4) && (uVar3 == 0)) {
                                uVar14 = *(ulonglong * )(param_4 + 0x20);
                                for (uVar9 = uVar7; uVar9 != 0; uVar9 = uVar9 - 1) {
                                    lVar13 = lVar13 + uVar14;
                                    if (1 < uVar14) {
                                        uVar14 = uVar14 >> 1;
                                    }
                                }
                                if (uVar14 != 0) goto LAB_1402b3a22;
                            }
                            goto LAB_1402b39fc;
                        }
                        if (*(ulonglong * )(param_4 + 0x28) <= uVar3) goto LAB_1402b39fc;
                        lVar13 = *(ulonglong * )(param_4 + 0x30) * uVar3 + uVar7;
                        LAB_1402b3a22:
                        lVar13 = lVar13 * 0x30 + *(longlong * )(param_4 + 0x48);
                        if (lVar13 == 0) goto LAB_1402b39fc;
                        lVar5 = *(longlong * )(lVar13 + 0x28);
                        if (lVar5 == 0) {
                            (**(code * *)(*param_1 + 0x78))(param_1, param_2, uVar12);
                            return 0x80004003;
                        }
                        iVar1 = *(int *) (param_3 + 0x30);
                        uVar14 = uVar15;
                        if ((0x45 < iVar1) && ((iVar1 < 0x55 || (iVar1 - 0x5eU < 6)))) {
                            local_50 = uVar15 + 3 >> 2;
                            local_60 = 1;
                            puVar4 = &local_50;
                            if (local_50 < 2) {
                                puVar4 = &local_60;
                            }
                            uVar14 = *puVar4;
                        }
                        if (uVar14 != 0) {
                            uVar9 = *(ulonglong * )(lVar13 + 0x18);
                            uVar6 = (ulonglong) local_40;
                            lVar8 = local_48;
                            do {
                                local_50 = uVar6;
                                puVar4 = &local_50;
                                if (uVar9 <= uVar6) {
                                    puVar4 = (ulonglong * )(lVar13 + 0x18);
                                }
                                FUN_1407e15b8(lVar5, uVar9, lVar8, *puVar4);
                                uVar6 = (ulonglong) local_40;
                                uVar9 = *(ulonglong * )(lVar13 + 0x18);
                                lVar8 = lVar8 + uVar6;
                                lVar5 = lVar5 + uVar9;
                                uVar14 = uVar14 - 1;
                                uVar3 = local_58;
                            } while (uVar14 != 0);
                        }
                        (**(code * *)(*param_1 + 0x78))(param_1, param_2);
                        if (1 < uVar15) {
                            uVar15 = uVar15 >> 1;
                        }
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < *(ulonglong * )(param_3 + 0x20));
                }
                local_58 = uVar3 + 1;
            } while (local_58 < *(ulonglong * )(param_3 + 0x18));
        }
    }
    return 0;
}


void FUN_1402b3b70(longlong *param_1, longlong param_2, ulonglong param_3, ulonglong *param_4,
                   undefined4 param_5, int param_6, undefined4 param_7, longlong param_8) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined4 *puVar11;
    longlong lVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined auStack184[32];
    undefined4 *local_98;
    longlong local_90;
    longlong local_88;
    ulonglong local_80;
    longlong *local_78;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined8 local_5c;
    undefined4 local_54;
    int local_50;
    undefined4 local_4c;
    int local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack184;
    local_88 = param_8;
    local_90 = param_2;
    local_80 = param_3;
    local_78 = param_1;
    if (((((param_2 == 0) || (param_3 == 0)) || (param_8 == 0)) ||
         (((param_4[4] == 0 || (param_4[3] == 0)) ||
           ((0xffffffff < *param_4 || ((0xffffffff < param_4[1] || (0xffffffff < param_4[4])))))))) ||
        (0xffffffff < param_4[3]))
        goto LAB_1402b407c;
    lVar3 = FUN_14018b280();
    if (lVar3 != 0) {
        if (*(int *) ((longlong) param_4 + 0x34) == 4) {
            uVar14 = param_4[2];
            if (((uVar14 == 0) || (0xffffffff < uVar14)) || (1 < param_4[3])) goto LAB_1402b4060;
            uVar5 = param_4[4];
            uVar10 = 0;
            param_8 = local_88;
            if (uVar5 != 0) {
                puVar11 = (undefined4 * )(lVar3 + 0xc);
                do {
                    if ((uVar10 < uVar5) && (iVar1 = *(int *) ((longlong) param_4 + 0x34), 1 < iVar1)) {
                        if (iVar1 < 4) {
                            uVar4 = uVar10;
                            if (param_4[3] == 0) {
                                uVar4 = 0xffffffffffffffff;
                            }
                        } else {
                            if (iVar1 != 4) goto LAB_1402b3cff;
                            uVar6 = param_4[2];
                            uVar4 = 0;
                            for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
                                uVar4 = uVar4 + uVar6;
                                if (1 < uVar6) {
                                    uVar6 = uVar6 >> 1;
                                }
                            }
                            if (uVar6 == 0) {
                                uVar4 = 0xffffffffffffffff;
                            }
                        }
                    } else {
                        LAB_1402b3cff:
                        uVar4 = 0xffffffffffffffff;
                    }
                    local_98 = puVar11;
                    if (param_3 <= uVar4) goto LAB_1402b4060;
                    param_2 = uVar4 * 0x30 + param_2;
                    if ((*(int *) (param_2 + 0x10) != *(int *) (param_4 + 6)) ||
                        (lVar13 = *(longlong * )(param_2 + 0x28), lVar13 == 0))
                        goto LAB_1402b4060;
                    uVar4 = 1;
                    lVar9 = lVar13;
                    if (1 < uVar14) {
                        do {
                            lVar12 = *(longlong * )(param_2 + 0x20) + lVar9;
                            if ((uVar10 < uVar5) && (iVar1 = *(int *) ((longlong) param_4 + 0x34), 1 < iVar1)) {
                                if (iVar1 < 4) {
                                    if (uVar4 != 0) goto LAB_1402b3da9;
                                    uVar6 = uVar10;
                                    if (param_4[3] == 0) {
                                        uVar6 = 0xffffffffffffffff;
                                    }
                                } else {
                                    if (iVar1 != 4) goto LAB_1402b3da9;
                                    uVar6 = param_4[2];
                                    lVar9 = 0;
                                    for (uVar8 = uVar10; uVar8 != 0; uVar8 = uVar8 - 1) {
                                        lVar9 = lVar9 + uVar6;
                                        if (1 < uVar6) {
                                            uVar6 = uVar6 >> 1;
                                        }
                                    }
                                    if (uVar4 < uVar6) {
                                        uVar6 = lVar9 + uVar4;
                                    } else {
                                        uVar6 = 0xffffffffffffffff;
                                    }
                                }
                            } else {
                                LAB_1402b3da9:
                                uVar6 = 0xffffffffffffffff;
                            }
                            if (local_80 <= uVar6) goto LAB_1402b4060;
                            lVar7 = uVar6 * 0x30 + local_90;
                            lVar9 = *(longlong * )(lVar7 + 0x28);
                            if ((((lVar9 == 0) || (lVar9 != lVar12)) ||
                                 (*(int *) (lVar7 + 0x10) != *(int *) (param_4 + 6))) ||
                                ((*(longlong * )(lVar7 + 0x18) != *(longlong * )(param_2 + 0x18) ||
                                  (*(longlong * )(lVar7 + 0x20) != *(longlong * )(param_2 + 0x20)))))
                                goto LAB_1402b4060;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < uVar14);
                    }
                    *(longlong * )(puVar11 + -3) = lVar13;
                    local_98 = puVar11 + 4;
                    puVar11[-1] = *(undefined4 * )(param_2 + 0x18);
                    *puVar11 = *(undefined4 * )(param_2 + 0x20);
                    if (1 < uVar14) {
                        uVar14 = uVar14 >> 1;
                    }
                    uVar5 = param_4[4];
                    uVar10 = uVar10 + 1;
                    puVar11 = local_98;
                    param_3 = local_80;
                    param_2 = local_90;
                    param_1 = local_78;
                } while (uVar10 < uVar5);
            }
        } else {
            uVar14 = 0;
            lVar13 = 0;
            if (param_4[3] != 0) {
                uVar5 = param_4[4];
                do {
                    uVar10 = 0;
                    if (uVar5 != 0) {
                        puVar11 = (undefined4 * )(lVar3 + 0xc + lVar13 * 0x10);
                        if (uVar5 == 0) goto LAB_1402b3f4d;
                        do {
                            iVar1 = *(int *) ((longlong) param_4 + 0x34);
                            if (iVar1 < 2) {
                                LAB_1402b3f4d:
                                uVar5 = 0xffffffffffffffff;
                            } else if (iVar1 < 4) {
                                if (param_4[3] <= uVar14) goto LAB_1402b3f4d;
                                uVar5 = uVar5 * uVar14 + uVar10;
                            } else {
                                if ((iVar1 != 4) || (uVar14 != 0)) goto LAB_1402b3f4d;
                                uVar4 = param_4[2];
                                uVar5 = 0;
                                for (uVar6 = uVar10; uVar6 != 0; uVar6 = uVar6 - 1) {
                                    uVar5 = uVar5 + uVar4;
                                    if (1 < uVar4) {
                                        uVar4 = uVar4 >> 1;
                                    }
                                }
                                if (uVar4 == 0) {
                                    uVar5 = 0xffffffffffffffff;
                                }
                            }
                            if (((param_3 <= uVar5) ||
                                 (lVar9 = uVar5 * 0x30 + param_2, *(int *) (lVar9 + 0x10) != *(int *) (param_4 + 6)))
                                || (*(longlong * )(lVar9 + 0x28) == 0))
                                goto LAB_1402b4060;
                            *(longlong * )(puVar11 + -3) = *(longlong * )(lVar9 + 0x28);
                            uVar10 = uVar10 + 1;
                            puVar11[-1] = *(undefined4 * )(lVar9 + 0x18);
                            lVar13 = lVar13 + 1;
                            *puVar11 = *(undefined4 * )(lVar9 + 0x20);
                            uVar5 = param_4[4];
                            puVar11 = puVar11 + 4;
                        } while (uVar10 < uVar5);
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < param_4[3]);
            }
        }
        iVar1 = *(int *) ((longlong) param_4 + 0x34);
        uVar2 = *(undefined4 * )(param_4 + 6);
        if (iVar1 == 2) {
            local_70 = *(undefined4 *) param_4;
            local_6c = *(undefined4 * )(param_4 + 4);
            local_68 = *(undefined4 * )(param_4 + 3);
            local_60 = param_5;
            local_54 = 0;
            local_5c = CONCAT44(param_7, param_6);
            local_64 = uVar2;
            (**(code * *)(*param_1 + 0x20))(param_1, &local_70, lVar3, param_8);
        } else if (iVar1 == 3) {
            local_70 = *(undefined4 *) param_4;
            local_6c = *(undefined4 * )(param_4 + 1);
            local_68 = *(undefined4 * )(param_4 + 4);
            local_64 = *(undefined4 * )(param_4 + 3);
            local_5c = 1;
            local_54 = param_5;
            local_50 = param_6;
            local_4c = param_7;
            local_48 = (*(uint * )(param_4 + 5) >> 2 & 1) << 2;
            local_60 = uVar2;
            (**(code * *)(*param_1 + 0x28))(param_1, &local_70, lVar3, param_8);
        } else if (iVar1 + -4 == 0) {
            local_70 = *(undefined4 *) param_4;
            local_6c = *(undefined4 * )(param_4 + 1);
            local_68 = *(undefined4 * )(param_4 + 2);
            local_64 = *(undefined4 * )(param_4 + 4);
            local_5c = CONCAT44(param_6, param_5);
            local_54 = param_7;
            local_60 = uVar2;
            local_50 = iVar1 + -4;
            (**(code * *)(*param_1 + 0x30))(param_1, &local_70, lVar3, param_8);
        }
    }
    LAB_1402b4060:
    FUN_14018b900(lVar3, 0);
    LAB_1402b407c:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack184);
    return;
}


void FUN_1402b40b0(longlong *param_1, longlong *param_2, longlong *param_3, undefined8 param_4) {
    char cVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    longlong *plVar7;
    uint uVar8;
    uint uVar9;
    undefined auStack264[32];
    int local_e8;
    uint local_e0;
    longlong *local_d8;
    longlong *local_d0;
    longlong *local_c8;
    uint local_c0;
    int local_bc;
    ulonglong local_b8;
    ulonglong local_b0;
    ulonglong local_a8;
    ulonglong local_a0;
    ulonglong local_98;
    ulonglong local_90;
    uint local_88;
    undefined4 local_84;
    uint local_80;
    uint local_7c;
    uint local_78;
    uint local_74;
    uint local_70;
    uint uStack108;
    undefined4 uStack104;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 local_5c;
    uint local_58;
    ulonglong local_50;

    local_50 = DAT_140c0f7b0 ^ (ulonglong) auStack264;
    if ((param_2 == (longlong *) 0x0) || (param_3 == (longlong *) 0x0)) goto LAB_1402b456d;
    uVar9 = 0;
    local_bc = 0;
    (**(code * *)(*param_3 + 0x38))(param_3, &local_bc);
    if (local_bc == 2) {
        local_d0 = (longlong *) 0x0;
        iVar2 = (**(code * *) * param_3)(param_3, &DAT_140b62068, &local_d0);
        plVar7 = local_d0;
        if (-1 < iVar2) {
            (**(code * *)(*local_d0 + 0x50))(local_d0, &local_80);
            local_70 = 3;
            uStack108 = 0;
            uStack104 = 0x20000;
            uStack100 = 0;
            local_d8 = (longlong *) 0x0;
            iVar2 = (**(code * *)(*param_1 + 0x20))(param_1, &local_80, 0, &local_d8);
            if (-1 < iVar2) {
                (**(code * *)(*param_2 + 0x178))(param_2, local_d8, param_3);
                local_a8 = 1;
                local_a0 = (ulonglong) local_78;
                local_b0 = 1;
                local_84 = 2;
                local_88 = local_74;
                local_74 = local_7c;
                LAB_1402b44f7:
                local_98 = (ulonglong) local_74;
                local_b8 = (ulonglong) local_80;
                local_90 = 0;
                iVar2 = FUN_1402b2c70(param_4, &local_b8);
                if (-1 < iVar2) {
                    iVar2 = FUN_1402b3660(param_2, local_d8, &local_b8, param_4);
                }
            }
            LAB_1402b4525:
            plVar7 = local_d0;
            if (local_d8 != (longlong *) 0x0) {
                (**(code * *)(*local_d8 + 0x10))();
                local_d8 = (longlong *) 0x0;
                plVar7 = local_d0;
            }
        }
        LAB_1402b453c:
        if (plVar7 != (longlong *) 0x0) {
            (**(code * *)(*plVar7 + 0x10))();
        }
        LAB_1402b4547:
        if (-1 < iVar2) goto LAB_1402b456d;
    } else {
        if (local_bc == 3) {
            local_d8 = (longlong *) 0x0;
            iVar2 = (**(code * *) * param_3)(param_3, &DAT_140b61c60, &local_d8);
            plVar7 = local_d8;
            if (-1 < iVar2) {
                (**(code * *)(*local_d8 + 0x50))(local_d8, &local_80);
                local_c8 = (longlong *) 0x0;
                if (uStack108 < 2) {
                    local_58 = local_58 & 4;
                    uStack96 = 0;
                    local_5c = 0x20000;
                    uStack100 = 3;
                    iVar2 = (**(code * *)(*param_1 + 0x28))(param_1, &local_80, 0, &local_c8);
                    if (-1 < iVar2) {
                        (**(code * *)(*param_2 + 0x178))(param_2, local_c8, param_3);
                        LAB_1402b43ea:
                        local_b8 = (ulonglong) local_80;
                        local_b0 = (ulonglong) local_7c;
                        local_a8 = 1;
                        local_a0 = (ulonglong) local_74;
                        local_98 = (ulonglong) local_78;
                        local_84 = 3;
                        local_90 = (ulonglong) local_58 & 0xffffffff00000004;
                        local_88 = local_70;
                        iVar2 = FUN_1402b2c70(param_4, &local_b8);
                        if (-1 < iVar2) {
                            iVar2 = FUN_1402b3660(param_2, local_c8, &local_b8, param_4);
                        }
                    }
                } else {
                    uStack108 = 1;
                    uStack104 = 0;
                    local_d0 = (longlong *) 0x0;
                    iVar2 = (**(code * *)(*param_1 + 0x28))();
                    uVar4 = local_70;
                    if (-1 < iVar2) {
                        cVar1 = FUN_1402b35c0(local_70);
                        if (cVar1 != '\0') {
                            uVar3 = FUN_1402b2540(uVar4);
                            uVar4 = FUN_1402b2660(uVar3);
                        }
                        local_c0 = 0;
                        iVar2 = (**(code * *)(*param_1 + 0xe8))(param_1, uVar4, &local_c0);
                        if (-1 < iVar2) {
                            if ((local_c0 & 0x40000) == 0) {
                                if (local_d0 != (longlong *) 0x0) {
                                    (**(code * *)(*local_d0 + 0x10))();
                                    local_d0 = (longlong *) 0x0;
                                }
                                if (local_c8 != (longlong *) 0x0) {
                                    (**(code * *)(*local_c8 + 0x10))();
                                    local_c8 = (longlong *) 0x0;
                                }
                                if (local_d8 != (longlong *) 0x0) {
                                    (**(code * *)(*local_d8 + 0x10))();
                                }
                                goto LAB_1402b454b;
                            }
                            uVar5 = local_74;
                            uVar6 = local_78;
                            if (local_74 != 0) {
                                do {
                                    uVar8 = 0;
                                    if (uVar6 != 0) {
                                        do {
                                            local_e8 = uVar6 * uVar9 + uVar8;
                                            local_e0 = uVar4;
                                            (**(code * *)(*param_2 + 0x1c8))(param_2, local_d0, local_e8, param_3);
                                            uVar8 = uVar8 + 1;
                                            uVar5 = local_74;
                                            uVar6 = local_78;
                                        } while (uVar8 < local_78);
                                    }
                                    uVar9 = uVar9 + 1;
                                } while (uVar9 < uVar5);
                            }
                            local_58 = local_58 & 4;
                            local_5c = 0x20000;
                            uStack100 = 3;
                            uStack96 = 0;
                            iVar2 = (**(code * *)(*param_1 + 0x28))(param_1, &local_80, 0, &local_c8);
                            if (-1 < iVar2) {
                                (**(code * *)(*param_2 + 0x178))(param_2, local_c8, local_d0);
                                if (local_d0 != (longlong *) 0x0) {
                                    (**(code * *)(*local_d0 + 0x10))();
                                }
                                goto LAB_1402b43ea;
                            }
                        }
                    }
                    if (local_d0 != (longlong *) 0x0) {
                        (**(code * *)(*local_d0 + 0x10))();
                        local_d0 = (longlong *) 0x0;
                    }
                }
                plVar7 = local_d8;
                if (local_c8 != (longlong *) 0x0) {
                    (**(code * *)(*local_c8 + 0x10))();
                    local_c8 = (longlong *) 0x0;
                    plVar7 = local_d8;
                }
            }
            goto LAB_1402b453c;
        }
        if (local_bc == 4) {
            local_d0 = (longlong *) 0x0;
            iVar2 = (**(code * *) * param_3)(param_3, &DAT_140b62058, &local_d0);
            if (-1 < iVar2) {
                (**(code * *)(*local_d0 + 0x50))(local_d0, &local_80);
                uStack108 = 3;
                uStack104 = 0;
                uStack100 = 0x20000;
                uStack96 = 0;
                local_d8 = (longlong *) 0x0;
                iVar2 = (**(code * *)(*param_1 + 0x30))(param_1, &local_80, 0, &local_d8);
                if (-1 < iVar2) {
                    (**(code * *)(*param_2 + 0x178))(param_2, local_d8, param_3);
                    local_a0 = 1;
                    local_b0 = (ulonglong) local_7c;
                    local_84 = 4;
                    local_a8 = (ulonglong) local_78;
                    local_88 = local_70;
                    goto LAB_1402b44f7;
                }
                goto LAB_1402b4525;
            }
            if (local_d0 != (longlong *) 0x0) {
                (**(code * *)(*local_d0 + 0x10))();
            }
            goto LAB_1402b4547;
        }
    }
    LAB_1402b454b:
    FUN_1402b34d0(param_4);
    LAB_1402b456d:
    FUN_1407db4f0(local_50 ^ (ulonglong) auStack264);
    return;
}


undefined8
FUN_1402b45a0(byte *param_1, ulonglong param_2, ulonglong *param_3, longlong *param_4, uint *param_5) {
    byte bVar1;
    ushort uVar2;
    bool bVar3;

    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    if (param_2 < 0x12) {
        return 0x8007000d;
    }
    if (param_1[1] != 0) {
        return 0x80070032;
    }
    if (*(short *) (param_1 + 5) != 0) {
        return 0x80070032;
    }
    if ((param_1[0x11] & 0xc0) != 0) {
        return 0x80070032;
    }
    if ((*(short *) (param_1 + 0xc) == 0) || (*(short *) (param_1 + 0xe) == 0)) {
        switchD_1402b4612_caseD_4:
        return 0x8007000d;
    }
    bVar1 = param_1[2];
    switch (bVar1) {
        case 0:
        case 1:
        case 9:
            return 0x80070032;
        case 2:
        case 10:
            bVar1 = param_1[0x10];
            if (bVar1 == 0x10) {
                *(undefined4 * )(param_3 + 6) = 0x56;
            } else if (bVar1 == 0x18) {
                *(undefined4 * )(param_3 + 6) = 0x1c;
                if (param_5 == (uint *) 0x0) goto LAB_1402b467f;
                *param_5 = *param_5 | 1;
            } else if (bVar1 == 0x20) {
                *(undefined4 * )(param_3 + 6) = 0x1c;
            }
            if (param_5 == (uint *) 0x0) goto LAB_1402b467f;
            bVar3 = param_1[2] == 10;
            break;
        case 3:
        case 0xb:
            if (param_1[0x10] != 8) {
                return 0x80070032;
            }
            *(undefined4 * )(param_3 + 6) = 0x3d;
            if (param_5 == (uint *) 0x0) goto LAB_1402b467f;
            bVar3 = bVar1 == 0xb;
            break;
        default:
            goto switchD_1402b4612_caseD_4;
    }
    if (bVar3) {
        *param_5 = *param_5 | 8;
    }
    LAB_1402b467f:
    uVar2 = *(ushort * )(param_1 + 0xc);
    param_3[4] = 1;
    param_3[3] = 1;
    *param_3 = (ulonglong) uVar2;
    uVar2 = *(ushort * )(param_1 + 0xe);
    param_3[2] = 1;
    *(undefined4 * )((longlong) param_3 + 0x34) = 3;
    param_3[1] = (ulonglong) uVar2;
    if (param_5 != (uint *) 0x0) {
        if ((param_1[0x11] & 0x10) != 0) {
            *param_5 = *param_5 | 2;
        }
        if ((param_1[0x11] & 0x20) != 0) {
            *param_5 = *param_5 | 4;
        }
    }
    bVar1 = *param_1;
    *param_4 = 0x12;
    if (bVar1 != 0) {
        *param_4 = (ulonglong) bVar1 + 0x12;
    }
    return 0;
}


undefined8 FUN_1402b4720(longlong param_1) {
    ulonglong uVar1;
    longlong lVar2;

    lVar2 = *(longlong * )(param_1 + 0x28);
    if (lVar2 != 0) {
        uVar1 = 0;
        if (*(longlong * )(param_1 + 8) != 0) {
            do {
                FUN_1402c2a00(lVar2, *(undefined8 * )(param_1 + 0x18), lVar2, *(undefined8 * )(param_1 + 0x18),
                              *(undefined4 * )(param_1 + 0x10), 1);
                lVar2 = lVar2 + *(longlong * )(param_1 + 0x18);
                uVar1 = uVar1 + 1;
            } while (uVar1 < *(ulonglong * )(param_1 + 8));
        }
        return 0;
    }
    return 0x80004003;
}


undefined8 FUN_1402b47a0(ushort *param_1, longlong param_2, ulonglong *param_3, ulonglong param_4) {
    longlong lVar1;
    ushort *puVar2;
    byte bVar3;
    ushort uVar4;
    bool bVar5;
    int iVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    byte *pbVar9;
    uint uVar10;
    ulonglong uVar11;
    ushort *puVar12;
    longlong lVar13;
    ushort *puVar14;
    uint *puVar15;
    ulonglong uVar16;
    ushort *puVar17;

    if ((param_3 == (ulonglong *) 0x0) || (param_3[5] == 0)) {
        return 0x80004003;
    }
    iVar6 = *(int *) (param_3 + 2);
    puVar2 = (ushort * )((longlong) param_1 + param_2);
    if (iVar6 == 0x1c) {
        uVar16 = param_3[1];
        bVar5 = false;
        uVar11 = 0;
        if (uVar16 != 0) {
            do {
                if ((param_4 & 2) == 0) {
                    lVar13 = 0;
                } else {
                    lVar13 = *param_3 - 1;
                }
                uVar8 = uVar11;
                if ((param_4 & 4) == 0) {
                    uVar8 = (uVar16 - uVar11) - 1;
                }
                uVar16 = 0;
                puVar15 = (uint * )(param_3[3] * uVar8 + lVar13 * 4 + param_3[5]);
                puVar14 = param_1;
                if (*param_3 != 0) {
                    do {
                        if (puVar2 <= puVar14) {
                            return 0x80004005;
                        }
                        bVar3 = *(byte *) puVar14;
                        if ((char) bVar3 < '\0') {
                            lVar13 = (longlong)(int)((bVar3 & 0x7f) + 1);
                            if ((param_4 & 1) == 0) {
                                if (puVar2 <= puVar14 + 2) {
                                    return 0x80004005;
                                }
                                bVar3 = *(byte * )(puVar14 + 2);
                                uVar10 = CONCAT31(CONCAT21(CONCAT11(bVar3, *(byte * )((longlong) puVar14 + 1)),
                                                           *(byte * )(puVar14 + 1)),
                                                  *(byte * )((longlong) puVar14 + 3));
                                if (bVar3 != 0) {
                                    bVar5 = true;
                                }
                                param_1 = (ushort * )((longlong) puVar14 + 5);
                            } else {
                                if (puVar2 <= (ushort * )((longlong) puVar14 + 3U)) {
                                    return 0x80004005;
                                }
                                bVar5 = true;
                                uVar10 = CONCAT21(CONCAT11(*(byte * )((longlong) puVar14 + 1), *(byte * )(puVar14 + 1)),
                                                  *(byte * )(ushort * )((longlong) puVar14 + 3U)) | 0xff000000;
                                param_1 = puVar14 + 2;
                            }
                            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                                if (*param_3 <= uVar16) {
                                    return 0x80004005;
                                }
                                *puVar15 = uVar10;
                                if ((param_4 & 2) == 0) {
                                    puVar15 = puVar15 + 1;
                                } else {
                                    puVar15 = puVar15 + -1;
                                }
                                uVar16 = uVar16 + 1;
                            }
                        } else {
                            param_1 = (ushort * )((longlong) puVar14 + 1);
                            lVar13 = (longlong)(int)((bVar3 & 0x7f) + 1);
                            if ((param_4 & 1) == 0) {
                                lVar1 = lVar13 * 4;
                            } else {
                                lVar1 = lVar13 * 3;
                            }
                            if (puVar2 < (ushort * )((longlong) param_1 + lVar1)) {
                                return 0x80004005;
                            }
                            if (lVar13 != 0) {
                                puVar12 = puVar14 + 2;
                                puVar14 = (ushort * )((longlong) puVar14 + 3);
                                do {
                                    if (*param_3 <= uVar16) {
                                        return 0x80004005;
                                    }
                                    if ((param_4 & 1) == 0) {
                                        if (puVar2 <= puVar12) {
                                            return 0x80004005;
                                        }
                                        *puVar15 = CONCAT31(CONCAT21(CONCAT11(*(byte *) puVar12, *(byte *) param_1),
                                                                     *(byte * )((longlong) param_1 + 1)),
                                                            *(byte *) puVar14);
                                        if (*(byte *) puVar12 != 0) {
                                            bVar5 = true;
                                        }
                                        param_1 = param_1 + 2;
                                        puVar17 = puVar14 + 2;
                                        puVar12 = puVar12 + 2;
                                    } else {
                                        if (puVar2 <= puVar14) {
                                            return 0x80004005;
                                        }
                                        pbVar9 = (byte * )((longlong) param_1 + 1);
                                        bVar3 = *(byte *) param_1;
                                        param_1 = (ushort * )((longlong) param_1 + 3);
                                        puVar17 = (ushort * )((longlong) puVar14 + 3);
                                        bVar5 = true;
                                        puVar12 = (ushort * )((longlong) puVar12 + 3);
                                        *puVar15 = CONCAT21(CONCAT11(bVar3, *pbVar9), *(byte *) puVar14) | 0xff000000;
                                    }
                                    if ((param_4 & 2) == 0) {
                                        puVar15 = puVar15 + 1;
                                    } else {
                                        puVar15 = puVar15 + -1;
                                    }
                                    uVar16 = uVar16 + 1;
                                    lVar13 = lVar13 + -1;
                                    puVar14 = puVar17;
                                } while (lVar13 != 0);
                            }
                        }
                        puVar14 = param_1;
                    } while (uVar16 < *param_3);
                }
                uVar16 = param_3[1];
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar16);
            if (bVar5) {
                return 0;
            }
        }
        uVar7 = FUN_1402b4720(param_3);
        iVar6 = (int) uVar7;
    } else {
        if (iVar6 == 0x3d) {
            uVar16 = param_3[1];
            uVar11 = 0;
            if (uVar16 == 0) {
                return 0;
            }
            do {
                if ((param_4 & 2) == 0) {
                    lVar13 = 0;
                } else {
                    lVar13 = *param_3 - 1;
                }
                uVar8 = uVar11;
                if ((param_4 & 4) == 0) {
                    uVar8 = (uVar16 - uVar11) - 1;
                }
                pbVar9 = (byte * )(param_3[3] * uVar8 + param_3[5] + lVar13);
                uVar16 = 0;
                if (*param_3 != 0) {
                    do {
                        if (puVar2 <= param_1) {
                            return 0x80004005;
                        }
                        bVar3 = *(byte *) param_1;
                        puVar14 = (ushort * )((longlong) param_1 + 1);
                        if ((char) bVar3 < '\0') {
                            iVar6 = (bVar3 & 0x7f) + 1;
                            lVar13 = (longlong) iVar6;
                            if (puVar2 <= puVar14) {
                                return 0x80004005;
                            }
                            if (iVar6 != 0) {
                                do {
                                    if (*param_3 <= uVar16) {
                                        return 0x80004005;
                                    }
                                    *pbVar9 = *(byte *) puVar14;
                                    if ((param_4 & 2) == 0) {
                                        pbVar9 = pbVar9 + 1;
                                    } else {
                                        pbVar9 = pbVar9 + -1;
                                    }
                                    uVar16 = uVar16 + 1;
                                    lVar13 = lVar13 + -1;
                                } while (lVar13 != 0);
                            }
                            param_1 = param_1 + 1;
                        } else {
                            lVar13 = (longlong)(int)((bVar3 & 0x7f) + 1);
                            param_1 = puVar14;
                            if (puVar2 < (ushort * )(lVar13 + (longlong) puVar14)) {
                                return 0x80004005;
                            }
                            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                                if (*param_3 <= uVar16) {
                                    return 0x80004005;
                                }
                                *pbVar9 = *(byte *) param_1;
                                if ((param_4 & 2) == 0) {
                                    pbVar9 = pbVar9 + 1;
                                } else {
                                    pbVar9 = pbVar9 + -1;
                                }
                                uVar16 = uVar16 + 1;
                                param_1 = (ushort * )((longlong) param_1 + 1);
                            }
                        }
                    } while (uVar16 < *param_3);
                }
                uVar16 = param_3[1];
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar16);
            return 0;
        }
        if (iVar6 != 0x56) {
            return 0x80004005;
        }
        uVar16 = param_3[1];
        bVar5 = false;
        uVar11 = 0;
        if (uVar16 != 0) {
            do {
                if ((param_4 & 2) == 0) {
                    lVar13 = 0;
                } else {
                    lVar13 = *param_3 - 1;
                }
                uVar8 = uVar11;
                if ((param_4 & 4) == 0) {
                    uVar8 = (uVar16 - uVar11) - 1;
                }
                uVar16 = 0;
                puVar14 = (ushort * )(param_3[3] * uVar8 + lVar13 * 2 + param_3[5]);
                if (*param_3 != 0) {
                    do {
                        if (puVar2 <= param_1) {
                            return 0x80004005;
                        }
                        bVar3 = *(byte *) param_1;
                        if ((char) bVar3 < '\0') {
                            lVar13 = (longlong)(int)((bVar3 & 0x7f) + 1);
                            if (puVar2 <= param_1 + 1) {
                                return 0x80004005;
                            }
                            uVar4 = *(ushort * )((longlong) param_1 + 1);
                            if ((uVar4 & 0x8000) != 0) {
                                bVar5 = true;
                            }
                            param_1 = (ushort * )((longlong) param_1 + 3);
                            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                                if (*param_3 <= uVar16) {
                                    return 0x80004005;
                                }
                                *puVar14 = uVar4;
                                if ((param_4 & 2) == 0) {
                                    puVar14 = puVar14 + 1;
                                } else {
                                    puVar14 = puVar14 + -1;
                                }
                                uVar16 = uVar16 + 1;
                            }
                        } else {
                            param_1 = (ushort * )((longlong) param_1 + 1);
                            lVar13 = (longlong)(int)((bVar3 & 0x7f) + 1);
                            if (puVar2 < param_1 + lVar13) {
                                return 0x80004005;
                            }
                            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                                if (*param_3 <= uVar16) {
                                    return 0x80004005;
                                }
                                uVar4 = *param_1;
                                *puVar14 = uVar4;
                                if ((uVar4 & 0x8000) != 0) {
                                    bVar5 = true;
                                }
                                param_1 = param_1 + 1;
                                if ((param_4 & 2) == 0) {
                                    puVar14 = puVar14 + 1;
                                } else {
                                    puVar14 = puVar14 + -1;
                                }
                                uVar16 = uVar16 + 1;
                            }
                        }
                    } while (uVar16 < *param_3);
                }
                uVar16 = param_3[1];
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar16);
            if (bVar5) {
                return 0;
            }
        }
        uVar7 = FUN_1402b4720(param_3);
        iVar6 = (int) uVar7;
    }
    if (-1 < iVar6) {
        return 0;
    }
    return uVar7;
}


undefined8 FUN_1402b4d10(byte *param_1, longlong param_2, ulonglong *param_3, ulonglong param_4) {
    byte *pbVar1;
    byte *pbVar2;
    byte bVar3;
    byte bVar4;
    bool bVar5;
    int iVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined2 *puVar11;
    uint *puVar12;
    ulonglong uVar13;
    byte *pbVar14;
    byte *pbVar15;
    byte *pbVar16;

    if ((param_3 == (ulonglong *) 0x0) || (param_3[5] == 0)) {
        return 0x80004003;
    }
    iVar6 = *(int *) (param_3 + 2);
    pbVar2 = param_1 + param_2;
    if (iVar6 == 0x1c) {
        uVar13 = param_3[1];
        bVar5 = false;
        uVar9 = 0;
        if (uVar13 != 0) {
            do {
                if ((param_4 & 2) == 0) {
                    lVar10 = 0;
                } else {
                    lVar10 = *param_3 - 1;
                }
                uVar8 = uVar9;
                if ((param_4 & 4) == 0) {
                    uVar8 = (uVar13 - uVar9) - 1;
                }
                uVar13 = 0;
                puVar12 = (uint * )(param_3[3] * uVar8 + lVar10 * 4 + param_3[5]);
                if (*param_3 != 0) {
                    pbVar16 = param_1 + 3;
                    pbVar14 = param_1 + 2;
                    do {
                        if ((param_4 & 1) == 0) {
                            if (pbVar2 <= pbVar16) {
                                return 0x80004005;
                            }
                            *puVar12 = CONCAT31(CONCAT21(CONCAT11(*pbVar16, *param_1), param_1[1]), *pbVar14);
                            if (*pbVar16 != 0) {
                                bVar5 = true;
                            }
                            param_1 = param_1 + 4;
                            pbVar15 = pbVar14 + 4;
                            pbVar16 = pbVar16 + 4;
                        } else {
                            if (pbVar2 <= pbVar14) {
                                return 0x80004005;
                            }
                            pbVar1 = param_1 + 1;
                            bVar3 = *param_1;
                            param_1 = param_1 + 3;
                            pbVar15 = pbVar14 + 3;
                            bVar5 = true;
                            pbVar16 = pbVar16 + 3;
                            *puVar12 = CONCAT21(CONCAT11(bVar3, *pbVar1), *pbVar14) | 0xff000000;
                        }
                        if ((param_4 & 2) == 0) {
                            puVar12 = puVar12 + 1;
                        } else {
                            puVar12 = puVar12 + -1;
                        }
                        uVar13 = uVar13 + 1;
                        pbVar14 = pbVar15;
                    } while (uVar13 < *param_3);
                }
                uVar13 = param_3[1];
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
            if (bVar5) {
                return 0;
            }
        }
        uVar7 = FUN_1402b4720(param_3);
        iVar6 = (int) uVar7;
    } else {
        if (iVar6 == 0x3d) {
            uVar13 = param_3[1];
            uVar9 = 0;
            if (uVar13 == 0) {
                return 0;
            }
            do {
                if ((param_4 & 2) == 0) {
                    lVar10 = 0;
                } else {
                    lVar10 = *param_3 - 1;
                }
                uVar8 = uVar9;
                if ((param_4 & 4) == 0) {
                    uVar8 = (uVar13 - uVar9) - 1;
                }
                pbVar16 = (byte * )(param_3[3] * uVar8 + param_3[5] + lVar10);
                uVar13 = 0;
                if (*param_3 != 0) {
                    do {
                        if (pbVar2 <= param_1) {
                            return 0x80004005;
                        }
                        bVar3 = *param_1;
                        param_1 = param_1 + 1;
                        *pbVar16 = bVar3;
                        if ((param_4 & 2) == 0) {
                            pbVar16 = pbVar16 + 1;
                        } else {
                            pbVar16 = pbVar16 + -1;
                        }
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < *param_3);
                }
                uVar13 = param_3[1];
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
            return 0;
        }
        if (iVar6 != 0x56) {
            return 0x80004005;
        }
        uVar13 = param_3[1];
        bVar5 = false;
        uVar9 = 0;
        if (uVar13 != 0) {
            do {
                if ((param_4 & 2) == 0) {
                    lVar10 = 0;
                } else {
                    lVar10 = *param_3 - 1;
                }
                uVar8 = uVar9;
                if ((param_4 & 4) == 0) {
                    uVar8 = (uVar13 - uVar9) - 1;
                }
                uVar13 = 0;
                puVar11 = (undefined2 * )(param_3[3] * uVar8 + lVar10 * 2 + param_3[5]);
                if (*param_3 != 0) {
                    pbVar16 = param_1 + 1;
                    do {
                        if (pbVar2 <= pbVar16) {
                            return 0x80004005;
                        }
                        bVar3 = *pbVar16;
                        bVar4 = *param_1;
                        param_1 = param_1 + 2;
                        pbVar16 = pbVar16 + 2;
                        *puVar11 = CONCAT11(bVar3, bVar4);
                        if ((bVar3 & 0x80) != 0) {
                            bVar5 = true;
                        }
                        if ((param_4 & 2) == 0) {
                            puVar11 = puVar11 + 1;
                        } else {
                            puVar11 = puVar11 + -1;
                        }
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < *param_3);
                }
                uVar13 = param_3[1];
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar13);
            if (bVar5) {
                return 0;
            }
        }
        uVar7 = FUN_1402b4720(param_3);
        iVar6 = (int) uVar7;
    }
    if (-1 < iVar6) {
        return 0;
    }
    return uVar7;
}


undefined8 FUN_1402b5040(ulonglong *param_1, undefined8 *param_2, uint *param_3) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined2 * )(param_2 + 2) = 0;
    if ((*param_1 < 0x10000) && (param_1[1] < 0x10000)) {
        *(undefined2 * )((longlong) param_2 + 0xc) = *(undefined2 *) param_1;
        *(undefined2 * )((longlong) param_2 + 0xe) = *(undefined2 * )(param_1 + 1);
        switch (*(undefined4 * )(param_1 + 2)) {
            case 0x1c:
            case 0x1d:
                *param_3 = *param_3 | 0x10000;
                *(undefined2 * )(param_2 + 2) = 0x2820;
                *(undefined * )((longlong) param_2 + 2) = 2;
                return 0;
            case 0x3d:
            case 0x41:
                *(undefined * )((longlong) param_2 + 2) = 3;
                *(undefined2 * )(param_2 + 2) = 0x2008;
                return 0;
            case 0x56:
                *(undefined2 * )(param_2 + 2) = 0x2110;
                *(undefined * )((longlong) param_2 + 2) = 2;
                return 0;
            case 0x57:
            case 0x5b:
                *(undefined2 * )(param_2 + 2) = 0x2820;
                *(undefined * )((longlong) param_2 + 2) = 2;
                return 0;
            case 0x58:
            case 0x5d:
                *param_3 = *param_3 | 0x20000;
                *(undefined2 * )(param_2 + 2) = 0x2018;
                *(undefined * )((longlong) param_2 + 2) = 2;
                return 0;
        }
    }
    return 0x80070032;
}


undefined8 FUN_1402b5160(longlong param_1, ulonglong param_2, ulonglong *param_3) {
    char cVar1;
    ushort uVar2;
    ushort uVar3;

    if (param_2 == 0) {
        return 0x80070057;
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    if (param_2 < 0x12) {
        return 0x8007000d;
    }
    if (*(char *) (param_1 + 1) != '\0') {
        return 0x80070032;
    }
    if (*(short *) (param_1 + 5) != 0) {
        return 0x80070032;
    }
    if ((*(byte * )(param_1 + 0x11) & 0xc0) != 0) {
        return 0x80070032;
    }
    uVar2 = *(ushort * )(param_1 + 0xc);
    if ((uVar2 != 0) && (uVar3 = *(ushort * )(param_1 + 0xe), uVar3 != 0)) {
        switch (*(undefined * )(param_1 + 2)) {
            case 0:
            case 1:
            case 9:
                return 0x80070032;
            case 2:
            case 10:
                cVar1 = *(char *) (param_1 + 0x10);
                if (cVar1 == '\x10') {
                    *(undefined4 * )(param_3 + 6) = 0x56;
                } else if ((cVar1 == '\x18') || (cVar1 == ' ')) {
                    *(undefined4 * )(param_3 + 6) = 0x1c;
                }
                break;
            case 3:
            case 0xb:
                if (*(char *) (param_1 + 0x10) != '\b') {
                    return 0x80070032;
                }
                *(undefined4 * )(param_3 + 6) = 0x3d;
                break;
            default:
                goto switchD_1402b51e3_caseD_4;
        }
        param_3[4] = 1;
        param_3[3] = 1;
        *param_3 = (ulonglong) uVar2;
        param_3[2] = 1;
        param_3[1] = (ulonglong) uVar3;
        *(undefined4 * )((longlong) param_3 + 0x34) = 3;
        return 0;
    }
    switchD_1402b51e3_caseD_4:
    return 0x8007000d;
}


ulonglong FUN_1402b5280(longlong param_1, ulonglong param_2, undefined8 *param_3, longlong param_4) {
    int iVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong lVar6;
    uint local_res10[2];
    ulonglong local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    ulonglong local_30;

    if (param_2 == 0) {
        return 0x80070057;
    }
    FUN_1402b34d0(param_4);
    uVar5 = 0;
    local_res10[0] = 0;
    uVar4 = FUN_1402b45a0(param_1, param_2, &local_60, &local_68, local_res10);
    if ((int) uVar4 < 0) {
        return uVar4;
    }
    if (param_2 < local_68) {
        return 0x80004005;
    }
    param_1 = param_1 + local_68;
    lVar6 = param_2 - local_68;
    if (lVar6 == 0) {
        return 0x80004005;
    }
    uVar4 = FUN_1402b2fe0(param_4, local_30 & 0xffffffff, local_60, local_58, 1, 1);
    if ((int) uVar4 < 0) {
        return uVar4;
    }
    if ((local_res10[0] & 8) == 0) {
        if ((*(longlong * )(param_4 + 0x30) != 0) && (iVar1 = *(int *) (param_4 + 0x44), 1 < iVar1)) {
            if (iVar1 < 4) {
                lVar2 = *(longlong * )(param_4 + 0x28);
            } else {
                if (iVar1 != 4) goto LAB_1402b53d8;
                lVar2 = *(longlong * )(param_4 + 0x20);
            }
            uVar5 = 0;
            if (lVar2 != 0) {
                uVar5 = *(undefined8 * )(param_4 + 0x48);
            }
        }
        LAB_1402b53d8:
        uVar3 = FUN_1402b4d10(param_1, lVar6, uVar5);
        goto LAB_1402b53e6;
    }
    if ((*(longlong * )(param_4 + 0x30) != 0) && (iVar1 = *(int *) (param_4 + 0x44), 1 < iVar1)) {
        if (iVar1 < 4) {
            uVar5 = 0;
            if (*(longlong * )(param_4 + 0x28) != 0) goto LAB_1402b539a;
        } else if (iVar1 == 4) {
            if (*(longlong * )(param_4 + 0x20) == 0) {
                uVar3 = FUN_1402b47a0(param_1, lVar6, 0);
                goto LAB_1402b53e6;
            }
            LAB_1402b539a:
            uVar5 = *(undefined8 * )(param_4 + 0x48);
        }
    }
    uVar3 = FUN_1402b47a0(param_1, lVar6, uVar5);
    LAB_1402b53e6:
    if (-1 < (int) uVar3) {
        if (param_3 != (undefined8 *) 0x0) {
            *param_3 = local_60;
            param_3[1] = local_58;
            param_3[2] = local_50;
            param_3[3] = local_48;
            param_3[4] = local_40;
            param_3[5] = local_38;
            param_3[6] = local_30;
        }
        return 0;
    }
    FUN_1402b34d0(param_4);
    return (ulonglong) uVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402b5460(longlong *param_1, longlong *param_2) {
    undefined4 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    ulonglong *puVar5;
    longlong lVar6;
    undefined *puVar7;
    undefined *puVar8;
    undefined4 *puVar9;
    ulonglong uVar10;
    undefined *puVar11;
    int iVar12;
    undefined4 *puVar13;
    longlong lVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    undefined auStack168[32];
    undefined4 local_88;
    undefined4 local_80;
    ulonglong local_78;
    ulonglong local_70;
    ulonglong local_68;
    ulonglong local_60;
    undefined local_58[24];
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack168;
    local_78 = local_78 & 0xffffffff00000000;
    iVar4 = FUN_1402b5040(param_1, local_58, &local_78);
    if (-1 < iVar4) {
        if (*param_2 != 0) {
            FUN_14018b900(*param_2, 0);
            *param_2 = 0;
        }
        param_2[1] = 0;
        uVar16 = param_1[1];
        uVar3 = local_78 & 0x20000;
        if ((local_78 & 0x20000) == 0) {
            iVar4 = *(int *) (param_1 + 2);
            lVar14 = *param_1;
            if ((iVar4 < 0x46) || ((0x54 < iVar4 && (5 < iVar4 - 0x5eU)))) {
                if (iVar4 - 0x44U < 2) {
                    uVar10 = (lVar14 + 1U >> 1) << 2;
                } else {
                    lVar6 = FUN_1402b2300();
                    uVar10 = lVar6 * lVar14 + 7U >> 3;
                }
            } else {
                if ((iVar4 - 0x46U < 3) || (iVar12 = 0x10, iVar4 - 0x4fU < 3)) {
                    iVar12 = 8;
                }
                local_78 = lVar14 + 3U >> 2;
                local_70 = uVar16 + 3 >> 2;
                puVar5 = &local_78;
                if (local_78 < 2) {
                    puVar5 = &local_60;
                }
                local_60 = 1;
                local_68 = 1;
                uVar10 = *puVar5 * (longlong) iVar12;
                puVar5 = &local_70;
                if (local_70 < 2) {
                    puVar5 = &local_68;
                }
                uVar16 = *puVar5;
            }
        } else {
            uVar10 = *param_1 * 3;
        }
        iVar4 = FUN_1402b2750(param_2, uVar16 * uVar10 + 0x12);
        if (-1 < iVar4) {
            lVar14 = *param_2;
            FUN_1407e15b8(lVar14, param_2[1], local_58, 0x12);
            puVar9 = (undefined4 *) param_1[5];
            uVar16 = 0;
            puVar11 = (undefined * )(lVar14 + 0x12);
            if (param_1[1] != 0) {
                do {
                    if (uVar3 == 0) {
                        local_88 = *(undefined4 * )(param_1 + 2);
                        local_80 = 0;
                        if (((uint) local_78 >> 0x10 & 1) == 0) {
                            FUN_1402c2a00(puVar11, uVar10, puVar9, param_1[3]);
                        } else {
                            FUN_1402c2e80();
                        }
                    } else {
                        uVar2 = param_1[3];
                        uVar15 = 0;
                        if (uVar2 != 0) {
                            puVar8 = puVar11 + 2;
                            puVar7 = puVar11;
                            puVar13 = puVar9;
                            do {
                                uVar1 = *puVar13;
                                puVar13 = puVar13 + 1;
                                if (puVar11 + uVar10 < puVar8) break;
                                *puVar7 = (char) uVar1;
                                uVar15 = uVar15 + 4;
                                puVar7[1] = (char) ((uint) uVar1 >> 8);
                                puVar7[2] = (char) ((uint) uVar1 >> 0x10);
                                puVar8 = puVar8 + 3;
                                puVar7 = puVar7 + 3;
                            } while (uVar15 < uVar2);
                        }
                    }
                    puVar9 = (undefined4 * )((longlong) puVar9 + param_1[3]);
                    uVar16 = uVar16 + 1;
                    puVar11 = puVar11 + uVar10;
                } while (uVar16 < (ulonglong) param_1[1]);
            }
        }
    }
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack168);
    return;
}


undefined4 FUN_1402b56e0(longlong param_1, undefined8 param_2, undefined4 *param_3) {
    uint uVar1;
    uint *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;

    uVar3 = 0;
    puVar2 = &DAT_140c4086c;
    uVar4 = uVar3;
    do {
        uVar1 = *puVar2;
        if ((*(uint * )(param_1 + 4) & uVar1) != 0) {
            if ((uVar1 & 4) == 0) {
                if ((uVar1 & 0x20) == 0) {
                    if ((((*(uint * )(param_1 + 0xc) != puVar2[2]) || (*(uint * )(param_1 + 0x10) != puVar2[3]))
                         || (*(uint * )(param_1 + 0x14) != puVar2[4])) ||
                        (*(uint * )(param_1 + 0x18) != puVar2[5]))
                        goto LAB_1402b573a;
                    bVar5 = *(uint * )(param_1 + 0x1c) == puVar2[6];
                } else {
                    bVar5 = *(uint * )(param_1 + 0xc) == puVar2[2];
                }
            } else {
                bVar5 = *(uint * )(param_1 + 8) == puVar2[1];
            }
            if (bVar5) {
                if (0x2b < uVar4) {
                    return 0;
                }
                *param_3 = (&DAT_140c40864)[uVar4 * 10];
                return (&DAT_140c40860)[uVar4 * 10];
            }
        }
        LAB_1402b573a:
        uVar3 = uVar3 + 0x28;
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 10;
        if (0x6df < uVar3) {
            return 0;
        }
    } while (true);
}


undefined8 FUN_1402b5780(int *param_1, ulonglong param_2, ulonglong *param_3, uint *param_4) {
    uint uVar1;
    int iVar2;
    ulonglong uVar3;

    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    if (param_2 < 0x80) {
        return 0x8007000d;
    }
    if (((*param_1 != 0x20534444) || (param_1[1] != 0x7c)) || (param_1[0x13] != 0x20)) {
        return 0x80004005;
    }
    uVar3 = (ulonglong)(uint)
    param_1[7];
    if (uVar3 == 0) {
        uVar3 = 1;
    }
    param_3[4] = uVar3;
    if (((*(byte * )(param_1 + 0x14) & 4) == 0) || (param_1[0x15] != 0x30315844)) {
        param_3[3] = 1;
        if ((param_1[2] & 0x800000U) == 0) {
            if (((uint) param_1[0x1c] >> 9 & 1) != 0) {
                if ((param_1[0x1c] & 0xfe00U) != 0xfe00) {
                    return 0x80070032;
                }
                *(uint * )(param_3 + 5) = *(uint * )(param_3 + 5) | 4;
                param_3[3] = 6;
            }
            *param_3 = (ulonglong)(uint)
            param_1[4];
            uVar1 = param_1[3];
            param_3[2] = 1;
            param_3[1] = (ulonglong) uVar1;
            *(undefined4 * )((longlong) param_3 + 0x34) = 3;
        } else {
            *param_3 = (ulonglong)(uint)
            param_1[4];
            param_3[1] = (ulonglong)(uint)
            param_1[3];
            uVar1 = param_1[6];
            *(undefined4 * )((longlong) param_3 + 0x34) = 4;
            param_3[2] = (ulonglong) uVar1;
        }
        iVar2 = FUN_1402b56e0(param_1 + 0x13, param_2, param_4);
        *(int *) (param_3 + 6) = iVar2;
        if (iVar2 == 0) {
            return 0x80070032;
        }
        if ((*param_4 & 0x20000) != 0) {
            *(uint * )((longlong) param_3 + 0x2c) = *(uint * )((longlong) param_3 + 0x2c) | 2;
        }
    } else {
        if (param_2 < 0x94) {
            return 0x80004005;
        }
        uVar1 = param_1[0x23];
        *param_4 = *param_4 | 0x10000;
        param_3[3] = (ulonglong) uVar1;
        if (((ulonglong) uVar1 == 0) ||
            (iVar2 = param_1[0x20], *(int *) (param_3 + 6) = iVar2, 0x72 < (longlong) iVar2 - 1U)) {
            return 0x8007000d;
        }
        uVar1 = param_1[0x22];
        *(uint * )(param_3 + 5) = uVar1 & 0xfffffffb;
        iVar2 = param_1[0x21];
        if (iVar2 == 2) {
            if (((*(byte * )(param_1 + 2) & 2) != 0) && (param_1[3] != 1)) {
                return 0x8007000d;
            }
            uVar1 = param_1[4];
            param_3[1] = 1;
            *(undefined4 * )((longlong) param_3 + 0x34) = 2;
            *param_3 = (ulonglong) uVar1;
            param_3[2] = 1;
            *(int *) ((longlong) param_3 + 0x2c) = param_1[0x24];
        } else if (iVar2 == 3) {
            if ((*(byte * )(param_1 + 0x22) & 4) != 0) {
                *(uint * )(param_3 + 5) = uVar1 & 0xfffffffb | 4;
                param_3[3] = param_3[3] * 6;
            }
            *param_3 = (ulonglong)(uint)
            param_1[4];
            uVar1 = param_1[3];
            *(undefined4 * )((longlong) param_3 + 0x34) = 3;
            param_3[1] = (ulonglong) uVar1;
            param_3[2] = 1;
            *(int *) ((longlong) param_3 + 0x2c) = param_1[0x24];
        } else {
            if (iVar2 != 4) {
                return 0x8007000d;
            }
            if ((param_1[2] & 0x800000U) == 0) {
                return 0x8007000d;
            }
            if (1 < param_3[3]) {
                return 0x80070032;
            }
            *param_3 = (ulonglong)(uint)
            param_1[4];
            param_3[1] = (ulonglong)(uint)
            param_1[3];
            uVar1 = param_1[6];
            *(undefined4 * )((longlong) param_3 + 0x34) = 4;
            param_3[2] = (ulonglong) uVar1;
            *(int *) ((longlong) param_3 + 0x2c) = param_1[0x24];
        }
    }
    if ((*(int *) (param_3 + 6) - 0x55U < 2) || (*(int *) (param_3 + 6) == 0x73)) {
        *param_4 = *param_4 | 1;
        *(undefined4 * )(param_3 + 6) = 0x1c;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x0001402b5a7b)
// WARNING: Removing unreachable block (ram,0x0001402b602f)
// WARNING: Could not reconcile some variable overlaps

void FUN_1402b5a20(ulonglong *param_1, undefined8 param_2, undefined4 *param_3, ulonglong param_4,
                   ulonglong *param_5) {
    uint uVar1;
    undefined4 uVar2;
    bool bVar3;
    ulonglong *puVar4;
    longlong lVar5;
    undefined *puVar6;
    int iVar7;
    undefined *puVar8;
    ulonglong uVar9;
    int iVar10;
    ulonglong uVar11;
    undefined auStack152[32];
    ulonglong local_78;
    ulonglong local_70;
    ulonglong local_68;
    ulonglong local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    bVar3 = false;
    if ((1 < param_1[3]) &&
        (((param_1[3] != 6 || (*(int *) ((longlong) param_1 + 0x34) != 3)) ||
          (bVar3 = false, (*(uint * )(param_1 + 5) >> 2 & 1) == 0)))) {
        bVar3 = true;
    }
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    if (bVar3) goto switchD_1402b5ac9_caseD_3;
    switch (*(undefined4 * )(param_1 + 6)) {
        case 2:
            local_50 = 0x74;
            goto LAB_1402b5d66;
        case 10:
            local_50 = 0x71;
            goto LAB_1402b5d66;
        case 0xb:
            local_50 = 0x24;
            goto LAB_1402b5d66;
        case 0xd:
            local_50 = 0x6e;
            goto LAB_1402b5d66;
        case 0x10:
            local_50 = 0x73;
            goto LAB_1402b5d66;
        case 0x1c:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b621b8);
            break;
        case 0x22:
            local_50 = 0x70;
            goto LAB_1402b5d66;
        case 0x23:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62318);
            break;
        case 0x29:
            local_50 = 0x72;
            goto LAB_1402b5d66;
        case 0x31:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b622d8);
            break;
        case 0x36:
            local_50 = 0x6f;
        LAB_1402b5d66:
            local_58 = 0x400000020;
            break;
        case 0x38:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62238);
            break;
        case 0x3d:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b620b8);
            break;
        case 0x41:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b622b8);
            break;
        case 0x44:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62138);
            break;
        case 0x45:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b620d8);
            break;
        case 0x47:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62158);
            break;
        case 0x4a:
            puVar6 = &DAT_140b62198;
            puVar8 = &DAT_140b622f8;
            goto LAB_1402b5be7;
        case 0x4d:
            puVar6 = &DAT_140b62118;
            puVar8 = &DAT_140b62178;
        LAB_1402b5be7:
            if (((byte) * (undefined4 * )((longlong) param_1 + 0x2c) & 7) == 2) {
                puVar8 = puVar6;
            }
            FUN_1407e15b8(&local_58, 0x20, puVar8);
            break;
        case 0x50:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62078);
            break;
        case 0x51:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b621f8);
            break;
        case 0x53:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62298);
            break;
        case 0x54:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b621d8);
            break;
        case 0x55:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b620f8);
            break;
        case 0x56:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62098);
            break;
        case 0x57:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62218);
            break;
        case 0x58:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62258);
            break;
        case 0x73:
            FUN_1407e15b8(&local_58, 0x20, &DAT_140b62338);
    }
    switchD_1402b5ac9_caseD_3:
    *param_5 = 0x80;
    if ((int) local_58 == 0) {
        *param_5 = 0x94;
    }
    if ((param_3 != (undefined4 *) 0x0) && (*param_5 <= param_4)) {
        *param_3 = 0x20534444;
        FUN_1407e4830(param_3 + 1, 0, 0x7c);
        param_3[1] = 0x7c;
        param_3[2] = 0x1007;
        param_3[0x1b] = 0x1000;
        if (param_1[4] != 0) {
            param_3[2] = 0x21007;
            if (0xffffffff < param_1[4]) goto LAB_1402b604e;
            uVar1 = *(uint * )(param_1 + 4);
            param_3[7] = uVar1;
            if (1 < uVar1) {
                param_3[0x1b] = 0x401008;
            }
        }
        iVar10 = *(int *) ((longlong) param_1 + 0x34);
        if (iVar10 == 2) {
            if (0xffffffff < *param_1) goto LAB_1402b604e;
            uVar2 = *(undefined4 *) param_1;
            param_3[6] = 1;
            param_3[3] = 1;
            param_3[4] = uVar2;
        } else if (iVar10 == 3) {
            if ((0xffffffff < param_1[1]) || (0xffffffff < *param_1)) goto LAB_1402b604e;
            param_3[3] = *(undefined4 * )(param_1 + 1);
            uVar2 = *(undefined4 *) param_1;
            param_3[6] = 1;
            param_3[4] = uVar2;
            if ((*(uint * )(param_1 + 5) >> 2 & 1) != 0) {
                param_3[0x1b] = param_3[0x1b] | 8;
                param_3[0x1c] = param_3[0x1c] | 0xfe00;
            }
        } else {
            if ((((iVar10 != 4) || (0xffffffff < param_1[1])) || (0xffffffff < *param_1)) ||
                (0xffffffff < param_1[2]))
                goto LAB_1402b604e;
            param_3[2] = param_3[2] | 0x800000;
            param_3[0x1c] = param_3[0x1c] | 0x200000;
            param_3[3] = *(undefined4 * )(param_1 + 1);
            param_3[4] = *(undefined4 *) param_1;
            param_3[6] = *(undefined4 * )(param_1 + 2);
        }
        iVar10 = *(int *) (param_1 + 6);
        uVar11 = param_1[1];
        uVar9 = *param_1;
        if ((iVar10 < 0x46) || ((0x54 < iVar10 && (5 < iVar10 - 0x5eU)))) {
            if (iVar10 - 0x44U < 2) {
                uVar9 = (uVar9 + 1 >> 1) << 2;
            } else {
                lVar5 = FUN_1402b2300(iVar10);
                uVar9 = lVar5 * uVar9 + 7 >> 3;
            }
        } else {
            if ((iVar10 - 0x46U < 3) || (iVar7 = 0x10, iVar10 - 0x4fU < 3)) {
                iVar7 = 8;
            }
            local_70 = uVar9 + 3 >> 2;
            local_78 = uVar11 + 3 >> 2;
            puVar4 = &local_70;
            if (local_70 < 2) {
                puVar4 = &local_60;
            }
            local_60 = 1;
            local_68 = 1;
            uVar9 = *puVar4 * (longlong) iVar7;
            puVar4 = &local_78;
            if (local_78 < 2) {
                puVar4 = &local_68;
            }
            uVar11 = *puVar4;
        }
        if ((uVar11 * uVar9 < 0x100000000) && (uVar9 < 0x100000000)) {
            if ((iVar10 - 0x46U < 0xf) || (iVar10 - 0x5eU < 6)) {
                param_3[2] = param_3[2] | 0x80000;
                param_3[5] = (int) (uVar11 * uVar9);
            } else {
                param_3[2] = param_3[2] | 8;
                param_3[5] = (int) uVar9;
            }
            if ((int) local_58 == 0) {
                FUN_1407e15b8(param_3 + 0x13, 0x20, &DAT_140b62278);
                *(undefined8 * )(param_3 + 0x20) = 0;
                *(undefined8 * )(param_3 + 0x22) = 0;
                param_3[0x24] = 0;
                param_3[0x20] = *(undefined4 * )(param_1 + 6);
                param_3[0x21] = *(undefined4 * )((longlong) param_1 + 0x34);
                if (param_1[3] < 0x100000000) {
                    uVar1 = *(uint * )(param_1 + 5);
                    param_3[0x22] = uVar1 & 0xfffffffb;
                    if ((*(byte * )(param_1 + 5) & 4) == 0) {
                        param_3[0x23] = *(undefined4 * )(param_1 + 3);
                    } else {
                        param_3[0x22] = uVar1 & 0xfffffffb | 4;
                        param_3[0x23] = (int) (param_1[3] / 6);
                    }
                }
            } else {
                FUN_1407e15b8(param_3 + 0x13, 0x20, &local_58);
            }
        }
    }
    LAB_1402b604e:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack152);
    return;
}


uint FUN_1402b6160(uint param_1) {
    uint uVar1;

    uVar1 = 0;
    if ((param_1 & 8) != 0) {
        return (param_1 & 0x800 | 0x2000) >> 0xb;
    }
    if ((param_1 & 0x10) != 0) {
        return 1;
    }
    if ((param_1 >> 9 & 1) != 0) {
        return 2;
    }
    if ((param_1 >> 10 & 1) != 0) {
        return 3;
    }
    if ((param_1 >> 8 & 1) != 0) {
        uVar1 = 6;
    }
    return uVar1;
}


ulonglong FUN_1402b61b0(uint *param_1, byte *param_2, int param_3, ushort *param_4, byte *param_5,
                        int param_6, longlong param_7, uint param_8) {
    byte bVar1;
    byte bVar2;
    ushort uVar3;
    uint uVar4;
    byte *pbVar5;
    ulonglong uVar6;
    uint *puVar7;
    uint uVar8;
    byte *pbVar9;
    uint uVar10;
    ushort *puVar11;

    uVar4 = param_6 - 1;
    pbVar5 = (byte * )(ulonglong)
    uVar4;
    if (uVar4 < 6) {
        pbVar5 = (byte * )(longlong)(int)
        uVar4;
        switch (uVar4) {
            case 0:
                if (param_3 != 0x1c) goto LAB_1402b66cf;
                if (param_5 != (byte *) 0x0) {
                    puVar7 = param_1;
                    puVar11 = param_4 + 1;
                    do {
                        pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1);
                        if (param_2 <= pbVar5) break;
                        pbVar5 = (byte * )((-2 - (longlong) param_4) + (longlong)(ushort * )((longlong) puVar11 + 3));
                        *puVar7 = CONCAT21(CONCAT11(*(byte * )(puVar11 + -1), *(byte * )((longlong) puVar11 + -1)),
                                           *(byte *) puVar11) | 0xff000000;
                        puVar7 = puVar7 + 1;
                        puVar11 = (ushort * )((longlong) puVar11 + 3);
                    } while (pbVar5 < param_5);
                }
                break;
            case 1:
                if (param_3 == 0x1c) {
                    if (param_5 != (byte *) 0x0) {
                        puVar7 = param_1;
                        puVar11 = param_4;
                        while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                            bVar1 = *(byte *) puVar11;
                            puVar11 = (ushort * )((longlong) puVar11 + 1);
                            uVar4 = (uint) bVar1;
                            uVar10 = uVar4 & 3;
                            *puVar7 = (((((uVar10 * 4 | uVar10) << 2 | uVar10) << 5 | uVar4 & 0x1c) << 3 |
                                        uVar4 & 0x1c) << 3 | uVar4 & 0x18) << 5 |
                                      ((uint)(bVar1 >> 3) | uVar4 & 0xe0) >> 3 | uVar4 << 0x16 | uVar4 & 0xe0 |
                                      0xff000000;
                            puVar7 = puVar7 + 1;
                            if (param_5 <= (byte * )((longlong) puVar11 - (longlong) param_4)) {
                                return CONCAT71(
                                        (int7)((ulonglong)(byte * )((longlong) puVar11 - (longlong) param_4) >> 8
                                        ), 1);
                            }
                        }
                    }
                } else {
                    if (param_3 != 0x55) goto LAB_1402b66cf;
                    if (param_5 != (byte *) 0x0) {
                        puVar7 = param_1;
                        puVar11 = param_4;
                        while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                            bVar1 = *(byte *) puVar11;
                            puVar11 = (ushort * )((longlong) puVar11 + 1);
                            *(ushort *) puVar7 =
                                    (((((bVar1 & 0xffe0) << 2 | (ushort)(bVar1 & 0x1c)) * 2 | (ushort)(bVar1 & 0xc0))
                                              << 2 | (ushort)(bVar1 & 0x1f)) << 2 | (ushort)(bVar1 & 3)) * 2 |
                                    (ushort)(bVar1 >> 1 & 1);
                            puVar7 = (uint * )((longlong) puVar7 + 2);
                            if (param_5 <= (byte * )((longlong) puVar11 - (longlong) param_4)) {
                                return CONCAT71(
                                        (int7)((ulonglong)(byte * )((longlong) puVar11 - (longlong) param_4) >> 8
                                        ), 1);
                            }
                        }
                    }
                }
                break;
            case 2:
                if (param_3 != 0x1c) goto LAB_1402b66cf;
                pbVar9 = (byte *) 0x0;
                if (param_5 != (byte *) 0x0) {
                    puVar7 = param_1;
                    while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                        uVar3 = *param_4;
                        param_4 = param_4 + 1;
                        uVar4 = (uint) uVar3;
                        uVar10 = uVar4 & 3;
                        if ((param_8 & 1) == 0) {
                            uVar8 = (uVar4 & 0xff00) << 0x10;
                        } else {
                            uVar8 = 0xff000000;
                        }
                        pbVar9 = pbVar9 + 2;
                        *puVar7 = uVar8 | (((uVar10 * 4 | uVar10) << 2 | uVar10) << 2 | uVar10) << 0x10 |
                                  (((uVar4 & 0x1c) * 8 | uVar4 & 0x1c) << 3 | uVar4 & 0x18) << 5 |
                                  (uVar3 >> 3 & 0x18 | uVar4 & 0xe0) >> 3 | uVar4 & 0xe0;
                        puVar7 = puVar7 + 1;
                        if (param_5 <= pbVar9) {
                            return 1;
                        }
                    }
                }
                break;
            case 3:
                if ((param_3 != 0x1c) || (param_7 == 0)) goto LAB_1402b66cf;
                if (param_5 != (byte *) 0x0) {
                    puVar7 = param_1;
                    puVar11 = param_4;
                    while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                        bVar1 = *(byte *) puVar11;
                        puVar11 = (ushort * )((longlong) puVar11 + 1);
                        *puVar7 = *(uint * )(param_7 + (ulonglong) bVar1 * 4);
                        puVar7 = puVar7 + 1;
                        if (param_5 <= (byte * )((longlong) puVar11 - (longlong) param_4)) {
                            return CONCAT71((int7)((ulonglong)(byte * )((longlong) puVar11 - (longlong) param_4) >> 8),
                                            1);
                        }
                    }
                }
                break;
            case 4:
                if ((param_3 != 0x1c) || (param_7 == 0)) goto LAB_1402b66cf;
                pbVar9 = (byte *) 0x0;
                if (param_5 != (byte *) 0x0) {
                    puVar7 = param_1;
                    while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                        uVar3 = *param_4;
                        param_4 = param_4 + 1;
                        if ((param_8 & 1) == 0) {
                            uVar4 = (uVar3 & 0xff00) << 0x10;
                        } else {
                            uVar4 = 0xff000000;
                        }
                        uVar4 = uVar4 | *(uint * )(param_7 + (ulonglong)(byte)
                        uVar3 * 4);
                        pbVar9 = pbVar9 + 2;
                        *puVar7 = uVar4;
                        puVar7 = puVar7 + 1;
                        if (param_5 <= pbVar9) {
                            return CONCAT71((uint7)(uint3)(uVar4 >> 8), 1);
                        }
                    }
                }
                break;
            case 5:
                if (param_3 == 0x1c) {
                    pbVar9 = (byte *) 0x0;
                    if (param_5 != (byte *) 0x0) {
                        puVar7 = param_1;
                        while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                            bVar1 = *(byte *) param_4;
                            param_4 = (ushort * )((longlong) param_4 + 1);
                            uVar4 = (uint) bVar1;
                            uVar10 = (uVar4 & 0xf) << 4 | uVar4 & 0xf;
                            if ((param_8 & 1) == 0) {
                                uVar4 = (uVar4 & 0xf0) << 0x14 | (uVar4 & 0xf0) << 0x18;
                            } else {
                                uVar4 = 0xff000000;
                            }
                            pbVar9 = pbVar9 + 1;
                            uVar4 = (uVar10 << 8 | uVar10) << 8 | uVar4;
                            *puVar7 = uVar4 | uVar10;
                            puVar7 = puVar7 + 1;
                            if (param_5 <= pbVar9) {
                                return CONCAT71((uint7)(uint3)(uVar4 >> 8), 1);
                            }
                        }
                    }
                } else {
                    if (param_3 != 0x73) goto LAB_1402b66cf;
                    pbVar9 = (byte *) 0x0;
                    if (param_5 != (byte *) 0x0) {
                        puVar7 = param_1;
                        while (pbVar5 = (byte * )((longlong) puVar7 - (longlong) param_1), pbVar5 < param_2) {
                            bVar1 = *(byte *) param_4;
                            param_4 = (ushort * )((longlong) param_4 + 1);
                            bVar2 = bVar1 & 0xf;
                            if ((param_8 & 1) == 0) {
                                uVar3 = (bVar1 & 0xfff0) << 8;
                            } else {
                                uVar3 = 0xf000;
                            }
                            pbVar9 = pbVar9 + 1;
                            uVar3 = ((ushort) bVar2 << 4 | (ushort) bVar2) << 4 | uVar3;
                            *(ushort *) puVar7 = uVar3 | bVar2;
                            puVar7 = (uint * )((longlong) puVar7 + 2);
                            if (param_5 <= pbVar9) {
                                return CONCAT71((uint7)(byte)(uVar3 >> 8), 1);
                            }
                        }
                    }
                }
        }
        uVar6 = CONCAT71((int7)((ulonglong) pbVar5 >> 8), 1);
    } else {
        LAB_1402b66cf:
        uVar6 = (ulonglong) pbVar5 & 0xffffffffffffff00;
    }
    return uVar6;
}


undefined4
FUN_1402b6700(undefined8 param_1, undefined8 param_2, longlong param_3, uint param_4, uint param_5,
              ulonglong param_6, ulonglong *param_7) {
    int iVar1;
    char cVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong *puVar13;
    uint uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    uint uVar17;
    longlong *plVar18;
    ulonglong in_stack_ffffffffffffff68;
    ulonglong uVar19;
    ulonglong uVar20;
    ulonglong in_stack_ffffffffffffff78;
    ulonglong local_70;
    ulonglong local_68;
    ulonglong local_60;
    ulonglong local_58;
    uint local_50;
    ulonglong local_48;
    longlong local_40;
    longlong local_38;
    ulonglong local_30;

    local_50 = param_5 & 1;
    if (local_50 != 0) {
        if ((param_5 & 0x10) == 0) {
            if ((param_5 & 0xce0) == 0) {
                if ((param_5 & 0x308) != 0) {
                    param_4 = param_4 | 0x40000;
                }
            } else {
                param_4 = param_4 | 0x20000;
            }
        } else {
            param_4 = param_4 | 0x10000;
        }
    }
    if ((((int) *(uint * )(param_3 + 0x34) < 2) ||
         (FUN_1402b2830(param_3, param_4, &local_58, &local_40,
                        in_stack_ffffffffffffff68 & 0xffffffff00000000 |
                        (ulonglong) * (uint * )(param_3 + 0x34)), uVar16 = local_58, local_58 == 0)) ||
        (local_58 != *param_7)) {
        return 0x80004005;
    }
    uVar5 = SUB168(ZEXT816(0x30) * ZEXT816(local_58), 0);
    if (SUB168(ZEXT816(0x30) * ZEXT816(local_58) >> 0x40, 0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar6 = FUN_14018b280(uVar5, 1);
    if (uVar6 == 0) {
        uVar3 = 0x8007000e;
        goto LAB_1402b69bd;
    }
    uVar19 = uVar6;
    uVar20 = uVar16;
    cVar2 = FUN_1402b29b0(param_1, param_2, param_3, param_4, uVar6, uVar16);
    if (((cVar2 != '\0') && (uVar16 == *param_7)) &&
        (uVar15 = param_7[9], local_30 = uVar15, uVar15 != 0)) {
        uVar17 = param_5 >> 1 & 1;
        uVar14 = param_5 & 4;
        if (uVar14 != 0) {
            uVar17 = uVar17 | 2;
        }
        iVar1 = *(int *) (param_3 + 0x34);
        if (1 < iVar1) {
            if (iVar1 < 4) {
                uVar9 = 0;
                local_68 = 0;
                local_70 = 0;
                if (*(longlong * )(param_3 + 0x18) != 0) {
                    do {
                        local_60 = 0;
                        if (*(longlong * )(param_3 + 0x20) != 0) {
                            plVar18 = (longlong * )(uVar9 * 0x30 + 0x18 + uVar15);
                            local_40 = uVar6 - uVar15;
                            uVar7 = local_40 + 8;
                            local_48 = uVar7;
                            do {
                                uVar15 = 0;
                                if ((uVar16 <= uVar9) ||
                                    (plVar18[-2] != *(longlong * )((longlong) plVar18 + local_40 + -0x10)))
                                    goto LAB_1402b69b6;
                                lVar10 = *(longlong * )((longlong) plVar18 + local_40 + 0x10);
                                lVar8 = *plVar18;
                                uVar9 = *(ulonglong * )((longlong) plVar18 + local_40);
                                if ((lVar10 == 0) || (lVar12 = plVar18[2], lVar12 == 0)) goto LAB_1402b6d00;
                                iVar1 = *(int *) (param_3 + 0x30);
                                if ((iVar1 < 0x46) || ((0x54 < iVar1 && (5 < iVar1 - 0x5eU)))) {
                                    uVar16 = local_58;
                                    if (plVar18[-2] != 0) {
                                        do {
                                            if (local_50 == 0) {
                                                uVar20 = uVar20 & 0xffffffff00000000 | (ulonglong) uVar17;
                                                uVar19 = uVar19 & 0xffffffff00000000 |
                                                         (ulonglong) * (uint * )(param_3 + 0x30);
                                                if (uVar14 == 0) {
                                                    FUN_1402c2a00(lVar12, lVar8, lVar10, uVar9, uVar19, uVar20);
                                                } else {
                                                    FUN_1402c2e80();
                                                }
                                            } else {
                                                uVar19 = uVar9;
                                                if ((param_5 & 0xe0) == 0) {
                                                    lVar11 = param_3;
                                                    uVar4 = FUN_1402b6160(param_5);
                                                    uVar20 = uVar20 & 0xffffffff00000000 | (ulonglong) uVar4;
                                                    in_stack_ffffffffffffff78 = param_6;
                                                    cVar2 = FUN_1402b61b0(lVar12, lVar8,
                                                                          *(undefined4 * )(lVar11 + 0x30), lVar10,
                                                                          uVar9, uVar20, param_6, uVar17);
                                                } else {
                                                    in_stack_ffffffffffffff78 =
                                                            in_stack_ffffffffffffff78 & 0xffffffff00000000 |
                                                            (ulonglong) uVar17;
                                                    uVar20 = uVar20 & 0xffffffff00000000 |
                                                             (ulonglong)(0x56 - ((param_5 & 0x20) != 0));
                                                    cVar2 = FUN_1402c3140(lVar12, lVar8, param_5, lVar10, uVar9, uVar20,
                                                                          in_stack_ffffffffffffff78);
                                                }
                                                if (cVar2 == '\0') goto LAB_1402b69b6;
                                            }
                                            uVar15 = uVar15 + 1;
                                            lVar10 = lVar10 + uVar9;
                                            lVar12 = lVar12 + lVar8;
                                            uVar7 = local_48;
                                            uVar16 = local_58;
                                        } while (uVar15 < (ulonglong) plVar18[-2]);
                                    }
                                } else {
                                    puVar13 = (ulonglong * )(plVar18 + 1);
                                    if (*(ulonglong * )((longlong) plVar18 + uVar7) < (ulonglong) plVar18[1]) {
                                        puVar13 = (ulonglong * )((longlong) plVar18 + uVar7);
                                    }
                                    FUN_1407e15b8(lVar12, plVar18[1], lVar10, *puVar13);
                                    uVar7 = local_48;
                                }
                                local_60 = local_60 + 1;
                                uVar9 = local_68 + 1;
                                plVar18 = plVar18 + 6;
                                uVar15 = local_30;
                                local_68 = uVar9;
                            } while (local_60 < *(ulonglong * )(param_3 + 0x20));
                        }
                        local_70 = local_70 + 1;
                    } while (local_70 < *(ulonglong * )(param_3 + 0x18));
                    uVar3 = 0;
                    goto LAB_1402b69bd;
                }
            } else {
                if (iVar1 != 4) goto LAB_1402b69b6;
                uVar9 = *(ulonglong * )(param_3 + 0x10);
                uVar7 = 0;
                local_68 = 0;
                local_48 = 0;
                local_60 = uVar9;
                if (*(longlong * )(param_3 + 0x20) != 0) {
                    do {
                        local_70 = 0;
                        if (uVar9 != 0) {
                            plVar18 = (longlong * )(uVar7 * 0x30 + 0x18 + uVar15);
                            local_40 = uVar6 - uVar15;
                            lVar10 = local_40 + 8;
                            local_38 = lVar10;
                            do {
                                uVar15 = 0;
                                if ((uVar16 <= uVar7) ||
                                    (plVar18[-2] != *(longlong * )(local_40 + -0x10 + (longlong) plVar18)))
                                    goto LAB_1402b69b6;
                                lVar8 = *(longlong * )(local_40 + 0x10 + (longlong) plVar18);
                                lVar12 = *plVar18;
                                uVar9 = *(ulonglong * )(local_40 + (longlong) plVar18);
                                if ((lVar8 == 0) || (lVar11 = plVar18[2], lVar11 == 0)) goto LAB_1402b6d00;
                                iVar1 = *(int *) (param_3 + 0x30);
                                if ((iVar1 < 0x46) || ((0x54 < iVar1 && (5 < iVar1 - 0x5eU)))) {
                                    uVar16 = local_58;
                                    if (plVar18[-2] != 0) {
                                        do {
                                            if (local_50 == 0) {
                                                uVar20 = uVar20 & 0xffffffff00000000 | (ulonglong) uVar17;
                                                uVar19 = uVar19 & 0xffffffff00000000 |
                                                         (ulonglong) * (uint * )(param_3 + 0x30);
                                                if (uVar14 == 0) {
                                                    FUN_1402c2a00(lVar11, lVar12, lVar8, uVar9, uVar19, uVar20);
                                                } else {
                                                    FUN_1402c2e80();
                                                }
                                            } else {
                                                uVar19 = uVar9;
                                                if ((param_5 & 0xe0) == 0) {
                                                    lVar10 = param_3;
                                                    uVar4 = FUN_1402b6160(param_5);
                                                    uVar20 = uVar20 & 0xffffffff00000000 | (ulonglong) uVar4;
                                                    in_stack_ffffffffffffff78 = param_6;
                                                    cVar2 = FUN_1402b61b0(lVar11, lVar12,
                                                                          *(undefined4 * )(lVar10 + 0x30), lVar8,
                                                                          uVar9, uVar20, param_6, uVar17);
                                                } else {
                                                    in_stack_ffffffffffffff78 =
                                                            in_stack_ffffffffffffff78 & 0xffffffff00000000 |
                                                            (ulonglong) uVar17;
                                                    uVar20 = uVar20 & 0xffffffff00000000 |
                                                             (ulonglong)(0x56 - ((param_5 & 0x20) != 0));
                                                    cVar2 = FUN_1402c3140(lVar11, lVar12, param_5, lVar8, uVar9, uVar20,
                                                                          in_stack_ffffffffffffff78);
                                                }
                                                if (cVar2 == '\0') goto LAB_1402b69b6;
                                            }
                                            uVar15 = uVar15 + 1;
                                            lVar8 = lVar8 + uVar9;
                                            lVar11 = lVar11 + lVar12;
                                            lVar10 = local_38;
                                            uVar16 = local_58;
                                        } while (uVar15 < (ulonglong) plVar18[-2]);
                                    }
                                } else {
                                    puVar13 = (ulonglong * )(plVar18 + 1);
                                    if (*(ulonglong * )(lVar10 + (longlong) plVar18) < (ulonglong) plVar18[1]) {
                                        puVar13 = (ulonglong * )(lVar10 + (longlong) plVar18);
                                    }
                                    FUN_1407e15b8(lVar11, plVar18[1], lVar8, *puVar13);
                                    lVar10 = local_38;
                                }
                                local_70 = local_70 + 1;
                                uVar7 = local_68 + 1;
                                plVar18 = plVar18 + 6;
                                uVar9 = local_60;
                                uVar15 = local_30;
                                local_68 = uVar7;
                            } while (local_70 < local_60);
                        }
                        if (1 < uVar9) {
                            uVar9 = uVar9 >> 1;
                            local_60 = uVar9;
                        }
                        local_48 = local_48 + 1;
                    } while (local_48 < *(ulonglong * )(param_3 + 0x20));
                }
            }
            uVar3 = 0;
            goto LAB_1402b69bd;
        }
    }
    LAB_1402b69b6:
    uVar3 = 0x80004005;
    LAB_1402b69bd:
    FUN_14018b900(uVar6, 0);
    return uVar3;
    LAB_1402b6d00:
    uVar3 = 0x80004003;
    goto LAB_1402b69bd;
}


ulonglong FUN_1402b6d30(longlong param_1, ulonglong param_2, undefined8 *param_3, undefined8 param_4) {
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint local_res10[2];
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;

    if (param_2 == 0) {
        return 0x80070057;
    }
    FUN_1402b34d0(param_4);
    lVar4 = 0;
    local_res10[0] = 0;
    uVar2 = FUN_1402b5780(param_1, param_2, &local_68, local_res10);
    uVar1 = local_res10[0];
    if (-1 < (int) uVar2) {
        uVar3 = 0x80;
        if ((local_res10[0] >> 0x10 & 1) != 0) {
            uVar3 = 0x94;
        }
        if ((local_res10[0] & 8) != 0) {
            lVar4 = uVar3 + param_1;
            uVar3 = uVar3 + 0x400;
            if (param_2 < uVar3) {
                return 0x80004005;
            }
        }
        uVar2 = FUN_1402b2c70(param_4, &local_68);
        if (-1 < (int) uVar2) {
            if (param_2 - uVar3 == 0) {
                FUN_1402b34d0(param_4);
                uVar2 = 0x80004005;
            } else {
                uVar1 = FUN_1402b6700(uVar3 + param_1, param_2 - uVar3, &local_68, 0, uVar1, lVar4, param_4);
                uVar2 = (ulonglong) uVar1;
                if ((int) uVar1 < 0) {
                    FUN_1402b34d0(param_4);
                } else {
                    if (param_3 != (undefined8 *) 0x0) {
                        *param_3 = local_68;
                        param_3[1] = local_60;
                        param_3[2] = local_58;
                        param_3[3] = local_50;
                        param_3[4] = local_48;
                        param_3[5] = local_40;
                        param_3[6] = local_38;
                    }
                    uVar2 = 0;
                }
            }
        }
    }
    return uVar2;
}


ulonglong FUN_1402b6eb0(longlong param_1, longlong param_2, longlong *param_3) {
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong local_res20;
    ulonglong *puVar10;

    local_res20 = 0;
    uVar3 = FUN_1402b5a20(param_2, param_2, 0, 0, &local_res20);
    if ((int) uVar3 < 0) {
        return uVar3;
    }
    lVar5 = 0;
    plVar4 = (longlong * )(param_1 + 0x28);
    uVar3 = local_res20;
    do {
        uVar3 = uVar3 + plVar4[-1];
        if (*plVar4 == 0) {
            return 0x80004003;
        }
        lVar5 = lVar5 + 1;
        plVar4 = plVar4 + 6;
    } while (lVar5 == 0);
    local_res20 = uVar3;
    if (*param_3 != 0) {
        FUN_14018b900(*param_3, 0);
        *param_3 = 0;
    }
    param_3[1] = 0;
    uVar3 = FUN_1402b2750(param_3, uVar3);
    if ((int) uVar3 < 0) {
        return uVar3;
    }
    puVar10 = &local_res20;
    lVar5 = *param_3;
    uVar1 = FUN_1402b5a20(param_2);
    if ((int) uVar1 < 0) {
        if (*param_3 != 0) {
            FUN_14018b900(*param_3, 0);
            *param_3 = 0;
        }
        param_3[1] = 0;
        return (ulonglong) uVar1;
    }
    lVar5 = lVar5 + local_res20;
    lVar6 = param_3[1] - local_res20;
    if (lVar6 == 0) {
        if (*param_3 != 0) {
            FUN_14018b900(*param_3, 0);
            *param_3 = 0;
        }
        param_3[1] = 0;
        return 0x80004005;
    }
    iVar2 = *(int *) (param_2 + 0x34);
    if (1 < iVar2) {
        if (iVar2 < 4) {
            lVar8 = 0;
            uVar3 = 0;
            if (*(longlong * )(param_2 + 0x18) == 0) {
                return 0;
            }
            do {
                uVar7 = 0;
                if (*(longlong * )(param_2 + 0x20) != 0) {
                    puVar9 = (undefined8 * )(param_1 + 0x28 + lVar8 * 0x30);
                    do {
                        if (lVar8 != 0) goto LAB_1402b718c;
                        lVar8 = puVar9[-1];
                        iVar2 = FUN_1407e15b8(lVar5, lVar6, *puVar9, lVar8, puVar10);
                        if (iVar2 != 0) {
                            if (*param_3 != 0) {
                                FUN_14018b900(*param_3, 0);
                                *param_3 = 0;
                            }
                            param_3[1] = 0;
                            return 0x80004005;
                        }
                        uVar7 = uVar7 + 1;
                        lVar5 = lVar5 + lVar8;
                        lVar6 = lVar6 - lVar8;
                        lVar8 = 1;
                        puVar9 = puVar9 + 6;
                    } while (uVar7 < *(ulonglong * )(param_2 + 0x20));
                }
                uVar3 = uVar3 + 1;
                if (*(ulonglong * )(param_2 + 0x18) <= uVar3) {
                    return 0;
                }
            } while (true);
        }
        if ((iVar2 == 4) && (*(longlong * )(param_2 + 0x18) == 1)) {
            uVar3 = *(ulonglong * )(param_2 + 0x10);
            lVar8 = 0;
            local_res20 = 0;
            if (*(longlong * )(param_2 + 0x20) == 0) {
                return 0;
            }
            do {
                uVar7 = 0;
                if (uVar3 != 0) {
                    puVar9 = (undefined8 * )(param_1 + 0x28 + lVar8 * 0x30);
                    do {
                        if (lVar8 != 0) {
                            LAB_1402b718c:
                            if (*param_3 != 0) {
                                FUN_14018b900(*param_3, 0);
                                *param_3 = 0;
                            }
                            param_3[1] = 0;
                            return 0x80004005;
                        }
                        lVar8 = puVar9[-1];
                        iVar2 = FUN_1407e15b8(lVar5, lVar6, *puVar9, lVar8, puVar10);
                        if (iVar2 != 0) goto LAB_1402b70c1;
                        uVar7 = uVar7 + 1;
                        lVar5 = lVar5 + lVar8;
                        lVar6 = lVar6 - lVar8;
                        lVar8 = 1;
                        puVar9 = puVar9 + 6;
                    } while (uVar7 < uVar3);
                }
                if (1 < uVar3) {
                    uVar3 = uVar3 >> 1;
                }
                local_res20 = local_res20 + 1;
                if (*(ulonglong * )(param_2 + 0x20) <= local_res20) {
                    return 0;
                }
            } while (true);
        }
    }
    LAB_1402b70c1:
    FUN_1402b2710(param_3);
    return 0x80004005;
}


undefined8 FUN_1402b71e0(uint param_1) {
    undefined8 uVar1;

    if ((param_1 & 0xf0000) != 0x10000) {
        uVar1 = 8;
        if ((param_1 & 0xf0000) != 0x20000) {
            uVar1 = 0;
        }
        return uVar1;
    }
    return 1;
}


char FUN_1402b7210(uint param_1) {
    param_1 = param_1 & 0xf00000;
    if (param_1 == 0x100000) {
        return '\0';
    }
    if (param_1 != 0x200000) {
        return (param_1 != 0x300000) + '\x02';
    }
    return '\x01';
}


int FUN_1402b7240(longlong *param_1, undefined8 param_2, undefined8 *param_3) {
    int iVar1;
    ulonglong uVar2;
    longlong *plVar3;

    if (param_3 != (undefined8 *) 0x0) {
        *param_3 = 0;
        param_3[1] = 0;
    }
    iVar1 = FUN_1402b1f70();
    if (iVar1 == 0) {
        if ((*param_1 == 0x4bfe4e036fddc324) && (param_1[1] == 0x18c98d76773d85b1)) {
            if (DAT_140c63663 == '\0') {
                if (param_3 != (undefined8 *) 0x0) {
                    *(undefined4 *) param_3 = 0x6fddc324;
                    *(undefined4 * )((longlong) param_3 + 4) = 0x4bfe4e03;
                    *(undefined4 * )(param_3 + 1) = 0x773d85b1;
                    *(undefined4 * )((longlong) param_3 + 0xc) = 0x19c98d76;
                }
                iVar1 = 2;
            } else {
                if (param_3 != (undefined8 *) 0x0) {
                    *(undefined4 *) param_3 = 0xe3fed78f;
                    *(undefined4 * )((longlong) param_3 + 4) = 0x4acfe8db;
                    *(undefined4 * )(param_3 + 1) = 0x7fe9c184;
                    *(undefined4 * )((longlong) param_3 + 0xc) = 0x27b33661;
                }
                iVar1 = 6;
            }
        } else {
            uVar2 = 0;
            plVar3 = &DAT_140c89210;
            do {
                if ((*plVar3 == *param_1) && (plVar3[1] == param_1[1])) {
                    if (param_3 != (undefined8 *) 0x0) {
                        *(undefined4 *) param_3 = (&DAT_140c89220)[uVar2 * 8];
                        *(undefined4 * )((longlong) param_3 + 4) = (&DAT_140c89224)[uVar2 * 8];
                        *(undefined4 * )(param_3 + 1) = (&DAT_140c89228)[uVar2 * 8];
                        *(undefined4 * )((longlong) param_3 + 0xc) = (&DAT_140c8922c)[uVar2 * 8];
                    }
                    iVar1 = FUN_1402b1f70();
                    break;
                }
                uVar2 = uVar2 + 1;
                plVar3 = plVar3 + 4;
            } while (uVar2 < 0x26);
        }
    }
    switch (iVar1) {
        case 0x42:
            iVar1 = 0x3d;
            if (param_3 != (undefined8 *) 0x0) {
                *(undefined4 *) param_3 = 0x6fddc324;
                *(undefined4 * )((longlong) param_3 + 4) = 0x4bfe4e03;
                *(undefined4 * )(param_3 + 1) = 0x773d85b1;
                *(undefined4 * )((longlong) param_3 + 0xc) = 0x8c98d76;
            }
            break;
        case 0x55:
        case 0x56:
            iVar1 = 0x1c;
            if (param_3 != (undefined8 *) 0x0) {
                *(undefined4 *) param_3 = 0xf5c7ad2d;
                *(undefined4 * )((longlong) param_3 + 4) = 0x43dd6a8d;
                *(undefined4 * )(param_3 + 1) = 0x99a2a8a7;
                *(undefined4 * )((longlong) param_3 + 0xc) = 0xe91a2635;
                return 0x1c;
            }
    }
    return iVar1;
}


void FUN_1402b7430(undefined8 param_1, longlong *param_2, ulonglong *param_3) {
    int iVar1;
    undefined4 uVar2;
    undefined auStack88[32];
    uint local_38;
    uint local_34;
    undefined local_30[16];
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong) auStack88;
    if (param_2 != (longlong *) 0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[3] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[2] = 1;
        param_3[4] = 1;
        *(undefined4 * )((longlong) param_3 + 0x34) = 3;
        iVar1 = (**(code * *)(*param_2 + 0x18))(param_2, &local_34, &local_38);
        if (-1 < iVar1) {
            param_3[3] = 1;
            *param_3 = (ulonglong) local_34;
            param_3[1] = (ulonglong) local_38;
            iVar1 = (**(code * *)(*param_2 + 0x20))(param_2, local_30);
            if (-1 < iVar1) {
                uVar2 = FUN_1402b7240(local_30);
                *(undefined4 * )(param_3 + 6) = uVar2;
            }
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong) auStack88);
    return;
}


ulonglong FUN_1402b7500(undefined8 *param_1, longlong *param_2, longlong *param_3, longlong param_4) {
    int iVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    longlong *local_res8;

    uVar4 = FUN_1402b2fe0(param_4, *(undefined4 * )(param_1 + 6), *param_1, param_1[1], 1, 1);
    if ((int) uVar4 < 0) {
        return uVar4;
    }
    if ((*(longlong * )(param_4 + 0x30) == 0) || (iVar1 = *(int *) (param_4 + 0x44), iVar1 < 2)) {
        return 0x80004003;
    }
    if (iVar1 < 4) {
        lVar2 = *(longlong * )(param_4 + 0x28);
    } else {
        if (iVar1 != 4) {
            return 0x80004003;
        }
        lVar2 = *(longlong * )(param_4 + 0x20);
    }
    if (lVar2 == 0) {
        return 0x80004003;
    }
    lVar2 = *(longlong * )(param_4 + 0x48);
    if (lVar2 == 0) {
        return 0x80004003;
    }
    plVar5 = (longlong *) FUN_1402b21e0();
    if (plVar5 == (longlong *) 0x0) {
        return 0x80004002;
    }
    if ((*param_2 == 0) && (param_2[1] == 0)) {
        uVar4 = (**(code * *)(*param_3 + 0x38))
                (param_3, 0, *(undefined4 * )(lVar2 + 0x18), *(undefined4 * )(lVar2 + 0x20),
                 *(undefined8 * )(lVar2 + 0x28));
        if ((int) uVar4 < 0) {
            return uVar4;
        }
        LAB_1402b7688:
        uVar4 = 0;
    } else {
        local_res8 = (longlong *) 0x0;
        uVar3 = (**(code * *)(*plVar5 + 0x50))(plVar5, &local_res8);
        uVar4 = (ulonglong) uVar3;
        if (-1 < (int) uVar3) {
            uVar3 = (**(code * *)(*local_res8 + 0x40))(local_res8, param_3, param_2, 0, 0, 0, 0);
            uVar4 = (ulonglong) uVar3;
            if (-1 < (int) uVar3) {
                uVar3 = (**(code * *)(*local_res8 + 0x38))
                        (local_res8, 0, *(undefined4 * )(lVar2 + 0x18), *(undefined4 * )(lVar2 + 0x20),
                         *(undefined8 * )(lVar2 + 0x28));
                uVar4 = (ulonglong) uVar3;
                if (-1 < (int) uVar3) {
                    if (local_res8 != (longlong *) 0x0) {
                        (**(code * *)(*local_res8 + 0x10))();
                    }
                    goto LAB_1402b7688;
                }
            }
        }
        if (local_res8 != (longlong *) 0x0) {
            (**(code * *)(*local_res8 + 0x10))();
        }
    }
    return uVar4;
}


void FUN_1402b76c0(ulonglong *param_1, undefined8 param_2, longlong *param_3, undefined8 param_4) {
    char cVar1;
    int iVar2;
    longlong *plVar3;
    undefined4 extraout_XMM0_Da;
    undefined auStack184[32];
    ulonglong local_98;
    ulonglong local_90;
    ulonglong local_88;
    longlong **local_80;
    longlong *local_78;
    longlong *local_70;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined8 local_48;
    undefined4 local_40;
    undefined4 local_3c;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack184;
    if (((((param_3 == (longlong *) 0x0) || (param_1[5] == 0)) ||
          (cVar1 = FUN_1402b1fe0(*(undefined4 * )(param_1 + 2), &local_68), cVar1 == '\0')) ||
         ((iVar2 = (**(code * *)(*param_3 + 0x18))(param_3, param_4), iVar2 < 0 ||
                                                                      (0xffffffff < *param_1)))) ||
        ((0xffffffff < param_1[1] ||
          ((iVar2 = (**(code * *)(*param_3 + 0x20))
                  (param_3, *(undefined4 *) param_1, *(undefined4 * )(param_1 + 1)), iVar2 < 0
                                                                                     || (iVar2 = (**(code * *)(
                  *param_3 + 0x28))(extraout_XMM0_Da, 0x4052000000000000, 0, param_3),
                  iVar2 < 0))))))
        goto LAB_1402b792e;
    local_58 = local_68;
    uStack84 = uStack100;
    uStack80 = uStack96;
    uStack76 = uStack92;
    iVar2 = (**(code * *)(*param_3 + 0x30))(param_3, &local_58);
    if (iVar2 < 0) goto LAB_1402b792e;
    if ((CONCAT44(uStack84, local_58) == CONCAT44(uStack100, local_68)) &&
        (CONCAT44(uStack76, uStack80) == CONCAT44(uStack92, uStack96))) {
        local_98 = param_1[5];
        iVar2 = (**(code * *)(*param_3 + 0x50))
                (param_3, *(undefined4 * )(param_1 + 1), *(undefined4 * )(param_1 + 3),
                 *(undefined4 * )(param_1 + 4));
        if (iVar2 < 0) goto LAB_1402b792e;
        LAB_1402b78df:
        (**(code * *)(*param_3 + 0x60))(param_3);
    } else {
        plVar3 = (longlong *) FUN_1402b21e0();
        if (plVar3 == (longlong *) 0x0) goto LAB_1402b792e;
        local_70 = (longlong *) 0x0;
        local_80 = &local_70;
        local_88 = param_1[5];
        local_90 = local_90 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 4);
        local_98 = local_98 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 3);
        iVar2 = (**(code * *)(*plVar3 + 0xa0))
                (plVar3, *(undefined4 *) param_1, *(undefined4 * )(param_1 + 1), &local_68);
        if (-1 < iVar2) {
            local_78 = (longlong *) 0x0;
            iVar2 = (**(code * *)(*plVar3 + 0x50))(plVar3, &local_78);
            if (-1 < iVar2) {
                local_88 = local_88 & 0xffffffff00000000;
                local_90 = 0;
                local_98 = 0;
                iVar2 = (**(code * *)(*local_78 + 0x40))(local_78, local_70, &local_58, 0);
                if (-1 < iVar2) {
                    local_40 = *(undefined4 *) param_1;
                    local_3c = *(undefined4 * )(param_1 + 1);
                    local_48 = 0;
                    iVar2 = (**(code * *)(*param_3 + 0x58))(param_3, local_78, &local_48);
                    if (-1 < iVar2) {
                        if (local_78 != (longlong *) 0x0) {
                            (**(code * *)(*local_78 + 0x10))();
                            local_78 = (longlong *) 0x0;
                        }
                        if (local_70 != (longlong *) 0x0) {
                            (**(code * *)(*local_70 + 0x10))();
                        }
                        goto LAB_1402b78df;
                    }
                }
            }
            if (local_78 != (longlong *) 0x0) {
                (**(code * *)(*local_78 + 0x10))();
                local_78 = (longlong *) 0x0;
            }
        }
        if (local_70 != (longlong *) 0x0) {
            (**(code * *)(*local_70 + 0x10))();
        }
    }
    LAB_1402b792e:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack184);
    return;
}


void FUN_1402b7950(undefined8 param_1, undefined8 param_2, longlong *param_3, longlong param_4) {
    int iVar1;
    longlong *plVar2;
    undefined auStack184[48];
    longlong *local_88;
    longlong *local_80;
    longlong *local_78;
    undefined2 local_70[4];
    undefined2 local_68;
    undefined8 local_58;
    undefined8 local_50;
    wchar_t *local_48;
    undefined8 local_40;
    undefined8 local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong) auStack184;
    if ((param_4 != 0) && (plVar2 = (longlong *) FUN_1402b21e0(), plVar2 != (longlong *) 0x0)) {
        local_80 = (longlong *) 0x0;
        iVar1 = (**(code * *)(*plVar2 + 0x40))(plVar2, param_3, 0, &local_80);
        if ((-1 < iVar1) && (iVar1 = (**(code * *)(*local_80 + 0x18))(local_80, param_4, 2), -1 < iVar1)) {
            local_78 = (longlong *) 0x0;
            local_88 = (longlong *) 0x0;
            iVar1 = (**(code * *)(*local_80 + 0x50))(local_80, &local_78, &local_88);
            if (-1 < iVar1) {
                if ((*param_3 == 0x4188fcfe0af1d87e) && (param_3[1] == -0x1c348e9b6f581443)) {
                    local_58 = 0;
                    local_50 = 0;
                    local_40 = 0;
                    local_38 = 0;
                    local_48 = L"EnableV5Header32bppBGRA";
                    local_70[0] = 0xb;
                    local_68 = 0xffff;
                    iVar1 = (**(code * *)(*local_88 + 0x20))(local_88, 1, &local_58, local_70);
                    if (iVar1 < 0) {
                        if (local_88 != (longlong *) 0x0) {
                            (**(code * *)(*local_88 + 0x10))();
                        }
                        local_88 = (longlong *) 0x0;
                    }
                }
                iVar1 = FUN_1402b76c0(param_1);
                if (-1 < iVar1) {
                    (**(code * *)(*local_80 + 0x58))();
                }
            }
            if (local_88 != (longlong *) 0x0) {
                (**(code * *)(*local_88 + 0x10))();
                local_88 = (longlong *) 0x0;
            }
            if (local_78 != (longlong *) 0x0) {
                (**(code * *)(*local_78 + 0x10))();
                local_78 = (longlong *) 0x0;
            }
        }
        if (local_80 != (longlong *) 0x0) {
            (**(code * *)(*local_80 + 0x10))();
        }
    }
    FUN_1407db4f0(local_30 ^ (ulonglong) auStack184);
    return;
}


int FUN_1402b7b20(undefined8 param_1, ulonglong param_2, undefined8 param_3) {
    int iVar1;
    longlong *plVar2;
    longlong *local_48;
    longlong *local_40;
    longlong *local_38[2];

    if (param_2 == 0) {
        return -0x7ff8ffa9;
    }
    if (param_2 < 0x100000000) {
        plVar2 = (longlong *) FUN_1402b21e0();
        if (plVar2 != (longlong *) 0x0) {
            local_38[0] = (longlong *) 0x0;
            iVar1 = (**(code * *)(*plVar2 + 0x70))(plVar2, local_38);
            if ((-1 < iVar1) &&
                (iVar1 = (**(code * *)(*local_38[0] + 0x80))(local_38[0], param_1, param_2 & 0xffffffff),
                        -1 < iVar1)) {
                local_48 = (longlong *) 0x0;
                iVar1 = (**(code * *)(*plVar2 + 0x20))(plVar2, local_38[0], 0, 0, &local_48);
                if (-1 < iVar1) {
                    local_40 = (longlong *) 0x0;
                    iVar1 = (**(code * *)(*local_48 + 0x68))(local_48, 0, &local_40);
                    if (-1 < iVar1) {
                        if (local_48 == (longlong *) 0x0) {
                            iVar1 = -0x7fffbffd;
                        } else {
                            iVar1 = FUN_1402b7430(local_48, local_40, param_3, 0);
                            if (-1 < iVar1) {
                                iVar1 = 0;
                            }
                        }
                    }
                    if (local_40 != (longlong *) 0x0) {
                        (**(code * *)(*local_40 + 0x10))(local_40);
                        local_40 = (longlong *) 0x0;
                    }
                }
                if (local_48 != (longlong *) 0x0) {
                    (**(code * *)(*local_48 + 0x10))();
                    local_48 = (longlong *) 0x0;
                }
            }
            if (local_38[0] != (longlong *) 0x0) {
                (**(code * *)(*local_38[0] + 0x10))();
            }
            return iVar1;
        }
        return -0x7fffbffe;
    }
    return -0x7ff8ff21;
}


void FUN_1402b7ca0(undefined8 param_1, ulonglong param_2, undefined8 *param_3, undefined8 param_4) {
    int iVar1;
    longlong *plVar2;
    undefined auStack232[32];
    longlong **local_c8;
    longlong *local_b8;
    longlong *local_b0;
    longlong *local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    if (((param_2 != 0) && (param_2 < 0x100000000)) &&
        (plVar2 = (longlong *) FUN_1402b21e0(), plVar2 != (longlong *) 0x0)) {
        FUN_1402b34d0(param_4);
        local_a8 = (longlong *) 0x0;
        iVar1 = (**(code * *)(*plVar2 + 0x70))(plVar2, &local_a8);
        if ((-1 < iVar1) &&
            (iVar1 = (**(code * *)(*local_a8 + 0x80))(local_a8, param_1, param_2 & 0xffffffff), -1 < iVar1)) {
            local_c8 = &local_b0;
            local_b0 = (longlong *) 0x0;
            iVar1 = (**(code * *)(*plVar2 + 0x20))(plVar2, local_a8, 0, 0);
            if (-1 < iVar1) {
                local_b8 = (longlong *) 0x0;
                iVar1 = (**(code * *)(*local_b0 + 0x68))(local_b0, 0, &local_b8);
                if (-1 < iVar1) {
                    local_68 = 0;
                    local_60 = 0;
                    if ((local_b0 != (longlong *) 0x0) &&
                        (iVar1 = FUN_1402b7430(local_b0, local_b8, &local_a0, &local_68), -1 < iVar1)) {
                        if (local_b8 == (longlong *) 0x0) {
                            FUN_1402b34d0(param_4);
                        } else {
                            iVar1 = FUN_1402b7500(&local_a0, &local_68, local_b8, param_4);
                            if (iVar1 < 0) {
                                FUN_1402b34d0(param_4);
                            } else if (param_3 != (undefined8 *) 0x0) {
                                *param_3 = local_a0;
                                param_3[1] = local_98;
                                param_3[2] = local_90;
                                param_3[3] = local_88;
                                param_3[4] = local_80;
                                param_3[5] = local_78;
                                param_3[6] = local_70;
                            }
                        }
                    }
                }
                if (local_b8 != (longlong *) 0x0) {
                    (**(code * *)(*local_b8 + 0x10))();
                    local_b8 = (longlong *) 0x0;
                }
            }
            if (local_b0 != (longlong *) 0x0) {
                (**(code * *)(*local_b0 + 0x10))();
                local_b0 = (longlong *) 0x0;
            }
        }
        if (local_a8 != (longlong *) 0x0) {
            (**(code * *)(*local_a8 + 0x10))();
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack232);
    return;
}


void FUN_1402b7ed0(undefined8 param_1, undefined8 param_2, void **param_3) {
    HRESULT HVar1;
    int iVar2;
    undefined auStack200[48];
    IStream *local_98;
    ULONG local_90[2];
    undefined8 local_88;
    undefined local_78[20];
    DWORD local_64;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack200;
    if (*param_3 != (void *) 0x0) {
        FUN_14018b900(*param_3, 0);
        *param_3 = (void *) 0x0;
    }
    param_3[1] = (void *) 0x0;
    local_98 = (IStream *) 0x0;
    HVar1 = CreateStreamOnHGlobal((HGLOBAL) 0x0, 1, &local_98);
    if ((((-1 < HVar1) && (iVar2 = FUN_1402b7950(param_1), -1 < iVar2)) &&
         (HVar1 = (*local_98->lpVtbl->Stat)(local_98, (STATSTG *) local_78, 1), -1 < HVar1)) &&
        ((local_64 == 0 && (iVar2 = FUN_1402b2750(param_3, local_78._16_4_), -1 < iVar2)))) {
        local_88 = 0;
        HVar1 = (*local_98->lpVtbl->Seek)(local_98, 0, 0, (ULARGE_INTEGER *) 0x0);
        if (-1 < HVar1) {
            (*local_98->lpVtbl->Read)(local_98, *param_3, *(ULONG * )(param_3 + 1), local_90);
        }
    }
    if (local_98 != (IStream *) 0x0) {
        (*local_98->lpVtbl->Release)(local_98);
    }
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack200);
    return;
}


undefined8 FUN_1402b8000(longlong param_1) {
    int iVar1;
    longlong *plVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 local_res8[2];
    undefined4 local_48[2];
    undefined4 local_40;
    longlong local_30;
    undefined4 local_28;
    undefined4 local_18;
    int local_14;

    iVar1 = *(int *) (param_1 + 0x38);
    if (iVar1 == 1) {
        plVar2 = *(longlong * *)(param_1 + 0x40);
        uVar4 = (**(code * *)(*plVar2 + 0x10))(plVar2);
        lVar5 = (**(code * *)(*plVar2 + 0x20))(plVar2);
        if (lVar5 == 0) {
            return 0x80070057;
        }
        uVar4 = FUN_1402b5160(lVar5, uVar4, local_48);
        if ((int) uVar4 < 0) {
            return uVar4;
        }
    } else if (iVar1 == 2) {
        plVar2 = *(longlong * *)(param_1 + 0x40);
        lVar5 = (**(code * *)(*plVar2 + 0x10))(plVar2);
        lVar6 = (**(code * *)(*plVar2 + 0x20))(plVar2);
        if (lVar6 == 0) {
            return 0x80070057;
        }
        if (lVar5 == 0) {
            return 0x80070057;
        }
        local_res8[0] = 0;
        uVar4 = FUN_1402b5780(lVar6, lVar5, local_48, local_res8);
        if ((int) uVar4 < 0) {
            return uVar4;
        }
    } else if (iVar1 - 3U < 3) {
        plVar2 = *(longlong * *)(param_1 + 0x40);
        uVar4 = (**(code * *)(*plVar2 + 0x10))(plVar2);
        lVar5 = (**(code * *)(*plVar2 + 0x20))(plVar2);
        if (lVar5 == 0) {
            return 0x80070057;
        }
        uVar4 = FUN_1402b7b20(lVar5, uVar4, local_48);
        if ((int) uVar4 < 0) {
            return uVar4;
        }
    }
    if (local_14 == 2) {
        if (local_30 != 1) {
            return 0x80004005;
        }
        *(undefined4 * )(param_1 + 0x18) = 0;
        *(undefined4 * )(param_1 + 0x20) = 1;
        *(undefined4 * )(param_1 + 0x1c) = local_48[0];
    } else {
        if (local_14 != 3) {
            if (local_14 != 4) {
                return 0x80004005;
            }
            if (local_30 != 1) {
                return 0x80004005;
            }
            *(undefined4 * )(param_1 + 0x18) = 1;
            goto LAB_1402b81b2;
        }
        if (local_30 == 1) {
            *(undefined4 * )(param_1 + 0x18) = 0;
            *(undefined4 * )(param_1 + 0x1c) = local_48[0];
            *(undefined4 * )(param_1 + 0x20) = local_40;
        } else {
            if (local_30 != 6) {
                return 0x80004005;
            }
            *(undefined4 * )(param_1 + 0x18) = 2;
            *(undefined4 * )(param_1 + 0x1c) = local_48[0];
            *(undefined4 * )(param_1 + 0x20) = local_40;
        }
    }
    *(undefined4 * )(param_1 + 0x24) = 1;
    LAB_1402b81b2:
    *(undefined4 * )(param_1 + 0x28) = local_28;
    uVar3 = FUN_14027a000(local_18);
    *(undefined4 * )(param_1 + 0x2c) = uVar3;
    return 0;
}


void FUN_1402b8200(undefined4 *param_1, longlong param_2, undefined4 param_3, int param_4) {
    int iVar1;
    undefined auStack104[32];
    undefined8 *local_48;
    undefined8 local_38;
    undefined8 local_30;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined4 local_14;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong) auStack104;
    param_1[1] = param_4;
    *param_1 = param_3;
    local_28 = param_4 << 4;
    local_24 = 2;
    *(undefined8 * )(param_1 + 2) = 0;
    local_14 = 0;
    local_20 = 4;
    param_1[4] = *(int *) (param_2 + 0xf0) + -1;
    local_1c = 0x10000;
    iVar1 = (**(code * *)(**(longlong * *)(param_2 + 0x18c0) + 0x18))
            (*(longlong * *)(param_2 + 0x18c0), &local_28, 0, param_1 + 6);
    if (iVar1 < 0) {
        local_38 = 0x141de7680;
        FUN_1401a3130(0xe, 2, &local_38, iVar1);
    } else if ((*(int *) (param_2 + 0x21d8) != 0) &&
               (iVar1 = FUN_1408194d0(*(undefined8 * )(param_2 + 0x18c0), *(undefined8 * )(param_1 + 6),
                                      &local_30), iVar1 == 0)) {
        local_48 = &local_38;
        local_38 = CONCAT44(local_38._4_4_, 1);
        FUN_140819670(*(undefined8 * )(param_2 + 0x18c0), local_30, 1);
    }
    FUN_1407db4f0(local_10 ^ (ulonglong) auStack104);
    return;
}


longlong FUN_1402b8320(undefined8 *param_1) {
    uint uVar1;
    longlong lVar2;

    uVar1 = *(uint * )((longlong) param_1 + 0xc);
    lVar2 = FUN_1400564a0(*param_1);
    return lVar2 * 0x3f7b69f4e4e9f0b9 +
           ((ulonglong) * (uint * )(param_1 + 1) * 0xaa7f8ea9 + (ulonglong) uVar1) * 0xaa7f8ea9 +
           (ulonglong) * (uint * )(param_1 + 2);
}


undefined8 FUN_1402b8380(longlong *param_1, longlong *param_2) {
    int iVar1;

    if (((*(int *) (param_1 + 1) == *(int *) (param_2 + 1)) &&
         (*(float *) ((longlong) param_2 + 0xc) == *(float *) ((longlong) param_1 + 0xc))) &&
        (*(int *) (param_1 + 2) == *(int *) (param_2 + 2))) {
        if ((*param_1 != *param_2) && (iVar1 = FUN_14018e2c0(), iVar1 != 0)) {
            return 0;
        }
        return 1;
    }
    return 0;
}


undefined8 FUN_1402b8420(longlong *param_1, longlong *param_2) {
    int iVar1;

    if (((*param_1 == *param_2) && (param_1[2] == param_2[2])) &&
        (*(int *) (param_1 + 3) == *(int *) (param_2 + 3))) {
        if ((param_1[1] != param_2[1]) &&
            (iVar1 = FUN_1407e6af0(param_1[1], param_2[1], param_1[2] * 2), iVar1 != 0)) {
            return 0;
        }
        return 1;
    }
    return 0;
}


undefined8 *FUN_1402b8470(undefined8 *param_1, undefined8 param_2) {
    *param_1 = &PTR_FUN_140b623a0;
    param_1[0xc] = 0;
    param_1[0x123] = 0;
    param_1[0x122] = 0;
    param_1[0x12e] = 0;
    param_1[0x12d] = 0;
    param_1[0x131] = 0;
    param_1[0x132] = 0;
    param_1[0x133] = 0;
    param_1[0x134] = 0;
    param_1[0x12f] = 0;
    *(undefined4 * )(param_1 + 0x130) = 0;
    param_1[0x135] = 0;
    param_1[0x136] = 0;
    param_1[3] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x15] = 0;
    param_1[0x1e] = 0;
    *(undefined4 * )(param_1 + 0x21) = 0;
    param_1[0x129] = 0;
    param_1[0x12a] = 0;
    param_1[299] = 0;
    param_1[300] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001402b873c)

void FUN_1402b8530(undefined8 *param_1) {
    longlong lVar1;
    longlong *plVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong **ppuVar8;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    *param_1 = &PTR_FUN_140b623a0;
    if (((HDC) param_1[0xd] != (HDC) 0x0) && ((HGDIOBJ) param_1[0xf] != (HGDIOBJ) 0x0)) {
        SelectObject((HDC) param_1[0xd], (HGDIOBJ) param_1[0xf]);
    }
    if ((HGDIOBJ) param_1[0xe] != (HGDIOBJ) 0x0) {
        DeleteObject((HGDIOBJ) param_1[0xe]);
    }
    FUN_14018b900(param_1[0x15]);
    if (((HDC) param_1[0xd] != (HDC) 0x0) && ((HGDIOBJ) param_1[0x11] != (HGDIOBJ) 0x0)) {
        SelectObject((HDC) param_1[0xd], (HGDIOBJ) param_1[0x11]);
    }
    if ((HGDIOBJ) param_1[0x10] != (HGDIOBJ) 0x0) {
        DeleteObject((HGDIOBJ) param_1[0x10]);
    }
    if ((HDC) param_1[0xd] != (HDC) 0x0) {
        DeleteDC((HDC) param_1[0xd]);
    }
    uVar7 = 0;
    uVar5 = uVar7;
    if (*(int *) (param_1 + 0x21) != 0) {
        do {
            FUN_14018b900();
            uVar6 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar6;
        } while (uVar6 < *(uint * )(param_1 + 0x21));
    }
    if (param_1[0x123] != 0) {
        do {
            lVar1 = param_1[0x122];
            plVar2 = *(longlong * *)(lVar1 + uVar7 * 8);
            if (plVar2 != (longlong *) 0x0) {
                (**(code * *)(*plVar2 + 8))();
                *(undefined8 * )(lVar1 + uVar7 * 8) = 0;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong) param_1[0x123]);
    }
    if (param_1[0x1e] != 0) {
        ScriptFreeCache();
    }
    FUN_14018b900(param_1[0x129]);
    FUN_14018b900(param_1[0x12a]);
    if (param_1[3] != 0) {
        local_28 = param_1[3];
        lVar1 = param_1[2];
        local_20 = param_1[4];
        local_18 = param_1[5];
        uVar5 = (**(code * *)(lVar1 + 0x58))(&local_28);
        uVar7 = uVar5 % *(ulonglong * )(lVar1 + 0x48);
        ppuVar8 = (ulonglong * *)(*(longlong * )(lVar1 + 0x50) + uVar7 * 8);
        puVar3 = *(ulonglong * *)(*(longlong * )(lVar1 + 0x50) + uVar7 * 8);
        while (puVar3 != (ulonglong *) 0x0) {
            if ((uVar5 == **ppuVar8) &&
                (iVar4 = (**(code * *)(lVar1 + 0x60))(&local_28, *ppuVar8 + 2), iVar4 != 0)) {
                puVar3 = *ppuVar8;
                *ppuVar8 = (ulonglong *) puVar3[1];
                FUN_14018b900(puVar3, 0);
                *(longlong * )(lVar1 + 0x40) = *(longlong * )(lVar1 + 0x40) + -1;
                break;
            }
            ppuVar8 = (ulonglong * *)(*ppuVar8 + 1);
            puVar3 = *ppuVar8;
        }
        FUN_14018b900(param_1[3], 0);
    }
    if ((undefined8 *) param_1[0x135] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x135] = param_1[0x136];
    }
    if (param_1[0x136] != 0) {
        *(undefined8 * )(param_1[0x136] + 0x9a8) = param_1[0x135];
    }
    param_1[0x135] = 0;
    param_1[0x136] = 0;
    param_1[0x135] = 0;
    param_1[0x136] = 0;
    if ((undefined8 *) param_1[0x133] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x133] = param_1[0x134];
    }
    if (param_1[0x134] != 0) {
        *(undefined8 * )(param_1[0x134] + 0x20) = param_1[0x133];
    }
    param_1[0x133] = 0;
    param_1[0x134] = 0;
    if ((undefined8 *) param_1[0x131] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x131] = param_1[0x132];
    }
    if (param_1[0x132] != 0) {
        *(undefined8 * )(param_1[0x132] + 0x10) = param_1[0x131];
    }
    param_1[0x131] = 0;
    param_1[0x132] = 0;
    lVar1 = param_1[0x12d];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x122];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong * )(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[0xc] == 0) {
        return;
    }
    FUN_1401a4a00(param_1 + 0xc);
    return;
}


void FUN_1402b8820(ulonglong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4,
                   undefined4 param_5) {
    float fVar1;
    short sVar2;
    int iVar3;
    ulonglong uVar4;
    undefined auVar5[16];
    bool bVar6;
    int iVar7;
    undefined8 uVar8;
    HDC hdc;
    HFONT h;
    HGDIOBJ pvVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    uint uVar13;
    short *psVar14;
    ulonglong *puVar15;
    uint uVar16;
    longlong lVar17;
    ulonglong uVar18;
    undefined4 uVar19;
    float in_XMM3_Da;
    undefined auStack232[32];
    ulonglong local_c8;
    ulonglong local_c0;
    ulonglong local_b8;
    undefined local_a8[26];
    BYTE local_8e;
    BYTE local_8d;
    short local_8c[34];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    uVar8 = FUN_14018e9c0(param_2);
    *(undefined8 * )(param_1 + 0x18) = uVar8;
    *(float *) (param_1 + 0x24) = in_XMM3_Da;
    *(undefined4 * )(param_1 + 0x20) = param_3;
    *(undefined4 * )(param_1 + 0x28) = param_5;
    *(float *) (param_1 + 0x30) = 1.0 / in_XMM3_Da;
    hdc = CreateCompatibleDC((HDC) 0x0);
    *(HDC * )(param_1 + 0x68) = hdc;
    if (hdc != (HDC) 0x0) {
        SetMapMode(hdc, 1);
        puVar15 = (ulonglong *) 0x0;
        bVar6 = false;
        if (((*(byte * )(param_1 + 0x28) & 6) != 0) || (8 < *(uint * )(param_1 + 0x20))) {
            bVar6 = true;
        }
        FUN_1407e4830(local_a8, 0, 0x5c);
        local_a8._0_4_ = MulDiv(*(int *) (param_1 + 0x20), 0x60, 0x48);
        lVar10 = *(longlong * )(param_1 + 0x18);
        local_a8._0_4_ = -local_a8._0_4_;
        local_a8._16_4_ = 400;
        if ((*(uint * )(param_1 + 0x28) & 2) != 0) {
            local_a8._16_4_ = 700;
        }
        local_a8[20] = (byte)(*(uint * )(param_1 + 0x28) >> 2) & 1;
        local_8e = '\x03';
        if (bVar6) {
            local_8e = '\x05';
        }
        local_a8._4_4_ = 0;
        local_a8._23_2_ = 1;
        local_8d = '\0';
        lVar17 = 0x20;
        psVar14 = local_8c;
        do {
            if ((lVar17 == -0x7fffffde) ||
                (sVar2 = *(short *) ((lVar10 - (longlong) local_8c) + (longlong) psVar14), sVar2 == 0)) {
                puVar12 = puVar15;
                if (lVar17 != 0) goto LAB_1402b89a3;
                break;
            }
            *psVar14 = sVar2;
            psVar14 = psVar14 + 1;
            lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        psVar14 = psVar14 + -1;
        puVar12 = (ulonglong *) 0x8007007a;
        LAB_1402b89a3:
        *psVar14 = 0;
        if (-1 < (int) puVar12) {
            h = CreateFontIndirectW((LOGFONTW *) local_a8);
            *(HFONT * )(param_1 + 0x70) = h;
            if (h != (HFONT) 0x0) {
                pvVar9 = SelectObject(*(HDC * )(param_1 + 0x68), h);
                *(HGDIOBJ * )(param_1 + 0x78) = pvVar9;
                GetTextMetricsW(*(HDC * )(param_1 + 0x68), (LPTEXTMETRICW)(param_1 + 0xb0));
                fVar1 = *(float *) (param_1 + 0x24);
                *(undefined2 * )(param_1 + 0x54) = *(undefined2 * )(param_1 + 0xdc);
                *(float *) (param_1 + 0x38) = (float) *(int *) (param_1 + 0xb4) * fVar1;
                *(undefined2 * )(param_1 + 0x56) = *(undefined2 * )(param_1 + 0xde);
                *(float *) (param_1 + 0x34) = (float) *(int *) (param_1 + 0xb0) * fVar1;
                *(undefined2 * )(param_1 + 0x58) = *(undefined2 * )(param_1 + 0xe0);
                *(float *) (param_1 + 0x40) = (float) *(int *) (param_1 + 0xbc) * fVar1;
                *(uint * )(param_1 + 0x94) = *(int *) (param_1 + 200) + 5U & 0xfffffffe;
                *(float *) (param_1 + 0x3c) = (float) *(int *) (param_1 + 0xb8) * fVar1;
                uVar19 = 1;
                if (bVar6) {
                    uVar19 = 0x20;
                }
                *(int *) (param_1 + 0x98) = *(int *) (param_1 + 0xb0) + 4;
                *(float *) (param_1 + 0x48) = (float) *(int *) (param_1 + 0xc4) * fVar1;
                *(undefined4 * )(param_1 + 0x90) = uVar19;
                *(float *) (param_1 + 0x44) = (float) *(int *) (param_1 + 0xc0) * fVar1;
                *(float *) (param_1 + 0x50) = (float) *(int *) (param_1 + 0xd0) * fVar1;
                *(float *) (param_1 + 0x4c) = (float) *(int *) (param_1 + 200) * fVar1;
                iVar7 = FUN_1402b8de0(param_1);
                if (-1 < iVar7) {
                    auVar5 = ZEXT816(2) *
                             ZEXT816((ulonglong)
                                             (longlong)(*(int *) (param_1 + 0x94) * *(int *) (param_1 + 0x98)));
                    uVar8 = SUB168(auVar5, 0);
                    if (SUB168(auVar5 >> 0x40, 0) != 0) {
                        uVar8 = 0xffffffffffffffff;
                    }
                    uVar8 = FUN_14018b280(uVar8, 0);
                    *(undefined8 * )(param_1 + 0xa8) = uVar8;
                    SetBkMode(*(HDC * )(param_1 + 0x68), 2);
                    SetBkColor(*(HDC * )(param_1 + 0x68), 0);
                    SetTextColor(*(HDC * )(param_1 + 0x68), 0xffffff);
                    pvVar9 = SelectObject(*(HDC * )(param_1 + 0x68), *(HGDIOBJ * )(param_1 + 0x80));
                    *(undefined4 * )(param_1 + 0x108) = 0;
                    *(HGDIOBJ * )(param_1 + 0x88) = pvVar9;
                    FUN_1407e4830(param_1 + 0x110, 0, 0x800);
                    if ((*(uint * )(param_1 + 0x28) & 0x10) == 0) {
                        iVar7 = 2;
                        if ((*(uint * )(param_1 + 0x28) & 8) != 0) {
                            iVar7 = 3;
                        }
                    } else {
                        iVar7 = 4;
                    }
                    uVar16 = *(int *) (param_1 + 0xb0) + iVar7;
                    *(int *) (param_1 + 0x934) = *(int *) (param_1 + 0xc4) + iVar7;
                    *(uint * )(param_1 + 0x930) = uVar16;
                    uVar13 = *(int *) (param_1 + 200) + iVar7;
                    *(uint * )(param_1 + 0x938) = uVar13;
                    if (uVar16 < uVar13) {
                        uVar16 = uVar13;
                    }
                    uVar16 = uVar16 - 1 >> 0x10 | uVar16 - 1;
                    uVar16 = uVar16 >> 8 | uVar16;
                    uVar16 = uVar16 >> 4 | uVar16;
                    uVar16 = uVar16 >> 2 | uVar16;
                    *(uint * )(param_1 + 0x93c) = (uVar16 >> 1 | uVar16) + 1;
                    lVar10 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x10) + 0x2c8))();
                    if (*(uint * )(param_1 + 0x93c) <= *(uint * )(lVar10 + 0x38)) {
                        iVar7 = ((uint) * (ushort * )(param_1 + 0xde) - (uint) * (ushort * )(param_1 + 0xdc)) + 1;
                        if (0x80 < iVar7) {
                            iVar7 = 0x80;
                        }
                        if (*(uint * )(param_1 + 0x93c) < *(uint * )(lVar10 + 0x38)) {
                            do {
                                iVar3 = *(int *) (param_1 + 0x93c);
                                if ((uint)(iVar7 * *(int *) (param_1 + 0x934) * *(int *) (param_1 + 0x930)) <=
                                    (uint)(iVar3 * iVar3))
                                    break;
                                *(int *) (param_1 + 0x93c) = iVar3 * 2;
                            } while ((uint)(iVar3 * 2) < *(uint * )(lVar10 + 0x38));
                        }
                        iVar7 = *(int *) (param_1 + 0x93c);
                        *(undefined8 * )(param_1 + 0x920) = 0;
                        *(int *) (param_1 + 0x940) = iVar7 * iVar7;
                        *(int *) (param_1 + 0x928) = iVar7;
                        *(int *) (param_1 + 0x92c) = iVar7;
                        *(undefined8 * )(param_1 + 0xf8) = 0;
                        *(undefined8 * )(param_1 + 0x100) = 0;
                        *(undefined4 * )(undefined8 * )(param_1 + 0xf8) = 0x10;
                        iVar7 = ScriptGetFontProperties(*(undefined8 * )(param_1 + 0x68));
                        if (-1 < iVar7) {
                            local_c8 = *(ulonglong * )(param_1 + 0x18);
                            lVar10 = *(longlong * )(param_1 + 0x10);
                            local_c0 = *(ulonglong * )(param_1 + 0x20);
                            local_b8 = *(ulonglong * )(param_1 + 0x28);
                            if (*(longlong * )(lVar10 + 0x40) == *(longlong * )(lVar10 + 0x48)) {
                                FUN_1400290d0(lVar10 + 0x40);
                            }
                            uVar11 = (**(code * *)(lVar10 + 0x58))(&local_c8);
                            lVar17 = *(longlong * )(lVar10 + 0x50);
                            uVar18 = uVar11 % *(ulonglong * )(lVar10 + 0x48);
                            puVar12 = (ulonglong *) FUN_14018b280(0x30);
                            if (puVar12 != (ulonglong *) 0x0) {
                                uVar4 = *(ulonglong * )(lVar17 + uVar18 * 8);
                                *puVar12 = uVar11;
                                puVar12[1] = uVar4;
                                puVar12[2] = local_c8;
                                puVar12[3] = local_c0;
                                puVar12[5] = param_1;
                                puVar12[4] = local_b8;
                                puVar15 = puVar12;
                            }
                            *(ulonglong * *)(lVar17 + uVar18 * 8) = puVar15;
                            *(longlong * )(lVar10 + 0x40) = *(longlong * )(lVar10 + 0x40) + 1;
                            puVar15 = (ulonglong * )(*(longlong * )(param_1 + 0x10) + 0x38);
                            if (*(longlong * )(param_1 + 0x9a8) == 0) {
                                *(ulonglong * *)(param_1 + 0x9a8) = puVar15;
                                puVar12 = (ulonglong * )(param_1 + 0x9b0);
                                *puVar12 = *puVar15;
                                *puVar15 = param_1;
                                if (*puVar12 != 0) {
                                    *(ulonglong * *)(*puVar12 + 0x9a8) = puVar12;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack232);
    return;
}


undefined8 FUN_1402b8de0(longlong param_1) {
    uint uVar1;
    undefined8 *puVar2;
    HBITMAP pHVar3;
    int iVar4;
    uint uVar5;
    BITMAPINFO *lpbmi;
    undefined8 uVar6;

    uVar5 = *(uint * )(param_1 + 0x90);
    uVar1 = (uVar5 * *(int *) (param_1 + 0x94) + 7 & 0xfffffff8) / uVar5;
    *(uint * )(param_1 + 0x94) = uVar1;
    uVar1 = (uVar1 * uVar5 >> 3) + 3 & 0xfffffffc;
    *(uint * )(param_1 + 0x9c) = uVar1;
    iVar4 = 0x28;
    if (uVar5 == 1) {
        iVar4 = 0x30;
    }
    uVar5 = iVar4 + uVar1 * *(int *) (param_1 + 0x98);
    if (uVar5 == 0) {
        lpbmi = (BITMAPINFO *) 0x0;
    } else {
        puVar2 = (undefined8 *) FUN_14018b280((ulonglong) uVar5 + 0x10, 0);
        if (puVar2 == (undefined8 *) 0x0) {
            lpbmi = (BITMAPINFO * ) & DAT_00000010;
        } else {
            lpbmi = (BITMAPINFO * )(puVar2 + 2);
            *puVar2 = &PTR_FUN_140b5f110;
        }
    }
    uVar6 = 0;
    FUN_1407e4830(lpbmi, 0, uVar5);
    (lpbmi->bmiHeader).biSize = 0x28;
    (lpbmi->bmiHeader).biWidth = *(LONG * )(param_1 + 0x94);
    iVar4 = *(int *) (param_1 + 0x98);
    (lpbmi->bmiHeader).biCompression = 0;
    (lpbmi->bmiHeader).biHeight = -iVar4;
    (lpbmi->bmiHeader).biPlanes = 1;
    (lpbmi->bmiHeader).biBitCount = *(WORD * )(param_1 + 0x90);
    if (*(int *) (param_1 + 0x90) == 1) {
        *(undefined2 * ) & lpbmi->bmiColors[0].rgbGreen = 0;
        lpbmi->bmiColors[0].rgbBlue = '\0';
        *(undefined2 * )((longlong) & lpbmi[1].bmiHeader.biSize + 1) = 0xffff;
        *(undefined * ) & lpbmi[1].bmiHeader.biSize = 0xff;
    }
    pHVar3 = CreateDIBSection(*(HDC * )(param_1 + 0x68), lpbmi, 0, (void **) (param_1 + 0xa0), (HANDLE) 0x0, 0
    );
    *(HBITMAP * )(param_1 + 0x80) = pHVar3;
    if (pHVar3 == (HBITMAP) 0x0) {
        uVar6 = 0x8007000e;
    }
    (***(code * **) & lpbmi[-1].bmiHeader.biYPelsPerMeter)(&lpbmi[-1].bmiHeader.biYPelsPerMeter);
    return uVar6;
}


void FUN_1402b8f30(longlong param_1, uint param_2, longlong **param_3) {
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint giFirst;
    undefined auStackY184[32];
    undefined4 local_78;
    uint uStack116;
    int local_70;
    int local_6c;
    longlong local_68;
    WCHAR local_60;
    undefined2 local_5e;
    undefined local_58[16];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStackY184;
    giFirst = param_2 & 0xffff;
    uVar5 = giFirst >> 8;
    lVar1 = param_1 + (ulonglong) uVar5 * 8;
    if (*(longlong * )(lVar1 + 0x110) == 0) {
        lVar3 = FUN_14018b280(0x1800, 0);
        *(longlong * )(lVar1 + 0x110) = lVar3;
        if (lVar3 == 0) goto LAB_1402b9169;
        FUN_1407e4830(lVar3, 0);
        if (*(uint * )(param_1 + 0x108) < uVar5 || *(uint * )(param_1 + 0x108) == uVar5) {
            *(uint * )(param_1 + 0x108) = uVar5 + 1;
        }
    }
    plVar2 = (longlong * )(*(longlong * )(lVar1 + 0x110) + (ulonglong)(param_2 & 0xff) * 0x18);
    if (param_3 != (longlong **) 0x0) {
        *param_3 = plVar2;
    }
    if (*plVar2 == 0) {
        if ((*(byte * )(param_1 + 0xe7) & 4) == 0) {
            GetCharWidthI(*(HDC * )(param_1 + 0x68), giFirst, 1, (LPWORD) 0x0, &local_78);
            local_70 = CONCAT22(local_78._2_2_, (WCHAR) local_78);
            local_60 = (WCHAR) local_78;
        } else {
            GetCharABCWidthsI(*(HDC * )(param_1 + 0x68), giFirst, 1, (LPWORD) 0x0, (LPABC) local_58);
            local_70 = local_58._0_4_;
            if (local_58._0_4_ < 0) {
                local_70 = 0;
            }
            local_70 = local_70 + local_58._4_4_;
            local_60 = (short) local_58._0_4_ + (short) local_58._4_4_ + local_58._8_2_;
        }
        uVar7 = 0;
        uStack116 = *(uint * )(param_1 + 0xb4);
        local_6c = *(int *) (param_1 + 0xb0);
        local_78._0_2_ = L'\0';
        local_78._2_2_ = 0;
        local_68 = (ulonglong) uStack116 << 0x20;
        local_5e = 0;
        if ((local_70 == 0) || (local_6c == 0)) {
            *plVar2 = -1;
        } else {
            uVar5 = local_70 + 4;
            uVar4 = (ulonglong)(local_6c + 4U);
            uVar6 = uVar7;
            if (local_6c + 4U != 0) {
                do {
                    FUN_1407e4830(*(uint * )(param_1 + 0x9c) * uVar6 + *(longlong * )(param_1 + 0xa0), 0,
                                  (ulonglong) * (uint * )(param_1 + 0x90) * (ulonglong) uVar5 + 7 >> 3);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar4);
            }
            if (uVar4 != 0) {
                do {
                    FUN_1407e4830(*(longlong * )(param_1 + 0xa8) +
                                  (longlong) * (int *) (param_1 + 0x94) * uVar7 * 2, 0, (ulonglong) uVar5 * 2);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uVar4);
            }
            local_78._2_2_ = 0;
            local_78._0_2_ = (WCHAR) giFirst;
            ExtTextOutW(*(HDC * )(param_1 + 0x68), 2, 2, 0x10, (RECT *) 0x0, (LPCWSTR) & local_78, 1, (INT *) 0x0);
            FUN_1402b9190(param_1, &local_70, plVar2);
        }
    }
    LAB_1402b9169:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStackY184);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402b9190(longlong param_1, int *param_2, undefined8 *param_3) {
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    byte bVar4;
    longlong lVar5;
    undefined8 uVar6;
    byte bVar7;
    byte bVar8;
    uint uVar9;
    byte bVar10;
    uint uVar11;
    int iVar12;
    uint uVar13;
    int iVar14;
    uint uVar15;
    int iVar16;
    uint uVar17;
    byte *pbVar18;
    uint uVar19;
    undefined *puVar20;
    int iVar21;
    int iVar22;
    longlong lVar23;
    uint uVar24;
    longlong lVar25;
    uint uVar26;
    longlong lVar27;
    int iVar28;
    byte *pbVar29;
    uint uVar30;
    longlong lVar31;
    int local_88;
    short local_68;
    int local_64;
    int local_58;
    int local_54;
    int local_50;
    int local_4c;

    iVar14 = *param_2;
    iVar2 = param_2[1];
    iVar12 = iVar14 + 2;
    iVar16 = iVar2 + 2;
    iVar28 = 2;
    local_64 = 2;
    if (*(int *) (param_1 + 0x90) == 1) {
        local_88 = 2;
        if (2 < iVar16) {
            do {
                uVar9 = *(uint * )(param_1 + 0x9c);
                lVar31 = (ulonglong)(uVar9 * local_88) + *(longlong * )(param_1 + 0xa0);
                lVar27 = lVar31 - (ulonglong) uVar9;
                lVar1 = (ulonglong) uVar9 + lVar31;
                if (2 < iVar12) {
                    pbVar29 = (byte * )(*(longlong * )(param_1 + 0xa8) +
                                        (longlong)(local_88 * *(int *) (param_1 + 0x94)) * 2 + 4);
                    iVar28 = 2;
                    do {
                        iVar21 = iVar28 + 1;
                        lVar25 = (longlong)(iVar28 + -1 >> 3);
                        uVar13 = 0x80 >> ((byte)(iVar28 + -1) & 7) & 0xff;
                        lVar23 = (longlong)(iVar28 >> 3);
                        uVar24 = 0x80 >> ((byte) iVar28 & 7) & 0xff;
                        uVar17 = *(byte * )(lVar23 + lVar27) & uVar24;
                        lVar5 = (longlong)(iVar21 >> 3);
                        uVar26 = *(byte * )(lVar25 + lVar27) & uVar13;
                        uVar9 = 0x80 >> ((byte) iVar21 & 7) & 0xff;
                        uVar11 = *(byte * )(lVar5 + lVar27) & uVar9;
                        uVar19 = *(byte * )(lVar25 + lVar31) & uVar13;
                        uVar30 = *(byte * )(lVar23 + lVar31) & uVar24;
                        uVar15 = *(byte * )(lVar5 + lVar31) & uVar9;
                        uVar24 = *(byte * )(lVar23 + lVar1) & uVar24;
                        uVar13 = *(byte * )(lVar25 + lVar1) & uVar13;
                        uVar9 = *(byte * )(lVar5 + lVar1) & uVar9;
                        if ((uVar30 == 0) ||
                            (((uVar17 == 0 || (uVar24 == 0)) && ((uVar19 == 0 || (uVar15 == 0)))))) {
                            if ((uVar17 == 0) || (uVar11 != 0)) {
                                if ((uVar15 == 0) || (uVar9 != 0)) goto LAB_1402b933f;
                                if (uVar24 != 0) goto LAB_1402b93af;
                                LAB_1402b93a1:
                                if (uVar19 == 0) {
                                    LAB_1402b934d:
                                    if (uVar26 == 0) goto LAB_1402b935a;
                                    LAB_1402b9352:
                                    if ((uVar15 == 0) && (uVar24 == 0)) goto LAB_1402b935a;
                                } else {
                                    if (uVar26 != 0) goto LAB_1402b9352;
                                    if (uVar17 != 0) goto LAB_1402b93af;
                                    LAB_1402b935a:
                                    if ((((uVar11 == 0) || ((uVar24 == 0 && (uVar19 == 0)))) &&
                                         ((uVar9 == 0 || ((uVar19 == 0 && (uVar17 == 0)))))) &&
                                        ((uVar13 == 0 || ((uVar17 == 0 && (uVar15 == 0)))))) {
                                        bVar4 = -(uVar30 != 0) & 0x40;
                                        goto LAB_1402b93c8;
                                    }
                                }
                                bVar4 = 0x10;
                                if (uVar30 != 0) {
                                    bVar4 = 0x40;
                                }
                            } else {
                                if (uVar15 == 0) {
                                    LAB_1402b933f:
                                    if ((uVar24 == 0) || (uVar13 != 0)) goto LAB_1402b93a1;
                                    if (uVar19 != 0) goto LAB_1402b93af;
                                    goto LAB_1402b934d;
                                }
                                LAB_1402b93af:
                                bVar4 = 0x10;
                                if (uVar30 != 0) {
                                    bVar4 = 0x30;
                                }
                            }
                            LAB_1402b93c8:
                            *pbVar29 = bVar4;
                        } else {
                            *pbVar29 = 0x40;
                        }
                        pbVar29 = pbVar29 + 2;
                        iVar28 = iVar21;
                    } while (iVar21 < iVar12);
                }
                local_88 = local_88 + 1;
            } while (local_88 < iVar16);
        }
    } else if (2 < iVar16) {
        do {
            iVar21 = 2;
            if (2 < iVar12) {
                pbVar29 = (byte * )((ulonglong)(uint)(iVar28 * *(int *) (param_1 + 0x9c)) +
                                    *(longlong * )(param_1 + 0xa0) + 9);
                puVar20 = (undefined * )
                        (*(longlong * )(param_1 + 0xa8) + (longlong)(iVar28 * *(int *) (param_1 + 0x94)) * 2
                         + 4);
                do {
                    bVar4 = *pbVar29;
                    iVar21 = iVar21 + 1;
                    pbVar29 = pbVar29 + 4;
                    *puVar20 = (char) (((uint) bVar4 * 0x40) / 0xff);
                    puVar20 = puVar20 + 2;
                } while (iVar21 < iVar12);
            }
            iVar28 = iVar28 + 1;
        } while (iVar28 < iVar16);
    }
    iVar21 = 2;
    iVar28 = 2;
    if ((*(uint * )(param_1 + 0x28) & 0x10) == 0) {
        if ((*(uint * )(param_1 + 0x28) & 8) == 0) goto LAB_1402b96e9;
        iVar16 = iVar2 + 3;
        iVar12 = iVar14 + 3;
        if (iVar16 < 3) goto LAB_1402b96e9;
        do {
            iVar21 = 2;
            pbVar29 = (byte * )(*(longlong * )(param_1 + 0xa8) +
                                (longlong)(*(int *) (param_1 + 0x94) * iVar28) * 2);
            lVar1 = (longlong) * (int *) (param_1 + 0x94) * -2;
            if (2 < iVar12) {
                do {
                    pbVar18 = pbVar29 + 2;
                    bVar8 = (byte)((int) ((uint) pbVar18[lVar1 + 2] + (uint) * pbVar18) >> 1);
                    bVar4 = pbVar18[lVar1];
                    if (pbVar18[lVar1] < bVar8) {
                        bVar4 = bVar8;
                    }
                    bVar8 = pbVar29[4];
                    if (pbVar29[4] < bVar4) {
                        bVar8 = bVar4;
                    }
                    iVar21 = iVar21 + 1;
                    pbVar29[5] = bVar8;
                    pbVar29 = pbVar18;
                } while (iVar21 < iVar12);
            }
            iVar21 = 2;
            iVar28 = iVar28 + 1;
        } while (iVar28 < iVar16);
    } else {
        local_64 = 1;
        iVar16 = iVar2 + 3;
        iVar21 = 1;
        iVar12 = iVar14 + 3;
        iVar28 = local_64;
        if (iVar16 < 2) goto LAB_1402b96e9;
        do {
            iVar22 = *(int *) (param_1 + 0x94);
            lVar1 = (longlong) iVar22 * 2;
            lVar27 = (longlong) iVar22 * -2;
            if (1 < iVar12) {
                pbVar29 = (byte * )(*(longlong * )(param_1 + 0xa8) + (longlong)(iVar22 * iVar28) * 2 + 4);
                iVar22 = iVar21;
                do {
                    bVar4 = pbVar29[lVar27 + -4];
                    if (pbVar29[lVar27 + -4] < pbVar29[lVar27]) {
                        bVar4 = pbVar29[lVar27];
                    }
                    bVar8 = pbVar29[lVar1 + -4];
                    if (pbVar29[lVar1 + -4] < pbVar29[lVar1]) {
                        bVar8 = pbVar29[lVar1];
                    }
                    bVar10 = pbVar29[lVar27 + -2];
                    if (pbVar29[lVar27 + -2] < pbVar29[-4]) {
                        bVar10 = pbVar29[-4];
                    }
                    bVar7 = *pbVar29;
                    if (*pbVar29 < pbVar29[lVar1 + -2]) {
                        bVar7 = pbVar29[lVar1 + -2];
                    }
                    if (bVar10 < bVar7) {
                        bVar10 = bVar7;
                    }
                    if (bVar4 < bVar8) {
                        bVar4 = bVar8;
                    }
                    if (bVar10 < bVar4 >> 1) {
                        bVar10 = bVar4 >> 1;
                    }
                    bVar4 = pbVar29[-2];
                    if (pbVar29[-2] < bVar10) {
                        bVar4 = bVar10;
                    }
                    iVar22 = iVar22 + 1;
                    pbVar29[-1] = bVar4;
                    pbVar29 = pbVar29 + 2;
                } while (iVar22 < iVar12);
            }
            iVar28 = iVar28 + 1;
        } while (iVar28 < iVar16);
    }
    iVar16 = iVar2 + 3;
    iVar12 = iVar14 + 3;
    iVar28 = local_64;
    LAB_1402b96e9:
    uVar9 = *(uint * )(param_1 + 0x93c);
    iVar21 = iVar21 + -1;
    iVar28 = iVar28 + -1;
    iVar14 = (iVar12 + 1) - iVar21;
    plVar3 = *(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x10);
    if (uVar9 < (uint)(*(int *) (param_1 + 0x928) + iVar14)) {
        *(undefined4 * )(param_1 + 0x928) = 0;
        *(int *) (param_1 + 0x92c) = *(int *) (param_1 + 0x92c) + *(int *) (param_1 + 0x930);
    }
    if (uVar9 < (uint)(*(int *) (param_1 + 0x930) + *(int *) (param_1 + 0x92c))) {
        uVar6 = (**(code * *)(*plVar3 + 0x58))(plVar3, uVar9, uVar9, 1, 10, 1, 1, 0, 0, param_1 + 0x920);
        if ((int) uVar6 < 0) {
            return uVar6;
        }
        FUN_140033260(param_1 + 0x910, param_1 + 0x920);
        *(undefined4 * )(param_1 + 0x928) = DAT_140c77760;
        *(undefined4 * )(param_1 + 0x92c) = DAT_140c77764;
    }
    local_58 = *(int *) (param_1 + 0x928);
    local_54 = *(int *) (param_1 + 0x92c);
    local_50 = local_58 + iVar14;
    local_4c = ((iVar16 + 1) - iVar28) + local_54;
    (**(code * *)(**(longlong * *)(param_1 + 0x920) + 0x60))
            (*(longlong * *)(param_1 + 0x920), 0, 10,
             *(longlong * )(param_1 + 0xa8) +
             ((longlong)(*(int *) (param_1 + 0x94) * iVar28) + (longlong) iVar21) * 2,
             *(int *) (param_1 + 0x94) * 2, &local_58);
    *param_3 = *(undefined8 * )(param_1 + 0x920);
    *(undefined2 * )(param_3 + 1) = (undefined2) local_58;
    *(undefined2 * )((longlong) param_3 + 10) = (undefined2) local_54;
    *(undefined2 * )((longlong) param_3 + 0xc) = (undefined2) local_50;
    *(undefined2 * )((longlong) param_3 + 0xe) = (undefined2) local_4c;
    local_68 = (short) iVar21;
    *(short *) (param_3 + 2) = *(short *) (param_2 + 2) + -2 + local_68;
    local_64._0_2_ = (short) iVar28;
    *(short *) ((longlong) param_3 + 0x12) =
            (*(short *) (param_1 + 0xb4) - *(short *) (param_2 + 3)) + -2 + (short) local_64;
    *(int *) (param_1 + 0x928) = *(int *) (param_1 + 0x928) + iVar14;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_1402b98b0(longlong param_1, longlong param_2, ulonglong param_3, ulonglong param_4, float *param_5,
              uint param_6, longlong param_7, longlong param_8, int param_9, float *param_10,
              ulonglong param_11) {
    ushort *puVar1;
    byte bVar2;
    ushort uVar3;
    ushort uVar4;
    short sVar5;
    undefined(*pauVar6)[16];
    uint uVar7;
    uint uVar8;
    undefined8 uVar9;
    ulonglong uVar10;
    undefined(*pauVar11)[16];
    longlong lVar12;
    int iVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    float *pfVar16;
    longlong lVar17;
    ulonglong uVar18;
    undefined(*pauVar19)[16];
    undefined(*pauVar20)[16];
    ulonglong uVar21;
    ulonglong uVar22;
    uint uVar23;
    undefined(*pauVar24)[16];
    ulonglong uVar25;
    float extraout_XMM0_Da;
    float fVar26;
    float fVar27;
    undefined auVar28[16];
    undefined auVar29[16];
    float fVar30;
    float fVar31;
    float fVar32;
    undefined auVar33[16];
    float fVar34;
    undefined4 uVar35;
    undefined4 uVar36;
    undefined4 uVar37;
    undefined4 uVar38;
    undefined4 uVar39;
    undefined4 uVar40;
    undefined4 uVar41;
    ulonglong in_stack_fffffffffffffea8;
    ulonglong local_120;
    undefined local_118[8];
    undefined8 uStack272;
    undefined local_108[8];
    undefined8 uStack256;
    ulonglong local_f8[2];
    longlong local_e8;
    float fStack224;
    float fStack220;
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    undefined local_c8[16];
    undefined local_b8[16];
    float local_a8;
    float fStack164;
    float fStack160;
    float fStack156;

    if (param_11 != 0) {
        FUN_140115d60();
    }
    if (((param_2 == 0) || (param_10 == (float *) 0x0)) || ((param_6 & 0xfffdfa80) != 0)) {
        return 0x80070057;
    }
    if (*(ulonglong * )(param_2 + 0x28) <= param_4 && param_4 != *(ulonglong * )(param_2 + 0x28)) {
        param_4 = *(ulonglong * )(param_2 + 0x28);
    }
    local_f8[0] = (ulonglong) * (ushort * )(*(longlong * )(param_2 + 0x40) + param_4 * 2);
    if (param_4 <= param_3) {
        param_3 = param_4;
    }
    uVar15 = (ulonglong) * (ushort * )(*(longlong * )(param_2 + 0x40) + param_3 * 2);
    uVar21 = (ulonglong) * (ushort * )(*(longlong * )(param_2 + 0x50) + uVar15 * 2);
    uVar10 = *(ulonglong * )(param_1 + 0x960);
    uVar14 = *(ushort * )(*(longlong * )(param_2 + 0x50) + local_f8[0] * 2) - uVar21;
    *(ulonglong * )(param_1 + 0x958) = uVar14;
    if (uVar10 < uVar14) {
        if (uVar10 == 0) {
            *(undefined8 * )(param_1 + 0x960) = 0x10;
        }
        uVar10 = *(ulonglong * )(param_1 + 0x960);
        while (uVar10 < uVar14) {
            uVar10 = uVar10 * 2;
            *(ulonglong * )(param_1 + 0x960) = uVar10;
        }
        FUN_14018b900(*(undefined8 * )(param_1 + 0x948), 0);
        FUN_14018b900(*(undefined8 * )(param_1 + 0x950), 0);
        auVar33 = ZEXT816(4) * ZEXT816(*(ulonglong * )(param_1 + 0x960));
        uVar9 = SUB168(auVar33, 0);
        if (SUB168(auVar33 >> 0x40, 0) != 0) {
            uVar9 = 0xffffffffffffffff;
        }
        uVar9 = FUN_14018b280(uVar9, 0);
        *(undefined8 * )(param_1 + 0x948) = uVar9;
        uVar10 = FUN_14018b280();
        *(ulonglong * )(param_1 + 0x950) = uVar10;
    }
    pauVar24 = (undefined (*)[16]) 0x0;
    iVar13 = 0;
    pauVar20 = pauVar24;
    if (*(longlong * )(param_1 + 0x958) != 0) {
        do {
            lVar12 = (longlong) pauVar20 * 4;
            uVar10 = *(ulonglong * )(param_1 + 0x948);
            pauVar20 = (undefined(*)[16])(*pauVar20 + 1);
            *(float *) ((uVar10 - 4) + (longlong) pauVar20 * 4) =
                    (float) *(int *) (*(longlong * )(param_2 + 0x90) + lVar12 + uVar21 * 4) *
                    *(float *) (param_1 + 0x24);
        } while (pauVar20 < *(undefined(**)[16])(param_1 + 0x958));
    }
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    fVar30 = 0.0;
    fVar32 = 0.0;
    uStack256._0_4_ = 0.0;
    uStack256._4_4_ = 0.0;
    _local_108 = ZEXT816(0);
    local_e8 = CONCAT44(DAT_140c40f64, DAT_140c40f64);
    fStack224 = DAT_140c40f64;
    fStack220 = DAT_140c40f64;
    if (param_5 != (float *) 0x0) {
        if (((*param_5 < param_5[4]) && ((param_6 & 0x10) != 0)) && ((param_6 & 0x20) == 0)) {
            auVar33 = ZEXT416((uint)(param_5[4] - *param_5)) & (undefined[16]) 0xffffffffffffffff;
            iVar13 = (int) SUB164(auVar33, 0);
            if ((iVar13 != -0x80000000) && ((float) iVar13 != SUB164(auVar33, 0))) {
                uVar7 = movmskps((int) uVar10, ZEXT816(SUB168(auVar33, 0) | SUB168(auVar33, 0) << 0x20));
                auVar33 = ZEXT416((uint)(float)(iVar13 + (uVar7 & 1 ^ 1)));
            }
            iVar13 = 1;
            goto LAB_1402b9b28;
        }
    }
    auVar33 = ZEXT416((uint) DAT_140c40f64);
    LAB_1402b9b28:
    FUN_140115d60(param_1 + 0x968, 0);
    local_e8 = (longlong) iVar13;
    fVar26 = *(float *) (param_1 + 0x50);
    fVar34 = 0.0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    if (uVar15 < local_f8[0]) {
        fVar32 = 8.0;
        uVar10 = uVar15;
        uVar14 = uVar15;
        fVar30 = fVar26;
        local_120 = uVar15;
        do {
            uVar25 = uVar10 + 1;
            lVar12 = *(longlong * )(param_2 + 0x50);
            uVar4 = *(ushort * )(lVar12 + uVar10 * 2);
            puVar1 = (ushort * )(lVar12 + uVar25 * 2);
            uVar3 = *puVar1;
            while (uVar3 == uVar4) {
                puVar1 = puVar1 + 1;
                uVar25 = uVar25 + 1;
                uVar3 = *puVar1;
            }
            bVar2 = *(byte * )(uVar10 + *(longlong * )(param_2 + 0x48));
            if ((bVar2 & 1) != 0) {
                uVar15 = uVar10;
                fVar30 = fVar26;
                local_120 = uVar10;
            }
            uVar7 = (uint) * (ushort * )(lVar12 + uVar25 * 2);
            uVar22 = (ulonglong) uVar4;
            uVar23 = (uint) uVar4;
            sVar5 = *(short *) (*(longlong * )(param_2 + 0x38) + uVar10 * 2);
            if ((sVar5 == 10) && ((param_6 & 0x20) == 0)) {
                in_stack_fffffffffffffea8 = param_11;
                uVar9 = FUN_1402ba4f0(param_1, param_2, uVar14, uVar25, uVar21, local_108, param_11);
                if ((int) uVar9 < 0) {
                    return uVar9;
                }
                fVar26 = *(float *) (param_1 + 0x50);
                uVar15 = uVar25;
                uVar14 = uVar25;
                fVar30 = fVar26;
                local_120 = uVar25;
            } else {
                fVar27 = SUB164(auVar33, 0);
                if ((sVar5 == 9) && ((param_6 & 0x40) != 0)) {
                    if ((local_e8 != 0) && (fVar27 <= fVar26)) {
                        in_stack_fffffffffffffea8 = param_11;
                        uVar9 = FUN_1402ba4f0(param_1, param_2, uVar14, uVar10, uVar21, local_108, param_11);
                        if ((int) uVar9 < 0) {
                            return uVar9;
                        }
                        fVar26 = *(float *) (param_1 + 0x50);
                        uVar14 = uVar10;
                        fVar30 = fVar26;
                        local_120 = uVar10;
                    }
                    fVar27 = *(float *) (param_1 + 0x48) * fVar32;
                    FUN_1408fde98();
                    fVar27 = fVar27 - extraout_XMM0_Da;
                    if ((local_e8 != 0) && (SUB164(auVar33, 0) < fVar27 + fVar26)) {
                        fVar27 = SUB164(auVar33, 0) - fVar26;
                    }
                    fVar26 = fVar26 + fVar27;
                    *(float *) (*(longlong * )(param_1 + 0x948) + (uVar22 - uVar21) * 4) = fVar27;
                    uVar15 = local_120;
                } else {
                    uVar8 = (uint) uVar4;
                    if ((bVar2 & 2) == 0) {
                        fVar31 = fVar34;
                        if (uVar8 < uVar7) {
                            if (3 < (int) (uVar7 - uVar8)) {
                                lVar12 = uVar22 - uVar21;
                                uVar8 = ((uVar7 - uVar8) - 4 >> 2) + 1;
                                uVar18 = (ulonglong) uVar8;
                                uVar23 = (uint) uVar4 + uVar8 * 4;
                                uVar22 = uVar22 + (ulonglong) uVar8 * 4;
                                pfVar16 = (float *) (*(longlong * )(param_1 + 0x948) + 8 + lVar12 * 4);
                                do {
                                    fVar31 = fVar31 + pfVar16[-2] + pfVar16[-1] + *pfVar16 + pfVar16[1];
                                    uVar18 = uVar18 - 1;
                                    pfVar16 = pfVar16 + 4;
                                } while (uVar18 != 0);
                            }
                            if (uVar23 < uVar7) {
                                pfVar16 = (float *) (*(longlong * )(param_1 + 0x948) + (uVar22 - uVar21) * 4);
                                lVar12 = (longlong)(int)(uVar7 - uVar23);
                                do {
                                    fVar31 = fVar31 + *pfVar16;
                                    pfVar16 = pfVar16 + 1;
                                    lVar12 = lVar12 + -1;
                                } while (lVar12 != 0);
                            }
                        }
                        if ((local_e8 != 0) && (fVar27 < fVar31 + fVar26)) {
                            fVar26 = fVar26 - fVar30;
                            if (fVar27 < fVar26 + *(float *) (param_1 + 0x50) + fVar31) {
                                in_stack_fffffffffffffea8 = param_11;
                                uVar9 = FUN_1402ba4f0(param_1, param_2, uVar14, uVar10, uVar21, local_108, param_11);
                                if ((int) uVar9 < 0) {
                                    return uVar9;
                                }
                                fVar26 = *(float *) (param_1 + 0x50);
                                uVar15 = uVar10;
                                uVar14 = uVar10;
                                fVar30 = fVar26;
                                local_120 = uVar10;
                            } else {
                                in_stack_fffffffffffffea8 = param_11;
                                uVar9 = FUN_1402ba4f0(param_1, param_2, uVar14, uVar15, uVar21, local_108, param_11);
                                if ((int) uVar9 < 0) {
                                    return uVar9;
                                }
                                fVar26 = fVar26 + *(float *) (param_1 + 0x50);
                                uVar15 = local_120;
                                uVar14 = local_120;
                                fVar30 = *(float *) (param_1 + 0x50);
                            }
                        }
                        fVar26 = fVar26 + fVar31;
                    } else {
                        if ((local_e8 != 0) && (fVar27 <= fVar26)) {
                            in_stack_fffffffffffffea8 = param_11;
                            uVar9 = FUN_1402ba4f0(param_1, param_2, uVar14, uVar10, uVar21, local_108, param_11);
                            if ((int) uVar9 < 0) {
                                return uVar9;
                            }
                            fVar26 = *(float *) (param_1 + 0x50);
                            uVar15 = uVar10;
                            uVar14 = uVar10;
                            fVar30 = fVar26;
                            local_120 = uVar10;
                        }
                        auVar28 = CONCAT412(uVar37, CONCAT48(uVar36, CONCAT44(uVar35, fVar34)));
                        uVar23 = (uint) uVar4;
                        if (uVar8 < uVar7) {
                            uVar10 = uVar22;
                            if (3 < (int) (uVar7 - uVar8)) {
                                uVar8 = ((uVar7 - uVar8) - 4 >> 2) + 1;
                                uVar15 = (ulonglong) uVar8;
                                uVar23 = (uint) uVar4 + uVar8 * 4;
                                uVar10 = uVar22 + (ulonglong) uVar8 * 4;
                                pfVar16 = (float *) (*(longlong * )(param_1 + 0x948) + 8 + (uVar22 - uVar21) * 4);
                                do {
                                    auVar28 = CONCAT124(SUB1612(auVar28 >> 0x20, 0),
                                                        SUB164(auVar28, 0) + pfVar16[-2] + pfVar16[-1] + *pfVar16 +
                                                        pfVar16[1]);
                                    uVar15 = uVar15 - 1;
                                    pfVar16 = pfVar16 + 4;
                                } while (uVar15 != 0);
                            }
                            uVar15 = local_120;
                            if (uVar23 < uVar7) {
                                pfVar16 = (float *) (*(longlong * )(param_1 + 0x948) + (uVar10 - uVar21) * 4);
                                lVar12 = (longlong)(int)(uVar7 - uVar23);
                                do {
                                    auVar28 = CONCAT124(SUB1612(auVar28 >> 0x20, 0), SUB164(auVar28, 0) + *pfVar16);
                                    pfVar16 = pfVar16 + 1;
                                    lVar12 = lVar12 + -1;
                                } while (lVar12 != 0);
                            }
                        }
                        fVar27 = SUB164(auVar28, 0);
                        if ((local_e8 != 0) && (SUB164(auVar33, 0) < fVar27 + fVar26)) {
                            fVar27 = SUB164(auVar33, 0) - fVar26;
                        }
                        uVar23 = uVar4 + 1;
                        uVar10 = (ulonglong) uVar23;
                        *(float *) (*(longlong * )(param_1 + 0x948) + (uVar22 - uVar21) * 4) = fVar27;
                        if (uVar23 < uVar7) {
                            if (3 < (int) (uVar7 - uVar23)) {
                                lVar12 = uVar10 - uVar21;
                                uVar8 = ((uVar7 - uVar23) - 4 >> 2) + 1;
                                uVar22 = (ulonglong) uVar8;
                                uVar23 = uVar23 + uVar8 * 4;
                                uVar10 = uVar10 + (ulonglong) uVar8 * 4;
                                lVar12 = lVar12 * 4;
                                do {
                                    *(undefined4 * )(lVar12 + *(longlong * )(param_1 + 0x948)) = 0;
                                    *(undefined4 * )(lVar12 + 4 + *(longlong * )(param_1 + 0x948)) = 0;
                                    *(undefined4 * )(lVar12 + 8 + *(longlong * )(param_1 + 0x948)) = 0;
                                    *(undefined4 * )(lVar12 + 0xc + *(longlong * )(param_1 + 0x948)) = 0;
                                    uVar22 = uVar22 - 1;
                                    lVar12 = lVar12 + 0x10;
                                } while (uVar22 != 0);
                            }
                            if (uVar23 < uVar7) {
                                lVar17 = (longlong)(int)(uVar7 - uVar23);
                                lVar12 = (uVar10 - uVar21) * 4;
                                do {
                                    *(undefined4 * )(lVar12 + *(longlong * )(param_1 + 0x948)) = 0;
                                    lVar17 = lVar17 + -1;
                                    lVar12 = lVar12 + 4;
                                } while (lVar17 != 0);
                            }
                        }
                        fVar26 = fVar26 + fVar27;
                    }
                }
            }
            uVar10 = uVar25;
        } while (uVar25 < local_f8[0]);
        if ((uVar14 < local_f8[0]) &&
            (uVar9 = FUN_1402ba4f0(param_1, param_2, uVar14, local_f8[0], uVar21, local_108, param_11),
                    in_stack_fffffffffffffea8 = param_11, (int) uVar9 < 0)) {
            return uVar9;
        }
        fVar30 = local_108._0_4_;
        fVar32 = local_108._4_4_;
    }
    if (param_5 == (float *) 0x0) {
        _local_118 = CONCAT412(uVar41, CONCAT48(uVar40, CONCAT44(uVar39, uVar38)));
        *param_10 = fVar32;
        local_108._4_4_ = fVar32;
    } else {
        if ((param_6 & 1) == 0) {
            if ((param_6 & 2) == 0) {
                fVar26 = *param_5;
            } else {
                fVar26 = param_5[4] - local_108._0_4_;
            }
        } else {
            fVar26 = ((param_5[4] + *param_5) - local_108._0_4_) * 0.5;
        }
        if ((param_6 & 4) == 0) {
            if ((param_6 & 8) == 0) {
                fVar27 = param_5[1];
            } else {
                fVar27 = param_5[5] - local_108._4_4_;
            }
        } else {
            fVar27 = ((param_5[5] + param_5[1]) - local_108._4_4_) * 0.5;
        }
        local_118 = CONCAT44(fVar27, fVar26);
        *param_10 = (fVar27 + local_108._4_4_) - param_5[1];
    }
    (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0x120))
            (*(longlong * *)(param_1 + 0x10), &local_a8, local_118);
    local_118._0_4_ = local_118._0_4_ + local_a8;
    local_118._4_4_ = local_118._4_4_ + fStack164;
    uStack272._0_4_ = (float) uStack272 + fStack160;
    uStack272._4_4_ = uStack272._4_4_ + fStack156;
    if ((param_6 >> 10 & 1) == 0) {
        pauVar20 = pauVar24;
        if ((param_6 >> 8 & 1) == 0) {
            local_d8 = param_5[4] + local_a8;
            fStack212 = param_5[5] + fStack164;
            fStack208 = param_5[6] + fStack160;
            fStack204 = param_5[7] + fStack156;
            fStack224 = param_5[2] + fStack160;
            fStack220 = param_5[3] + fStack156;
            local_e8 = CONCAT44(param_5[1] + fStack164, *param_5 + local_a8);
            pauVar20 = (undefined(*)[16]) & local_e8;
        }
        local_f8[0] = local_f8[0] & 0xffffffff00000000;
        fVar26 = local_108._0_4_;
        pauVar11 = (undefined (*)[16]) FUN_1402bba10(param_2, local_f8);
        auVar33 = _local_108;
        if ((int) pauVar11 == 0) {
            return 1;
        }
        pauVar6 = *(undefined(**)[16])(param_1 + 0x970);
        pauVar19 = pauVar6;
        local_108._0_4_ = fVar30;
        if (pauVar20 != (undefined (*)[16]) 0x0) {
            fVar30 = *(float *) (param_1 + 0x34);
            if (fVar30 != fVar34) {
                if (*(float *) (pauVar20[1] + 4) < local_118._4_4_ + local_108._4_4_) {
                    auVar28 = ZEXT416((uint)(*(float *) (pauVar20[1] + 4) - local_118._4_4_)) &
                              (undefined[16]) 0xffffffffffffffff;
                    fVar32 = SUB164(auVar28, 0) / fVar30;
                    auVar29 = CONCAT124(SUB1612(auVar28 >> 0x20, 0), fVar32);
                    iVar13 = (int) fVar32;
                    if ((iVar13 != -0x80000000) && ((float) iVar13 != fVar32)) {
                        uVar7 = movmskps((int) pauVar11,
                                         CONCAT88(SUB168(auVar28 >> 0x40, 0),
                                                  SUB168(auVar29, 0) | SUB168(auVar29, 0) << 0x20) &
                                         (undefined[16]) 0xffffffffffffffff);
                        auVar29 = ZEXT416((uint)(float)(iVar13 + (uVar7 & 1 ^ 1)));
                    }
                    lVar12 = 0;
                    if ((9.223372e+18 <= SUB164(auVar29, 0)) &&
                        (fVar32 = SUB164(auVar29, 0) - 9.223372e+18,
                                auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), fVar32), fVar32 < 9.223372e+18)) {
                        lVar12 = -0x8000000000000000;
                    }
                    pauVar19 = (undefined(*)[16])((longlong) SUB164(auVar29, 0) + lVar12);
                    pauVar11 = pauVar6;
                    if (pauVar6 < pauVar19) {
                        pauVar19 = pauVar6;
                    }
                }
                if (local_118._4_4_ < *(float *) (*pauVar20 + 4)) {
                    auVar28 = ZEXT416((uint)(*(float *) (*pauVar20 + 4) - local_118._4_4_)) &
                              (undefined[16]) 0xffffffffffffffff;
                    fVar32 = SUB164(auVar28, 0) / fVar30;
                    auVar29 = CONCAT124(SUB1612(auVar28 >> 0x20, 0), fVar32);
                    iVar13 = (int) fVar32;
                    if ((iVar13 != -0x80000000) && ((float) iVar13 != fVar32)) {
                        uVar7 = movmskps((int) pauVar11,
                                         CONCAT88(SUB168(auVar28 >> 0x40, 0),
                                                  SUB168(auVar29, 0) | SUB168(auVar29, 0) << 0x20) &
                                         (undefined[16]) 0xffffffffffffffff);
                        auVar29 = ZEXT416((uint)(float)(iVar13 - (uVar7 & 1)));
                    }
                    lVar12 = 0;
                    if ((9.223372e+18 <= SUB164(auVar29, 0)) &&
                        (fVar32 = SUB164(auVar29, 0) - 9.223372e+18,
                                auVar29 = CONCAT124(SUB1612(auVar29 >> 0x20, 0), fVar32), fVar32 < 9.223372e+18)) {
                        lVar12 = -0x8000000000000000;
                    }
                    pauVar24 = (undefined(*)[16])((longlong) SUB164(auVar29, 0) + lVar12);
                    if (pauVar19 < pauVar24) {
                        pauVar24 = pauVar19;
                    }
                }
                auVar28 = ZEXT416((uint)(float)(longlong)
                pauVar24) &(undefined[16]) 0xffffffffffffffff;
                if ((longlong) pauVar24 < 0) {
                    auVar28 = CONCAT124(SUB1612(auVar28 >> 0x20, 0), SUB164(auVar28, 0) + 1.844674e+19);
                }
                local_118 = CONCAT44(local_118._4_4_ + SUB164(auVar28, 0) * fVar30, local_118._0_4_);
                fVar32 = (float) ((longlong) pauVar19 - (longlong) pauVar24);
                if ((longlong) pauVar19 - (longlong) pauVar24 < 0) {
                    fVar32 = fVar32 + 1.844674e+19;
                }
                fVar32 = fVar32 * fVar30;
                uStack256._0_4_ = SUB164(auVar33, 8);
                uStack256._4_4_ = SUB164(auVar33, 0xc);
            }
            if ((fVar34 != *(float *) (param_8 + 0xc)) && ((*(byte * )(param_1 + 0x28) & 0x18) != 0)) {
                fVar30 = *(float *) (param_1 + 0x24);
                fVar27 = *(float *) pauVar20[1];
                *(float *) (pauVar20[1] + 4) = fVar30 * 2.0 + *(float *) (pauVar20[1] + 4);
                *(float *) pauVar20[1] = fVar30 * 3.0 + fVar27;
            }
        }
        local_c8 = _local_118;
        local_108._0_4_ = local_108._0_4_ + SUB164(_local_118, 0);
        fVar32 = fVar32 + SUB164(_local_118 >> 0x20, 0);
        uStack256._0_4_ = (float) uStack256 + SUB164(_local_118 >> 0x40, 0);
        uStack256._4_4_ = uStack256._4_4_ + SUB164(_local_118 >> 0x60, 0);
        local_b8 = CONCAT412(uStack256._4_4_, CONCAT48((float) uStack256, CONCAT44(fVar32, local_108._0_4_))
        );
        if (pauVar20 != (undefined (*)[16]) 0x0) {
            local_b8 = minps(pauVar20[1],
                             CONCAT412(uStack256._4_4_,
                                       CONCAT48((float) uStack256, CONCAT44(fVar32, local_108._0_4_))));
            local_c8 = maxps(*pauVar20, _local_118);
            if (SUB164(local_b8, 0) <= SUB164(local_c8, 0)) {
                return 0;
            }
            if (SUB164(local_b8 >> 0x20, 0) <= SUB164(local_c8 >> 0x20, 0)) {
                return 0;
            }
        }
        if (param_9 == 1) {
            param_9 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0xd8))
                    (*(longlong * *)(param_1 + 0x10), local_c8);
        }
        if (param_9 != 0) {
            if ((fVar34 != *(float *) (param_8 + 0xc)) && ((*(byte * )(param_1 + 0x28) & 0x18) != 0)) {
                in_stack_fffffffffffffea8 =
                        in_stack_fffffffffffffea8 & 0xffffffff00000000 | (ulonglong)(uint)
                fVar26;
                uVar9 = FUN_1402ba770(param_1, param_2, pauVar20, param_6, param_8, local_118,
                                      in_stack_fffffffffffffea8, pauVar24, pauVar19, uVar21, 1, param_9);
                if ((int) uVar9 < 0) {
                    return uVar9;
                }
            }
            if ((fVar34 != *(float *) (param_7 + 0xc)) &&
                (uVar9 = FUN_1402ba770(param_1, param_2, pauVar20, param_6, param_7, local_118,
                                       in_stack_fffffffffffffea8 & 0xffffffff00000000 |
                                       (ulonglong)(uint)
                fVar26, pauVar24, pauVar19, uVar21, 2, param_9),
            (int) uVar9 < 0)) {
                return uVar9;
            }
        }
    } else if (param_5 != (float *) 0x0) {
        *param_5 = local_118._0_4_;
        param_5[1] = local_118._4_4_;
        param_5[2] = (float) uStack272;
        param_5[3] = uStack272._4_4_;
        *(undefined(*)[16])(param_5 + 4) =
                CONCAT412(uStack256._4_4_ + uStack272._4_4_,
                          CONCAT48((float) uStack256 + (float) uStack272,
                                   CONCAT44(fVar32 + local_118._4_4_, fVar30 + local_118._0_4_)));
    }
    return 0;
}


undefined8
FUN_1402ba4f0(longlong param_1, longlong param_2, longlong param_3, longlong param_4, longlong param_5,
              float *param_6, longlong *param_7) {
    ushort uVar1;
    ulonglong uVar2;
    longlong lVar3;
    short *psVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined4 in_XMM6_Da;
    float fVar9;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    uVar1 = *(ushort * )(*(longlong * )(param_2 + 0x50) + param_4 * 2);
    uVar6 = (ulonglong) uVar1;
    uVar7 = (ulonglong) * (ushort * )(*(longlong * )(param_2 + 0x50) + param_3 * 2);
    uVar8 = (ulonglong)(uint)
    uVar1;
    if (uVar7 < uVar6) {
        psVar4 = (short *) (*(longlong * )(param_2 + 0x80) + uVar6 * 2);
        lVar3 = ((ulonglong)(uint)
        uVar1 - param_5) *4;
        do {
            psVar4 = psVar4 + -1;
            uVar8 = uVar8 - 1;
            lVar3 = lVar3 + -4;
            if (*psVar4 != *(short *) (param_1 + 0xfc)) break;
            *(undefined4 * )(lVar3 + *(longlong * )(param_1 + 0x948)) = 0;
        } while (uVar7 < uVar8);
    }
    fVar9 = 0.0;
    if (uVar7 < uVar6) {
        uVar8 = uVar7;
        if (3 < (longlong)(uVar6 - uVar7)) {
            lVar5 = ((uVar6 - uVar7) - 4 >> 2) + 1;
            uVar8 = uVar7 + lVar5 * 4;
            lVar3 = (uVar7 - param_5) * 4;
            do {
                *(float *) (lVar3 + *(longlong * )(param_1 + 0x950)) = fVar9;
                fVar9 = fVar9 + *(float *) (lVar3 + *(longlong * )(param_1 + 0x948));
                *(float *) (lVar3 + 4 + *(longlong * )(param_1 + 0x950)) = fVar9;
                fVar9 = fVar9 + *(float *) (lVar3 + 4 + *(longlong * )(param_1 + 0x948));
                *(float *) (lVar3 + 8 + *(longlong * )(param_1 + 0x950)) = fVar9;
                fVar9 = fVar9 + *(float *) (lVar3 + 8 + *(longlong * )(param_1 + 0x948));
                *(float *) (lVar3 + 0xc + *(longlong * )(param_1 + 0x950)) = fVar9;
                fVar9 = fVar9 + *(float *) (lVar3 + 0xc + *(longlong * )(param_1 + 0x948));
                lVar5 = lVar5 + -1;
                lVar3 = lVar3 + 0x10;
            } while (lVar5 != 0);
        }
        if (uVar8 < uVar6) {
            lVar5 = uVar6 - uVar8;
            lVar3 = (uVar8 - param_5) * 4;
            do {
                *(float *) (lVar3 + *(longlong * )(param_1 + 0x950)) = fVar9;
                fVar9 = fVar9 + *(float *) (lVar3 + *(longlong * )(param_1 + 0x948));
                lVar5 = lVar5 + -1;
                lVar3 = lVar3 + 4;
            } while (lVar5 != 0);
        }
    }
    uVar2 = *(ulonglong * )(param_1 + 0x970);
    fVar9 = fVar9 + *(float *) (param_1 + 0x50);
    uVar8 = uVar2 + 1;
    if (uVar2 <= uVar8) {
        lVar3 = FUN_14018db00(*(undefined8 * )(param_1 + 0x968), uVar8, 0x18, param_4,
                              CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)))
        );
        if (*(longlong * )(param_1 + 0x968) != lVar3) {
            FUN_1407db590(lVar3, *(longlong * )(param_1 + 0x968), *(longlong * )(param_1 + 0x970) * 0x18);
            lVar5 = *(longlong * )(param_1 + 0x968);
            if (lVar5 != 0) {
                (**(code * *)(*(longlong * )(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            *(longlong * )(param_1 + 0x968) = lVar3;
        }
    }
    *(ulonglong * )(param_1 + 0x970) = uVar8;
    *(ulonglong * )(*(longlong * )(param_1 + 0x968) + uVar2 * 0x18) = uVar7;
    *(ulonglong * )(*(longlong * )(param_1 + 0x968) + 8 + uVar2 * 0x18) = uVar6;
    *(float *) (*(longlong * )(param_1 + 0x968) + 0x10 + uVar2 * 0x18) = fVar9;
    if (param_7 != (longlong *) 0x0) {
        FUN_140115d60(param_7, uVar8);
        *(longlong * )(*param_7 + uVar2 * 0x18) = param_3;
        *(longlong * )(*param_7 + 8 + uVar2 * 0x18) = param_4;
        *(float *) (*param_7 + 0x10 + uVar2 * 0x18) = fVar9;
    }
    if (*param_6 <= fVar9 && fVar9 != *param_6) {
        *param_6 = fVar9;
    }
    param_6[1] = *(float *) (param_1 + 0x34) + param_6[1];
    return 0;
}


undefined8
FUN_1402ba770(longlong param_1, longlong param_2, float *param_3, uint param_4, undefined8 param_5,
              float *param_6, float param_7, ulonglong param_8, ulonglong param_9, longlong param_10,
              undefined4 param_11, undefined4 param_12) {
    longlong lVar1;
    longlong *plVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    float fVar9;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    float fVar16;
    float local_e8;
    float local_e4;
    float local_d8;
    float local_d4;
    float local_c8;
    float local_c4;
    float local_b8;
    float local_b4;
    undefined auVar10[16];

    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0xe8) = param_11;
    fVar12 = param_6[1];
    if (param_8 < param_9) {
        lVar8 = param_8 * 0x18;
        lVar5 = param_9 - param_8;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        fVar16 = 0.5;
        do {
            lVar1 = *(longlong * )(param_1 + 0x968);
            fVar11 = *param_6;
            if ((param_4 & 1) == 0) {
                if ((param_4 & 2) != 0) {
                    fVar11 = fVar11 + (param_7 - *(float *) (lVar8 + 0x10 + lVar1));
                }
            } else {
                fVar9 = (param_7 - *(float *) (lVar8 + 0x10 + lVar1)) * fVar16 * *(float *) (param_1 + 0x30) +
                        fVar16;
                auVar10 = CONCAT124(SUB1612(CONCAT412(uVar15, CONCAT48(uVar14, CONCAT44(uVar13, param_7))) >>
                                                                                                           0x20, 0),
                                    fVar9);
                iVar4 = (int) fVar9;
                if ((iVar4 != -0x80000000) && ((float) iVar4 != fVar9)) {
                    uVar7 = SUB168(auVar10, 0);
                    uVar3 = movmskps((int) param_8,
                                     CONCAT88(SUB168(CONCAT412(uVar13, CONCAT48(uVar13, uVar7)) >> 0x40, 0),
                                              uVar7 & 0xffffffff | uVar7 << 0x20));
                    param_8 = (ulonglong)(uVar3 & 1);
                    auVar10 = ZEXT416((uint)(float)(iVar4 - (uVar3 & 1)));
                }
                fVar11 = fVar11 + SUB164(auVar10, 0) * *(float *) (param_1 + 0x24);
            }
            uVar7 = *(ulonglong * )(lVar8 + lVar1);
            if (uVar7 < *(ulonglong * )(lVar8 + 8 + lVar1)) {
                lVar6 = (uVar7 - param_10) * 4;
                do {
                    param_8 = *(ulonglong * )(param_2 + 0xa8);
                    plVar2 = *(longlong * *)(param_8 + uVar7 * 8);
                    if (*plVar2 != -1) {
                        fVar9 = *(float *) (param_1 + 0x24);
                        local_c8 = (float) (uint) * (ushort * )(plVar2 + 1);
                        local_c4 = (float) (uint) * (ushort * )((longlong) plVar2 + 10);
                        local_b8 = (float) (uint) * (ushort * )((longlong) plVar2 + 0xc);
                        local_b4 = (float) (uint) * (ushort * )((longlong) plVar2 + 0xe);
                        local_e8 = (float) ((int) *(short *) (plVar2 + 2) +
                                            *(int *) (*(longlong * )(param_2 + 0xa0) + uVar7 * 8)) * fVar9 + fVar11
                                   + *(float *) (*(longlong * )(param_1 + 0x950) + lVar6);
                        local_d8 = (local_b8 - local_c8) * fVar9 + local_e8;
                        uVar3 = (int) *(short *) ((longlong) plVar2 + 0x12) +
                                *(int *) (*(longlong * )(param_2 + 0xa0) + 4 + uVar7 * 8);
                        param_8 = (ulonglong) uVar3;
                        local_e4 = (float) uVar3 * fVar9 + fVar12;
                        local_d4 = (local_b4 - local_c4) * fVar9 + local_e4;
                        if (param_3 != (float *) 0x0) {
                            fVar9 = *param_3;
                            if (local_e8 < fVar9) {
                                local_c8 = local_c8 + (fVar9 - local_e8) * *(float *) (param_1 + 0x30);
                                local_e8 = fVar9;
                            }
                            fVar9 = param_3[1];
                            if (local_e4 < fVar9) {
                                local_c4 = local_c4 + (fVar9 - local_e4) * *(float *) (param_1 + 0x30);
                                local_e4 = fVar9;
                            }
                            fVar9 = param_3[4];
                            if (fVar9 < local_d8) {
                                local_b8 = local_b8 + (fVar9 - local_d8) * *(float *) (param_1 + 0x30);
                                local_d8 = fVar9;
                            }
                            fVar9 = param_3[5];
                            if (fVar9 < local_d4) {
                                local_b4 = local_b4 + (fVar9 - local_d4) * *(float *) (param_1 + 0x30);
                                local_d4 = fVar9;
                            }
                            if ((local_d8 <= local_e8) || (local_d4 <= local_e4)) goto LAB_1402baad7;
                        }
                        param_8 = (**(code * *)(**(longlong * *)(param_1 + 0x10) + 0xe8))
                                (*(longlong * *)(param_1 + 0x10), *plVar2, &local_c8, &local_e8,
                                 &local_e8, param_5, param_12, 0, 0);
                    }
                    LAB_1402baad7:
                    uVar7 = uVar7 + 1;
                    lVar6 = lVar6 + 4;
                } while (uVar7 < *(ulonglong * )(lVar8 + 8 + lVar1));
            }
            fVar12 = fVar12 + *(float *) (param_1 + 0x34);
            lVar8 = lVar8 + 0x18;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    *(undefined4 * )(*(longlong * )(param_1 + 0x10) + 0xe8) = 0;
    return 0;
}


int FUN_1402babb0(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402bac1a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402bac1a:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        FUN_1401984d0(param_1 + 0x978);
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


undefined8 FUN_1402bade0(longlong param_1, undefined8 *param_2) {
    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    *param_2 = *(undefined8 * )(param_1 + 0x10);
    (**(code * *) * *(undefined8 * *)(param_1 + 0x10))();
    return 0;
}


undefined8 *FUN_1402bae20(undefined8 *param_1, longlong param_2) {
    longlong *plVar1;
    longlong *plVar2;

    plVar1 = (longlong * )(param_2 + 0x70);
    *param_1 = &PTR_FUN_140b623c8;
    param_1[3] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x19] = 0;
    *(undefined4 * )(param_1 + 0x1a) = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 * )(param_1 + 6) = 0;
    param_1[8] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[7] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x10] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    if (param_1[0x1f] == 0) {
        param_1[0x1f] = plVar1;
        plVar2 = param_1 + 0x20;
        *plVar2 = *plVar1;
        *plVar1 = (longlong) param_1;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0xf8) = plVar2;
        }
    }
    return param_1;
}


void FUN_1402baf40(undefined8 *param_1) {
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong **ppuVar6;
    undefined8 local_28;
    longlong local_20;
    undefined8 local_18;
    undefined4 local_10;

    *param_1 = &PTR_FUN_140b623c8;
    if (param_1[4] != 0) {
        local_28 = param_1[3];
        local_18 = param_1[5];
        lVar1 = param_1[2];
        local_10 = *(undefined4 * )(param_1 + 6);
        local_20 = param_1[4];
        uVar4 = (**(code * *)(lVar1 + 0xa0))(&local_28);
        uVar5 = uVar4 % *(ulonglong * )(lVar1 + 0x90);
        ppuVar6 = (ulonglong * *)(*(longlong * )(lVar1 + 0x98) + uVar5 * 8);
        puVar2 = *(ulonglong * *)(*(longlong * )(lVar1 + 0x98) + uVar5 * 8);
        while (puVar2 != (ulonglong *) 0x0) {
            if ((uVar4 == **ppuVar6) && (iVar3 = (**(code * *)(lVar1 + 0xa8))(&local_28), iVar3 != 0)) {
                *ppuVar6 = (ulonglong * )(*ppuVar6)[1];
                FUN_14018b900();
                *(longlong * )(lVar1 + 0x88) = *(longlong * )(lVar1 + 0x88) + -1;
                break;
            }
            ppuVar6 = (ulonglong * *)(*ppuVar6 + 1);
            puVar2 = *ppuVar6;
        }
    }
    FUN_14018b900(param_1[4]);
    FUN_14018b900(param_1[8]);
    FUN_14018b900(param_1[0xd]);
    FUN_14018b900(param_1[7]);
    FUN_14018b900(param_1[9]);
    FUN_14018b900(param_1[10]);
    FUN_14018b900(param_1[0x10]);
    FUN_14018b900(param_1[0x15]);
    FUN_14018b900(param_1[0x12]);
    FUN_14018b900(param_1[0x13]);
    FUN_14018b900(param_1[0x14]);
    FUN_14018b900(param_1[0x11]);
    if ((undefined8 *) param_1[0x23] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x23] = param_1[0x24];
    }
    if (param_1[0x24] != 0) {
        *(undefined8 * )(param_1[0x24] + 0x118) = param_1[0x23];
    }
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    if ((undefined8 *) param_1[0x21] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x21] = param_1[0x22];
    }
    if (param_1[0x22] != 0) {
        *(undefined8 * )(param_1[0x22] + 0x108) = param_1[0x21];
    }
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    if ((undefined8 *) param_1[0x1f] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1f] = param_1[0x20];
    }
    if (param_1[0x20] != 0) {
        *(undefined8 * )(param_1[0x20] + 0xf8) = param_1[0x1f];
    }
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    if ((undefined8 *) param_1[0x1d] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1d] = param_1[0x1e];
    }
    if (param_1[0x1e] != 0) {
        *(undefined8 * )(param_1[0x1e] + 0x20) = param_1[0x1d];
    }
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    if ((undefined8 *) param_1[0x1b] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x1b] = param_1[0x1c];
    }
    if (param_1[0x1c] != 0) {
        *(undefined8 * )(param_1[0x1c] + 0x10) = param_1[0x1b];
    }
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402bb1e6. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*(longlong *) param_1[3] + 8))();
        return;
    }
    return;
}


void FUN_1402bb1f0(ulonglong param_1, undefined8 *param_2, undefined8 param_3, longlong param_4,
                   undefined4 param_5) {
    byte *pbVar1;
    short *psVar2;
    byte bVar3;
    ushort uVar4;
    ushort uVar5;
    short sVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    undefined8 uVar13;
    ulonglong uVar14;
    ulonglong *puVar15;
    ushort *puVar16;
    ulonglong *puVar17;
    ulonglong uVar18;
    longlong *plVar19;
    ulonglong *puVar20;
    float fVar21;
    undefined auStack232[32];
    ulonglong local_c8;
    longlong local_c0;
    uint *local_b8;
    longlong local_b0;
    undefined *local_a8;
    uint *local_a0;
    uint local_98;
    int local_94;
    ulonglong local_90;
    ulonglong local_88;
    ulonglong local_80;
    undefined4 local_78;
    undefined4 uStack116;
    ulonglong local_70;
    undefined local_68[16];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    if (*(undefined8 * *)(param_1 + 0x18) != param_2) {
        if (param_2 != (undefined8 *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        }
        *(undefined8 * *)(param_1 + 0x18) = param_2;
    }
    lVar7 = param_4 * 2;
    uVar13 = FUN_14018b280(lVar7 + 2, 0);
    *(undefined8 * )(param_1 + 0x20) = uVar13;
    FUN_1407db590(uVar13, param_3, lVar7);
    puVar20 = (ulonglong *) 0x0;
    *(undefined2 * )(lVar7 + *(longlong * )(param_1 + 0x20)) = 0;
    puVar17 = (ulonglong * )(*(longlong * )(param_1 + 0x18) + 0x60);
    *(longlong * )(param_1 + 0x28) = param_4;
    *(undefined4 * )(param_1 + 0x30) = param_5;
    if (*(longlong * )(param_1 + 0x108) == 0) {
        *(ulonglong * *)(param_1 + 0x108) = puVar17;
        puVar15 = (ulonglong * )(param_1 + 0x110);
        *puVar15 = *puVar17;
        *puVar17 = param_1;
        if (*puVar15 != 0) {
            *(ulonglong * *)(*puVar15 + 0x108) = puVar15;
        }
    }
    local_90 = *(ulonglong * )(param_1 + 0x18);
    lVar7 = *(longlong * )(param_1 + 0x10);
    local_88 = *(ulonglong * )(param_1 + 0x20);
    plVar19 = (longlong * )(lVar7 + 0x88);
    local_80 = *(ulonglong * )(param_1 + 0x28);
    local_78 = *(undefined4 * )(param_1 + 0x30);
    if (*plVar19 == *(longlong * )(lVar7 + 0x90)) {
        FUN_1400290d0(plVar19);
    }
    uVar14 = (**(code * *)(lVar7 + 0xa0))(&local_90);
    lVar8 = *(longlong * )(lVar7 + 0x98);
    uVar18 = uVar14 % *(ulonglong * )(lVar7 + 0x90);
    puVar15 = (ulonglong *) FUN_14018b280(0x38);
    puVar17 = puVar20;
    if (puVar15 != (ulonglong *) 0x0) {
        uVar9 = *(ulonglong * )(lVar8 + uVar18 * 8);
        *puVar15 = uVar14;
        puVar15[1] = uVar9;
        puVar15[2] = local_90;
        puVar15[3] = local_88;
        puVar15[4] = local_80;
        puVar15[6] = param_1;
        puVar15[5] = CONCAT44(uStack116, local_78);
        puVar17 = puVar15;
    }
    *(ulonglong * *)(lVar8 + uVar18 * 8) = puVar17;
    *plVar19 = *plVar19 + 1;
    *(undefined8 * )(param_1 + 0x58) = 0;
    *(undefined8 * )(param_1 + 0x70) = 0;
    *(undefined8 * )(param_1 + 0xb0) = 0;
    *(undefined8 * )(param_1 + 0xc0) = 0;
    FUN_1402bbb00(param_1, *(undefined8 * )(param_1 + 0x28));
    puVar17 = puVar20;
    puVar15 = puVar20;
    if (*(longlong * )(param_1 + 0x28) != 0) {
        do {
            *(undefined2 * )(*(longlong * )(param_1 + 0x40) + (longlong) puVar17 * 2) =
                    *(undefined2 * )(param_1 + 0x58);
            if ((int) puVar15 == 0) {
                sVar6 = *(short *) (*(longlong * )(param_1 + 0x20) + (longlong) puVar17 * 2);
                if (sVar6 == 0x1c) {
                    puVar15 = (ulonglong *) 0x1;
                } else {
                    if ((*(byte * )(param_1 + 0x30) & 1) == 0) {
                        *(short *) (*(longlong * )(param_1 + 0x38) + *(longlong * )(param_1 + 0x58) * 2) = sVar6;
                    } else {
                        *(undefined2 * )(*(longlong * )(param_1 + 0x38) + *(longlong * )(param_1 + 0x58) * 2) =
                                0x2022;
                    }
                    *(longlong * )(param_1 + 0x58) = *(longlong * )(param_1 + 0x58) + 1;
                }
            } else if (*(short *) (*(longlong * )(param_1 + 0x20) + (longlong) puVar17 * 2) == 0x3b) {
                puVar15 = puVar20;
            }
            puVar17 = (ulonglong * )((longlong) puVar17 + 1);
        } while (puVar17 < *(ulonglong * *)(param_1 + 0x28));
    }
    *(undefined2 * )(*(longlong * )(param_1 + 0x40) + *(longlong * )(param_1 + 0x28) * 2) =
            *(undefined2 * )(param_1 + 0x58);
    FUN_1407e4830(*(undefined8 * )(param_1 + 0x50), 0, *(longlong * )(param_1 + 0x58) * 2);
    FUN_1407e4830(*(undefined8 * )(param_1 + 0x48), 0, *(undefined8 * )(param_1 + 0x58));
    if (*(longlong * )(param_1 + 0x58) == 0) {
        FUN_1402bbb80(param_1, 0);
    } else {
        uVar18 = *(longlong * )(param_1 + 0x58) + 1;
        uVar14 = *(ulonglong * )(param_1 + 0x78);
        if (*(ulonglong * )(param_1 + 0x78) < uVar18) {
            uVar14 = uVar18;
        }
        *(ulonglong * )(param_1 + 0x78) = uVar14;
        local_c0 = FUN_14018c320(*(undefined8 * )(param_1 + 0x68), uVar14 * 8,
                                 (*(uint * )(param_1 + 0x30) & 1 | 2) << 2);
        local_b8 = &local_98;
        *(longlong * )(param_1 + 0x68) = local_c0;
        local_c8 = 0;
        iVar10 = ScriptItemize(*(undefined8 * )(param_1 + 0x38), *(undefined4 * )(param_1 + 0x58),
                               *(undefined4 * )(param_1 + 0x78));
        while (iVar10 < 0) {
            if (iVar10 != -0x7ff8fff2) goto LAB_1402bb526;
            uVar14 = *(ulonglong * )(param_1 + 0x78);
            if (uVar14 < uVar14 * 2) {
                uVar14 = uVar14 * 2;
            }
            *(ulonglong * )(param_1 + 0x78) = uVar14;
            local_c0 = FUN_14018c320(*(undefined8 * )(param_1 + 0x68), uVar14 * 8,
                                     (*(uint * )(param_1 + 0x30) & 1 | 2) << 2);
            local_b8 = &local_98;
            *(longlong * )(param_1 + 0x68) = local_c0;
            local_c8 = 0;
            iVar10 = ScriptItemize(*(undefined8 * )(param_1 + 0x38), *(undefined4 * )(param_1 + 0x58));
        }
        *(longlong * )(param_1 + 0x70) = (longlong)(int)
        local_98;
        LAB_1402bb526:
        FUN_1402bbb80(param_1, ((ulonglong)(*(longlong * )(param_1 + 0x58) * 3) >> 1) + 0x10);
        puVar17 = puVar20;
        if (*(longlong * )(param_1 + 0x70) != 0) {
            do {
                lVar7 = *(longlong * )(param_1 + 0x68);
                lVar8 = *(longlong * )(param_1 + 0xb0);
                iVar10 = *(int *) (lVar7 + (longlong) puVar17 * 8);
                uVar18 = (ulonglong) iVar10;
                iVar12 = *(int *) (lVar7 + 8 + (longlong) puVar17 * 8);
                iVar10 = iVar12 - iVar10;
                local_c0 = lVar7 + 4 + (longlong) puVar17 * 8;
                local_98 = 0;
                local_a8 = (undefined * )(*(longlong * )(param_1 + 0x88) + lVar8 * 2);
                local_b0 = *(longlong * )(param_1 + 0x50) + uVar18 * 2;
                local_b8 = (uint * )(*(longlong * )(param_1 + 0x80) + lVar8 * 2);
                local_a0 = &local_98;
                local_c8 = local_c8 & 0xffffffff00000000 |
                           (ulonglong)(uint)(*(int *) (param_1 + 0xb8) - (int) lVar8);
                local_94 = iVar10;
                local_70 = (longlong) iVar12;
                iVar11 = ScriptShape(*(undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x68),
                                     *(longlong * )(param_1 + 0x18) + 0xf0,
                                     *(longlong * )(param_1 + 0x38) + uVar18 * 2);
                uVar14 = (longlong) iVar12;
                while (uVar9 = uVar18, iVar11 < 0) {
                    if (iVar11 == -0x7ff8fff2) {
                        FUN_1402bbb80(param_1, *(longlong * )(param_1 + 0xb8) * 2);
                    } else {
                        uVar14 = local_70;
                        if (iVar11 != -0x7ffbfe00) break;
                        uVar4 = *(ushort * )(*(longlong * )(param_1 + 0x68) + 4 + (longlong) puVar17 * 8);
                        if ((uVar4 & 0x3ff) == 0) break;
                        *(ushort * )(*(longlong * )(param_1 + 0x68) + 4 + (longlong) puVar17 * 8) = uVar4 & 0xfc00;
                    }
                    iVar10 = local_94;
                    lVar7 = *(longlong * )(param_1 + 0xb0);
                    local_a8 = (undefined * )(*(longlong * )(param_1 + 0x88) + lVar7 * 2);
                    local_b0 = *(longlong * )(param_1 + 0x50) + uVar18 * 2;
                    local_c0 = *(longlong * )(param_1 + 0x68) + 4 + (longlong) puVar17 * 8;
                    local_b8 = (uint * )(*(longlong * )(param_1 + 0x80) + lVar7 * 2);
                    local_a0 = &local_98;
                    local_c8 = local_c8 & 0xffffffff00000000 |
                               (ulonglong)(uint)(*(int *) (param_1 + 0xb8) - (int) lVar7);
                    iVar11 = ScriptShape(*(undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x68),
                                         *(longlong * )(param_1 + 0x18) + 0xf0,
                                         *(longlong * )(param_1 + 0x38) + uVar18 * 2);
                    uVar14 = local_70;
                }
                while (uVar9 < uVar14) {
                    psVar2 = (short *) (*(longlong * )(param_1 + 0x50) + -2 + (uVar9 + 1) * 2);
                    *psVar2 = *psVar2 + *(short *) (param_1 + 0xb0);
                    uVar9 = uVar9 + 1;
                }
                lVar7 = *(longlong * )(param_1 + 0xb0);
                local_b0 = *(longlong * )(param_1 + 0xa0) + lVar7 * 8;
                local_b8 = (uint * )(*(longlong * )(param_1 + 0x90) + lVar7 * 4);
                local_c8 = *(longlong * )(param_1 + 0x88) + lVar7 * 2;
                local_c0 = *(longlong * )(param_1 + 0x68) + 4 + (longlong) puVar17 * 8;
                local_a8 = local_68;
                iVar12 = ScriptPlace(*(undefined8 * )(*(longlong * )(param_1 + 0x18) + 0x68),
                                     *(longlong * )(param_1 + 0x18) + 0xf0,
                                     *(longlong * )(param_1 + 0x80) + lVar7 * 2);
                if ((-1 < iVar12) &&
                    (iVar10 = ScriptBreak(*(longlong * )(param_1 + 0x38) + uVar18 * 2, iVar10,
                                          *(longlong * )(param_1 + 0x68) + 4 + (longlong) puVar17 * 8),
                            -1 < iVar10)) {
                    *(longlong * )(param_1 + 0xb0) = *(longlong * )(param_1 + 0xb0) + (ulonglong) local_98;
                }
                puVar17 = (ulonglong * )((longlong) puVar17 + 1);
            } while (puVar17 < *(ulonglong * *)(param_1 + 0x70));
        }
        *(undefined2 * )(*(longlong * )(param_1 + 0x50) + *(longlong * )(param_1 + 0x58) * 2) =
                *(undefined2 * )(param_1 + 0xb0);
        uVar14 = 2;
        if (2 < *(ulonglong * )(param_1 + 0x58)) {
            do {
                lVar7 = *(longlong * )(param_1 + 0x48);
                if (((((*(byte * )(lVar7 + -2 + uVar14) & 2) == 0) &&
                      (*(short *) (*(longlong * )(param_1 + 0x38) + -2 + uVar14 * 2) == 0x2d)) &&
                     ((*(byte * )(lVar7 + uVar14) & 2) == 0)) &&
                    (*(short *) (*(longlong * )(param_1 + 0x38) + uVar14 * 2) != 0x2d)) {
                    *(byte * )(lVar7 + uVar14) = *(byte * )(lVar7 + uVar14) | 1;
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 < *(ulonglong * )(param_1 + 0x58));
        }
        puVar17 = puVar20;
        if (*(longlong * )(param_1 + 0x58) != 0) {
            do {
                lVar7 = *(longlong * )(param_1 + 0x50);
                puVar15 = (ulonglong * )((longlong) puVar17 + 1);
                uVar5 = *(ushort * )(lVar7 + (longlong) puVar17 * 2);
                puVar16 = (ushort * )(lVar7 + (longlong) puVar15 * 2);
                uVar4 = *puVar16;
                while (uVar4 == uVar5) {
                    puVar16 = puVar16 + 1;
                    puVar15 = (ulonglong * )((longlong) puVar15 + 1);
                    uVar4 = *puVar16;
                }
                uVar18 = (ulonglong) * (ushort * )(lVar7 + (longlong) puVar15 * 2);
                uVar14 = (ulonglong) uVar5;
                if (((puVar17 != (ulonglong *) 0x0) &&
                     (lVar7 = *(longlong * )(param_1 + 0x48),
                             (*(byte * )(lVar7 + -1 + (longlong) puVar17) & 2) != 0)) &&
                    ((*(byte * )(lVar7 + (longlong) puVar17) & 2) == 0)) {
                    *(byte * )(lVar7 + (longlong) puVar17) = *(byte * )(lVar7 + (longlong) puVar17) | 1;
                    pbVar1 = (byte * )(*(longlong * )(param_1 + 0x48) + (longlong) puVar17);
                    *pbVar1 = *pbVar1 | 8;
                }
                bVar3 = *(byte * )((longlong) puVar17 + *(longlong * )(param_1 + 0x48));
                if (((bVar3 & 0x10) == 0) &&
                    ((((longlong) puVar15 - (longlong) puVar17 != 1 ||
                       (sVar6 = *(short *) (*(longlong * )(param_1 + 0x38) + (longlong) puVar17 * 2),
                               (sVar6 - 9U & 0xfffa) != 0)) || (sVar6 == 0xe)))) {
                    if ((bVar3 & 2) != 0) {
                        while (uVar14 < uVar18) {
                            uVar14 = uVar14 + 1;
                            *(undefined2 * )(*(longlong * )(param_1 + 0x80) + -2 + uVar14 * 2) =
                                    *(undefined2 * )(*(longlong * )(param_1 + 0x18) + 0xfc);
                        }
                    }
                } else {
                    while (uVar14 < uVar18) {
                        uVar14 = uVar14 + 1;
                        *(undefined4 * )(*(longlong * )(param_1 + 0x90) + -4 + uVar14 * 4) = 0;
                        *(undefined2 * )(*(longlong * )(param_1 + 0x80) + -2 + uVar14 * 2) =
                                *(undefined2 * )(*(longlong * )(param_1 + 0x18) + 0xfc);
                    }
                    pbVar1 = (byte * )(*(longlong * )(param_1 + 0x48) + (longlong) puVar17);
                    *pbVar1 = *pbVar1 | 2;
                }
                puVar17 = puVar15;
            } while (puVar15 < *(ulonglong * *)(param_1 + 0x58));
        }
    }
    fVar21 = 0.0;
    if (*(longlong * )(param_1 + 0xb0) != 0) {
        do {
            puVar17 = (ulonglong * )(ulonglong)((int) puVar20 + 1);
            *(float *) (*(longlong * )(param_1 + 0x98) + (longlong) puVar20 * 4) = fVar21;
            fVar21 = fVar21 + (float) *(int *) (*(longlong * )(param_1 + 0x90) + (longlong) puVar20 * 4) *
                              *(float *) (*(longlong * )(param_1 + 0x18) + 0x24);
            puVar20 = puVar17;
        } while (puVar17 < *(ulonglong * *)(param_1 + 0xb0));
    }
    *(float *) (*(longlong * )(param_1 + 0x98) + *(longlong * )(param_1 + 0xb0) * 4) = fVar21;
    FUN_1407db4f0(local_58 ^ (ulonglong) auStack232);
    return;
}


undefined8 FUN_1402bba10(longlong param_1, int *param_2) {
    int iVar1;

    if (*(ulonglong * )(param_1 + 0xb0) <= *(ulonglong * )(param_1 + 0xc0)) {
        return 1;
    }
    iVar1 = (**(code * *)(**(longlong * *)(*(longlong * )(param_1 + 0x10) + 0x10) + 0x260))();
    if ((iVar1 != 0) ||
        (iVar1 = FUN_1402b8f30(*(undefined8 * )(param_1 + 0x18),
                               *(undefined2 * )
                                       (*(longlong * )(param_1 + 0x80) + *(longlong * )(param_1 + 0xc0) * 2),
                               *(longlong * )(param_1 + 0xa8) + *(longlong * )(param_1 + 0xc0) * 8),
                iVar1 < 0)) {
        return 0;
    }
    do {
        *(longlong * )(param_1 + 0xc0) = *(longlong * )(param_1 + 0xc0) + 1;
        if (*(longlong * )(param_1 + 0xc0) == *(longlong * )(param_1 + 0xb0)) {
            return 1;
        }
        if (iVar1 != 1) {
            if (*param_2 == 0) {
                return 0;
            }
            iVar1 = FUN_14001c520(param_2);
            if (iVar1 == 0) {
                return 0;
            }
        }
        iVar1 = FUN_1402b8f30(*(undefined8 * )(param_1 + 0x18),
                              *(undefined2 * )
                                      (*(longlong * )(param_1 + 0x80) + *(longlong * )(param_1 + 0xc0) * 2),
                              *(longlong * )(param_1 + 0xa8) + *(longlong * )(param_1 + 0xc0) * 8);
        if (iVar1 < 0) {
            return 0;
        }
    } while (true);
}


void FUN_1402bbb00(longlong param_1, longlong param_2) {
    undefined8 uVar1;
    undefined8 uVar2;

    *(longlong * )(param_1 + 0x60) = param_2;
    uVar1 = FUN_14018b280(param_2 * 2 + 2, 0);
    uVar2 = 0;
    *(undefined8 * )(param_1 + 0x40) = uVar1;
    uVar1 = uVar2;
    if (*(longlong * )(param_1 + 0x60) != 0) {
        uVar1 = FUN_14018b280(*(longlong * )(param_1 + 0x60) * 2, 0);
    }
    *(undefined8 * )(param_1 + 0x38) = uVar1;
    if (*(longlong * )(param_1 + 0x60) != 0) {
        uVar2 = FUN_14018b280(*(longlong * )(param_1 + 0x60), 0);
    }
    *(undefined8 * )(param_1 + 0x48) = uVar2;
    uVar1 = FUN_14018b280(*(longlong * )(param_1 + 0x60) * 2 + 2, 0);
    *(undefined8 * )(param_1 + 0x50) = uVar1;
    return;
}


void FUN_1402bbb80(longlong param_1, ulonglong param_2) {
    ulonglong uVar1;
    undefined8 uVar2;
    int iVar3;

    iVar3 = (*(uint * )(param_1 + 0x30) & 1 | 2) << 2;
    uVar1 = *(ulonglong * )(param_1 + 0xb8);
    if (*(ulonglong * )(param_1 + 0xb8) < param_2) {
        uVar1 = param_2;
    }
    *(ulonglong * )(param_1 + 0xb8) = uVar1;
    if (uVar1 != 0) {
        uVar1 = FUN_14018c320(*(undefined8 * )(param_1 + 0x80), uVar1 * 2, iVar3);
    }
    *(ulonglong * )(param_1 + 0x80) = uVar1;
    if (*(longlong * )(param_1 + 0xb8) == 0) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_14018c320(*(undefined8 * )(param_1 + 0x88), *(longlong * )(param_1 + 0xb8) * 2, iVar3);
    }
    *(undefined8 * )(param_1 + 0x88) = uVar2;
    if (*(longlong * )(param_1 + 0xb8) == 0) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_14018c320(*(undefined8 * )(param_1 + 0x90), *(longlong * )(param_1 + 0xb8) * 4, iVar3);
    }
    *(undefined8 * )(param_1 + 0x90) = uVar2;
    uVar2 = FUN_14018c320(*(undefined8 * )(param_1 + 0x98), *(longlong * )(param_1 + 0xb8) * 4 + 4, iVar3);
    *(undefined8 * )(param_1 + 0x98) = uVar2;
    if (*(longlong * )(param_1 + 0xb8) == 0) {
        uVar2 = 0;
    } else {
        uVar2 = FUN_14018c320(*(undefined8 * )(param_1 + 0xa0), *(longlong * )(param_1 + 0xb8) * 8, iVar3);
    }
    *(undefined8 * )(param_1 + 0xa0) = uVar2;
    if (*(longlong * )(param_1 + 0xb8) != 0) {
        uVar2 = FUN_14018c320(*(undefined8 * )(param_1 + 0xa8), *(longlong * )(param_1 + 0xb8) * 8, iVar3);
        *(undefined8 * )(param_1 + 0xa8) = uVar2;
        return;
    }
    *(undefined8 * )(param_1 + 0xa8) = 0;
    return;
}


int FUN_1402bbcd0(longlong param_1) {
    ulonglong *puVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    DWORD DVar5;
    HANDLE hObject;
    ulonglong uVar6;

    lVar3 = *(longlong * )(param_1 + 0x10);
    DVar5 = GetCurrentThreadId();
    uVar6 = 0;
    if (*(DWORD * )(lVar3 + 0x18) == DVar5) {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + 1;
    } else {
        do {
            LOCK();
            puVar1 = (ulonglong * )(lVar3 + 0x20);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 ^ (ulonglong)(uVar4 == 0) * (*puVar1 ^ 1);
            if (uVar4 == 0) {
                *(DWORD * )(lVar3 + 0x18) = DVar5;
                goto LAB_1402bbd3a;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x400);
        FUN_14019fb60(lVar3 + 0x18, DVar5);
    }
    LAB_1402bbd3a:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + 1;
    iVar2 = *(int *) (param_1 + 8);
    if (iVar2 == 1) {
        if ((*(byte * )(param_1 + 0x30) & 3) == 0) {
            FUN_1401984d0(param_1 + 200);
        } else {
            if (*(undefined8 * *)(param_1 + 0x118) != (undefined8 *) 0x0) {
                **(undefined8 * *)(param_1 + 0x118) = *(undefined8 * )(param_1 + 0x120);
            }
            if (*(longlong * )(param_1 + 0x120) != 0) {
                *(undefined8 * )(*(longlong * )(param_1 + 0x120) + 0x118) = *(undefined8 * )(param_1 + 0x118);
            }
            *(undefined8 * )(param_1 + 0x118) = 0;
            *(undefined8 * )(param_1 + 0x120) = 0;
        }
    }
    if (*(ulonglong * )(lVar3 + 0x20) < 2) {
        *(undefined4 * )(lVar3 + 0x18) = 0;
        *(undefined8 * )(lVar3 + 0x20) = 0;
        if (*(longlong * )(lVar3 + 0x28) != 0) {
            if (*(longlong * )(lVar3 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar1 = (ulonglong * )(lVar3 + 0x30);
                uVar6 = *puVar1;
                *puVar1 = *puVar1 ^ (ulonglong)(uVar6 == 0) * (*puVar1 ^ (ulonglong) hObject);
                if (uVar6 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar3 + 0x30));
        }
    } else {
        *(longlong * )(lVar3 + 0x20) = *(longlong * )(lVar3 + 0x20) + -1;
    }
    return iVar2;
}


int FUN_1402bbe10(longlong param_1) {
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    DWORD DVar4;
    HANDLE hObject;
    ulonglong uVar5;
    longlong *plVar6;
    DWORD *pDVar7;
    ulonglong *puVar8;
    int iVar9;

    lVar2 = *(longlong * )(param_1 + 0x10);
    pDVar7 = (DWORD * )(lVar2 + 0x18);
    DVar4 = GetCurrentThreadId();
    uVar5 = 0;
    puVar8 = (ulonglong * )(lVar2 + 0x20);
    if (*pDVar7 == DVar4) {
        *puVar8 = *puVar8 + 1;
    } else {
        do {
            LOCK();
            uVar3 = *puVar8;
            *puVar8 = *puVar8 ^ (ulonglong)(uVar3 == 0) * (*puVar8 ^ 1);
            if (uVar3 == 0) {
                *pDVar7 = DVar4;
                goto LAB_1402bbe8e;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x400);
        FUN_14019fb60(pDVar7, DVar4);
    }
    LAB_1402bbe8e:
    *(int *) (param_1 + 8) = *(int *) (param_1 + 8) + -1;
    iVar9 = *(int *) (param_1 + 8);
    if (iVar9 == -1) {
        FUN_1402baf40(param_1);
        FUN_14018b900(param_1, 0);
        iVar9 = 0;
    } else if (iVar9 == 0) {
        if ((*(byte * )(param_1 + 0x30) & 3) == 0) {
            FUN_140198370(param_1 + 200, param_1, *(longlong * )(param_1 + 0x10) + 0x1c0);
        } else {
            plVar6 = (longlong * )(*(longlong * )(param_1 + 0x10) + 0x78);
            if (*(longlong * )(param_1 + 0x118) == 0) {
                *(longlong * *)(param_1 + 0x118) = plVar6;
                plVar1 = (longlong * )(param_1 + 0x120);
                *plVar1 = *plVar6;
                *plVar6 = param_1;
                if (*plVar1 != 0) {
                    *(longlong * *)(*plVar1 + 0x118) = plVar1;
                }
            }
        }
    }
    if (*puVar8 < 2) {
        *pDVar7 = 0;
        *puVar8 = 0;
        if (*(longlong * )(lVar2 + 0x28) != 0) {
            if (*(longlong * )(lVar2 + 0x30) == 0) {
                hObject = CreateEventW((LPSECURITY_ATTRIBUTES) 0x0, 0, 0, (LPCWSTR) 0x0);
                LOCK();
                puVar8 = (ulonglong * )(lVar2 + 0x30);
                uVar5 = *puVar8;
                *puVar8 = *puVar8 ^ (ulonglong)(uVar5 == 0) * (*puVar8 ^ (ulonglong) hObject);
                if (uVar5 != 0) {
                    CloseHandle(hObject);
                }
            }
            SetEvent(*(HANDLE * )(lVar2 + 0x30));
        }
    } else {
        *puVar8 = *puVar8 - 1;
    }
    return iVar9;
}


void FUN_1402bbf90(undefined8 param_1, float param_2, longlong param_3, undefined8 param_4,
                   ulonglong *param_5) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    lVar1 = *(longlong * )(param_3 + 0x98);
    if (param_2 < *(float *) (lVar1 + *(longlong * )(param_3 + 0xb0) * 4)) {
        uVar3 = *(ulonglong * )(param_3 + 0x28);
        uVar2 = 0;
        if (1 < uVar3) {
            uVar4 = uVar2;
            do {
                uVar2 = uVar3 + uVar4 >> 1;
                if (param_2 < *(float *) (lVar1 + (ulonglong)
                                                  * (ushort * )
                                                          (*(longlong * )(param_3 + 0x50) +
                                                           (ulonglong)
                                                           * (ushort * )
                                                                   (*(longlong * )(param_3 + 0x40) +
                                                                    (uVar3 + uVar4 & 0xfffffffffffffffe)) * 2) * 4)) {
                    uVar3 = uVar2;
                    uVar2 = uVar4;
                }
                uVar4 = uVar2;
            } while (1 < uVar3 - uVar2);
        }
        if (param_2 - *(float *) (lVar1 + (ulonglong)
                                          * (ushort * )
                                                  (*(longlong * )(param_3 + 0x50) +
                                                   (ulonglong)
                                                   * (ushort * )(*(longlong * )(param_3 + 0x40) + uVar2 * 2) * 2) *
                                          4) <
            *(float *) (lVar1 + (ulonglong)
                                * (ushort * )
                                        (*(longlong * )(param_3 + 0x50) +
                                         (ulonglong) * (ushort * )(*(longlong * )(param_3 + 0x40) + uVar3 * 2) * 2) *
                                4) - param_2) {
            uVar3 = uVar2;
        }
        *param_5 = uVar3;
        return;
    }
    *param_5 = *(ulonglong * )(param_3 + 0x28);
    return;
}


undefined8 *FUN_1402bc050(undefined8 *param_1, longlong param_2) {
    longlong *plVar1;
    longlong *plVar2;

    plVar1 = (longlong * )(param_2 + 0x68);
    *param_1 = &PTR_LAB_140b623e0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[2] = param_2;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 * )(param_1 + 7) = 0;
    if (param_1[9] == 0) {
        param_1[9] = plVar1;
        plVar2 = param_1 + 10;
        *plVar2 = *plVar1;
        *plVar1 = (longlong) param_1;
        if (*plVar2 != 0) {
            *(longlong * *)(*plVar2 + 0x48) = plVar2;
        }
    }
    return param_1;
}


void FUN_1402bc0c0(undefined8 *param_1) {
    *param_1 = &PTR_LAB_140b623e0;
    FUN_14018b900(param_1[4], 0);
    if ((undefined8 *) param_1[9] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[9] = param_1[10];
    }
    if (param_1[10] != 0) {
        *(undefined8 * )(param_1[10] + 0x48) = param_1[9];
    }
    param_1[9] = 0;
    param_1[10] = 0;
    if ((longlong *) param_1[8] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[8] + 8))();
    }
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        // WARNING: Could not recover jumptable at 0x0001402bc129. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(*(longlong *) param_1[3] + 8))();
        return;
    }
    return;
}


undefined8
FUN_1402bc140(longlong param_1, undefined8 *param_2, short *param_3, longlong param_4,
              undefined4 param_5) {
    short sVar1;
    undefined auVar2[16];
    undefined8 uVar3;

    if ((param_4 == -1) && (param_4 = 0, param_3 != (short *) 0x0)) {
        sVar1 = *param_3;
        param_4 = 0;
        while (sVar1 != 0) {
            param_4 = param_4 + 1;
            sVar1 = param_3[param_4];
        }
    }
    if ((param_2 == (undefined8 *) 0x0) || ((param_3 == (short *) 0x0 && (param_4 != 0)))) {
        uVar3 = 0x80070057;
    } else {
        if (*(undefined8 * *)(param_1 + 0x18) != param_2) {
            (**(code * *) * param_2)(param_2);
            if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
            }
            *(undefined8 * *)(param_1 + 0x18) = param_2;
        }
        auVar2 = ZEXT816(2) * ZEXT816(param_4 + 1);
        uVar3 = SUB168(auVar2, 0);
        if (SUB168(auVar2 >> 0x40, 0) != 0) {
            uVar3 = 0xffffffffffffffff;
        }
        uVar3 = FUN_14018b280(uVar3, 0);
        *(undefined8 * )(param_1 + 0x20) = uVar3;
        FUN_1407db590(uVar3, param_3, param_4 * 2);
        *(undefined2 * )(param_4 * 2 + *(longlong * )(param_1 + 0x20)) = 0;
        *(longlong * )(param_1 + 0x28) = param_4;
        *(undefined4 * )(param_1 + 0x38) = param_5;
        uVar3 = 0;
    }
    return uVar3;
}


undefined4 FUN_1402bc230(longlong param_1) {
    int *piVar1;
    undefined4 uVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    *piVar1 = *piVar1 + -1;
    uVar2 = *(undefined4 * )(param_1 + 8);
    if (*piVar1 == 0) {
        FUN_1402bc0c0();
        FUN_14018b900(param_1, 0);
        uVar2 = 0;
    }
    return uVar2;
}


undefined8 FUN_1402bc260(longlong param_1, undefined8 *param_2) {
    if (param_2 == (undefined8 *) 0x0) {
        return 0x80070057;
    }
    if (*(undefined8 * *)(param_1 + 0x18) != param_2) {
        (**(code * *) * param_2)(param_2);
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        }
        *(undefined8 * *)(param_1 + 0x18) = param_2;
        if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
            *(undefined8 * )(param_1 + 0x40) = 0;
        }
    }
    return 0;
}


void FUN_1402bc2d0(longlong *param_1, undefined8 param_2, undefined8 param_3) {
    (**(code * *)(*param_1 + 0x88))(param_1, 0, param_1[5], param_2, param_3);
    return;
}


undefined8 FUN_1402bc300(longlong param_1, int param_2) {
    if (*(int *) (param_1 + 0x38) != param_2) {
        *(int *) (param_1 + 0x38) = param_2;
        if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
            *(undefined8 * )(param_1 + 0x40) = 0;
        }
    }
    return 0;
}


void FUN_1402bc370(longlong *param_1, undefined8 param_2, undefined8 param_3) {
    (**(code * *)(*param_1 + 0x88))(param_1, param_1[5], param_1[5], param_2, param_3);
    return;
}


void FUN_1402bc3a0(longlong *param_1, undefined8 param_2, undefined2 param_3) {
    undefined2 local_res18;
    undefined2 local_res1a;

    local_res1a = 0;
    local_res18 = param_3;
    (**(code * *)(*param_1 + 0x88))(param_1, param_2, param_2, &local_res18, 1);
    return;
}


void FUN_1402bc3f0(longlong *param_1, longlong param_2) {
    (**(code * *)(*param_1 + 0x88))(param_1, param_2, param_2 + 1, 0, 0);
    return;
}


void FUN_1402bc420(longlong *param_1) {
    (**(code * *)(*param_1 + 0x88))();
    return;
}


void FUN_1402bc480(longlong *param_1) {
    (**(code * *)(*param_1 + 0x88))();
    return;
}


void FUN_1402bc4b0(longlong *param_1, longlong param_2, undefined8 param_3, undefined8 param_4) {
    (**(code * *)(*param_1 + 0x88))(param_1, param_2, param_2 + 1, param_3, param_4);
    return;
}


undefined8
FUN_1402bc4e0(longlong param_1, ulonglong param_2, ulonglong param_3, short *param_4, longlong param_5) {
    short sVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    uVar3 = *(ulonglong * )(param_1 + 0x28);
    if (((uVar3 < param_2) || (uVar3 < param_3)) || (param_3 < param_2)) {
        return 0x80070057;
    }
    if (param_5 == -1) {
        param_5 = 0;
        if (param_4 == (short *) 0x0) goto LAB_1402bc57b;
        sVar1 = *param_4;
        while (sVar1 != 0) {
            param_5 = param_5 + 1;
            sVar1 = param_4[param_5];
        }
    }
    if ((param_4 == (short *) 0x0) && (param_5 != 0)) {
        return 0x80070057;
    }
    LAB_1402bc57b:
    if (param_5 != param_3 - param_2) {
        uVar3 = (uVar3 - param_3) + param_2 + param_5;
        if (*(ulonglong * )(param_1 + 0x30) <= uVar3 && uVar3 != *(ulonglong * )(param_1 + 0x30)) {
            uVar2 = FUN_14018c320(*(undefined8 * )(param_1 + 0x20), uVar3 * 2 + 2, 0);
            *(ulonglong * )(param_1 + 0x30) = uVar3;
            *(undefined8 * )(param_1 + 0x20) = uVar2;
        }
        FUN_1407db590(*(longlong * )(param_1 + 0x20) + (param_2 + param_5) * 2,
                      *(longlong * )(param_1 + 0x20) + param_3 * 2,
                      (*(longlong * )(param_1 + 0x28) - param_3) * 2);
        *(undefined2 * )(*(longlong * )(param_1 + 0x20) + uVar3 * 2) = 0;
        *(ulonglong * )(param_1 + 0x28) = uVar3;
    }
    FUN_1407db590(*(longlong * )(param_1 + 0x20) + param_2 * 2, param_4, param_5 * 2);
    if (*(longlong * *)(param_1 + 0x40) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x40) + 8))();
        *(undefined8 * )(param_1 + 0x40) = 0;
    }
    return 0;
}


undefined8 FUN_1402bc620(longlong param_1, ulonglong param_2, undefined4 *param_3) {
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 == 0) {
        *param_3 = 0;
        return 0;
    }
    if (param_2 <= *(ulonglong * )(param_1 + 0x28)) {
        if ((*(longlong * )(param_1 + 0x40) == 0) &&
            (uVar2 = FUN_140283d30(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18),
                                   *(undefined8 * )(param_1 + 0x20), *(ulonglong * )(param_1 + 0x28),
                                   *(undefined4 * )(param_1 + 0x38), (longlong * )(param_1 + 0x40)),
                    (int) uVar2 < 0)) {
            return uVar2;
        }
        lVar1 = *(longlong * )(param_1 + 0x40);
        *param_3 = *(undefined4 * )
                (*(longlong * )(lVar1 + 0x98) +
                 (ulonglong)
                 * (ushort * )
                         (*(longlong * )(lVar1 + 0x50) +
                          (ulonglong) * (ushort * )(*(longlong * )(lVar1 + 0x40) + param_2 * 2) * 2) * 4);
        return 0;
    }
    return 0x80070057;
}


undefined8 FUN_1402bc750(longlong param_1, ulonglong param_2, ulonglong *param_3) {
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    short *psVar6;

    uVar5 = *(ulonglong * )(param_1 + 0x28);
    if (param_2 == uVar5) {
        *param_3 = uVar5;
        return 0;
    }
    if (uVar5 < param_2) {
        return 0x80070057;
    }
    if ((*(longlong * )(param_1 + 0x40) == 0) &&
        (uVar4 = FUN_140283d30(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18),
                               *(undefined8 * )(param_1 + 0x20), uVar5, *(undefined4 * )(param_1 + 0x38),
                               (longlong * )(param_1 + 0x40)), (int) uVar4 < 0)) {
        return uVar4;
    }
    lVar1 = *(longlong * )(param_1 + 0x40);
    uVar5 = param_2 + 1;
    lVar2 = *(longlong * )(lVar1 + 0x40);
    uVar3 = *(ulonglong * )(lVar1 + 0x28);
    if (uVar5 < uVar3) {
        psVar6 = (short *) (lVar2 + uVar5 * 2);
        do {
            if (*(short *) (lVar2 + param_2 * 2) != *psVar6) break;
            uVar5 = uVar5 + 1;
            psVar6 = psVar6 + 1;
        } while (uVar5 < uVar3);
    }
    *param_3 = uVar5;
    return 0;
}


undefined8 FUN_1402bc810(longlong param_1, ulonglong param_2, longlong *param_3) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    short *psVar4;

    if (param_2 == 0) {
        *param_3 = 0;
        return 0;
    }
    if (*(ulonglong * )(param_1 + 0x28) < param_2) {
        return 0x80070057;
    }
    if ((*(longlong * )(param_1 + 0x40) == 0) &&
        (uVar2 = FUN_140283d30(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18),
                               *(undefined8 * )(param_1 + 0x20), *(ulonglong * )(param_1 + 0x28),
                               *(undefined4 * )(param_1 + 0x38), (longlong * )(param_1 + 0x40)),
                (int) uVar2 < 0)) {
        return uVar2;
    }
    lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x40) + 0x40);
    lVar3 = param_2 - 1;
    if (lVar3 != 0) {
        psVar4 = (short *) (lVar1 + (param_2 - 2) * 2);
        do {
            if (*(short *) (lVar1 + -2 + param_2 * 2) != *psVar4) break;
            psVar4 = psVar4 + -1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    *param_3 = lVar3;
    return 0;
}


undefined8 FUN_1402bc8d0(longlong param_1, ulonglong param_2, ulonglong *param_3) {
    ulonglong uVar1;
    longlong lVar2;
    undefined8 uVar3;
    ushort *puVar4;

    uVar1 = *(ulonglong * )(param_1 + 0x28);
    if (param_2 == uVar1) {
        *param_3 = uVar1;
        return 0;
    }
    if (uVar1 < param_2) {
        return 0x80070057;
    }
    if ((*(longlong * )(param_1 + 0x40) == 0) &&
        (uVar3 = FUN_140283d30(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18),
                               *(undefined8 * )(param_1 + 0x20), uVar1, *(undefined4 * )(param_1 + 0x38),
                               (longlong * )(param_1 + 0x40)), (int) uVar3 < 0)) {
        return uVar3;
    }
    lVar2 = *(longlong * )(param_1 + 0x40);
    param_2 = param_2 + 1;
    if (param_2 < *(ulonglong * )(lVar2 + 0x28)) {
        puVar4 = (ushort * )(*(longlong * )(lVar2 + 0x40) + param_2 * 2);
        do {
            if ((*(byte * )((ulonglong) * puVar4 + *(longlong * )(lVar2 + 0x48)) & 8) != 0) break;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 1;
        } while (param_2 < *(ulonglong * )(lVar2 + 0x28));
    }
    *param_3 = param_2;
    return 0;
}


undefined8 FUN_1402bc990(longlong param_1, ulonglong param_2, longlong *param_3) {
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    ushort *puVar4;

    if (param_2 == 0) {
        *param_3 = 0;
        return 0;
    }
    if (*(ulonglong * )(param_1 + 0x28) < param_2) {
        return 0x80070057;
    }
    if ((*(longlong * )(param_1 + 0x40) == 0) &&
        (uVar2 = FUN_140283d30(*(undefined8 * )(param_1 + 0x10), *(undefined8 * )(param_1 + 0x18),
                               *(undefined8 * )(param_1 + 0x20), *(ulonglong * )(param_1 + 0x28),
                               *(undefined4 * )(param_1 + 0x38), (longlong * )(param_1 + 0x40)),
                (int) uVar2 < 0)) {
        return uVar2;
    }
    lVar1 = *(longlong * )(param_1 + 0x40);
    lVar3 = param_2 - 1;
    if (lVar3 != 0) {
        puVar4 = (ushort * )(*(longlong * )(lVar1 + 0x40) + lVar3 * 2);
        do {
            if ((*(byte * )((ulonglong) * puVar4 + *(longlong * )(lVar1 + 0x48)) & 8) != 0) break;
            puVar4 = puVar4 + -1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    *param_3 = lVar3;
    return 0;
}


undefined8 FUN_1402bca50(longlong param_1) {
    if (*(longlong * )(param_1 + 0x40) != 0) {
        FUN_1402bba10();
    }
    return 1;
}


void FUN_1402bca70(longlong param_1, longlong param_2, longlong param_3) {
    undefined2 *puVar1;
    longlong lVar2;
    undefined2 *puVar3;
    float *pfVar4;

    param_3 = param_3 - param_1;
    lVar2 = 8;
    puVar3 = (undefined2 * )(param_1 + 2);
    pfVar4 = (float *) (param_2 + 8);
    do {
        puVar1 = puVar3 + 8;
        puVar3[-1] = (short) (int) ((float) (int) *(short *) (param_3 + -2 + (longlong) puVar3) * pfVar4[-2]);
        *puVar3 = (short) (int) ((float) (int) *(short *) (param_3 + -0x10 + (longlong) puVar1) * pfVar4[-1]);
        puVar3[1] = (short) (int) ((float) (int) *(short *) (param_3 + -0xe + (longlong) puVar1) * *pfVar4);
        puVar3[2] = (short) (int) ((float) (int) *(short *) (param_3 + -0xc + (longlong) puVar1) * pfVar4[1]);
        puVar3[3] = (short) (int) ((float) (int) *(short *) (param_3 + -10 + (longlong) puVar1) * pfVar4[2]);
        puVar3[4] = (short) (int) ((float) (int) *(short *) (param_3 + -8 + (longlong) puVar1) * pfVar4[3]);
        puVar3[5] = (short) (int) ((float) (int) *(short *) (param_3 + -6 + (longlong) puVar1) * pfVar4[4]);
        puVar3[6] = (short) (int) ((float) (int) *(short *) (param_3 + -4 + (longlong) puVar1) * pfVar4[5]);
        lVar2 = lVar2 + -1;
        puVar3 = puVar1;
        pfVar4 = pfVar4 + 8;
    } while (lVar2 != 0);
    return;
}


void FUN_1402bcb70(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4) {
    short sVar1;
    int iVar2;
    uint uVar3;
    short *psVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    longlong lVar8;
    uint uVar9;
    longlong lVar10;
    short asStack842[64];
    short asStack714[109];
    undefined8 uStack496;
    undefined auStack488[32];
    short local_1c8[64];
    undefined local_148[128];
    undefined local_c8[128];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack488;
    uVar6 = 0;
    do {
        uVar7 = 0;
        do {
            uStack496 = 0x1402bcbc4;
            iVar2 = FUN_1402c0070(param_2, local_148, 0);
            if (iVar2 < 0) goto LAB_1402bd01e;
            uStack496 = 0x1402bcbdc;
            FUN_1402bca70(local_c8, param_4, local_148);
            uStack496 = 0x1402bcbea;
            FUN_1402bd690();
            psVar4 = local_1c8 + 2;
            uVar9 = (uVar6 + uVar7) * 8 + 2;
            lVar10 = 8;
            do {
                iVar2 = psVar4[-2] + 0x80;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                iVar5 = psVar4[-1] + 0x80;
                *(char *) ((ulonglong)(uVar9 - 2) + param_1) = (char) iVar2;
                if (iVar5 < 0) {
                    iVar5 = 0;
                } else if (0xff < iVar5) {
                    iVar5 = 0xff;
                }
                iVar2 = *psVar4 + 0x80;
                *(char *) ((ulonglong)(uVar9 - 1) + param_1) = (char) iVar5;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                sVar1 = psVar4[1];
                *(char *) ((ulonglong) uVar9 + param_1) = (char) iVar2;
                iVar2 = sVar1 + 0x80;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                *(char *) ((ulonglong)(uVar9 + 1) + param_1) = (char) iVar2;
                iVar2 = psVar4[2] + 0x80;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                *(char *) ((ulonglong)(uVar9 + 2) + param_1) = (char) iVar2;
                iVar2 = psVar4[3] + 0x80;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                *(char *) ((ulonglong)(uVar9 + 3) + param_1) = (char) iVar2;
                iVar2 = psVar4[4] + 0x80;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                *(char *) ((ulonglong)(uVar9 + 4) + param_1) = (char) iVar2;
                iVar2 = psVar4[5] + 0x80;
                if (iVar2 < 0) {
                    iVar2 = 0;
                } else if (0xff < iVar2) {
                    iVar2 = 0xff;
                }
                uVar3 = uVar9 + 5;
                psVar4 = psVar4 + 8;
                uVar9 = uVar9 + 0x10;
                *(char *) ((ulonglong) uVar3 + param_1) = (char) iVar2;
                lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            uVar7 = uVar7 + 1;
        } while (uVar7 < 2);
        uVar6 = uVar6 + 0x10;
    } while (uVar6 < 0x20);
    uStack496 = 0x1402bcd30;
    iVar2 = FUN_1402c0070(param_2, local_148, 1);
    if (-1 < iVar2) {
        uStack496 = 0x1402bcd4c;
        FUN_1402bca70(local_c8, param_4 + 0x100, local_148);
        uStack496 = 0x1402bcd5a;
        FUN_1402bd690(local_1c8);
        lVar8 = 0x20;
        psVar4 = (short *) (param_1 + 0x102);
        lVar10 = 0x20;
        do {
            sVar1 = *(short *) (((longlong) asStack714 - param_1) + (longlong) psVar4);
            if (sVar1 < -0x100) {
                sVar1 = -0x100;
            } else if (0xff < sVar1) {
                sVar1 = 0xff;
            }
            psVar4[-1] = sVar1;
            sVar1 = *(short *) ((longlong) asStack714 + (2 - param_1) + (longlong) psVar4);
            if (sVar1 < -0x100) {
                sVar1 = -0x100;
            } else if (0xff < sVar1) {
                sVar1 = 0xff;
            }
            *psVar4 = sVar1;
            psVar4 = psVar4 + 2;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        uStack496 = 0x1402bcde6;
        iVar2 = FUN_1402c0070(param_2, local_148, 2, 1);
        if (-1 < iVar2) {
            uStack496 = 0x1402bce02;
            FUN_1402bca70(local_c8, param_4 + 0x200, local_148);
            uStack496 = 0x1402bce10;
            FUN_1402bd690(local_1c8, local_c8);
            psVar4 = (short *) (param_1 + 0x182);
            do {
                sVar1 = *(short *) (((longlong) asStack842 - param_1) + (longlong) psVar4);
                if (sVar1 < -0x100) {
                    sVar1 = -0x100;
                } else if (0xff < sVar1) {
                    sVar1 = 0xff;
                }
                psVar4[-1] = sVar1;
                sVar1 = *(short *) ((longlong) asStack842 + (2 - param_1) + (longlong) psVar4);
                if (sVar1 < -0x100) {
                    sVar1 = -0x100;
                } else if (0xff < sVar1) {
                    sVar1 = 0xff;
                }
                *psVar4 = sVar1;
                psVar4 = psVar4 + 2;
                lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            uVar6 = 0;
            do {
                uVar7 = 0;
                do {
                    uStack496 = 0x1402bce98;
                    iVar2 = FUN_1402c0070(param_2, local_148, 3);
                    if (iVar2 < 0) goto LAB_1402bd01e;
                    uStack496 = 0x1402bceb4;
                    FUN_1402bca70(local_c8, param_4 + 0x300, local_148);
                    uStack496 = 0x1402bcec2;
                    FUN_1402bd690();
                    psVar4 = local_1c8 + 2;
                    uVar9 = (uVar6 + uVar7) * 8 + 2;
                    lVar10 = 8;
                    do {
                        iVar2 = psVar4[-2] + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        *(char *) ((ulonglong)(uVar9 - 2) + 0x200 + param_1) = (char) iVar2;
                        iVar2 = psVar4[-1] + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        iVar5 = *psVar4 + 0x80;
                        *(char *) ((ulonglong)(uVar9 - 1) + 0x200 + param_1) = (char) iVar2;
                        if (iVar5 < 0) {
                            iVar5 = 0;
                        } else if (0xff < iVar5) {
                            iVar5 = 0xff;
                        }
                        sVar1 = psVar4[1];
                        *(char *) ((ulonglong) uVar9 + 0x200 + param_1) = (char) iVar5;
                        iVar2 = sVar1 + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        *(char *) ((ulonglong)(uVar9 + 1) + 0x200 + param_1) = (char) iVar2;
                        iVar2 = psVar4[2] + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        *(char *) ((ulonglong)(uVar9 + 2) + 0x200 + param_1) = (char) iVar2;
                        iVar2 = psVar4[3] + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        *(char *) ((ulonglong)(uVar9 + 3) + 0x200 + param_1) = (char) iVar2;
                        iVar2 = psVar4[4] + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        *(char *) ((ulonglong)(uVar9 + 4) + 0x200 + param_1) = (char) iVar2;
                        iVar2 = psVar4[5] + 0x80;
                        if (iVar2 < 0) {
                            iVar2 = 0;
                        } else if (0xff < iVar2) {
                            iVar2 = 0xff;
                        }
                        uVar3 = uVar9 + 5;
                        psVar4 = psVar4 + 8;
                        uVar9 = uVar9 + 0x10;
                        *(char *) ((ulonglong) uVar3 + 0x200 + param_1) = (char) iVar2;
                        lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < 2);
                uVar6 = uVar6 + 0x10;
            } while (uVar6 < 0x20);
        }
    }
    LAB_1402bd01e:
    uStack496 = 0x1402bd02d;
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack488);
    return;
}


void FUN_1402bd040(longlong param_1, undefined8 param_2, longlong param_3, longlong param_4) {
    short sVar1;
    int iVar2;
    short *psVar3;
    undefined *puVar4;
    longlong lVar5;
    longlong lVar6;
    short asStack650[64];
    short asStack522[13];
    undefined8 uStack496;
    undefined auStack488[32];
    short local_1c8[64];
    undefined local_148[128];
    undefined local_c8[128];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack488;
    uStack496 = 0x1402bd086;
    iVar2 = FUN_1402c0070(param_2, local_148, 0, 0);
    if (-1 < iVar2) {
        uStack496 = 0x1402bd0ae;
        FUN_1402bca70(local_c8, param_4);
        uStack496 = 0x1402bd0bc;
        FUN_1402bd690(local_1c8, local_c8);
        lVar5 = 0x20;
        puVar4 = (undefined * )(param_1 + 1);
        lVar6 = 0x20;
        psVar3 = local_1c8 + 1;
        do {
            iVar2 = psVar3[-1] + 0x80;
            if (iVar2 < 0) {
                iVar2 = 0;
            } else if (0xff < iVar2) {
                iVar2 = 0xff;
            }
            puVar4[-1] = (char) iVar2;
            iVar2 = *psVar3 + 0x80;
            if (iVar2 < 0) {
                iVar2 = 0;
            } else if (0xff < iVar2) {
                iVar2 = 0xff;
            }
            *puVar4 = (char) iVar2;
            puVar4 = puVar4 + 2;
            psVar3 = psVar3 + 2;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uStack496 = 0x1402bd125;
        iVar2 = FUN_1402c0070(param_2, local_148, 1);
        if (-1 < iVar2) {
            uStack496 = 0x1402bd149;
            FUN_1402bca70(local_c8, param_4 + 0x100, local_148);
            uStack496 = 0x1402bd157;
            FUN_1402bd690(local_1c8, local_c8);
            psVar3 = (short *) (param_1 + 0x42);
            lVar6 = 0x20;
            do {
                sVar1 = *(short *) (((longlong) asStack522 - param_1) + (longlong) psVar3);
                if (sVar1 < -0x100) {
                    sVar1 = -0x100;
                } else if (0xff < sVar1) {
                    sVar1 = 0xff;
                }
                psVar3[-1] = sVar1;
                sVar1 = *(short *) ((longlong) asStack522 + (2 - param_1) + (longlong) psVar3);
                if (sVar1 < -0x100) {
                    sVar1 = -0x100;
                } else if (0xff < sVar1) {
                    sVar1 = 0xff;
                }
                *psVar3 = sVar1;
                psVar3 = psVar3 + 2;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            uStack496 = 0x1402bd1d7;
            iVar2 = FUN_1402c0070(param_2, local_148, 2, 1);
            if (-1 < iVar2) {
                uStack496 = 0x1402bd1f3;
                FUN_1402bca70(local_c8, param_4 + 0x200, local_148);
                uStack496 = 0x1402bd201;
                FUN_1402bd690(local_1c8, local_c8);
                psVar3 = (short *) (param_1 + 0xc2);
                lVar6 = 0x20;
                do {
                    sVar1 = *(short *) ((longlong) psVar3 + ((longlong) asStack650 - param_1));
                    if (sVar1 < -0x100) {
                        sVar1 = -0x100;
                    } else if (0xff < sVar1) {
                        sVar1 = 0xff;
                    }
                    psVar3[-1] = sVar1;
                    sVar1 = *(short *) ((longlong) psVar3 + (longlong) asStack650 + (2 - param_1));
                    if (sVar1 < -0x100) {
                        sVar1 = -0x100;
                    } else if (0xff < sVar1) {
                        sVar1 = 0xff;
                    }
                    *psVar3 = sVar1;
                    psVar3 = psVar3 + 2;
                    lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
                if (*(char *) (param_3 + 0x32) == '\0') {
                    uStack496 = 0x1402bd293;
                    iVar2 = FUN_1402c0070(param_2, local_148, 3, 2);
                    if (-1 < iVar2) {
                        uStack496 = 0x1402bd2af;
                        FUN_1402bca70(local_c8, param_4 + 0x300, local_148);
                        uStack496 = 0x1402bd2bd;
                        FUN_1402bd690(local_1c8, local_c8);
                        puVar4 = (undefined * )(param_1 + 0x141);
                        psVar3 = local_1c8 + 1;
                        do {
                            iVar2 = psVar3[-1] + 0x80;
                            if (iVar2 < 0) {
                                iVar2 = 0;
                            } else if (0xff < iVar2) {
                                iVar2 = 0xff;
                            }
                            puVar4[-1] = (char) iVar2;
                            iVar2 = *psVar3 + 0x80;
                            if (iVar2 < 0) {
                                iVar2 = 0;
                            } else if (0xff < iVar2) {
                                iVar2 = 0xff;
                            }
                            *puVar4 = (char) iVar2;
                            puVar4 = puVar4 + 2;
                            psVar3 = psVar3 + 2;
                            lVar5 = lVar5 + -1;
                        } while (lVar5 != 0);
                    }
                } else {
                    puVar4 = (undefined * )(param_1 + 0x141);
                    do {
                        puVar4[-1] = *(undefined * )(param_3 + 0x33);
                        *puVar4 = *(undefined * )(param_3 + 0x33);
                        lVar5 = lVar5 + -1;
                        puVar4 = puVar4 + 2;
                    } while (lVar5 != 0);
                }
            }
        }
    }
    uStack496 = 0x1402bd360;
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack488);
    return;
}


void FUN_1402bd370(longlong param_1, undefined8 param_2, longlong param_3, longlong param_4) {
    int iVar1;
    short *psVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined auStack488[32];
    short local_1c8[64];
    undefined local_148[128];
    undefined local_c8[128];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack488;
    iVar1 = FUN_1402c0070(param_2, local_148, 0, 3);
    if (-1 < iVar1) {
        FUN_1402bca70(local_c8, param_4);
        FUN_1402bd690(local_1c8, local_c8);
        lVar4 = 0x20;
        puVar3 = (undefined * )(param_1 + 1);
        lVar5 = 0x20;
        psVar2 = local_1c8 + 1;
        do {
            iVar1 = psVar2[-1] + 0x80;
            if (iVar1 < 0) {
                iVar1 = 0;
            } else if (0xff < iVar1) {
                iVar1 = 0xff;
            }
            puVar3[-1] = (char) iVar1;
            iVar1 = *psVar2 + 0x80;
            if (iVar1 < 0) {
                iVar1 = 0;
            } else if (0xff < iVar1) {
                iVar1 = 0xff;
            }
            *puVar3 = (char) iVar1;
            puVar3 = puVar3 + 2;
            psVar2 = psVar2 + 2;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        iVar1 = FUN_1402c0070(param_2, local_148, 1);
        if (-1 < iVar1) {
            FUN_1402bca70(local_c8, param_4 + 0x100, local_148);
            FUN_1402bd690(local_1c8, local_c8);
            puVar3 = (undefined * )(param_1 + 0x41);
            psVar2 = local_1c8 + 1;
            lVar5 = 0x20;
            do {
                iVar1 = psVar2[-1] + 0x80;
                if (iVar1 < 0) {
                    iVar1 = 0;
                } else if (0xff < iVar1) {
                    iVar1 = 0xff;
                }
                puVar3[-1] = (char) iVar1;
                iVar1 = *psVar2 + 0x80;
                if (iVar1 < 0) {
                    iVar1 = 0;
                } else if (0xff < iVar1) {
                    iVar1 = 0xff;
                }
                *puVar3 = (char) iVar1;
                puVar3 = puVar3 + 2;
                psVar2 = psVar2 + 2;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            if (*(char *) (param_3 + 0x2f) == '\0') {
                iVar1 = FUN_1402c0070(param_2, local_148, 2);
                if (iVar1 < 0) goto LAB_1402bd669;
                FUN_1402bca70(local_c8, param_4 + 0x200, local_148);
                FUN_1402bd690(local_1c8, local_c8);
                puVar3 = (undefined * )(param_1 + 0x81);
                psVar2 = local_1c8 + 1;
                lVar5 = 0x20;
                do {
                    iVar1 = psVar2[-1] + 0x80;
                    if (iVar1 < 0) {
                        iVar1 = 0;
                    } else if (0xff < iVar1) {
                        iVar1 = 0xff;
                    }
                    puVar3[-1] = (char) iVar1;
                    iVar1 = *psVar2 + 0x80;
                    if (iVar1 < 0) {
                        iVar1 = 0;
                    } else if (0xff < iVar1) {
                        iVar1 = 0xff;
                    }
                    *puVar3 = (char) iVar1;
                    puVar3 = puVar3 + 2;
                    psVar2 = psVar2 + 2;
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
            } else {
                lVar5 = 0x20;
                puVar3 = (undefined * )(param_1 + 0x81);
                do {
                    puVar3[-1] = *(undefined * )(param_3 + 0x30);
                    *puVar3 = *(undefined * )(param_3 + 0x30);
                    lVar5 = lVar5 + -1;
                    puVar3 = puVar3 + 2;
                } while (lVar5 != 0);
            }
            if (*(char *) (param_3 + 0x32) == '\0') {
                iVar1 = FUN_1402c0070(param_2, local_148, 3);
                if (-1 < iVar1) {
                    FUN_1402bca70(local_c8, param_4 + 0x300, local_148);
                    FUN_1402bd690(local_1c8, local_c8);
                    puVar3 = (undefined * )(param_1 + 0xc1);
                    psVar2 = local_1c8 + 1;
                    do {
                        iVar1 = psVar2[-1] + 0x80;
                        if (iVar1 < 0) {
                            iVar1 = 0;
                        } else if (0xff < iVar1) {
                            iVar1 = 0xff;
                        }
                        puVar3[-1] = (char) iVar1;
                        iVar1 = *psVar2 + 0x80;
                        if (iVar1 < 0) {
                            iVar1 = 0;
                        } else if (0xff < iVar1) {
                            iVar1 = 0xff;
                        }
                        *puVar3 = (char) iVar1;
                        puVar3 = puVar3 + 2;
                        psVar2 = psVar2 + 2;
                        lVar4 = lVar4 + -1;
                    } while (lVar4 != 0);
                }
            } else {
                puVar3 = (undefined * )(param_1 + 0xc1);
                do {
                    puVar3[-1] = *(undefined * )(param_3 + 0x33);
                    *puVar3 = *(undefined * )(param_3 + 0x33);
                    lVar4 = lVar4 + -1;
                    puVar3 = puVar3 + 2;
                } while (lVar4 != 0);
            }
        }
    }
    LAB_1402bd669:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack488);
    return;
}