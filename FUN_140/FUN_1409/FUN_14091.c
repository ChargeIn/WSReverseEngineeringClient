//
// Created by flop on 04.04.22.
//

#include "FUN_14092.c"
#include "FUN_14093.c"
#include "FUN_14094.c"
#include "FUN_14095.c"
#include "../../WildStarTypes.c"

ulonglong FUN_140910020(short *param_1,longlong param_2,uint param_3,int param_4)

{
    ushort *puVar1;
    ushort uVar2;
    int iVar3;
    ulonglong uVar4;
    ushort *puVar5;
    ushort *puVar6;
    ushort *puVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint local_res8;
    int local_30;

    uVar11 = 0;
    local_res8 = 0;
    uVar10 = 0;
    uVar8 = 0xffffffff;
    uVar9 = param_3 >> 0xb & 1;
    puVar7 = (ushort *)(param_1 + 2);
    if (((ushort)(*param_1 - 0x7fU) < 2) || ((ushort)(*param_1 - 0x84U) < 2)) {
        puVar7 = (ushort *)(param_1 + 3);
    }
    uVar2 = *puVar7;
    if (uVar2 < 0x9c) {
        local_30 = 2;
        do {
            uVar4 = (ulonglong)uVar2;
            puVar6 = puVar7;
            switch(IMAGE_DOS_HEADER_140000000.e_magic +
                   (&switchD_1409100cb::switchdataD_1409104c0)
                   [(&switchD_1409100cb::switchdataD_14091051c)[(int)(uint)uVar2]]) {
                case (char *)0x1409100cd:
                    if (puVar7[puVar7[1]] == 0x71) goto switchD_1409100cb_caseD_409100e5;
                    puVar6 = puVar7 + (ulonglong)puVar7[1] + 2;
                    break;
                case (char *)0x1409100e5:
                switchD_1409100cb_caseD_409100e5:
                    uVar4 = FUN_140910020(puVar7);
                    if ((int)uVar4 < 0) {
                        return uVar4;
                    }
                    uVar10 = uVar10 + (int)uVar4;
                    do {
                        puVar6 = puVar7 + puVar7[1];
                        puVar7 = puVar7 + puVar7[1];
                    } while (*puVar6 == 0x71);
                    puVar6 = puVar7 + 2;
                    uVar11 = local_res8;
                    break;
                case (char *)0x14091012d:
                    if (((int)uVar8 < 0) || ((uVar11 == 0 && ((int)uVar10 < (int)uVar8)))) {
                        uVar8 = uVar10;
                    }
                    if (uVar2 != 0x71) {
                        return (ulonglong)uVar8;
                    }
                    puVar6 = puVar7 + 2;
                    uVar10 = 0;
                    local_res8 = 0;
                    uVar11 = uVar10;
                    break;
                case (char *)0x140910160:
                    do {
                        puVar6 = puVar7 + puVar7[1];
                        puVar7 = puVar7 + puVar7[1];
                    } while (*puVar6 == 0x71);
                switchD_1409100cb_caseD_4091016f:
                    uVar4 = (ulonglong)*puVar7;
                switchD_1409100cb_caseD_40910172:
                    puVar6 = puVar7 + (byte)(&DAT_1409cfaa0)[uVar4];
                    break;
                case (char *)0x14091016f:
                    goto switchD_1409100cb_caseD_4091016f;
                case (char *)0x140910172:
                    goto switchD_1409100cb_caseD_40910172;
                case (char *)0x14091018a:
                    puVar7 = puVar7 + (byte)(&DAT_1409cfaa0)[uVar4];
                    do {
                        puVar6 = puVar7 + puVar7[1];
                        puVar7 = puVar7 + puVar7[1];
                    } while (*puVar6 == 0x71);
                    puVar6 = puVar7 + 2;
                    break;
                case (char *)0x1409101b9:
                    uVar10 = uVar10 + 1;
                    puVar6 = puVar7 + 2;
                    goto LAB_1409101bf;
                case (char *)0x1409101eb:
                    uVar10 = uVar10 + 1;
                    iVar3 = 4;
                    if (1 < (ushort)(puVar7[1] - 0xf)) {
                        iVar3 = local_30;
                    }
                    goto LAB_14091045d;
                case (char *)0x14091020b:
                    uVar10 = uVar10 + puVar7[1];
                    puVar6 = puVar7 + 3;
                LAB_1409101bf:
                    if (uVar9 != 0) {
                        LAB_1409101ce:
                        if ((puVar6[-1] & 0xfc00) == 0xd800) {
                            puVar6 = puVar6 + 1;
                        }
                    }
                    break;
                case (char *)0x140910217:
                    uVar10 = uVar10 + puVar7[1];
                    iVar3 = local_30;
                    if (1 < (ushort)(puVar7[2] - 0xf)) {
                        iVar3 = 0;
                    }
                    puVar6 = puVar7 + (iVar3 + 3);
                    break;
                case (char *)0x140910244:
                    puVar6 = puVar7 + 2;
                switchD_1409100cb_caseD_40910248:
                    uVar10 = uVar10 + 1;
                switchD_1409102d1_caseD_62:
                    puVar6 = puVar6 + 1;
                    break;
                case (char *)0x140910248:
                    goto switchD_1409100cb_caseD_40910248;
                case (char *)0x140910253:
                    if (uVar9 != 0) {
                        return 0xffffffff;
                    }
                    uVar10 = uVar10 + 1;
                    puVar6 = puVar7 + 1;
                    break;
                case (char *)0x140910266:
                    if ((ushort)(puVar7[1] - 0xf) < 2) {
                        puVar7 = puVar7 + 2;
                    }
                    goto switchD_1409100cb_caseD_40910172;
                case (char *)0x140910280:
                    if ((ushort)(puVar7[2] - 0xf) < 2) {
                        puVar7 = puVar7 + 2;
                    }
                    goto switchD_1409100cb_caseD_40910172;
                case (char *)0x14091029c:
                    if (uVar2 == 0x6c) {
                        uVar4 = (ulonglong)puVar7[1];
                    }
                    else {
                        uVar4 = 0x11;
                    }
                    puVar6 = puVar7 + uVar4;
                    switch(*puVar6) {
                        case 0x62:
                        case 99:
                        case 0x66:
                        case 0x67:
                            goto switchD_1409102d1_caseD_62;
                        case 100:
                        case 0x65:
                            goto switchD_1409100cb_caseD_40910248;
                        case 0x68:
                        case 0x69:
                            uVar10 = uVar10 + puVar6[1];
                            puVar6 = puVar6 + 3;
                            break;
                        default:
                            uVar10 = uVar10 + 1;
                    }
                    break;
                case (char *)0x1409102e9:
                    if ((param_3 >> 0x19 & 1) == 0) {
                        puVar5 = (ushort *)FUN_140907af0(param_2);
                        puVar6 = puVar5;
                        if (puVar5 == (ushort *)0x0) {
                            return 0xfffffffe;
                        }
                        do {
                            puVar1 = puVar6 + puVar6[1];
                            puVar6 = puVar6 + puVar6[1];
                        } while (*puVar1 == 0x71);
                        if ((puVar5 < puVar7) && (puVar7 < puVar6)) {
                            uVar11 = 1;
                            local_res8 = 1;
                            goto LAB_140910334;
                        }
                        iVar3 = FUN_140910020();
                        uVar11 = local_res8;
                    }
                    else {
                        LAB_140910334:
                        iVar3 = 0;
                    }
                    puVar6 = puVar7 + 2;
                    switch(puVar7[2]) {
                        case 0x62:
                        case 99:
                        case 0x66:
                        case 0x67:
                            puVar6 = puVar7 + 3;
                            break;
                        case 100:
                        case 0x65:
                            puVar6 = puVar7 + 3;
                        default:
                            uVar10 = uVar10 + iVar3;
                            break;
                        case 0x68:
                        case 0x69:
                            puVar6 = puVar7 + 5;
                            uVar10 = uVar10 + (uint)puVar7[3] * iVar3;
                    }
                    break;
                case (char *)0x1409103b9:
                    puVar6 = (ushort *)(param_2 + (ulonglong)puVar7[1] * 2);
                    puVar5 = puVar6;
                    do {
                        puVar1 = puVar5 + puVar5[1];
                        puVar5 = puVar5 + puVar5[1];
                    } while (*puVar1 == 0x71);
                    if (((puVar6 < puVar7) && (puVar7 < puVar5)) || (10 < param_4)) {
                        puVar6 = puVar7 + 2;
                        local_res8 = 1;
                        uVar11 = 1;
                    }
                    else {
                        iVar3 = FUN_140910020(puVar6);
                        uVar10 = uVar10 + iVar3;
                        puVar6 = puVar7 + 2;
                        uVar11 = local_res8;
                    }
                    break;
                case (char *)0x140910424:
                    puVar6 = puVar7 + (byte)(&DAT_1409cfaa0)[uVar4];
                    if (uVar9 == 0) break;
                    goto LAB_1409101ce;
                case (char *)0x140910443:
                    iVar3 = (uint)puVar7[1] + (uint)(byte)(&DAT_1409cfaa0)[uVar4];
                LAB_14091045d:
                    puVar6 = puVar7 + iVar3;
                    break;
                case (char *)0x1409104a3:
                    return 0xffffffff;
                case (char *)0x1409104af:
                    goto LAB_1409104b4;
            }
            uVar2 = *puVar6;
            puVar7 = puVar6;
        } while (uVar2 < 0x9c);
    }
    LAB_1409104b4:
    return 0xfffffffd;
}



void FUN_140910600(byte *param_1)

{
    if (param_1 != (byte *)0x0) {
        if (((*param_1 & 0x40) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
            FUN_14091b430();
        }
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(param_1);
    }
    return;
}


// void FUN_140910630(int *param_1,uint param_2,char **resultStr)
void FUN_140910630(int *param_1, uint optionBits, char **resultStr)

{
    longlong lVar1;
    int iVar2;
    undefined4 *puVar3;
    char *errorMessage; // pcVar4
    undefined8 uVar5;
    bool bVar6;
    undefined auStack312 [32];
    longlong local_118 [2];
    longlong local_108;
    longlong local_100;
    longlong local_f8;
    longlong local_f0;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    *resultStr = (char *)0x0; // param_3
    if ((param_1 == (int *)0x0) || (*param_1 != 0x50435245)) {
        *resultStr = "argument is not a compiled regular expression";
        goto LAB_1409107f0;
    }
    if ((*(ushort *)(param_1 + 3) & 2) == 0) {
        *resultStr = "argument not compiled in 16 bit mode";
        goto LAB_1409107f0;
    }
    if ((optionBits & 0xfffffff0) != 0) {
        *resultStr = "unknown or incorrect option bit(s) set";
        goto LAB_1409107f0;
    }
    lVar1 = (longlong)param_1 +
            ((longlong)
                    (int)((uint)*(ushort *)(param_1 + 7) * (uint)*(ushort *)((longlong)param_1 + 0x1a)) +
                         (ulonglong)*(ushort *)(param_1 + 6)) * 2;
    bVar6 = false;
    if (((*(byte *)(param_1 + 2) & 0x10) == 0) &&
        (bVar6 = false, (*(ushort *)(param_1 + 3) & 0x110) == 0)) {
        local_118[0] = *(longlong *)(param_1 + 8);
        if (local_118[0] == 0) {
            FUN_140919d20(param_1,0,0xb,local_118);
        }
        local_100 = local_118[0] + 0x100;
        local_f8 = local_118[0] + 0x200;
        local_f0 = local_118[0] + 0x340;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_108 = local_118[0];
        iVar2 = FUN_140910920(lVar1,&local_58,(uint)param_1[2] >> 0xb & 1,&local_108);
        bVar6 = iVar2 == 1;
        if (iVar2 != 3) goto LAB_14091078f;
        Unknown_OpCode: // LAB_140910901
        errorMessage = "internal error: opcode not recognized";
    }
    else {
        LAB_14091078f:
        iVar2 = FUN_140910020(lVar1,lVar1,param_1[2],0);
        if (iVar2 == -3) goto Unknown_OpCode;
        if (iVar2 == -2) {
            errorMessage = "internal error: missing capturing bracket";
        }
        else {
            if (((!bVar6) && (iVar2 < 1)) && ((optionBits & 0xf) == 0)) goto LAB_1409107f0;
            puVar3 = (undefined4 *)(*(code *)PTR_FUN_140c1b1e0)(0x6c);
            if (puVar3 != (undefined4 *)0x0) {
                *puVar3 = 1;
                *(undefined4 **)(puVar3 + 2) = puVar3 + 0x10;
                *(undefined8 *)(puVar3 + 0x10) = 0x2c;
                if (bVar6) {
                    puVar3[0x11] = 1;
                    *(undefined8 *)(puVar3 + 0x12) = local_58;
                    *(undefined8 *)(puVar3 + 0x14) = local_50;
                    *(undefined8 *)(puVar3 + 0x16) = local_48;
                    uVar5 = local_40;
                }
                else {
                    uVar5 = 0;
                    *(undefined8 *)(puVar3 + 0x12) = 0;
                    *(undefined8 *)(puVar3 + 0x14) = 0;
                    *(undefined8 *)(puVar3 + 0x16) = 0;
                }
                *(undefined8 *)(puVar3 + 0x18) = uVar5;
                if (iVar2 < 1) {
                    puVar3[0x1a] = 0;
                }
                else {
                    puVar3[0x11] = puVar3[0x11] | 2;
                    puVar3[0x1a] = iVar2;
                }
                *(undefined8 *)(puVar3 + 0xe) = 0;
                if ((optionBits & 1) != 0) {
                    FUN_14091a0c0(param_1,puVar3,0);
                }
                if ((optionBits & 2) != 0) {
                    FUN_14091a0c0(param_1,puVar3,1);
                }
                if ((optionBits & 4) != 0) {
                    FUN_14091a0c0(param_1,puVar3,2);
                }
                if (((puVar3[0x11] == 0) && ((*(byte *)puVar3 & 0x40) == 0)) && ((optionBits & 8) == 0)) {
                    FUN_140910600(puVar3);
                }
                goto LAB_1409107f0;
            }
            errorMessage = "failed to get memory";
        }
    }
    *resultStr = errorMessage;
    LAB_1409107f0:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack312);
    return;
}



ulonglong FUN_140910920(short *param_1,byte *param_2,int param_3,longlong param_4)

{
    short *psVar1;
    byte bVar2;
    int iVar3;
    ulonglong uVar4;
    short *psVar5;
    byte *pbVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    short *local_res8;
    uint local_18;

    local_18 = 1;
    local_res8 = param_1;
    do {
        psVar5 = local_res8 + 2;
        if ((1 < (ushort)(*local_res8 - 0x7fU)) && (1 < (ushort)(*local_res8 - 0x84U)))
            goto LAB_140910980;
        switchD_1409109a2_caseD_4:
        psVar5 = psVar5 + 1;
        LAB_140910980:
        switch(*psVar5) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x12:
            case 0x14:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1f:
            case 0x20:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x42:
            case 0x43:
            case 0x44:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x54:
            case 0x6c:
            case 0x6d:
            case 0x6e:
            case 0x6f:
            case 0x76:
            case 0x81:
            case 0x86:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8a:
            case 0x8b:
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x99:
            case 0x9a:
                goto LAB_1409110fd;
            case 4:
            case 5:
            case 0x57:
            case 0x58:
            case 0x5f:
                goto switchD_1409109a2_caseD_4;
            case 6:
                lVar7 = 0x41;
                lVar9 = 8;
                pbVar6 = param_2 + 1;
                do {
                    lVar7 = lVar7 + 4;
                    pbVar6[-1] = pbVar6[-1] | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -5 + lVar7);
                    *pbVar6 = *pbVar6 | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -4 + lVar7);
                    pbVar6[1] = pbVar6[1] | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -3 + lVar7);
                    pbVar6[2] = pbVar6[2] | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -2 + lVar7);
                    lVar9 = lVar9 + -1;
                    pbVar6 = pbVar6 + 4;
                } while (lVar9 != 0);
                break;
            case 7:
                lVar9 = 8;
                pbVar6 = param_2 + 1;
                lVar7 = 0x41;
                do {
                    pbVar6[-1] = pbVar6[-1] | *(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                    *pbVar6 = *pbVar6 | *(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                    pbVar6[1] = pbVar6[1] | *(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                    pbVar6[2] = pbVar6[2] | *(byte *)(lVar7 + 2 + *(longlong *)(param_4 + 0x10));
                    lVar9 = lVar9 + -1;
                    pbVar6 = pbVar6 + 4;
                    lVar7 = lVar7 + 4;
                } while (lVar9 != 0);
                break;
            case 8:
                lVar9 = 8;
                pbVar6 = param_2 + 1;
                lVar7 = 2;
                do {
                    pbVar6[-1] = pbVar6[-1] | ~*(byte *)(lVar7 + -2 + *(longlong *)(param_4 + 0x10));
                    *pbVar6 = *pbVar6 | ~*(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                    pbVar6[1] = pbVar6[1] | ~*(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                    pbVar6[2] = pbVar6[2] | ~*(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                    lVar9 = lVar9 + -1;
                    pbVar6 = pbVar6 + 4;
                    lVar7 = lVar7 + 4;
                } while (lVar9 != 0);
                param_2[1] = param_2[1] | 8;
                break;
            case 9:
                bVar2 = param_2[1];
                lVar9 = 8;
                pbVar6 = param_2 + 1;
                lVar7 = 2;
                do {
                    pbVar6[-1] = pbVar6[-1] | *(byte *)(lVar7 + -2 + *(longlong *)(param_4 + 0x10));
                    *pbVar6 = *pbVar6 | *(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                    pbVar6[1] = pbVar6[1] | *(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                    pbVar6[2] = pbVar6[2] | *(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                    lVar9 = lVar9 + -1;
                    pbVar6 = pbVar6 + 4;
                    lVar7 = lVar7 + 4;
                } while (lVar9 != 0);
                param_2[1] = param_2[1] & 0xf7;
                param_2[1] = param_2[1] | bVar2;
                break;
            case 10:
                lVar9 = 8;
                pbVar6 = param_2 + 1;
                lVar7 = 0xa1;
                do {
                    pbVar6[-1] = pbVar6[-1] | ~*(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                    *pbVar6 = *pbVar6 | ~*(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                    pbVar6[1] = pbVar6[1] | ~*(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                    pbVar6[2] = pbVar6[2] | ~*(byte *)(lVar7 + 2 + *(longlong *)(param_4 + 0x10));
                    lVar9 = lVar9 + -1;
                    pbVar6 = pbVar6 + 4;
                    lVar7 = lVar7 + 4;
                } while (lVar9 != 0);
                break;
            case 0xb:
                lVar9 = 8;
                pbVar6 = param_2 + 1;
                lVar7 = 0xa1;
                do {
                    pbVar6[-1] = pbVar6[-1] | *(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                    *pbVar6 = *pbVar6 | *(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                    pbVar6[1] = pbVar6[1] | *(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                    pbVar6[2] = pbVar6[2] | *(byte *)(lVar7 + 2 + *(longlong *)(param_4 + 0x10));
                    lVar9 = lVar9 + -1;
                    pbVar6 = pbVar6 + 4;
                    lVar7 = lVar7 + 4;
                } while (lVar9 != 0);
                break;
            case 0x11:
            case 0x15:
                param_2[1] = param_2[1] | 0x3c;
                param_2[0x10] = param_2[0x10] | 0x20;
                param_2[0x1f] = param_2[0x1f] | 0x80;
                break;
            case 0x13:
                param_2[1] = param_2[1] | 2;
                param_2[4] = param_2[4] | 1;
                param_2[0x14] = param_2[0x14] | 1;
                param_2[0x1f] = param_2[0x1f] | 0x80;
                break;
            case 0x1d:
            case 0x23:
            case 0x24:
            case 0x2b:
                goto switchD_1409109a2_caseD_1d;
            case 0x1e:
            case 0x30:
            case 0x31:
            case 0x38:
                goto switchD_1409109a2_caseD_1e;
            case 0x21:
            case 0x22:
            case 0x25:
            case 0x26:
            case 0x2a:
            case 0x2c:
                psVar5 = psVar5 + 1;
                goto LAB_140910a8c;
            case 0x27:
            case 0x28:
            case 0x2d:
                psVar5 = psVar5 + 2;
            LAB_140910a8c:
                uVar8 = 0;
                goto LAB_140910a8f;
            case 0x29:
                psVar5 = psVar5 + 1;
                goto switchD_1409109a2_caseD_1d;
            case 0x2e:
            case 0x2f:
            case 0x32:
            case 0x33:
            case 0x37:
            case 0x39:
                psVar5 = psVar5 + 1;
                uVar8 = 1;
                goto LAB_140910a8f;
            case 0x34:
            case 0x35:
            case 0x3a:
                psVar5 = psVar5 + 2;
                uVar8 = 1;
            LAB_140910a8f:
                psVar5 = (short *)FUN_140911290(param_2,psVar5,uVar8,param_4,param_3);
                goto LAB_140910980;
            case 0x36:
                psVar5 = psVar5 + 1;
                goto switchD_1409109a2_caseD_1e;
            case 0x55:
            case 0x56:
            case 0x59:
            case 0x5a:
            case 0x5e:
            case 0x60:
                goto switchD_1409109a2_caseD_55;
            case 0x5b:
            case 0x5c:
            case 0x61:
                psVar5 = psVar5 + 1;
            switchD_1409109a2_caseD_55:
                switch(psVar5[1]) {
                    case 6:
                        lVar7 = 0x41;
                        lVar9 = 8;
                        pbVar6 = param_2 + 1;
                        do {
                            lVar7 = lVar7 + 4;
                            pbVar6[-1] = pbVar6[-1] | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -5 + lVar7);
                            *pbVar6 = *pbVar6 | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -4 + lVar7);
                            pbVar6[1] = pbVar6[1] | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -3 + lVar7);
                            pbVar6[2] = pbVar6[2] | ~*(byte *)(*(longlong *)(param_4 + 0x10) + -2 + lVar7);
                            lVar9 = lVar9 + -1;
                            pbVar6 = pbVar6 + 4;
                        } while (lVar9 != 0);
                        psVar5 = psVar5 + 2;
                        goto LAB_140910980;
                    case 7:
                        lVar9 = 8;
                        pbVar6 = param_2 + 1;
                        lVar7 = 0x41;
                        do {
                            pbVar6[-1] = pbVar6[-1] | *(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                            *pbVar6 = *pbVar6 | *(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                            pbVar6[1] = pbVar6[1] | *(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                            pbVar6[2] = pbVar6[2] | *(byte *)(lVar7 + 2 + *(longlong *)(param_4 + 0x10));
                            lVar9 = lVar9 + -1;
                            pbVar6 = pbVar6 + 4;
                            lVar7 = lVar7 + 4;
                        } while (lVar9 != 0);
                        psVar5 = psVar5 + 2;
                        goto LAB_140910980;
                    case 8:
                        lVar9 = 8;
                        pbVar6 = param_2 + 1;
                        lVar7 = 2;
                        do {
                            pbVar6[-1] = pbVar6[-1] | ~*(byte *)(lVar7 + -2 + *(longlong *)(param_4 + 0x10));
                            *pbVar6 = *pbVar6 | ~*(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                            pbVar6[1] = pbVar6[1] | ~*(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                            pbVar6[2] = pbVar6[2] | ~*(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                            lVar9 = lVar9 + -1;
                            pbVar6 = pbVar6 + 4;
                            lVar7 = lVar7 + 4;
                        } while (lVar9 != 0);
                        param_2[1] = param_2[1] | 8;
                        psVar5 = psVar5 + 2;
                        goto LAB_140910980;
                    case 9:
                        bVar2 = param_2[1];
                        lVar9 = 8;
                        pbVar6 = param_2 + 1;
                        lVar7 = 2;
                        do {
                            pbVar6[-1] = pbVar6[-1] | *(byte *)(lVar7 + -2 + *(longlong *)(param_4 + 0x10));
                            *pbVar6 = *pbVar6 | *(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                            pbVar6[1] = pbVar6[1] | *(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                            pbVar6[2] = pbVar6[2] | *(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                            lVar9 = lVar9 + -1;
                            pbVar6 = pbVar6 + 4;
                            lVar7 = lVar7 + 4;
                        } while (lVar9 != 0);
                        param_2[1] = param_2[1] & 0xf7;
                        param_2[1] = param_2[1] | bVar2;
                        psVar5 = psVar5 + 2;
                        goto LAB_140910980;
                    case 10:
                        lVar9 = 8;
                        pbVar6 = param_2 + 1;
                        lVar7 = 0xa1;
                        do {
                            pbVar6[-1] = pbVar6[-1] | ~*(byte *)(lVar7 + -1 + *(longlong *)(param_4 + 0x10));
                            *pbVar6 = *pbVar6 | ~*(byte *)(lVar7 + *(longlong *)(param_4 + 0x10));
                            pbVar6[1] = pbVar6[1] | ~*(byte *)(lVar7 + 1 + *(longlong *)(param_4 + 0x10));
                            pbVar6[2] = pbVar6[2] | ~*(byte *)(lVar7 + 2 + *(longlong *)(param_4 + 0x10));
                            lVar9 = lVar9 + -1;
                            pbVar6 = pbVar6 + 4;
                            lVar7 = lVar7 + 4;
                        } while (lVar9 != 0);
                        psVar5 = psVar5 + 2;
                        goto LAB_140910980;
                    case 0xb:
                        lVar7 = 0xa1;
                        lVar9 = 8;
                        pbVar6 = param_2 + 1;
                        do {
                            lVar7 = lVar7 + 4;
                            pbVar6[-1] = pbVar6[-1] | *(byte *)(*(longlong *)(param_4 + 0x10) + -5 + lVar7);
                            *pbVar6 = *pbVar6 | *(byte *)(*(longlong *)(param_4 + 0x10) + -4 + lVar7);
                            pbVar6[1] = pbVar6[1] | *(byte *)(*(longlong *)(param_4 + 0x10) + -3 + lVar7);
                            pbVar6[2] = pbVar6[2] | *(byte *)(*(longlong *)(param_4 + 0x10) + -2 + lVar7);
                            lVar9 = lVar9 + -1;
                            pbVar6 = pbVar6 + 4;
                        } while (lVar9 != 0);
                        break;
                    default:
                    LAB_1409110fd:
                        return 0;
                    case 0x11:
                    case 0x15:
                        param_2[1] = param_2[1] | 0x3c;
                        param_2[0x10] = param_2[0x10] | 0x20;
                        if (param_3 != 0) {
                            param_2[0x1f] = param_2[0x1f] | 0x80;
                            psVar5 = psVar5 + 2;
                            goto LAB_140910980;
                        }
                        break;
                    case 0x13:
                        param_2[1] = param_2[1] | 2;
                        param_2[4] = param_2[4] | 1;
                        param_2[0x14] = param_2[0x14] | 1;
                        if (param_3 != 0) {
                            param_2[0x1f] = param_2[0x1f] | 0x80;
                            psVar5 = psVar5 + 2;
                            goto LAB_140910980;
                        }
                }
                psVar5 = psVar5 + 2;
                goto LAB_140910980;
            case 0x5d:
                goto switchD_1409109a2_caseD_5d;
            default:
                return 3;
            case 0x6a:
                goto switchD_1409109a2_caseD_6a;
            case 0x6b:
                param_2[0x1f] = param_2[0x1f] | 0x80;
            switchD_1409109a2_caseD_6a:
                lVar7 = 0x20;
                pbVar6 = param_2;
                do {
                    *pbVar6 = *pbVar6 | pbVar6[(longlong)psVar5 + (2 - (longlong)param_2)];
                    lVar7 = lVar7 + -1;
                    pbVar6 = pbVar6 + 1;
                } while (lVar7 != 0);
                switch(psVar5[0x11]) {
                    case 0x62:
                    case 99:
                    case 0x66:
                    case 0x67:
                        psVar5 = psVar5 + 0x12;
                        break;
                    default:
                        goto LAB_1409110cc;
                    case 0x68:
                    case 0x69:
                        if (psVar5[0x12] != 0) goto LAB_1409110cc;
                        psVar5 = psVar5 + 0x14;
                }
                goto LAB_140910980;
            case 0x70:
                psVar5 = psVar5 + 4;
                goto LAB_140910980;
            case 0x71:
                local_18 = 2;
                break;
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
                return 2;
            case 0x77:
            case 0x7b:
            case 0x7c:
            case 0x7d:
            case 0x7e:
            case 0x7f:
            case 0x80:
            case 0x82:
            case 0x83:
            case 0x84:
            case 0x85:
                uVar4 = FUN_140910920(psVar5,param_2,param_3,param_4);
                iVar3 = (int)uVar4;
                if (iVar3 == 0) {
                    return uVar4;
                }
                if (iVar3 == 3) {
                    return uVar4;
                }
                if (iVar3 == 1) break;
                do {
                    psVar1 = psVar5 + (ushort)psVar5[1];
                    psVar5 = psVar5 + (ushort)psVar5[1];
                } while (*psVar1 == 0x71);
                psVar5 = psVar5 + 2;
                goto LAB_140910980;
            case 0x78:
            case 0x79:
            case 0x7a:
                do {
                    psVar1 = psVar5 + (ushort)psVar5[1];
                    psVar5 = psVar5 + (ushort)psVar5[1];
                } while (*psVar1 == 0x71);
            switchD_1409109a2_caseD_5d:
                psVar5 = psVar5 + 2;
                goto LAB_140910980;
            case 0x8c:
            case 0x8d:
            case 0x8e:
                psVar5 = psVar5 + 1;
                uVar4 = FUN_140910920(psVar5,param_2,param_3,param_4);
                if ((int)uVar4 == 0) {
                    return uVar4;
                }
                if ((int)uVar4 == 3) {
                    return uVar4;
                }
                do {
                    psVar1 = psVar5 + (ushort)psVar5[1];
                    psVar5 = psVar5 + (ushort)psVar5[1];
                } while (*psVar1 == 0x71);
                psVar5 = psVar5 + 2;
                goto LAB_140910980;
            case 0x9b:
                goto switchD_1409109a2_caseD_9b;
        }
        LAB_1409110cc:
        psVar5 = local_res8 + (ushort)local_res8[1];
        local_res8 = local_res8 + (ushort)local_res8[1];
        if (*psVar5 != 0x71) {
            return (ulonglong)local_18;
        }
    } while( true );
    switchD_1409109a2_caseD_9b:
    psVar5 = psVar5 + 1;
    do {
        psVar1 = psVar5 + (ushort)psVar5[1];
        psVar5 = psVar5 + (ushort)psVar5[1];
    } while (*psVar1 == 0x71);
    psVar5 = psVar5 + 2;
    goto LAB_140910980;
    switchD_1409109a2_caseD_1e:
    FUN_140911290(param_2,psVar5 + 1,1,param_4,param_3);
    goto LAB_1409110cc;
    switchD_1409109a2_caseD_1d:
    FUN_140911290(param_2,psVar5 + 1,0,param_4,param_3);
    goto LAB_1409110cc;
}



ushort * FUN_140911290(longlong param_1,ushort *param_2,int param_3,longlong param_4,int param_5)

{
    byte *pbVar1;
    byte bVar2;
    ushort *puVar3;
    uint uVar4;

    uVar4 = (uint)*param_2;
    if (0xff < *param_2) {
        uVar4 = 0xff;
        param_3 = 0;
    }
    pbVar1 = (byte *)((ulonglong)(uVar4 >> 3) + param_1);
    *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar4 & 7);
    if ((param_5 != 0) && (0x7f < uVar4)) {
        puVar3 = param_2 + 1;
        if ((*param_2 & 0xfc00) == 0xd800) {
            puVar3 = param_2 + 2;
        }
        return puVar3;
    }
    if ((param_3 != 0) && ((*(byte *)((ulonglong)uVar4 + *(longlong *)(param_4 + 0x18)) & 2) != 0)) {
        bVar2 = *(byte *)((ulonglong)uVar4 + *(longlong *)(param_4 + 8));
        pbVar1 = (byte *)((ulonglong)(bVar2 >> 3) + param_1);
        *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    }
    return param_2 + 1;
}


/*
Unable to decompile 'FUN_140911350'
Cause: Exception while decompiling 140911350: process: timeout

*/


ulonglong FUN_140918870(int param_1,ushort *param_2,int param_3,longlong param_4,int param_5)

{
    ushort *puVar1;
    ushort uVar2;
    ushort uVar3;
    ushort *puVar4;

    puVar4 = (ushort *)
            (*(longlong *)(param_4 + 0x98) +
             (longlong)*(int *)(*(longlong *)(param_4 + 0x10) + (longlong)param_1 * 4) * 2);
    if (param_3 < 0) {
        return 0xffffffff;
    }
    puVar1 = param_2;
    if (param_5 == 0) {
        if (0 < param_3) {
            do {
                param_3 = param_3 + -1;
                if (*(ushort **)(param_4 + 0xa0) <= puVar1) {
                    return 0xfffffffe;
                }
                uVar3 = *puVar4;
                uVar2 = *puVar1;
                puVar1 = puVar1 + 1;
                puVar4 = puVar4 + 1;
                if (uVar3 != uVar2) {
                    return 0xffffffff;
                }
            } while (0 < param_3);
        }
    }
    else if (0 < param_3) {
        do {
            param_3 = param_3 + -1;
            if (*(ushort **)(param_4 + 0xa0) <= puVar1) {
                return 0xfffffffe;
            }
            uVar3 = *(ushort *)(((longlong)puVar4 - (longlong)param_2) + (longlong)puVar1);
            uVar2 = *puVar1;
            if (uVar3 < 0x100) {
                uVar3 = (ushort)*(byte *)(*(longlong *)(param_4 + 0x40) + (ulonglong)uVar3);
            }
            if (uVar2 < 0x100) {
                uVar2 = (ushort)*(byte *)(*(longlong *)(param_4 + 0x40) + (ulonglong)uVar2);
            }
            if (uVar3 != uVar2) {
                return 0xffffffff;
            }
            puVar1 = puVar1 + 1;
        } while (0 < param_3);
    }
    return (longlong)puVar1 - (longlong)param_2 >> 1 & 0xffffffff;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1409189a0(int *param_1,uint *param_2,ushort *param_3,int param_4,int param_5,uint param_6,
                   int *param_7,int param_8)

{
    ushort uVar1;
    ushort uVar2;
    ushort *puVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    int *piVar8;
    ushort *puVar9;
    longlong lVar10;
    int iVar11;
    undefined *puVar12;
    ulonglong uVar13;
    int *piVar14;
    ushort *puVar15;
    ushort *puVar16;
    ulonglong uVar17;
    ushort *puVar18;
    uint uVar19;
    uint uVar20;
    ushort *puVar21;
    undefined auStack584 [32];
    undefined4 *local_228;
    int *local_220;
    int local_218;
    ushort local_208;
    int local_204;
    ushort local_200;
    ushort local_1fe;
    ushort local_1fc;
    int local_1f8;
    uint local_1f4;
    int local_1f0;
    int *local_1e8;
    int *local_1e0;
    uint local_1d8;
    ushort *local_1d0;
    ulonglong local_1c8;
    ushort *local_1c0;
    longlong local_1b8;
    ushort *local_1b0;
    ushort *local_1a8;
    longlong local_1a0;
    uint *local_198;
    longlong local_190;
    longlong local_188;
    ushort *local_180;
    longlong local_178;
    longlong local_170;
    undefined4 local_168;
    uint local_164;
    uint local_160;
    int *local_158;
    int local_150;
    int local_14c;
    int local_148;
    uint local_144;
    uint local_140;
    uint local_13c;
    longlong local_138;
    ushort local_130;
    ushort local_12e;
    undefined *local_128;
    undefined *local_120;
    undefined *local_118;
    undefined4 local_110;
    uint local_10c;
    uint local_108;
    uint local_104;
    uint local_100;
    uint local_fc;
    uint local_f8;
    uint local_f4;
    uint local_f0;
    int local_ec;
    uint local_e8;
    uint local_e4;
    undefined4 local_e0;
    longlong local_d8;
    ushort *local_d0;
    ushort *local_c8;
    ushort *local_c0;
    longlong local_b8;
    ushort *local_b0;
    uint local_a8;
    int local_a4;
    undefined4 local_a0;
    int local_9c;
    undefined4 local_98;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack584;
    local_170 = (longlong)param_5 * 2;
    puVar16 = param_3 + param_5;
    local_1c0 = puVar16 + -1;
    local_1e0 = param_7;
    local_1f0 = 0;
    local_204 = 0;
    local_1c8 = local_1c8 & 0xffffffff00000000;
    local_1fc = 0;
    local_200 = 0;
    local_1fe = 0;
    local_208 = 0;
    local_1a0 = 0;
    local_1b0 = (ushort *)0x0;
    local_1e8 = param_1;
    local_1d0 = param_3;
    local_1a8 = puVar16;
    local_198 = param_2;
    if ((((param_1 == (int *)0x0) && (param_2 == (uint *)0x0)) && (param_3 == (ushort *)0x0)) &&
        ((param_4 == -999 && (param_5 == -999)))) {
        local_218 = 0;
        local_220 = (int *)0x0;
        local_228 = (undefined4 *)0x0;
        FUN_140911350();
        goto LAB_1409198b6;
    }
    if ((((((param_6 & 0xe20f5a6f) != 0) || (param_1 == (int *)0x0)) ||
          ((param_3 == (ushort *)0x0 ||
            ((((param_7 == (int *)0x0 && (0 < param_8)) || (param_8 < 0)) ||
              ((param_4 < 0 || (param_5 < 0)))))))) || (param_4 < param_5)) ||
        ((*param_1 != 0x50435245 || ((*(byte *)(param_1 + 3) & 2) == 0)))) goto LAB_1409198b6;
    local_1d8 = (uint)param_1[2] >> 0xb & 1;
    if ((param_6 >> 0x1b & 1) == 0) {
        local_a8 = param_6 >> 0xf & 1;
    }
    else {
        local_a8 = 2;
    }
    local_104 = local_1d8;
    if ((local_1d8 != 0) && ((param_6 >> 0xd & 1) == 0)) {
        iVar4 = FUN_140919bd0();
        if (iVar4 != 0) {
            if (1 < param_8) {
                param_7[1] = iVar4;
                *param_7 = local_1f8;
            }
            goto LAB_1409198b6;
        }
        if (((0 < param_5) && (param_5 < param_4)) && ((*puVar16 & 0xfc00) == 0xdc00))
            goto LAB_1409198b6;
    }
    if (((param_2 != (uint *)0x0) && (((byte)*param_2 & 0x48) == 0x40)) &&
        ((*(longlong *)(param_2 + 0xe) != 0 && ((param_6 & 0xe7ff5a7f) == 0)))) {
        local_218 = param_8;
        local_220 = param_7;
        local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffff00000000 | (ulonglong)param_6);
        iVar4 = FUN_14091b2b0(param_2,local_1d0);
        if (iVar4 != -0x1f) goto LAB_1409198b6;
    }
    puVar12 = *(undefined **)(param_1 + 8);
    local_138 = (longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 6) * 2;
    local_140 = (uint)*(ushort *)(param_1 + 7);
    local_13c = (uint)*(ushort *)((longlong)param_1 + 0x1a);
    local_164 = 10000000;
    local_160 = 10000000;
    local_1b8 = 0;
    local_78 = 0;
    if (param_2 != (uint *)0x0) {
        uVar7 = *param_2;
        if ((uVar7 & 1) != 0) {
            local_1b8 = *(longlong *)(param_2 + 2);
        }
        if ((uVar7 & 2) != 0) {
            local_164 = param_2[4];
        }
        if ((uVar7 & 0x10) != 0) {
            local_160 = param_2[10];
        }
        if ((uVar7 & 4) != 0) {
            local_78 = *(undefined8 *)(param_2 + 6);
        }
        if ((uVar7 & 8) != 0) {
            puVar12 = *(undefined **)(param_2 + 8);
        }
    }
    uVar1 = *(ushort *)(param_1 + 3);
    local_128 = &DAT_1409cfca0;
    if (puVar12 != (undefined *)0x0) {
        local_128 = puVar12;
    }
    uVar7 = param_1[2];
    local_9c = param_5;
    local_1f4 = uVar7 >> 0x12 & 1;
    local_180 = local_1d0 + param_4;
    local_d8 = (longlong)param_1 +
               ((longlong)(int)(local_13c * local_140) + (ulonglong)*(ushort *)(param_1 + 6)) * 2;
    local_d0 = local_1d0;
    local_120 = local_128 + 0x100;
    uVar19 = (uVar7 | param_6) >> 4 & 1;
    local_f8 = uVar7 >> 5 & 1;
    uVar20 = uVar1 >> 8 & 1;
    local_e0 = 0;
    local_ec = 0;
    local_fc = uVar7 >> 0x1d & 1;
    local_68 = 0;
    local_70 = 0;
    local_80 = 0;
    local_100 = uVar7 >> 0x19 & 1;
    local_10c = param_6 >> 7 & 1;
    local_108 = param_6 >> 8 & 1;
    local_f4 = param_6 >> 10 & 1;
    local_f0 = param_6 >> 0x1c & 1;
    local_e4 = uVar1 >> 0xc & 1;
    local_118 = local_128 + 0x340;
    uVar5 = param_6 & 0x1800000;
    local_c8 = local_180;
    if (uVar5 == 0) {
        if ((uVar7 & 0x1800000) == 0) goto LAB_140918dfb;
        local_e8 = uVar7 >> 0x17 & 1;
    }
    else if (uVar5 == 0x800000) {
        local_e8 = 1;
    }
    else {
        if (uVar5 != 0x1000000) goto LAB_1409198b6;
        LAB_140918dfb:
        local_e8 = 0;
    }
    uVar5 = param_6;
    if ((param_6 & 0x700000) == 0) {
        uVar5 = uVar7;
    }
    uVar5 = uVar5 & 0x700000;
    if (uVar5 < 0x300001) {
        if (uVar5 == 0x300000) {
            uVar7 = 0xd0a;
        }
        else {
            if (uVar5 != 0) {
                if (uVar5 == 0x100000) {
                    uVar7 = 0xd;
                    goto LAB_140918e44;
                }
                if (uVar5 != 0x200000) goto LAB_1409198b6;
            }
            uVar7 = 10;
        }
        LAB_140918e44:
        iVar4 = 0;
        local_148 = 0;
        local_130 = (ushort)uVar7;
        if (uVar7 < 0x100) {
            uVar17 = 1;
            local_144 = 1;
        }
        else {
            uVar17 = 2;
            local_144 = 2;
            local_12e = local_130 & 0xff;
            local_130 = (ushort)(uVar7 >> 8);
            iVar4 = 0;
        }
    }
    else {
        if (uVar5 == 0x400000) {
            iVar4 = 1;
            local_148 = 1;
        }
        else {
            if (uVar5 != 0x500000) goto LAB_1409198b6;
            iVar4 = 2;
            local_148 = 2;
        }
        uVar17 = (ulonglong)local_144;
    }
    if ((local_a8 != 0) && ((uVar1 & 0x200) != 0)) goto LAB_1409198b6;
    uVar13 = (longlong)param_8 / 3 + ((longlong)param_8 >> 0x3f) & 0xffffffff;
    iVar11 = (int)uVar13 + (int)(uVar13 >> 0x1f);
    iVar6 = iVar11 * 3;
    lVar10 = (longlong)(iVar11 * 6);
    uVar13 = lVar10 / 3 + (lVar10 >> 0x3f) & 0xffffffff;
    uVar2 = *(ushort *)((longlong)local_1e8 + 0x12);
    local_1f8 = (int)(uVar13 >> 0x1f) + (int)uVar13;
    local_158 = local_1e0;
    if ((uVar2 != 0) &&
        (uVar13 = (longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffff,
                (int)uVar13 + (int)(uVar13 >> 0x1f) <= (int)(uint)uVar2)) {
        iVar6 = (uVar2 + 1) * 3;
        local_158 = (int *)(*(code *)PTR_FUN_140c1b1e0)();
        if (local_158 == (int *)0x0) goto LAB_1409198b6;
        uVar17 = (ulonglong)local_144;
        local_1f0 = 1;
        iVar4 = local_148;
    }
    puVar3 = local_180;
    local_110 = 0;
    local_a0 = 0xffffffff;
    uVar13 = (longlong)(iVar6 * 2) / 3 + ((longlong)(iVar6 * 2) >> 0x3f) & 0xffffffff;
    local_14c = (int)uVar13 + (int)(uVar13 >> 0x1f);
    if (local_158 != (int *)0x0) {
        piVar14 = local_158 + ((longlong)iVar6 - (ulonglong)*(ushort *)(local_1e8 + 4));
        if (local_158 + ((longlong)iVar6 - (ulonglong)*(ushort *)(local_1e8 + 4)) < local_158 + 2) {
            piVar14 = local_158 + 2;
        }
        for (piVar8 = local_158 + (longlong)iVar6 + -1; piVar14 <= piVar8; piVar8 = piVar8 + -1) {
            *piVar8 = -1;
        }
        local_158[1] = -1;
        *local_158 = -1;
        uVar17 = (ulonglong)local_144;
        iVar4 = local_148;
    }
    if (uVar19 == 0) {
        if ((*(ushort *)(local_1e8 + 3) & 0x10) == 0) {
            if (((uVar1 >> 8 & 1) != 0) || (local_1b8 == 0)) goto LAB_140919066;
            local_1c8._0_4_ = uVar20 + 1;
            if ((*(byte *)(local_1b8 + 4) & (byte)(int)local_1c8) != 0) {
                local_1a0 = local_1b8 + 8;
            }
        }
        else {
            local_1fc = *(ushort *)(local_1e8 + 5);
            local_1c8._0_4_ = 1;
            local_204 = 1;
            local_200 = local_1fc;
            if (((*(ushort *)(local_1e8 + 3) & 0x20) != 0) && (local_1fc < 0x100)) {
                local_200 = (ushort)(byte)local_120[local_1fc];
            }
        }
    }
    else {
        LAB_140919066:
        local_1c8._0_4_ = 1;
    }
    if ((*(ushort *)(local_1e8 + 3) & 0x40) == 0) {
    }
    else {
        local_1fe = *(ushort *)((longlong)local_1e8 + 0x16);
        local_208 = local_1fe;
        if (((char)*(ushort *)(local_1e8 + 3) < '\0') && (local_1fe < 0x100)) {
            local_208 = (ushort)(byte)local_120[local_1fe];
        }
    }
    local_190 = (longlong)(int)uVar20;
    local_1c8 = (ulonglong)local_204;
    local_188 = (longlong)(int)local_1c8;
    local_178 = (longlong)(int)uVar19;
    puVar21 = local_1c0;
    local_150 = iVar6;
    LAB_1409190d4:
    uVar7 = local_1d8;
    puVar15 = puVar3;
    if (local_1f4 != 0) {
        puVar15 = puVar16;
        if (local_1d8 == 0) {
            puVar9 = local_c8;
            if (puVar16 < local_c8) {
                do {
                    if (iVar4 == 0) {
                        if (((puVar15 <= puVar9 + -(longlong)(int)uVar17) && (*puVar15 == local_130)) &&
                        (((int)uVar17 == 1 || (puVar15[1] == local_12e)))) break;
                    }
                    else {
                        local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffff00000000);
                        iVar6 = FUN_1409199e0(puVar15,iVar4);
                        uVar17 = (ulonglong)local_144;
                        puVar9 = local_c8;
                        iVar4 = local_148;
                        if (iVar6 != 0) break;
                    }
                    puVar15 = puVar15 + 1;
                } while (puVar15 < puVar9);
            }
        }
        else {
            puVar9 = puVar16;
            puVar18 = local_c8;
            if (puVar16 < local_c8) {
                do {
                    puVar15 = puVar9;
                    if (iVar4 == 0) {
                        if (((puVar9 <= puVar18 + -(longlong)(int)uVar17) && (*puVar9 == local_130)) &&
                        (((int)uVar17 == 1 || (puVar9[1] == local_12e)))) break;
                    }
                    else {
                        local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffff00000000 | (ulonglong)uVar7)
                                ;
                        iVar6 = FUN_1409199e0(puVar9,iVar4);
                        uVar17 = (ulonglong)local_144;
                        puVar18 = local_c8;
                        iVar4 = local_148;
                        if (iVar6 != 0) break;
                    }
                    puVar15 = puVar9 + 1;
                    if ((puVar15 < puVar3) && ((*puVar15 & 0xfc00) == 0xdc00)) {
                        puVar15 = puVar9 + 2;
                    }
                    puVar9 = puVar15;
                } while (puVar15 < puVar18);
            }
        }
    }
    piVar14 = local_1e8;
    if (((param_6 | local_1e8[2]) >> 0x1a & 1) == 0) {
        if (local_1c8 == 0) {
            if (local_190 == 0) {
                if (local_1a0 != 0) {
                    for (; puVar16 < puVar15; puVar16 = puVar16 + 1) {
                        uVar5 = (uint)*puVar16;
                        if (0xff < *puVar16) {
                            uVar5 = 0xff;
                        }
                        puVar21 = local_1c0;
                        if ((*(byte *)((ulonglong)(uVar5 >> 3) + local_1a0) & (byte)(1 << ((byte)uVar5 & 7))) !=
                            0) break;
                    }
                }
            }
            else if ((ushort *)(local_170 + (longlong)local_d0) < puVar16) {
                puVar9 = local_d0;
                if (uVar7 == 0) {
                    for (; puVar16 < puVar15; puVar16 = puVar16 + 1) {
                        if (iVar4 == 0) {
                            iVar6 = (int)uVar17;
                            if (((puVar9 + iVar6 <= puVar16) && (puVar16[-(longlong)iVar6] == local_130)) &&
                                ((iVar6 == 1 || ((puVar16 + -(longlong)iVar6)[1] == local_12e)))) break;
                        }
                        else if (puVar9 < puVar16) {
                            local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffff00000000);
                            iVar6 = FUN_140919a90(puVar16);
                            iVar4 = local_148;
                            if (iVar6 != 0) break;
                            uVar17 = (ulonglong)local_144;
                            puVar9 = local_d0;
                        }
                    }
                }
                else {
                    while (puVar18 = puVar16, puVar16 = puVar18, puVar18 < puVar15) {
                        if (iVar4 == 0) {
                            iVar6 = (int)uVar17;
                            if (((puVar9 + iVar6 <= puVar18) && (puVar18[-(longlong)iVar6] == local_130)) &&
                                ((iVar6 == 1 || ((puVar18 + -(longlong)iVar6)[1] == local_12e)))) break;
                        }
                        else if (puVar9 < puVar18) {
                            local_228 = (undefined4 *)
                                    ((ulonglong)local_228 & 0xffffffff00000000 | (ulonglong)uVar7);
                            iVar6 = FUN_140919a90(puVar18);
                            iVar4 = local_148;
                            if (iVar6 != 0) break;
                            uVar17 = (ulonglong)local_144;
                            puVar9 = local_d0;
                        }
                        puVar16 = puVar18 + 1;
                        if (puVar15 <= puVar16) break;
                        if ((*puVar16 & 0xfc00) == 0xdc00) {
                            puVar16 = puVar18 + 2;
                        }
                    }
                }
                if ((((puVar16[-1] == 0xd) && (iVar4 - 1U < 2)) && (puVar16 < puVar15)) && (*puVar16 == 10))
                {
                    puVar16 = puVar16 + 1;
                }
            }
        }
        else if (local_1fc == local_200) {
            for (; (puVar16 < puVar15 && (*puVar16 != local_1fc)); puVar16 = puVar16 + 1) {
            }
        }
        else {
            for (; ((puVar16 < puVar15 && (*puVar16 != local_1fc)) && (*puVar16 != local_200));
                   puVar16 = puVar16 + 1) {
            }
        }
    }
    puVar15 = local_1c0;
    if ((((param_6 | piVar14[2]) >> 0x1a & 1) == 0) && (local_a8 == 0)) {
        if ((local_1b8 != 0) &&
            (((*(byte *)(local_1b8 + 4) & 2) != 0 &&
              ((uint)((longlong)puVar3 - (longlong)puVar16 >> 1) < *(uint *)(local_1b8 + 0x28)))))
            goto LAB_140919511;
        if ((local_188 == 0) ||
            ((1999 < (longlong)((longlong)puVar3 - (longlong)puVar16 & 0xfffffffffffffffeU) ||
              (puVar9 = puVar16 + (local_204 != 0), puVar9 <= puVar21)))) goto LAB_14091954c;
        if (local_1fe == local_208) {
            if (puVar9 < puVar3) {
                while (uVar1 = *puVar9, puVar9 = puVar9 + 1, uVar1 != local_1fe) {
                    if (puVar3 <= puVar9) goto LAB_140919511;
                }
                goto LAB_14091953c;
            }
        }
        else if (puVar9 < puVar3) {
            while( true ) {
                uVar1 = *puVar9;
                puVar9 = puVar9 + 1;
                if ((uVar1 == local_1fe) || (uVar1 == local_208)) break;
                if (puVar3 <= puVar9) goto LAB_140919511;
            }
            LAB_14091953c:
            puVar21 = puVar9 + -1;
            puVar15 = puVar21;
            if (puVar21 < puVar3) goto LAB_14091954c;
        }
        LAB_140919511:
        iVar6 = 0;
        goto LAB_140919513;
    }
    LAB_14091954c:
    local_1c0 = puVar15;
    local_218 = 0;
    local_220 = (int *)0x0;
    local_168 = 0;
    local_98 = 0;
    local_a4 = 0;
    local_228 = &local_168;
    local_c0 = puVar16;
    local_b0 = puVar16;
    iVar6 = FUN_140911350();
    iVar4 = local_1f8;
    if ((local_ec != 0) && (local_1b0 == (ushort *)0x0)) {
        local_1b0 = local_b0;
    }
    if (iVar6 < -0x3e0) {
        if (iVar6 != -0x3e1) {
            if (iVar6 == -0x3e6) goto LAB_140919511;
            if (iVar6 != -0x3e3) {
                if (iVar6 != -0x3e2) goto LAB_14091972a;
                puVar15 = local_c0;
                if (local_c0 != puVar16) goto LAB_140919630;
            }
            goto LAB_140919602;
        }
        local_e0 = 1;
        puVar15 = puVar16;
    }
    else {
        if ((iVar6 != -0x3e0) && (iVar6 != 0)) {
            LAB_14091972a:
            if ((iVar6 == 1) || (iVar6 == -999)) {
                if (local_1f0 != 0) {
                    if (3 < local_1f8) {
                        FUN_1407db590(local_1e0 + 2,local_158 + 2,(longlong)(local_1f8 + -2) << 2);
                    }
                    if (iVar4 < local_a4) {
                        local_110 = 1;
                    }
                    (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
                }
                uVar1 = *(ushort *)(piVar14 + 4);
                if ((local_a4 / 2 <= (int)(uint)uVar1) && (local_1e0 != (int *)0x0)) {
                    iVar4 = (uint)uVar1 * 2 + 2;
                    piVar14 = local_1e0 + local_a4;
                    if (param_8 < iVar4) {
                        iVar4 = param_8;
                    }
                    if (piVar14 < local_1e0 + iVar4) {
                        lVar10 = ((ulonglong)((longlong)(local_1e0 + iVar4) + (-1 - (longlong)piVar14)) >> 2) +
                                 1;
                        for (; lVar10 != 0; lVar10 = lVar10 + -1) {
                            *piVar14 = -1;
                            piVar14 = piVar14 + 1;
                        }
                    }
                }
                if (1 < param_8) {
                    *local_1e0 = (int)((longlong)local_c0 - (longlong)local_d0 >> 1);
                    local_1e0[1] = (int)(local_b8 - (longlong)local_d0 >> 1);
                }
                if ((local_198 != (uint *)0x0) && ((*(byte *)local_198 & 0x20) != 0)) {
                    **(undefined8 **)(local_198 + 0xc) = local_70;
                }
                goto LAB_1409198b6;
            }
            LAB_140919513:
            if (local_1f0 != 0) {
                (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_158);
            }
            if ((iVar6 == 0) || (iVar6 == -0xc)) {
                if ((local_1b0 != (ushort *)0x0) && (1 < param_8)) {
                    local_1e0[1] = (int)((longlong)puVar3 - (longlong)local_1d0 >> 1);
                    *local_1e0 = (int)((longlong)local_1b0 - (longlong)local_1d0 >> 1);
                }
                if ((local_198 != (uint *)0x0) && ((*(byte *)local_198 & 0x20) != 0)) {
                    **(undefined8 **)(local_198 + 0xc) = local_68;
                }
            }
            LAB_1409198b6:
            FUN_1407db4f0(local_58 ^ (ulonglong)auStack584);
            return;
        }
        LAB_140919602:
        local_e0 = 0;
        puVar15 = puVar16 + 1;
        if (((uVar7 != 0) && (puVar15 < puVar3)) && ((*puVar15 & 0xfc00) == 0xdc00)) {
            puVar15 = puVar16 + 2;
        }
    }
    LAB_140919630:
    iVar6 = 0;
    if (local_1f4 != 0) {
        if (local_148 == 0) {
            uVar17 = (ulonglong)(int)local_144;
            if (((puVar16 <= local_c8 + -uVar17) && (*puVar16 == local_130)) &&
                ((local_144 == 1 || (puVar16[1] == local_12e)))) goto LAB_140919513;
            goto LAB_140919683;
        }
        if (local_c8 <= puVar16) goto LAB_14091967f;
        local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffff00000000 | (ulonglong)uVar7);
        iVar4 = FUN_1409199e0(puVar16,local_148);
        if (iVar4 != 0) goto LAB_140919513;
    }
    LAB_14091967f:
    uVar17 = (ulonglong)local_144;
    LAB_140919683:
    if ((local_178 != 0) || (puVar3 < puVar15)) goto LAB_140919513;
    if (((((local_1a8 < puVar15) && (puVar15[-1] == 0xd)) && (puVar15 < puVar3)) &&
         ((*puVar15 == 10 && ((*(ushort *)(local_1e8 + 3) & 0x800) == 0)))) &&
        ((local_148 - 1U < 2 || ((int)uVar17 == 2)))) {
        puVar15 = puVar15 + 1;
    }
    local_70 = 0;
    puVar16 = puVar15;
    iVar4 = local_148;
    goto LAB_1409190d4;
}



int FUN_1409198e0(longlong param_1,ushort *param_2)

{
    ushort uVar1;
    ushort uVar2;

    param_1 = param_1 - (longlong)param_2;
    while ((uVar1 = *(ushort *)(param_1 + (longlong)param_2), uVar1 != 0 || (*param_2 != 0))) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        if (uVar1 != uVar2) {
            return (uint)(uVar2 < uVar1) * 2 + -1;
        }
    }
    return 0;
}



int FUN_140919930(short *param_1)

{
    short sVar1;
    int iVar2;

    iVar2 = 0;
    sVar1 = *param_1;
    while (sVar1 != 0) {
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
        sVar1 = *param_1;
    }
    return iVar2;
}



int FUN_140919950(ushort *param_1,byte *param_2,int param_3)

{
    byte bVar1;
    ushort uVar2;

    if (param_3 != 0) {
        do {
            uVar2 = *param_1;
            bVar1 = *param_2;
            param_3 = param_3 + -1;
            param_1 = param_1 + 1;
            param_2 = param_2 + 1;
            if (uVar2 != bVar1) {
                return (uint)(bVar1 <= uVar2 && uVar2 != bVar1) * 2 + -1;
            }
        } while (param_3 != 0);
    }
    return 0;
}



int FUN_1409199a0(longlong param_1,ushort *param_2,int param_3)

{
    ushort uVar1;
    ushort uVar2;

    if (param_3 != 0) {
        param_1 = param_1 - (longlong)param_2;
        do {
            uVar1 = *(ushort *)(param_1 + (longlong)param_2);
            uVar2 = *param_2;
            param_3 = param_3 + -1;
            param_2 = param_2 + 1;
            if (uVar1 != uVar2) {
                return (uint)(uVar2 < uVar1) * 2 + -1;
            }
        } while (param_3 != 0);
    }
    return 0;
}



undefined8
FUN_1409199e0(ushort *param_1,int param_2,longlong param_3,undefined4 *param_4,int param_5)

{
    undefined4 uVar1;
    uint uVar2;

    uVar2 = (uint)*param_1;
    if ((param_5 != 0) && ((uVar2 & 0xfc00) == 0xd800)) {
        uVar2 = (param_1[1] & 0x3ff | (*param_1 & 0x3ff) << 10) + 0x10000;
    }
    if (param_2 == 2) {
        if (uVar2 != 10) {
            LAB_140919a4f:
            if (uVar2 != 0xd) {
                return 0;
            }
            if (((ushort *)(param_3 - 2U) <= param_1) || (uVar1 = 2, param_1[1] != 10)) {
                uVar1 = 1;
            }
            *param_4 = uVar1;
            return 1;
        }
    }
    else if (uVar2 < 0x86) {
        if (uVar2 != 0x85) {
            if (uVar2 < 10) {
                return 0;
            }
            if (0xc < uVar2) goto LAB_140919a4f;
        }
    }
    else if (1 < uVar2 - 0x2028) {
        return 0;
    }
    *param_4 = 1;
    return 1;
}



undefined8
FUN_140919a90(longlong param_1,int param_2,ushort *param_3,undefined4 *param_4,int param_5)

{
    undefined4 uVar1;
    uint uVar2;
    ushort *puVar3;

    puVar3 = (ushort *)(param_1 + -2);
    if (param_5 == 0) {
        uVar2 = (uint)*puVar3;
    }
    else {
        if ((*puVar3 & 0xfc00) == 0xdc00) {
            puVar3 = (ushort *)(param_1 + -4);
        }
        uVar2 = (uint)*puVar3;
        if ((uVar2 & 0xfc00) == 0xd800) {
            uVar2 = (puVar3[1] & 0x3ff | (*puVar3 & 0x3ff) << 10) + 0x10000;
        }
    }
    if (param_2 == 2) {
        if (uVar2 == 10) {
            LAB_140919b1a:
            if ((puVar3 <= param_3) || (uVar1 = 2, puVar3[-1] != 0xd)) {
                uVar1 = 1;
            }
            *param_4 = uVar1;
            return 1;
        }
        if (uVar2 != 0xd) {
            return 0;
        }
    }
    else if (uVar2 < 0x86) {
        if (uVar2 != 0x85) {
            if (uVar2 != 10) {
                if (2 < uVar2 - 0xb) {
                    return 0;
                }
                *param_4 = 1;
                return 1;
            }
            goto LAB_140919b1a;
        }
    }
    else if (1 < uVar2 - 0x2028) {
        return 0;
    }
    *param_4 = 1;
    return 1;
}



undefined8 FUN_140919b80(uint param_1,ushort *param_2)

{
    if (param_1 < 0x10000) {
        *param_2 = (ushort)param_1;
        return 1;
    }
    *param_2 = (ushort)(param_1 - 0x10000 >> 10) | 0xd800;
    param_2[1] = (ushort)(param_1 - 0x10000) & 0x3ff | 0xdc00;
    return 2;
}



undefined8 FUN_140919bd0(ushort *param_1,uint param_2,undefined4 *param_3)

{
    ushort *puVar1;
    ushort uVar2;
    ushort *puVar3;
    uint uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
        uVar2 = *param_1;
        puVar3 = param_1;
        while (uVar2 != 0) {
            puVar3 = puVar3 + 1;
            uVar2 = *puVar3;
        }
        uVar6 = (longlong)puVar3 - (longlong)param_1 >> 1;
    }
    uVar5 = (uint)uVar6;
    puVar3 = param_1;
    do {
        if ((int)uVar5 < 1) {
            return 0;
        }
        uVar4 = (uint)*puVar3;
        uVar5 = (int)uVar6 - 1;
        if ((uVar4 & 0xf800) == 0xd800) {
            if ((*puVar3 >> 10 & 1) != 0) {
                *param_3 = (int)((longlong)puVar3 - (longlong)param_1 >> 1);
                return 3;
            }
            if (uVar5 == 0) {
                *param_3 = (int)((longlong)puVar3 - (longlong)param_1 >> 1);
                return 1;
            }
            puVar1 = puVar3 + 1;
            puVar3 = puVar3 + 1;
            uVar5 = (int)uVar6 - 2;
            if ((*puVar1 & 0xfc00) != 0xdc00) {
                *param_3 = (int)((longlong)puVar3 - (longlong)param_1 >> 1);
                return 2;
            }
            if ((*puVar1 & 0x3fe | (uVar4 & 0x3f) << 10) == 0xfffe) goto LAB_140919c51;
        }
        else if (((uVar4 & 0xfffe) == 0xfffe) || (uVar4 - 0xfdd0 < 0x20)) {
            LAB_140919c51:
            *param_3 = (int)((longlong)puVar3 - (longlong)param_1 >> 1);
            return 4;
        }
        uVar6 = (ulonglong)uVar5;
        puVar3 = puVar3 + 1;
    } while( true );
}



undefined8 FUN_140919d20(int *param_1,byte *param_2,undefined4 param_3,uint **param_4)

{
    ushort uVar1;
    int iVar2;
    undefined8 uVar3;
    uint uVar4;
    uint *puVar5;
    uint uVar6;
    uint *puVar7;

    puVar7 = (uint *)0x0;
    iVar2 = 0;
    uVar6 = 0;
    if ((param_1 == (int *)0x0) || (param_4 == (uint **)0x0)) {
        return 0xfffffffe;
    }
    puVar5 = puVar7;
    if ((param_2 != (byte *)0x0) && (puVar5 = (uint *)0x0, (*param_2 & 1) != 0)) {
        puVar5 = *(uint **)(param_2 + 8);
    }
    if (*param_1 == 0x50435245) {
        uVar1 = *(ushort *)(param_1 + 3);
        if ((uVar1 & 2) == 0) {
            return 0xffffffe4;
        }
        switch(param_3) {
            case 0:
                *(uint *)param_4 = param_1[2] & 0x27fc7a7f;
                return 0;
            case 1:
                *param_4 = (uint *)(ulonglong)(uint)param_1[1];
                return 0;
            case 2:
                *(uint *)param_4 = (uint)*(ushort *)(param_1 + 4);
                return 0;
            case 3:
                *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0x12);
                return 0;
            case 4:
                if ((uVar1 & 0x10) == 0) {
                    *(uint *)param_4 = uVar1 >> 8 | 0xfffffffe;
                    return 0;
                }
                *(uint *)param_4 = (uint)*(ushort *)(param_1 + 5);
                return 0;
            case 5:
                if ((puVar5 != (uint *)0x0) && ((*(byte *)(puVar5 + 1) & 1) != 0)) {
                    puVar7 = (uint *)(*(longlong *)(param_2 + 8) + 8);
                }
                *param_4 = puVar7;
                return 0;
            case 6:
                if ((uVar1 & 0x40) != 0) {
                    *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0x16);
                    return 0;
                }
                break;
            case 7:
                *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0x1a);
                return 0;
            case 8:
                *(uint *)param_4 = (uint)*(ushort *)(param_1 + 7);
                return 0;
            case 9:
                *param_4 = (uint *)((longlong)param_1 + (ulonglong)*(ushort *)(param_1 + 6) * 2);
                return 0;
            case 10:
                if (puVar5 != (uint *)0x0) {
                    puVar7 = (uint *)(ulonglong)*puVar5;
                }
                *param_4 = puVar7;
                return 0;
            case 0xb:
                *param_4 = (uint *)&DAT_1409cfca0;
                return 0;
            case 0xc:
                *(uint *)param_4 = ~(uint)(uVar1 >> 9) & 1;
                return 0;
            case 0xd:
                *(uint *)param_4 = uVar1 >> 10 & 1;
                return 0;
            case 0xe:
                *(uint *)param_4 = uVar1 >> 0xb & 1;
                return 0;
            case 0xf:
                if ((puVar5 != (uint *)0x0) && ((*(byte *)(puVar5 + 1) & 2) != 0)) {
                    *(uint *)param_4 = puVar5[10];
                    return 0;
                }
                break;
            case 0x10:
                if (((param_2 == (byte *)0x0) || ((*param_2 & 0x40) == 0)) ||
                    (uVar4 = 1, *(longlong *)(param_2 + 0x38) == 0)) {
                    uVar4 = uVar6;
                }
                *(uint *)param_4 = uVar4;
                return 0;
            case 0x11:
                if (((param_2 != (byte *)0x0) && ((*param_2 & 0x40) != 0)) &&
                    (*(longlong *)(param_2 + 0x38) != 0)) {
                    iVar2 = FUN_14091b480();
                }
                *param_4 = (uint *)(longlong)iVar2;
                return 0;
            case 0x12:
                *(uint *)param_4 = (uint)*(ushort *)((longlong)param_1 + 0xe);
                return 0;
            case 0x13:
                if ((uVar1 & 0x10) != 0) {
                    uVar6 = (uint)*(ushort *)(param_1 + 5);
                }
                *(uint *)param_4 = uVar6;
                return 0;
            case 0x14:
                if ((uVar1 & 0x10) == 0) {
                    *(uint *)param_4 = uVar1 >> 7 & 2;
                    return 0;
                }
                *(undefined4 *)param_4 = 1;
                return 0;
            case 0x15:
                if ((uVar1 & 0x40) != 0) {
                    uVar6 = (uint)*(ushort *)((longlong)param_1 + 0x16);
                }
                *(uint *)param_4 = uVar6;
                return 0;
            case 0x16:
                *(uint *)param_4 = uVar1 >> 6 & 1;
                return 0;
            default:
                return 0xfffffffd;
        }
        *(undefined4 *)param_4 = 0xffffffff;
        return 0;
    }
    uVar3 = 0xfffffffc;
    if (*param_1 == 0x45524350) {
        uVar3 = 0xffffffe3;
    }
    return uVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14091a0c0(longlong param_1,uint *param_2,int param_3)

{
    short *psVar1;
    ushort uVar2;
    uint *puVar3;
    uint uVar4;
    int iVar5;
    int *piVar6;
    undefined *puVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 uVar13;
    undefined8 *puVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    uint uVar17;
    undefined auStack552 [32];
    undefined8 local_208;
    longlong local_200;
    undefined4 local_1f8;
    ulonglong local_1f0;
    longlong local_1e8;
    longlong local_1e0;
    longlong local_1d8;
    undefined8 local_1d0;
    undefined8 local_1c8;
    undefined8 local_1c0;
    undefined8 local_1b8;
    longlong local_1b0;
    uint *local_1a8;
    int *local_198;
    longlong local_190;
    longlong local_188;
    longlong local_180;
    int local_178;
    uint local_174;
    uint local_170;
    uint local_168;
    uint local_164;
    uint local_160;
    int local_15c;
    undefined *local_158;
    undefined *local_150;
    int local_148;
    undefined4 local_144;
    undefined4 local_140;
    undefined4 local_13c;
    uint local_138;
    undefined *local_130;
    undefined4 local_128;
    longlong local_108;
    ulonglong local_100;
    ulonglong local_f8;
    longlong local_f0;
    longlong local_e8;
    undefined8 local_e0;
    undefined8 *local_d0;
    undefined8 *local_c8;
    undefined8 local_c0;
    longlong local_b8;
    longlong local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    longlong local_98;
    longlong local_90;
    longlong local_88;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    uint local_60;
    uint local_5c;
    longlong local_58;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    lVar9 = *(longlong *)(param_2 + 2);
    local_1d8 = 0;
    lVar8 = 0;
    local_150 = &DAT_1409cfca0;
    if (*(undefined **)(param_1 + 0x20) != (undefined *)0x0) {
        local_150 = *(undefined **)(param_1 + 0x20);
    }
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1e0 = lVar9;
    local_1a8 = param_2;
    FUN_1407e4830(&local_198);
    uVar17 = *(uint *)(param_1 + 8);
    local_144 = 0;
    local_1b0 = param_1 + ((longlong)
            (int)((uint)*(ushort *)(param_1 + 0x1a) * (uint)*(ushort *)(param_1 + 0x1c)
                 ) + (ulonglong)*(ushort *)(param_1 + 0x18)) * 2;
    local_158 = local_150 + 0x100;
    uVar4 = uVar17 & 0x700000;
    local_190 = local_1b0;
    local_148 = param_3;
    if (uVar4 < 0x300001) {
        if (uVar4 == 0x300000) goto LAB_14091a1df;
        if (uVar4 == 0) {
            LAB_14091a1ab:
            local_140 = 10;
        }
        else {
            if (uVar4 != 0x100000) {
                if (uVar4 != 0x200000) goto LAB_14091b287;
                goto LAB_14091a1ab;
            }
            local_140 = 0xd;
        }
    }
    else {
        if (uVar4 == 0x400000) {
            local_144 = 1;
        }
        else {
            if (uVar4 != 0x500000) goto LAB_14091b287;
            local_144 = 2;
        }
        LAB_14091a1df:
        local_140 = 0xd0a;
    }
    local_13c = 2;
    if ((uVar17 >> 0x17 & 1) == 0) {
        local_13c = 1;
    }
    local_128 = 0xfffffffe;
    local_138 = uVar17 >> 5 & 1;
    local_130 = local_150 + 0x340;
    local_108 = param_1 + (ulonglong)*(ushort *)(param_1 + 0x18) * 2;
    local_60 = uVar17 >> 0x19 & 1;
    local_5c = uVar17 >> 0xb & 1;
    lVar11 = local_1b0;
    do {
        psVar1 = (short *)(lVar11 + (ulonglong)*(ushort *)(lVar11 + 2) * 2);
        lVar11 = lVar11 + (ulonglong)*(ushort *)(lVar11 + 2) * 2;
    } while (*psVar1 == 0x71);
    lVar11 = lVar11 + 4;
    local_174 = 0x28;
    local_100 = (ulonglong)*(ushort *)(param_1 + 0x1c);
    local_f8 = (ulonglong)*(ushort *)(param_1 + 0x1a);
    local_180 = (*(code *)PTR_FUN_140c1b1e0)(*(ushort *)(param_1 + 0x10) + 1);
    if (local_180 == 0) goto LAB_14091b287;
    FUN_1407e4830(local_180,1,*(ushort *)(param_1 + 0x10) + 1);
    iVar5 = FUN_14092f3e0();
    if (iVar5 < 0) {
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_180);
        goto LAB_14091b287;
    }
    if (param_3 == 0) {
        if (((*(byte *)(param_1 + 0xc) & 0x40) != 0) && ((*(uint *)(param_1 + 8) & 0x4000000) == 0)) {
            local_170 = local_174;
            uVar17 = local_164;
            LAB_14091a2ff:
            local_164 = uVar17;
            local_174 = local_174 + 8;
        }
    }
    else {
        local_168 = local_174;
        local_174 = local_174 + 8;
        uVar17 = local_174;
        if (param_3 == 1) goto LAB_14091a2ff;
    }
    uVar17 = local_174;
    if ((*(uint *)(param_1 + 8) & 0x40000) != 0) {
        uVar17 = local_174 + 8;
        local_160 = local_174;
    }
    local_174 = uVar17;
    if ((local_174 & 8) != 0) {
        local_174 = local_174 + 8;
    }
    local_178 = (*(ushort *)(param_1 + 0x10) + 1) * 0x10 + local_174;
    uVar17 = local_178 + (*(ushort *)(param_1 + 0x10) + 1) * 8 + iVar5;
    if ((0x10000 < (int)uVar17) ||
        (local_188 = (*(code *)PTR_FUN_140c1b1e0)((lVar11 - local_1b0 >> 1) << 2), local_188 == 0)) {
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_180);
        goto LAB_14091b287;
    }
    FUN_1407e4830(local_188,0,(lVar11 - local_1b0 >> 1) << 2);
    FUN_140931630(&local_198,local_178 + 8 + (uint)*(ushort *)(param_1 + 0x10) * 8,lVar11);
    piVar6 = (int *)FUN_140931a70();
    if (piVar6 != (int *)0x0) {
        local_208 = local_208 & 0xffffffff00000000 | (ulonglong)uVar17;
        local_198 = piVar6;
        FUN_140931ce0(piVar6,1,5);
        FUN_140930e10(&local_198,(uint)*(ushort *)(param_1 + 0x10) * 2 + 2);
        if (local_170 == 0) {
            LAB_14091a41b:
            if (*piVar6 == 0) {
                local_200 = 0;
                piVar6[0x1a] = 0;
                local_208 = CONCAT44(local_208._4_4_,9);
                puVar7 = (undefined *)FUN_14092d140(piVar6,1,6);
                if (puVar7 != (undefined *)0x0) {
                    *puVar7 = 0x89;
                }
            }
        }
        else if (*piVar6 == 0) {
            piVar6[0x1a] = 0;
            local_208 = 0;
            FUN_14092aa10(piVar6,0x10b,(longlong)(int)local_170 + 0x30,1);
            goto LAB_14091a41b;
        }
        local_200 = 0;
        local_208._0_4_ = 6;
        FUN_140932690(piVar6,6,1,0);
        local_200 = 8;
        local_208._0_4_ = 0x101;
        FUN_140932690(piVar6,6,6,0);
        local_200 = 0x18;
        local_208._0_4_ = 0x101;
        FUN_140932690(piVar6,6,7,0);
        local_200 = 0;
        local_208._0_4_ = 0x101;
        FUN_140932690(piVar6,6,3,0);
        local_200 = 0x3c;
        local_208._0_4_ = 0x101;
        FUN_140932690(piVar6,0xc,1,0);
        local_200 = 8;
        local_208._0_4_ = 0x103;
        FUN_140932690(piVar6,6,2,0);
        local_200 = 0x10;
        local_208._0_4_ = 0x103;
        FUN_140932690(piVar6,6,8,0);
        local_200 = 0;
        local_208._0_4_ = 1;
        FUN_140932690(piVar6,6,0x10b,0x20);
        if (param_3 == 1) {
            local_200 = 0;
            local_208._0_4_ = 0x200;
            FUN_140932690(piVar6,6,0x10b,(longlong)(int)local_164);
        }
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            lVar8 = FUN_140930010(&local_198,*(ushort *)(param_1 + 0xc) >> 0xb & 1,
                                  *(uint *)(param_1 + 8) >> 0x12 & 1);
            if (((*(uint *)(param_1 + 8) >> 0x1a & 1) == 0) &&
                ((param_3 != 0 ||
                  (iVar5 = FUN_14092d9c0(&local_198,*(uint *)(param_1 + 8) >> 0x12 & 1), iVar5 == 0)))) {
                uVar2 = *(ushort *)(param_1 + 0xc);
                if ((uVar2 & 0x10) == 0) {
                    if ((uVar2 & 0x100) == 0) {
                        if ((lVar9 != 0) && ((*(byte *)(lVar9 + 4) & 1) != 0)) {
                            FUN_14092e6a0(&local_198,lVar9 + 8,*(uint *)(param_1 + 8) >> 0x12 & 1);
                        }
                    }
                    else {
                        FUN_14092dfb0(&local_198,*(uint *)(param_1 + 8) >> 0x12 & 1);
                    }
                }
                else {
                    FUN_14092d690(&local_198,*(undefined2 *)(param_1 + 0x14),uVar2 >> 5 & 1,
                                  *(uint *)(param_1 + 8) >> 0x12 & 1);
                }
            }
        }
        if (local_170 != 0) {
            local_1d8 = FUN_140931270(&local_198,*(undefined2 *)(param_1 + 0x16),
                                      *(ushort *)(param_1 + 0xc) >> 7 & 1,
                                      *(ushort *)(param_1 + 0xc) >> 4 & 1);
        }
        local_200 = 0;
        local_208._0_4_ = 6;
        FUN_140932690(piVar6,6,0x10b,(longlong)(int)local_174);
        local_200 = 0x20;
        local_208 = CONCAT44(local_208._4_4_,0x10b);
        FUN_140932690(piVar6,6,10);
        if (local_15c != 0) {
            local_200 = 0;
            local_208 = CONCAT44(local_208._4_4_,0x200);
            FUN_140932690(piVar6,6,0x10b,(longlong)local_15c);
        }
        if (param_3 == 1) {
            local_200 = 0;
            local_208._0_4_ = 0x200;
            lVar9 = FUN_140931b80(piVar6,1,0x10b,(longlong)(int)local_164);
            local_200 = 0;
            local_208 = CONCAT44(local_208._4_4_,6);
            FUN_140932690(piVar6,6,0x10b,(longlong)(int)local_168);
            lVar10 = FUN_140932570(piVar6);
            if ((lVar9 != 0) && (lVar10 != 0)) {
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                *(longlong *)(lVar9 + 0x18) = lVar10;
            }
        }
        else if (param_3 == 2) {
            local_200 = 0;
            local_208 = CONCAT44(local_208._4_4_,6);
            FUN_140932690(piVar6,6,0x10b,(longlong)(int)local_168);
        }
        FUN_140925310(&local_198,local_1b0,lVar11,&local_1d0);
        if (*piVar6 == 0) {
            local_200 = (longlong)(int)local_174;
            local_208 = CONCAT44(local_208._4_4_,0x10b);
            lVar9 = FUN_140931b80(piVar6,0,6);
            local_1e8 = FUN_140932570(piVar6);
            local_e0 = FUN_140932570(piVar6);
            if (local_b0 != 0) {
                FUN_140931600(local_b0,local_e0);
            }
            FUN_140927ab0(&local_198,*(ushort *)(param_1 + 0x10) + 1);
            local_e8 = FUN_140932570(piVar6);
            if (local_b8 != 0) {
                FUN_140931600(local_b8,local_e8);
            }
            FUN_1409331a0(piVar6,6,1);
            if (param_3 != 0) {
                local_f0 = FUN_140932570(piVar6);
                FUN_140931600(local_c0,local_f0);
                FUN_140930fc0(&local_198,local_e8);
            }
            lVar11 = FUN_140932570(piVar6);
            FUN_14091dfc0(&local_198,local_1c0);
            if (*piVar6 == 0) {
                if (param_3 == 1) {
                    local_200 = 0xffffffffffffffff;
                    local_208._0_4_ = 0x200;
                    lVar10 = FUN_140931b80(piVar6,1,0x10b,(longlong)(int)local_164);
                    local_200 = (longlong)(int)local_168;
                    local_208._0_4_ = 0x10b;
                    FUN_140932690(piVar6,6,1,0);
                    local_200 = 0xffffffffffffffff;
                    local_208._0_4_ = 0x200;
                    FUN_140932690(piVar6,6,0x10b,(longlong)(int)local_168);
                    local_200 = 0;
                    local_208 = CONCAT44(local_208._4_4_,1);
                    FUN_140932690(piVar6,6,0x10b,(longlong)(int)local_164);
                    lVar12 = FUN_140932570(piVar6);
                    if ((lVar10 != 0) && (lVar12 != 0)) {
                        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
                        *(longlong *)(lVar10 + 0x18) = lVar12;
                    }
                }
                local_200 = (longlong)(int)local_174;
                local_208._0_4_ = 0x10b;
                FUN_140932690(piVar6,6,6,0);
                uVar17 = *(uint *)(param_1 + 8);
                if ((uVar17 & 0x10) == 0) {
                    if ((uVar17 >> 0x12 & 1) == 0) {
                        if (((param_3 == 0) && (local_1e0 != 0)) &&
                            ((1 < *(uint *)(local_1e0 + 0x28) && ((uVar17 >> 0x1a & 1) == 0)))) {
                            local_1f0 = (ulonglong)(*(uint *)(local_1e0 + 0x28) * 2 + 2);
                            local_1f8 = 0x200;
                            local_200 = 0;
                            local_208._0_4_ = 6;
                            FUN_140932a90(piVar6,0x19,1,0);
                            local_200 = 0;
                            local_208._0_4_ = 7;
                            uVar15 = 5;
                            uVar16 = 1;
                        }
                        else {
                            local_200 = 0;
                            local_208._0_4_ = 7;
                            LAB_14091ab1a:
                            uVar16 = 6;
                            uVar15 = 2;
                        }
                        lVar10 = FUN_140931b80(piVar6,uVar15,uVar16,0);
                    }
                    else {
                        if ((((param_3 != 0) || (local_1e0 == 0)) || (*(uint *)(local_1e0 + 0x28) < 2)) ||
                            ((uVar17 >> 0x1a & 1) != 0)) {
                            local_200 = (longlong)(int)local_160;
                            local_208._0_4_ = 0x10b;
                            goto LAB_14091ab1a;
                        }
                        local_1f0 = (ulonglong)(*(uint *)(local_1e0 + 0x28) * 2 + 2);
                        local_1f8 = 0x200;
                        local_200 = 0;
                        local_208._0_4_ = 6;
                        FUN_140932a90(piVar6,0x19,1,0);
                        local_1f0 = 0;
                        local_1f8 = 7;
                        local_200 = 0;
                        local_208._0_4_ = 1;
                        FUN_140932a90(piVar6,0x81b,0,0);
                        local_1f8 = 4;
                        local_200 = 0;
                        local_208._0_4_ = 0;
                        FUN_140932fc0(piVar6,6,3,0);
                        local_1f0 = (ulonglong)(int)local_160;
                        local_1f8 = 0x10b;
                        local_200 = 0;
                        local_208._0_4_ = 6;
                        FUN_140932a90(piVar6,0x81b,0,0);
                        local_1f8 = 3;
                        local_200 = 0;
                        local_208._0_4_ = 3;
                        FUN_140932fc0(piVar6,0x21f,3,0);
                        lVar10 = FUN_140932450(piVar6,0);
                    }
                    if ((lVar10 != 0) && (lVar8 != 0)) {
                        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
                        *(longlong *)(lVar10 + 0x18) = lVar8;
                        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
                    }
                }
                lVar8 = local_1d8;
                if ((local_1d8 != 0) && (lVar10 = FUN_140932570(piVar6), lVar10 != 0)) {
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                    *(longlong *)(lVar8 + 0x18) = lVar10;
                }
                lVar8 = local_f0;
                if (param_3 == 1) {
                    local_200 = 0;
                    local_208._0_4_ = 0x200;
                    lVar10 = FUN_140931b80(piVar6,1,0x10b,(longlong)(int)local_164);
                    if ((lVar10 != 0) && (lVar8 != 0)) {
                        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
                        *(longlong *)(lVar10 + 0x18) = lVar8;
                    }
                }
                local_200 = 0xffffffffffffffff;
                local_208._0_4_ = 0x200;
                FUN_140932690(piVar6,6,1);
                lVar8 = local_e8;
                lVar10 = FUN_140932450(piVar6,0x16);
                if ((lVar10 != 0) && (lVar8 != 0)) {
                    *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
                    *(longlong *)(lVar10 + 0x18) = lVar8;
                }
                FUN_14092eb40(&local_198);
                lVar8 = FUN_140932570(piVar6);
                if ((lVar9 != 0) && (lVar8 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar8;
                }
                local_200 = 0;
                local_208._0_4_ = 9;
                FUN_140932690(piVar6,6,1);
                local_200 = 0x42;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,7,3);
                local_200 = 0;
                local_208._0_4_ = 0x200;
                lVar9 = FUN_140931b80(piVar6,1,3);
                if ((lVar9 != 0) && (lVar11 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar11;
                }
                local_200 = 0x43;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,7,3);
                local_200 = 0;
                local_208._0_4_ = 0x200;
                lVar8 = FUN_140931b80(piVar6,0,3);
                lVar9 = local_1e8;
                if ((lVar8 != 0) && (local_1e8 != 0)) {
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                    *(longlong *)(lVar8 + 0x18) = local_1e8;
                }
                local_200 = 8;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,6,3);
                local_200 = 0;
                local_208 = CONCAT44(local_208._4_4_,6);
                lVar8 = FUN_140931b80(piVar6,1,3);
                if ((lVar8 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                    *(longlong *)(lVar8 + 0x18) = lVar9;
                }
                lVar9 = FUN_140932450(piVar6,0x16);
                local_c8 = local_d0;
                if ((lVar9 != 0) && (lVar11 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar11;
                }
                for (; local_c8 != (undefined8 *)0x0; local_c8 = (undefined8 *)*local_c8) {
                    FUN_140925a10(&local_198);
                    if (*piVar6 != 0) goto LAB_14091b219;
                    FUN_14092eb40(&local_198);
                }
                uVar13 = FUN_140932570(piVar6);
                FUN_140931600(local_a0,uVar13);
                FUN_140931fa0(piVar6,0x10b,0);
                local_200 = 0;
                local_208._0_4_ = 3;
                FUN_140932690(piVar6,6,0x10b,8);
                local_200 = 0;
                local_208._0_4_ = 9;
                FUN_140932690(piVar6,6,1);
                local_200 = 0;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,6,1);
                local_200 = 0;
                local_208._0_4_ = 2;
                FUN_140932690(piVar6,6,0x101);
                local_1f0 = 0x2000;
                local_1f8 = 0x200;
                local_200 = 0x10;
                local_208._0_4_ = 0x101;
                FUN_140932a90(piVar6,0x19,3);
                FUN_1409322b0(piVar6,0x1a,0x200,FUN_140933b70);
                local_200 = 0;
                local_208._0_4_ = 0x200;
                lVar9 = FUN_140931b80(piVar6,1,1,0);
                local_200 = 0;
                local_208._0_4_ = 9;
                FUN_140932690(piVar6,6,1);
                local_200 = 0;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,6,1);
                local_200 = 0;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,6,2);
                local_200 = 0x10;
                local_208._0_4_ = 0x101;
                FUN_140932690(piVar6,6,8);
                local_200 = 8;
                local_208._0_4_ = 0x10b;
                FUN_140932690(piVar6,6,3);
                FUN_1409320b0(piVar6,0x10b,0);
                lVar8 = FUN_140932570(piVar6);
                if ((lVar9 != 0) && (lVar8 != 0)) {
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
                    *(longlong *)(lVar9 + 0x18) = lVar8;
                }
                local_200 = 0xffffffffffffffe5;
                local_208._0_4_ = 0x200;
                FUN_140932690(piVar6,6,1);
                lVar9 = local_e8;
                lVar8 = FUN_140932450(piVar6,0x16);
                if ((lVar8 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                    *(longlong *)(lVar8 + 0x18) = lVar9;
                }
                uVar13 = FUN_140932570(piVar6);
                FUN_140931600(local_a8,uVar13);
                local_200 = -8;
                local_208 = CONCAT44(local_208._4_4_,0x200);
                FUN_140932690(piVar6,6,1);
                lVar9 = local_e8;
                lVar8 = FUN_140932450(piVar6,0x16);
                if ((lVar8 != 0) && (lVar9 != 0)) {
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
                    *(longlong *)(lVar8 + 0x18) = lVar9;
                }
                if (local_98 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_98,uVar13);
                    FUN_140928fa0(&local_198);
                }
                if (local_90 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_90,uVar13);
                    FUN_14091cac0(&local_198);
                }
                if (local_88 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_88,uVar13);
                    FUN_14091ba80(&local_198);
                }
                if (local_80 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_80,uVar13);
                    FUN_14091bd30(&local_198);
                }
                if (local_78 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_78,uVar13);
                    FUN_14091c920(&local_198);
                }
                if (local_70 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_70,uVar13);
                    FUN_140928880(&local_198);
                }
                if (local_68 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_68,uVar13);
                    FUN_140928b70(&local_198);
                }
                if (local_58 != 0) {
                    uVar13 = FUN_140932570(piVar6);
                    FUN_140931600(local_58,uVar13);
                    FUN_140929620(&local_198);
                }
                (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_180);
                (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_188);
                lVar9 = FUN_1409334f0(piVar6);
                uVar13 = *(undefined8 *)(piVar6 + 0x18);
                FUN_140933320(piVar6);
                puVar3 = local_1a8;
                if (lVar9 != 0) {
                    if (((*(byte *)local_1a8 & 0x40) == 0) ||
                        (puVar14 = *(undefined8 **)(local_1a8 + 0xe), puVar14 == (undefined8 *)0x0)) {
                        puVar14 = (undefined8 *)(*(code *)PTR_FUN_140c1b1e0)(0x48);
                        if (puVar14 == (undefined8 *)0x0) {
                            FUN_140933390(lVar9);
                            goto LAB_14091b287;
                        }
                        *puVar14 = 0;
                        puVar14[1] = 0;
                        puVar14[2] = 0;
                        puVar14[3] = 0;
                        puVar14[4] = 0;
                        puVar14[5] = 0;
                        puVar14[6] = 0;
                        puVar14[7] = 0;
                        puVar14[8] = 0;
                        *(uint *)(puVar14 + 5) = (uint)*(ushort *)(param_1 + 0x10) * 2 + 2;
                        *puVar3 = *puVar3 | 0x40;
                        *(undefined8 **)(puVar3 + 0xe) = puVar14;
                    }
                    puVar14[param_3] = lVar9;
                    puVar14[(longlong)param_3 + 6] = uVar13;
                }
                goto LAB_14091b287;
            }
        }
        LAB_14091b219:
        FUN_140933320(piVar6);
    }
    (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_180);
    (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(local_188);
    LAB_14091b287:
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack552);
    return;
}



int FUN_14091b2b0(byte *param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6,int param_7)

{
    code **ppcVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    longlong local_58;
    longlong local_50;
    longlong local_48;
    longlong local_40;
    undefined8 local_38;
    undefined8 local_28;
    int local_20;
    undefined4 local_1c;
    byte local_18;
    byte local_17;
    byte local_16;
    byte local_15;

    lVar2 = *(longlong *)(param_1 + 0x38);
    if ((param_5 >> 0x1b & 1) == 0) {
        iVar4 = 0;
        if ((param_5 >> 0xf & 1) != 0) {
            iVar4 = 1;
        }
    }
    else {
        iVar4 = 2;
    }
    ppcVar1 = (code **)(lVar2 + (longlong)iVar4 * 8);
    if (*ppcVar1 == (code *)0x0) {
        return -0x1f;
    }
    local_50 = param_2 + (longlong)param_4 * 2;
    local_40 = param_2 + (longlong)param_3 * 2;
    local_28 = 0;
    if ((*param_1 & 2) == 0) {
        local_1c = 10000000;
    }
    else {
        local_1c = *(undefined4 *)(param_1 + 0x10);
    }
    local_18 = (byte)(param_5 >> 7) & 1;
    local_17 = (byte)(param_5 >> 8) & 1;
    local_15 = (byte)(param_5 >> 0x1c) & 1;
    local_16 = (byte)(param_5 >> 10) & 1;
    local_38 = param_6;
    if (param_7 != 2) {
        param_7 = (int)((ulonglong)((longlong)param_7 * 0x55555555) >> 0x20) - param_7;
        lVar3 = (longlong)(((param_7 >> 1) - (param_7 >> 0x1f)) * -6);
        uVar5 = lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffff;
        param_7 = (int)(uVar5 >> 0x1f) + (int)uVar5;
    }
    if (*(int *)(lVar2 + 0x28) < param_7) {
        param_7 = *(int *)(lVar2 + 0x28);
    }
    local_48 = param_2;
    local_20 = param_7;
    if (*(code **)(lVar2 + 0x18) == (code *)0x0) {
        local_58 = *(longlong *)(lVar2 + 0x20);
    }
    else {
        local_58 = (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x20));
    }
    if (local_58 == 0) {
        iVar4 = FUN_14092ffa0(&local_58,*ppcVar1);
    }
    else {
        iVar4 = (**ppcVar1)();
    }
    if (param_7 < iVar4 * 2) {
        iVar4 = 0;
    }
    if ((*param_1 & 0x20) != 0) {
        **(undefined8 **)(param_1 + 0x30) = local_28;
    }
    return iVar4;
}



void FUN_14091b430(longlong *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = 3;
    plVar1 = param_1;
    do {
        if (*plVar1 != 0) {
            FUN_140933390();
        }
        plVar1 = plVar1 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    // WARNING: Could not recover jumptable at 0x00014091b478. Too many branches
    // WARNING: Treating indirect jump as call
    (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(param_1);
    return;
}



longlong FUN_14091b480(longlong param_1)

{
    return *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x38) +
           *(longlong *)(param_1 + 0x30);
}



void FUN_14091b490(int *param_1,longlong *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;

    if (*param_1 == 0) {
        puVar2 = (undefined8 *)FUN_14092d590(param_1,0x10);
        if (puVar2 != (undefined8 *)0x0) {
            lVar1 = *param_2;
            *puVar2 = param_3;
            puVar2[1] = lVar1;
            *param_2 = (longlong)puVar2;
        }
    }
    return;
}



void FUN_14091b4d0(int **param_1,int param_2)

{
    int *piVar1;
    undefined8 uVar2;
    undefined8 *puVar3;

    piVar1 = *param_1;
    FUN_140932a90(piVar1,0x19,2,0,2,0,0x200,(longlong)param_2 << 3);
    uVar2 = FUN_140931b80(piVar1,4,2,0,8,0);
    piVar1 = *param_1;
    if (*piVar1 == 0) {
        puVar3 = (undefined8 *)FUN_14092d590(piVar1,0x20);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = uVar2;
            uVar2 = FUN_140932570(piVar1);
            puVar3[2] = uVar2;
            puVar3[3] = param_1[0x18];
            param_1[0x18] = (int *)puVar3;
        }
    }
    return;
}



ushort * FUN_14091b5b0(int **param_1,int param_2,ushort *param_3,int *param_4,undefined8 *param_5)

{
    int *piVar1;
    int iVar2;
    uint uVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    int iVar7;
    ushort *puVar8;
    ushort *puVar9;
    uint uVar10;

    piVar1 = *param_1;
    puVar8 = (ushort *)0x0;
    uVar10 = 0;
    puVar9 = puVar8;
    if ((param_2 != 0) && (iVar2 = FUN_14091b9d0(param_1,param_3), puVar9 = (ushort *)0x0, iVar2 != 0)
            ) {
        uVar3 = FUN_14091b900();
        uVar10 = uVar3 & 0xff;
        puVar9 = param_3 + (uVar3 >> 9);
        if ((uVar3 >> 8 & 1) != 0) {
            uVar10 = uVar10 << 8;
        }
    }
    if (param_4[1] == -1) {
        if (*param_4 < 4) {
            FUN_140932690(piVar1,9,1);
            puVar8 = (ushort *)0x0;
        }
        else if (*piVar1 == (int)puVar8) {
            piVar1[0x1a] = (int)puVar8;
            puVar4 = (undefined *)FUN_14092d140(piVar1,1,1);
            puVar8 = (ushort *)0x0;
            if (puVar4 != (undefined *)0x0) {
                *puVar4 = 99;
            }
        }
        param_4[1] = 3;
    }
    iVar2 = 1;
    if ((*(int *)((longlong)param_1 + 0x13c) != 0) && (iVar2 = 1, (*param_3 & 0xfc00) == 0xd800)) {
        iVar2 = 2;
    }
    do {
        *param_4 = *param_4 + -2;
        if ((uVar10 == 0) || (puVar9 != param_3)) {
            *(ushort *)((longlong)param_4 + (longlong)param_4[2] * 2 + 0xc) = *param_3;
            *(short *)((longlong)param_4 + (longlong)param_4[2] * 2 + 0x10) = (short)puVar8;
        }
        else {
            *(ushort *)((longlong)param_4 + (longlong)param_4[2] * 2 + 0xc) = *param_3 | (ushort)uVar10;
            *(ushort *)((longlong)param_4 + (longlong)param_4[2] * 2 + 0x10) = (ushort)uVar10;
        }
        param_4[2] = param_4[2] + 1;
        if ((1 < param_4[2]) || (*param_4 == 0)) {
            iVar7 = *param_4;
            if (iVar7 < 4) {
                if (1 < iVar7) {
                    uVar6 = 9;
                    goto LAB_14091b720;
                }
            }
            else {
                uVar6 = 0xc;
                LAB_14091b720:
                FUN_140932690(piVar1,uVar6,param_4[1],0,0x106,(longlong)-iVar7);
            }
            iVar7 = 1;
            if (param_4[1] == 1) {
                iVar7 = 3;
            }
            param_4[1] = iVar7;
            if (param_4[2] == 1) {
                if (*(short *)(param_4 + 4) != 0) {
                    FUN_140932a90(piVar1,0x1f,iVar7,0,iVar7,0,0x200,*(short *)(param_4 + 4));
                }
                LAB_14091b7da:
                uVar6 = FUN_140931b80();
                if ((*piVar1 == 0) && (puVar5 = (undefined8 *)FUN_14092d590(), puVar5 != (undefined8 *)0x0))
                {
                    puVar5[1] = *param_5;
                    *puVar5 = uVar6;
                    *param_5 = puVar5;
                }
            }
            else if (param_4[2] == 2) {
                if (param_4[4] != 0) {
                    FUN_140932a90(piVar1,0x1f,iVar7,0,iVar7,0,0x200,(longlong)param_4[4]);
                }
                goto LAB_14091b7da;
            }
            puVar8 = (ushort *)0x0;
            param_4[2] = 0;
        }
        iVar2 = iVar2 + -1;
        param_3 = param_3 + 1;
        if (iVar2 < 1) {
            return param_3;
        }
    } while( true );
}



undefined4 FUN_14091b870(undefined4 *param_1,int param_2)

{
    undefined uVar1;
    int iVar2;
    undefined4 uVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined2 *puVar6;

    lVar5 = 6;
    iVar2 = 6;
    if (param_2 < 0x1b) {
        iVar2 = 3;
    }
    puVar4 = (undefined *)FUN_14092d610(param_1,iVar2 + 1);
    if (puVar4 == (undefined *)0x0) {
        uVar3 = *param_1;
    }
    else {
        uVar1 = 6;
        if (param_2 < 0x1b) {
            uVar1 = 3;
        }
        puVar6 = (undefined2 *)(puVar4 + 1);
        *puVar4 = uVar1;
        if (param_2 < 0x1b) {
            lVar5 = 3;
        }
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + lVar5;
        if (0x1a < param_2) {
            *puVar6 = 0x8b4c;
            puVar4[3] = 0xc1;
            puVar6 = (undefined2 *)(puVar4 + 4);
        }
        *puVar6 = 0x8b48;
        uVar3 = 0;
        *(undefined *)(puVar6 + 1) = 200;
    }
    return uVar3;
}



uint FUN_14091b900(longlong param_1,ushort *param_2)

{
    ushort uVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    bool bVar5;
    bool bVar6;

    if (*(int *)(param_1 + 0x13c) == 0) {
        uVar1 = *param_2;
        uVar4 = (ulonglong)uVar1;
        bVar5 = uVar1 < 0xff;
        bVar6 = uVar1 == 0xff;
    }
    else {
        uVar1 = *param_2;
        uVar4 = (ulonglong)uVar1;
        if ((uVar1 & 0xfc00) == 0xd800) {
            uVar4 = (ulonglong)((param_2[1] & 0x3ff | (uVar1 & 0x3ff) << 10) + 0x10000);
        }
        bVar5 = (uint)uVar4 < 0x7f;
        bVar6 = (uint)uVar4 == 0x7f;
    }
    uVar3 = (uint)uVar4;
    uVar2 = uVar3;
    if (bVar5 || bVar6) {
        uVar2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x40) + uVar4);
    }
    uVar2 = uVar2 ^ uVar3;
    if ((uVar3 < 0x80) && (uVar2 == 0x20)) {
        return 0x20;
    }
    if ((uVar2 & uVar2 - 1) != 0) {
        return 0;
    }
    if ((*(int *)(param_1 + 0x13c) != 0) && (0xffff < uVar3)) {
        if (uVar2 < 0x400) {
            if (0xff < uVar2) {
                return (uVar2 | 0x30000) >> 8;
            }
            return uVar2 | 0x200;
        }
        uVar2 = uVar2 >> 10;
    }
    if (0xff < uVar2) {
        uVar2 = (uVar2 | 0x10000) >> 8;
    }
    return uVar2;
}



bool FUN_14091b9d0(longlong param_1,ushort *param_2)

{
    ushort uVar1;
    ulonglong uVar2;

    if (*(int *)(param_1 + 0x13c) == 0) {
        uVar1 = *param_2;
        if (uVar1 < 0x100) {
            return *(byte *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1) != uVar1;
        }
    }
    else {
        uVar1 = *param_2;
        uVar2 = (ulonglong)uVar1;
        if ((uVar1 & 0xfc00) == 0xd800) {
            uVar2 = (ulonglong)((param_2[1] & 0x3ff | (uVar1 & 0x3ff) << 10) + 0x10000);
        }
        if ((uint)uVar2 < 0x80) {
            return (uint)*(byte *)(*(longlong *)(param_1 + 0x40) + uVar2) != (uint)uVar2;
        }
    }
    return false;
}



uint FUN_14091ba50(longlong param_1,uint param_2)

{
    if (((*(int *)(param_1 + 0x13c) == 0) || (param_2 < 0x80)) && (param_2 < 0x100)) {
        param_2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x40) + (ulonglong)param_2);
    }
    return param_2;
}



void FUN_14091ba80(undefined8 *param_1)

{
    undefined8 uVar1;

    uVar1 = *param_1;
    FUN_140931fa0(uVar1,4);
    FUN_140932a90(uVar1,0x1b,1,0,1,0,0x200,10);
    FUN_140932a90(uVar1,0x81b,0,0,1,0,0x200,3);
    FUN_140932fc0(uVar1,6,3,0,0,0,5);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x7b);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x1f,1,0,1,0,0x200,1);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x201f);
    FUN_140932fc0(uVar1,0x21f,3,0,3,0,0);
    FUN_1409320b0(uVar1,4,0);
    return;
}



void FUN_14091bc20(undefined8 param_1,byte *param_2,int param_3,undefined8 param_4)

{
    uint uVar1;
    longlong lVar2;
    byte bVar3;
    byte bVar4;
    uint *puVar5;
    byte bVar6;
    int iVar7;
    undefined auStack120 [32];
    int local_58;
    uint local_54;
    uint local_50 [6];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    iVar7 = 0;
    bVar4 = *param_2 & 1;
    local_54 = (uint)bVar4;
    lVar2 = 0;
    puVar5 = local_50;
    uVar1 = 0;
    bVar6 = -bVar4;
    do {
        if (((uVar1 & 7) == 0) && (param_2[(int)uVar1 >> 3] == bVar6)) {
            uVar1 = uVar1 + 8;
        }
        else {
            bVar3 = param_2[(int)uVar1 >> 3] >> (sbyte)(uVar1 & 7) & 1;
            if (bVar3 != bVar4) {
                if (5 < lVar2) goto LAB_14091bd08;
                *puVar5 = uVar1;
                iVar7 = iVar7 + 1;
                lVar2 = lVar2 + 1;
                puVar5 = puVar5 + 1;
                bVar6 = -bVar3;
                bVar4 = bVar3;
            }
            uVar1 = uVar1 + 1;
        }
    } while ((int)uVar1 < 0x100);
    if (bVar4 == 0) {
        if (param_3 != 0) {
            LAB_14091bcdc:
            if (5 < iVar7) goto LAB_14091bd08;
            lVar2 = (longlong)iVar7;
            iVar7 = iVar7 + 1;
            local_50[lVar2] = 0x100;
        }
    }
    else if ((bVar4 == 1) && (param_3 == 0)) goto LAB_14091bcdc;
    local_58 = iVar7;
    FUN_14091c380(param_1,&local_58,param_4,0);
    LAB_14091bd08:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack120);
    return;
}



void FUN_14091bd30(undefined8 *param_1)

{
    undefined8 uVar1;

    uVar1 = *param_1;
    FUN_140931fa0(uVar1,4);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,9);
    FUN_140932fc0(uVar1,6,3,0,0,0,0);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x20);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0xa0);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x1680);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x180e);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x1b,1,0,1,0,0x200,0x2000);
    FUN_140932a90(uVar1,0x81b,0,0,1,0,0x200,10);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,5);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x2f);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x5f);
    FUN_140932fc0(uVar1,0x1f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x1000);
    FUN_140932fc0(uVar1,0x21f,3,0,3,0,0);
    FUN_1409320b0(uVar1,4,0);
    return;
}



void FUN_14091c090(int **param_1,int param_2,undefined8 *param_3,int param_4)

{
    int *piVar1;
    int *piVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    piVar1 = *param_1;
    if (param_2 == 1) {
        uVar3 = FUN_140932450(piVar1,0x17);
        if (*piVar1 == 0) {
            puVar4 = (undefined8 *)FUN_14092d590(piVar1,0x10);
            if (puVar4 != (undefined8 *)0x0) {
                piVar2 = param_1[0x22];
                *puVar4 = uVar3;
                puVar4[1] = piVar2;
                param_1[0x22] = (int *)puVar4;
            }
        }
        uVar3 = FUN_140932450(piVar1,param_4 != 0);
    }
    else if (param_2 == 2) {
        FUN_140932a90(piVar1,0x21b,0,0,1,0,0x200,0xd);
        FUN_140932fc0(piVar1,6,3,0,0,0,0);
        FUN_140932a90(piVar1,0x21b,0,0,1,0,0x200,10);
        FUN_140932fc0(piVar1,0x21f,3,0,3,0,0);
        uVar3 = FUN_140932450(piVar1,param_4 != 0);
    }
    else {
        uVar3 = FUN_140931b80(piVar1,param_4 == 0,1,0,0x200,(longlong)*(int *)(param_1 + 0xb));
    }
    if (*piVar1 == 0) {
        puVar4 = (undefined8 *)FUN_14092d590(piVar1,0x10);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = *param_3;
            *puVar4 = uVar3;
            *param_3 = puVar4;
        }
    }
    return;
}



void FUN_14091c240(int **param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    undefined8 uVar9;

    piVar2 = *param_1;
    lVar4 = 0;
    if (*(int *)(param_1 + 10) == 0) {
        return;
    }
    if (param_2 == 0) {
        uVar9 = 0;
        uVar7 = 3;
        uVar8 = 6;
    }
    else {
        if (*(int *)(param_1 + 10) != 1) goto LAB_14091c2ac;
        uVar9 = 0xffffffffffffffff;
        uVar7 = 0;
        uVar8 = 0x200;
    }
    lVar4 = FUN_140931b80(piVar2,uVar7,0x10b,(longlong)*(int *)(param_1 + 6),uVar8,uVar9);
    LAB_14091c2ac:
    if (*(int *)(param_1 + 10) == 1) {
        if (*piVar2 == 0) {
            iVar1 = *(int *)((longlong)param_1 + 0x34);
            piVar2[0x1a] = 0;
            FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,0x200,0xffffffffffffffff);
        }
    }
    else {
        piVar3 = param_1[0x15];
        lVar6 = FUN_140932450(piVar2,0x16);
        if (piVar3 == (int *)0x0) {
            if ((*piVar2 == 0) &&
                (plVar5 = (longlong *)FUN_14092d590(piVar2,0x10), plVar5 != (longlong *)0x0)) {
                piVar3 = param_1[0x1b];
                *plVar5 = lVar6;
                plVar5[1] = (longlong)piVar3;
                param_1[0x1b] = (int *)plVar5;
            }
        }
        else if ((lVar6 != 0) && (piVar3 != (int *)0x0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(int **)(lVar6 + 0x18) = piVar3;
        }
    }
    if ((lVar4 != 0) && (lVar6 = FUN_140932570(piVar2), lVar6 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar6;
    }
    return;
}



undefined8 FUN_14091c380(int **param_1,int *param_2,undefined8 *param_3,int param_4)

{
    int iVar1;
    int *piVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 *puVar6;
    uint uVar7;

    piVar2 = *param_1;
    iVar1 = *param_2;
    if (iVar1 < 0) {
        return 0;
    }
    if (iVar1 == 1) {
        if (param_4 != 0) {
            FUN_1409309e0();
        }
        uVar3 = FUN_140931b80(piVar2,(param_2[1] != 0) + '\x02',1,0,0x200,(longlong)param_2[2]);
        iVar1 = *piVar2;
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 != 4) {
                return 0;
            }
            iVar1 = param_2[2];
            if ((iVar1 + 1 != param_2[3]) || (param_2[4] + 1 != param_2[5])) {
                if (param_2[3] - iVar1 != param_2[5] - param_2[4]) {
                    return 0;
                }
                uVar7 = param_2[4] - iVar1;
                if ((uVar7 & uVar7 - 1) == 0) {
                    if (param_4 != 0) {
                        FUN_1409309e0();
                    }
                    FUN_140932a90(piVar2,0x1f,1,0,1,0,0x200,(longlong)(param_2[4] - param_2[2]));
                    FUN_140932a90(piVar2,0x1b,1,0,1,0,0x200,(longlong)param_2[4]);
                    uVar3 = FUN_140931b80(piVar2,3 - (uint)(param_2[1] != 0),1,0,0x200,
                                          (longlong)(param_2[5] - param_2[4]));
                    FUN_14091b490(piVar2,param_3,uVar3);
                    return 1;
                }
                return 0;
            }
            if (param_4 != 0) {
                FUN_1409309e0();
            }
            if (param_2[1] != 0) {
                uVar3 = FUN_140931b80(piVar2,0,1,0,0x200,(longlong)param_2[2]);
                FUN_14091b490(piVar2,param_3,uVar3);
                uVar3 = FUN_140931b80(piVar2,0,1,0,0x200,(longlong)param_2[4]);
                FUN_14091b490(piVar2,param_3,uVar3);
                return 1;
            }
            lVar4 = FUN_140931b80(piVar2,0,1,0,0x200,(longlong)param_2[2]);
            uVar3 = FUN_140931b80(piVar2,1,1,0,0x200,(longlong)param_2[4]);
            FUN_14091b490(piVar2,param_3,uVar3);
            lVar5 = FUN_140932570(piVar2);
            if (lVar4 == 0) {
                return 1;
            }
            if (lVar5 == 0) {
                return 1;
            }
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar5;
            return 1;
        }
        if (param_4 != 0) {
            FUN_1409309e0();
        }
        FUN_140932a90(piVar2,0x1b,1,0,1,0,0x200,(longlong)param_2[2]);
        uVar3 = FUN_140931b80(piVar2,3 - (uint)(param_2[1] != 0),1,0,0x200,
                              (longlong)(param_2[3] - param_2[2]));
        iVar1 = *piVar2;
    }
    if ((iVar1 == 0) &&
        (puVar6 = (undefined8 *)FUN_14092d590(piVar2,0x10), puVar6 != (undefined8 *)0x0)) {
        puVar6[1] = *param_3;
        *puVar6 = uVar3;
        *param_3 = puVar6;
    }
    return 1;
}



void FUN_14091c690(int **param_1)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;

    piVar2 = *param_1;
    if (*(int *)(param_1 + 10) == 1) {
        FUN_140932a90(piVar2,0x19,1,0,0x10b,(longlong)*(int *)(param_1 + 6),0x200,1);
        lVar3 = 0;
        uVar5 = 1;
    }
    else {
        if (*(int *)(param_1 + 10) != 2) {
            return;
        }
        lVar3 = (longlong)*(int *)(param_1 + 6);
        uVar5 = 0x10b;
    }
    lVar3 = FUN_140931b80(piVar2,5,uVar5,lVar3,6,0);
    if (*piVar2 == 0) {
        iVar1 = *(int *)(param_1 + 6);
        piVar2[0x1a] = 0;
        FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,6,0);
    }
    lVar4 = FUN_140932570(piVar2);
    if ((lVar3 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffd;
        *(longlong *)(lVar3 + 0x18) = lVar4;
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | 1;
    }
    return;
}



undefined8 FUN_14091c780(int **param_1)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;

    piVar2 = *param_1;
    if (*(int *)(param_1 + 10) == 0) {
        uVar4 = FUN_140931b80(piVar2,3,6,0,7,0);
        return uVar4;
    }
    lVar5 = FUN_140931b80(piVar2,2,6,0,7,0);
    if (*(int *)(param_1 + 10) == 1) {
        lVar6 = FUN_140931b80(piVar2,3,0x10b,(longlong)*(int *)(param_1 + 6),6,0);
        if (*piVar2 == 0) {
            iVar1 = *(int *)((longlong)param_1 + 0x34);
            piVar2[0x1a] = 0;
            FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,0x200,0xffffffffffffffff);
        }
        lVar7 = FUN_140932570(piVar2);
        if ((lVar6 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar7;
        }
        uVar4 = FUN_140932450(piVar2,0x16);
    }
    else {
        uVar4 = FUN_140931b80(piVar2,3,0x10b,(longlong)*(int *)(param_1 + 6),6,0);
        piVar3 = param_1[0x15];
        lVar6 = FUN_140932450(piVar2,0x16);
        if (piVar3 == (int *)0x0) {
            if (*piVar2 == 0) {
                plVar8 = (longlong *)FUN_14092d590(piVar2,0x10);
                if (plVar8 != (longlong *)0x0) {
                    piVar3 = param_1[0x1b];
                    *plVar8 = lVar6;
                    plVar8[1] = (longlong)piVar3;
                    param_1[0x1b] = (int *)plVar8;
                }
            }
        }
        else if ((lVar6 != 0) && (piVar3 != (int *)0x0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(int **)(lVar6 + 0x18) = piVar3;
        }
    }
    lVar6 = FUN_140932570(piVar2);
    if ((lVar5 != 0) && (lVar6 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar6;
    }
    return uVar4;
}



void FUN_14091c920(undefined8 *param_1)

{
    undefined8 uVar1;

    uVar1 = *param_1;
    FUN_140931fa0(uVar1,4);
    FUN_140932a90(uVar1,0x1b,1,0,1,0,0x200,10);
    FUN_140932a90(uVar1,0x81b,0,0,1,0,0x200,3);
    FUN_140932fc0(uVar1,6,3,0,0,0,5);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x7b);
    FUN_140932fc0(uVar1,0x21f,3,0,3,0,0);
    FUN_140932a90(uVar1,0x1f,1,0,1,0,0x200,1);
    FUN_140932a90(uVar1,0x21b,0,0,1,0,0x200,0x201f);
    FUN_140932fc0(uVar1,0x21f,3,0,3,0,0);
    FUN_1409320b0(uVar1,4,0);
    return;
}



void FUN_14091cac0(int **param_1)

{
    int *piVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar7;
    undefined8 uVar6;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    if (*piVar1 == 0) {
        piVar1[0x1a] = 1;
        uVar6 = CONCAT44(uVar7,0x10b);
        puVar2 = (undefined *)FUN_14092d140(piVar1,1,0,0,uVar6,0x30);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0x8f;
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = CONCAT44(uVar7,1);
            puVar2 = (undefined *)FUN_14092d140(piVar1,1,9,0,uVar6,0);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (puVar2 != (undefined *)0x0) {
                *puVar2 = 0x89;
            }
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                uVar7 = 0;
                FUN_14092aa10(piVar1,1,0,0x101,0x10);
                if (*piVar1 == 0) {
                    piVar1[0x1a] = 0;
                    uVar7 = 0;
                    FUN_14092aa10(piVar1,0x10b,0x38,0x200,0);
                }
            }
        }
    }
    uVar6 = CONCAT44(uVar7,1);
    lVar3 = FUN_140931b80(piVar1,5,6,0,uVar6,0);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_1409318f0(param_1);
    FUN_14091c690(param_1);
    FUN_1409309e0(param_1);
    uVar6 = CONCAT44(uVar7,0x200);
    lVar4 = FUN_140931b80(piVar1,4,1,0,uVar6,0xff);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x101);
    FUN_140932690(piVar1,7,1,0,uVar6,param_1[0xd]);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),1);
    FUN_140932a90(piVar1,0x22,1,0,uVar6,0,0x200,4);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),1);
    FUN_140932a90(piVar1,0x1e,1,0,uVar6,0,0x200,1);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar7 = 0;
        FUN_14092aa10(piVar1,0x10b,0x38,1,0);
    }
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    lVar4 = FUN_140932570(piVar1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | 1;
        *(longlong *)(lVar3 + 0x18) = lVar4;
    }
    uVar6 = CONCAT44(uVar7,0x200);
    FUN_140932690(piVar1,6,3,0,uVar6,0);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar3 = FUN_14091c780(param_1);
    FUN_1409308b0(param_1);
    uVar6 = CONCAT44(uVar7,0x200);
    FUN_140932690(piVar1,6,3,0,uVar6,0);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x200);
    lVar4 = FUN_140931b80(piVar1,4,1,0,uVar6,0xff);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),0x101);
    FUN_140932690(piVar1,7,3,0,uVar6,param_1[0xd]);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
    FUN_140932a90(piVar1,0x22,3,0,uVar6,0,0x200,4);
    uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),3);
    FUN_140932a90(piVar1,0x1e,3,0,uVar6,0,0x200,1);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    lVar5 = FUN_140932570(piVar1);
    if ((lVar4 != 0) && (lVar5 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar5;
    }
    lVar4 = FUN_140932570(piVar1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | 1;
        *(longlong *)(lVar3 + 0x18) = lVar4;
    }
    FUN_140932a90(piVar1,0x220,0,0,CONCAT44(uVar7,3),0,0x10b,8);
    FUN_1409320b0(piVar1,0x10b,0);
    return;
}



void FUN_14091ce80(int **param_1,longlong param_2)

{
    int *piVar1;
    longlong *plVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    short *psVar8;
    short sVar9;
    undefined8 in_stack_ffffffffffffffb8;
    undefined4 uVar10;

    uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    psVar8 = *(short **)(param_2 + 0x20);
    piVar1 = *param_1;
    lVar4 = 0;
    sVar9 = 0x7d;
    if (*psVar8 == 0x8c) {
        psVar8 = psVar8 + 1;
        sVar9 = 0x8c;
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = CONCAT44(uVar10,0x102);
            puVar3 = (undefined *)FUN_14092d140(piVar1,1,6,0,uVar6,0xfffffffffffffff8);
            uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
            sVar9 = 0x8c;
            if (puVar3 != (undefined *)0x0) {
                *puVar3 = 0x8b;
            }
        }
    }
    if (*(int *)(param_2 + 0x30) < 0) {
        lVar4 = FUN_140932570(piVar1);
        for (plVar2 = *(longlong **)(param_2 + 0x18); plVar2 != (longlong *)0x0;
             plVar2 = (longlong *)plVar2[1]) {
            lVar5 = *plVar2;
            if ((lVar5 != 0) && (lVar4 != 0)) {
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
                *(longlong *)(lVar5 + 0x18) = lVar4;
            }
        }
        if (sVar9 != 0x8c) {
            return;
        }
        LAB_14091cf4e:
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            FUN_14092aa10(piVar1,0x102,0xfffffffffffffff8,0x200,0);
        }
        lVar4 = *(longlong *)(param_2 + 0x38);
        lVar5 = FUN_140931b80(piVar1,1,6,0,0x200,0);
        if ((lVar5 != 0) && (lVar4 != 0)) {
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
            *(longlong *)(lVar5 + 0x18) = lVar4;
        }
        FUN_14092ec50(param_1,1);
    }
    else {
        if (sVar9 == 0x8c) {
            if ((*psVar8 - 0x78U & 0xfffd) == 0) goto LAB_14091cf4e;
            FUN_14092ec50(param_1,1);
            uVar6 = CONCAT44(uVar10,0x200);
            lVar4 = FUN_140931b80(piVar1,0,6,0,uVar6,0);
            uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
        }
        if ((*psVar8 - 0x77U & 0xfffd) == 0) {
            uVar6 = CONCAT44(uVar10,0x10b);
            FUN_140932690(piVar1,6,2,0,uVar6,(longlong)*(int *)(param_2 + 0x34));
            uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
            uVar6 = FUN_140932450(piVar1,0x17);
            FUN_14091b490(piVar1,param_1 + 0x20,uVar6);
            uVar6 = CONCAT44(uVar10,0x102);
            FUN_140932690(piVar1,6,0x10b,(longlong)*(int *)(param_2 + 0x34),uVar6,
                          (longlong)*(int *)(param_2 + 0x30) << 3);
            uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
            lVar5 = FUN_140932570(piVar1);
            for (plVar2 = *(longlong **)(param_2 + 0x18); plVar2 != (longlong *)0x0;
                 plVar2 = (longlong *)plVar2[1]) {
                lVar7 = *plVar2;
                if ((lVar7 != 0) && (lVar5 != 0)) {
                    *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                    *(longlong *)(lVar7 + 0x18) = lVar5;
                }
            }
        }
        else {
            uVar6 = FUN_140932570();
            FUN_140931600(*(undefined8 *)(param_2 + 0x18),uVar6);
        }
        if (sVar9 == 0x8c) {
            FUN_140932a90(piVar1,0x19,2,0,CONCAT44(uVar10,2),0,0x200,8);
            FUN_140932690(piVar1,6,0x102,0xfffffffffffffff8,0x200,0);
            lVar5 = *(longlong *)(param_2 + 0x38);
            lVar7 = FUN_140932450(piVar1,0x16);
            if ((lVar7 != 0) && (lVar5 != 0)) {
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
                *(longlong *)(lVar7 + 0x18) = lVar5;
            }
            lVar5 = FUN_140932570(piVar1);
            if ((lVar4 != 0) && (lVar5 != 0)) {
                *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
                *(longlong *)(lVar4 + 0x18) = lVar5;
            }
        }
    }
    return;
}



short * FUN_14091d1b0(int **param_1,short *param_2,longlong param_3,int param_4)

{
    short sVar1;
    ushort uVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    longlong *plVar9;
    longlong lVar10;
    int iVar11;
    undefined *puVar12;
    int *piVar13;
    undefined8 *puVar14;
    longlong lVar15;
    longlong *plVar16;
    longlong lVar17;
    undefined8 uVar18;
    short sVar19;
    uint uVar20;
    undefined8 in_stack_ffffffffffffff28;
    ulonglong uVar21;
    undefined4 uVar23;
    undefined8 uVar22;
    short *local_b8;
    longlong local_90;
    longlong **local_88;
    longlong *local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    longlong *local_60;
    short *local_58;
    longlong **local_50;

    uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    piVar4 = *param_1;
    local_80 = (longlong *)0x0;
    if (param_4 == 0) {
        local_88 = (longlong **)(param_3 + 0x18);
    }
    else {
        local_88 = (longlong **)(param_3 + 0x28);
    }
    piVar5 = param_1[0x16];
    piVar6 = param_1[0x17];
    piVar7 = param_1[0x1c];
    piVar8 = param_1[0x1d];
    sVar1 = *param_2;
    local_90 = 0;
    sVar19 = 0x7d;
    if ((ushort)(sVar1 - 0x8cU) < 2) {
        param_2 = param_2 + 1;
        sVar19 = sVar1;
    }
    iVar3 = param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1];
    iVar11 = FUN_14092ef20(param_1,param_2,0);
    *(int *)(param_3 + 0x34) = iVar3;
    *(int *)(param_3 + 0x30) = iVar11;
    sVar1 = *param_2;
    local_50 = &local_80;
    if ((sVar1 - 0x77U & 0xfffd) != 0) {
        local_50 = local_88;
    }
    uVar2 = param_2[1];
    if (sVar19 == 0x8d) {
        if (*piVar4 == 0) {
            piVar4[0x1a] = 0;
            uVar18 = CONCAT44(uVar23,0x102);
            puVar12 = (undefined *)FUN_14092d140(piVar4,1,6,0,uVar18,0xfffffffffffffff8);
            uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
            if (puVar12 != (undefined *)0x0) {
                *puVar12 = 0x8b;
            }
        }
        uVar18 = CONCAT44(uVar23,2);
        FUN_140932a90(*param_1,0x1b,2,0,uVar18,0,0x200,8);
        uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x200);
        local_90 = FUN_140931b80(piVar4,0,6,0,uVar18,0);
        uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
    }
    if (iVar11 < 0) {
        if (*piVar4 == 0) {
            piVar4[0x1a] = 0;
            uVar23 = 0;
            FUN_14092aa10(piVar4,0x10b,(longlong)iVar3 + 0x30,2,0);
        }
        FUN_14091b4d0(param_1,1);
        uVar21 = CONCAT44(uVar23,6);
        FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar21,0);
    }
    else {
        FUN_14091b4d0(param_1,iVar11 + 2);
        if (*piVar4 == 0) {
            lVar15 = (longlong)iVar3 + 0x30;
            piVar4[0x1a] = 0;
            FUN_14092aa10(piVar4,1,0,0x10b,lVar15);
            uVar23 = (undefined4)((ulonglong)lVar15 >> 0x20);
        }
        uVar18 = CONCAT44(uVar23,2);
        FUN_140932a90(piVar4,0x1b,3,0,uVar18,0,0x200,(longlong)(iVar11 * 8 + 0x10));
        uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),3);
        FUN_140932690(piVar4,6,0x10b,(longlong)iVar3,uVar18,0);
        uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),6);
        FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar18,0);
        uVar21 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),1);
        FUN_140932690(piVar4,6,0x102,0xfffffffffffffff0,uVar21,0);
        uVar21 = uVar21 & 0xffffffff00000000;
        FUN_14092fa70(param_1,param_2,iVar11 + 1,2,uVar21);
    }
    local_78 = 0;
    local_70 = 0;
    local_58 = (short *)0x0;
    param_1[0x16] = (int *)0x0;
    param_1[0x1c] = (int *)0x0;
    local_b8 = param_2 + uVar2;
    do {
        uVar23 = (undefined4)(uVar21 >> 0x20);
        param_1[0x17] = (int *)0x0;
        param_1[0x1d] = (int *)0x0;
        local_68 = 0;
        local_60 = (longlong *)0x0;
        if ((*param_2 == 0x71) && (*piVar4 == 0)) {
            piVar4[0x1a] = 0;
            uVar23 = 0xffffffff;
            FUN_14092aa10(piVar4,6,0,0x102,0xfffffffffffffff8);
        }
        local_58 = param_2;
        FUN_140925310(param_1,param_2 + 2);
        if (*piVar4 != 0) goto LAB_14091df72;
        piVar13 = (int *)FUN_140932570(piVar4);
        plVar16 = (longlong *)param_1[0x1d];
        param_1[0x17] = piVar13;
        for (; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[1]) {
            lVar15 = *plVar16;
            if ((lVar15 != 0) && (piVar13 != (int *)0x0)) {
                *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) | 1;
                *(int **)(lVar15 + 0x18) = piVar13;
            }
        }
        if (iVar11 < 0) {
            uVar21 = CONCAT44(uVar23,0x10b);
            FUN_140932690(piVar4,6);
        }
        else if (((sVar1 - 0x78U & 0xfffd) == 0) && (param_4 == 0)) {
            uVar21 = CONCAT44(uVar23,0x10b);
            FUN_140932690(piVar4,6);
            uVar18 = FUN_140932450(piVar4,0x17);
            if ((*piVar4 == 0) &&
                (puVar14 = (undefined8 *)FUN_14092d590(piVar4,0x10), puVar14 != (undefined8 *)0x0)) {
                piVar13 = param_1[0x20];
                *puVar14 = uVar18;
                puVar14[1] = piVar13;
                param_1[0x20] = (int *)puVar14;
            }
        }
        else {
            uVar21 = CONCAT44(uVar23,0x10b);
            FUN_140932a90(piVar4,0x19,2,0,uVar21,(longlong)iVar3,0x200,(longlong)(iVar11 + 1) << 3);
        }
        if ((sVar1 - 0x78U & 0xfffd) == 0) {
            uVar23 = (undefined4)(uVar21 >> 0x20);
            if (param_4 == 0) {
                if (sVar19 != 0x8c) {
                    if (iVar11 < 0) goto LAB_14091d820;
                    goto LAB_14091d810;
                }
                if (iVar11 < 0) {
                    uVar18 = CONCAT44(uVar23,0x102);
                    FUN_140932690(piVar4,6,6,0,uVar18,0);
                    uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
                }
                else {
                    uVar18 = CONCAT44(uVar23,0x102);
                    FUN_140932690(piVar4,6,1,0,uVar18,(longlong)iVar11 << 3);
                    uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x102);
                    FUN_140932690(piVar4,6,6,0,uVar18,(longlong)(iVar11 + 1) << 3);
                    uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),1);
                    FUN_140932690(piVar4,6,0x10b,(longlong)iVar3,uVar18,0);
                    uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
                }
                uVar18 = CONCAT44(uVar23,2);
                FUN_140932a90(piVar4,0x19,2,0,uVar18,0,0x200,8);
                uVar21 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x200);
            }
            else {
                LAB_14091d810:
                uVar21 = CONCAT44(uVar23,0x102);
            }
            FUN_140932690(piVar4,6);
        }
        LAB_14091d820:
        lVar15 = FUN_140932450(piVar4,0x16);
        if ((*piVar4 == 0) &&
            (plVar16 = (longlong *)FUN_14092d590(piVar4,0x10), plVar16 != (longlong *)0x0)) {
            plVar9 = *local_50;
            *plVar16 = lVar15;
            plVar16[1] = (longlong)plVar9;
            *local_50 = plVar16;
        }
        FUN_14091dfc0(param_1,local_68);
        if (*piVar4 != 0) {
            LAB_14091df72:
            param_1[0x16] = piVar5;
            param_1[0x17] = piVar6;
            param_1[0x1c] = piVar7;
            param_1[0x1d] = piVar8;
            return (short *)0x0;
        }
        lVar15 = FUN_140932570(piVar4);
        uVar23 = (undefined4)(uVar21 >> 0x20);
        for (plVar16 = local_60; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[1]) {
            lVar17 = *plVar16;
            if ((lVar17 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) | 1;
                *(longlong *)(lVar17 + 0x18) = lVar15;
            }
        }
        if (*local_b8 != 0x71) break;
        param_2 = local_b8;
        local_b8 = local_b8 + (ushort)local_b8[1];
    } while( true );
    if (param_1[0x1c] != (int *)0x0) {
        lVar15 = FUN_140932570(piVar4);
        for (plVar16 = (longlong *)param_1[0x1c]; plVar16 != (longlong *)0x0;
             plVar16 = (longlong *)plVar16[1]) {
            lVar17 = *plVar16;
            if ((lVar17 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) | 1;
                *(longlong *)(lVar17 + 0x18) = lVar15;
            }
        }
    }
    if ((sVar1 - 0x77U & 0xfffd) != 0) {
        uVar18 = CONCAT44(uVar23,0x102);
        FUN_140932690(piVar4,6,6,0,uVar18,0xfffffffffffffff8);
        uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (iVar11 < 0) {
            if (sVar19 == 0x7d) {
                FUN_14092ec50(param_1,1);
                goto LAB_14091df3c;
            }
            lVar15 = -8;
            uVar18 = 0x102;
            uVar22 = CONCAT44(uVar23,0x200);
        }
        else {
            uVar18 = CONCAT44(uVar23,0x102);
            FUN_140932690(piVar4,6,1,0,uVar18,0xfffffffffffffff0);
            uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
            if (sVar19 == 0x7d) {
                FUN_14092ec50(param_1,iVar11 + 2);
            }
            else {
                FUN_14092ec50(param_1,iVar11 + 1);
                FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,CONCAT44(uVar23,0x200),0);
            }
            lVar15 = (longlong)iVar3;
            uVar18 = 0x10b;
            uVar22 = 1;
        }
        FUN_140932690(piVar4,6,uVar18,lVar15,uVar22,0);
        if (sVar19 == 0x8c) {
            uVar18 = FUN_140932570(piVar4);
            *(undefined8 *)(param_3 + 0x38) = uVar18;
        }
        else if (sVar19 == 0x8d) {
            lVar15 = *(longlong *)(param_3 + 0x38);
            lVar17 = FUN_140932450(piVar4,0x16);
            if ((lVar17 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) | 1;
                *(longlong *)(lVar17 + 0x18) = lVar15;
            }
            lVar15 = FUN_140932570(piVar4);
            if ((local_90 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(local_90 + 0x10) = *(ulonglong *)(local_90 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_90 + 0x10) = *(ulonglong *)(local_90 + 0x10) | 1;
                *(longlong *)(local_90 + 0x18) = lVar15;
            }
        }
        else if (sVar19 == 0x7d) goto LAB_14091df3c;
        uVar18 = FUN_140932570(piVar4);
        FUN_140931600(*(undefined8 *)(param_3 + 0x18),uVar18);
        *(undefined8 *)(param_3 + 0x18) = 0;
        goto LAB_14091df3c;
    }
    if ((param_4 != 0) || (sVar19 == 0x8c)) {
        uVar18 = CONCAT44(uVar23,0x102);
        FUN_140932690(piVar4,6,6,0,uVar18,0xfffffffffffffff8);
        uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
    }
    if (iVar11 < 0) {
        if (sVar19 == 0x8c) {
            uVar18 = CONCAT44(uVar23,0x200);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar18,0);
            uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
        }
        else {
            FUN_14092ec50(param_1,1);
        }
    }
    else {
        uVar18 = CONCAT44(uVar23,0x102);
        FUN_140932690(piVar4,6,1,0,uVar18,0xfffffffffffffff0);
        uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (sVar19 == 0x8c) {
            FUN_14092ec50(param_1,iVar11 + 1);
            uVar18 = CONCAT44(uVar23,0x200);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar18,0);
            uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
        }
        else {
            FUN_14092ec50(param_1,iVar11 + 2);
        }
        uVar18 = CONCAT44(uVar23,1);
        FUN_140932690(piVar4,6,0x10b,(longlong)iVar3,uVar18,0);
        uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
    }
    lVar15 = FUN_140932450(piVar4,0x16);
    if (sVar19 != 0x8c) {
        FUN_14091b490(piVar4,local_88,lVar15);
    }
    lVar17 = FUN_140932570(piVar4);
    for (plVar16 = local_80; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[1]) {
        lVar10 = *plVar16;
        if ((lVar10 != 0) && (lVar17 != 0)) {
            *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
            *(longlong *)(lVar10 + 0x18) = lVar17;
        }
    }
    if (iVar11 < 0) {
        uVar18 = CONCAT44(uVar23,0x102);
        FUN_140932690(piVar4,6,6,0,uVar18,0);
        uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
        if (sVar19 != 0x8c) {
            if (sVar19 != 0x8d) goto LAB_14091de10;
            uVar18 = CONCAT44(uVar23,2);
            FUN_140932a90(piVar4,0x19,2,0,uVar18,0,0x200,8);
            uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x200);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar18,0);
            uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
            goto LAB_14091de5f;
        }
        FUN_140932a90(piVar4,0x19,2,0,CONCAT44(uVar23,2),0,0x200,8);
    }
    else {
        if (sVar19 == 0x7d) {
            FUN_140932a90(piVar4,0x19,2,0,CONCAT44(uVar23,0x10b),(longlong)iVar3,0x200,
                          (longlong)(iVar11 + 1) << 3);
            FUN_140932690(piVar4,6,6,0,0x102,0);
            goto LAB_14091df3c;
        }
        uVar18 = CONCAT44(uVar23,0x10b);
        FUN_140932a90(piVar4,0x19,2,0,uVar18,(longlong)iVar3,0x200,(longlong)(iVar11 + 2) << 3);
        uVar21 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),0x102);
        FUN_140932690(piVar4,6,6,0,uVar21,0xfffffffffffffff8);
        uVar20 = 0x200;
        if (sVar19 == 0x8c) {
            uVar20 = 6;
        }
        uVar21 = uVar21 & 0xffffffff00000000 | (ulonglong)uVar20;
        FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar21,0);
        uVar23 = (undefined4)(uVar21 >> 0x20);
        LAB_14091de10:
        if (sVar19 != 0x8c) {
            if (sVar19 != 0x8d) goto LAB_14091df3c;
            LAB_14091de5f:
            lVar15 = *(longlong *)(param_3 + 0x38);
            lVar17 = FUN_140932450(piVar4,0x16);
            if ((lVar17 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar17 + 0x10) = *(ulonglong *)(lVar17 + 0x10) | 1;
                *(longlong *)(lVar17 + 0x18) = lVar15;
            }
            lVar15 = FUN_140932570(piVar4);
            if ((local_90 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(local_90 + 0x10) = *(ulonglong *)(local_90 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_90 + 0x10) = *(ulonglong *)(local_90 + 0x10) | 1;
                *(longlong *)(local_90 + 0x18) = lVar15;
            }
            if (-1 < iVar11) {
                uVar18 = CONCAT44(uVar23,0x10b);
                FUN_140932690(piVar4,6,2,0,uVar18,(longlong)iVar3);
                uVar23 = (undefined4)((ulonglong)uVar18 >> 0x20);
                uVar18 = FUN_140932450(piVar4,0x17);
                FUN_14091b490(piVar4,param_1 + 0x20,uVar18);
                FUN_140932690(piVar4,6,0x10b,(longlong)iVar3,CONCAT44(uVar23,0x102),(longlong)iVar11 << 3);
            }
            uVar18 = FUN_140932570(piVar4);
            FUN_140931600(*(undefined8 *)(param_3 + 0x18),uVar18);
            goto LAB_14091df3c;
        }
    }
    lVar17 = FUN_140932570(piVar4);
    *(longlong *)(param_3 + 0x38) = lVar17;
    if ((lVar15 != 0) && (lVar17 != 0)) {
        *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) | 1;
        *(longlong *)(lVar15 + 0x18) = lVar17;
    }
    LAB_14091df3c:
    param_1[0x16] = piVar5;
    param_1[0x17] = piVar6;
    param_1[0x1c] = piVar7;
    param_1[0x1d] = piVar8;
    return local_b8 + 2;
}



void FUN_14091dfc0(int **param_1,longlong *param_2)

{
    int iVar1;
    int *piVar2;
    longlong *plVar3;
    longlong lVar4;
    int *piVar5;
    longlong lVar6;
    undefined *puVar7;

    if (param_2 != (longlong *)0x0) {
        piVar2 = *param_1;
        do {
            if (param_2[1] != 0) {
                lVar6 = FUN_140932570();
                for (plVar3 = (longlong *)param_2[1]; plVar3 != (longlong *)0x0;
                     plVar3 = (longlong *)plVar3[1]) {
                    lVar4 = *plVar3;
                    if ((lVar4 != 0) && (lVar6 != 0)) {
                        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
                        *(longlong *)(lVar4 + 0x18) = lVar6;
                    }
                }
            }
            switch(*(undefined2 *)param_2[4]) {
                case 3:
                    if (*piVar2 == 0) {
                        piVar2[0x1a] = 0;
                        puVar7 = (undefined *)FUN_14092d140(piVar2,1,1,0,0x102,0xfffffffffffffff8);
                        if (puVar7 != (undefined *)0x0) {
                            *puVar7 = 0x8b;
                        }
                    }
                    FUN_14092ec50(param_1,1);
                    iVar1 = *piVar2;
                    goto joined_r0x00014091e191;
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
                case 0x3c:
                case 0x3d:
                case 0x3e:
                case 0x3f:
                case 0x40:
                case 0x41:
                case 0x42:
                case 0x43:
                case 0x44:
                case 0x45:
                case 0x46:
                case 0x47:
                case 0x48:
                case 0x49:
                case 0x4a:
                case 0x4b:
                case 0x4c:
                case 0x4d:
                case 0x4e:
                case 0x4f:
                case 0x50:
                case 0x51:
                case 0x52:
                case 0x53:
                case 0x54:
                case 0x55:
                case 0x56:
                case 0x57:
                case 0x58:
                case 0x59:
                case 0x5a:
                case 0x5b:
                case 0x5c:
                case 0x5d:
                case 0x5e:
                case 0x5f:
                case 0x60:
                case 0x61:
                case 0x6a:
                case 0x6b:
                case 0x6c:
                    FUN_140923e20(param_1,param_2);
                    break;
                case 0x6d:
                case 0x6e:
                    FUN_140926650(param_1,param_2);
                    break;
                case 0x6f:
                    FUN_140925fe0(param_1,param_2);
                    break;
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                LAB_14091e109:
                    FUN_14091ce80(param_1,param_2);
                    break;
                case 0x7b:
                case 0x7c:
                case 0x7d:
                case 0x7f:
                case 0x81:
                case 0x82:
                case 0x84:
                case 0x86:
                    FUN_14091e340(param_1,param_2);
                    break;
                case 0x7e:
                case 0x80:
                case 0x83:
                case 0x85:
                case 0x8e:
                    FUN_1409209b0(param_1,param_2);
                    break;
                case 0x8c:
                    if ((ushort)((undefined2 *)param_2[4])[1] < 0x7b) goto LAB_14091e109;
                    FUN_14091e340(param_1,param_2);
                    break;
                case 0x8d:
                    FUN_140921760(param_1,param_2);
                    break;
                case 0x8f:
                    if (*piVar2 == 0) {
                        piVar2[0x1a] = 0;
                        FUN_14092aa10(piVar2,1,0,0x102,0xfffffffffffffff8);
                    }
                    FUN_14092ec50(param_1,1);
                    iVar1 = *piVar2;
                joined_r0x00014091e191:
                    if (iVar1 == 0) {
                        piVar2[0x1a] = 0;
                        FUN_14092aa10(piVar2,0x10b);
                    }
                    break;
                case 0x96:
                    if (*piVar2 == 0) {
                        piVar2[0x1a] = 0;
                        FUN_14092aa10(piVar2,1,0,0x200,0xffffffffffffffff);
                    }
                    piVar5 = param_1[0x16];
                    lVar6 = FUN_140932450(piVar2,0x16);
                    if (piVar5 == (int *)0x0) {
                        FUN_14091b490(piVar2,param_1 + 0x1c);
                    }
                    else if ((lVar6 != 0) && (piVar5 != (int *)0x0)) {
                        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
                        *(int **)(lVar6 + 0x18) = piVar5;
                    }
                    break;
                case 0x97:
                case 0x98:
                case 0x99:
                    lVar6 = FUN_140932570();
                    for (plVar3 = (longlong *)param_2[3]; plVar3 != (longlong *)0x0;
                         plVar3 = (longlong *)plVar3[1]) {
                        lVar4 = *plVar3;
                        if ((lVar4 != 0) && (lVar6 != 0)) {
                            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
                            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
                            *(longlong *)(lVar4 + 0x18) = lVar6;
                        }
                    }
            }
            param_2 = (longlong *)*param_2;
        } while (param_2 != (longlong *)0x0);
    }
    return;
}



void FUN_14091e340(int **param_1,longlong param_2)

{
    ushort *puVar1;
    ushort uVar2;
    ushort uVar3;
    ushort uVar4;
    int iVar5;
    int *piVar6;
    undefined *puVar7;
    undefined8 uVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    longlong lVar12;
    ushort *puVar13;
    longlong *plVar14;
    undefined8 uVar15;
    ushort *puVar16;
    ushort uVar17;
    uint uVar18;
    int iVar19;
    char cVar20;
    uint local_res18;
    undefined4 uVar21;
    int local_88;
    longlong *local_78;
    longlong local_70;
    longlong local_68;
    longlong local_60;
    longlong local_58;

    puVar16 = *(ushort **)(param_2 + 0x20);
    iVar5 = *(int *)(param_2 + 0x48);
    piVar6 = *param_1;
    plVar14 = (longlong *)0x0;
    uVar2 = *puVar16;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_58 = 0;
    uVar17 = 0x7d;
    if ((ushort)(uVar2 - 0x8c) < 2) {
        puVar16 = puVar16 + 1;
        uVar17 = uVar2;
    }
    uVar2 = *puVar16;
    puVar13 = puVar16;
    do {
        puVar1 = puVar13 + puVar13[1];
        puVar13 = puVar13 + puVar13[1];
    } while (*puVar1 == 0x71);
    uVar3 = *puVar13;
    uVar4 = puVar16[puVar16[1]];
    puVar13 = puVar16 + puVar16[1];
    local_res18 = (uint)uVar2;
    if (((uVar2 == 0x81) || (uVar18 = (uint)(uVar4 == 0x71), local_res18 == 0x86)) &&
        (((ushort)(puVar16[2] - 0x77) < 4 || (uVar18 = 0, *(longlong *)(param_2 + 0x40) != 0)))) {
        uVar18 = 1;
    }
    if ((local_res18 == 0x7f) || (local_res18 == 0x84)) {
        local_88 = (uint)puVar16[2] * 2;
    }
    if (local_res18 == 0x81) {
        local_res18 = (uint)uVar2;
        if (uVar4 == 0x73 || uVar4 == 0x74) {
            local_res18 = 0x86;
        }
    }
    else if (local_res18 == 0x7c) {
        local_res18 = 0x7b;
    }
    if (uVar3 == 0x73) {
        if (uVar17 == 0x8c) {
            if (*piVar6 == 0) {
                piVar6[0x1a] = 0;
                puVar7 = (undefined *)FUN_14092d140(piVar6,1,1,0,0x102,0xfffffffffffffff8);
                if (puVar7 != (undefined *)0x0) {
                    *puVar7 = 0x8b;
                }
            }
            FUN_14092ec50(param_1);
            uVar8 = 0;
            LAB_14091e671:
            local_70 = FUN_140931b80(piVar6,uVar8,1,0,0x200,0);
        }
    }
    else if (uVar3 == 0x74) {
        if (uVar17 != 0x8d) {
            FUN_140932690(piVar6);
            if (local_res18 < 0x82) {
                if (local_res18 != 0x7b) {
                    lVar11 = *(longlong *)(param_2 + 0x30);
                    lVar12 = FUN_140932450(piVar6,0x16);
                    if ((lVar12 != 0) && (lVar11 != 0)) {
                        *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
                        *(longlong *)(lVar12 + 0x18) = lVar11;
                        local_58 = FUN_140932570(piVar6);
                        goto LAB_14091e69c;
                    }
                    goto LAB_14091e620;
                }
                LAB_14091e57b:
                if (*(int *)(param_2 + 0x40) < 0) goto LAB_14091e5c5;
                FUN_140932690(piVar6,6,1,0,0x10b,(longlong)iVar5);
                lVar11 = (longlong)(*(int *)(param_2 + 0x40) + 1) << 3;
                uVar21 = 0x101;
            }
            else {
                if (local_res18 == 0x7b) goto LAB_14091e57b;
                LAB_14091e5c5:
                lVar11 = (longlong)iVar5;
                uVar21 = 0x10b;
            }
            lVar12 = *(longlong *)(param_2 + 0x30);
            lVar11 = FUN_140931b80(piVar6,1,6,0,uVar21,lVar11);
            if ((lVar11 != 0) && (lVar12 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(longlong *)(lVar11 + 0x18) = lVar12;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
            }
            if (local_res18 != 0x7b) {
                FUN_14092ec50(param_1,1);
            }
        }
        LAB_14091e620:
        local_58 = FUN_140932570(piVar6);
    }
    else if (uVar17 == 0x8c) {
        FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff8);
        FUN_14092ec50(param_1,1);
        uVar8 = 1;
        goto LAB_14091e671;
    }
    LAB_14091e69c:
    if (local_res18 == 0x7b) {
        if (-1 < *(int *)(param_2 + 0x40)) {
            FUN_140932690(piVar6,6,2,0,0x10b,(longlong)iVar5);
            uVar8 = FUN_140932450(piVar6,0x17);
            FUN_14091b490(piVar6,param_1 + 0x20,uVar8);
        }
        local_60 = FUN_140932450(piVar6,0x16);
    }
    else if ((local_res18 == 0x81) || (local_res18 == 0x86)) {
        if (uVar18 != 0) {
            FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff8);
            FUN_14092ec50(param_1,1);
            if (*piVar6 != 0) {
                return;
            }
            local_78 = (longlong *)FUN_14092d590(piVar6,0x10);
            if (local_78 == (longlong *)0x0) {
                return;
            }
            local_78[1] = 0;
            lVar11 = FUN_140931b80(piVar6,0,1,0,0x200,1);
            *local_78 = lVar11;
        }
    }
    else if (*puVar13 == 0x71) {
        FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff8);
        FUN_14092ec50(param_1,1);
        iVar19 = 1;
        plVar10 = plVar14;
        do {
            if (local_78 == (longlong *)0x0) {
                plVar10 = plVar14;
                local_78 = plVar14;
                if (*piVar6 == 0) {
                    plVar10 = (longlong *)FUN_14092d590(piVar6,0x10);
                    local_78 = plVar10;
                }
            }
            else if (*piVar6 == 0) {
                plVar9 = (longlong *)FUN_14092d590(piVar6,0x10);
                plVar10[1] = (longlong)plVar9;
                plVar10 = plVar9;
            }
            else {
                plVar10[1] = 0;
                plVar10 = plVar14;
            }
            if (plVar10 == (longlong *)0x0) {
                return;
            }
            plVar10[1] = 0;
            lVar11 = FUN_140931b80(piVar6,0,1,0,0x200,(longlong)iVar19);
            *plVar10 = lVar11;
            iVar19 = iVar19 + 1;
            puVar1 = puVar13 + puVar13[1];
            puVar13 = puVar13 + puVar13[1];
        } while (*puVar1 == 0x71);
        puVar13 = puVar16 + puVar16[1];
    }
    FUN_14091dfc0(param_1,*(undefined8 *)(param_2 + 0x10));
    if (*piVar6 != 0) {
        return;
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
        lVar11 = FUN_140932570();
        for (plVar14 = *(longlong **)(param_2 + 0x18); plVar14 != (longlong *)0x0;
             plVar14 = (longlong *)plVar14[1]) {
            lVar12 = *plVar14;
            if ((lVar12 != 0) && (lVar11 != 0)) {
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
                *(longlong *)(lVar12 + 0x18) = lVar11;
            }
        }
    }
    if ((local_res18 == 0x81) || (local_res18 == 0x86)) {
        if ((ushort)(puVar16[2] - 0x77) < 4) {
            lVar11 = *(longlong *)(param_2 + 0x40);
            if ((-1 < *(int *)(lVar11 + 0x30)) && ((puVar16[2] - 0x77 & 0xfffd) == 0)) {
                FUN_140932690(piVar6,6,2,0,0x10b,(longlong)*(int *)(lVar11 + 0x34));
                uVar8 = FUN_140932450(piVar6,0x17);
                FUN_14091b490(piVar6,param_1 + 0x20,uVar8);
                FUN_140932690(piVar6,6,0x10b,(longlong)*(int *)(lVar11 + 0x34),0x102,
                              (longlong)*(int *)(lVar11 + 0x30) << 3);
            }
            local_68 = FUN_140932450(piVar6,0x16);
            FUN_140932570(piVar6);
            uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28);
        }
        else {
            if (*(longlong *)(param_2 + 0x40) == 0) goto LAB_14091e9ef;
            local_68 = FUN_140932450(piVar6,0x16);
            FUN_140932570(piVar6);
            uVar8 = *(undefined8 *)(param_2 + 0x40);
        }
        FUN_140931600(uVar8);
    }
    LAB_14091e9ef:
    if (uVar18 != 0) {
        iVar19 = 1;
        do {
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined8 *)(param_2 + 8) = 0;
            if (*puVar13 == 0x71) {
                puVar13 = puVar13 + puVar13[1];
                if ((local_res18 != 0x81) && (local_res18 != 0x86)) {
                    lVar11 = (longlong)iVar5;
                    if ((iVar5 == 0) || (local_res18 == 0x7b)) {
                        lVar11 = -8;
                        uVar21 = 0x102;
                    }
                    else {
                        uVar21 = 0x10b;
                    }
                    FUN_140932690(piVar6,6,6,0,uVar21,lVar11);
                }
                FUN_140925310(param_1);
                if (*piVar6 != 0) {
                    return;
                }
            }
            if (local_res18 == 0x7b) {
                if (*(int *)(param_2 + 0x40) < 0) {
                    lVar11 = (longlong)iVar5;
                    FUN_140932690(piVar6,6,2,0,0x10b,lVar11);
                    if (uVar3 == 0x73) {
                        uVar8 = 0;
                        LAB_14091eb4d:
                        lVar11 = 0;
                        uVar15 = 3;
                    }
                    else {
                        if (uVar3 != 0x74) goto LAB_14091eb69;
                        uVar8 = 0;
                        uVar15 = 0x10b;
                    }
                    FUN_140932690(piVar6,6,uVar15,lVar11,0x102,uVar8);
                }
                else {
                    FUN_140932a90(piVar6);
                    if (uVar3 == 0x73) {
                        uVar8 = 0xfffffffffffffff8;
                        goto LAB_14091eb4d;
                    }
                }
            }
            LAB_14091eb69:
            cVar20 = local_res18 != 0x7b;
            if ((uVar3 != 0x72) || (uVar17 != 0x7d)) {
                cVar20 = cVar20 + '\x01';
            }
            if (cVar20 != '\0') {
                if ((local_res18 == 0x7b) && (*(int *)(param_2 + 0x40) < 0)) {
                    FUN_140932a90(piVar6);
                }
                else {
                    FUN_14091b4d0(param_1);
                }
            }
            if (uVar3 == 0x72) {
                uVar18 = 0;
                if (uVar17 != 0x7d) {
                    uVar21 = 0x200;
                    goto LAB_14091ec10;
                }
            }
            else {
                uVar21 = 6;
                LAB_14091ec10:
                FUN_140932690(piVar6,6,0x102,0xfffffffffffffff8,uVar21,0);
                uVar18 = 1;
            }
            if (local_res18 != 0x7b) {
                FUN_140932690(piVar6,6,0x102,(longlong)(int)((-1 - uVar18) * 8),0x200,(longlong)iVar19);
                iVar19 = iVar19 + 1;
            }
            if (local_88 != 0) {
                FUN_140932690(piVar6,6,1,0,0x10b,(longlong)iVar5);
                FUN_140932690(piVar6,6,0x10b,
                              (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_88 + 1) * 8,6,
                              0);
                FUN_140932690(piVar6,6,0x10b,
                              (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)local_88 * 8,1,0);
            }
            lVar11 = *(longlong *)(param_2 + 0x28);
            lVar12 = FUN_140932450(piVar6,0x16);
            if ((lVar12 != 0) && (lVar11 != 0)) {
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
                *(longlong *)(lVar12 + 0x18) = lVar11;
            }
            if (local_res18 != 0x7b) {
                lVar12 = FUN_140932570(piVar6);
                lVar11 = *local_78;
                if ((lVar11 != 0) && (lVar12 != 0)) {
                    *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                    *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                    *(longlong *)(lVar11 + 0x18) = lVar12;
                }
                local_78 = (longlong *)local_78[1];
            }
            FUN_14091dfc0(param_1);
            if (*piVar6 != 0) {
                return;
            }
            if (*(longlong *)(param_2 + 0x18) != 0) {
                lVar11 = FUN_140932570(piVar6);
                for (plVar14 = *(longlong **)(param_2 + 0x18); plVar14 != (longlong *)0x0;
                     plVar14 = (longlong *)plVar14[1]) {
                    lVar12 = *plVar14;
                    if ((lVar12 != 0) && (lVar11 != 0)) {
                        *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
                        *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
                        *(longlong *)(lVar12 + 0x18) = lVar11;
                    }
                }
            }
        } while (*puVar13 == 0x71);
        if (local_68 != 0) {
            lVar11 = *(longlong *)(param_2 + 0x40);
            if (((puVar16[2] - 0x78 & 0xfffd) == 0) && (-1 < *(int *)(lVar11 + 0x30))) {
                FUN_140932690(piVar6,6,2,0,0x10b,(longlong)*(int *)(lVar11 + 0x34));
                uVar8 = FUN_140932450(piVar6,0x17);
                FUN_14091b490(piVar6,param_1 + 0x20,uVar8);
                FUN_140932690(piVar6,6,0x10b,(longlong)*(int *)(lVar11 + 0x34),0x102,
                              (longlong)*(int *)(lVar11 + 0x30) << 3);
            }
            lVar11 = FUN_140932570(piVar6);
            if (lVar11 != 0) {
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_68 + 0x10) = *(ulonglong *)(local_68 + 0x10) | 1;
                *(longlong *)(local_68 + 0x18) = lVar11;
            }
        }
        if (iVar5 == 0) {
            FUN_14092ec50(param_1);
        }
    }
    if (local_88 == 0) {
        if ((local_res18 - 0x82 & 0xfffffffb) == 0) {
            FUN_140932690(piVar6,6,0x10b,(longlong)iVar5,0x102,0xfffffffffffffff8);
            FUN_14092ec50(param_1,1);
        }
        else if (local_res18 == 0x7b) {
            if (*(int *)(param_2 + 0x40) < 0) {
                if ((uVar3 == 0x73) || ((puVar16[puVar16[1]] == 0x71 && (uVar3 != 0x74)))) {
                    FUN_14092ec50(param_1,1);
                }
            }
            else {
                if (((ushort)(uVar3 - 0x73) < 2) || (puVar16[puVar16[1]] == 0x71)) {
                    iVar19 = 2;
                }
                else {
                    iVar19 = 1;
                }
                FUN_14092ec50(param_1,*(int *)(param_2 + 0x40) + iVar19);
            }
            lVar11 = FUN_140932570(piVar6);
            if ((local_60 != 0) && (lVar11 != 0)) {
                *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_60 + 0x10) = *(ulonglong *)(local_60 + 0x10) | 1;
                *(longlong *)(local_60 + 0x18) = lVar11;
            }
            if (-1 < *(int *)(param_2 + 0x40)) {
                lVar11 = (longlong)*(int *)(param_2 + 0x40) << 3;
                uVar21 = 0x102;
                goto LAB_14091f0d0;
            }
            if (uVar3 == 0x74) {
                FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff0);
                FUN_14092ec50(param_1,2);
                FUN_140932690(piVar6,6,0x10b,(longlong)iVar5,1,0);
                goto LAB_14091f2d4;
            }
        }
    }
    else {
        lVar11 = (longlong)local_88;
        if (*(char *)((lVar11 >> 1) + (longlong)param_1[3]) == '\0') {
            FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff8);
            FUN_140932690(piVar6,6,3,0,0x102,0xfffffffffffffff0);
            FUN_140932690(piVar6,6,0x10b,(longlong)*(int *)((longlong)param_1 + 0x24) + lVar11 * 8,1,0);
            FUN_140932690(piVar6,6,1,0,0x102,&DAT_ffffffffffffffe8);
            FUN_14092ec50(param_1,3);
            FUN_140932690(piVar6,6,0x10b,
                          (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_88 + 1) * 8,3,0)
                    ;
            lVar11 = 0;
            uVar21 = 1;
            LAB_14091f0d0:
            FUN_140932690(piVar6,6,0x10b,(longlong)iVar5,uVar21,lVar11);
        }
        else {
            FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff8);
            FUN_140932690(piVar6,6,3,0,0x102,0xfffffffffffffff0);
            FUN_14092ec50(param_1,2);
            FUN_140932690(piVar6,6,0x10b,(longlong)*(int *)((longlong)param_1 + 0x24) + lVar11 * 8,1,0);
            FUN_140932690(piVar6,6,0x10b,
                          (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_88 + 1) * 8,3,0)
                    ;
        }
    }
    if (uVar3 == 0x73) {
        FUN_140932690(piVar6,6,6,0,0x102,0xfffffffffffffff8);
        if (uVar17 != 0x8c) {
            FUN_14092ec50(param_1,1);
        }
        lVar11 = *(longlong *)(param_2 + 0x30);
        lVar12 = FUN_140931b80(piVar6,1,6,0,0x200,0);
        if ((lVar12 != 0) && (lVar11 != 0)) {
            *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
            *(longlong *)(lVar12 + 0x18) = lVar11;
        }
        if (uVar17 != 0x8c) {
            return;
        }
        FUN_140932690(piVar6,6,6,0,0x102,0xfffffffffffffff0);
        lVar11 = *(longlong *)(param_2 + 0x38);
        lVar12 = FUN_140932450(piVar6,0x16);
        if ((lVar12 != 0) && (lVar11 != 0)) {
            *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
            *(longlong *)(lVar12 + 0x18) = lVar11;
        }
        lVar11 = FUN_140932570(piVar6);
        if ((local_70 != 0) && (lVar11 != 0)) {
            *(ulonglong *)(local_70 + 0x10) = *(ulonglong *)(local_70 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(local_70 + 0x10) = *(ulonglong *)(local_70 + 0x10) | 1;
            *(longlong *)(local_70 + 0x18) = lVar11;
        }
        FUN_14092ec50(param_1,1);
        return;
    }
    if (uVar3 != 0x74) {
        if (uVar17 != 0x8c) {
            return;
        }
        FUN_140932690(piVar6,6,6,0,0x102,0xfffffffffffffff8);
        lVar11 = *(longlong *)(param_2 + 0x38);
        lVar12 = FUN_140932450(piVar6,0x16);
        if ((lVar12 != 0) && (lVar11 != 0)) {
            *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar12 + 0x10) = *(ulonglong *)(lVar12 + 0x10) | 1;
            *(longlong *)(lVar12 + 0x18) = lVar11;
        }
        lVar11 = FUN_140932570(piVar6);
        if (local_70 == 0) {
            return;
        }
        if (lVar11 == 0) {
            return;
        }
        *(ulonglong *)(local_70 + 0x10) = *(ulonglong *)(local_70 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(local_70 + 0x10) = *(ulonglong *)(local_70 + 0x10) | 1;
        *(longlong *)(local_70 + 0x18) = lVar11;
        return;
    }
    LAB_14091f2d4:
    FUN_140932690(piVar6,6,1,0,0x102,0xfffffffffffffff8);
    if (local_res18 != 0x7b) {
        FUN_14092ec50(param_1,1);
    }
    lVar11 = FUN_140931b80(piVar6,1,1,0,0x200,0);
    if ((lVar11 != 0) && (local_58 != 0)) {
        *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
        *(longlong *)(lVar11 + 0x18) = local_58;
    }
    if (local_res18 == 0x7b) {
        FUN_14092ec50(param_1,(uVar17 == 0x8d) + '\x01');
    }
    else if (uVar17 == 0x8d) {
        FUN_14092ec50(param_1,1);
    }
    return;
}



ushort * FUN_14091f420(int **param_1,ushort *param_2,longlong param_3)

{
    ushort *puVar1;
    ushort uVar2;
    ushort uVar3;
    int *piVar4;
    int *piVar5;
    ushort uVar6;
    undefined4 uVar7;
    uint uVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    undefined8 *puVar12;
    ushort *puVar13;
    longlong lVar14;
    longlong lVar15;
    ushort *puVar16;
    int iVar17;
    ushort uVar18;
    undefined8 uVar19;
    undefined *puVar20;
    bool bVar21;
    bool bVar22;
    undefined8 in_stack_ffffffffffffff78;
    undefined4 uVar24;
    ulonglong uVar23;
    int local_68;
    int local_60;
    longlong local_58;
    longlong local_50;

    uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    piVar4 = *param_1;
    puVar9 = (undefined8 *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    if (*piVar4 == 0) {
        puVar9 = (undefined8 *)FUN_14092d590(piVar4);
    }
    if (*piVar4 != 0) {
        return (ushort *)0x0;
    }
    FUN_1407e4830();
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    puVar9[4] = param_2;
    *puVar9 = uVar10;
    *(undefined8 **)(param_3 + 0x10) = puVar9;
    uVar18 = *param_2;
    uVar6 = 0x7d;
    if ((ushort)(uVar18 - 0x8c) < 2) {
        param_2 = param_2 + 1;
        uVar6 = uVar18;
    }
    uVar18 = *param_2;
    puVar13 = param_2 + 2;
    puVar16 = param_2;
    if (((uVar18 == 0x81) || (uVar18 == 0x86)) && (*puVar13 == 0x8b)) {
        *(undefined8 *)(param_3 + 0x10) = *puVar9;
        do {
            puVar13 = param_2 + param_2[1];
            param_2 = param_2 + param_2[1];
        } while (*puVar13 == 0x71);
        return param_2 + 2;
    }
    do {
        puVar1 = puVar16 + puVar16[1];
        puVar16 = puVar16 + puVar16[1];
    } while (*puVar1 == 0x71);
    uVar2 = *puVar16;
    puVar16 = param_2 + param_2[1];
    bVar21 = param_2[param_2[1]] == 0x71;
    if (((uVar18 == 0x81) || (uVar18 == 0x86)) && (bVar21 = *puVar13 != 0x89, *puVar13 == 0x8a)) {
        uVar3 = param_2[3];
        if ((param_1[0x1a] == (int *)0x0) || (uVar3 == 0xffff)) {
            bVar21 = false;
        }
        else {
            iVar17 = param_1[0x1a][6];
            if (iVar17 == 0) {
                bVar21 = uVar3 != 0;
            }
            else {
                bVar21 = uVar3 != *(ushort *)((longlong)param_1[1] + (longlong)iVar17 * 2 + 4);
            }
        }
    }
    if (uVar18 == 0x81) {
        if (1 < (ushort)(param_2[param_2[1]] - 0x73)) goto LAB_14091f6ac;
        uVar18 = 0x86;
        LAB_14091f641:
        local_68 = param_1[2][(longlong)param_2 - (longlong)param_1[1] >> 1];
        *(int *)(puVar9 + 9) = local_68;
        if (uVar18 == 0x7b) {
            uVar7 = FUN_14092ef20(param_1,param_2,0);
            *(undefined4 *)(puVar9 + 8) = uVar7;
        }
    }
    else {
        if (uVar18 == 0x7c) {
            uVar18 = 0x7b;
            goto LAB_14091f641;
        }
        if ((uVar18 == 0x7f) || (uVar18 == 0x84)) {
            uVar3 = *puVar13;
            local_60 = (uint)uVar3 + (uint)uVar3;
            if (*(char *)((ulonglong)uVar3 + (longlong)param_1[3]) == '\0') {
                local_68 = *(int *)(param_1 + 4) + (uint)uVar3 * 8;
            }
            else {
                local_68 = *(int *)((longlong)param_1 + 0x24) + local_60 * 8;
            }
            *(int *)(puVar9 + 9) = local_68;
            puVar13 = param_2 + 3;
        }
        else if (((ushort)(uVar18 - 0x7b) < 0xc) && ((0x881U >> (uVar18 - 0x7b & 0x1f) & 1) != 0))
            goto LAB_14091f641;
    }
    LAB_14091f6ac:
    iVar17 = 0;
    if ((uVar2 == 0x73) || ((uVar2 == 0x74 && (uVar6 != 0x8d)))) {
        iVar17 = 1;
    }
    if (uVar6 == 0x8c) {
        iVar17 = iVar17 + 1;
    }
    if (iVar17 != 0) {
        FUN_14091b4d0();
    }
    iVar17 = 0;
    if ((uVar2 == 0x73) || ((uVar2 == 0x74 && (uVar6 != 0x8d)))) {
        if (*piVar4 == 0) {
            piVar4[0x1a] = 0;
            uVar24 = 0;
            FUN_14092aa10(piVar4,0x102,0xfffffffffffffff8,0x200,0);
        }
        iVar17 = 1;
    }
    if (uVar6 == 0x8c) {
        if (*piVar4 == 0) {
            piVar4[0x1a] = 0;
            uVar24 = 0;
            FUN_14092aa10(piVar4,0x102,(longlong)((-1 - iVar17) * 8),6,0);
        }
        LAB_14091f781:
        if (uVar2 == 0x74) goto LAB_14091f78b;
        if ((uVar2 != 0x73) || (local_58 = FUN_140932570(), !bVar21)) goto LAB_14091f7a4;
        if (uVar18 != 0x7b) {
            if (uVar18 < 0x82) {
                puVar9[5] = local_58;
            }
            goto LAB_14091f7a4;
        }
        LAB_14091f7ae:
        iVar17 = *(int *)(puVar9 + 8);
        if (iVar17 < 0) {
            if (uVar2 == 0x74) {
                uVar10 = CONCAT44(uVar24,0x10b);
                FUN_140932690(piVar4,6,3,0,uVar10,(longlong)local_68);
                uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
                FUN_14091b4d0(param_1);
                uVar10 = CONCAT44(uVar24,6);
                FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar10,0);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),3);
                FUN_140932690(piVar4,6,0x102,0xfffffffffffffff0,uVar10,0);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),2);
                FUN_140932a90(piVar4,0x1b,0x10b,(longlong)local_68,uVar10,0,0x200,8);
                uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            }
            else {
                if ((uVar2 == 0x73) || (bVar21)) {
                    uVar10 = CONCAT44(uVar24,2);
                    FUN_140932690(piVar4,6,0x10b,(longlong)local_68,uVar10,0);
                    uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
                    FUN_14091b4d0(param_1,1);
                    uVar10 = CONCAT44(uVar24,6);
                    puVar20 = (undefined *)0xfffffffffffffff8;
                    goto LAB_14091ffaf;
                }
                puVar20 = (undefined *)(longlong)local_68;
                uVar19 = 0x10b;
                uVar10 = CONCAT44(uVar24,2);
                LAB_14091ffb5:
                FUN_140932690(piVar4,6,uVar19,puVar20,uVar10,0);
                uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            }
        }
        else if (((ushort)(uVar2 - 0x73) < 2) || (bVar21)) {
            FUN_14091b4d0(param_1,iVar17 + 2);
            uVar10 = CONCAT44(uVar24,0x10b);
            FUN_140932690(piVar4,6,1,0,uVar10,(longlong)local_68);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),2);
            FUN_140932a90(piVar4,0x1b,3,0,uVar10,0,0x200,(longlong)(*(int *)(puVar9 + 8) * 8 + 0x10));
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),6);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar10,0);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),3);
            FUN_140932690(piVar4,6,0x10b,(longlong)local_68,uVar10,0);
            uVar23 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff0,uVar23,0);
            uVar23 = uVar23 & 0xffffffff00000000;
            FUN_14092fa70(param_1,param_2,*(int *)(puVar9 + 8) + 1,2,uVar23);
            uVar24 = (undefined4)(uVar23 >> 0x20);
        }
        else {
            FUN_14091b4d0(param_1,iVar17 + 1);
            uVar10 = CONCAT44(uVar24,0x10b);
            FUN_140932690(piVar4,6,1,0,uVar10,(longlong)local_68);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),2);
            FUN_140932a90(piVar4,0x1b,3,0,uVar10,0,0x200,(longlong)(*(int *)(puVar9 + 8) * 8 + 8));
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),3);
            FUN_140932690(piVar4,6,0x10b,(longlong)local_68,uVar10,0);
            uVar23 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar23,0);
            uVar23 = uVar23 & 0xffffffff00000000;
            FUN_14092fa70(param_1,param_2,*(undefined4 *)(puVar9 + 8),1,uVar23);
            uVar24 = (undefined4)(uVar23 >> 0x20);
        }
    }
    else {
        if (uVar6 != 0x8d) goto LAB_14091f781;
        if (*piVar4 == 0) {
            piVar4[0x1a] = 0;
            uVar10 = CONCAT44(uVar24,0x102);
            puVar20 = (undefined *)FUN_14092d140(piVar4,1,6,0,uVar10,0xfffffffffffffff8);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (puVar20 != (undefined *)0x0) {
                *puVar20 = 0x8b;
            }
        }
        if (uVar2 != 0x74) {
            FUN_14092ec50(param_1);
            uVar10 = CONCAT44(uVar24,0x200);
            local_50 = FUN_140931b80(piVar4,0,6,0,uVar10,0);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            goto LAB_14091f781;
        }
        if ((uVar18 == 0x7b) || (0x81 < uVar18)) {
            uVar10 = CONCAT44(uVar24,0x200);
            lVar15 = FUN_140931b80(piVar4,1,6,0,uVar10,0);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x102);
            FUN_140932690(piVar4,6,6,0,uVar10,0xfffffffffffffff0);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            lVar14 = FUN_140932450(piVar4,0x16);
            lVar11 = FUN_140932570(piVar4);
            if ((lVar15 != 0) && (lVar11 != 0)) {
                *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) | 1;
                *(longlong *)(lVar15 + 0x18) = lVar11;
            }
            if ((uVar18 == 0x7b) && (-1 < *(int *)(puVar9 + 8))) {
                uVar10 = CONCAT44(uVar24,0x10b);
                FUN_140932690(piVar4,6,1,0,uVar10,(longlong)local_68);
                lVar15 = (longlong)(*(int *)(puVar9 + 8) + 1) << 3;
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x101);
            }
            else {
                lVar15 = (longlong)local_68;
                uVar10 = CONCAT44(uVar24,0x10b);
            }
            local_50 = FUN_140931b80(piVar4,0,6,0,uVar10,lVar15);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            lVar15 = FUN_140932570(piVar4);
        }
        else {
            uVar10 = CONCAT44(uVar24,0x200);
            lVar14 = FUN_140931b80(piVar4,1,6,0,uVar10,0);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x102);
            FUN_140932690(piVar4,6,6,0,uVar10,0xfffffffffffffff0);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            lVar15 = FUN_140932570(piVar4);
        }
        if ((lVar14 != 0) && (lVar15 != 0)) {
            *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) | 1;
            *(longlong *)(lVar14 + 0x18) = lVar15;
        }
        LAB_14091f78b:
        uVar10 = FUN_140932570();
        puVar9[6] = uVar10;
        LAB_14091f7a4:
        if (uVar18 == 0x7b) goto LAB_14091f7ae;
        if ((uVar18 == 0x7f) || (uVar18 == 0x84)) {
            if (*(char *)(((longlong)local_60 >> 1) + (longlong)param_1[3]) == '\0') {
                FUN_14091b4d0(param_1,3);
                uVar10 = CONCAT44(uVar24,0x10b);
                FUN_140932690(piVar4,6,1,0,uVar10,
                              (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)local_60 * 8);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x10b);
                FUN_140932690(piVar4,6,3,0,uVar10,
                              (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_60 + 1) * 8);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
                FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar10,0);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x10b);
                FUN_140932690(piVar4,6,1,0,uVar10,(longlong)local_68);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),3);
                FUN_140932690(piVar4,6,0x102,0xfffffffffffffff0,uVar10,0);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),6);
                FUN_140932690(piVar4,6,0x10b,(longlong)local_68,uVar10,0);
                puVar20 = &DAT_ffffffffffffffe8;
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
            }
            else {
                FUN_14091b4d0(param_1,2);
                lVar14 = (longlong)local_68;
                uVar10 = CONCAT44(uVar24,0x10b);
                FUN_140932690(piVar4,6,1,0,uVar10,lVar14);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x10b);
                FUN_140932690(piVar4,6,3,0,uVar10,lVar14 + 8);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),6);
                FUN_140932690(piVar4,6,0x10b,lVar14,uVar10,0);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
                FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar10,0);
                uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),3);
                puVar20 = (undefined *)0xfffffffffffffff0;
            }
            LAB_14091ffaf:
            uVar19 = 0x102;
            goto LAB_14091ffb5;
        }
        if ((uVar18 - 0x82 & 0xfffb) == 0) {
            uVar10 = CONCAT44(uVar24,0x10b);
            FUN_140932690(piVar4,6,3,0,uVar10,(longlong)local_68);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            FUN_14091b4d0(param_1,1);
            uVar10 = CONCAT44(uVar24,6);
            FUN_140932690(piVar4,6,0x10b,(longlong)local_68,uVar10,0);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),3);
            puVar20 = (undefined *)0xfffffffffffffff8;
            goto LAB_14091ffaf;
        }
        if (bVar21) {
            FUN_14091b4d0(param_1);
            uVar10 = CONCAT44(uVar24,6);
            FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar10,0);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
    }
    puVar12 = (undefined8 *)0x0;
    if ((uVar18 == 0x81) || (uVar18 == 0x86)) {
        uVar3 = *puVar13;
        if (uVar3 == 0x87) {
            uVar10 = 0x10b;
            lVar14 = (longlong)*(int *)((longlong)param_1 + 0x24) + 8;
            uVar19 = CONCAT44(uVar24,0x10b);
            lVar15 = (longlong)*(int *)((longlong)param_1 + 0x24) +
                     (longlong)(int)((uint)puVar13[1] * 2) * 8;
            LAB_14092048e:
            uVar10 = FUN_140931b80(piVar4,0,uVar10,lVar15,uVar19,lVar14);
            uVar24 = (undefined4)((ulonglong)uVar19 >> 0x20);
            FUN_14091b490(piVar4,puVar9 + 8,uVar10);
            puVar13 = puVar13 + 2;
        }
        else if (uVar3 == 0x88) {
            uVar3 = puVar13[1];
            uVar10 = CONCAT44(uVar24,0x10b);
            lVar14 = FUN_140931b80(piVar4,1,0x10b,
                                   (longlong)*(int *)((longlong)param_1 + 0x24) +
                                   (longlong)(int)((uint)uVar3 + (uint)uVar3) * 8,uVar10,
                    (longlong)*(int *)((longlong)param_1 + 0x24) + 8);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),2);
            FUN_140932690(piVar4,6,0x10b,0x18,uVar10,0);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
            FUN_140932690(piVar4,6,0x10b,0,uVar10,param_1[0x13]);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
            FUN_140932690(piVar4,6,0x10b,8,uVar10,param_1[0x14]);
            uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
            FUN_140932690(piVar4,6,1,0,uVar10,
                          (ulonglong)(longlong)*(int *)((longlong)param_1 + 0x24) >> 3 |
                          (longlong)(int)((uint)uVar3 << 8));
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            FUN_1409337f0(piVar4,2,0);
            uVar10 = CONCAT44(uVar24,0x200);
            FUN_140932690(piVar4,6,3,0,uVar10,param_1[0x12]);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            FUN_1409322b0(piVar4,0x1b,0x200,FUN_1409294f0);
            uVar10 = CONCAT44(uVar24,0x10b);
            FUN_140932690(piVar4,6,2,0,uVar10,0x18);
            uVar19 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
            uVar10 = FUN_140931b80(piVar4,0,1,0,uVar19,0);
            uVar24 = (undefined4)((ulonglong)uVar19 >> 0x20);
            FUN_14091b490(piVar4,puVar9 + 8,uVar10);
            lVar15 = FUN_140932570(piVar4);
            if ((lVar14 != 0) && (lVar15 != 0)) {
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) | 1;
                *(longlong *)(lVar14 + 0x18) = lVar15;
            }
            puVar13 = puVar13 + 2;
        }
        else if ((ushort)(uVar3 - 0x89) < 2) {
            puVar9[8] = 0;
            piVar5 = param_1[0x1a];
            uVar3 = puVar13[1];
            if (piVar5 == (int *)0x0) {
                uVar8 = 0;
            }
            else if (uVar3 == 0xffff) {
                uVar8 = 1;
            }
            else {
                uVar8 = piVar5[6];
                lVar14 = (longlong)(int)uVar8;
                if (uVar8 == 0) {
                    bVar22 = uVar3 == 0;
                }
                else {
                    uVar8 = 0;
                    bVar22 = uVar3 == *(ushort *)((longlong)param_1[1] + lVar14 * 2 + 4);
                }
                uVar8 = uVar8 & 0xffffff00 | (uint)bVar22;
            }
            if (*puVar13 == 0x89) {
                if (uVar8 != 0) goto LAB_1409204b2;
            }
            else {
                if (uVar8 != 0) {
                    LAB_1409204b2:
                    puVar13 = puVar13 + 2;
                    goto LAB_1409204d1;
                }
                if (piVar5 != (int *)0x0) {
                    uVar10 = CONCAT44(uVar24,2);
                    FUN_140932690(piVar4,6,0x10b,0x18,uVar10,0);
                    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
                    FUN_140932690(piVar4,6,0x10b,0,uVar10,param_1[0x13]);
                    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
                    FUN_140932690(piVar4,6,0x10b,8,uVar10,param_1[0x14]);
                    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
                    FUN_140932690(piVar4,6,0x10b,0x10,uVar10,
                                  *(undefined2 *)((longlong)param_1[1] + (longlong)param_1[0x1a][6] * 2 + 4));
                    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
                    FUN_140932690(piVar4,6,1,0,uVar10,uVar3);
                    uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
                    FUN_1409337f0(piVar4,2,0);
                    uVar10 = CONCAT44(uVar24,0x200);
                    FUN_140932690(piVar4,6,3,0,uVar10,param_1[0x12]);
                    uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
                    FUN_1409322b0(piVar4,0x1b,0x200,FUN_1409293f0);
                    uVar10 = CONCAT44(uVar24,0x10b);
                    FUN_140932690(piVar4,6,2,0,uVar10,0x18);
                    lVar15 = 0;
                    lVar14 = 0;
                    uVar19 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
                    uVar10 = 1;
                    goto LAB_14092048e;
                }
            }
            puVar13 = puVar16;
            if (*puVar16 == 0x71) {
                puVar13 = puVar16 + 2;
                puVar16 = puVar16 + puVar16[1];
            }
        }
        else {
            if (*piVar4 == 0) {
                puVar12 = (undefined8 *)FUN_14092d590(piVar4,0x40);
            }
            if (*piVar4 != 0) {
                return (ushort *)0x0;
            }
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[4] = puVar13;
            puVar9[8] = puVar12;
            puVar13 = (ushort *)FUN_14091d1b0(param_1,puVar13,puVar12,1);
        }
    }
    LAB_1409204d1:
    FUN_140925310(param_1,puVar13,puVar16);
    if (*piVar4 != 0) {
        return (ushort *)0x0;
    }
    if (uVar18 == 0x7b) {
        if (*(int *)(puVar9 + 8) < 0) {
            uVar10 = CONCAT44(uVar24,0x10b);
            FUN_140932690(piVar4,6,2,0,uVar10,(longlong)local_68);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (uVar2 == 0x73) {
                uVar10 = 0;
                LAB_140920541:
                uVar19 = CONCAT44(uVar24,0x102);
                FUN_140932690(piVar4,6,3,0,uVar19,uVar10);
                uVar24 = (undefined4)((ulonglong)uVar19 >> 0x20);
            }
            else if (uVar2 == 0x74) {
                uVar10 = CONCAT44(uVar24,0x102);
                FUN_140932690(piVar4,6,0x10b,(longlong)local_68,uVar10,0);
                uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            }
        }
        else {
            if (((ushort)(uVar2 - 0x73) < 2) || (iVar17 = 1, bVar21)) {
                iVar17 = 2;
            }
            uVar10 = CONCAT44(uVar24,0x10b);
            FUN_140932a90(piVar4,0x19,2,0,uVar10,(longlong)local_68,0x200,
                          (longlong)(iVar17 + *(int *)(puVar9 + 8)) << 3);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (uVar2 == 0x73) {
                uVar10 = 0xfffffffffffffff8;
                goto LAB_140920541;
            }
        }
    }
    iVar17 = 0;
    if ((uVar2 != 0x72) || (uVar6 != 0x7d)) {
        iVar17 = 1;
    }
    if ((bVar21) && (uVar18 != 0x7b)) {
        iVar17 = iVar17 + 1;
    }
    if (iVar17 != 0) {
        FUN_14091b4d0(param_1);
    }
    iVar17 = 0;
    if (uVar2 == 0x72) {
        if (uVar6 != 0x7d) {
            uVar10 = CONCAT44(uVar24,0x200);
            goto LAB_140920668;
        }
    }
    else {
        uVar10 = CONCAT44(uVar24,6);
        LAB_140920668:
        FUN_140932690(piVar4,6,0x102,0xfffffffffffffff8,uVar10,0);
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        iVar17 = 1;
    }
    if (bVar21) {
        if (uVar18 != 0x7b) {
            uVar10 = CONCAT44(uVar24,0x200);
            FUN_140932690(piVar4,6,0x102,(longlong)((-1 - iVar17) * 8),uVar10,0);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
        if (uVar2 != 0x73) {
            uVar10 = FUN_140932570(piVar4);
            puVar9[5] = uVar10;
        }
    }
    if (local_60 != 0) {
        uVar10 = CONCAT44(uVar24,0x10b);
        FUN_140932690(piVar4,6,1,0,uVar10,(longlong)local_68);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),6);
        FUN_140932690(piVar4,6,0x10b,
                      (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)(local_60 + 1) * 8,uVar10
                ,0);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
        FUN_140932690(piVar4,6,0x10b,
                      (longlong)*(int *)((longlong)param_1 + 0x24) + (longlong)local_60 * 8,uVar10,0);
        uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    if (uVar2 == 0x73) {
        if ((uVar18 == 0x7b) || (0x81 < uVar18)) {
            if (bVar21) {
                uVar10 = FUN_140932570(piVar4);
                puVar9[5] = uVar10;
            }
            uVar10 = CONCAT44(uVar24,6);
            if (uVar18 == 0x7b) {
                lVar14 = FUN_140931b80(piVar4,1,3,0,uVar10,0);
                uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
                goto LAB_140920812;
            }
            lVar14 = FUN_140931b80(piVar4,1,0x10b,(longlong)local_68,uVar10,0);
            uVar24 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if ((lVar14 != 0) && (local_58 != 0)) {
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) | 1;
                *(longlong *)(lVar14 + 0x18) = local_58;
            }
            if (uVar6 != 0x8c) {
                FUN_14092ec50(param_1,1);
            }
        }
        else {
            lVar14 = FUN_140932450(piVar4,0x16);
            LAB_140920812:
            if ((lVar14 != 0) && (local_58 != 0)) {
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) & 0xfffffffffffffffd;
                *(longlong *)(lVar14 + 0x18) = local_58;
                *(ulonglong *)(lVar14 + 0x10) = *(ulonglong *)(lVar14 + 0x10) | 1;
            }
        }
        uVar10 = FUN_140932570(piVar4);
        puVar9[6] = uVar10;
    }
    if (uVar6 == 0x8c) {
        uVar10 = FUN_140932570();
        puVar9[7] = uVar10;
    }
    else if (uVar6 == 0x8d) {
        lVar14 = *(longlong *)(param_3 + 0x28);
        lVar15 = FUN_140932450(piVar4,0x16);
        if ((lVar15 != 0) && (lVar14 != 0)) {
            *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar15 + 0x10) = *(ulonglong *)(lVar15 + 0x10) | 1;
            *(longlong *)(lVar15 + 0x18) = lVar14;
        }
        if (local_50 != 0) {
            lVar14 = FUN_140932570();
            if (lVar14 != 0) {
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(local_50 + 0x10) = *(ulonglong *)(local_50 + 0x10) | 1;
                *(longlong *)(local_50 + 0x18) = lVar14;
            }
            if ((uVar18 == 0x7b) && (-1 < *(int *)(puVar9 + 8))) {
                FUN_140932690(piVar4,6,2,0,CONCAT44(uVar24,0x10b),(longlong)local_68);
                uVar10 = FUN_140932450(piVar4,0x17);
                FUN_14091b490(piVar4,param_1 + 0x20,uVar10);
            }
            else if (uVar2 == 0x74) {
                if (uVar18 != 0x7b) {
                    FUN_14092ec50(param_1,1);
                }
                goto LAB_14092087b;
            }
        }
    }
    if (((uVar2 != 0x72) && (uVar6 != 0x8d)) || (uVar6 == 0x8c)) {
        FUN_140928600(param_1);
    }
    LAB_14092087b:
    uVar18 = *puVar16;
    while (uVar18 == 0x71) {
        puVar13 = puVar16 + puVar16[1];
        puVar16 = puVar16 + puVar16[1];
        uVar18 = *puVar13;
    }
    return puVar16 + 2;
}
