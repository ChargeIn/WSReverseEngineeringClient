//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong * FUN_14058ff30(longlong param_1,longlong *param_2,char **param_3,ulonglong *param_4)

{
    char *pcVar1;
    char *pcVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(ulonglong *)(pcVar2 + 0x20) <= *param_4)) {
            LAB_14058ff7e:
            plVar4 = (longlong *)FUN_140590c10(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar2 == pcVar1) {
            uVar3 = *param_4;
            pcVar2 = *(char **)(pcVar1 + 0x18);
            if (*(ulonglong *)(pcVar2 + 0x20) < uVar3) {
                if ((pcVar2 == pcVar1) || (uVar3 < *(ulonglong *)(pcVar2 + 0x20))) {
                    lVar5 = FUN_1405911c0(uVar3,param_4);
                    *(longlong *)(pcVar2 + 0x10) = lVar5;
                    pcVar1 = *(char **)(param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong *)(pcVar1 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                        *(longlong *)(pcVar1 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_1405911c0(uVar3,param_4);
                    *(longlong *)(pcVar2 + 0x18) = lVar5;
                    if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar2;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
                return param_2;
            }
            plVar4 = (longlong *)FUN_140590c10(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar5 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar2 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar5;
                if (pcVar2 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(ulonglong *)(lVar5 + 0x20)) || (*(ulonglong *)(pcVar2 + 0x20) <= *param_4))
            goto LAB_14058ff7e;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140590b50(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140590b50();
    return param_2;
}



longlong FUN_140590120(longlong param_1,ulonglong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18 [2];

    local_res18[0] = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18[0] + 8);
    local_res8 = local_res18[0];
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if (*param_2 < *(ulonglong *)(lVar2 + 0x20)) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if (lVar4 != 0) {
            do {
                if (*(ulonglong *)(lVar4 + 0x20) < *param_2) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18[0] = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18[0];
    while (lVar2 != local_res8) {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
        lVar4 = lVar4 + 1;
    }
    FUN_140590dd0(param_1,local_res18,&local_res8);
    return lVar4;
}



undefined * FUN_140590210(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    puVar2 = (undefined *)FUN_14018b280(0x28);
    FUN_14040b4c0(puVar2 + 0x20,param_2 + 0x20);
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *puVar2 = uVar1;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_140590210(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x28);
        FUN_14040b4c0(puVar4 + 0x20,puVar6 + 0x20);
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_140590210(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



void FUN_140590310(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_2 != 0) {
        do {
            FUN_140590310(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x20);
            lVar2 = *(longlong *)(param_2 + 0x10);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar2;
        } while (lVar2 != 0);
    }
    return;
}



longlong FUN_140590380(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (param_1 == param_2) {
        return param_1;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_140590310(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) != 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        uVar3 = FUN_140590210(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar3;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
        return param_1;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    return param_1;
}



char ** FUN_140590490(longlong param_1,char **param_2,ushort **param_3)

{
    longlong lVar1;
    char **ppcVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    uint uVar6;
    char *pcVar7;
    longlong lVar8;
    uint uVar9;
    longlong lVar10;
    char *pcVar11;
    bool bVar12;
    undefined local_res8 [8];

    pcVar4 = *(char **)(param_1 + 8);
    lVar8 = 0;
    pcVar11 = *(char **)(pcVar4 + 8);
    bVar12 = true;
    pcVar7 = pcVar4;
    if (pcVar11 != (char *)0x0) {
        uVar9 = (uint)**param_3;
        do {
            pcVar7 = pcVar11;
            iVar3 = uVar9 - **(ushort **)(pcVar7 + 0x20);
            lVar10 = lVar8;
            uVar6 = uVar9;
            while (iVar3 == 0) {
                if ((short)uVar6 == 0) {
                    iVar3 = 0;
                    break;
                }
                uVar6 = (uint)(*param_3)[lVar10 + 1];
                lVar1 = lVar10 + 1;
                lVar10 = lVar10 + 1;
                iVar3 = uVar6 - (*(ushort **)(pcVar7 + 0x20))[lVar1];
            }
            bVar12 = iVar3 < 0;
            if (bVar12) {
                pcVar11 = *(char **)(pcVar7 + 0x10);
            }
            else {
                pcVar11 = *(char **)(pcVar7 + 0x18);
            }
        } while (pcVar11 != (char *)0x0);
    }
    pcVar5 = pcVar7;
    if (bVar12) {
        if (pcVar7 == *(char **)(pcVar4 + 0x10)) goto LAB_140590533;
        if ((*pcVar7 == '\0') && (*(char **)(*(longlong *)(pcVar7 + 8) + 8) == pcVar7)) {
            pcVar5 = *(char **)(pcVar7 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar7 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar7 + 8);
                pcVar4 = pcVar5;
                if (pcVar7 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar12 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar12);
                }
            }
            else {
                for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                     pcVar4 = *(char **)(pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    uVar9 = (uint)**(ushort **)(pcVar5 + 0x20);
    iVar3 = uVar9 - **param_3;
    while (iVar3 == 0) {
        if ((short)uVar9 == 0) goto LAB_1405905e7;
        uVar9 = (uint)(*(ushort **)(pcVar5 + 0x20))[lVar8 + 1];
        lVar10 = lVar8 + 1;
        lVar8 = lVar8 + 1;
        iVar3 = uVar9 - (*param_3)[lVar10];
    }
    if (-1 < iVar3) {
        LAB_1405905e7:
        *param_2 = pcVar5;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140590533:
    ppcVar2 = (char **)FUN_140590eb0(param_1,local_res8,pcVar11,pcVar7,param_3);
    *param_2 = *ppcVar2;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140590610(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_140590610(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            FUN_140582d30(param_2 + 0x28);
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



longlong * FUN_140590670(longlong param_1,longlong *param_2,char **param_3,ulonglong *param_4)

{
    char *pcVar1;
    char *pcVar2;
    ulonglong uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(ulonglong *)(pcVar2 + 0x20) <= *param_4)) {
            LAB_1405906ca:
            plVar4 = (longlong *)FUN_140590880(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar2 == pcVar1) {
            uVar3 = *param_4;
            pcVar2 = *(char **)(pcVar1 + 0x18);
            if (*(ulonglong *)(pcVar2 + 0x20) < uVar3) {
                if ((pcVar2 == pcVar1) || (uVar3 < *(ulonglong *)(pcVar2 + 0x20))) {
                    lVar5 = FUN_14018b280(0x80,0);
                    if ((ulonglong *)(lVar5 + 0x20) != (ulonglong *)0x0) {
                        *(ulonglong *)(lVar5 + 0x20) = *param_4;
                        FUN_14058fa40(lVar5 + 0x28,param_4 + 1);
                    }
                    *(longlong *)(pcVar2 + 0x10) = lVar5;
                    pcVar1 = *(char **)(param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong *)(pcVar1 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar2 == *(char **)(pcVar1 + 0x10)) {
                        *(longlong *)(pcVar1 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_140591230(uVar3,param_4);
                    *(longlong *)(pcVar2 + 0x18) = lVar5;
                    if (pcVar2 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar2;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_140590880(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **)(*(longlong *)(pcVar2 + 8) + 8) == pcVar2)) {
            lVar5 = *(longlong *)(pcVar2 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar2 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar2 + 8);
                lVar6 = lVar5;
                if (pcVar2 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(ulonglong *)(lVar5 + 0x20)) || (*(ulonglong *)(pcVar2 + 0x20) <= *param_4))
            goto LAB_1405906ca;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1405910d0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1405910d0();
    return param_2;
}



char ** FUN_140590880(longlong param_1,char **param_2,ulonglong *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(ulonglong *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1405908de;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(ulonglong *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1405908de:
    ppcVar1 = (char **)FUN_1405910d0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



void FUN_140590980(longlong param_1,longlong *param_2)

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
        iVar1 = FUN_1401971e0(&DAT_140c8af3c,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140590a45. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        FUN_140582d30(lVar2 + 0x28);
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



undefined8 FUN_140590a90(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = FUN_1405845f0(param_1,*(undefined8 *)(param_2 + 8));
    if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x1a8) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(lVar2 + 0x1ac) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(lVar2 + 0x1b0) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(lVar2 + 0x1b4) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(lVar2 + 0x1b8) = *(undefined4 *)(param_2 + 0x20);
        lVar1 = DAT_140c65898;
        *(undefined4 *)(lVar2 + 0x1bc) = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(lVar2 + 0x1c0) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(lVar2 + 0x1c4) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(lVar2 + 0x1c8) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(lVar2 + 0x1cc) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(lVar2 + 0x1d0) = *(undefined4 *)(param_2 + 0x38);
        *(undefined4 *)(lVar2 + 0x1d4) = *(undefined4 *)(param_2 + 0x3c);
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"GuildStandard",&DAT_1409ea60c);
    }
    return 0;
}



longlong *
FUN_140590b50(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              ulonglong *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(ulonglong *)(param_4 + 0x20))) {
        lVar2 = FUN_1405911c0();
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_1405911c0();
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140590c10(longlong param_1,char **param_2,ulonglong *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(ulonglong *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_140590b50(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
                }
            }
            else {
                for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                     pcVar4 = *(char **)(pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    if (*(ulonglong *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) ||
            (*param_3 < *(ulonglong *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1405911c0(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1405911c0(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



void FUN_140590dd0(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong *)(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_140591280(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_140590eb0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,ushort **param_5)

{
    ushort uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        uVar1 = **param_5;
        iVar4 = (uint)uVar1 - (uint)**(ushort **)(param_4 + 0x20);
        while (iVar4 == 0) {
            if (uVar1 == 0) goto LAB_140590f16;
            uVar1 = (*param_5)[param_3 + 1];
            lVar3 = param_3 + 1;
            param_3 = param_3 + 1;
            iVar4 = (uint)uVar1 - (uint)(*(ushort **)(param_4 + 0x20))[lVar3];
        }
        if (-1 < iVar4) {
            LAB_140590f16:
            lVar3 = FUN_14018b280(0x28);
            FUN_14040b4c0(lVar3 + 0x20,param_5);
            *(longlong *)(param_4 + 0x18) = lVar3;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
            }
            goto LAB_140590f81;
        }
    }
    lVar3 = FUN_14018b280(0x28);
    FUN_14040b4c0(lVar3 + 0x20,param_5);
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar2 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar2) {
        *(longlong *)(lVar2 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar2 + 0x10)) {
        *(longlong *)(lVar2 + 0x10) = lVar3;
    }
    LAB_140590f81:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



void FUN_140590fd0(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 8);
    if ((*param_2 == *(longlong *)(lVar2 + 0x10)) && (*param_3 == lVar2)) {
        if (*(longlong *)(param_1 + 0x10) != 0) {
            FUN_140590310(param_1,*(undefined8 *)(lVar2 + 8));
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
            *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
            *(undefined8 *)(param_1 + 0x10) = 0;
            return;
        }
    }
    else if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_140591380(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_1405910d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              ulonglong *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(ulonglong *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x80,0);
        if ((ulonglong *)(lVar2 + 0x20) != (ulonglong *)0x0) {
            *(ulonglong *)(lVar2 + 0x20) = *param_5;
            FUN_14058fa40(lVar2 + 0x28,param_5 + 1);
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_140591230(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



longlong FUN_1405911c0(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x68);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined8 *)(lVar1 + 0x28) = param_2[1];
        *(undefined8 *)(lVar1 + 0x30) = param_2[2];
        *(undefined8 *)(lVar1 + 0x38) = param_2[3];
        *(undefined8 *)(lVar1 + 0x40) = param_2[4];
        *(undefined8 *)(lVar1 + 0x48) = param_2[5];
        *(undefined8 *)(lVar1 + 0x50) = param_2[6];
        *(undefined8 *)(lVar1 + 0x58) = param_2[7];
        *(undefined8 *)(lVar1 + 0x60) = param_2[8];
    }
    return lVar1;
}



longlong FUN_140591230(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x80,0);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        FUN_14058fa40(lVar1 + 0x28,param_2 + 1);
    }
    return lVar1;
}



void FUN_140591280(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8af38,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140591346. Too many branches
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



void FUN_140591380(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8af34,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140591445. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        lVar1 = *(longlong *)(lVar3 + 0x20);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        FUN_14018b900(lVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140591490(undefined4 *param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if ((DAT_140c8af78 & 1) == 0) {
        DAT_140c8af78 = DAT_140c8af78 | 1;
        DAT_140c8af8c = 0;
    }
    if ((DAT_140c8af78 & 2) == 0) {
        DAT_140c8af78 = DAT_140c8af78 | 2;
        _DAT_140c8af84 = 0;
    }
    if ((DAT_140c8af78 & 4) == 0) {
        DAT_140c8af78 = DAT_140c8af78 | 4;
        _DAT_140c8af74 = 0;
    }
    if ((DAT_140c8af78 & 8) == 0) {
        DAT_140c8af78 = DAT_140c8af78 | 8;
        _DAT_140c8af6c = 0;
    }
    if (DAT_140c8af8c == 0) {
        DAT_140c8af8c = 1;
        lVar2 = FUN_140200220(0x52c);
        if (lVar2 == 0) {
            DAT_140c8af88 = 0;
        }
        else {
            DAT_140c8af88 = *(undefined4 *)(lVar2 + 4);
        }
    }
    *param_1 = DAT_140c8af88;
    *(undefined8 *)(param_1 + 1) = 0;
    if (_DAT_140c8af84 == 0) {
        _DAT_140c8af84 = 1;
        lVar2 = FUN_140200220(0x52c);
        if (lVar2 == 0) {
            DAT_140c8af80 = 0;
        }
        else {
            DAT_140c8af80 = *(uint *)(lVar2 + 8);
            uVar3 = (ulonglong)DAT_140c8af80;
        }
    }
    else {
        uVar3 = (ulonglong)DAT_140c8af80;
    }
    param_1[3] = (float)uVar3 * 0.01;
    if (_DAT_140c8af74 == 0) {
        _DAT_140c8af74 = 1;
        lVar2 = FUN_140200220(0x52c);
        if (lVar2 == 0) {
            DAT_140c8af70 = 0;
        }
        else {
            DAT_140c8af70 = *(undefined4 *)(lVar2 + 0xc);
        }
    }
    param_1[4] = DAT_140c8af70;
    uVar1 = DAT_140c8af68;
    if (_DAT_140c8af6c != 0) {
        param_1[6] = 0;
        param_1[5] = uVar1;
        return;
    }
    _DAT_140c8af6c = 1;
    lVar2 = FUN_140200220(0x52c);
    if (lVar2 == 0) {
        DAT_140c8af68 = 0;
        *(undefined8 *)(param_1 + 5) = 0;
        return;
    }
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
    DAT_140c8af68 = uVar1;
    param_1[6] = 0;
    param_1[5] = uVar1;
    return;
}



void FUN_140591630(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    FUN_1407e4830(param_1 + 0x120,0,0x28);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 1;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x19c) = 0;
    *(undefined8 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    FUN_1407e4830(param_1 + 0x1d0,0,0x138);
    FUN_1407e4830((undefined8 *)(param_1 + 0x264),0,0x90);
    *(undefined8 *)(param_1 + 0x264) = 0xc5000000c5;
    *(undefined8 *)(param_1 + 0x26c) = 0xc5000000c5;
    *(undefined8 *)(param_1 + 0x274) = 0xc5000000c5;
    *(undefined8 *)(param_1 + 0x27c) = 0xc5000000c5;
    *(undefined8 *)(param_1 + 0x284) = 0xc5000000c5;
    *(undefined8 *)(param_1 + 0x28c) = 0xc5000000c5;
    *(undefined8 *)(param_1 + 0x294) = 0xc5000000c5;
    *(undefined4 *)(param_1 + 0x29c) = 0xc5;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
    FUN_1405918a0(param_1);
    return;
}



void FUN_1405917b0(longlong param_1)

{
    char cVar1;
    char cVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 uVar5;
    float fVar6;
    float fVar7;

    if ((*(int *)(param_1 + 0x188) != 0) || (*(int *)(param_1 + 0x198) != 0)) {
        uVar3 = *(uint *)(param_1 + 0x17c);
        if (5 < uVar3) {
            uVar3 = 5;
        }
        uVar4 = 0;
        *(uint *)(param_1 + 0x17c) = uVar3;
        if (uVar3 != 0) {
            do {
                uVar5 = FUN_140591bd0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x180) + uVar4 * 4));
                *(undefined4 *)(param_1 + 0x1b8 + uVar4 * 4) = uVar5;
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
            } while (uVar3 < *(uint *)(param_1 + 0x17c));
        }
        fVar6 = (float)(ulonglong)*(uint *)(param_1 + 0x178) /
                (float)(ulonglong)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x1ac) & 0x1f));
        if (1.0 <= fVar6) {
            fVar6 = 1.0;
        }
        fVar7 = 0.0;
        if (0.0 <= fVar6) {
            fVar7 = fVar6;
        }
        cVar1 = (char)(longlong)(fVar7 * 255.0 + 1e-05);
        cVar2 = -1;
        if (cVar1 != -1) {
            cVar2 = cVar1;
        }
        *(char *)(param_1 + 0x192) = cVar2;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405918a0(undefined8 *param_1)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    uint uVar7;
    undefined8 uVar8;
    float fVar9;
    float fVar10;

    uVar1 = FUN_140591e40();
    uVar8 = 0;
    *(undefined4 *)((longlong)param_1 + 0x36c) = uVar1;
    iVar4 = 0;
    if (_DAT_140c7df1c == 0) {
        _DAT_140c7df1c = 1;
        lVar5 = FUN_140200220();
        if (lVar5 == 0) {
            DAT_140c7df18 = 0;
        }
        else {
            DAT_140c7df18 = *(uint *)(lVar5 + 4);
        }
    }
    fVar10 = 0.0;
    uVar7 = DAT_140c7df18 >> ((byte)*(undefined4 *)((longlong)param_1 + 0x19c) & 0x1f);
    uVar2 = 1;
    if (1 < (int)uVar7) {
        uVar2 = uVar7;
    }
    *(uint *)(param_1 + 0x6d) = uVar2;
    uVar2 = 1 << ((byte)*(undefined4 *)((longlong)param_1 + 0x1ac) & 0x1f);
    *(uint *)(param_1 + 0x6b) = uVar2;
    if (param_1[3] != 0) {
        fVar10 = (float)(*(uint *)(param_1[3] + 0x178) & 0x7fffffff);
    }
    *(float *)((longlong)param_1 + 0x354) = (fVar10 * 2.0) / (float)(ulonglong)uVar2;
    uVar1 = FUN_140591d80(param_1);
    *(undefined4 *)((longlong)param_1 + 0x364) = uVar1;
    FUN_140591f30(param_1);
    if (param_1[3] != 0) {
        uVar6 = FUN_14020a7e0(*(undefined4 *)(param_1[3] + 0x168));
        param_1[0x61] = uVar6;
        lVar5 = FUN_14020ac20(*(undefined4 *)(param_1[3] + 0x16c));
        param_1[0x62] = lVar5;
        if ((param_1[0x61] != 0) && (lVar5 != 0)) {
            FUN_1405917b0(param_1);
            *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 0x31);
            *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x33);
            param_1[0xb] = param_1 + 0x37;
            *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x17c);
            param_1[0xc] = (longlong)param_1 + 0x18c;
            iVar3 = FUN_14040c310(param_1 + 1,param_1 + 0x3a,*param_1,0,
                                  (float *)((longlong)param_1 + 0x32c),param_1 + 99);
            if (iVar3 == 0) {
                fVar10 = *(float *)((longlong)param_1 + 0x32c);
                fVar9 = fVar10 + *(float *)(param_1 + 0x66) + *(float *)((longlong)param_1 + 0x334) +
                        *(float *)(param_1 + 0x67) + *(float *)((longlong)param_1 + 0x33c);
                if ((int)fVar9 < 0) {
                    iVar4 = -0x80000000;
                }
                uVar2 = iVar4 - (int)fVar9 >> 0x1f;
                if ((int)((iVar4 - (int)fVar9 ^ uVar2) - uVar2) < 0x55) {
                    fVar9 = 1.0;
                }
                fVar9 = 1.0 / fVar9;
                uVar8 = 1;
                *(float *)(param_1 + 0x68) = fVar10 * fVar9;
                *(float *)((longlong)param_1 + 0x344) = fVar9 * *(float *)(param_1 + 0x66);
                *(float *)(param_1 + 0x69) = fVar9 * *(float *)((longlong)param_1 + 0x334);
                *(float *)((longlong)param_1 + 0x34c) = fVar9 * *(float *)(param_1 + 0x67);
                *(float *)(param_1 + 0x6a) = fVar9 * *(float *)((longlong)param_1 + 0x33c);
                goto LAB_140591b90;
            }
        }
    }
    FUN_1407e4830(param_1 + 0x3a,0,0x138);
    FUN_1407e4830((undefined8 *)((longlong)param_1 + 0x264),0,0x90);
    *(undefined8 *)((longlong)param_1 + 0x264) = 0xc5000000c5;
    *(undefined8 *)((longlong)param_1 + 0x26c) = 0xc5000000c5;
    *(undefined8 *)((longlong)param_1 + 0x274) = 0xc5000000c5;
    *(undefined8 *)((longlong)param_1 + 0x27c) = 0xc5000000c5;
    *(undefined8 *)((longlong)param_1 + 0x284) = 0xc5000000c5;
    *(undefined8 *)((longlong)param_1 + 0x28c) = 0xc5000000c5;
    *(undefined8 *)((longlong)param_1 + 0x294) = 0xc5000000c5;
    *(undefined4 *)((longlong)param_1 + 0x29c) = 0xc5;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    *(undefined4 *)(param_1 + 0x6a) = 0;
    LAB_140591b90:
    uVar1 = FUN_140592020(param_1);
    *(undefined4 *)(param_1 + 0x6e) = uVar1;
    FUN_140592140(param_1);
    uVar1 = FUN_140592380(param_1);
    *(undefined4 *)((longlong)param_1 + 0x37c) = uVar1;
    return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_140591bd0(longlong param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;

    iVar1 = *(int *)(param_1 + 0x36c);
    param_2 = *(int *)(param_1 + 0x368) * param_2;
    iVar2 = -iVar1;
    if ((SBORROW4(param_2,-iVar1) == param_2 + iVar1 < 0) && (iVar2 = param_2, iVar1 < param_2)) {
        iVar2 = iVar1;
    }
    fVar6 = (float)iVar2;
    if (_DAT_140c7df24 == 0) {
        _DAT_140c7df24 = 1;
        lVar4 = FUN_140200220(0x4cd);
        if (lVar4 == 0) {
            DAT_140c7df20 = 0;
        }
        else {
            DAT_140c7df20 = *(uint *)(lVar4 + 8);
        }
    }
    uVar3 = DAT_140c7df20;
    if (_DAT_140c7df3c == 0) {
        _DAT_140c7df3c = 1;
        lVar4 = FUN_140200220(0x4cd);
        if (lVar4 == 0) {
            DAT_140c7df38 = 0.0;
        }
        else {
            DAT_140c7df38 = *(float *)(lVar4 + 0x18);
        }
    }
    fVar5 = 1.0 / ((float)(ulonglong)uVar3 * DAT_140c7df38);
    fVar6 = fVar5 * fVar6 + 1.0;
    if (fVar6 <= fVar5) {
        fVar6 = fVar5;
    }
    return fVar6;
}



undefined8 FUN_140591cd0(longlong param_1,uint param_2)

{
    int iVar1;
    ulonglong *puVar2;
    undefined8 uVar3;

    uVar3 = 0;
    if ((DAT_140c8af48 & 1) == 0) {
        DAT_140c8af48 = DAT_140c8af48 | 1;
        DAT_140c8af50 = 0;
    }
    if (*(uint *)(param_1 + 0xd4) < param_2 || *(uint *)(param_1 + 0xd4) == param_2) {
        puVar2 = &DAT_140c8af50;
    }
    else {
        puVar2 = (ulonglong *)(param_1 + ((ulonglong)param_2 + 0x24) * 8);
    }
    if ((int)*puVar2 == 1) {
        if ((((*(longlong *)(param_1 + 0x310) != 0) && (param_2 < *(uint *)(param_1 + 0xd4))) &&
             (param_2 < 5)) &&
            (uVar3 = 0, *(int *)((ulonglong)param_2 * 4 + 4 + *(longlong *)(param_1 + 0x310)) == 4)) {
            if ((*(longlong *)(param_1 + 0x170) != 0) &&
                (iVar1 = FUN_14040f160(*(undefined4 *)
                                               (*(longlong *)(param_1 + 0x170) + 4 + (ulonglong)param_2 * 4),
                                       *puVar2 >> 0x20), iVar1 != 0)) {
                return 0;
            }
            uVar3 = 1;
        }
        return uVar3;
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140591d80(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    undefined4 uVar3;
    float fVar4;

    fVar2 = 0.0;
    uVar3 = 0;
    if (_DAT_140c7df44 == 0) {
        _DAT_140c7df44 = 1;
        lVar1 = FUN_140200220(0x4de);
        DAT_140c7df40 = fVar2;
        if (lVar1 != 0) {
            DAT_140c7df40 = *(float *)(lVar1 + 0x18);
        }
    }
    fVar4 = DAT_140c7df40;
    if (_DAT_140c7df5c == 0) {
        _DAT_140c7df5c = 1;
        lVar1 = FUN_140200220(0x4de);
        DAT_140c7df58 = fVar2;
        if (lVar1 != 0) {
            DAT_140c7df58 = *(float *)(lVar1 + 0x24);
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0;
    }
    fVar4 = fVar4 - *(float *)(param_1 + 0x1a8);
    fVar2 = DAT_140c7df58;
    if (DAT_140c7df58 <= fVar4) {
        fVar2 = fVar4;
    }
    return CONCAT44(uVar3,fVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_140591e40(longlong param_1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;

    if (_DAT_140c7df24 == 0) {
        _DAT_140c7df24 = 1;
        lVar4 = FUN_140200220();
        if (lVar4 == 0) {
            DAT_140c7df20 = 0;
        }
        else {
            DAT_140c7df20 = *(int *)(lVar4 + 8);
        }
    }
    iVar2 = DAT_140c7df20;
    if (_DAT_140c7df2c == 0) {
        _DAT_140c7df2c = 1;
        lVar4 = FUN_140200220();
        if (lVar4 == 0) {
            DAT_140c7df28 = 0;
        }
        else {
            DAT_140c7df28 = *(int *)(lVar4 + 0xc);
        }
    }
    iVar3 = DAT_140c7df28;
    if (_DAT_140c7df34 == 0) {
        _DAT_140c7df34 = 1;
        lVar4 = FUN_140200220();
        DAT_140c7df30 = 0;
        if (lVar4 != 0) {
            DAT_140c7df30 = *(uint *)(lVar4 + 0x10);
        }
    }
    uVar5 = *(int *)(param_1 + 0x1b0) * iVar3 + iVar2;
    uVar1 = DAT_140c7df30;
    if (uVar5 < DAT_140c7df30) {
        uVar1 = uVar5;
    }
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140591f30(longlong param_1)

{
    longlong lVar1;
    float fVar2;
    float fVar3;

    fVar2 = 0.0;
    if (_DAT_140c7df4c == 0) {
        _DAT_140c7df4c = 1;
        lVar1 = FUN_140200220(0x4de);
        DAT_140c7df48 = fVar2;
        if (lVar1 != 0) {
            DAT_140c7df48 = *(float *)(lVar1 + 0x1c);
        }
    }
    fVar3 = DAT_140c7df48;
    if (_DAT_140c7df54 == 0) {
        _DAT_140c7df54 = 1;
        lVar1 = FUN_140200220(0x4de);
        DAT_140c7df50 = fVar2;
        if (lVar1 != 0) {
            DAT_140c7df50 = *(float *)(lVar1 + 0x20);
        }
    }
    fVar3 = fVar3 + *(float *)(param_1 + 0x1b4);
    fVar2 = DAT_140c7df50;
    if (fVar3 <= DAT_140c7df50) {
        fVar2 = fVar3;
    }
    fVar2 = fVar2 * (1.0 - *(float *)(param_1 + 0x1a0));
    *(float *)(param_1 + 0x35c) = (1.0 - *(float *)(param_1 + 0x1a4)) * fVar2;
    *(float *)(param_1 + 0x360) = fVar2;
    return;
}



void FUN_140592020(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    float *pfVar5;
    uint uVar6;
    float fVar7;
    int aiStack848 [188];
    undefined8 uStack96;
    undefined auStack88 [32];
    undefined8 local_38;
    undefined8 local_30;
    undefined4 local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if (*(longlong *)(param_1 + 0x308) == 0) {
        uStack96 = 0x140592052;
        FUN_1407db4f0(0,DAT_140c0f7b0 ^ (ulonglong)auStack88 ^ (ulonglong)auStack88);
        return;
    }
    lVar1 = *(longlong *)(param_1 + 0x310);
    uVar6 = 0;
    fVar7 = 0.0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    if (lVar1 != 0) {
        lVar4 = 5;
        puVar3 = &local_38;
        do {
            *(uint *)puVar3 = (uint)(*(int *)((lVar1 - (longlong)&local_38) + 4 + (longlong)puVar3) == 4);
            lVar4 = lVar4 + -1;
            puVar3 = (undefined8 *)((longlong)puVar3 + 4);
        } while (lVar4 != 0);
    }
    pfVar5 = (float *)(param_1 + 0x318);
    do {
        fVar7 = fVar7 + *pfVar5;
        if (*(int *)((longlong)pfVar5 + ((longlong)aiStack848 - param_1)) != 0) {
            uStack96 = 0x1405920e8;
            iVar2 = FUN_140591cd0(param_1,uVar6);
            if (iVar2 != 0) {
                fVar7 = fVar7 + *(float *)(param_1 + 0x364) * *pfVar5;
            }
        }
        uVar6 = uVar6 + 1;
        pfVar5 = pfVar5 + 1;
    } while (uVar6 < 5);
    uStack96 = 0x14059212b;
    FUN_1407db4f0(fVar7,local_20 ^ (ulonglong)auStack88);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140592140(undefined8 *param_1)

{
    int iVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;

    lVar2 = FUN_1400b5df0(*param_1,*(undefined4 *)(param_1 + 9),0);
    if ((lVar2 == 0) && (*(int *)(param_1 + 0x33) == 0)) {
        *(undefined4 *)(param_1 + 0x6f) = 0x3f800000;
        *(undefined4 *)((longlong)param_1 + 0x374) = 0x3f800000;
        return;
    }
    fVar5 = 1.0;
    fVar3 = 0.0;
    fVar4 = 1.0;
    if ((lVar2 != 0) && (iVar1 = FUN_1405a3b90(), iVar1 <= *(int *)(lVar2 + 0x158))) {
        iVar1 = FUN_1405a3b90();
        fVar4 = (float)(*(int *)(lVar2 + 0x158) - iVar1) + fVar5;
        if (_DAT_140c7df74 == 0) {
            _DAT_140c7df74 = 1;
            lVar2 = FUN_140200220(0x4df);
            DAT_140c7df70 = fVar3;
            if (lVar2 != 0) {
                DAT_140c7df70 = *(float *)(lVar2 + 0x18);
            }
        }
        fVar4 = fVar5 - DAT_140c7df70 * fVar4;
    }
    fVar4 = fVar4 * (fVar5 - *(float *)(param_1 + 0x34));
    if (_DAT_140c7df64 == 0) {
        _DAT_140c7df64 = 1;
        lVar2 = FUN_140200220(0x4de);
        DAT_140c7df60 = fVar3;
        if (lVar2 != 0) {
            DAT_140c7df60 = *(float *)(lVar2 + 0x28);
        }
    }
    fVar4 = (*(float *)(param_1 + 0x6e) / *(float *)((longlong)param_1 + 0x1e4) - fVar5) *
            DAT_140c7df60 * fVar4;
    if (fVar5 <= fVar4) {
        fVar4 = fVar5;
    }
    fVar6 = fVar3;
    if (fVar3 <= fVar4) {
        fVar6 = fVar4;
    }
    *(float *)(param_1 + 0x6f) = fVar6;
    fVar6 = (fVar5 - *(float *)((longlong)param_1 + 0x1a4)) * fVar6;
    if (fVar5 <= fVar6) {
        fVar6 = fVar5;
    }
    fVar4 = fVar3;
    if (fVar3 <= fVar6) {
        fVar4 = fVar6;
    }
    *(float *)((longlong)param_1 + 0x374) = fVar4;
    if ((fVar3 < fVar4) && (*(int *)(param_1 + 0x33) != 0)) {
        if ((DAT_140c8af58 & 1) == 0) {
            DAT_140c8af58 = DAT_140c8af58 | 1;
            DAT_140c8af64 = 0;
        }
        fVar4 = *(float *)(param_1 + 0x6e) / *(float *)((longlong)param_1 + 0x1e4);
        if (DAT_140c8af64 == 0) {
            DAT_140c8af64 = 1;
            lVar2 = FUN_140200220(0x4e5);
            DAT_140c8af60 = fVar3;
            if (lVar2 != 0) {
                DAT_140c8af60 = *(float *)(lVar2 + 0x18);
            }
        }
        if (fVar4 < DAT_140c8af60) {
            *(undefined4 *)((longlong)param_1 + 0x374) = 0;
        }
    }
    return;
}



void FUN_140592380(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    int iVar7;
    longlong lVar8;
    float fVar9;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)&local_28;
    lVar2 = *(longlong *)(param_1 + 0x310);
    if ((lVar2 != 0) && ((*(int *)(param_1 + 0x188) != 0 || (*(int *)(param_1 + 0x198) != 0)))) {
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        uVar4 = 0;
        lVar8 = 5;
        puVar5 = &local_28;
        do {
            *(uint *)puVar5 = (uint)(*(int *)((lVar2 - (longlong)&local_28) + 4 + (longlong)puVar5) == 4);
            lVar8 = lVar8 + -1;
            puVar5 = (undefined8 *)((longlong)puVar5 + 4);
        } while (lVar8 != 0);
        uVar6 = uVar4;
        if (*(uint *)(param_1 + 0x17c) != 0) {
            do {
                if (*(int *)((longlong)&local_28 + uVar6) != 0) {
                    iVar1 = *(int *)(param_1 + 0x36c);
                    iVar7 = *(int *)(*(longlong *)(param_1 + 0x180) + uVar6) * *(int *)(param_1 + 0x368);
                    if ((iVar1 < iVar7) || (SBORROW4(iVar7,-iVar1) != iVar7 + iVar1 < 0)) goto LAB_140592495;
                }
                uVar3 = (int)uVar4 + 1;
                uVar4 = (ulonglong)uVar3;
                uVar6 = uVar6 + 4;
            } while (uVar3 < *(uint *)(param_1 + 0x17c));
        }
        fVar9 = (float)(ulonglong)*(uint *)(param_1 + 0x178) /
                (float)(ulonglong)(uint)(1 << ((byte)*(undefined4 *)(param_1 + 0x1ac) & 0x1f));
        if ((0.0 <= fVar9) && (fVar9 <= 1.0)) {
            FUN_1407db4f0(local_10 ^ (ulonglong)&local_28);
            return;
        }
    }
    LAB_140592495:
    FUN_1407db4f0(local_10 ^ (ulonglong)&local_28);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405924b0(longlong param_1,undefined4 *param_2,undefined *param_3,undefined4 *param_4)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined auStack88 [32];
    undefined8 local_38;
    undefined8 local_30;
    int local_28;
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if ((((param_3 != (undefined *)0x0) && (param_4 != (undefined4 *)0x0)) && (param_1 != 0)) &&
        (param_2[2] == 1)) {
        *param_4 = *param_2;
        param_4[1] = param_2[1];
        param_4[2] = param_2[2];
        uVar1 = FUN_14040bdb0(param_3);
        if (((uVar1 & 0xfeffffffffffffff) != 0) && (*(int *)(param_3 + 8) == 1)) {
            lVar3 = 5;
            local_38 = 0;
            local_30 = 0;
            local_28 = 0;
            puVar2 = &local_38;
            do {
                *(uint *)puVar2 =
                        (uint)(*(int *)((param_1 - (longlong)&local_38) + 4 + (longlong)puVar2) == 4);
                lVar3 = lVar3 + -1;
                puVar2 = (undefined8 *)((longlong)puVar2 + 4);
            } while (lVar3 != 0);
            *(undefined *)((longlong)param_4 + 6) = param_3[6];
            if ((int)local_38 != 0) {
                *(undefined *)param_4 = *param_3;
            }
            if (local_38._4_4_ != 0) {
                *(undefined *)((longlong)param_4 + 1) = param_3[1];
            }
            if ((int)local_30 != 0) {
                *(undefined *)((longlong)param_4 + 2) = param_3[2];
            }
            if (local_30._4_4_ != 0) {
                *(undefined *)((longlong)param_4 + 3) = param_3[3];
            }
            if (local_28 != 0) {
                *(undefined *)(param_4 + 1) = param_3[4];
            }
        }
    }
    FUN_1407db4f0(local_20 ^ (ulonglong)auStack88);
    return;
}



ulonglong FUN_1405925d0(undefined8 param_1,undefined4 param_2)

{
    uint uVar1;
    ulonglong **ppuVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    uint **ppuVar5;
    ulonglong uVar6;

    ppuVar2 = (ulonglong **)FUN_140417660();
    uVar6 = 0;
    if (ppuVar2 != (ulonglong **)0x0) {
        uVar3 = uVar6;
        if (*ppuVar2 != (ulonglong *)0x0) {
            uVar3 = **ppuVar2;
        }
        if (uVar3 != 0) {
            puVar4 = (undefined8 *)FUN_1405be2c0();
            if ((puVar4 != (undefined8 *)0x0) && (puVar4[1] != 0)) {
                ppuVar5 = (uint **)*puVar4;
                do {
                    if (*ppuVar5 != (uint *)0x0) {
                        return (ulonglong)**ppuVar5;
                    }
                    uVar6 = uVar6 + 1;
                    ppuVar5 = ppuVar5 + 1;
                } while (uVar6 < (ulonglong)puVar4[1]);
                return 0;
            }
            return 0;
        }
    }
    puVar4 = (undefined8 *)FUN_1400580e0(param_1,param_2);
    if ((puVar4 != &DAT_140a12138) &&
        (*(int *)(puVar4 + 1) != (int)uVar6 && (int)uVar6 <= *(int *)(puVar4 + 1))) {
        uVar1 = FUN_140056d60(param_1,param_2);
        uVar6 = (ulonglong)uVar1;
    }
    return uVar6 & 0xffffffff;
}



undefined8 FUN_1405926a0(longlong param_1)

{
    if (param_1 != 0) {
        if (*(int *)(param_1 + 8) == 0x16) {
            return 0x4f;
        }
        if (((*(byte *)(param_1 + 0x20) & 4) != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
            return 0x57;
        }
    }
    return 0x2c;
}



undefined8 FUN_1405926d0(void)

{
    FUN_1405e69e0(DAT_140c65898 + 0x1698);
    return 0;
}



undefined8 FUN_140593cb0(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar5 = 0;
    uVar6 = uVar5;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar6 + 0x180);
    uVar2 = FUN_1400f26a0();
    lVar3 = FUN_1405be150();
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xc) != 0)) {
        if (*(uint *)(lVar3 + 0xc) < uVar2) {
            uVar2 = FUN_1405a48c0(lVar3);
            uVar5 = (ulonglong)uVar2;
        }
        else {
            uVar5 = 0;
            if (uVar2 != 0) {
                uVar5 = (ulonglong)*(uint *)(lVar3 + 0x20 + (ulonglong)(uVar2 - 1) * 0x30);
            }
        }
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(int)uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140593db0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined8 local_res10;

    uVar5 = 0;
    uVar6 = uVar5;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar2 = FUN_1400f26a0(uVar6 + 0x180,1);
    uVar3 = FUN_1400f26a0(uVar6 + 0x180,2);
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar5 * 8) + 8) == iVar2) {
                lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar5 * 8);
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
                    return 0;
                }
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    local_res10 = CONCAT44(uVar3,iVar2);
    FUN_1403f4900(DAT_140c65898,0x857,&local_res10);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140593f30(longlong param_1)

{
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 uVar8;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar6 = 0;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_140593f78;
            }
            uVar1 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar1;
            uVar6 = (ulonglong)uVar1;
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_140593f78:
    iVar2 = FUN_1400f26a0(lVar4 + 0x180,1);
    uVar8 = 0;
    uVar7 = 0;
    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar3 * 8) + 8) == iVar2) {
                lVar4 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar3 * 8);
                if ((((lVar4 != 0) && (uVar8 = uVar7, *(int *)(lVar4 + 0xc) == 0)) &&
                     (uVar1 = *(uint *)(lVar4 + 0x54), uVar1 != 0)) &&
                    (((lVar4 = FUN_1405be150(lVar4,iVar2), lVar4 != 0 &&
                                                           (uVar1 < *(uint *)(lVar4 + 0xc) || uVar1 == *(uint *)(lVar4 + 0xc))) &&
                      ((uVar1 != 0 && (lVar4 = (ulonglong)(uVar1 - 1) * 0x30 + 0x20 + lVar4, lVar4 != 0))))))
                {
                    uVar8 = *(undefined8 *)(lVar4 + 0x28);
                }
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    local_20 = 1;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar5 = uVar8;
    puVar5[1] = local_20;
    puVar5[2] = local_18;
    lVar4 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = CONCAT44(local_20._4_4_,4);
    FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140597500(longlong param_1)

{
    byte bVar1;
    undefined **ppuVar2;
    undefined4 uVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    ulonglong **ppuVar7;
    ulonglong *puVar8;
    undefined8 uVar9;
    ulonglong **ppuVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    undefined4 *puVar14;
    ulonglong **ppuVar15;
    ulonglong **ppuVar16;
    ulonglong **ppuVar17;
    undefined auStack696 [32];
    undefined8 local_298;
    int local_290;
    undefined **local_288;
    ulonglong *local_280;
    ulonglong **local_278;
    undefined8 local_270;
    undefined **local_268;
    ulonglong *local_260;
    longlong local_258;
    undefined4 local_250;
    longlong local_248;
    longlong local_240;
    longlong local_238;
    undefined local_228 [8];
    undefined local_220 [148];
    undefined4 local_18c [85];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack696;
    ppuVar17 = (ulonglong **)0x0;
    ppuVar15 = ppuVar17;
    if (*(ulonglong **)(DAT_140c63650 + 0x300) != (ulonglong *)0x0) {
        ppuVar10 = ppuVar17;
        do {
            if (*(longlong *)
                    (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)ppuVar10 * 8) + 400) ==
                param_1) {
                ppuVar15 = (ulonglong **)
                           *(ulonglong **)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)ppuVar10 * 8);
                break;
            }
            ppuVar10 = (ulonglong **)(ulonglong)((int)ppuVar10 + 1);
        } while (ppuVar10 < *(ulonglong **)(DAT_140c63650 + 0x300));
    }
    puVar8 = (ulonglong *)(ppuVar15 + 0x30);
    local_238 = param_1;
    uVar3 = FUN_1400f26a0(puVar8,1);
    local_298 = (double)CONCAT44(local_298._4_4_,uVar3);
    local_290 = FUN_1400f26a0(puVar8,2);
    puVar11 = (undefined8 *)(*(longlong *)((longlong)ppuVar15[0x32] + 0x18) + 0x20);
    puVar13 = &DAT_140a12138;
    if (puVar11 < *(undefined8 **)((longlong)ppuVar15[0x32] + 0x10)) {
        puVar13 = puVar11;
    }
    if ((*(int *)(puVar13 + 1) == 0) || ((*(int *)(puVar13 + 1) == 1 && (*(int *)puVar13 == 0)))) {
        bVar1 = 0;
    }
    else {
        bVar1 = 1;
    }
    uVar3 = FUN_1400f26a0(puVar8,4);
    local_248 = FUN_14020e7a0(uVar3);
    local_280 = (ulonglong *)0x0;
    local_278 = (ulonglong **)0x0;
    local_270 = (ulonglong **)0x0;
    FUN_1400b52a0(local_220);
    FUN_1407e4830(local_228,0,0x1f0);
    FUN_1407e4830(local_220,0,0x138);
    FUN_1407e4830(local_18c,0,0x90);
    iVar6 = local_290;
    ppuVar2 = DAT_140c65b90;
    puVar14 = local_18c;
    for (lVar12 = 0xf; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = 0xc5;
        puVar14 = puVar14 + 1;
    }
    local_268 = DAT_140c65b90;
    local_240 = (longlong)(int)(uint)bVar1;
    ppuVar15 = ppuVar17;
    ppuVar7 = ppuVar17;
    ppuVar10 = ppuVar17;
    ppuVar16 = ppuVar17;
    if (DAT_140c65b90[0x1e] != (undefined *)0x0) {
        do {
            uVar3 = *(undefined4 *)(ppuVar2[0x1d] + (longlong)ppuVar15 * 4);
            if (DAT_140c63840 == (code *)0x0) {
                ppuVar7 = ppuVar17;
                if (_DAT_140c654f8 == 0) {
                    iVar4 = FUN_1402459a0();
                    if (iVar4 < 0) {
                        ppuVar7 = (ulonglong **)(undefined **)0x0;
                    }
                    else {
                        ppuVar7 = (ulonglong **)(**(code **)(*DAT_140c63868 + 0x18))(DAT_140c63868,uVar3);
                    }
                }
            }
            else {
                ppuVar7 = (ulonglong **)
                        (*DAT_140c63840)(&PTR_u_TradeskillSchematic2_140a6dd58,uVar3,DAT_140c63858);
            }
            lVar12 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)((longlong)ppuVar7 + 0xc),local_228);
            if ((((lVar12 != 0) && (*(int *)(lVar12 + 0x124) == (int)local_298)) &&
                 ((iVar6 == 0 || (*(int *)(lVar12 + 0x160) == iVar6)))) &&
                ((((((local_248 == 0 || (*(uint *)(lVar12 + 0x180) == 0)) ||
                     ((*(uint *)(local_248 + 0x10) & *(uint *)(lVar12 + 0x180)) != 0)) &&
                    ((local_240 == 0 || (iVar4 = FUN_1405e5b90(), iVar4 != 0)))) &&
                   (*(int *)((longlong)ppuVar7 + 0x4c) == 0)) &&
                  ((*(int *)((longlong)ppuVar7 + 0x1c) != 0 &&
                    (puVar8 = (ulonglong *)
                            FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)((longlong)ppuVar7 + 0xc),0),
                            puVar8 != (ulonglong *)0x0)))))) {
                local_268 = (undefined **)ppuVar7;
                local_260 = puVar8;
                if (ppuVar16 == ppuVar10) {
                    FUN_1400b4c50(&local_288,ppuVar16,&local_268);
                    ppuVar10 = local_270;
                    ppuVar16 = local_278;
                }
                else {
                    if (ppuVar16 != (ulonglong **)0x0) {
                        *ppuVar16 = (ulonglong *)ppuVar7;
                        ppuVar16[1] = puVar8;
                    }
                    local_278 = ppuVar16 + 2;
                    ppuVar16 = local_278;
                }
            }
            ppuVar15 = (ulonglong **)(ulonglong)((int)ppuVar15 + 1);
            param_1 = local_238;
            ppuVar7 = (ulonglong **)local_280;
        } while (ppuVar15 < ppuVar2[0x1e]);
    }
    local_288 = &PTR_FUN_140b569f0;
    local_270 = (ulonglong **)CONCAT44(local_270._4_4_,1);
    local_278 = (ulonglong **)param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_280._0_4_ = FUN_1400578c0();
    local_280 = (ulonglong *)((ulonglong)local_280 & 0xffffffff00000000 | (ulonglong)(uint)local_280);
    ppuVar15 = (ulonglong **)((longlong)ppuVar16 - (longlong)ppuVar7 >> 4);
    if ((ppuVar15 != (ulonglong **)0x0) &&
        (FUN_1405a3db0(ppuVar7,ppuVar16), ppuVar15 != (ulonglong **)0x0)) {
        do {
            local_268 = &PTR_FUN_140b569f0;
            local_250 = 1;
            local_258 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar13 = *(undefined8 **)(param_1 + 0x10);
            uVar9 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar9;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(param_1);
            local_260 = (ulonglong *)((ulonglong)local_260 & 0xffffffff00000000 | (ulonglong)uVar5);
            iVar6 = FUN_14059e000(ppuVar7 + (longlong)ppuVar17 * 2);
            if (-1 < iVar6) {
                FUN_1400fb1d0(&local_288);
            }
            FUN_1400579e0();
            ppuVar17 = (ulonglong **)(ulonglong)((int)ppuVar17 + 1);
        } while (ppuVar17 < ppuVar15);
        param_1 = (longlong)local_278;
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if ((uint)local_280 - 1 < *(uint *)(lVar12 + 0x38)) {
        puVar13 = (undefined8 *)
                ((longlong)(int)((uint)local_280 - 1) * 0x10 + *(longlong *)(lVar12 + 0x18));
    }
    else {
        local_298 = (double)(uint)local_280;
        if (local_298 == 0.0) {
            puVar13 = *(undefined8 **)(lVar12 + 0x20);
        }
        else {
            local_298._4_4_ = (int)((ulonglong)local_298 >> 0x20);
            puVar13 = (undefined8 *)
                    (*(longlong *)(lVar12 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_298._4_4_ + (int)local_298) %
                      (longlong)((1 << (*(byte *)(lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar13 + 3) == 3) && (local_298 == (double)puVar13[2])) goto LAB_1405979af;
            puVar13 = (undefined8 *)puVar13[4];
        } while (puVar13 != (undefined8 *)0x0);
        puVar13 = &DAT_140a12138;
    }
    LAB_1405979af:
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    *puVar11 = *puVar13;
    uVar3 = *(undefined4 *)(puVar13 + 1);
    *(undefined4 *)(puVar11 + 1) = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar3,(uint)local_280);
    if (ppuVar7 != (ulonglong **)0x0) {
        FUN_14018b900(ppuVar7,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack696);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140598b84)
// WARNING: Removing unreachable block (ram,0x000140598aea)
// WARNING: Removing unreachable block (ram,0x000140598c1b)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140598110(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined *puVar4;
    double dVar5;
    uint uVar6;
    int iVar7;
    uint *puVar8;
    undefined8 uVar9;
    longlong lVar10;
    undefined *puVar11;
    longlong *plVar12;
    uint *puVar13;
    undefined *puVar14;
    undefined8 *puVar15;
    uint uVar16;
    longlong lVar17;
    int iVar18;
    uint *puVar19;
    longlong lVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined8 local_res8;
    int local_res10;
    undefined8 local_res18;
    undefined local_b8 [16];
    undefined local_a8 [8];
    longlong local_a0;
    undefined local_88 [8];
    undefined *local_80;
    longlong local_78;
    undefined local_68 [8];
    undefined *local_60;
    longlong local_58;

    puVar19 = (uint *)0x0;
    if (*(uint **)(DAT_140c63650 + 0x300) != (uint *)0x0) {
        puVar13 = puVar19;
        do {
            if (*(longlong *)
                    (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar13 * 8) + 400) ==
                param_1) break;
            puVar13 = (uint *)(ulonglong)((int)puVar13 + 1);
        } while (puVar13 < *(uint **)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0();
    uVar6 = FUN_14049bdc0();
    local_60 = (undefined *)FUN_14018b280();
    local_58 = 0;
    *local_60 = 0;
    *(undefined8 *)(local_60 + 8) = 0;
    *(undefined **)(local_60 + 0x10) = local_60;
    *(undefined **)(local_60 + 0x18) = local_60;
    local_80 = (undefined *)FUN_14018b280();
    local_78 = 0;
    *local_80 = 0;
    *(undefined8 *)(local_80 + 8) = 0;
    *(undefined **)(local_80 + 0x10) = local_80;
    *(undefined **)(local_80 + 0x18) = local_80;
    puVar13 = puVar19;
    do {
        if (DAT_140c63848 == (code *)0x0) {
            puVar8 = puVar19;
            if ((_DAT_140c64070 == 0) && (iVar7 = FUN_140247760(), -1 < iVar7)) {
                puVar8 = (uint *)(**(code **)(*DAT_140c64930 + 0x20))(DAT_140c64930,puVar13);
            }
        }
        else {
            puVar8 = (uint *)(*DAT_140c63848)(&PTR_u_UnitProperty2_140a6dee0,puVar13,DAT_140c63858);
        }
        if (((*(byte *)(puVar8 + 9) & 4) != 0) && (puVar8[0xc] != 0)) {
            local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)*puVar8);
            if ((uVar6 & puVar8[0xc]) == 0) {
                puVar14 = local_a8;
                puVar11 = local_88;
            }
            else {
                puVar14 = local_b8;
                puVar11 = local_68;
            }
            FUN_1403addd0(puVar11,puVar14,&local_res8);
        }
        uVar16 = (int)puVar13 + 1;
        puVar13 = (uint *)(ulonglong)uVar16;
    } while (uVar16 < 0xc5);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400578c0(param_1);
    local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)uVar6);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar7 = FUN_1400578c0();
    uVar21 = 0;
    uVar22 = 0;
    puVar14 = *(undefined **)(local_60 + 0x10);
    local_res10 = iVar7;
    if (puVar14 != local_60) {
        iVar18 = 1;
        do {
            iVar1 = *(int *)(puVar14 + 0x20);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar7 - 1U < *(uint *)(lVar10 + 0x38)) {
                puVar15 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
            }
            else {
                local_res18 = (double)iVar7;
                if (local_res18 == (double)CONCAT44(uVar22,uVar21)) {
                    puVar15 = *(undefined8 **)(lVar10 + 0x20);
                }
                else {
                    local_res18._4_4_ = (int)((ulonglong)local_res18 >> 0x20);
                    puVar15 = (undefined8 *)
                            (*(longlong *)(lVar10 + 0x20) +
                             ((longlong)(ulonglong)(uint)(local_res18._4_4_ + (int)local_res18) %
                              (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar15 + 3) == 3) && (local_res18 == (double)puVar15[2]))
                        goto LAB_1405983cd;
                    puVar15 = (undefined8 *)puVar15[4];
                } while (puVar15 != (undefined8 *)0x0);
                puVar15 = &DAT_140a12138;
            }
            LAB_1405983cd:
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar15;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar18;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            lVar10 = *(longlong *)(param_1 + 0x10);
            *(longlong *)(param_1 + 0x10) = lVar10 + 0x10;
            FUN_14005ea50(param_1,lVar10 + -0x20,lVar10 + -0x10,lVar10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            puVar11 = *(undefined **)(puVar14 + 0x18);
            if (puVar11 == (undefined *)0x0) {
                puVar11 = *(undefined **)(puVar14 + 8);
                if (puVar14 == *(undefined **)(puVar11 + 0x18)) {
                    do {
                        puVar14 = puVar11;
                        puVar11 = *(undefined **)(puVar14 + 8);
                    } while (puVar14 == *(undefined **)(puVar11 + 0x18));
                }
                if (*(undefined **)(puVar14 + 0x18) != puVar11) {
                    puVar14 = puVar11;
                }
            }
            else {
                for (puVar4 = *(undefined **)(puVar11 + 0x10); puVar14 = puVar11, puVar4 != (undefined *)0x0
                        ; puVar4 = *(undefined **)(puVar4 + 0x10)) {
                    puVar11 = puVar4;
                }
            }
            iVar18 = iVar18 + 1;
        } while (puVar14 != local_60);
    }
    uVar16 = uVar6 - 1;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (uVar16 < *(uint *)(lVar10 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(int)(uVar6 - 1) * 0x10 + *(longlong *)(lVar10 + 0x18));
    }
    else {
        local_res18 = (double)uVar6;
        if (local_res18 == (double)CONCAT44(uVar22,uVar21)) {
            puVar15 = *(undefined8 **)(lVar10 + 0x20);
        }
        else {
            local_res18._4_4_ = (int)((ulonglong)local_res18 >> 0x20);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar10 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res18._4_4_ + (int)local_res18) %
                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (local_res18 == (double)puVar15[2])) goto LAB_14059852d;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_14059852d:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar15;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = FUN_14018f0e0(local_a8,L"arPrimary");
    lVar20 = -1;
    lVar10 = *(longlong *)(lVar10 + 8);
    if (lVar10 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar17 = -1;
        do {
            lVar17 = lVar17 + 1;
        } while (*(char *)(lVar10 + lVar17) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar9 = FUN_140062650(param_1,lVar10,lVar17);
        *(undefined4 *)(puVar15 + 1) = 4;
        *puVar15 = uVar9;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_a0 != 0) {
        FUN_14018b900(local_a0,0);
    }
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar7 - 1U < *(uint *)(lVar10 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
    }
    else {
        local_res18 = (double)iVar7;
        if (local_res18 == (double)CONCAT44(uVar22,uVar21)) {
            puVar15 = *(undefined8 **)(lVar10 + 0x20);
        }
        else {
            local_res18._4_4_ = (int)((ulonglong)local_res18 >> 0x20);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar10 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res18._4_4_ + (int)local_res18) %
                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (local_res18 == (double)puVar15[2])) goto LAB_14059864d;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_14059864d:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar15;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
    lVar10 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar10 + 0x10;
    FUN_14005ea50(param_1,lVar10 + -0x20,lVar10 + -0x10,lVar10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar7 = FUN_1400578c0();
    puVar14 = *(undefined **)(local_80 + 0x10);
    if (puVar14 != local_80) {
        iVar18 = 1;
        do {
            iVar1 = *(int *)(puVar14 + 0x20);
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar7 - 1U < *(uint *)(lVar10 + 0x38)) {
                puVar15 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
            }
            else {
                local_res18 = (double)iVar7;
                if (local_res18 == (double)CONCAT44(uVar22,uVar21)) {
                    puVar15 = *(undefined8 **)(lVar10 + 0x20);
                }
                else {
                    local_res18._4_4_ = (int)((ulonglong)local_res18 >> 0x20);
                    puVar15 = (undefined8 *)
                            (*(longlong *)(lVar10 + 0x20) +
                             ((longlong)(ulonglong)(uint)(local_res18._4_4_ + (int)local_res18) %
                              (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar15 + 3) == 3) && (local_res18 == (double)puVar15[2]))
                        goto LAB_14059876d;
                    puVar15 = (undefined8 *)puVar15[4];
                } while (puVar15 != (undefined8 *)0x0);
                puVar15 = &DAT_140a12138;
            }
            LAB_14059876d:
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar15;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar18;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            lVar10 = *(longlong *)(param_1 + 0x10);
            *(longlong *)(param_1 + 0x10) = lVar10 + 0x10;
            FUN_14005ea50(param_1,lVar10 + -0x20,lVar10 + -0x10,lVar10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            puVar11 = *(undefined **)(puVar14 + 0x18);
            if (puVar11 == (undefined *)0x0) {
                puVar11 = *(undefined **)(puVar14 + 8);
                if (puVar14 == *(undefined **)(puVar11 + 0x18)) {
                    do {
                        puVar14 = puVar11;
                        puVar11 = *(undefined **)(puVar14 + 8);
                    } while (puVar14 == *(undefined **)(puVar11 + 0x18));
                }
                if (*(undefined **)(puVar14 + 0x18) != puVar11) {
                    puVar14 = puVar11;
                }
            }
            else {
                for (puVar4 = *(undefined **)(puVar11 + 0x10); puVar14 = puVar11, puVar4 != (undefined *)0x0
                        ; puVar4 = *(undefined **)(puVar4 + 0x10)) {
                    puVar11 = puVar4;
                }
            }
            iVar18 = iVar18 + 1;
        } while (puVar14 != local_80);
    }
    dVar5 = local_res8;
    iVar18 = (int)local_res8;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (uVar16 < *(uint *)(lVar10 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)((int)local_res8 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18))
                ;
    }
    else {
        local_res8 = (double)(int)local_res8;
        if (local_res8 == (double)CONCAT44(uVar22,uVar21)) {
            puVar15 = *(undefined8 **)(lVar10 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar10 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (local_res8 == (double)puVar15[2])) goto LAB_1405988cd;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_1405988cd:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar15;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = FUN_14018f0e0(local_a8,L"arSecondary");
    lVar10 = *(longlong *)(lVar10 + 8);
    if (lVar10 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar20 = lVar20 + 1;
        } while (*(char *)(lVar10 + lVar20) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar9 = FUN_140062650(param_1,lVar10,lVar20);
        *(undefined4 *)(puVar15 + 1) = 4;
        *puVar15 = uVar9;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar10 = 0;
    }
    if (local_a0 != 0) {
        FUN_14018b900(local_a0,0);
    }
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar7 - 1U < *(uint *)(lVar20 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar20 + 0x18));
    }
    else {
        local_res8 = (double)iVar7;
        if (local_res8 == (double)CONCAT44(uVar22,uVar21)) {
            puVar15 = *(undefined8 **)(lVar20 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar20 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (local_res8 == (double)puVar15[2])) goto LAB_1405989f6;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_1405989f6:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar15;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
    lVar20 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar20 + 0x10;
    FUN_14005ea50(param_1,lVar20 + -0x20,lVar20 + -0x10,lVar20);
    lVar20 = *(longlong *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar20;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (uVar16 < *(uint *)(lVar17 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(iVar18 + -1) * 0x10 + *(longlong *)(lVar17 + 0x18));
    }
    else {
        local_res8 = (double)iVar18;
        if (local_res8 == (double)CONCAT44(uVar22,uVar21)) {
            puVar15 = *(undefined8 **)(lVar17 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar17 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar17 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (local_res8 == (double)puVar15[2])) goto LAB_140598ab9;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_140598ab9:
    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar20) = *puVar15;
    *(undefined4 *)(lVar20 + -0x28) = *(undefined4 *)(puVar15 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (-1 < iVar7) {
        plVar12 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar15 = *(undefined8 **)(*plVar12 + 0x20);
        do {
            if ((*(int *)(puVar15 + 3) == 3) && ((double)CONCAT44(uVar22,uVar21) == (double)puVar15[2]))
                goto LAB_140598b11;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
        LAB_140598b11:
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar15;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,iVar7);
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,0);
    }
    iVar7 = local_res10;
    if (-1 < local_res10) {
        plVar12 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar15 = *(undefined8 **)(*plVar12 + 0x20);
        do {
            if ((*(int *)(puVar15 + 3) == 3) && ((double)CONCAT44(uVar22,uVar21) == (double)puVar15[2]))
                goto LAB_140598bab;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
        LAB_140598bab:
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar15;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,iVar7);
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,0);
    }
    if (-1 < iVar18) {
        plVar12 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar15 = *(undefined8 **)(*plVar12 + 0x20);
        do {
            if ((*(int *)(puVar15 + 3) == 3) && ((double)CONCAT44(uVar22,uVar21) == (double)puVar15[2]))
                goto LAB_140598c49;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
        LAB_140598c49:
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar15;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,(ulonglong)dVar5 & 0xffffffff);
        pdVar3 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar18;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,0);
    }
    if (local_78 != 0) {
        lVar20 = *(longlong *)(local_80 + 8);
        while (lVar20 != 0) {
            FUN_1400083b0(local_88,*(undefined8 *)(lVar20 + 0x18));
            lVar17 = *(longlong *)(lVar20 + 0x10);
            FUN_14018b900(lVar20,0);
            lVar20 = lVar17;
        }
        *(undefined **)(local_80 + 0x10) = local_80;
        *(longlong *)(local_80 + 8) = lVar10;
        *(undefined **)(local_80 + 0x18) = local_80;
        local_78 = lVar10;
    }
    FUN_14018b900(local_80,0);
    if (local_58 != 0) {
        lVar20 = *(longlong *)(local_60 + 8);
        while (lVar20 != 0) {
            FUN_1400083b0(local_68,*(undefined8 *)(lVar20 + 0x18));
            lVar17 = *(longlong *)(lVar20 + 0x10);
            FUN_14018b900(lVar20,0);
            lVar20 = lVar17;
        }
        *(undefined **)(local_60 + 0x10) = local_60;
        *(longlong *)(local_60 + 8) = lVar10;
        *(undefined **)(local_60 + 0x18) = local_60;
        local_58 = lVar10;
    }
    FUN_14018b900(local_60,0);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140598d90(longlong param_1)

{
    uint uVar1;
    double dVar2;
    double dVar3;
    longlong lVar4;
    undefined8 *puVar5;
    double dVar6;
    longlong lVar7;
    ulonglong uVar8;
    int iVar9;
    undefined8 uVar10;
    double *pdVar11;
    longlong *plVar12;
    ulonglong uVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    undefined8 local_res8;
    double local_res10;
    longlong local_48;
    ulonglong local_40;
    undefined **local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar14 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar14 + 1) = 5;
    *puVar14 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar9 = FUN_1400578c0(param_1);
    lVar7 = DAT_140c65898;
    local_40 = 0;
    local_48 = 0;
    local_30 = iVar9;
    FUN_1403d6710(DAT_140c65898 + 0xb8,&local_48);
    FUN_1403d6710(lVar7 + 0xd0,&local_48);
    FUN_1403d6710();
    uVar8 = local_40;
    lVar7 = local_48;
    uVar15 = 0;
    if (local_40 != 0) {
        do {
            uVar1 = **(uint **)(*(longlong *)(lVar7 + uVar15 * 8) + 0x40);
            dVar2 = *(double *)(DAT_140c65b90 + 0xb0);
            dVar6 = dVar2;
            dVar3 = *(double *)((longlong)dVar2 + 8);
            while (dVar3 != 0.0) {
                if (*(uint *)((longlong)dVar3 + 0x20) < uVar1) {
                    dVar3 = *(double *)((longlong)dVar3 + 0x18);
                }
                else {
                    dVar6 = dVar3;
                    dVar3 = *(double *)((longlong)dVar3 + 0x10);
                }
            }
            if ((dVar6 == dVar2) || (uVar1 < *(uint *)((longlong)dVar6 + 0x20))) {
                local_res10 = dVar2;
                pdVar11 = &local_res10;
            }
            else {
                local_res8 = dVar6;
                pdVar11 = (double *)&local_res8;
            }
            dVar2 = *pdVar11;
            if ((dVar2 != *(double *)(DAT_140c65b90 + 0xb0)) &&
                ((longlong **)((longlong)dVar2 + 0x28) != (longlong **)0x0)) {
                uVar13 = 0;
                if (*(ulonglong *)((longlong)dVar2 + 0x30) != 0) {
                    plVar12 = *(longlong **)((longlong)dVar2 + 0x28);
                    do {
                        if ((*plVar12 != 0) && (*(int *)(*plVar12 + 0x1c) == 0)) {
                            iVar9 = FUN_140415d60();
                            if (iVar9 != 0) {
                                FUN_1400fb470();
                                *(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + -0x10;
                                param_1 = local_28;
                            }
                            break;
                        }
                        uVar13 = uVar13 + 1;
                        plVar12 = plVar12 + 1;
                    } while (uVar13 < *(ulonglong *)((longlong)dVar2 + 0x30));
                }
            }
            uVar15 = uVar15 + 1;
            iVar9 = local_30;
        } while (uVar15 < uVar8);
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar9 - 1U < *(uint *)(lVar4 + 0x38)) {
        puVar14 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar4 + 0x18));
    }
    else {
        local_res8 = (double)iVar9;
        if (local_res8 == 0.0) {
            puVar14 = *(undefined8 **)(lVar4 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar14 = (undefined8 *)
                    (*(longlong *)(lVar4 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar4 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar14 + 3) == 3) && (local_res8 == (double)puVar14[2])) goto LAB_140598fc0;
            puVar14 = (undefined8 *)puVar14[4];
        } while (puVar14 != (undefined8 *)0x0);
        puVar14 = &DAT_140a12138;
    }
    LAB_140598fc0:
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = *puVar14;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar14 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14059a900(longlong param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    int *piVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    uint uVar9;
    undefined8 local_18;
    int local_10;

    uVar7 = 0;
    uVar8 = uVar7;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar1 = FUN_1400f26a0(uVar8 + 0x180);
    iVar2 = FUN_1400f26a0(uVar8 + 0x180);
    uVar9 = iVar2 - 1;
    local_10 = FUN_1400f26a0();
    lVar3 = FUN_1405be150();
    uVar8 = uVar7;
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        uVar5 = uVar7;
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar5 * 8) + 8) == iVar1) {
                uVar8 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    if (((((lVar3 != 0) && (uVar8 != 0)) && (*(int *)(uVar8 + 0xc) != 0)) &&
         ((uVar9 < 10 && (*(int *)(lVar3 + 0x210 + (ulonglong)uVar9 * 4) != 0)))) &&
        ((*(int *)(uVar8 + 0x18 + (ulonglong)uVar9 * 4) == 0 &&
          ((lVar3 = FUN_140246040(), lVar3 != 0 &&
                                     (*(uint *)(lVar3 + 8) < *(uint *)(uVar8 + 0x14) ||
                                      *(uint *)(lVar3 + 8) == *(uint *)(uVar8 + 0x14))))))) {
        piVar4 = (int *)(lVar3 + 0x10);
        do {
            if (*piVar4 == local_10) {
                local_18 = CONCAT44(uVar9,iVar1);
                FUN_1403f4900(DAT_140c65898,0x84e,&local_18);
                return 0;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            piVar4 = piVar4 + 1;
        } while (uVar6 < 5);
    }
    return 0;
}



undefined8 FUN_14059acb0(longlong param_1)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    int local_res10 [6];

    uVar6 = 0;
    uVar3 = uVar6;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    local_res10[0] = FUN_1400f26a0(uVar3 + 0x180);
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        uVar3 = uVar6;
        while (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar3 * 8) + 8) !=
               local_res10[0]) {
            uVar3 = (ulonglong)((int)uVar3 + 1);
            if (*(ulonglong *)(DAT_140c65898 + 0x16a0) <= uVar3) {
                return 0;
            }
        }
        lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar3 * 8);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
            piVar2 = (int *)(lVar1 + 0x18);
            while (*piVar2 == 0) {
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
                piVar2 = piVar2 + 1;
                if (9 < uVar5) {
                    return 0;
                }
            }
            FUN_1403f4900(DAT_140c65898,0x858,local_res10);
        }
    }
    return 0;
}



void FUN_14059ada0(longlong param_1)

{
    undefined8 *puVar1;
    int *piVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined *puVar6;
    undefined *puVar7;
    int **ppiVar8;
    longlong lVar9;
    undefined *puVar10;
    undefined auStack2360 [32];
    undefined8 local_918;
    undefined4 local_910;
    undefined8 local_908;
    undefined8 local_900;
    undefined8 local_8f8;
    undefined4 local_8f0;
    undefined8 local_8e8;
    undefined8 uStack2272;
    undefined8 local_8d8;
    undefined8 uStack2256;
    undefined8 local_8c8;
    undefined4 local_8c0;
    undefined8 local_8b8;
    undefined8 local_8b0;
    undefined8 local_8a8;
    undefined4 local_8a0;
    undefined local_89c [20];
    undefined local_888 [12];
    undefined4 local_87c;
    undefined8 local_878;
    undefined local_870 [16];
    undefined *local_860;
    undefined4 local_858;
    undefined4 uStack2132;
    undefined4 uStack2128;
    undefined4 uStack2124;
    undefined4 local_848;
    undefined4 uStack2116;
    undefined4 uStack2112;
    undefined4 uStack2108;
    undefined8 *local_708;
    undefined4 local_700;
    undefined4 local_6fc;
    undefined *local_6f8;
    undefined4 local_6f0;
    undefined8 local_6ec;
    undefined4 local_6e4;
    int local_6e0;
    undefined8 local_6dc;
    undefined8 local_6d4;
    undefined8 local_6cc;
    undefined4 local_6c4;
    undefined local_6a8 [432];
    longlong *local_4f8;
    undefined *local_4f0;
    longlong local_1f8;
    int local_58;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2360;
    iVar3 = FUN_1405925d0(param_1,1);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400578c0(param_1);
    lVar5 = FUN_140245c00(iVar3);
    puVar10 = (undefined *)0x0;
    puVar7 = puVar10;
    puVar6 = puVar10;
    if (lVar5 != 0) {
        puVar6 = (undefined *)FUN_140242d40(*(undefined4 *)(lVar5 + 8));
        puVar7 = (undefined *)FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar5 + 0xc),0);
    }
    if (puVar7 == (undefined *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        goto LAB_14059b1e8;
    }
    FUN_14040fae0(&local_4f8);
    if (local_58 < 7) {
        local_58 = 6;
        local_4f0 = puVar7;
    }
    if ((puVar6 == (undefined *)0x0) || ((puVar6[0xc] & 4) == 0)) {
        LAB_14059b1ad:
        FUN_140415bb0(param_1,&local_4f8);
    }
    else {
        FUN_1407e4830(&local_8a0,0,0x28);
        FUN_14059d660(&local_8a0,param_1,2);
        local_8c0 = 1;
        local_910 = 1;
        local_8b8 = 1;
        local_8c8 = 0;
        local_908 = 0;
        local_900 = 0;
        local_8f8 = 0;
        local_8f0 = 0;
        local_918 = 0;
        local_8b0 = 0;
        local_8a8 = 0;
        local_878 = 0;
        FUN_14041fd30(local_870,0);
        local_6ec = 0;
        local_6e4 = 1;
        local_6dc = 0;
        local_6d4 = 0;
        local_6cc = 0;
        local_6c4 = 0;
        FUN_1400b52a0(local_6a8);
        FUN_140591630(&local_878);
        local_8e8 = 1;
        uStack2272 = 0;
        local_8d8 = 0;
        uStack2256 = 0;
        local_878 = DAT_140c658f0;
        local_858 = 1;
        uStack2132 = 0;
        uStack2128 = 0;
        uStack2124 = 0;
        local_848 = 0;
        uStack2116 = 0;
        uStack2112 = 0;
        uStack2108 = 0;
        if (iVar3 == *(int *)(DAT_140c65898 + 0x1ad0)) {
            local_918 = *(undefined8 *)(DAT_140c65898 + 0x1adc);
            local_910 = *(undefined4 *)(DAT_140c65898 + 0x1ae4);
            local_8b8 = *(undefined8 *)(DAT_140c65898 + 0x1ae8);
            local_8b0 = *(undefined8 *)(DAT_140c65898 + 0x1af0);
            local_8a8 = *(undefined8 *)(DAT_140c65898 + 0x1af8);
        }
        if (((*(byte *)(lVar5 + 0x20) & 4) == 0) || (iVar3 = 1, *(int *)(lVar5 + 0x1c) != 0)) {
            iVar3 = 0;
        }
        local_860 = puVar7;
        uVar4 = FUN_14020ac20(*(undefined4 *)(puVar7 + 0x16c));
        FUN_1405924b0(uVar4,&local_918,local_888,&local_8c8);
        local_6f0 = local_87c;
        local_700 = local_8a0;
        local_6f8 = local_89c;
        local_6fc = 5;
        local_6ec = local_8c8;
        local_6e4 = local_8c0;
        local_708 = &local_8b8;
        lVar9 = DAT_140c65898;
        local_6e0 = iVar3;
        FUN_1405e65b0(DAT_140c65898 + 0x1698);
        if (iVar3 == 0) {
            FUN_1405a3e60(&local_908,lVar9 + 0x1698,*(undefined4 *)(lVar5 + 8),
                          *(undefined4 *)(puVar7 + 0x144));
        }
        else {
            FUN_140591490();
        }
        lVar5 = 0x42;
        ppiVar8 = (int **)(DAT_140c65898 + 0x18c0);
        do {
            piVar2 = *ppiVar8;
            if (*piVar2 == 3) {
                iVar3 = 0x3f800000;
            }
            else {
                iVar3 = 0;
            }
            ppiVar8 = ppiVar8 + 1;
            piVar2[1] = iVar3;
            piVar2[2] = 0;
            *(undefined8 *)(piVar2 + 6) = 0;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        local_6dc = local_908;
        local_6d4 = local_900;
        local_6cc = local_8f8;
        local_6c4 = local_8f0;
        iVar3 = FUN_1405918a0(&local_878);
        if (iVar3 != 0) {
            puVar7 = local_6a8;
            if (local_860 == (undefined *)0x0) {
                puVar7 = puVar10;
            }
            FUN_140412570(&local_4f8,puVar7,1);
            goto LAB_14059b1ad;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    if (local_4f8 != (longlong *)0x0) {
        (**(code **)(*local_4f8 + 8))();
        local_4f8 = (longlong *)0x0;
    }
    if (local_1f8 != 0) {
        FUN_14018b900(local_1f8,0);
    }
    LAB_14059b1e8:
    FUN_1400579e0(param_1);
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2360);
    return;
}



undefined8 FUN_14059b230(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    puVar1 = *(uint **)(param_1 + 0x10);
    iVar2 = FUN_1405a4850();
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14059b4f3(void)

{
    byte bVar1;
    int iVar2;
    undefined8 in_RAX;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong unaff_RBX;
    undefined4 *unaff_RBP;
    longlong *unaff_RSI;
    longlong lVar6;
    undefined8 unaff_R12;
    longlong unaff_R14;
    undefined8 local_res20;
    undefined4 uStack0000000000000028;
    undefined8 uStack0000000000000028_00;
    undefined4 uStack000000000000002c;
    undefined4 uStack0000000000000030;
    undefined8 uStack0000000000000030_00;
    undefined4 uStack0000000000000034;
    undefined4 uStack0000000000000038;
    undefined4 in_stack_00000040;
    undefined4 uStack0000000000000044;
    undefined4 in_stack_00000048;
    undefined8 in_stack_00000050;
    int iVar7;
    undefined4 uVar8;
    undefined4 in_stack_00000078;

    uStack0000000000000038 = (undefined4)in_RAX;
    *(undefined8 *)(unaff_RBP + -0x16) = in_RAX;
    *(undefined8 *)(unaff_RBP + -0x14) = in_RAX;
    *(undefined8 *)(unaff_RBP + -8) = unaff_R12;
    local_res20 = in_RAX;
    uStack0000000000000028_00 = in_RAX;
    uStack0000000000000030_00 = in_RAX;
    FUN_14041fd30();
    unaff_RBP[0x5d] = 0;
    *(undefined8 *)(unaff_RBP + 0x5b) = 0;
    unaff_RBP[0x5d] = 1;
    *(undefined8 *)(unaff_RBP + 0x5f) = 0;
    *(undefined8 *)(unaff_RBP + 0x61) = 0;
    *(undefined8 *)(unaff_RBP + 99) = 0;
    unaff_RBP[0x65] = 0;
    FUN_1400b52a0(unaff_RBP + 0x6c);
    FUN_140591630(unaff_RBP + -8);
    uVar3 = DAT_140c658f0;
    lVar6 = DAT_140c65898;
    bVar1 = *(byte *)(unaff_RBX + 0x20);
    *(longlong *)(unaff_RBP + -2) = unaff_R14;
    in_stack_00000050 = 1;
    *(undefined8 *)(unaff_RBP + -8) = uVar3;
    iVar7 = (int)unaff_R12;
    uVar8 = (undefined4)((ulonglong)unaff_R12 >> 0x20);
    *unaff_RBP = 1;
    unaff_RBP[1] = 0;
    unaff_RBP[2] = iVar7;
    unaff_RBP[3] = uVar8;
    unaff_RBP[4] = iVar7;
    unaff_RBP[5] = uVar8;
    unaff_RBP[6] = iVar7;
    unaff_RBP[7] = uVar8;
    in_stack_00000040 = *(undefined4 *)(lVar6 + 0x1adc);
    uStack0000000000000044 = *(undefined4 *)(lVar6 + 0x1ae0);
    in_stack_00000048 = *(undefined4 *)(lVar6 + 0x1ae4);
    unaff_RBP[-0x18] = *(undefined4 *)(lVar6 + 0x1ae8);
    unaff_RBP[-0x17] = *(undefined4 *)(lVar6 + 0x1aec);
    unaff_RBP[-0x16] = *(undefined4 *)(lVar6 + 0x1af0);
    unaff_RBP[-0x15] = *(undefined4 *)(lVar6 + 0x1af4);
    unaff_RBP[-0x14] = *(undefined4 *)(lVar6 + 0x1af8);
    unaff_RBP[-0x13] = *(undefined4 *)(lVar6 + 0x1afc);
    if (((bVar1 & 4) == 0) || (iVar2 = 1, *(int *)(unaff_RBX + 0x1c) != iVar7)) {
        iVar2 = iVar7;
    }
    uVar3 = FUN_14020ac20(*(undefined4 *)(unaff_R14 + 0x16c));
    FUN_1405924b0(uVar3,&stack0x00000040,unaff_RBP + -0xc,unaff_RBP + -0x1c);
    lVar6 = DAT_140c65898;
    unaff_RBP[0x5a] = unaff_RBP[-9];
    unaff_RBP[0x56] = unaff_RBP[-0x12];
    unaff_RBP[0x5e] = iVar2;
    *(undefined4 **)(unaff_RBP + 0x58) = unaff_RBP + -0x11;
    unaff_RBP[0x57] = 5;
    unaff_RBP[0x5b] = unaff_RBP[-0x1c];
    unaff_RBP[0x5c] = unaff_RBP[-0x1b];
    unaff_RBP[0x5d] = unaff_RBP[-0x1a];
    *(undefined4 **)(unaff_RBP + 0x54) = unaff_RBP + -0x18;
    FUN_1405e65b0(lVar6 + 0x1698);
    if (iVar2 == 0) {
        FUN_1405a3e60(&local_res20,lVar6 + 0x1698,*(undefined4 *)(unaff_RBX + 8),
                      *(undefined4 *)(unaff_R14 + 0x144));
    }
    else {
        FUN_140591490();
    }
    FUN_1405e65b0(DAT_140c65898 + 0x1698);
    unaff_RBP[0x5f] = (undefined4)local_res20;
    unaff_RBP[0x60] = local_res20._4_4_;
    unaff_RBP[0x61] = uStack0000000000000028;
    unaff_RBP[0x62] = uStack000000000000002c;
    unaff_RBP[99] = uStack0000000000000030;
    unaff_RBP[100] = uStack0000000000000034;
    unaff_RBP[0x65] = uStack0000000000000038;
    FUN_1405918a0(unaff_RBP + -8);
    iVar2 = FUN_1405a0660(&stack0x00000070,unaff_RBP + -8);
    uVar8 = in_stack_00000078;
    lVar6 = *(longlong *)(unaff_RBP + -0x20);
    if (iVar2 == 0) {
        puVar5 = (undefined8 *)*unaff_RSI;
        *(int *)(puVar5 + 1) = iVar7;
        *unaff_RSI = *unaff_RSI + 0x10;
    }
    else {
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),in_stack_00000078);
        puVar5 = *(undefined8 **)(lVar6 + 0x10);
        *puVar5 = *puVar4;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    }
    if (lVar6 != 0) {
        FUN_1400579e0(lVar6,puVar5,uVar8);
    }
    FUN_1407db4f0(*(ulonglong *)(unaff_RBP + 0xd8) ^ (ulonglong)register0x00000020);
    return;
}



undefined8 FUN_14059bb20(void)

{
    int iVar1;

    iVar1 = FUN_1405a1970();
    if (iVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CraftingInterrupted","");
    }
    return 0;
}



undefined8 FUN_14059bb60(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;

    if (*(int *)(DAT_140c65898 + 0x1ad0) == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    else {
        lVar4 = FUN_140245c00();
        if (lVar4 == 0) {
            uVar5 = 0;
        }
        else {
            lVar4 = FUN_140242d40();
            iVar3 = 0;
            uVar5 = 0;
            if (lVar4 != 0) {
                if ((*(uint *)(lVar4 + 0xc) & 4) == 0) {
                    if ((*(uint *)(lVar4 + 0xc) & 8) != 0) {
                        iVar3 = FUN_1405a1df0();
                    }
                }
                else {
                    iVar3 = FUN_1405a1ee0();
                }
                uVar5 = (uint)(iVar3 != 0);
            }
        }
        puVar2 = *(uint **)(param_1 + 0x10);
        puVar2[2] = 1;
        *puVar2 = uVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14059bc00(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    longlong local_res8;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    uVar13 = 0;
    uVar12 = uVar13;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar11 = uVar13;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar11 * 8) + 400) ==
                param_1) {
                uVar12 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar11 * 8);
                break;
            }
            uVar11 = (ulonglong)((int)uVar11 + 1);
        } while (uVar11 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar3 = FUN_1400f26a0(uVar12 + 0x180,1);
    uVar4 = FUN_1405925d0(param_1,2);
    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(param_1);
    local_40 = uVar5;
    lVar8 = FUN_1405be150();
    lVar9 = FUN_140245c00(uVar4);
    if ((lVar8 != 0) && (lVar9 != 0)) {
        uVar14 = *(uint *)(lVar9 + 0x1c);
        if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
            iVar6 = FUN_1405e6300(DAT_140c65898 + 0x1698,0x1b,0,0,0);
            uVar14 = iVar6 + 1;
        }
        lVar8 = *(longlong *)(DAT_140c658f0 + 0x188);
        local_res8 = lVar8;
        lVar9 = *(longlong *)(lVar8 + 8);
        while (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x20) < uVar3) {
                lVar9 = *(longlong *)(lVar9 + 0x18);
            }
            else {
                local_res8 = lVar9;
                lVar9 = *(longlong *)(lVar9 + 0x10);
            }
        }
        if ((local_res8 == lVar8) || (uVar3 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar8;
        }
        if (((local_res8 != lVar8) &&
             (plVar2 = *(longlong **)(local_res8 + 0x28), plVar2 != (longlong *)0x0)) && (plVar2[1] != 0)
                ) {
            do {
                lVar8 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(*plVar2 + uVar13 * 4),0);
                if (((lVar8 != 0) && (lVar8 = FUN_140243a00(*(undefined4 *)(lVar8 + 0x1c0)), lVar8 != 0)) &&
                    ((*(uint *)(lVar8 + 8) < uVar14 || *(uint *)(lVar8 + 8) == uVar14 &&
                                                       (iVar6 = FUN_140415c70(param_1), iVar6 != 0)))) {
                    FUN_1400fb470(&local_48);
                    *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
                    param_1 = local_38;
                }
                uVar13 = uVar13 + 1;
                uVar5 = local_40;
            } while (uVar13 < (ulonglong)plVar2[1]);
        }
    }
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5)
            ;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar10;
    uVar4 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar4,uVar5);
    return 1;
}



undefined8 FUN_14059be70(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong *plVar4;
    uint uVar5;
    int iVar6;
    undefined4 uVar7;
    int iVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    int *piVar12;
    longlong lVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    longlong local_res8;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    uVar15 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar15 * 8) + 400) ==
                param_1) {
                lVar13 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar15 * 8);
                goto LAB_14059bebd;
            }
            uVar15 = (ulonglong)((int)uVar15 + 1);
        } while (uVar15 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar13 = 0;
    LAB_14059bebd:
    uVar5 = FUN_1400f26a0(lVar13 + 0x180,1);
    iVar6 = FUN_1405925d0(param_1,2);
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400578c0(param_1);
    local_60 = uVar7;
    lVar10 = FUN_1405be150();
    lVar11 = FUN_140245c00(iVar6);
    lVar13 = param_1;
    if ((lVar10 != 0) && (lVar11 != 0)) {
        lVar10 = *(longlong *)(DAT_140c658f0 + 0x1a8);
        local_res8 = lVar10;
        lVar3 = *(longlong *)(lVar10 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar5) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar10) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar10;
        }
        if (((local_res8 != lVar10) &&
             (plVar4 = *(longlong **)(local_res8 + 0x28), plVar4 != (longlong *)0x0)) &&
            (uVar15 = 0, plVar4[1] != 0)) {
            do {
                piVar12 = (int *)FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(*plVar4 + uVar15 * 4));
                if (((piVar12 != (int *)0x0) && (iVar8 = FUN_1403ac840(DAT_140c65898 + 0xa0), iVar8 != 0))
                    && ((lVar13 = FUN_140244280(piVar12[0x71]), lVar13 != 0 &&
                                                                (*(int *)(lVar13 + 8) == *(int *)(lVar11 + 0x1c))))) {
                    if (*(int *)(DAT_140c65898 + 0x1ad0) == iVar6) {
                        uVar5 = 0;
                        if (*(uint *)(DAT_140c65898 + 0x1b1c) != 0) {
                            lVar13 = 0x46c;
                            do {
                                if (uVar5 < *(uint *)(DAT_140c65898 + 0x1b1c)) {
                                    iVar8 = *(int *)(lVar13 + DAT_140c65898 + 0x1698);
                                }
                                else {
                                    iVar8 = 0;
                                }
                                if (iVar8 == *piVar12) goto LAB_14059c194;
                                uVar5 = uVar5 + 1;
                                lVar13 = lVar13 + 4;
                            } while (uVar5 < *(uint *)(DAT_140c65898 + 0x1b1c));
                        }
                    }
                    local_48 = &PTR_FUN_140b569f0;
                    local_30 = 1;
                    local_38 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar2 = *(undefined8 **)(param_1 + 0x10);
                    uVar9 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar2 + 1) = 5;
                    *puVar2 = uVar9;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    local_40 = FUN_1400578c0(param_1);
                    puVar14 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_40);
                    puVar2 = *(undefined8 **)(param_1 + 0x10);
                    *puVar2 = *puVar14;
                    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar14 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    iVar8 = FUN_140415c70(param_1);
                    if (iVar8 != 0) {
                        FUN_1400fb540(&local_48);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    }
                    FUN_1400fb1d0(&local_68);
                    FUN_1400579e0(param_1);
                }
                LAB_14059c194:
                uVar15 = uVar15 + 1;
                lVar13 = local_58;
                uVar7 = local_60;
            } while (uVar15 < (ulonglong)plVar4[1]);
        }
    }
    puVar14 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),uVar7);
    puVar2 = *(undefined8 **)(lVar13 + 0x10);
    *puVar2 = *puVar14;
    uVar1 = *(undefined4 *)(puVar14 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar1;
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400579e0(lVar13,uVar1,uVar7);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14059c630(longlong param_1)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    uint *puVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    uint uVar12;
    ulonglong uVar13;
    longlong local_58;
    ulonglong local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    iVar3 = FUN_1405925d0(param_1,1);
    if (iVar3 == 0) {
        iVar3 = *(int *)(DAT_140c65898 + 0x1ad0);
    }
    lVar5 = FUN_140245c00(iVar3);
    if (lVar5 != 0) {
        lVar6 = FUN_1405be150();
        lVar5 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar5 + 0xc),0);
        if (((lVar6 != 0) && (lVar5 != 0)) && ((*(byte *)(lVar6 + 0x10) & 4) != 0)) {
            local_48 = &PTR_FUN_140b569f0;
            local_30 = 1;
            local_38 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar7 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar7;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(param_1);
            lVar6 = DAT_140c65898;
            uVar13 = 0;
            local_50 = 0;
            local_58 = 0;
            FUN_1403d6710(DAT_140c65898 + 0xb8,&local_58);
            FUN_1403d6710(lVar6 + 0xd0,&local_58);
            FUN_1403d6710(lVar6 + 0xe8);
            uVar2 = local_50;
            lVar6 = local_58;
            uVar11 = uVar13;
            if (local_50 != 0) {
                do {
                    lVar8 = FUN_1400b5df0(DAT_140c658f0,
                                          **(undefined4 **)(*(longlong *)(lVar6 + uVar11 * 8) + 0x40),0);
                    if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x148) == 0x8f)) &&
                         ((*(uint *)(lVar8 + 0x160) < *(uint *)(lVar5 + 0x164) ||
                           *(uint *)(lVar8 + 0x160) == *(uint *)(lVar5 + 0x164) &&
                           ((*(uint *)(lVar8 + 0x180) == 0 ||
                             ((*(uint *)(lVar5 + 0x180) & *(uint *)(lVar8 + 0x180)) != 0)))))) &&
                        (iVar3 = FUN_140415d60(param_1), iVar3 != 0)) {
                        FUN_1400fb470(&local_48);
                        *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
                        param_1 = local_38;
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar2);
            }
            uVar4 = FUN_140244ef0();
            if (uVar4 != 0) {
                do {
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c63f58 == 0) && (iVar3 = FUN_140244ce0(), -1 < iVar3)) {
                            puVar9 = (uint *)(**(code **)(*DAT_140c63978 + 0x20))();
                            goto LAB_14059c859;
                        }
                    }
                    else {
                        puVar9 = (uint *)(*DAT_140c63848)(&PTR_u_TradeskillMaterial_140a6dcb0,uVar13,
                                                          DAT_140c63858);
                        LAB_14059c859:
                        if (((((((puVar9 != (uint *)0x0) && (*puVar9 < 0x200)) &&
                                (*(short *)(DAT_140c65898 + 0x148 + (ulonglong)*puVar9 * 2) != 0)) &&
                               ((lVar8 = FUN_1400b5df0(DAT_140c658f0,puVar9[1],0), lVar8 != 0 &&
                                                                                   (*(int *)(lVar8 + 0x148) == 0x8f)))) &&
                              ((*(uint *)(lVar8 + 0x160) < *(uint *)(lVar5 + 0x164) ||
                                *(uint *)(lVar8 + 0x160) == *(uint *)(lVar5 + 0x164) &&
                                ((*(uint *)(lVar8 + 0x180) == 0 ||
                                  ((*(uint *)(lVar5 + 0x180) & *(uint *)(lVar8 + 0x180)) != 0)))))) &&
                             (lVar8 = FUN_1400b5df0(DAT_140c658f0,puVar9[1],0), lVar8 != 0)) &&
                            (iVar3 = FUN_140415e70(param_1), iVar3 != 0)) {
                            FUN_1400fb470(&local_48);
                            *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
                            param_1 = local_38;
                        }
                    }
                    uVar12 = (int)uVar13 + 1;
                    uVar13 = (ulonglong)uVar12;
                } while (uVar12 < uVar4);
            }
            puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar10;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            FUN_1400579e0(param_1);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14059c9e0(longlong param_1)

{
    longlong lVar1;
    bool bVar2;
    bool bVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong local_48;
    ulonglong local_40;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    uVar13 = 0;
    uVar10 = uVar13;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar9 = uVar13;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                param_1) {
                uVar10 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                break;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar8 = *(longlong *)(uVar10 + 400);
    puVar11 = &DAT_140a12138;
    if (*(undefined8 **)(lVar8 + 0x18) < *(undefined8 **)(lVar8 + 0x10)) {
        puVar11 = *(undefined8 **)(lVar8 + 0x18);
    }
    bVar3 = false;
    bVar2 = bVar3;
    if ((*(int *)(puVar11 + 1) != 0) && ((*(int *)(puVar11 + 1) != 1 || (*(int *)puVar11 != 0)))) {
        bVar2 = true;
    }
    puVar6 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x10);
    puVar11 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(lVar8 + 0x10)) {
        puVar11 = puVar6;
    }
    if ((*(int *)(puVar11 + 1) != 0) && ((*(int *)(puVar11 + 1) != 1 || (*(int *)puVar11 != 0)))) {
        bVar3 = true;
    }
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(param_1);
    local_40 = 0;
    local_48 = 0;
    uVar10 = uVar13;
    local_30 = uVar4;
    if ((bVar2) &&
        (FUN_1403d6710(DAT_140c65898 + 0xa0,&local_48), uVar9 = local_40, uVar10 = local_48,
                                                        uVar12 = uVar13, local_40 != 0)) {
        do {
            lVar8 = *(longlong *)(uVar10 + uVar12 * 8);
            lVar1 = *(longlong *)(lVar8 + 0x40);
            if ((lVar1 != 0) &&
                ((((lVar8 = *(longlong *)(lVar8 + 0x48), lVar8 != 0 || (lVar8 = lVar1 + 8, lVar8 != 0)) &&
                   (*(int *)(lVar8 + 0x130) != 0)) && (iVar5 = FUN_140415d60(param_1), iVar5 != 0)))) {
                FUN_1400fb470(&local_38);
                *(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + -0x10;
                param_1 = local_28;
            }
            uVar12 = uVar12 + 1;
            uVar4 = local_30;
        } while (uVar12 < uVar9);
    }
    local_40 = 0;
    local_48 = 0;
    uVar9 = uVar13;
    if ((bVar3) &&
        (FUN_1403d6710(DAT_140c65898 + 0xb8,&local_48), uVar12 = local_40, uVar9 = local_48,
                local_40 != 0)) {
        do {
            lVar8 = *(longlong *)(uVar9 + uVar13 * 8);
            lVar1 = *(longlong *)(lVar8 + 0x40);
            if ((((lVar1 != 0) &&
                  ((lVar8 = *(longlong *)(lVar8 + 0x48), lVar8 != 0 || (lVar8 = lVar1 + 8, lVar8 != 0))))
                 && (*(int *)(lVar8 + 0x130) != 0)) && (iVar5 = FUN_140415d60(param_1), iVar5 != 0)) {
                FUN_1400fb470(&local_38);
                *(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + -0x10;
                param_1 = local_28;
            }
            uVar13 = uVar13 + 1;
            uVar4 = local_30;
        } while (uVar13 < uVar12);
    }
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    *puVar11 = *puVar6;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (uVar9 != 0) {
        (**(code **)(*(longlong *)(uVar9 - 0x10) + 8))(uVar9 - 0x10);
    }
    if (uVar10 != 0) {
        (**(code **)(*(longlong *)(uVar10 - 0x10) + 8))(uVar10 - 0x10);
    }
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14059d130(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    local_20 = uVar2;
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (*(int *)(puVar1 + 1) == 0)) {
        uVar3 = 0;
    }
    else {
        uVar3 = FUN_140056ab0(param_1,1,"Game.ItemData");
    }
    FUN_1405a2a60(param_1,&local_28,uVar3);
    FUN_1405a24f0(param_1,&local_28,uVar3);
    FUN_1405a20d0(param_1,&local_28,uVar3);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



void FUN_14059d660(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
    undefined8 *puVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined8 **ppuVar9;
    uint uVar10;
    longlong lVar11;
    longlong lVar12;
    uint uVar13;
    uint uVar14;
    undefined auStack1592 [32];
    undefined **local_618;
    undefined4 local_610;
    longlong local_608;
    undefined4 local_600;
    undefined **local_5f8;
    undefined4 local_5f0;
    longlong local_5e8;
    undefined4 local_5e0;
    undefined **local_5d8;
    int local_5d0;
    longlong local_5c8;
    undefined **local_5c0;
    undefined4 local_5b8;
    undefined4 uStack1460;
    longlong local_5b0;
    undefined ***local_5a8;
    undefined8 *local_5a0;
    undefined **local_598;
    undefined4 local_590;
    longlong local_588;
    undefined8 *local_580;
    undefined4 local_578;
    undefined **local_570;
    undefined4 local_568;
    longlong local_560;
    undefined4 local_558;
    undefined8 *local_550;
    undefined4 local_548;
    undefined local_540 [8];
    longlong local_538;
    longlong *local_518;
    undefined4 *local_510;
    longlong local_218;
    int local_78;
    undefined8 local_58;
    undefined8 local_50;
    undefined4 local_48;
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong)auStack1592;
    local_580 = param_1;
    FUN_1407e4830();
    puVar4 = (undefined8 *)FUN_1400580e0(param_2,param_3);
    if ((puVar4 == &DAT_140a12138) || (*(int *)(puVar4 + 1) != 5)) goto LAB_14059df24;
    local_600 = 1;
    local_618 = &PTR_FUN_140b569f0;
    local_610 = 0xfffffffe;
    local_608 = param_2;
    puVar4 = (undefined8 *)FUN_1400580e0(param_2,param_3);
    if ((puVar4 != &DAT_140a12138) && (*(int *)(puVar4 + 1) == 5)) {
        FUN_1400579e0(local_608);
        lVar12 = local_608;
        puVar5 = (undefined8 *)FUN_1400580e0(local_608,param_3);
        puVar4 = *(undefined8 **)(lVar12 + 0x10);
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        local_610 = FUN_1400578c0(local_608);
    }
    iVar2 = (*(code *)local_618[1])(&local_618);
    uVar10 = 0;
    if (iVar2 != 0) {
        lVar6 = local_608;
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_608 + 0x20) + 0xa0),local_610);
        lVar12 = local_608;
        puVar4 = *(undefined8 **)(lVar6 + 0x10);
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        lVar6 = FUN_14018f0e0(&local_5c0,L"nApSpSplitDelta");
        if (*(longlong *)(lVar6 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar11) != '\0');
            FUN_140058710(lVar12);
        }
        if (CONCAT44(uStack1460,local_5b8) != 0) {
            FUN_14018b900(CONCAT44(uStack1460,local_5b8),0);
        }
        lVar12 = *(longlong *)(local_608 + 0x10) + -0x10;
        FUN_14005e8e0(local_608,*(longlong *)(local_608 + 0x10) + -0x20,lVar12,lVar12);
        lVar12 = *(longlong *)(local_608 + 0x10);
        ppuVar9 = (undefined8 **)(lVar12 + -0x10);
        if ((ppuVar9 == (undefined8 **)&DAT_140a12138) || (*(int *)(lVar12 + -8) != 3)) {
            *(longlong *)(local_608 + 0x10) = lVar12 + -0x20;
        }
        else {
            if (*(int *)(lVar12 + -8) != 3) {
                if ((*(int *)(lVar12 + -8) != 4) ||
                    (iVar2 = FUN_14005ac80(*ppuVar9 + 4,&local_5a0), iVar2 == 0)) {
                    *(longlong *)(local_608 + 0x10) = *(longlong *)(local_608 + 0x10) + -0x20;
                    *(undefined4 *)param_1 = 0;
                    goto LAB_14059d875;
                }
                local_548 = 3;
                ppuVar9 = &local_550;
                local_550 = local_5a0;
            }
            puVar4 = *ppuVar9;
            *(longlong *)(local_608 + 0x10) = *(longlong *)(local_608 + 0x10) + -0x20;
            *(int *)param_1 = (int)(double)puVar4;
        }
    }
    LAB_14059d875:
    local_598 = &PTR_FUN_140b56a08;
    local_588 = 0;
    local_590 = 0xfffffffe;
    iVar2 = (*(code *)local_618[1])(&local_618);
    if (iVar2 != 0) {
        lVar6 = local_608;
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_608 + 0x20) + 0xa0),local_610);
        lVar12 = local_608;
        puVar4 = *(undefined8 **)(lVar6 + 0x10);
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        lVar6 = FUN_14018f0e0(&local_5c0,L"itemPowerCore");
        if (*(longlong *)(lVar6 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar11) != '\0');
            FUN_140058710(lVar12);
        }
        if (CONCAT44(uStack1460,local_5b8) != 0) {
            FUN_14018b900(CONCAT44(uStack1460,local_5b8),0);
        }
        lVar12 = *(longlong *)(local_608 + 0x10) + -0x10;
        FUN_14005e8e0(local_608,*(longlong *)(local_608 + 0x10) + -0x20,lVar12,lVar12);
        local_588 = local_608;
        (*(code *)local_598[2])(&local_598,0xffffffff);
        *(longlong *)(local_608 + 0x10) = *(longlong *)(local_608 + 0x10) + -0x20;
        FUN_14040fae0(&local_518);
        lVar12 = local_588;
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_588 + 0x20) + 0xa0),local_590);
        puVar4 = *(undefined8 **)(lVar12 + 0x10);
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        FUN_140410680(&local_518,param_2);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
        if ((local_78 != 0) && (local_510 != (undefined4 *)0x0)) {
            *(undefined4 *)((longlong)param_1 + 0x24) = *local_510;
        }
        if (local_518 != (longlong *)0x0) {
            (**(code **)(*local_518 + 8))();
            local_518 = (longlong *)0x0;
        }
        if (local_218 != 0) {
            FUN_14018b900(local_218,0);
        }
    }
    local_550 = param_1 + 3;
    *local_550 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    *(undefined4 *)(param_1 + 4) = 1;
    local_5d8 = &PTR_FUN_140b56a08;
    local_5c8 = 0;
    local_5d0 = -2;
    iVar2 = (*(code *)local_618[1])(&local_618);
    if (iVar2 != 0) {
        lVar6 = local_608;
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_608 + 0x20) + 0xa0),local_610);
        lVar12 = local_608;
        puVar4 = *(undefined8 **)(lVar6 + 0x10);
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        lVar6 = FUN_14018f0e0(&local_5c0,L"arStats");
        if (*(longlong *)(lVar6 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar11) != '\0');
            FUN_140058710(lVar12);
        }
        if (CONCAT44(uStack1460,local_5b8) != 0) {
            FUN_14018b900(CONCAT44(uStack1460,local_5b8),0);
        }
        FUN_14005e8e0();
        local_5c8 = local_608;
        (*(code *)local_5d8[2])(&local_5d8);
        *(longlong *)(local_608 + 0x10) = *(longlong *)(local_608 + 0x10) + -0x20;
        local_570 = &PTR_FUN_140b569f0;
        local_560 = local_5c8;
        local_558 = 1;
        local_568 = 0xfffffffe;
        if ((local_5c8 != 0) && (local_5d0 != -2)) {
            lVar12 = local_5c8;
            puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_5c8 + 0x20) + 0xa0));
            puVar4 = *(undefined8 **)(lVar12 + 0x10);
            *puVar4 = *puVar5;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
            *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
            puVar4 = (undefined8 *)(*(longlong *)(local_5c8 + 0x10) + -0x10);
            if (puVar4 == &DAT_140a12138) {
                iVar2 = -1;
            }
            else {
                iVar2 = *(int *)(*(longlong *)(local_5c8 + 0x10) + -8);
            }
            *(undefined8 **)(local_5c8 + 0x10) = puVar4;
            if (iVar2 == 5) {
                lVar12 = local_5c8;
                puVar5 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_5c8 + 0x20) + 0xa0),local_5d0);
                puVar4 = *(undefined8 **)(lVar12 + 0x10);
                *puVar4 = *puVar5;
                *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
                local_568 = FUN_1400578c0(local_560);
            }
        }
        local_5c0 = &PTR_FUN_140b56a08;
        local_5b8 = 0xfffffffe;
        local_5a8 = &local_570;
        *(undefined4 *)(*(longlong *)(local_560 + 0x10) + 8) = 0;
        *(longlong *)(local_560 + 0x10) = *(longlong *)(local_560 + 0x10) + 0x10;
        local_5b0 = local_560;
        FUN_1400fa090(&local_5c0,0xffffffff);
        *(longlong *)(local_560 + 0x10) = *(longlong *)(local_560 + 0x10) + -0x10;
        puVar5 = (undefined8 *)((longlong)local_580 - (longlong)&local_58);
        puVar4 = &local_58;
        uVar14 = uVar10;
        uVar13 = uVar10;
        local_580 = puVar5;
        do {
            iVar2 = (*(code *)(*local_5a8)[1])();
            if ((iVar2 == 0) || (iVar2 = FUN_1400fcba0(&local_5c0), iVar2 == 0)) break;
            local_5f8 = &PTR_FUN_140b569f0;
            local_5e0 = 1;
            local_5f0 = 0xfffffffe;
            local_5e8 = param_2;
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar1 = *(undefined8 **)(param_2 + 0x10);
            uVar7 = FUN_14005c1b0(param_2,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar7;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            local_5f0 = FUN_1400578c0(param_2);
            iVar2 = FUN_1400fc6c0(&local_5c0);
            if (-1 < iVar2) {
                uVar14 = uVar14 + 1;
                iVar2 = (*(code *)local_5f8[1])(&local_5f8);
                if (iVar2 != 0) {
                    lVar6 = local_5e8;
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_5e8 + 0x20) + 0xa0),local_5f0);
                    lVar12 = local_5e8;
                    puVar1 = *(undefined8 **)(lVar6 + 0x10);
                    *puVar1 = *puVar8;
                    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    lVar6 = FUN_14018f0e0(local_540,L"nChargeDelta");
                    if (*(longlong *)(lVar6 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
                        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
                    }
                    else {
                        lVar11 = -1;
                        do {
                            lVar11 = lVar11 + 1;
                        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar11) != '\0');
                        FUN_140058710(lVar12);
                    }
                    if (local_538 != 0) {
                        FUN_14018b900(local_538,0);
                    }
                    lVar12 = *(longlong *)(local_5e8 + 0x10) + -0x10;
                    FUN_14005e8e0(local_5e8,*(longlong *)(local_5e8 + 0x10) + -0x20,lVar12,lVar12);
                    lVar12 = *(longlong *)(local_5e8 + 0x10);
                    ppuVar9 = (undefined8 **)(lVar12 + -0x10);
                    if ((ppuVar9 == (undefined8 **)&DAT_140a12138) || (*(int *)(lVar12 + -8) != 3)) {
                        *(longlong *)(local_5e8 + 0x10) = lVar12 + -0x20;
                    }
                    else {
                        if (*(int *)(lVar12 + -8) != 3) {
                            if ((*(int *)(lVar12 + -8) != 4) ||
                                (iVar2 = FUN_14005ac80(*ppuVar9 + 4,&local_5a0), iVar2 == 0)) {
                                *(longlong *)(local_5e8 + 0x10) = *(longlong *)(local_5e8 + 0x10) + -0x20;
                                *(undefined4 *)((longlong)((longlong)puVar5 + 4) + (longlong)puVar4) = 0;
                                goto LAB_14059dde1;
                            }
                            local_578 = 3;
                            ppuVar9 = &local_580;
                            local_580 = local_5a0;
                        }
                        puVar1 = *ppuVar9;
                        *(longlong *)(local_5e8 + 0x10) = *(longlong *)(local_5e8 + 0x10) + -0x20;
                        *(int *)((longlong)((longlong)puVar5 + 4) + (longlong)puVar4) = (int)(double)puVar1;
                    }
                }
                LAB_14059dde1:
                iVar2 = FUN_1400fb720(&local_5f8);
                if (-1 < iVar2) {
                    uVar3 = FUN_1400584e0(local_5e8);
                    *(longlong *)(local_5e8 + 0x10) = *(longlong *)(local_5e8 + 0x10) + -0x20;
                    *(undefined4 *)puVar4 = uVar3;
                }
            }
            local_5f8 = &PTR_FUN_140b56a08;
            if (local_5e8 != 0) {
                FUN_1400579e0();
            }
            uVar13 = uVar13 + 1;
            puVar4 = (undefined8 *)((longlong)puVar4 + 4);
        } while (uVar13 < 5);
        if (5 < uVar14) {
            uVar14 = 5;
        }
        if (uVar14 != 0) {
            puVar4 = &local_58;
            puVar5 = local_550;
            do {
                if (uVar10 < 6) {
                    *(char *)puVar5 = *(char *)puVar4 + '\x01';
                }
                uVar10 = uVar10 + 1;
                puVar4 = (undefined8 *)((longlong)puVar4 + 4);
                puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            } while (uVar10 < uVar14);
        }
        local_5c0 = &PTR_FUN_140b56a08;
        if (local_5b0 != 0) {
            FUN_1400579e0();
        }
        local_570 = &PTR_FUN_140b56a08;
        if (local_560 != 0) {
            FUN_1400579e0();
        }
    }
    local_5d8 = &PTR_FUN_140b56a08;
    if (local_5c8 != 0) {
        FUN_1400579e0();
    }
    local_598 = &PTR_FUN_140b56a08;
    if (local_588 != 0) {
        FUN_1400579e0();
    }
    local_618 = &PTR_FUN_140b56a08;
    if (local_608 != 0) {
        FUN_1400579e0();
    }
    LAB_14059df24:
    FUN_1407db4f0(local_40 ^ (ulonglong)auStack1592);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14059e000(uint **param_1,longlong param_2,int param_3)

{
    uint uVar1;
    undefined4 uVar2;
    uint *puVar3;
    byte bVar4;
    int iVar5;
    undefined4 uVar6;
    undefined8 *puVar7;
    undefined2 *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined8 uVar11;
    longlong lVar12;
    longlong *plVar13;
    longlong lVar14;
    ulonglong uVar15;
    undefined8 *puVar16;
    undefined **local_238;
    undefined4 local_230;
    undefined4 uStack556;
    longlong local_228;
    undefined4 local_220;
    undefined local_218 [8];
    longlong local_210;
    undefined **local_1f8 [24];
    undefined local_138 [16];
    undefined2 *local_128;
    undefined **local_118 [24];
    undefined local_58 [16];
    undefined2 *local_48;

    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)**param_1;
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar16 = *(undefined8 **)(lVar12 + 0x10);
    *puVar16 = *puVar7;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar16,L"nSchematicId",uVar15 & 0xffffffff);
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    FUN_1400b7210(local_118,&DAT_140b1fe58);
    puVar16 = (undefined8 *)0x0;
    local_118[0] = &PTR_FUN_140b69230;
    local_58 = ZEXT816(0);
    local_48 = (undefined2 *)0x0;
    puVar8 = (undefined2 *)FUN_14018b280(0x10);
    local_48 = puVar8 + 8;
    local_58 = CONCAT88(puVar8,puVar8);
    if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
    }
    puVar9 = (undefined8 *)FUN_14018b280(0x60);
    puVar7 = puVar16;
    if (puVar9 != (undefined8 *)0x0) {
        uVar1 = param_1[1][0x77];
        FUN_1400b6390(puVar9);
        *puVar9 = &PTR_FUN_140b69170;
        *(undefined4 *)(puVar9 + 0xb) = 1;
        FUN_1400b6d70(puVar9,L"name",uVar1);
        puVar7 = puVar9;
    }
    FUN_1400b7480(local_118,puVar7);
    lVar10 = FUN_1400b7660(local_118);
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar11 = *(undefined8 *)(lVar10 + 8);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar7,L"strName",uVar11);
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)param_1[1][0x51];
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"eItemType",uVar15 & 0xffffffff);
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)(*param_1)[7];
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"eTier",uVar15 & 0xffffffff);
    lVar12 = DAT_140c65898;
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    iVar5 = FUN_1405e5e70(lVar12 + 0x1698,**param_1);
    lVar12 = *(longlong *)(param_2 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    lVar10 = FUN_14018f0e0(&local_238,L"bIsKnown");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack556,local_230) != 0) {
        FUN_14018b900(CONCAT44(uStack556,local_230),0);
    }
    puVar3 = *(uint **)(lVar12 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar5 != 0);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar1 = (*param_1)[8];
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    lVar10 = FUN_14018f0e0(&local_238,L"bIsOneUse");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack556,local_230) != 0) {
        FUN_14018b900(CONCAT44(uStack556,local_230),0);
    }
    puVar3 = *(uint **)(lVar12 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)((uVar1 >> 2 & 1) != 0);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    if (((*param_1)[7] != 0) || (bVar4 = 1, (*(byte *)(*param_1 + 8) & 4) == 0)) {
        bVar4 = 0;
    }
    lVar12 = *(longlong *)(param_2 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    lVar10 = FUN_14018f0e0(&local_238,L"bIsUniversal");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack556,local_230) != 0) {
        FUN_14018b900(CONCAT44(uStack556,local_230),0);
    }
    puVar3 = *(uint **)(lVar12 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar4;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar13 = *plVar13 + -0x10;
    lVar12 = FUN_14020a3a0(param_1[1][0x51]);
    if (lVar12 != 0) {
        uVar11 = FUN_14034bdd0();
        lVar12 = *(longlong *)(param_2 + 0x10);
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar7 = *(undefined8 **)(lVar12 + 0x10);
        *puVar7 = *puVar9;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar7,L"strItemTypeName",uVar11);
        plVar13 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar13 = *plVar13 + -0x10;
    }
    lVar12 = *(longlong *)(param_2 + 0x10);
    local_220 = 1;
    local_238 = &PTR_FUN_140b569f0;
    local_228 = lVar12;
    if (*(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar12);
    }
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    uVar11 = FUN_14005c1b0(lVar12,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar11;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar6 = FUN_1400578c0(lVar12);
    local_230 = uVar6;
    plVar13 = (longlong *)FUN_1405be260(*param_1,**param_1);
    if ((plVar13 != (longlong *)0x0) && (plVar13[1] != 0)) {
        do {
            puVar3 = *(uint **)(*plVar13 + (longlong)puVar16 * 8);
            iVar5 = FUN_1405e5e70(DAT_140c65898 + 0x1698,*puVar3);
            if (((param_3 != 0) || (iVar5 != 0)) &&
                (lVar12 = FUN_1400b5df0(DAT_140c658f0,puVar3[3],0), lVar12 != 0)) {
                lVar10 = *(longlong *)(param_2 + 0x10);
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                puVar7 = *(undefined8 **)(lVar10 + 0x10);
                uVar11 = FUN_14005c1b0(lVar10,0,0);
                *(undefined4 *)(puVar7 + 1) = 5;
                *puVar7 = uVar11;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar6 = FUN_1400578c0(lVar10);
                uVar15 = (ulonglong)*puVar3;
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar6);
                puVar7 = *(undefined8 **)(lVar10 + 0x10);
                *puVar7 = *puVar9;
                *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(lVar10,puVar7,L"nSchematicId",uVar15 & 0xffffffff);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                FUN_1400b7210(local_1f8,&DAT_140b200b0);
                local_128 = (undefined2 *)0x0;
                local_138 = ZEXT816(0);
                local_1f8[0] = &PTR_FUN_140b69230;
                puVar8 = (undefined2 *)FUN_14018b280(0x10,0);
                local_128 = puVar8 + 8;
                local_138 = CONCAT88(puVar8,puVar8);
                if (puVar8 != (undefined2 *)0x0) {
                    *puVar8 = 0;
                }
                puVar7 = (undefined8 *)FUN_14018b280(0x60);
                if (puVar7 == (undefined8 *)0x0) {
                    puVar7 = (undefined8 *)0x0;
                }
                else {
                    uVar2 = *(undefined4 *)(lVar12 + 0x1dc);
                    FUN_1400b6390(puVar7);
                    *puVar7 = &PTR_FUN_140b69170;
                    *(undefined4 *)(puVar7 + 0xb) = 1;
                    FUN_1400b6d70(puVar7,L"name",uVar2);
                }
                FUN_1400b7480(local_1f8,puVar7);
                lVar12 = FUN_1400b7660(local_1f8);
                uVar11 = *(undefined8 *)(lVar12 + 8);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar6);
                puVar7 = *(undefined8 **)(lVar10 + 0x10);
                *puVar7 = *puVar9;
                *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f0870(lVar10,puVar7,L"strName",uVar11);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                puVar7 = *(undefined8 **)(lVar10 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar6);
                *puVar7 = *puVar9;
                *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar12 = FUN_14018f0e0(local_218,L"bIsKnown");
                if (*(longlong *)(lVar12 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *)(*(longlong *)(lVar12 + 8) + lVar14) != '\0');
                    FUN_140058710(lVar10);
                }
                if (local_210 != 0) {
                    FUN_14018b900(local_210,0);
                }
                puVar3 = *(uint **)(lVar10 + 0x10);
                puVar3[2] = 1;
                *puVar3 = (uint)(iVar5 != 0);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10);
                *(longlong *)(lVar10 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                FUN_1400fb1d0(&local_238);
                if (local_138._0_8_ != 0) {
                    FUN_14018b900();
                }
                FUN_1400b7390(local_1f8);
                FUN_1400579e0(lVar10);
            }
            puVar16 = (undefined8 *)((longlong)puVar16 + 1);
            lVar12 = local_228;
            uVar6 = local_230;
        } while (puVar16 < (undefined8 *)plVar13[1]);
    }
    FUN_1400fb2a0(param_2,L"tSubRecipes",uVar6);
    if (lVar12 != 0) {
        FUN_1400579e0(lVar12);
    }
    if (local_58._0_8_ != 0) {
        FUN_14018b900(local_58._0_8_,0);
    }
    FUN_1400b7390(local_118);
    return 0;
}



void FUN_14059e900(longlong param_1,longlong param_2,int param_3,int param_4)

{
    longlong *plVar1;
    longlong local_18;
    longlong local_10;

    if ((*(int *)(param_1 + 0x1c) != 0) && ((param_4 == 0 || (*(int *)(param_1 + 0x1c) == param_4))))
    {
        local_10 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0xc),0);
        if ((local_10 != 0) && ((param_3 == 0 || (*(int *)(local_10 + 0x148) == param_3)))) {
            plVar1 = *(longlong **)(param_2 + 0x10);
            if (plVar1 != *(longlong **)(param_2 + 0x18)) {
                if (plVar1 != (longlong *)0x0) {
                    *plVar1 = param_1;
                    plVar1[1] = local_10;
                }
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                return;
            }
            local_18 = param_1;
            FUN_1400b4c50(param_2,plVar1,&local_18);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14059e9a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                   longlong param_5,longlong param_6)

{
    longlong *plVar1;
    undefined4 uVar2;
    double *pdVar3;
    uint *puVar4;
    byte bVar5;
    int iVar6;
    uint uVar7;
    undefined4 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined8 uVar11;
    longlong lVar12;
    undefined2 *puVar13;
    longlong lVar14;
    uint *puVar15;
    ulonglong uVar16;
    undefined8 *puVar17;
    longlong lVar18;
    ulonglong uVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    ulonglong local_res20;
    undefined **local_1e8;
    undefined4 local_1e0;
    undefined4 uStack476;
    longlong local_1d8;
    undefined4 local_1d0;
    undefined local_1c8 [8];
    longlong local_1c0;
    undefined local_1a8 [16];
    longlong *local_198;
    undefined **local_190;
    undefined4 local_188;
    longlong local_180;
    undefined4 local_178;
    undefined **local_168 [24];
    undefined local_a8 [16];
    undefined2 *local_98;

    lVar10 = DAT_140c65898;
    fVar20 = (float)FUN_1405e6140(DAT_140c65898 + 0x1698,0x11,*(undefined4 *)(param_3 + 8),
                                  *(undefined4 *)(param_4 + 0x144));
    lVar12 = *(longlong *)(param_1 + 0x10);
    fVar20 = fVar20 * *(float *)(param_3 + 0x58) * *(float *)(lVar10 + 0x1b28);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    *puVar17 = *puVar9;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    lVar10 = FUN_14018f0e0(&local_1e8,L"fRadius");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack476,local_1e0) != 0) {
        FUN_14018b900(CONCAT44(uStack476,local_1e0),0);
    }
    pdVar3 = *(double **)(lVar12 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar20;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    lVar12 = DAT_140c65898;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    iVar6 = FUN_1403d2140(lVar12,0x16);
    if (iVar6 == 0) {
        iVar6 = FUN_1403d2140(lVar12,0x15);
        uVar7 = (uint)(iVar6 != 0);
    }
    else {
        uVar7 = 2;
    }
    lVar12 = FUN_140200220(0x501);
    fVar20 = 0.0;
    if (lVar12 == 0) {
        fVar22 = 0.0;
    }
    else {
        fVar22 = *(float *)(lVar12 + 0x18 + (longlong)(int)uVar7 * 4);
    }
    lVar12 = *(longlong *)(param_1 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    *puVar17 = *puVar9;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    lVar10 = FUN_14018f0e0(&local_1e8,L"fBonusSignatureRadius");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack476,local_1e0) != 0) {
        FUN_14018b900(CONCAT44(uStack476,local_1e0),0);
    }
    pdVar3 = *(double **)(lVar12 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar22;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    lVar12 = DAT_140c65898;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar7 = FUN_1403d2140(lVar12,0x20);
    lVar12 = *(longlong *)(param_1 + 0x10);
    fVar22 = (float)(ulonglong)uVar7 * 0.01;
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    *puVar17 = *puVar9;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    lVar10 = FUN_14018f0e0(&local_1e8,L"fBonusLoyaltyRadius");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack476,local_1e0) != 0) {
        FUN_14018b900(CONCAT44(uStack476,local_1e0),0);
    }
    pdVar3 = *(double **)(lVar12 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar22;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    fVar22 = *(float *)(param_3 + 0x50);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    *puVar17 = *puVar9;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    lVar10 = FUN_14018f0e0(&local_1e8,L"fVectorX");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack476,local_1e0) != 0) {
        FUN_14018b900(CONCAT44(uStack476,local_1e0),0);
    }
    pdVar3 = *(double **)(lVar12 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar22;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20,
                  *(longlong *)(lVar12 + 0x10) + -0x10);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    fVar22 = *(float *)(param_3 + 0x54);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    *puVar17 = *puVar9;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    lVar10 = FUN_14018f0e0(&local_1e8,L"fVectorY");
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x10) + 8) = 0;
        *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(lVar12);
    }
    if (CONCAT44(uStack476,local_1e0) != 0) {
        FUN_14018b900(CONCAT44(uStack476,local_1e0),0);
    }
    pdVar3 = *(double **)(lVar12 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar22;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar11 = FUN_1400580e0(lVar12,0xfffffffd);
    FUN_14005ea50(lVar12,uVar11,*(longlong *)(lVar12 + 0x10) + -0x20);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if ((((param_5 != 0) &&
          (uVar7 = *(uint *)(param_3 + 0x1c),
                  uVar7 < *(uint *)(param_5 + 0xc) || uVar7 == *(uint *)(param_5 + 0xc))) && (uVar7 != 0)) &&
        (param_5 + 0x20 + (ulonglong)(uVar7 - 1) * 0x30 != 0)) {
        FUN_1405e6300(DAT_140c65898 + 0x1698,0x1a,*(undefined4 *)(param_3 + 8),
                      *(undefined4 *)(param_4 + 0x144),0);
    }
    lVar12 = *(longlong *)(param_1 + 0x10);
    puVar9 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    *puVar17 = *puVar9;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar17,L"nMaxAdditives");
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_1 + 0x10);
    local_190 = &PTR_FUN_140b569f0;
    local_178 = 1;
    local_180 = lVar12;
    if (*(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar12 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar12);
    }
    puVar17 = *(undefined8 **)(lVar12 + 0x10);
    uVar11 = FUN_14005c1b0(lVar12,0,0);
    *(undefined4 *)(puVar17 + 1) = 5;
    *puVar17 = uVar11;
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    uVar8 = FUN_1400578c0(lVar12);
    local_188 = uVar8;
    local_198 = (longlong *)FUN_1405be260();
    if ((local_198 != (longlong *)0x0) && (local_res20 = 0, local_198[1] != 0)) {
        fVar22 = 90.0;
        fVar24 = 45.0;
        do {
            uVar19 = 0;
            puVar4 = *(uint **)(*local_198 + local_res20 * 8);
            if ((puVar4 != (uint *)0x0) &&
                (lVar12 = FUN_1400b5df0(DAT_140c658f0,puVar4[3],0), lVar12 != 0)) {
                if ((param_6 != 0) && (*(ulonglong *)(param_6 + 0x48) != 0)) {
                    puVar15 = *(uint **)(param_6 + 0x40);
                    uVar16 = uVar19;
                    do {
                        if (*puVar15 == *puVar4) {
                            uVar19 = 1;
                            break;
                        }
                        uVar16 = uVar16 + 1;
                        puVar15 = puVar15 + 1;
                    } while (uVar16 < *(ulonglong *)(param_6 + 0x48));
                }
                lVar10 = *(longlong *)(param_1 + 0x10);
                local_1e8 = &PTR_FUN_140b569f0;
                local_1d0 = 1;
                local_1d8 = lVar10;
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                uVar11 = FUN_14005c1b0(lVar10,0,0);
                *(undefined4 *)(puVar17 + 1) = 5;
                *puVar17 = uVar11;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar8 = FUN_1400578c0(lVar10);
                uVar16 = (ulonglong)*puVar4;
                local_1e0 = uVar8;
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(lVar10,puVar17,L"nSchematicId",uVar16 & 0xffffffff);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                FUN_1400b7210(local_168,&DAT_140b1ff80);
                puVar17 = (undefined8 *)0x0;
                local_98 = (undefined2 *)0x0;
                local_a8 = ZEXT816(0);
                local_168[0] = &PTR_FUN_140b69230;
                puVar13 = (undefined2 *)FUN_14018b280(0x10,0);
                local_98 = puVar13 + 8;
                local_a8 = CONCAT88(puVar13,puVar13);
                if (puVar13 != (undefined2 *)0x0) {
                    *puVar13 = 0;
                }
                puVar9 = (undefined8 *)FUN_14018b280(0x60);
                if (puVar9 != (undefined8 *)0x0) {
                    uVar2 = *(undefined4 *)(lVar12 + 0x1dc);
                    FUN_1400b6390(puVar9);
                    *puVar9 = &PTR_FUN_140b69170;
                    *(undefined4 *)(puVar9 + 0xb) = 1;
                    FUN_1400b6d70(puVar9,L"name",uVar2);
                    puVar17 = puVar9;
                }
                bVar5 = 0;
                FUN_1400b7480(local_168,puVar17);
                lVar14 = FUN_1400b7660(local_168);
                uVar11 = *(undefined8 *)(lVar14 + 8);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f0870(lVar10,puVar17,L"strName",uVar11);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar14 = FUN_14018f0e0(local_1c8,L"bIsKnown");
                if (*(longlong *)(lVar14 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar18 = -1;
                    do {
                        lVar18 = lVar18 + 1;
                    } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar18) != '\0');
                    FUN_140058710(lVar10);
                }
                if (local_1c0 != 0) {
                    FUN_14018b900(local_1c0,0);
                }
                puVar15 = *(uint **)(lVar10 + 0x10);
                puVar15[2] = 1;
                *puVar15 = (uint)((int)uVar19 != 0);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar11 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar11,*(longlong *)(lVar10 + 0x10) + -0x20,
                              *(longlong *)(lVar10 + 0x10) + -0x10);
                *(longlong *)(lVar10 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                local_1a8 = CONCAT412(fVar20,CONCAT48(fVar20,*(undefined8 *)(puVar4 + 0x14)));
                if ((*(byte *)(puVar4 + 8) & 2) != 0) {
                    if ((int)uVar19 == 0) {
                        fVar21 = (float)puVar4[0x1e];
                        bVar5 = 1;
                        uVar11 = *(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0);
                        if (fVar21 <= fVar20) {
                            fVar21 = (float)(ulonglong)puVar4[0x1c] * fVar22 + fVar24;
                            puVar9 = (undefined8 *)FUN_14005c3c0(uVar11,uVar8);
                            *puVar17 = *puVar9;
                            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                            lVar14 = FUN_14018f0e0(local_1c8,L"fDiscoveryAngle");
                            if (*(longlong *)(lVar14 + 8) != 0) {
                                lVar18 = -1;
                                do {
                                    lVar18 = lVar18 + 1;
                                } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar18) != '\0');
                                goto LAB_14059f49a;
                            }
                            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        }
                        else {
                            puVar9 = (undefined8 *)FUN_14005c3c0(uVar11,uVar8);
                            *puVar17 = *puVar9;
                            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                            lVar14 = FUN_14018f0e0(local_1c8,L"fDiscoveryAngle");
                            if (*(longlong *)(lVar14 + 8) == 0) {
                                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                            }
                            else {
                                lVar18 = -1;
                                do {
                                    lVar18 = lVar18 + 1;
                                } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar18) != '\0');
                                LAB_14059f49a:
                                FUN_140058710(lVar10);
                            }
                        }
                        if (local_1c0 != 0) {
                            FUN_14018b900(local_1c0,0);
                        }
                        pdVar3 = *(double **)(lVar10 + 0x10);
                        *pdVar3 = (double)fVar21;
                        *(undefined4 *)(pdVar3 + 1) = 3;
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        uVar11 = FUN_1400580e0(lVar10,0xfffffffd);
                        FUN_14005ea50(lVar10,uVar11,*(longlong *)(lVar10 + 0x10) + -0x20,
                                      *(longlong *)(lVar10 + 0x10) + -0x10);
                        *(longlong *)(lVar10 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                        lVar14 = DAT_140c65898;
                        fVar21 = (float)FUN_1405e6140(DAT_140c65898 + 0x1698,0x14,puVar4[2],
                                                      *(undefined4 *)(lVar12 + 0x144));
                        fVar21 = fVar21 * (float)puVar4[0x16] * *(float *)(lVar14 + 0x1b30);
                        fVar23 = (float)puVar4[0x14] - fVar21;
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                        puVar17 = *(undefined8 **)(lVar10 + 0x10);
                        *puVar17 = *puVar9;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        lVar14 = FUN_14018f0e0(local_1c8,L"fDiscoveryDistanceMin");
                        if (*(longlong *)(lVar14 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        }
                        else {
                            lVar18 = -1;
                            do {
                                lVar18 = lVar18 + 1;
                            } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar18) != '\0');
                            FUN_140058710(lVar10);
                        }
                        if (local_1c0 != 0) {
                            FUN_14018b900(local_1c0,0);
                        }
                        pdVar3 = *(double **)(lVar10 + 0x10);
                        *(undefined4 *)(pdVar3 + 1) = 3;
                        *pdVar3 = (double)fVar23;
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        uVar11 = FUN_1400580e0(lVar10,0xfffffffd);
                        FUN_14005ea50(lVar10,uVar11,*(longlong *)(lVar10 + 0x10) + -0x20,
                                      *(longlong *)(lVar10 + 0x10) + -0x10);
                        *(longlong *)(lVar10 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                        fVar21 = fVar21 + (float)puVar4[0x15];
                        puVar17 = *(undefined8 **)(lVar10 + 0x10);
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                        *puVar17 = *puVar9;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        lVar14 = FUN_14018f0e0(local_1c8,L"fDiscoveryDistanceMax");
                        if (*(longlong *)(lVar14 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        }
                        else {
                            lVar18 = -1;
                            do {
                                lVar18 = lVar18 + 1;
                            } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar18) != '\0');
                            FUN_140058710(lVar10);
                        }
                        if (local_1c0 != 0) {
                            FUN_14018b900(local_1c0,0);
                        }
                        pdVar3 = *(double **)(lVar10 + 0x10);
                        *(undefined4 *)(pdVar3 + 1) = 3;
                        *pdVar3 = (double)fVar21;
                        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                        uVar11 = FUN_1400580e0(lVar10,0xfffffffd);
                        FUN_14005ea50(lVar10,uVar11,*(longlong *)(lVar10 + 0x10) + -0x20,
                                      *(longlong *)(lVar10 + 0x10) + -0x10);
                        *(longlong *)(lVar10 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                    }
                    else {
                        FUN_1405e5f20(DAT_140c65898 + 0x1698,*puVar4);
                    }
                }
                FUN_1405e6140(DAT_140c65898 + 0x1698,0x11,puVar4[2],*(undefined4 *)(lVar12 + 0x144));
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar14 = FUN_14018f0e0(local_1c8,L"bIsUndiscovered");
                if (*(longlong *)(lVar14 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar18 = -1;
                    do {
                        lVar18 = lVar18 + 1;
                    } while (*(char *)(*(longlong *)(lVar14 + 8) + lVar18) != '\0');
                    FUN_140058710(lVar10);
                }
                if (local_1c0 != 0) {
                    FUN_14018b900(local_1c0,0);
                }
                puVar15 = *(uint **)(lVar10 + 0x10);
                puVar15[2] = 1;
                *puVar15 = (uint)bVar5;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar11 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar11,*(longlong *)(lVar10 + 0x10) + -0x20);
                *(longlong *)(lVar10 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f07b0(lVar10);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f07b0(lVar10);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f07b0(lVar10);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                iVar6 = FUN_140415c70(lVar10,lVar12);
                if (iVar6 != 0) {
                    FUN_1400fb540(&local_1e8,L"itemOutput");
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                }
                FUN_1405e6140(DAT_140c65898 + 0x1698,10,puVar4[2]);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar8);
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(lVar10);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                FUN_1400fb1d0(&local_190);
                if (local_a8._0_8_ != 0) {
                    FUN_14018b900();
                }
                FUN_1400b7390(local_168);
                FUN_1400579e0(lVar10);
            }
            local_res20 = local_res20 + 1;
            lVar12 = local_180;
            uVar8 = local_188;
        } while (local_res20 < (ulonglong)local_198[1]);
    }
    FUN_1400fb2a0(param_1,L"tSubRecipes",uVar8);
    if (lVar12 != 0) {
        FUN_1400579e0(lVar12);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14059f9c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
    double *pdVar1;
    int *piVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    uint uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    uint uVar12;
    int *piVar13;
    float fVar14;
    float fVar15;
    longlong local_c8;
    undefined8 local_c0;
    longlong local_b8;
    undefined **local_b0;
    undefined4 local_a8;
    undefined4 uStack164;
    longlong local_a0;
    undefined4 local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined4 local_58;

    piVar2 = (int *)FUN_14020ac20(*(undefined4 *)(param_4 + 0x16c));
    local_c8 = FUN_14020a7e0(*(undefined4 *)(param_4 + 0x168));
    if ((piVar2 != (int *)0x0) && (local_c8 != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x10);
        uVar11 = (ulonglong)*(uint *)(param_4 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                              *(undefined4 *)(param_1 + 8));
        puVar10 = *(undefined8 **)(lVar6 + 0x10);
        *puVar10 = *puVar3;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar10,L"nPowerCoreMaximumLevel",
                      uVar11 & 0xffffffff);
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar7 = *plVar7 + -0x10;
        lVar6 = *(longlong *)(param_1 + 0x10);
        local_90 = &PTR_FUN_140b569f0;
        local_78 = 1;
        local_80 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar10 = *(undefined8 **)(lVar6 + 0x10);
        uVar4 = FUN_14005c1b0(lVar6,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar4;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        local_88 = FUN_1400578c0(lVar6);
        uVar12 = 0;
        local_c8 = local_c8 - (longlong)piVar2;
        do {
            piVar13 = piVar2 + 1;
            if (*piVar13 == 0) break;
            lVar6 = *(longlong *)(param_1 + 0x10);
            local_70 = &PTR_FUN_140b569f0;
            local_58 = 1;
            local_60 = lVar6;
            if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar6);
            }
            puVar10 = *(undefined8 **)(lVar6 + 0x10);
            uVar4 = FUN_14005c1b0(lVar6,0);
            *(undefined4 *)(puVar10 + 1) = 5;
            *puVar10 = uVar4;
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            local_68 = FUN_1400578c0(lVar6);
            fVar15 = *(float *)(local_c8 + (longlong)piVar13);
            puVar3 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),local_68);
            puVar10 = *(undefined8 **)(lVar6 + 0x10);
            *puVar10 = *puVar3;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar3 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            lVar5 = FUN_14018f0e0(&local_b0,L"nRatio");
            if (*(longlong *)(lVar5 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar9) != '\0');
                FUN_140058710(lVar6);
            }
            if (CONCAT44(uStack164,local_a8) != 0) {
                FUN_14018b900(CONCAT44(uStack164,local_a8),0);
            }
            pdVar1 = *(double **)(lVar6 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar15;
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            uVar4 = FUN_1400580e0(lVar6,0xfffffffd);
            FUN_14005ea50(lVar6,uVar4,*(longlong *)(lVar6 + 0x10) + -0x20,
                          *(longlong *)(lVar6 + 0x10) + -0x10);
            *(longlong *)(lVar6 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
            puVar10 = *(undefined8 **)(lVar6 + 0x10);
            puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0));
            *puVar10 = *puVar3;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar3 + 1);
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            FUN_1400f06f0();
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
            puVar10 = *(undefined8 **)(lVar6 + 0x10);
            if (*piVar13 == 1) {
                puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0));
                *puVar10 = *puVar3;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar3 + 1);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                FUN_1400f06f0(lVar6);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
            }
            else if (*piVar13 == 4) {
                lVar5 = *(longlong *)(param_1 + 0x10);
                local_98 = 1;
                local_b0 = &PTR_FUN_140b569f0;
                local_a0 = lVar5;
                if (*(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar5 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar5);
                }
                puVar10 = *(undefined8 **)(lVar5 + 0x10);
                uVar4 = FUN_14005c1b0(lVar5,0);
                *(undefined4 *)(puVar10 + 1) = 5;
                *puVar10 = uVar4;
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
                local_a8 = FUN_1400578c0(lVar5);
                uVar8 = 1;
                lVar5 = 7;
                do {
                    if ((piVar2[6] & uVar8) != 0) {
                        FUN_1400fa9e0(&local_b0,uVar8);
                    }
                    uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
                    lVar5 = lVar5 + -1;
                } while (lVar5 != 0);
                FUN_1400fb2a0(&local_70);
                if (local_a0 != 0) {
                    FUN_1400579e0();
                }
            }
            FUN_1400fb1d0(&local_90);
            FUN_1400579e0(lVar6);
            uVar12 = uVar12 + 1;
            piVar2 = piVar13;
        } while (uVar12 < 5);
        FUN_1400fb2a0(param_1,L"arStats",local_88);
        if ((*(int *)(param_3 + 0x1c) != 0) || ((*(byte *)(param_3 + 0x20) & 4) == 0)) {
            if (_DAT_140c7df84 == 0) {
                _DAT_140c7df84 = 1;
                lVar6 = FUN_140200220(0x4e9);
                if (lVar6 == 0) {
                    DAT_140c7df80 = 0.0;
                }
                else {
                    DAT_140c7df80 = *(float *)(lVar6 + 0x18);
                }
            }
            fVar15 = DAT_140c7df80;
            fVar14 = (float)FUN_1405e6140(DAT_140c65898 + 0x1698,0x16,*(undefined4 *)(param_3 + 8),
                                          *(undefined4 *)(param_4 + 0x144));
            lVar6 = (longlong)(fVar14 * fVar15 * (float)*(longlong *)(param_4 + 0x90));
            if (0 < lVar6) {
                lVar5 = *(longlong *)(param_1 + 0x10);
                local_c0 = 1;
                local_b8 = 0;
                plVar7 = (longlong *)FUN_140059170(lVar5,0x18);
                *plVar7 = lVar6;
                plVar7[1] = local_c0;
                plVar7[2] = local_b8;
                lVar6 = *(longlong *)(lVar5 + 0x20);
                local_c8 = FUN_140062650(lVar5,"Game.Money",10);
                local_c0 = CONCAT44(local_c0._4_4_,4);
                FUN_14005e8e0(lVar5,lVar6 + 0xa0,&local_c8,*(undefined8 *)(lVar5 + 0x10));
                *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
                FUN_140058bf0(lVar5,0xfffffffe);
                FUN_1400fb540(param_1,L"monMaxCraftingCost");
                plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
                *plVar7 = *plVar7 + -0x10;
            }
        }
        if (local_80 != 0) {
            FUN_1400579e0();
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14059ff20(longlong param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 local_28;
    undefined8 local_20;
    longlong local_18;

    if (_DAT_140c7df8c == 0) {
        _DAT_140c7df8c = 1;
        lVar2 = FUN_140200220(0x4e9);
        if (lVar2 == 0) {
            DAT_140c7df88 = 0.0;
        }
        else {
            DAT_140c7df88 = *(float *)(lVar2 + 0x1c);
        }
    }
    lVar2 = (longlong)((float)*(longlong *)(param_3 + 0x90) * DAT_140c7df88);
    if (0 < lVar2) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        local_20 = 1;
        local_18 = 0;
        plVar3 = (longlong *)FUN_140059170(lVar1,0x18);
        *plVar3 = lVar2;
        plVar3[1] = local_20;
        plVar3[2] = local_18;
        lVar2 = *(longlong *)(lVar1 + 0x20);
        local_28 = FUN_140062650(lVar1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(lVar1,lVar2 + 0xa0,&local_28,*(undefined8 *)(lVar1 + 0x10));
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_140058bf0(lVar1,0xfffffffe);
        FUN_1400fb540(param_1,L"monMaxCraftingCost");
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar3 = *plVar3 + -0x10;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405a0050(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int *piVar3;
    int iVar4;
    undefined4 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong *plVar9;
    int *piVar10;
    undefined8 uVar11;
    ulonglong uVar12;
    longlong lVar13;
    ulonglong uVar14;
    longlong lVar15;
    longlong lVar16;
    ulonglong uVar17;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined local_68 [16];
    undefined local_58 [8];
    longlong local_50;

    puVar5 = (undefined4 *)FUN_140245c00(*(undefined4 *)(DAT_140c65898 + 0x1ad0));
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_68 = ZEXT1216(CONCAT48(extraout_XMM0_Da,*(undefined8 *)(DAT_140c65898 + 0x1b20)) &
                        (undefined  [12])0xffffffffffffffff);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(lVar16 + 0x10);
    *puVar1 = *puVar6;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"fVectorX");
    lVar13 = -1;
    uVar17 = 0;
    iVar4 = 0;
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + 8) = 0;
        *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    }
    else {
        lVar15 = -1;
        do {
            lVar15 = lVar15 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar15) != '\0');
        FUN_140058710(lVar16);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar16 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)local_68._0_4_;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar16,0xfffffffd);
    FUN_14005ea50(lVar16,uVar8,*(longlong *)(lVar16 + 0x10) + -0x20,
                  *(longlong *)(lVar16 + 0x10) + -0x10);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x20;
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar9 = *plVar9 + -0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    local_68 = ZEXT1216(CONCAT48(extraout_XMM0_Da_00,*(undefined8 *)(DAT_140c65898 + 0x1b20)) &
                        (undefined  [12])0xffffffffffffffff);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(lVar16 + 0x10);
    *puVar1 = *puVar6;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"fVectorY");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + 8) = 0;
        *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    }
    else {
        lVar15 = -1;
        do {
            lVar15 = lVar15 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar15) != '\0');
        FUN_140058710(lVar16);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar16 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)local_68._4_4_;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar16,0xfffffffd);
    FUN_14005ea50(lVar16,uVar8,*(longlong *)(lVar16 + 0x10) + -0x20);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x20;
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar9 = *plVar9 + -0x10;
    if (puVar5 != (undefined4 *)0x0) {
        if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
            uVar14 = uVar17;
            do {
                if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar14 * 8) + 8) ==
                    puVar5[2]) {
                    lVar16 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar14 * 8);
                    if ((lVar16 != 0) &&
                        (lVar7 = DAT_140c65898, plVar9 = (longlong *)FUN_1405be260(uVar14,*puVar5),
                                plVar9 != (longlong *)0x0)) {
                        fVar21 = *(float *)(lVar7 + 0x1b24);
                        fVar20 = *(float *)(lVar7 + 0x1b20);
                        fVar19 = 0.0;
                        uVar14 = uVar17;
                        iVar4 = 0;
                        if (plVar9[1] != 0) {
                            do {
                                piVar3 = *(int **)(*plVar9 + uVar14 * 8);
                                if (*(ulonglong *)(lVar16 + 0x48) != 0) {
                                    piVar10 = *(int **)(lVar16 + 0x40);
                                    uVar12 = uVar17;
                                    do {
                                        if (*piVar10 == *piVar3) {
                                            local_68._4_4_ = (float)piVar3[0x15];
                                            local_68._0_4_ = (float)piVar3[0x14];
                                            local_68 = ZEXT1216(CONCAT48(fVar19,*(undefined8 *)(piVar3 + 0x14)) &
                                                                (undefined  [12])0xffffffffffffffff);
                                            if ((*(byte *)(piVar3 + 8) & 2) != 0) {
                                                FUN_1405e5f20(lVar7 + 0x1698,*piVar3,local_68);
                                                lVar7 = DAT_140c65898;
                                            }
                                            fVar19 = (fVar21 - local_68._4_4_) * (fVar21 - local_68._4_4_);
                                            fVar18 = SQRT((fVar20 - local_68._0_4_) * (fVar20 - local_68._0_4_) + fVar19);
                                            if (fVar18 < (float)piVar3[0x16] || fVar18 == (float)piVar3[0x16]) {
                                                iVar4 = *piVar3;
                                                goto LAB_1405a03dc;
                                            }
                                            break;
                                        }
                                        uVar12 = uVar12 + 1;
                                        piVar10 = piVar10 + 1;
                                    } while (uVar12 < *(ulonglong *)(lVar16 + 0x48));
                                }
                                uVar14 = uVar14 + 1;
                                iVar4 = 0;
                            } while (uVar14 < (ulonglong)plVar9[1]);
                        }
                    }
                    break;
                }
                uVar14 = (ulonglong)((int)uVar14 + 1);
            } while (uVar14 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
        }
    }
    LAB_1405a03dc:
    lVar16 = *(longlong *)(param_1 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(lVar16 + 0x10);
    *puVar1 = *puVar6;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"nSubSchematicId");
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + 8) = 0;
    }
    else {
        lVar15 = -1;
        do {
            lVar15 = lVar15 + 1;
        } while (*(char *)(lVar7 + lVar15) != '\0');
        if (*(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar16);
        }
        puVar1 = *(undefined8 **)(lVar16 + 0x10);
        uVar8 = FUN_140062650(lVar16,lVar7,lVar15);
        *(undefined4 *)(puVar1 + 1) = 4;
        *puVar1 = uVar8;
    }
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar16 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar4;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar16,0xfffffffd);
    FUN_14005ea50(lVar16,uVar8,*(longlong *)(lVar16 + 0x10) + -0x20,
                  *(longlong *)(lVar16 + 0x10) + -0x10);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x20;
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar9 = *plVar9 + -0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    iVar4 = *(int *)(DAT_140c65898 + 0x1b18);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(lVar16 + 0x10);
    *puVar1 = *puVar6;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"nAdditiveCount");
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(lVar16 + 0x10) + 8) = 0;
    }
    else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(lVar7 + lVar13) != '\0');
        if (*(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar16 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar16);
        }
        puVar1 = *(undefined8 **)(lVar16 + 0x10);
        uVar8 = FUN_140062650(lVar16,lVar7,lVar13);
        *(undefined4 *)(puVar1 + 1) = 4;
        *puVar1 = uVar8;
    }
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(lVar16 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar4;
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar16,0xfffffffd);
    FUN_14005ea50(lVar16,uVar8,*(longlong *)(lVar16 + 0x10) + -0x20,
                  *(longlong *)(lVar16 + 0x10) + -0x10);
    *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + -0x20;
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar9 = *plVar9 + -0x10;
    if (*(int *)(DAT_140c65898 + 0x1b00) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        uVar11 = FUN_1400b5df0(DAT_140c658f0,*(int *)(DAT_140c65898 + 0x1b00),0);
        iVar4 = FUN_140415c70(uVar8,uVar11);
        if (iVar4 != 0) {
            FUN_1400fb540(param_1,L"itemGlobalCatalyst");
            plVar9 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar9 = *plVar9 + -0x10;
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405a0660(longlong param_1,longlong param_2)

{
    int iVar1;
    double *pdVar2;
    undefined4 uVar3;
    uint uVar4;
    int *piVar5;
    longlong lVar6;
    int *piVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    longlong *plVar12;
    longlong lVar13;
    undefined4 uVar14;
    uint uVar15;
    longlong lVar16;
    undefined8 *puVar17;
    ulonglong uVar18;
    float *pfVar19;
    longlong lVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined auStack296 [48];
    uint local_f8;
    ulonglong local_f0;
    undefined **local_e8;
    undefined4 local_e0;
    undefined4 uStack220;
    longlong local_d8;
    undefined4 local_d0;
    ulonglong local_c8;
    longlong local_c0;
    longlong local_b8;
    undefined4 local_b0;
    longlong local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined8 local_80;
    undefined8 local_78;
    longlong local_70;
    ulonglong local_68;
    ulonglong local_60;

    local_60 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    local_c0 = param_1;
    local_a8 = FUN_140245c00(*(undefined4 *)(DAT_140c65898 + 0x1ad0));
    if ((local_a8 != 0) &&
        (local_b8 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(local_a8 + 0xc),0), local_b8 != 0)) {
        piVar5 = (int *)FUN_14020ac20();
        lVar6 = FUN_14020a7e0();
        if ((piVar5 != (int *)0x0) && (lVar6 != 0)) {
            uVar15 = 0;
            uVar4 = 0;
            piVar7 = piVar5;
            if (param_2 == 0) {
                do {
                    if (piVar7[1] == 0) break;
                    uVar4 = uVar4 + 1;
                    piVar7 = piVar7 + 1;
                } while (uVar4 < 5);
            }
            else {
                uVar4 = *(uint *)(param_2 + 0xd4);
            }
            local_f0 = DAT_140c65898 + 0x1ae8;
            local_78 = 0;
            local_70 = 0;
            local_68 = local_68 & 0xffffffff00000000;
            lVar6 = 5;
            puVar17 = &local_78;
            do {
                *(uint *)puVar17 =
                        (uint)(*(int *)((longlong)piVar5 + (4 - (longlong)&local_78) + (longlong)puVar17) == 4)
                        ;
                lVar6 = lVar6 + -1;
                puVar17 = (undefined8 *)((longlong)puVar17 + 4);
            } while (lVar6 != 0);
            lVar6 = *(longlong *)(param_1 + 0x10);
            local_88 = 1;
            local_a0 = &PTR_FUN_140b569f0;
            local_f8 = uVar4;
            local_90 = lVar6;
            if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar6);
            }
            puVar17 = *(undefined8 **)(lVar6 + 0x10);
            uVar8 = FUN_14005c1b0(lVar6,0,0);
            *(undefined4 *)(puVar17 + 1) = 5;
            *puVar17 = uVar8;
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            local_98 = FUN_1400578c0(lVar6);
            fVar23 = 0.0;
            lVar20 = -1;
            if (uVar4 != 0) {
                local_f0 = local_f0 - param_2;
                pfVar19 = (float *)(param_2 + 0x318);
                local_c8 = (longlong)&local_78 - param_2;
                do {
                    lVar6 = *(longlong *)(local_c0 + 0x10);
                    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar6);
                    }
                    puVar17 = *(undefined8 **)(lVar6 + 0x10);
                    uVar8 = FUN_14005c1b0(lVar6,0,0);
                    *(undefined4 *)(puVar17 + 1) = 5;
                    *puVar17 = uVar8;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar3 = FUN_1400578c0(lVar6);
                    if (param_2 != 0) {
                        fVar21 = fVar23;
                        if (uVar15 < 5) {
                            fVar21 = pfVar19[5];
                        }
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                        puVar17 = *(undefined8 **)(lVar6 + 0x10);
                        *puVar17 = *puVar9;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                        lVar10 = FUN_14018f0e0(&local_e8,L"fBudget");
                        if (*(longlong *)(lVar10 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                        }
                        else {
                            lVar11 = -1;
                            do {
                                lVar11 = lVar11 + 1;
                            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar11) != '\0');
                            FUN_140058710(lVar6);
                        }
                        if (CONCAT44(uStack220,local_e0) != 0) {
                            FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                        }
                        pdVar2 = *(double **)(lVar6 + 0x10);
                        *(undefined4 *)(pdVar2 + 1) = 3;
                        *pdVar2 = (double)fVar21;
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                        uVar8 = FUN_1400580e0(lVar6,0xfffffffd);
                        FUN_14005ea50(lVar6,uVar8,*(longlong *)(lVar6 + 0x10) + -0x20,
                                      *(longlong *)(lVar6 + 0x10) + -0x10);
                        uVar4 = DAT_140c8af48;
                        *(longlong *)(lVar6 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                        if ((uVar4 & 1) == 0) {
                            DAT_140c8af48 = uVar4 | 1;
                            DAT_140c8af50 = 0;
                        }
                        if (*(uint *)(param_2 + 0xd4) < uVar15 || *(uint *)(param_2 + 0xd4) == uVar15) {
                            puVar17 = &DAT_140c8af50;
                        }
                        else {
                            puVar17 = (undefined8 *)(param_2 + ((ulonglong)uVar15 + 0x24) * 8);
                        }
                        local_80 = *puVar17;
                        if ((int)local_80 == 1) {
                            puVar9 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                            puVar17 = *(undefined8 **)(lVar6 + 0x10);
                            *puVar17 = *puVar9;
                            *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                            FUN_1400f06f0(lVar6,puVar17,L"eProperty",local_80._4_4_);
                            puVar17 = (undefined8 *)(*(longlong *)(lVar6 + 0x10) + -0x10);
                            iVar1 = *(int *)((local_c8 - 0x318) + (longlong)pfVar19);
                            *(undefined8 **)(lVar6 + 0x10) = puVar17;
                            if (iVar1 != 0) {
                                fVar21 = fVar23;
                                if (uVar15 < 5) {
                                    fVar21 = *pfVar19;
                                }
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                                *puVar17 = *puVar9;
                                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                lVar10 = FUN_14018f0e0(&local_e8,L"nUsedBudget");
                                if (*(longlong *)(lVar10 + 8) == 0) {
                                    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                }
                                else {
                                    lVar11 = -1;
                                    do {
                                        lVar11 = lVar11 + 1;
                                    } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar11) != '\0');
                                    FUN_140058710(lVar6);
                                }
                                if (CONCAT44(uStack220,local_e0) != 0) {
                                    FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                                }
                                pdVar2 = *(double **)(lVar6 + 0x10);
                                *(undefined4 *)(pdVar2 + 1) = 3;
                                *pdVar2 = (double)fVar21;
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                uVar8 = FUN_1400580e0(lVar6,0xfffffffd);
                                FUN_14005ea50(lVar6,uVar8,*(longlong *)(lVar6 + 0x10) + -0x20,
                                              *(longlong *)(lVar6 + 0x10) + -0x10);
                                *(longlong *)(lVar6 + 0x10) =
                                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                                fVar21 = (float)FUN_1405a4800(param_2,uVar15);
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                                puVar17 = *(undefined8 **)(lVar6 + 0x10);
                                *puVar17 = *puVar9;
                                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                lVar10 = FUN_14018f0e0(&local_e8,L"nCraftingBudget");
                                if (*(longlong *)(lVar10 + 8) == 0) {
                                    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                }
                                else {
                                    lVar11 = -1;
                                    do {
                                        lVar11 = lVar11 + 1;
                                    } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar11) != '\0');
                                    FUN_140058710(lVar6);
                                }
                                if (CONCAT44(uStack220,local_e0) != 0) {
                                    FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                                }
                                pdVar2 = *(double **)(lVar6 + 0x10);
                                *(undefined4 *)(pdVar2 + 1) = 3;
                                *pdVar2 = (double)fVar21;
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                uVar8 = FUN_1400580e0(lVar6,0xfffffffd);
                                FUN_14005ea50(lVar6,uVar8,*(longlong *)(lVar6 + 0x10) + -0x20,
                                              *(longlong *)(lVar6 + 0x10) + -0x10);
                                *(longlong *)(lVar6 + 0x10) =
                                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                                lVar10 = FUN_1402479c0(local_80._4_4_);
                                if (lVar10 != 0) {
                                    fVar21 = (float)FUN_1405a4800(param_2,uVar15);
                                    fVar21 = fVar21 * *(float *)(lVar10 + 0x20);
                                    puVar9 = (undefined8 *)
                                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                                    puVar17 = *(undefined8 **)(lVar6 + 0x10);
                                    *puVar17 = *puVar9;
                                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                    lVar10 = FUN_14018f0e0(&local_e8,L"fValue");
                                    if (*(longlong *)(lVar10 + 8) == 0) {
                                        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                    }
                                    else {
                                        lVar11 = -1;
                                        do {
                                            lVar11 = lVar11 + 1;
                                        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar11) != '\0');
                                        FUN_140058710(lVar6);
                                    }
                                    if (CONCAT44(uStack220,local_e0) != 0) {
                                        FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                                    }
                                    pdVar2 = *(double **)(lVar6 + 0x10);
                                    *(undefined4 *)(pdVar2 + 1) = 3;
                                    *pdVar2 = (double)fVar21;
                                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                    uVar8 = FUN_1400580e0(lVar6,0xfffffffd);
                                    FUN_14005ea50(lVar6,uVar8,*(longlong *)(lVar6 + 0x10) + -0x20,
                                                  *(longlong *)(lVar6 + 0x10) + -0x10);
                                    *(longlong *)(lVar6 + 0x10) =
                                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                                }
                            }
                        }
                    }
                    if (*(int *)((local_c8 - 0x318) + (longlong)pfVar19) != 0) {
                        uVar18 = (ulonglong)*(uint *)((local_f0 - 0x314) + (longlong)pfVar19);
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                        puVar17 = *(undefined8 **)(lVar6 + 0x10);
                        *puVar17 = *puVar9;
                        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar6,puVar17,L"eCraftingGroup",uVar18 & 0xffffffff);
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                    }
                    FUN_1400fb1d0(&local_a0);
                    FUN_1400579e0(lVar6);
                    uVar15 = uVar15 + 1;
                    pfVar19 = pfVar19 + 1;
                    param_1 = local_c0;
                    lVar6 = local_90;
                } while (uVar15 < local_f8);
            }
            FUN_1400fb2a0(param_1,L"arStats",local_98);
            if (param_2 != 0) {
                lVar10 = *(longlong *)(param_1 + 0x10);
                if (*(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar10 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar10);
                }
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                uVar8 = FUN_14005c1b0(lVar10,0,0);
                *(undefined4 *)(puVar17 + 1) = 5;
                *puVar17 = uVar8;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(lVar10);
                fVar21 = *(float *)(param_2 + 0x354);
                local_f0 = local_f0 & 0xffffffff00000000 | (ulonglong)uVar4;
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar11 = FUN_14018f0e0(&local_e8,L"fApSpSplitIncrement");
                if (*(longlong *)(lVar11 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar13) != '\0');
                    FUN_140058710(lVar10);
                }
                if (CONCAT44(uStack220,local_e0) != 0) {
                    FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                }
                pdVar2 = *(double **)(lVar10 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar21;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                              *(longlong *)(lVar10 + 0x10) + -0x10);
                puVar17 = (undefined8 *)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                *(undefined8 **)(lVar10 + 0x10) = puVar17;
                fVar21 = fVar23;
                if (*(longlong *)(param_2 + 0x18) != 0) {
                    fVar21 = (float)(*(uint *)(*(longlong *)(param_2 + 0x18) + 0x178) & 0x7fffffff);
                }
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar11 = FUN_14018f0e0(&local_e8,L"fApSpSplitCap");
                if (*(longlong *)(lVar11 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar13) != '\0');
                    FUN_140058710(lVar10);
                }
                if (CONCAT44(uStack220,local_e0) != 0) {
                    FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                }
                pdVar2 = *(double **)(lVar10 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar21;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                              *(longlong *)(lVar10 + 0x10) + -0x10);
                local_c8 = local_c8 & 0xffffffff00000000;
                local_c8._0_4_ = 0;
                puVar17 = (undefined8 *)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                *(undefined8 **)(lVar10 + 0x10) = puVar17;
                local_f8 = *(uint *)(param_2 + 0x354);
                if ((int)local_f8 < 0) {
                    local_c8._0_4_ = -0x80000000;
                }
                uVar15 = (int)((int)local_c8 - local_f8) >> 0x1f;
                if (0x54 < (int)(((int)local_c8 - local_f8 ^ uVar15) - uVar15)) {
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar10);
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                }
                uVar18 = (ulonglong)*(uint *)(param_2 + 0x368);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(lVar10,puVar17,L"nChargeIncrement",uVar18 & 0xffffffff);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar10 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                FUN_1400f06f0(lVar10);
                puVar17 = (undefined8 *)(*(longlong *)(lVar10 + 0x10) + -0x10);
                *(undefined8 **)(lVar10 + 0x10) = puVar17;
                uVar15 = *(uint *)(param_2 + 0x368);
                if (uVar15 != 0) {
                    uVar18 = (ulonglong)*(uint *)(param_2 + 0x36c);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar10,(uVar18 & 0xffffffff) % (ulonglong)uVar15,L"nChargeMaxDelta",
                                  (uVar18 & 0xffffffff) / (ulonglong)uVar15);
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x10;
                    puVar17 = *(undefined8 **)(lVar10 + 0x10);
                }
                fVar21 = *(float *)(param_2 + 0x364);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar4);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                lVar11 = FUN_14018f0e0(&local_e8,L"fMismatchPenalty");
                if (*(longlong *)(lVar11 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar13) != '\0');
                    FUN_140058710(lVar10);
                }
                if (CONCAT44(uStack220,local_e0) != 0) {
                    FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                }
                pdVar2 = *(double **)(lVar10 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar21;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar10,0xfffffffd);
                FUN_14005ea50(lVar10,uVar8,*(longlong *)(lVar10 + 0x10) + -0x20,
                              *(longlong *)(lVar10 + 0x10) + -0x10);
                *(longlong *)(lVar10 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar10 + 0x10));
                FUN_1400fb2a0(param_1,L"tSettings",uVar4);
                lVar11 = *(longlong *)(param_1 + 0x10);
                local_e8 = &PTR_FUN_140b569f0;
                local_d0 = 1;
                local_d8 = lVar11;
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar11);
                }
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                uVar8 = FUN_14005c1b0(lVar11,0,0);
                *(undefined4 *)(puVar17 + 1) = 5;
                *puVar17 = uVar8;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                uVar3 = FUN_1400578c0(lVar11);
                local_e0 = uVar3;
                if ((*(longlong *)(param_2 + 0x18) != 0) && (param_2 + 0x1d0 != 0)) {
                    if ((*(int *)(local_a8 + 0x1c) != 0) || ((*(byte *)(local_a8 + 0x20) & 4) == 0)) {
                        fVar21 = (float)FUN_1405e6140(DAT_140c65898 + 0x1698,0x16,*(undefined4 *)(local_a8 + 8),
                                                      *(undefined4 *)(local_b8 + 0x144));
                        fVar22 = (float)FUN_1405a3be0();
                        lVar13 = 0;
                        if (*(longlong *)(param_2 + 0x18) != 0) {
                            lVar13 = param_2 + 0x1d0;
                        }
                        local_b8 = (longlong)((float)*(longlong *)(lVar13 + 0x88) * fVar21 * fVar22);
                        if (0 < local_b8) {
                            local_70 = 1;
                            local_68 = 0;
                            plVar12 = (longlong *)FUN_140059170(lVar11,0x18);
                            *plVar12 = local_b8;
                            plVar12[1] = local_70;
                            plVar12[2] = local_68;
                            lVar13 = *(longlong *)(lVar11 + 0x20);
                            local_b8 = FUN_140062650(lVar11,"Game.Money",10);
                            local_b0 = 4;
                            FUN_14005e8e0(lVar11,lVar13 + 0xa0,&local_b8,*(undefined8 *)(lVar11 + 0x10));
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                            FUN_140058bf0(lVar11,0xfffffffe);
                            FUN_1400fb540(&local_e8,L"monCraftingCost");
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                        }
                    }
                    lVar13 = 0;
                    if (*(longlong *)(param_2 + 0x18) != 0) {
                        lVar13 = param_2 + 0x1d0;
                    }
                    fVar21 = *(float *)(lVar13 + 0x14);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                    puVar17 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar13 = FUN_14018f0e0(&local_e8,L"nBudget");
                    if (*(longlong *)(lVar13 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    }
                    else {
                        lVar16 = -1;
                        do {
                            lVar16 = lVar16 + 1;
                        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar16) != '\0');
                        FUN_140058710(lVar11);
                    }
                    if (CONCAT44(uStack220,local_e0) != 0) {
                        FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                    }
                    pdVar2 = *(double **)(lVar11 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)fVar21;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                                  *(longlong *)(lVar11 + 0x10) + -0x10);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                }
                fVar21 = *(float *)(param_2 + 0x370);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                lVar13 = FUN_14018f0e0(&local_e8,L"fCraftedBudget");
                lVar13 = *(longlong *)(lVar13 + 8);
                if (lVar13 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                }
                else {
                    do {
                        lVar20 = lVar20 + 1;
                    } while (*(char *)(lVar13 + lVar20) != '\0');
                    FUN_140058710(lVar11,lVar13,lVar20);
                }
                if (CONCAT44(uStack220,local_e0) != 0) {
                    FUN_14018b900(CONCAT44(uStack220,local_e0),0);
                }
                pdVar2 = *(double **)(lVar11 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)fVar21;
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
                FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                              *(longlong *)(lVar11 + 0x10) + -0x10);
                *(longlong *)(lVar11 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                *puVar17 = *puVar9;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f06f0(lVar11);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                uVar8 = *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
                uVar14 = *(undefined4 *)(param_2 + 0x37c);
                if ((*(byte *)(local_a8 + 0x20) & 4) == 0) {
                    puVar9 = (undefined8 *)FUN_14005c3c0(uVar8,uVar3);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar17 = *(undefined8 **)(lVar11 + 0x10);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    if (*(float *)(param_2 + 0x35c) < *(float *)(param_2 + 0x374)) {
                        uVar14 = 0;
                    }
                }
                else {
                    puVar9 = (undefined8 *)FUN_14005c3c0(uVar8,uVar3);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar17 = *(undefined8 **)(lVar11 + 0x10);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                    *puVar17 = *puVar9;
                    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    if (fVar23 < *(float *)(param_2 + 0x374)) {
                        uVar14 = 0;
                    }
                }
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
                puVar17 = *(undefined8 **)(lVar11 + 0x10);
                uVar8 = *puVar9;
                *puVar17 = uVar8;
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                FUN_1400f0630(lVar11,uVar8,L"bIsValidCraft",uVar14);
                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                FUN_1400fb2a0(local_c0,L"tResult",uVar3);
                FUN_1400579e0(lVar11);
                FUN_1400579e0(lVar10);
            }
            if (lVar6 != 0) {
                FUN_1400579e0(lVar6);
            }
        }
    }
    FUN_1407db4f0(local_60 ^ (ulonglong)auStack296);
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1405a1790(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;
    float fVar7;
    undefined8 local_48;
    undefined8 local_40;
    longlong local_38;
    undefined **local_30;
    undefined4 local_28;
    longlong local_20;
    undefined4 local_18;

    lVar4 = FUN_140245c00(*(undefined4 *)(DAT_140c65898 + 0x1ad0));
    if (lVar4 == 0) {
        return 0;
    }
    lVar4 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar4 + 0xc),0);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x140) == 0x21)) {
        fVar7 = (float)FUN_1405a3c40();
        lVar4 = (longlong)(fVar7 * (float)*(longlong *)(lVar4 + 0x90));
        if (0 < lVar4) {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_38 = 0;
            local_30 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_18 = 1;
            local_20 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0(lVar1);
            local_28 = uVar3;
            plVar6 = (longlong *)FUN_140059170(lVar1,0x18);
            *plVar6 = lVar4;
            plVar6[1] = local_40;
            plVar6[2] = local_38;
            lVar4 = *(longlong *)(lVar1 + 0x20);
            local_48 = FUN_140062650(lVar1,"Game.Money",10);
            local_40 = CONCAT44(local_40._4_4_,4);
            FUN_14005e8e0(lVar1,lVar4 + 0xa0,&local_48,*(undefined8 *)(lVar1 + 0x10));
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_140058bf0(lVar1,0xfffffffe);
            FUN_1400fb540(&local_30,L"monCraftingCost");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            FUN_1400fb2a0(param_1,L"tResult",uVar3);
            FUN_1400579e0(lVar1);
        }
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_1405a1970(longlong param_1)

{
    bool bVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined4 *puVar12;
    undefined8 uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    int *piVar16;
    uint uVar17;
    longlong lVar18;
    ulonglong local_68;
    undefined8 local_60;
    undefined4 local_58;

    if (*(int *)(DAT_140c65898 + 0x1ad0) != 0) {
        return 0;
    }
    uVar11 = 0;
    uVar14 = uVar11;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar11;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar14 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar7 = FUN_1405925d0(param_1,1);
    if ((int)uVar7 == 0) {
        return uVar7;
    }
    lVar8 = FUN_140245c00(uVar7 & 0xffffffff);
    if (((lVar8 == 0) || (iVar2 = FUN_1403a0d20(DAT_140c65898), iVar2 == 0)) ||
        (lVar9 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar8 + 0xc),0), lVar9 == 0)) {
        return 0;
    }
    iVar2 = *(int *)(lVar8 + 8);
    lVar9 = FUN_1405be150();
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        uVar15 = uVar11;
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar15 * 8) + 8) == iVar2)
            {
                uVar11 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar15 * 8);
                break;
            }
            uVar15 = (ulonglong)((int)uVar15 + 1);
        } while (uVar15 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    if ((lVar9 == 0) || ((uVar11 == 0 && (*(int *)(lVar8 + 0x1c) != 0)))) {
        return 0;
    }
    FUN_14039e400(DAT_140c65898);
    uVar17 = *(uint *)(lVar9 + 0x10) & 8;
    if (((*(byte *)(lVar8 + 0x20) & 8) != 0) || (bVar1 = false, *(int *)(lVar8 + 8) == 0x16)) {
        bVar1 = true;
    }
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_1405926a0(lVar8);
    uVar3 = FUN_1403a0d20(DAT_140c65898);
    local_68 = local_68 & 0xffffffff | (ulonglong)uVar3 << 0x20;
    local_60 = local_60 & 0xffffffff00000000 | uVar7 & 0xffffffff;
    local_60._4_4_ = FUN_1400f26a0(uVar14 + 0x180,(uVar17 != 0) + '\x02',1);
    local_58 = 0;
    local_60 = local_60 & 0xffffffff | (ulonglong)local_60._4_4_ << 0x20;
    if (uVar11 == 0) {
        uVar3 = 1;
    }
    else {
        uVar3 = FUN_1405e47c0();
    }
    if (local_60._4_4_ <= uVar3) {
        uVar3 = 0xffffffff;
        piVar16 = (int *)(lVar8 + 0x24);
        lVar18 = 5;
        lVar9 = DAT_140c65898;
        do {
            if ((*piVar16 != 0) && (piVar16[5] != 0)) {
                FUN_1405e6430(lVar9 + 0x1698);
                lVar10 = FUN_1400b5df0(DAT_140c658f0);
                lVar9 = DAT_140c65898;
                if (lVar10 != 0) {
                    uVar4 = FUN_1405e6300(DAT_140c65898 + 0x1698);
                    uVar5 = piVar16[5];
                    if (uVar4 < uVar5) {
                        uVar11 = FUN_1403ac840(lVar9 + 0xa0);
                        uVar5 = (uint)((uVar11 & 0xffffffff) / (ulonglong)(uVar5 - uVar4));
                        lVar9 = DAT_140c65898;
                        if (uVar5 < uVar3) {
                            uVar3 = uVar5;
                        }
                    }
                }
            }
            piVar16 = piVar16 + 1;
            lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        if (local_60._4_4_ <= uVar3) {
            if (((uVar17 != 0) &&
                 (puVar12 = (undefined4 *)FUN_140417bf0(param_1), lVar9 = DAT_140c65898,
                         puVar12 != (undefined4 *)0x0)) && (puVar12[0x71] != 0)) {
                iVar2 = FUN_1405be550();
                if (iVar2 == 0) {
                    return 0;
                }
                lVar9 = FUN_140244280(puVar12[0x71]);
                if (lVar9 == 0) {
                    return 0;
                }
                if (*(int *)(lVar8 + 8) != *(int *)(lVar9 + 4)) {
                    return 0;
                }
                if (*(int *)(lVar8 + 0x1c) != *(int *)(lVar9 + 8)) {
                    return 0;
                }
                uVar3 = FUN_1403ac840(DAT_140c65898 + 0xa0,2,*puVar12);
                if (uVar3 < local_60._4_4_) {
                    return 0;
                }
                local_58 = *puVar12;
                lVar9 = DAT_140c65898;
            }
            if (bVar1) {
                uVar13 = *(undefined8 *)(lVar9 + 0x78);
                uVar6 = FUN_1405a3ca0();
                uVar13 = FUN_1403acd90(DAT_140c65b70,uVar6,uVar13);
                iVar2 = FUN_140399630();
                if ((iVar2 != 0) && (iVar2 != 0x13d)) {
                    FUN_1403a12a0(DAT_140c65898,iVar2,uVar13,0);
                    return 0;
                }
            }
            else {
                uVar13 = 0x851;
                if (uVar17 == 0) {
                    uVar13 = 0x852;
                }
                FUN_1403f4900(lVar9,uVar13,&local_68);
            }
            FUN_1405e65f0(DAT_140c65898 + 0x1698,(int)uVar7,local_60._4_4_);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1405a1df0(void)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;

    if (*(int *)(DAT_140c65898 + 0x1ad0) != 0) {
        lVar3 = FUN_140245c00(*(int *)(DAT_140c65898 + 0x1ad0));
        if (lVar3 != 0) {
            if (*(int *)(lVar3 + 8) == 0x16) {
                uVar4 = 0x4f;
            }
            else if (((*(byte *)(lVar3 + 0x20) & 4) == 0) || (uVar4 = 0x57, *(int *)(lVar3 + 0x1c) != 0))
            {
                uVar4 = 0x2c;
            }
            iVar1 = FUN_1403a0d20(DAT_140c65898,uVar4);
            if (iVar1 != 0) {
                FUN_14039e400();
                uVar4 = *(undefined8 *)(DAT_140c65898 + 0x78);
                uVar2 = FUN_1405a3ca0();
                uVar4 = FUN_1403acd90(DAT_140c65b70,uVar2,uVar4);
                iVar1 = FUN_140399780();
                if ((iVar1 != 0) && (iVar1 != 0x13d)) {
                    FUN_1403a12a0(DAT_140c65898,iVar1,uVar4,0);
                    return 0;
                }
                return 1;
            }
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405a1ee0(undefined8 param_1)

{
    byte bVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    byte *pbVar9;
    undefined auStack136 [32];
    ulonglong local_68;
    ulonglong local_60;
    ulonglong local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined *local_40;
    undefined local_38 [4];
    undefined local_34 [25];
    byte local_1b [11];
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    FUN_1407e4830(local_38,0,0x28);
    iVar3 = FUN_14059d660(local_38,param_1,1);
    if (((iVar3 != 0) && (uVar2 = *(uint *)(DAT_140c65898 + 0x1ad0), uVar2 != 0)) &&
        (lVar6 = FUN_140245c00(uVar2), lVar6 != 0)) {
        if (*(int *)(lVar6 + 8) == 0x16) {
            uVar8 = 0x4f;
        }
        else if (((*(byte *)(lVar6 + 0x20) & 4) == 0) || (uVar8 = 0x57, *(int *)(lVar6 + 0x1c) != 0)) {
            uVar8 = 0x2c;
        }
        iVar3 = FUN_1403a0d20(DAT_140c65898,uVar8);
        if ((iVar3 != 0) &&
            (lVar7 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar6 + 0xc),0), lVar7 != 0)) {
            FUN_14039e400(DAT_140c65898);
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_48 = 0;
            local_40 = (undefined *)0x0;
            uVar4 = FUN_1405926a0(lVar6);
            lVar6 = DAT_140c65898;
            uVar5 = FUN_1403a0d20(DAT_140c65898,uVar4);
            local_60 = local_60 & 0xffffffff00000000 | (ulonglong)uVar2;
            local_68 = local_68 & 0xffffffff | (ulonglong)uVar5 << 0x20;
            local_48 = CONCAT71(local_48._1_7_,5);
            local_40 = local_34;
            iVar3 = 6;
            pbVar9 = local_1b;
            local_58 = (ulonglong)CONCAT11(local_1b[3],local_1b[1]);
            do {
                bVar1 = *pbVar9;
                pbVar9 = pbVar9 + -1;
                local_58 = local_58 << 8 | (ulonglong)bVar1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            uVar8 = *(undefined8 *)(lVar6 + 0x78);
            uVar4 = FUN_1405a3ca0();
            uVar8 = FUN_1403acd90(DAT_140c65b70,uVar4,uVar8);
            iVar3 = FUN_140399780();
            if ((iVar3 != 0) && (iVar3 != 0x13d)) {
                FUN_1403a12a0(DAT_140c65898,iVar3,uVar8,0);
            }
        }
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack136);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405a20d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    wchar_t *pwVar9;
    longlong lVar10;
    longlong lVar11;
    float fVar12;
    uint local_res8 [2];
    uint local_res18 [2];
    undefined4 local_res20 [2];
    undefined8 local_98;
    undefined4 local_90;
    undefined8 local_88;
    longlong local_80;
    undefined8 local_78;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;

    lVar7 = 0;
    if ((DAT_140dc3460 & 1) == 0) {
        DAT_140dc3460 = DAT_140dc3460 | 1;
        _DAT_140dc346c = 0;
    }
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_60 = uVar2;
    if (_DAT_140dc346c == 0) {
        _DAT_140dc346c = 1;
        lVar5 = FUN_140200220(0x3c2);
        if (lVar5 != 0) {
            DAT_140dc3468 = *(float *)(lVar5 + 0x18);
            goto LAB_1405a21b1;
        }
        DAT_140dc3468 = 0.0;
    }
    else {
        LAB_1405a21b1:
        if ((0.0 < DAT_140dc3468) && (fVar12 = (float)FUN_1405a3cf0(), fVar12 < 1.0)) {
            fVar12 = (float)FUN_1405a3cf0();
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            *puVar8 = *puVar6;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar5 = FUN_14018f0e0(&local_88,L"nSuccessChance");
            if (*(longlong *)(lVar5 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar11 = -1;
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar11) != '\0');
                FUN_140058710(param_1);
            }
            if (local_80 != 0) {
                FUN_14018b900(local_80,0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar12;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar4 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        }
    }
    if (param_3 == (longlong *)0x0) {
        LAB_1405a24b5:
        pwVar9 = L"tAddInfo";
    }
    else {
        lVar5 = *param_3;
        lVar11 = lVar7;
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x4a0) != 0)) {
            lVar11 = *(longlong *)(lVar5 + 8);
        }
        if ((lVar5 == 0) || (lVar10 = lVar5 + 0x20, *(int *)(lVar5 + 0x498) == 0)) {
            lVar10 = lVar7;
        }
        if ((lVar11 == 0) || (lVar10 == 0)) goto LAB_1405a24b5;
        FUN_14020df20(*(undefined4 *)(lVar11 + 0x170));
        local_res20[0] = 0;
        local_res18[0] = 0;
        local_res8[0] = 0;
        FUN_14040efb0(lVar11,lVar10,local_res20,local_res18,local_res8);
        if (local_res8[0] <= *(uint *)(lVar10 + 0x130)) goto LAB_1405a24c7;
        lVar5 = *param_3;
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x4a4) != 0)) {
            lVar7 = lVar5 + 0x2e8;
        }
        if (local_res18[0] <= *(uint *)(lVar10 + 0x130) - (uint)*(byte *)(lVar7 + 9))
            goto LAB_1405a24c7;
        local_88 = 0;
        local_80 = 1;
        local_78 = 0;
        iVar3 = FUN_140513f30(lVar10,&local_88,0);
        if (iVar3 != 0) {
            puVar8 = (undefined8 *)FUN_140059170(param_1,0x18);
            *puVar8 = local_88;
            puVar8[1] = local_80;
            puVar8[2] = local_78;
            lVar7 = *(longlong *)(param_1 + 0x20);
            local_98 = FUN_140062650(param_1,"Game.Money",10);
            local_90 = 4;
            FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_98,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            FUN_1400fb540(&local_68,L"monCost");
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        iVar3 = FUN_140513f30(lVar10,&local_88,1);
        if (iVar3 != 0) {
            puVar8 = (undefined8 *)FUN_140059170(param_1,0x18);
            *puVar8 = local_88;
            puVar8[1] = local_80;
            puVar8[2] = local_78;
            lVar7 = *(longlong *)(param_1 + 0x20);
            local_98 = FUN_140062650(param_1,"Game.Money",10);
            local_90 = 4;
            FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_98,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            FUN_1400fb540(&local_68,L"monServiceTokenCost");
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        pwVar9 = L"tAddInfo";
    }
    FUN_1400fb2a0(param_2,pwVar9,uVar2);
    LAB_1405a24c7:
    FUN_1400579e0(param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405a24f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
    double *pdVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    uint uVar9;
    ulonglong uVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar14;
    undefined8 local_88;
    undefined4 local_80;
    undefined8 local_78;
    longlong local_70;
    undefined8 local_68;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    lVar13 = 0;
    if ((DAT_140dc3470 & 1) == 0) {
        DAT_140dc3470 = DAT_140dc3470 | 1;
        _DAT_140dc347c = 0;
    }
    local_58 = &PTR_FUN_140b569f0;
    local_40 = 1;
    local_48 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    local_50 = uVar3;
    if (_DAT_140dc347c == 0) {
        _DAT_140dc347c = 1;
        lVar6 = FUN_140200220(0x3c4);
        if (lVar6 != 0) {
            DAT_140dc3478 = *(float *)(lVar6 + 0x18);
            goto LAB_1405a25d4;
        }
        DAT_140dc3478 = 0.0;
    }
    else {
        LAB_1405a25d4:
        if ((0.0 < DAT_140dc3478) && (FUN_1405a3d50(), extraout_XMM0_Da < 1.0)) {
            FUN_1405a3d50();
            fVar14 = extraout_XMM0_Da_00;
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            *puVar8 = *puVar7;
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(&local_78,L"nSuccessChance");
            if (*(longlong *)(lVar6 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar12) != '\0');
                FUN_140058710(param_1);
            }
            if (local_70 != 0) {
                FUN_14018b900(local_70,0);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)fVar14;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        }
    }
    if (param_3 != (longlong *)0x0) {
        lVar6 = *param_3;
        lVar12 = lVar13;
        if ((lVar6 != 0) && (*(int *)(lVar6 + 0x4a0) != 0)) {
            lVar12 = *(longlong *)(lVar6 + 8);
        }
        if ((lVar6 == 0) || (lVar11 = lVar6 + 0x20, *(int *)(lVar6 + 0x498) == 0)) {
            lVar11 = lVar13;
        }
        if ((lVar12 != 0) && (lVar11 != 0)) {
            local_78 = 0;
            local_70 = 1;
            local_68 = 0;
            iVar4 = FUN_140514170(lVar11,&local_78,0);
            if (iVar4 != 0) {
                puVar8 = (undefined8 *)FUN_140059170(param_1,0x18);
                *puVar8 = local_78;
                puVar8[1] = local_70;
                puVar8[2] = local_68;
                lVar6 = *(longlong *)(param_1 + 0x20);
                local_88 = FUN_140062650(param_1,"Game.Money",10);
                local_80 = 4;
                FUN_14005e8e0(param_1,lVar6 + 0xa0,&local_88,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_140058bf0(param_1,0xfffffffe);
                FUN_1400fb540(&local_58,L"monCost");
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            }
            iVar4 = FUN_140514170(lVar11,&local_78,1);
            if (iVar4 != 0) {
                puVar8 = (undefined8 *)FUN_140059170(param_1,0x18);
                *puVar8 = local_78;
                puVar8[1] = local_70;
                puVar8[2] = local_68;
                lVar6 = *(longlong *)(param_1 + 0x20);
                local_88 = FUN_140062650(param_1,"Game.Money",10);
                local_80 = 4;
                FUN_14005e8e0(param_1,lVar6 + 0xa0,&local_88,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_140058bf0(param_1,0xfffffffe);
                FUN_1400fb540(&local_58,L"monServiceTokenCost");
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            }
            FUN_14020df20(*(undefined4 *)(lVar12 + 0x170));
            iVar4 = 1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0(param_1);
            uVar10 = 0;
            if (*(int *)(lVar11 + 0x130) != 0) {
                do {
                    lVar6 = *param_3;
                    if ((((lVar6 == 0) || (*(int *)(lVar6 + 0x4a8) == 0)) || (7 < (uint)uVar10)) ||
                        (*(int *)(lVar6 + 0x478 + uVar10 * 4) == 0)) {
                        lVar13 = 1;
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                        puVar8 = *(undefined8 **)(param_1 + 0x10);
                        *puVar8 = *puVar7;
                        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        pdVar1 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar1 + 1) = 3;
                        *pdVar1 = (double)iVar4;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        puVar2 = *(undefined4 **)(param_1 + 0x10);
                        *puVar2 = 1;
                        puVar2[2] = 1;
                    }
                    else {
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                        puVar8 = *(undefined8 **)(param_1 + 0x10);
                        *puVar8 = *puVar7;
                        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        pdVar1 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar1 + 1) = 3;
                        *pdVar1 = (double)iVar4;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        puVar2 = *(undefined4 **)(param_1 + 0x10);
                        *puVar2 = 0;
                        puVar2[2] = 1;
                    }
                    lVar6 = *(longlong *)(param_1 + 0x10);
                    iVar4 = iVar4 + 1;
                    *(longlong *)(param_1 + 0x10) = lVar6 + 0x10;
                    FUN_14005ea50(param_1,lVar6 + -0x20,lVar6 + -0x10,lVar6);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    uVar9 = (uint)uVar10 + 1;
                    uVar10 = (ulonglong)uVar9;
                } while (uVar9 < *(uint *)(lVar11 + 0x130));
                if ((int)lVar13 != 0) {
                    FUN_1400fb2a0(&local_58,L"arAllowed",uVar3);
                    FUN_1400fb2a0(param_2,L"tRerollInfo",local_50);
                    FUN_1400579e0(param_1);
                    goto LAB_1405a2a2b;
                }
            }
            FUN_1400579e0(param_1);
            goto LAB_1405a2a2b;
        }
    }
    FUN_1400fb2a0(param_2,L"tRerollInfo",uVar3);
    LAB_1405a2a2b:
    FUN_1400579e0(param_1);
    return;
}



void FUN_1405a2a60(longlong param_1,undefined8 param_2,longlong *param_3)

{
    uint *puVar1;
    bool bVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    int iVar11;
    int iVar12;
    uint uVar13;
    ulonglong uVar14;
    undefined8 local_e8;
    undefined8 local_e0;
    undefined8 local_d8;
    undefined **local_d0;
    undefined4 local_c8;
    longlong local_c0;
    undefined4 local_b8;
    undefined **local_b0;
    undefined4 local_a8;
    undefined4 uStack164;
    longlong local_a0;
    undefined4 local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined8 local_70;
    undefined4 local_68;
    undefined8 local_60;
    undefined4 local_58;
    undefined8 local_50;
    undefined4 local_48;

    if (param_3 != (longlong *)0x0) {
        lVar10 = *param_3;
        if ((lVar10 == 0) || (*(int *)(lVar10 + 0x4a0) == 0)) {
            lVar6 = 0;
        }
        else {
            lVar6 = *(longlong *)(lVar10 + 8);
        }
        if ((lVar10 == 0) || (*(int *)(lVar10 + 0x498) == 0)) {
            lVar10 = 0;
        }
        else {
            lVar10 = lVar10 + 0x20;
        }
        if ((lVar6 != 0) && (lVar10 != 0)) {
            local_90 = &PTR_FUN_140b569f0;
            local_78 = 1;
            local_80 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0);
            *(undefined4 *)(puVar7 + 1) = 5;
            *puVar7 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_88 = FUN_1400578c0(param_1);
            FUN_14020df20(*(undefined4 *)(lVar6 + 0x170));
            local_d0 = &PTR_FUN_140b569f0;
            local_b8 = 1;
            local_c0 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0);
            *(undefined4 *)(puVar7 + 1) = 5;
            *puVar7 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_c8 = FUN_1400578c0(param_1);
            uVar14 = 0;
            bVar2 = false;
            lVar6 = param_1;
            if (*(int *)(lVar10 + 0x130) != 0) {
                do {
                    local_b0 = &PTR_FUN_140b569f0;
                    local_98 = 1;
                    local_a0 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar7 = *(undefined8 **)(param_1 + 0x10);
                    uVar5 = FUN_14005c1b0(param_1,0);
                    *(undefined4 *)(puVar7 + 1) = 5;
                    *puVar7 = uVar5;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar3 = FUN_1400578c0(param_1);
                    iVar4 = 0;
                    iVar11 = 0;
                    lVar6 = *param_3;
                    local_a8 = uVar3;
                    iVar12 = iVar4;
                    if ((((lVar6 != 0) && (iVar12 = iVar11, *(int *)(lVar6 + 0x4a8) != 0)) &&
                         ((uint)uVar14 < 8)) && (*(int *)(lVar6 + 0x478 + uVar14 * 4) != 0)) {
                        if (*(int *)(lVar6 + 0x4a8) != 0) {
                            iVar4 = *(int *)(lVar6 + 0x478 + uVar14 * 4);
                        }
                        lVar6 = FUN_1400b5df0(DAT_140c658f0,iVar4);
                        if (lVar6 != 0) {
                            iVar12 = 1;
                            bVar2 = true;
                            local_e8 = 0;
                            local_d8 = 0;
                            local_e0 = 1;
                            puVar7 = (undefined8 *)FUN_140059170(param_1,0x18);
                            *puVar7 = 0;
                            puVar7[1] = 1;
                            puVar7[2] = 0;
                            lVar9 = *(longlong *)(param_1 + 0x20);
                            local_70 = FUN_140062650(param_1,"Game.Money",10);
                            local_68 = 4;
                            FUN_14005e8e0(param_1,lVar9 + 0xa0,&local_70,*(undefined8 *)(param_1 + 0x10));
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                            FUN_140058bf0(param_1,0xfffffffe);
                            FUN_1400fb540(&local_b0,L"monCost");
                            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            iVar4 = FUN_1405143c0(lVar10,&local_e8,lVar6,1,0);
                            if (iVar4 != 0) {
                                puVar7 = (undefined8 *)FUN_140059170(param_1,0x18);
                                *puVar7 = local_e8;
                                puVar7[1] = local_e0;
                                puVar7[2] = local_d8;
                                lVar9 = *(longlong *)(param_1 + 0x20);
                                local_60 = FUN_140062650(param_1,"Game.Money",10);
                                local_58 = 4;
                                FUN_14005e8e0(param_1,lVar9 + 0xa0,&local_60,*(undefined8 *)(param_1 + 0x10));
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_140058bf0(param_1,0xfffffffe);
                                FUN_1400fb540(&local_b0,L"monExtractGoldCost");
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            }
                            iVar4 = FUN_1405143c0(lVar10,&local_e8,lVar6,1,1);
                            if (iVar4 != 0) {
                                puVar7 = (undefined8 *)FUN_140059170(param_1,0x18);
                                *puVar7 = local_e8;
                                puVar7[1] = local_e0;
                                puVar7[2] = local_d8;
                                lVar6 = *(longlong *)(param_1 + 0x20);
                                local_50 = FUN_140062650(param_1,"Game.Money",10);
                                local_48 = 4;
                                FUN_14005e8e0(param_1,lVar6 + 0xa0,&local_50,*(undefined8 *)(param_1 + 0x10));
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_140058bf0(param_1,0xfffffffe);
                                FUN_1400fb540(&local_b0,L"monServiceTokenCost");
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                            }
                        }
                    }
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                    puVar7 = *(undefined8 **)(param_1 + 0x10);
                    *puVar7 = *puVar8;
                    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar6 = FUN_14018f0e0(&local_b0,L"bAllowed");
                    if (*(longlong *)(lVar6 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    }
                    else {
                        lVar9 = -1;
                        do {
                            lVar9 = lVar9 + 1;
                        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar9) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (CONCAT44(uStack164,local_a8) != 0) {
                        FUN_14018b900(CONCAT44(uStack164,local_a8),0);
                    }
                    puVar1 = *(uint **)(param_1 + 0x10);
                    puVar1[2] = 1;
                    *puVar1 = (uint)(iVar12 != 0);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                    FUN_1400fb1d0(&local_d0);
                    FUN_1400579e0(param_1);
                    uVar13 = (uint)uVar14 + 1;
                    uVar14 = (ulonglong)uVar13;
                } while (uVar13 < *(uint *)(lVar10 + 0x130));
                lVar6 = local_c0;
                if (bVar2) {
                    FUN_1400fb2a0(&local_90,L"arSlot",local_c8);
                    FUN_1400fb2a0(param_2,L"tClearInfo",local_88);
                    lVar6 = local_c0;
                }
            }
            if (lVar6 != 0) {
                FUN_1400579e0(lVar6);
            }
            FUN_1400579e0(param_1);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// undefined8 FUN_1405a3000(longlong param_1)
undefined8 LoadCraftingLib(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    code *pcVar3;
    int iVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    longlong lVar7;
    float fVar8;
    undefined8 local_18;
    undefined4 local_10;

    if ((DAT_140dc3480 & 1) == 0) {
        DAT_140dc3480 = DAT_140dc3480 | 1;
        uVar5 = FUN_140200220(0x3ed);
        if (uVar5 != 0) {
            uVar5 = (ulonglong)*(uint *)(uVar5 + 4);
        }
        _DAT_140dc3484 = (undefined4)uVar5;
    }
    LuaElementLoaderOrSo(param_1,"Game.Crafting");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar7 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140057020(param_1,"CraftingLib",&PTR_s_GetKnownTradeskills_140b6ccc0);
    FUN_140058710(param_1,"CodeEnumTradeskill",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar7 = 0xd;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumTradeskillTier",0x16);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar7 = 8;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCraftingDirection",0x19);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar7 = 9;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumItemCraftingGroupFlag",0x1d);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar7 = 7;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumItemStatType",0x14);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar7 = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCraftingDiscoveryHotCold",0x20);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b15324,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b14f64,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f314c,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Success",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumTradeskillResult",0x18);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Success",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InsufficentFund",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvalidItem",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvalidSlot",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MissingEngravingStation",0x17);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Unlocked",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"UnknownError",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RuneExists",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MissingRune",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DuplicateRune",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"AttemptFailed",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RuneSlotLimit",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar7,lVar7 + -0x20,lVar7 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar7 = FUN_140200220(0x501);
    if (lVar7 == 0) {
        fVar8 = 0.0;
    }
    else {
        fVar8 = *(float *)(lVar7 + 0x20);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"kfCoordinateBonusSignatureRadius",0x20);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar7 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    pcVar3 = DAT_140c63840;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    if (pcVar3 == (code *)0x0) {
        if (_DAT_140c63f1c == 0) {
            iVar4 = FUN_1401fddc0();
            if (-1 < iVar4) {
                lVar7 = (**(code **)(*DAT_140c64018 + 0x18))();
                goto LAB_1405a3aee;
            }
        }
    }
    else {
        lVar7 = (*pcVar3)(&PTR_u_Entitlement_140a6a248,0x20,DAT_140c63858);
        LAB_1405a3aee:
        if ((lVar7 != 0) && (uVar5 = (ulonglong)*(uint *)(lVar7 + 4), *(uint *)(lVar7 + 4) != 0))
            goto LAB_1405a3afd;
    }
    uVar5 = 0xffffffff;
    LAB_1405a3afd:
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)((float)uVar5 * 0.01);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"kfCoordinateBonusLoyaltyRadius",0x1e);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar7 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a3b90(void)

{
    longlong lVar1;

    if (_DAT_140c7df6c != 0) {
        return DAT_140c7df68;
    }
    _DAT_140c7df6c = 1;
    lVar1 = FUN_140200220(0x4df);
    if (lVar1 != 0) {
        DAT_140c7df68 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c7df68 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a3be0(void)

{
    longlong lVar1;

    if (_DAT_140c7df84 != 0) {
        return DAT_140c7df80;
    }
    _DAT_140c7df84 = 1;
    lVar1 = FUN_140200220(0x4e9);
    if (lVar1 != 0) {
        DAT_140c7df80 = *(undefined4 *)(lVar1 + 0x18);
        return *(undefined4 *)(lVar1 + 0x18);
    }
    DAT_140c7df80 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a3c40(void)

{
    longlong lVar1;

    if (_DAT_140c7df8c != 0) {
        return DAT_140c7df88;
    }
    _DAT_140c7df8c = 1;
    lVar1 = FUN_140200220(0x4e9);
    if (lVar1 != 0) {
        DAT_140c7df88 = *(undefined4 *)(lVar1 + 0x1c);
        return *(undefined4 *)(lVar1 + 0x1c);
    }
    DAT_140c7df88 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a3ca0(void)

{
    longlong lVar1;

    if (_DAT_140c7df94 != 0) {
        return DAT_140c7df90;
    }
    _DAT_140c7df94 = 1;
    lVar1 = FUN_140200220(0x1a1);
    if (lVar1 != 0) {
        DAT_140c7df90 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c7df90 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a3cf0(void)

{
    longlong lVar1;

    if (_DAT_140dc346c != 0) {
        return DAT_140dc3468;
    }
    _DAT_140dc346c = 1;
    lVar1 = FUN_140200220(0x3c2);
    if (lVar1 != 0) {
        DAT_140dc3468 = *(undefined4 *)(lVar1 + 0x18);
        return *(undefined4 *)(lVar1 + 0x18);
    }
    DAT_140dc3468 = 0;
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a3d50(void)

{
    longlong lVar1;

    if (_DAT_140dc347c != 0) {
        return DAT_140dc3478;
    }
    _DAT_140dc347c = 1;
    lVar1 = FUN_140200220(0x3c4);
    if (lVar1 != 0) {
        DAT_140dc3478 = *(undefined4 *)(lVar1 + 0x18);
        return *(undefined4 *)(lVar1 + 0x18);
    }
    DAT_140dc3478 = 0;
    return 0;
}



void FUN_1405a3db0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1 != param_2) {
        lVar2 = param_2 - param_1 >> 4;
        for (lVar1 = lVar2; lVar1 != 1; lVar1 = lVar1 >> 1) {
        }
        FUN_1405a3f80();
        if (lVar2 < 0x11) {
            FUN_1405a4130(param_1,param_2,&LAB_14059df50);
        }
        else {
            FUN_1405a4130(param_1,param_1 + 0x100,&LAB_14059df50);
            FUN_1405a4340(param_1 + 0x100,param_2);
        }
    }
    return;
}



void FUN_1405a3e60(undefined4 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = param_4 & 0xffffffff;
    uVar4 = param_3 & 0xffffffff;
    uVar1 = FUN_1405e6300(param_2,9,param_3,param_4,0);
    *param_1 = uVar1;
    uVar2 = FUN_1405e6300(param_2,8,uVar4,uVar3,0);
    param_1[1] = (float)(ulonglong)uVar2 * 0.01;
    uVar1 = FUN_1405e6480();
    param_1[2] = uVar1;
    uVar2 = FUN_1405e6300(param_2,1,uVar4,uVar3,0);
    param_1[3] = (float)(ulonglong)uVar2 * 0.01;
    uVar1 = FUN_1405e6300(param_2,0x15,uVar4,uVar3,0);
    param_1[4] = uVar1;
    uVar1 = FUN_1405e6300(param_2,3,uVar4,uVar3,0);
    param_1[5] = uVar1;
    uVar2 = FUN_1405e6300(param_2,2,uVar4,uVar3,0);
    param_1[6] = (float)(ulonglong)uVar2 * 0.01;
    return;
}



void FUN_1405a3f80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                   code *param_5)

{
    undefined8 uVar1;
    undefined8 uVar2;
    char cVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 local_28;
    undefined8 local_20;

    uVar4 = (longlong)param_2 - (longlong)param_1;
    do {
        if ((longlong)(uVar4 & 0xfffffffffffffff0) < 0x101) {
            return;
        }
        if (param_4 == 0) {
            FUN_1405a4280(param_1,param_2,param_2,0,param_5);
            return;
        }
        puVar7 = param_2 + -2;
        param_4 = param_4 + -1;
        puVar6 = param_1 + (((longlong)param_2 - (longlong)param_1 >> 4) -
                            ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1) * 2;
        cVar3 = (*param_5)(param_1,puVar6);
        if (cVar3 == '\0') {
            cVar3 = (*param_5)(param_1,puVar7);
            puVar5 = param_1;
            if (cVar3 == '\0') {
                cVar3 = (*param_5)(puVar6,puVar7);
                goto LAB_1405a4030;
            }
        }
        else {
            cVar3 = (*param_5)(puVar6);
            puVar5 = puVar6;
            if (cVar3 == '\0') {
                cVar3 = (*param_5)(param_1,puVar7);
                puVar6 = param_1;
                LAB_1405a4030:
                puVar5 = puVar6;
                if (cVar3 != '\0') {
                    puVar5 = puVar7;
                }
            }
        }
        local_28 = *puVar5;
        local_20 = puVar5[1];
        puVar6 = param_1;
        puVar7 = param_2;
        while( true ) {
            cVar3 = (*param_5)(puVar6,&local_28);
            puVar5 = puVar6;
            while (cVar3 != '\0') {
                puVar5 = puVar5 + 2;
                cVar3 = (*param_5)(puVar5,&local_28);
            }
            puVar7 = puVar7 + -2;
            cVar3 = (*param_5)(&local_28,puVar7);
            while (cVar3 != '\0') {
                puVar7 = puVar7 + -2;
                cVar3 = (*param_5)(&local_28,puVar7);
            }
            if (puVar7 <= puVar5) break;
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            *puVar5 = *puVar7;
            puVar6 = puVar5 + 2;
            puVar5[1] = puVar7[1];
            *puVar7 = uVar1;
            puVar7[1] = uVar2;
        }
        FUN_1405a3f80(puVar5,param_2,0,param_4,param_5);
        uVar4 = (longlong)puVar5 - (longlong)param_1;
        param_2 = puVar5;
    } while( true );
}



void FUN_1405a4130(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    char cVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 local_38;
    undefined8 local_30;

    if ((param_1 != param_2) && (puVar1 = param_1 + 2, puVar1 != param_2)) {
        puVar8 = param_1;
        puVar9 = puVar1;
        do {
            local_38 = *puVar9;
            local_30 = puVar9[1];
            cVar6 = (*param_3)(&local_38,param_1);
            if (cVar6 == '\0') {
                cVar6 = (*param_3)(&local_38,puVar8);
                puVar5 = puVar8;
                puVar3 = puVar9;
                while (puVar4 = puVar5, cVar6 != '\0') {
                    *puVar3 = *puVar4;
                    puVar3[1] = puVar4[1];
                    cVar6 = (*param_3)(&local_38,puVar4 + -2);
                    puVar5 = puVar4 + -2;
                    puVar3 = puVar4;
                }
                *puVar3 = local_38;
                puVar3[1] = local_30;
            }
            else {
                lVar2 = (0x10 - (longlong)param_1) + (longlong)puVar8;
                puVar3 = (undefined8 *)(lVar2 + (longlong)puVar1);
                for (lVar7 = lVar2 >> 4; 0 < lVar7; lVar7 = lVar7 + -1) {
                    puVar3[-2] = puVar3[-4];
                    puVar3[-1] = puVar3[-3];
                    puVar3 = puVar3 + -2;
                }
                *param_1 = local_38;
                param_1[1] = local_30;
            }
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
        } while (puVar9 != param_2);
    }
    return;
}



void FUN_1405a4280(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                   code *param_5)

{
    char cVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined8 local_10;

    FUN_1405a44a0(param_1,param_2,param_5);
    puVar2 = param_2;
    if (param_2 < param_3) {
        do {
            cVar1 = (*param_5)(puVar2,param_1);
            if (cVar1 != '\0') {
                local_18 = *puVar2;
                local_10 = puVar2[1];
                *puVar2 = *param_1;
                puVar2[1] = param_1[1];
                FUN_1405a4650(param_1,0,(longlong)param_2 - (longlong)param_1 >> 4,&local_18,param_5);
            }
            puVar2 = puVar2 + 2;
        } while (puVar2 < param_3);
    }
    FUN_1405a4400(param_1,param_2,param_5);
    return;
}



void FUN_1405a4340(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    char cVar4;
    undefined8 local_18;
    undefined8 local_10;

    if (param_1 != param_2) {
        do {
            local_18 = *param_1;
            local_10 = param_1[1];
            cVar4 = (*param_4)(&local_18,param_1 + -2);
            puVar3 = param_1 + -2;
            puVar2 = param_1;
            while (puVar1 = puVar3, cVar4 != '\0') {
                *puVar2 = *puVar1;
                puVar2[1] = puVar1[1];
                cVar4 = (*param_4)(&local_18,puVar1 + -2);
                puVar3 = puVar1 + -2;
                puVar2 = puVar1;
            }
            param_1 = param_1 + 2;
            *puVar2 = local_18;
            puVar2[1] = local_10;
        } while (param_1 != param_2);
    }
    return;
}



void FUN_1405a4400(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined8 local_18;
    undefined8 local_10;

    uVar2 = param_2 - (longlong)param_1;
    if (0x10 < (longlong)(uVar2 & 0xfffffffffffffff0)) {
        puVar1 = (undefined8 *)(param_2 + -0x10);
        do {
            local_18 = *puVar1;
            local_10 = puVar1[1];
            *puVar1 = *param_1;
            puVar1[1] = param_1[1];
            FUN_1405a4650(param_1,0,(longlong)(uVar2 - 0x10) >> 4,&local_18,param_3);
            puVar1 = puVar1 + -2;
            uVar2 = (longlong)puVar1 + (0x10 - (longlong)param_1);
        } while (0x10 < (longlong)(uVar2 & 0xfffffffffffffff0));
    }
    return;
}



void FUN_1405a44a0(longlong param_1,longlong param_2,code *param_3)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 local_38;
    undefined8 local_30;

    lVar9 = param_2 - param_1 >> 4;
    if (lVar9 < 2) {
        return;
    }
    lVar3 = (lVar9 + -2) / 2;
    lVar4 = lVar3 * 2 + 2;
    puVar8 = (undefined8 *)(lVar3 * 0x10 + param_1);
    do {
        local_38 = *puVar8;
        local_30 = puVar8[1];
        lVar5 = lVar4;
        lVar1 = lVar3;
        while (lVar6 = lVar5, lVar6 < lVar9) {
            lVar5 = lVar6 * 0x10 + param_1;
            cVar2 = (*param_3)(lVar5,lVar5 + -0x10);
            if (cVar2 != '\0') {
                lVar6 = lVar6 + -1;
            }
            *(undefined8 *)(param_1 + lVar1 * 0x10) = *(undefined8 *)(param_1 + lVar6 * 0x10);
            *(undefined8 *)(param_1 + 8 + lVar1 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar6 * 0x10);
            lVar1 = lVar6;
            lVar5 = lVar6 * 2 + 2;
        }
        if (lVar6 == lVar9) {
            *(undefined8 *)(param_1 + lVar1 * 0x10) = *(undefined8 *)(param_1 + -0x10 + lVar6 * 0x10);
            *(undefined8 *)(param_1 + 8 + lVar1 * 0x10) = *(undefined8 *)(param_1 + -8 + lVar6 * 0x10);
            lVar1 = lVar6 + -1;
        }
        while (lVar3 < lVar1) {
            lVar5 = (lVar1 + -1) / 2;
            puVar7 = (undefined8 *)(lVar5 * 0x10 + param_1);
            cVar2 = (*param_3)(puVar7,&local_38);
            if (cVar2 == '\0') break;
            *(undefined8 *)(param_1 + lVar1 * 0x10) = *puVar7;
            *(undefined8 *)(param_1 + 8 + lVar1 * 0x10) = puVar7[1];
            lVar1 = lVar5;
        }
        *(undefined8 *)(param_1 + lVar1 * 0x10) = local_38;
        *(undefined8 *)(param_1 + 8 + lVar1 * 0x10) = local_30;
        if (lVar3 == 0) {
            return;
        }
        lVar3 = lVar3 + -1;
        puVar8 = puVar8 + -2;
        lVar4 = lVar4 + -2;
    } while( true );
}



void FUN_1405a4650(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   code *param_5)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar1 = param_2 * 2;
    lVar5 = param_2;
    while (lVar4 = lVar1 + 2, lVar4 < param_3) {
        lVar3 = lVar4 * 0x10 + param_1;
        cVar2 = (*param_5)(lVar3,lVar3 + -0x10);
        if (cVar2 != '\0') {
            lVar4 = lVar1 + 1;
        }
        *(undefined8 *)(param_1 + lVar5 * 0x10) = *(undefined8 *)(param_1 + lVar4 * 0x10);
        *(undefined8 *)(param_1 + 8 + lVar5 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar4 * 0x10);
        lVar5 = lVar4;
        lVar1 = lVar4 * 2;
    }
    if (lVar4 == param_3) {
        *(undefined8 *)(param_1 + lVar5 * 0x10) = *(undefined8 *)(param_1 + -0x10 + lVar4 * 0x10);
        *(undefined8 *)(param_1 + 8 + lVar5 * 0x10) = *(undefined8 *)(param_1 + -8 + lVar4 * 0x10);
        lVar5 = lVar1 + 1;
    }
    FUN_1405a4730(param_1,lVar5,param_2,param_4);
    return;
}



void FUN_1405a4730(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                   code *param_5)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar1 = param_2 + -1;
    if (param_3 < param_2) {
        do {
            lVar3 = lVar1 / 2;
            puVar4 = (undefined8 *)(lVar3 * 0x10 + param_1);
            cVar2 = (*param_5)(puVar4,param_4);
            if (cVar2 == '\0') break;
            *(undefined8 *)(param_1 + param_2 * 0x10) = *puVar4;
            *(undefined8 *)(param_1 + 8 + param_2 * 0x10) = puVar4[1];
            lVar1 = lVar3 + -1;
            param_2 = lVar3;
        } while (param_3 < lVar3);
    }
    *(undefined8 *)(param_1 + param_2 * 0x10) = *param_4;
    *(undefined8 *)(param_1 + 8 + param_2 * 0x10) = param_4[1];
    return;
}



float FUN_1405a4800(longlong param_1,uint param_2)

{
    int iVar1;
    float fVar2;
    float fVar3;

    iVar1 = FUN_140591cd0();
    fVar3 = 0.0;
    if (iVar1 == 0) {
        fVar2 = 0.0;
    }
    else {
        fVar2 = *(float *)(param_1 + 0x364);
    }
    if (param_2 < 5) {
        fVar3 = *(float *)(param_1 + 0x318 + (ulonglong)param_2 * 4);
    }
    return (fVar2 + 1.0) * fVar3;
}



bool FUN_1405a4850(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x66c8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return false;
    }
    return *(int *)(local_res8 + 0x24) != 0;
}



undefined4 FUN_1405a48c0(longlong param_1,uint param_2)

{
    uint uVar1;
    uint uVar2;

    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar1 != 0) {
        do {
            uVar2 = param_2;
            param_2 = uVar1;
        } while (uVar1 < uVar2);
        if (uVar2 != 0) {
            return *(undefined4 *)(param_1 + 0x20 + (ulonglong)(uVar2 - 1) * 0x30);
        }
    }
    return 0;
}



undefined8 FUN_1405a48f0(undefined8 param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined *puVar3;
    undefined8 *puVar4;
    int iVar5;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    local_res8 = param_1;
    puVar1 = (undefined8 *)FUN_14018b280(0xcf90,0);
    puVar4 = (undefined8 *)0x0;
    DAT_140c7df98 = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
        iVar5 = 0x14b;
        *puVar1 = &PTR_FUN_140b76b08;
        puVar2 = puVar1 + 9;
        do {
            iVar5 = iVar5 + -1;
            puVar2[-8] = 0;
            puVar2[-4] = 0;
            puVar2[-3] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + -6) = 0x544e5645;
            *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[8] = 0;
            puVar2[9] = 0;
            *(undefined4 *)(puVar2 + 3) = 0x544e5645;
            *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
            puVar2 = puVar2 + 0x14;
        } while (-1 < iVar5);
        puVar1[0x19f1] = 0;
        DAT_140c7df98 = puVar1;
    }
    iVar5 = (**(code **)*DAT_140c7df98)();
    if (iVar5 < 0) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_res8 = 0x141e1b508;
        puVar3 = &DAT_140c8af90;
    }
    else {
        puVar1 = (undefined8 *)FUN_14018b280(8);
        if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = &PTR_LAB_140b76b18;
            puVar4 = puVar1;
        }
        DAT_140c7dfa0 = puVar4;
        iVar5 = (**(code **)*puVar4)();
        if (-1 < iVar5) {
            return 0;
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_res8 = 0x141e1b4d0;
        puVar3 = &DAT_140c8af94;
    }
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    iVar5 = FUN_140196f30(puVar3,5,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar5 != 0) {
        DebugBreak();
    }
    return 0x80004005;
}



void FUN_1405a4ad0(void)

{
    longlong *plVar1;

    if (DAT_140c7df98 != (longlong *)0x0) {
        (**(code **)(*DAT_140c7df98 + 8))();
        plVar1 = DAT_140c7df98;
        if (DAT_140c7df98 != (longlong *)0x0) {
            *DAT_140c7df98 = (longlong)&PTR_FUN_140b6cf40;
            FUN_14018b900(plVar1,0);
        }
        DAT_140c7df98 = (longlong *)0x0;
    }
    if (DAT_140c7dfa0 != (longlong *)0x0) {
        (**(code **)(*DAT_140c7dfa0 + 8))();
        plVar1 = DAT_140c7dfa0;
        if (DAT_140c7dfa0 != (longlong *)0x0) {
            *DAT_140c7dfa0 = (longlong)&PTR_FUN_140b6cf40;
            FUN_14018b900(plVar1,0);
        }
        DAT_140c7dfa0 = (longlong *)0x0;
    }
    return;
}



undefined8 * FUN_1405a4b50(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b783c0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong FUN_1405a4b80(longlong param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = DAT_140c65898;
    iVar1 = FUN_1403bad30(DAT_140c65898,*(undefined4 *)(param_1 + 0x40),
                          *(undefined *)(DAT_140c65898 + 0x6dec));
    if (iVar1 != 0) {
        if (((*(longlong *)(lVar2 + 0x78) == 0) || (lVar2 == 0)) ||
            (lVar2 = FUN_1405a5b90(lVar2,iVar1), lVar2 == 0)) {
            lVar2 = FUN_1407a0fd0(DAT_140c65b70,iVar1);
        }
        if (lVar2 != 0) {
            if (((param_2 != 0) && (*(int *)(*(longlong *)(lVar2 + 0x70) + 0x194) != 0)) &&
                ((iVar1 = FUN_1403a8000(), iVar1 != 0 && (lVar3 = FUN_140565020(), lVar3 != 0)))) {
                return lVar3;
            }
            return lVar2;
        }
    }
    return 0;
}



void FUN_1405a4c50(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_1405a4b80(param_1,1);
    if (lVar1 != 0) {
        FUN_140564760(param_1,**(undefined4 **)(lVar1 + 0x70));
        return;
    }
    return;
}



undefined4 FUN_1405a4c80(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_1405a4b80(param_1,1);
    if (lVar1 != 0) {
        return *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
    return 0;
}



void FUN_1405a4cb0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_1405a4b80(param_1,1);
    if (lVar1 != 0) {
        FUN_1405645b0(param_1,**(undefined4 **)(lVar1 + 0x70),0);
        return;
    }
    return;
}



undefined8 FUN_1405a4ce0(longlong param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    iVar1 = FUN_1403bad30(DAT_140c65898,*(undefined4 *)(param_1 + 0x40),
                          *(undefined *)(DAT_140c65898 + 0x6dec));
    if (((iVar1 != 0) &&
         ((((*(longlong *)(lVar2 + 0x78) != 0 && (lVar2 != 0)) &&
            (lVar2 = FUN_1405a5b90(lVar2,iVar1), lVar2 != 0)) ||
           (lVar2 = FUN_1407a0fd0(DAT_140c65b70,iVar1), lVar2 != 0)))) &&
        (*(int *)(*(longlong *)(lVar2 + 0x70) + 0x194) != 0)) {
        iVar1 = FUN_1403a8000();
        if (iVar1 == 0) {
            return 1;
        }
        if (param_2 != (int *)0x0) {
            *param_2 = iVar1;
        }
        return 2;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1405a4d90(undefined8 param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;

    uVar4 = 0;
    while( true ) {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c63ab0 != 0) {
                return 0;
            }
            iVar2 = FUN_14023a720();
            if (iVar2 < 0) {
                return 0;
            }
            uVar1 = (**(code **)(*DAT_140c64198 + 0x28))();
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4ServiceTokenCost_140a6d428,DAT_140c63858);
        }
        if (uVar1 <= uVar4) {
            return 0;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c63ab0 == 0) {
                iVar2 = FUN_14023a720();
                if (iVar2 < 0) {
                    lVar3 = 0;
                }
                else {
                    lVar3 = (**(code **)(*DAT_140c64198 + 0x20))(DAT_140c64198,uVar4);
                }
            }
            else {
                lVar3 = 0;
            }
        }
        else {
            lVar3 = (*DAT_140c63848)(&PTR_u_Spell4ServiceTokenCost_140a6d428,uVar4,DAT_140c63858);
        }
        if (param_2 == *(int *)(lVar3 + 4)) break;
        uVar4 = uVar4 + 1;
    }
    return *(undefined4 *)(lVar3 + 8);
}



undefined8 FUN_1405a4e60(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    int *piVar6;
    int *piVar7;
    longlong lVar8;

    plVar5 = (longlong *)FUN_14055de80(param_1,*param_2,param_2[1]);
    if (plVar5 == (longlong *)0x0) {
        return 0;
    }
    lVar2 = plVar5[0x27];
    uVar1 = param_2[6];
    *(undefined (*) [16])(plVar5 + 0x2c) = ZEXT1216(*(undefined (*) [12])(param_2 + 3));
    *(undefined4 *)(plVar5 + 0x2e) = uVar1;
    FUN_14053d890(plVar5,*(undefined *)(param_2 + 7),*(undefined8 *)(param_2 + 8),
                  *(undefined *)(param_2 + 10),*(undefined8 *)(param_2 + 0xc));
    *(undefined4 *)(plVar5 + 0x2b) = param_2[2];
    FUN_14053dd00(plVar5);
    if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14046afc0(*(longlong *)(param_1 + 0x78),lVar2,0);
        piVar7 = *(int **)(lVar2 + 0x38);
        if (piVar7 != (int *)0x0) {
            iVar4 = (**(code **)(*plVar5 + 8))(plVar5);
            for (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar8 != 0;
                 lVar8 = *(longlong *)(lVar8 + 0x88)) {
                if (*(int *)(lVar8 + 8) == iVar4) {
                    iVar4 = (**(code **)(*plVar5 + 8))(plVar5);
                    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
                    goto joined_r0x0001405a4f65;
                }
            }
        }
    }
    LAB_1405a4fd9:
    (**(code **)(**(longlong **)(param_1 + 0x6d90) + 0xc0))
            (*(longlong **)(param_1 + 0x6d90),*(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 4));
    return 0;
    joined_r0x0001405a4f65:
    if (lVar8 == 0) goto LAB_1405a4f85;
    if ((*(int *)(lVar8 + 4) == 1) && (iVar4 == *(int *)(lVar8 + 0xc))) {
        FUN_1407a0390();
        goto LAB_1405a4f85;
    }
    lVar8 = *(longlong *)(lVar8 + 0x88);
    goto joined_r0x0001405a4f65;
    LAB_1405a4f85:
    lVar8 = 3;
    do {
        piVar7 = piVar7 + 1;
        if ((*piVar7 != 0) && (piVar6 = (int *)FUN_14023dc80(), piVar6 != (int *)0x0)) {
            for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar3 != 0;
                 lVar3 = *(longlong *)(lVar3 + 0x88)) {
                if ((*(int *)(lVar3 + 4) == 2) && (*piVar6 == *(int *)(lVar3 + 0xc))) {
                    FUN_1407a0390();
                    break;
                }
            }
        }
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    goto LAB_1405a4fd9;
}



undefined8 FUN_1405a5010(longlong param_1,int *param_2)

{
    ulonglong uVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    bool bVar7;

    plVar6 = (longlong *)0x0;
    plVar3 = *(longlong **)(DAT_140c65b70 + 0x7c8);
    plVar5 = plVar6;
    if (plVar3 != (longlong *)0x0) {
        do {
            plVar5 = plVar3;
            if (*(int *)(plVar3 + 0xc) == *param_2) break;
            plVar3 = (longlong *)plVar3[8];
            plVar5 = plVar6;
        } while (plVar3 != (longlong *)0x0);
    }
    lVar4 = *(longlong *)(param_1 + 0x78);
    plVar3 = plVar6;
    if (param_2[1] != 0) {
        if (lVar4 != 0) {
            if (DAT_140c65898[0xf] == lVar4) {
                bVar7 = true;
            }
            else {
                bVar7 = DAT_140c65898[0xc92] == lVar4;
            }
            if (bVar7) {
                plVar3 = DAT_140c65898;
            }
            if ((plVar3 != (longlong *)0x0) &&
                (plVar3 = (longlong *)FUN_1405a5b90(), plVar3 != (longlong *)0x0)) goto LAB_1405a50ba;
        }
        plVar3 = (longlong *)FUN_1407a0fd0();
    }
    LAB_1405a50ba:
    if (((((uint)param_2[2] < 0x14c) && (lVar4 = FUN_140237240(), lVar4 != 0)) &&
         (uVar1 = *(ulonglong *)(lVar4 + 8), uVar1 != 0)) &&
        (plVar6 = (longlong *)0x0, uVar1 <= DAT_140c3fe70)) {
        plVar6 = (longlong *)(DAT_140c3fe68 + uVar1);
    }
    FUN_1400035b0(0x18,3,0,param_2[1],*param_2,plVar6);
    if (plVar3 == (longlong *)0x0) {
        if (plVar5 == (longlong *)0x0) {
            return 0;
        }
        (**(code **)(*plVar5 + 8))(plVar5);
    }
    FUN_1403a12a0(param_1,param_2[2],plVar3,1);
    if (*(longlong *)(param_1 + 0x78) != 0) {
        iVar2 = DAT_140c45e40;
        if (*DAT_140c63750 < DAT_140c45e40) {
            iVar2 = *DAT_140c63750;
        }
        if (((&DAT_140c45e50)[iVar2] == '\0') || (param_2[2] != 0xd)) {
            FUN_14046aa00(*(longlong *)(param_1 + 0x78),0,0);
        }
    }
    if (DAT_140c65b70 != 0) {
        FUN_140561ad0(DAT_140c65b70,plVar5);
    }
    return 0;
}



undefined8 FUN_1405a51a0(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    int *piVar5;
    int *piVar6;
    longlong lVar7;
    longlong local_res10;
    undefined8 local_res18 [2];
    undefined **local_128;
    undefined8 local_120;
    LPVOID local_118;
    undefined **local_108;
    undefined8 local_100;
    LPVOID local_f8;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_d0;
    undefined4 local_cc;
    undefined2 local_c8;
    undefined4 local_c4;
    undefined4 local_94;
    undefined4 local_90;

    FUN_1407e4830(&local_e8,0);
    local_c8 = *(undefined2 *)(param_2 + 5);
    local_e8 = param_2[1];
    local_e4 = param_2[2];
    local_e0 = param_2[3];
    local_d0 = *param_2;
    local_cc = param_2[4];
    local_c4 = param_2[6];
    local_90 = param_2[0x12];
    local_94 = param_2[0x13];
    if (DAT_140c65b70 == 0) {
        iVar3 = 1;
    }
    else {
        iVar3 = FUN_140561780();
        if (iVar3 == 0) {
            plVar4 = (longlong *)FUN_140561c30(DAT_140c65b70,*param_2);
            if (plVar4 == (longlong *)0x0) {
                local_120 = 0;
                local_128 = &PTR_LAB_140b5e648;
                local_118 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_128);
                local_108 = local_128;
                local_100 = local_120;
                local_f8 = local_118;
                local_res10 = 0x141e1b660;
                iVar3 = FUN_1401971e0(&DAT_140c8af98,0x18,&local_res10,&local_108);
                local_128 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_118);
                if (iVar3 != 0) {
                    DebugBreak();
                }
                return 0x80004005;
            }
            uVar1 = param_2[10];
            *(undefined (*) [16])(plVar4 + 0x2c) = ZEXT1216(*(undefined (*) [12])(param_2 + 7));
            *(undefined4 *)(plVar4 + 0x2e) = uVar1;
            FUN_14053d890(plVar4,*(undefined *)(param_2 + 0xb),*(undefined8 *)(param_2 + 0xc),
                          *(undefined *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10));
            FUN_14053dd00();
            if (*(longlong *)(param_1 + 0x78) == 0) {
                return 0;
            }
            if (*(longlong *)(param_1 + 0x6490) == 0) {
                return 0;
            }
            if (param_2[4] != *(int *)(*(longlong *)(param_1 + 0x6490) + 8)) {
                return 0;
            }
            FUN_14046afc0(*(longlong *)(param_1 + 0x78),plVar4[0x27],0);
            piVar6 = *(int **)(plVar4[0x27] + 0x38);
            if (piVar6 == (int *)0x0) {
                return 0;
            }
            iVar3 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
            while( true ) {
                if (lVar7 == 0) {
                    return 0;
                }
                if (*(int *)(lVar7 + 8) == iVar3) break;
                lVar7 = *(longlong *)(lVar7 + 0x88);
            }
            iVar3 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608);
            do {
                if (lVar7 == 0) {
                    LAB_1405a54df:
                    lVar7 = 3;
                    do {
                        piVar6 = piVar6 + 1;
                        if ((*piVar6 != 0) && (piVar5 = (int *)FUN_14023dc80(), piVar5 != (int *)0x0)) {
                            for (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar2 != 0;
                                 lVar2 = *(longlong *)(lVar2 + 0x88)) {
                                if ((*(int *)(lVar2 + 4) == 2) && (*piVar5 == *(int *)(lVar2 + 0xc))) {
                                    FUN_1407a0390();
                                    break;
                                }
                            }
                        }
                        lVar7 = lVar7 + -1;
                        if (lVar7 == 0) {
                            return 0;
                        }
                    } while( true );
                }
                if ((*(int *)(lVar7 + 4) == 1) && (iVar3 == *(int *)(lVar7 + 0xc))) {
                    FUN_1407a0390();
                    goto LAB_1405a54df;
                }
                lVar7 = *(longlong *)(lVar7 + 0x88);
            } while( true );
        }
    }
    local_120 = 0;
    local_128 = &PTR_LAB_140b5e648;
    local_118 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_128);
    local_108 = local_128;
    local_f8 = local_118;
    local_100 = local_120;
    FUN_14018d540(&local_res10,&DAT_140b4f534,iVar3);
    local_res18[0] = 0x141e1b5b0;
    iVar3 = FUN_1401971e0(&DAT_140c8af9c,0x18,local_res18,local_res10,&local_108);
    if (local_res10 != 0) {
        (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
    }
    local_128 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_118);
    if (iVar3 == 0) {
        return 0;
    }
    DebugBreak();
    return 0;
}



undefined8 FUN_1405a5980(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*param_2 != 0) {
        do {
            lVar1 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(*(longlong *)(param_2 + 2) + uVar3 * 0xc))
                    ;
            if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
                do {
                    if (*(int *)(lVar1 + 0x40) == *(int *)(*(longlong *)(param_2 + 2) + 4 + uVar3 * 0xc)) {
                        FUN_1407188d0();
                        break;
                    }
                    lVar1 = *(longlong *)(lVar1 + 0x28);
                } while (lVar1 != 0);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *param_2);
    }
    return 0;
}



undefined8 FUN_1405a5a10(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*param_2 != 0) {
        do {
            lVar1 = FUN_140561c30(DAT_140c65b70);
            if (lVar1 == 0) {
                return 0;
            }
            lVar1 = *(longlong *)(lVar1 + 0x48);
            if (lVar1 != 0) {
                do {
                    if (*(int *)(lVar1 + 0x40) == *(int *)(*(longlong *)(param_2 + 2) + 4 + uVar3 * 0xc)) {
                        FUN_140718980();
                        break;
                    }
                    lVar1 = *(longlong *)(lVar1 + 0x28);
                } while (lVar1 != 0);
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *param_2);
    }
    return 0;
}



undefined8 FUN_1405a5aa0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    uint uVar4;
    ulonglong uVar5;

    plVar3 = (longlong *)FUN_140561c30(DAT_140c65b70);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        uVar5 = 0;
        if (*(int *)(param_2 + 4) != 0) {
            do {
                for (lVar1 = plVar3[9]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
                    if (*(int *)(lVar1 + 0x40) == *(int *)(*(longlong *)(param_2 + 8) + uVar5 * 4)) {
                        FUN_1407177b0(lVar1);
                        FUN_14018b900(lVar1);
                        if ((((plVar3[9] == 0) &&
                              (iVar2 = *(int *)(*(longlong *)(plVar3[0x27] + 0x70) + 0x18), iVar2 != 1)) &&
                             (iVar2 != 3)) &&
                            (((iVar2 != 8 && (iVar2 != 10)) &&
                              ((DAT_140c65b70 != 0 && (iVar2 = FUN_140561ad0(), iVar2 == 0)))))) {
                            return 0;
                        }
                        break;
                    }
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(param_2 + 4));
        }
    }
    return 0;
}



undefined8 FUN_1405a5b90(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x7d18);
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



void FUN_1405a5bf0(int param_1,undefined8 param_2,undefined8 param_3)

{
    int *piVar1;
    int *piVar2;

    piVar2 = *(int **)(DAT_140c65898 + 0x6cb8 + (longlong)param_1 * 8);
    while (piVar2 != (int *)0x0) {
        piVar1 = *(int **)(piVar2 + 10);
        *(undefined8 *)(piVar2 + 0xc) = param_2;
        *(undefined8 *)(piVar2 + 0xe) = param_3;
        if (*piVar2 == 0) {
            (**(code **)(piVar2 + 4))();
        }
        else if (*piVar2 == 1) {
            (**(code **)(piVar2 + 4))(*(undefined8 *)(piVar2 + 2),*(undefined8 *)(piVar2 + 6));
        }
        *(undefined8 *)(piVar2 + 0xc) = 0;
        *(undefined8 *)(piVar2 + 0xe) = 0;
        piVar2 = piVar1;
    }
    return;
}



void FUN_1405a5c90(longlong param_1,short *param_2)

{
    ulonglong **ppuVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    ulonglong uVar4;
    longlong *plVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    short *local_res10;
    longlong *local_res18;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;

    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        plVar2 = (longlong *)(param_1 + 0x6d48);
        local_res10 = param_2;
        uVar7 = (**(code **)(param_1 + 28000))(&local_res10);
        for (puVar9 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x6d58) + (uVar7 % *(ulonglong *)(param_1 + 0x6d50)) * 8
                ); puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
            if ((uVar7 == *puVar9) &&
                (iVar6 = (**(code **)(param_1 + 0x6d68))(&local_res10,puVar9 + 2), iVar6 != 0)) {
                if (puVar9 + 3 != (ulonglong *)0x0) {
                    (***(code ***)puVar9[3])();
                    return;
                }
                break;
            }
        }
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x7250) + 0x28))
                (*(longlong **)(param_1 + 0x7250),local_res10,&local_res18,0);
        plVar5 = local_res18;
        if (-1 < iVar6) {
            puVar8 = (ulonglong *)FUN_14018b280(0x28);
            puVar9 = (ulonglong *)0x0;
            puVar12 = puVar9;
            if (puVar8 != (ulonglong *)0x0) {
                *puVar8 = (ulonglong)&PTR_LAB_140b6cfe0;
                puVar8[3] = 0;
                puVar8[4] = 0;
                *(undefined4 *)(puVar8 + 1) = 1;
                puVar8[2] = (ulonglong)plVar5;
                (**(code **)*plVar5)(plVar5);
                puVar12 = puVar8;
            }
            if (*plVar2 == *(longlong *)(param_1 + 0x6d50)) {
                FUN_1400290d0(plVar2);
            }
            uVar7 = (**(code **)(param_1 + 28000))(&local_res10);
            lVar10 = *(longlong *)(param_1 + 0x6d58);
            uVar11 = uVar7 % *(ulonglong *)(param_1 + 0x6d50);
            puVar8 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar8 != (ulonglong *)0x0) {
                uVar4 = *(ulonglong *)(lVar10 + uVar11 * 8);
                *puVar8 = uVar7;
                puVar8[1] = uVar4;
                puVar8[3] = (ulonglong)puVar12;
                puVar8[2] = (ulonglong)local_res10;
                puVar9 = puVar8;
            }
            *(ulonglong **)(lVar10 + uVar11 * 8) = puVar9;
            *plVar2 = *plVar2 + 1;
            lVar10 = (**(code **)(**(longlong **)(param_1 + 0x7248) + 0x48))();
            local_38 = *(undefined4 *)(lVar10 + 0x20);
            local_30 = 0;
            local_34 = *(undefined4 *)(lVar10 + 0x24);
            (**(code **)(*local_res18 + 0xf0))(local_res18,&local_38);
            local_38 = 0;
            iVar6 = (**(code **)(*local_res18 + 0x18))(local_res18,&local_38,0);
            if ((iVar6 == 0) && (ppuVar3 = (ulonglong **)(param_1 + 0x6d70), puVar12[3] == 0)) {
                puVar12[3] = (ulonglong)ppuVar3;
                ppuVar1 = (ulonglong **)(puVar12 + 4);
                *ppuVar1 = *ppuVar3;
                *ppuVar3 = puVar12;
                if (*ppuVar1 != (ulonglong *)0x0) {
                    (*ppuVar1)[3] = (ulonglong)ppuVar1;
                }
            }
            if (local_res18 != (longlong *)0x0) {
                (**(code **)(*local_res18 + 8))();
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405a5fe0(longlong param_1,longlong param_2,code **param_3)

{
    uint uVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    int iVar10;
    ulonglong uVar11;
    uint uVar12;
    bool bVar13;

    if (*(int *)(*(longlong *)(param_2 + 0x70) + 0x104) != 0) {
        if (*(longlong *)(param_2 + 8) != 0) {
            uVar9 = 0;
            do {
                uVar11 = 0;
                do {
                    uVar12 = 0;
                    do {
                        bVar13 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x18) == 8;
                        uVar1 = *(uint *)(*(longlong *)(param_2 + 8) + 0x1c);
                        lVar7 = *(longlong *)(DAT_140c65b70 + 0x658);
                        lVar6 = *(longlong *)(lVar7 + 8);
                        lVar4 = lVar6;
                        lVar8 = lVar7;
                        if (lVar6 != 0) {
                            do {
                                iVar3 = (int)uVar9;
                                iVar10 = (int)uVar11;
                                if (bVar13) {
                                    if (*(int *)(lVar4 + 0x20) != 0) goto LAB_1405a6092;
                                    LAB_1405a60bd:
                                    lVar5 = *(longlong *)(lVar4 + 0x18);
                                }
                                else if (*(int *)(lVar4 + 0x20) == 0) {
                                    LAB_1405a6092:
                                    if ((*(uint *)(lVar4 + 0x24) <= uVar1) &&
                                        ((*(uint *)(lVar4 + 0x24) < uVar1 ||
                                          ((*(int *)(lVar4 + 0x28) <= iVar3 &&
                                            ((*(int *)(lVar4 + 0x28) < iVar3 ||
                                              ((*(int *)(lVar4 + 0x2c) <= iVar10 &&
                                                ((*(int *)(lVar4 + 0x2c) < iVar10 || (*(uint *)(lVar4 + 0x30) <= uVar12))))
                                              )))))))) goto LAB_1405a60bd;
                                    lVar5 = *(longlong *)(lVar4 + 0x10);
                                    lVar8 = lVar4;
                                }
                                else {
                                    lVar5 = *(longlong *)(lVar4 + 0x10);
                                    lVar8 = lVar4;
                                }
                                lVar4 = lVar5;
                            } while (lVar5 != 0);
                            while (lVar6 != 0) {
                                if (*(int *)(lVar6 + 0x20) == 0) {
                                    if (!bVar13) {
                                        LAB_1405a60e2:
                                        if ((uVar1 <= *(uint *)(lVar6 + 0x24)) &&
                                            ((uVar1 < *(uint *)(lVar6 + 0x24) ||
                                              ((iVar3 <= *(int *)(lVar6 + 0x28) &&
                                                ((iVar3 < *(int *)(lVar6 + 0x28) ||
                                                  ((iVar10 <= *(int *)(lVar6 + 0x2c) &&
                                                    ((iVar10 < *(int *)(lVar6 + 0x2c) || (uVar12 <= *(uint *)(lVar6 + 0x30)))
                                                    )))))))))) goto LAB_1405a610a;
                                    }
                                    lVar6 = *(longlong *)(lVar6 + 0x18);
                                }
                                else {
                                    if (bVar13) goto LAB_1405a60e2;
                                    LAB_1405a610a:
                                    lVar7 = lVar6;
                                    lVar6 = *(longlong *)(lVar6 + 0x10);
                                }
                            }
                        }
                        while (lVar7 != lVar8) {
                            if (*(int *)(*(longlong *)(lVar7 + 0x38) + 0x20) != 3) {
                                (**param_3)(*(int *)(param_3 + 1) + param_1);
                            }
                            lVar6 = *(longlong *)(lVar7 + 0x18);
                            if (lVar6 == 0) {
                                lVar6 = *(longlong *)(lVar7 + 8);
                                if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                                    do {
                                        lVar7 = lVar6;
                                        lVar6 = *(longlong *)(lVar7 + 8);
                                    } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                                }
                                if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                                    lVar7 = lVar6;
                                }
                            }
                            else {
                                for (lVar4 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar4 != 0;
                                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                                    lVar6 = lVar4;
                                }
                            }
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < 0x20);
                    uVar11 = uVar11 + 1;
                } while (uVar11 < 8);
                uVar9 = uVar9 + 1;
            } while (uVar9 < 8);
        }
        if (*(int *)(*(longlong *)(param_2 + 0x70) + 0x50) != 0) {
            uVar9 = 0x54;
            do {
                uVar2 = *(undefined4 *)(uVar9 + *(longlong *)(param_2 + 0x70));
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64f14 != 0) || (iVar3 = FUN_140237420(), iVar3 < 0)) break;
                    lVar7 = (**(code **)(*DAT_140c64a28 + 0x18))(DAT_140c64a28,uVar2);
                }
                else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_Spell4ClientMissile_140a6d188,uVar2,DAT_140c63858);
                }
                if (lVar7 == 0) break;
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                uVar9 = uVar9 + 4;
            } while (uVar9 < 0x6c);
        }
        if (*(int *)(*(longlong *)(param_2 + 0x70) + 0x34) != 0) {
            uVar9 = 0x38;
            do {
                uVar2 = *(undefined4 *)(uVar9 + *(longlong *)(param_2 + 0x70));
                if (DAT_140c63840 == (code *)0x0) {
                    if (_DAT_140c64f14 != 0) {
                        return;
                    }
                    iVar3 = FUN_140237420();
                    if (iVar3 < 0) {
                        return;
                    }
                    lVar7 = (**(code **)(*DAT_140c64a28 + 0x18))(DAT_140c64a28,uVar2);
                }
                else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_Spell4ClientMissile_140a6d188,uVar2,DAT_140c63858);
                }
                if (lVar7 == 0) {
                    return;
                }
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                (**param_3)(*(int *)(param_3 + 1) + param_1);
                uVar9 = uVar9 + 4;
            } while (uVar9 < 0x50);
        }
    }
    return;
}



void FUN_1405a6580(longlong param_1)

{
    uint uVar1;
    bool bVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 uVar6;
    int *piVar7;
    uint *puVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    bool bVar13;
    longlong local_res8;
    longlong local_res10;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;

    if (*(longlong *)(param_1 + 0x78) == 0) {
        uVar6 = 0x17;
    }
    else {
        uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xdc);
    }
    lVar3 = FUN_1401f31e0(uVar6);
    if (lVar3 == 0) {
        return;
    }
    lVar12 = 2;
    piVar7 = (int *)(lVar3 + 0x44);
    lVar10 = 0;
    bVar13 = true;
    lVar9 = 2;
    lVar11 = DAT_140c65898;
    do {
        lVar4 = *(longlong *)(param_1 + 0x78);
        if (*piVar7 != 0) {
            if (lVar4 == 0) {
                LAB_1405a6633:
                lVar4 = FUN_1407a0fd0();
                lVar11 = DAT_140c65898;
                if (lVar4 == 0) goto LAB_1405a6677;
            }
            else {
                bVar2 = bVar13;
                if (*(longlong *)(lVar11 + 0x78) != lVar4) {
                    bVar2 = *(longlong *)(lVar11 + 0x6490) == lVar4;
                }
                lVar4 = lVar10;
                if (bVar2) {
                    lVar4 = lVar11;
                }
                if ((lVar4 == 0) || (lVar4 = FUN_1405a5b90(), lVar4 == 0)) goto LAB_1405a6633;
            }
            local_48 = 0x405a5c90;
            uStack68 = 1;
            uStack64 = 0;
            FUN_1405a5fe0(param_1,lVar4,&local_48);
            lVar11 = DAT_140c65898;
        }
        LAB_1405a6677:
        piVar7 = piVar7 + 1;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar8 = (uint *)(lVar3 + 0x4c);
    do {
        uVar1 = *puVar8;
        lVar9 = *(longlong *)(param_1 + 0x78);
        if (uVar1 != 0) {
            if (lVar9 == 0) {
                LAB_1405a6734:
                lVar9 = FUN_1407a0fd0();
                lVar11 = DAT_140c65898;
                if (lVar9 == 0) goto LAB_1405a6778;
            }
            else {
                bVar2 = bVar13;
                if (*(longlong *)(lVar11 + 0x78) != lVar9) {
                    bVar2 = *(longlong *)(lVar11 + 0x6490) == lVar9;
                }
                lVar9 = lVar10;
                if (bVar2) {
                    lVar9 = lVar11;
                }
                if (lVar9 == 0) goto LAB_1405a6734;
                lVar11 = *(longlong *)(lVar9 + 0x7d18);
                lVar4 = lVar11;
                lVar9 = *(longlong *)(lVar11 + 8);
                while (lVar9 != 0) {
                    if (*(uint *)(lVar9 + 0x20) < uVar1) {
                        lVar9 = *(longlong *)(lVar9 + 0x18);
                    }
                    else {
                        lVar4 = lVar9;
                        lVar9 = *(longlong *)(lVar9 + 0x10);
                    }
                }
                if ((lVar4 == lVar11) || (uVar1 < *(uint *)(lVar4 + 0x20))) {
                    local_res10 = lVar11;
                    plVar5 = &local_res10;
                }
                else {
                    local_res8 = lVar4;
                    plVar5 = &local_res8;
                }
                if ((*plVar5 == lVar11) || (lVar9 = *(longlong *)(*plVar5 + 0x28), lVar9 == 0))
                    goto LAB_1405a6734;
            }
            local_48 = 0x405a5c90;
            uStack68 = 1;
            uStack64 = 0;
            FUN_1405a5fe0(param_1,lVar9,&local_48);
            lVar11 = DAT_140c65898;
        }
        LAB_1405a6778:
        puVar8 = puVar8 + 1;
        lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar1 = *(uint *)(lVar3 + 0x54);
    lVar3 = *(longlong *)(param_1 + 0x78);
    if (uVar1 == 0) {
        return;
    }
    if (lVar3 != 0) {
        if (*(longlong *)(lVar11 + 0x78) != lVar3) {
            bVar13 = *(longlong *)(lVar11 + 0x6490) == lVar3;
        }
        if (bVar13) {
            lVar10 = lVar11;
        }
        if (lVar10 != 0) {
            lVar3 = *(longlong *)(lVar10 + 0x7d18);
            local_res8 = lVar3;
            lVar10 = *(longlong *)(lVar3 + 8);
            while (lVar10 != 0) {
                if (*(uint *)(lVar10 + 0x20) < uVar1) {
                    lVar10 = *(longlong *)(lVar10 + 0x18);
                }
                else {
                    local_res8 = lVar10;
                    lVar10 = *(longlong *)(lVar10 + 0x10);
                }
            }
            if ((local_res8 == lVar3) || (uVar1 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar3;
            }
            if ((local_res8 != lVar3) && (lVar3 = *(longlong *)(local_res8 + 0x28), lVar3 != 0))
                goto LAB_1405a683b;
        }
    }
    lVar3 = FUN_1407a0fd0(DAT_140c65b70);
    if (lVar3 == 0) {
        return;
    }
    LAB_1405a683b:
    local_48 = 0x405a5c90;
    uStack68 = 1;
    uStack64 = 0;
    FUN_1405a5fe0(param_1,lVar3,&local_48);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405a6880(longlong param_1)

{
    uint uVar1;
    code *pcVar2;
    ulonglong uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;
    longlong lVar13;
    int *piVar14;
    longlong local_res8;
    longlong local_res10;
    code *local_58;
    undefined8 uStack80;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    int iVar11;
    ulonglong uVar12;

    FUN_1405a7700(param_1 + 0x6d48);
    FUN_140019490(param_1 + 0x6d48);
    uVar12 = 0;
    uVar10 = 0;
    uVar8 = uVar12;
    if (*(longlong *)(param_1 + 0xa98) != 0) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa90) + uVar8 * 8);
            if ((lVar5 != 0) && (lVar5 = FUN_1405a4b80(lVar5,1), uVar9 = uStack80, lVar5 != 0)) {
                local_58 = FUN_1405a5c90;
                uStack80 = uStack80 & 0xffffffff00000000;
                uStack80._4_4_ = SUB84(uVar9,4);
                local_48 = 0x405a5c90;
                uStack68 = 1;
                uStack64 = 0;
                uStack60 = uStack80._4_4_;
                FUN_1405a5fe0(param_1,lVar5,&local_48);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(param_1 + 0xa98));
    }
    uStack80 = 0;
    local_58 = (code *)0x0;
    FUN_1403d6710(param_1 + 0xa0,&local_58);
    FUN_1403d6710(param_1 + 0xb8,&local_58);
    FUN_1403d6710(param_1 + 0x118,&local_58);
    FUN_1403d6710(param_1 + 0x130);
    uVar8 = uStack80;
    pcVar2 = local_58;
    uVar9 = uVar12;
    if (uStack80 != 0) {
        do {
            lVar5 = *(longlong *)(*(longlong *)(pcVar2 + uVar9 * 8) + 0x50);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(*(longlong *)(pcVar2 + uVar9 * 8) + 0x40) + 0x9c;
            }
            uVar1 = *(uint *)(lVar5 + 0x80);
            if (uVar1 != 0) {
                if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
                    LAB_1405a6a34:
                    lVar5 = FUN_1407a0fd0(DAT_140c65b70);
                    if (lVar5 == 0) goto LAB_1405a6a6a;
                }
                else {
                    lVar5 = *(longlong *)(DAT_140c65898 + 0x7d18);
                    lVar7 = lVar5;
                    lVar13 = *(longlong *)(lVar5 + 8);
                    while (lVar13 != 0) {
                        if (*(uint *)(lVar13 + 0x20) < uVar1) {
                            lVar13 = *(longlong *)(lVar13 + 0x18);
                        }
                        else {
                            lVar7 = lVar13;
                            lVar13 = *(longlong *)(lVar13 + 0x10);
                        }
                    }
                    if ((lVar7 == lVar5) || (uVar1 < *(uint *)(lVar7 + 0x20))) {
                        local_res10 = lVar5;
                        plVar6 = &local_res10;
                    }
                    else {
                        local_res8 = lVar7;
                        plVar6 = &local_res8;
                    }
                    if ((*plVar6 == lVar5) || (lVar5 = *(longlong *)(*plVar6 + 0x28), lVar5 == 0))
                        goto LAB_1405a6a34;
                }
                uVar3 = uStack80;
                local_58 = FUN_1405a5c90;
                uStack80 = uStack80 & 0xffffffff00000000;
                uStack80._4_4_ = SUB84(uVar3,4);
                local_48 = 0x405a5c90;
                uStack68 = 1;
                uStack64 = 0;
                uStack60 = uStack80._4_4_;
                FUN_1405a5fe0(param_1,lVar5,&local_48);
            }
            LAB_1405a6a6a:
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
    }
    lVar5 = 0x28;
    iVar11 = -0x1c;
    do {
        if ((SBORROW4(uVar10,0x1c) != iVar11 < 0) && (*(longlong *)(lVar5 + DAT_140c65a08) != 0)) {
            piVar14 = (int *)(*(longlong *)(lVar5 + DAT_140c65a08) + 0x2c);
            lVar13 = 3;
            do {
                iVar11 = *piVar14;
                if (iVar11 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64c04 != 0) || (iVar4 = FUN_140248ca0(), iVar4 < 0)) goto LAB_1405a6b20;
                        lVar7 = (**(code **)(*DAT_140c63b40 + 0x18))(DAT_140c63b40,iVar11);
                    }
                    else {
                        lVar7 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,iVar11,DAT_140c63858);
                    }
                    if (lVar7 != 0) {
                        FUN_1405a5c90(param_1);
                    }
                }
                LAB_1405a6b20:
                piVar14 = piVar14 + 1;
                lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
        }
        iVar11 = (int)uVar12;
        uVar10 = iVar11 + 1;
        uVar12 = (ulonglong)uVar10;
        lVar5 = lVar5 + 8;
        iVar11 = iVar11 + -0x1b;
        if (0x1b < uVar10) {
            FUN_1405a5c90(param_1,L"Art\\FX\\Test\\SLee\\overkill_death.m3");
            FUN_1405a5c90(param_1,L"Art\\FX\\Model\\Props\\Explosion_Smoke\\Explosion_Smoke.m3");
            if (pcVar2 != (code *)0x0) {
                (**(code **)(*(longlong *)(pcVar2 + -0x10) + 8))(pcVar2 + -0x10);
            }
            return;
        }
    } while( true );
}



undefined8 FUN_1405a6b90(undefined8 param_1,ulonglong param_2)

{
    FUN_1405a6bd0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405a6bd0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b6cfe0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[2] + 8))();
        param_1[2] = 0;
    }
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[4] = 0;
    param_1[3] = 0;
    return;
}



undefined4 FUN_1405a6c30(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x6da0);
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
        return *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 4);
    }
    return 0;
}



void FUN_1405a6c90(longlong param_1,uint param_2,uint param_3)

{
    float fVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined8 *puVar6;
    int *piVar7;
    uint uVar8;
    undefined8 *puVar9;
    longlong local_res8;
    uint local_58 [2];
    undefined8 *local_50;
    undefined4 local_48 [2];
    undefined8 local_40;
    undefined *local_38;
    ulonglong local_30;

    local_30 = (ulonglong)param_2;
    if (*(longlong *)(param_1 + 0x78) == 0) {
        return;
    }
    iVar4 = FUN_1403bad30(param_1,local_30,*(undefined *)(param_1 + 0x6dec));
    if (iVar4 == 0) {
        return;
    }
    lVar5 = FUN_1407a16f0();
    if (lVar5 == 0) {
        return;
    }
    lVar2 = *(longlong *)(param_1 + 0x6da0);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    puVar9 = (undefined8 *)0x0;
    uVar8 = 0;
    if (local_res8 == lVar2) {
        puVar6 = (undefined8 *)FUN_14018b280(0x50);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            *(undefined4 *)(puVar6 + 1) = 0x544e5645;
            *(undefined4 *)((longlong)puVar6 + 0x4c) = 0;
            *puVar6 = 0;
            puVar9 = puVar6;
        }
        *(uint *)puVar9 = param_2;
        *(undefined4 *)((longlong)puVar9 + 4) = 0;
        local_58[0] = param_2;
        local_50 = puVar9;
        FUN_140055f80(param_1 + 0x6d98,local_48,local_58);
    }
    else {
        puVar9 = *(undefined8 **)(local_res8 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
        piVar7 = (int *)FUN_1407a16f0();
        if (piVar7 == (int *)0x0) {
            uVar8 = 0;
        }
        else {
            iVar4 = FUN_1405a76a0(param_1,param_2);
            uVar8 = iVar4 + *piVar7;
        }
    }
    iVar4 = *(int *)((longlong)puVar9 + 4);
    if (uVar8 < param_3) {
        param_3 = uVar8;
    }
    *(uint *)((longlong)puVar9 + 4) = param_3;
    if (0 < (int)(param_3 - iVar4)) {
        FUN_140195d70(puVar9 + 1);
    }
    if (*(uint *)((longlong)puVar9 + 4) < uVar8) {
        if (puVar9[3] == 0) {
            uVar8 = *(uint *)(lVar5 + 4);
            local_48[0] = 1;
            fVar1 = *(float *)(*(longlong *)(param_1 + 0x78) + 0xa04);
            local_40 = FUN_14001c280(param_1);
            local_38 = &DAT_1405a7090;
            FUN_140195960(puVar9 + 1,(longlong)((float)(ulonglong)uVar8 * fVar1) & 0xffffffff,local_48,4);
            return;
        }
        if (*(uint *)((longlong)puVar9 + 4) < uVar8) {
            return;
        }
    }
    if (puVar9[3] != 0) {
        FUN_140195d70(puVar9 + 1);
    }
    return;
}



int FUN_1405a6eb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    int *piVar2;

    if (*(longlong *)(param_1 + 0x78) != 0) {
        piVar2 = (int *)FUN_1407a16f0();
        if (piVar2 != (int *)0x0) {
            iVar1 = FUN_1405a76a0(param_1,param_3);
            return iVar1 + *piVar2;
        }
    }
    return 0;
}



longlong FUN_1405a6ef0(void)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar2 != 0) {
        lVar1 = FUN_1407a16f0();
        if (lVar1 != 0) {
            return (longlong)((float)(ulonglong)*(uint *)(lVar1 + 4) * *(float *)(lVar2 + 0xa04));
        }
    }
    return 0;
}



float FUN_1405a6f40(undefined8 param_1,undefined8 param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    float fVar6;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if ((lVar1 != 0) && (lVar5 = DAT_140c65898, lVar4 = FUN_1407a16f0(), lVar4 != 0)) {
        lVar5 = *(longlong *)(lVar5 + 0x6da0);
        local_res8 = lVar5;
        lVar2 = *(longlong *)(lVar5 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_3) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar5) || (param_3 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar5;
        }
        if (local_res8 != lVar5) {
            if (*(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x18) != 0) {
                fVar6 = (float)(ulonglong)*(uint *)(lVar4 + 4) * *(float *)(lVar1 + 0xa04);
                uVar3 = FUN_140195f70(*(longlong *)(local_res8 + 0x28) + 8);
                return (float)(ulonglong)uVar3 / fVar6;
            }
            return 0.0;
        }
    }
    return 100.0;
}



undefined8 FUN_1405a7020(longlong param_1,ulonglong param_2)

{
    int iVar1;
    longlong lVar2;
    int *piVar3;

    if (*(int *)(param_1 + 0x7180) == 0) {
        iVar1 = FUN_1403bad30(param_1,param_2,*(undefined *)(param_1 + 0x6dec));
        if (iVar1 != 0) {
            lVar2 = FUN_1407a16f0();
            if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
                piVar3 = (int *)FUN_1407a16f0();
                if (piVar3 != (int *)0x0) {
                    iVar1 = FUN_1405a76a0(param_1,param_2 & 0xffffffff);
                    if (iVar1 + *piVar3 != 0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}



void FUN_1405a71b0(undefined8 param_1,uint param_2,int param_3)

{
    float fVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    int *piVar7;
    uint uVar8;
    longlong local_res8;
    undefined4 local_28 [2];
    undefined8 local_20;
    undefined *local_18;
    ulonglong local_10;

    lVar4 = DAT_140c65898;
    local_10 = (ulonglong)param_2;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x6dc0);
        local_res8 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        if (local_res8 == lVar2) {
            local_res8 = CONCAT44(param_3,param_2);
            FUN_140032f50(DAT_140c65898 + 0x6db8,local_28,&local_res8);
        }
        else {
            *(int *)(local_res8 + 0x24) = *(int *)(local_res8 + 0x24) + param_3;
        }
        lVar2 = *(longlong *)(lVar4 + 0x6da0);
        local_res8 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        if (local_res8 != lVar2) {
            lVar2 = *(longlong *)(local_res8 + 0x28);
            FUN_1403bad30(lVar4,local_10,*(undefined *)(lVar4 + 0x6dec));
            piVar7 = (int *)FUN_1407a16f0();
            iVar5 = FUN_1405a76a0(lVar4,local_10);
            uVar6 = iVar5 + *piVar7;
            uVar8 = *(uint *)(lVar2 + 4);
            if (uVar6 < *(uint *)(lVar2 + 4)) {
                uVar8 = uVar6;
            }
            *(uint *)(lVar2 + 4) = uVar8;
            if (uVar8 < uVar6) {
                if (*(longlong *)(lVar2 + 0x18) == 0) {
                    uVar8 = piVar7[1];
                    local_28[0] = 1;
                    fVar1 = *(float *)(*(longlong *)(lVar4 + 0x78) + 0xa04);
                    local_20 = FUN_14001c280(lVar4);
                    local_18 = &DAT_1405a7090;
                    FUN_140195960(lVar2 + 8,(longlong)((float)(ulonglong)uVar8 * fVar1) & 0xffffffff,local_28,
                                  4);
                    return;
                }
            }
            else if (*(longlong *)(lVar2 + 0x18) != 0) {
                FUN_140195d70(lVar2 + 8);
            }
        }
    }
    return;
}



void FUN_1405a7380(longlong param_1,int *param_2,longlong param_3)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    undefined4 uVar6;
    int iVar7;
    longlong *plVar8;
    uint *puVar9;
    longlong lVar10;
    int *piVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong local_res8;
    longlong local_res20;

    lVar4 = DAT_140c65898;
    lVar13 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x6da0) + 0x10);
    local_res8 = param_1;
    if (lVar13 != *(longlong *)(DAT_140c65898 + 0x6da0)) {
        do {
            puVar1 = *(undefined4 **)(lVar13 + 0x28);
            if (puVar1 != (undefined4 *)0x0) {
                uVar5 = FUN_1403bad30(lVar4,*puVar1,*(undefined *)(lVar4 + 0x6dec));
                lVar10 = DAT_140c65b70[0xb7];
                lVar3 = lVar10;
                lVar2 = *(longlong *)(lVar10 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar5) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar3 == lVar10) || (uVar5 < *(uint *)(lVar3 + 0x20))) {
                    local_res20 = lVar10;
                    plVar8 = &local_res20;
                }
                else {
                    local_res8 = lVar3;
                    plVar8 = &local_res8;
                }
                if (((((*plVar8 != DAT_140c65b70[0xb7]) &&
                       (puVar9 = (uint *)(*plVar8 + 0x24), puVar9 != (uint *)0x0)) &&
                      ((uint)puVar1[1] < *puVar9)) &&
                     ((*(longlong *)(puVar1 + 6) != 0 && (lVar10 = FUN_1403acd90(), lVar10 != 0)))) &&
                    (piVar11 = *(int **)(lVar10 + 0x38), piVar11 != (int *)0x0)) {
                    iVar7 = *param_2;
                    if (iVar7 == 0) {
                        if (*(int *)(*(longlong *)(lVar10 + 0x70) + 4) == param_2[1]) goto LAB_1405a752a;
                    }
                    else if (iVar7 == 1) {
                        if (**(int **)(lVar10 + 0x70) == param_2[1]) goto LAB_1405a752a;
                    }
                    else if (iVar7 == 2) {
                        iVar7 = (**(code **)(*DAT_140c65b70 + 0x38))();
                        if (iVar7 != 0) goto LAB_1405a752a;
                    }
                    else if (iVar7 == 3) {
                        uVar12 = 0;
                        do {
                            piVar11 = piVar11 + 1;
                            if (*piVar11 == param_2[1]) goto LAB_1405a752a;
                            uVar12 = uVar12 + 1;
                        } while (uVar12 < 3);
                    }
                    else {
                        LAB_1405a752a:
                        uVar6 = FUN_140195f70(puVar1 + 2);
                        FUN_140195d70(puVar1 + 2);
                        if ((*(int *)(param_3 + 0xbc) != 0) || (iVar7 = FUN_1404823a0(param_3), iVar7 != 0)) {
                            FUN_14046a890(*(undefined8 *)(lVar4 + 0x78),lVar10,uVar6);
                        }
                        FUN_14001c280(lVar4);
                        FUN_140195960(puVar1 + 2);
                    }
                }
            }
            lVar10 = *(longlong *)(lVar13 + 0x18);
            if (lVar10 == 0) {
                lVar10 = *(longlong *)(lVar13 + 8);
                if (lVar13 == *(longlong *)(lVar10 + 0x18)) {
                    do {
                        lVar13 = lVar10;
                        lVar10 = *(longlong *)(lVar13 + 8);
                    } while (lVar13 == *(longlong *)(lVar10 + 0x18));
                }
                if (*(longlong *)(lVar13 + 0x18) != lVar10) {
                    lVar13 = lVar10;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar10 + 0x10); lVar13 = lVar10, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar10 = lVar2;
                }
            }
        } while (lVar13 != *(longlong *)(lVar4 + 0x6da0));
    }
    return;
}



undefined4 FUN_1405a76a0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x6dc0);
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
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined4 *)(local_res8 + 0x24);
}



undefined8 FUN_1405a7700(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
            while (lVar3 = lVar1, lVar3 != 0) {
                lVar1 = *(longlong *)(lVar3 + 8);
                lVar2 = *(longlong *)(lVar3 + 0x18);
                while (lVar2 != 0) {
                    iVar4 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 8))();
                    if (iVar4 == 0) {
                        *(undefined8 *)(lVar3 + 0x18) = 0;
                    }
                    lVar2 = *(longlong *)(lVar3 + 0x18);
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}


