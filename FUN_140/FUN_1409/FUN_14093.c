//
// Created by flop on 04.04.22.
//
#include "FUN_14094.c"
#include "FUN_14095.c"
#include "../../WildStarTypes.c"


undefined8 FUN_140930010(int **param_1,int param_2,int param_3)

{
    int iVar1;
    int *piVar2;
    longlong *plVar3;
    bool bVar4;
    undefined *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong *local_res8;
    undefined8 in_stack_ffffffffffffffb8;
    undefined4 uVar14;
    ulonglong uVar12;
    undefined8 uVar13;

    uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
    piVar2 = *param_1;
    lVar7 = 0;
    bVar4 = false;
    local_res8 = (longlong *)0x0;
    if (param_2 == 0) {
        if (param_3 == 0) {
            if ((*(int *)((longlong)param_1 + 0x54) - 1U < 2) ||
                (lVar8 = lVar7, 0xff < *(int *)(param_1 + 0xb))) {
                lVar8 = 0;
                bVar4 = true;
            }
            goto LAB_14093038a;
        }
    }
    else {
        lVar8 = 0;
        if (param_3 == 0) goto LAB_14093038a;
    }
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        uVar10 = CONCAT44(uVar14,5);
        puVar5 = (undefined *)FUN_14092d140(piVar2,1,6,0,uVar10,0);
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if (puVar5 != (undefined *)0x0) {
            *puVar5 = 0x89;
        }
    }
    if ((*(int *)((longlong)param_1 + 0x54) == 0) && (0xff < *(int *)(param_1 + 0xb))) {
        lVar9 = FUN_140932570(piVar2);
        uVar10 = CONCAT44(uVar14,6);
        FUN_140932a90(piVar2,0x19,6,0,uVar10,0,0x200,2);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),7);
        lVar8 = FUN_140931b80(piVar2,3,6,0,uVar10,0);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x106);
        FUN_140932690(piVar2,9,1,0,uVar10,0xfffffffffffffffe);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x106);
        FUN_140932690(piVar2,9,3,0,uVar10,0);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
        lVar6 = FUN_140931b80(piVar2,1,1,0,uVar10,
                              (longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
        if ((lVar6 != 0) && (lVar9 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar9;
        }
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x200);
        lVar6 = FUN_140931b80(piVar2,1,3,0,uVar10,*(undefined *)(param_1 + 0xb));
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if ((lVar6 != 0) && (lVar9 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar9;
        }
        lVar9 = FUN_140932570(piVar2);
        if ((lVar8 != 0) && (lVar9 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar9;
        }
        uVar10 = CONCAT44(uVar14,6);
        FUN_140932a90(piVar2,0x1b,0x10b,(longlong)*(int *)(param_1 + 7),uVar10,0,0x200,2);
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    else {
        uVar10 = CONCAT44(uVar14,7);
        lVar8 = FUN_140931b80(piVar2,3,6,0,uVar10,0);
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
        lVar9 = FUN_140932570(piVar2);
        if (*piVar2 == 0) {
            iVar1 = *(int *)(param_1 + 7);
            piVar2[0x1a] = 0;
            uVar14 = 0;
            FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,6,0);
        }
        FUN_1409309e0(param_1);
        FUN_14091c090(param_1,*(undefined4 *)((longlong)param_1 + 0x54),&local_res8,1);
        uVar10 = CONCAT44(uVar14,7);
        lVar6 = FUN_140931b80(piVar2,2,6,0,uVar10,0);
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if ((lVar6 != 0) && (lVar9 != 0)) {
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
            *(longlong *)(lVar6 + 0x18) = lVar9;
        }
        lVar9 = FUN_140932570(piVar2);
        if ((lVar8 != 0) && (lVar9 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar9;
        }
        if (*piVar2 == 0) {
            iVar1 = *(int *)(param_1 + 7);
            piVar2[0x1a] = 0;
            uVar14 = 0;
            FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,6,0);
        }
        lVar9 = FUN_140932570(piVar2);
        for (plVar3 = local_res8; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[1]) {
            lVar6 = *plVar3;
            if ((lVar6 != 0) && (lVar9 != 0)) {
                *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
                *(longlong *)(lVar6 + 0x18) = lVar9;
            }
        }
    }
    uVar10 = CONCAT44(uVar14,5);
    FUN_140932690(piVar2,6,6,0,uVar10,0);
    uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
    LAB_14093038a:
    lVar6 = FUN_140932450(piVar2,0x16);
    lVar9 = lVar7;
    if (bVar4) {
        lVar7 = FUN_140932570(piVar2);
        uVar10 = CONCAT44(uVar14,6);
        FUN_140932a90(piVar2,0x19,6,0,uVar10,0,0x200,2);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),7);
        lVar8 = FUN_140931b80(piVar2,3,6,0,uVar10,0);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x106);
        FUN_140932690(piVar2,9,1,0,uVar10,0);
        uVar12 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),1);
        FUN_140932a90(piVar2,0x21b,0,0,uVar12,0,0x200,*(undefined *)(param_1 + 0xb));
        uVar12 = uVar12 & 0xffffffff00000000;
        FUN_140932fc0(piVar2,6,1,0,uVar12,0,0);
        uVar10 = CONCAT44((int)(uVar12 >> 0x20),1);
        FUN_140932a90(piVar2,0x21,1,0,uVar10,0,0x200,1);
        uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),6);
        FUN_140932a90(piVar2,0x19,6,0,uVar10,0,1,0);
        uVar14 = (undefined4)((ulonglong)uVar10 >> 0x20);
        lVar9 = FUN_140932450(piVar2,0x16);
    }
    uVar10 = FUN_140932570(piVar2);
    if ((bVar4) || (*(int *)((longlong)param_1 + 0x13c) != 0)) {
        uVar13 = CONCAT44(uVar14,0x106);
        FUN_140932690(piVar2,9,1,0,uVar13,0);
        uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
        if (bVar4) {
            uVar13 = CONCAT44(uVar14,0x200);
            lVar11 = FUN_140931b80(piVar2,0,1,0,uVar13,
                                   (longlong)(ulonglong)*(uint *)(param_1 + 0xb) >> 8 & 0xff);
            uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if ((lVar11 != 0) && (lVar7 != 0)) {
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
                *(longlong *)(lVar11 + 0x18) = lVar7;
            }
        }
    }
    uVar13 = CONCAT44(uVar14,6);
    FUN_140932a90(piVar2,0x19,6,0,uVar13,0,0x200,2);
    if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),0x200);
        lVar7 = FUN_140931b80(piVar2,2,1,0,uVar13,0xd800);
        uVar13 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),1);
        FUN_140932a90(piVar2,0x1e,1,0,uVar13,0,0x200,0xfc00);
        uVar12 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),1);
        FUN_140932a90(piVar2,0x21b,0,0,uVar12,0,0x200,0xd800);
        FUN_140932fc0(piVar2,6,1,0,uVar12 & 0xffffffff00000000,0,0);
        FUN_140932a90(piVar2,0x21,1,0,1,0,0x200,1);
        FUN_140932a90(piVar2,0x19,6,0,6,0,1,0);
        lVar11 = FUN_140932570(piVar2);
        if ((lVar7 != 0) && (lVar11 != 0)) {
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar7 + 0x10) = *(ulonglong *)(lVar7 + 0x10) | 1;
            *(longlong *)(lVar7 + 0x18) = lVar11;
        }
    }
    lVar7 = FUN_140932570(piVar2);
    if ((lVar6 != 0) && (lVar7 != 0)) {
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar6 + 0x10) = *(ulonglong *)(lVar6 + 0x10) | 1;
        *(longlong *)(lVar6 + 0x18) = lVar7;
    }
    if (bVar4) {
        lVar7 = FUN_140932570(piVar2);
        if ((lVar8 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar8 + 0x10) = *(ulonglong *)(lVar8 + 0x10) | 1;
            *(longlong *)(lVar8 + 0x18) = lVar7;
        }
        lVar7 = FUN_140932570(piVar2);
        if ((lVar9 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
            *(longlong *)(lVar9 + 0x18) = lVar7;
        }
    }
    return uVar10;
}



undefined2 * FUN_140930750(longlong param_1,undefined2 *param_2)

{
    switch(*param_2) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0x99:
        case 0x9b:
            return param_2 + 1;
        case 0xe:
            if (*(int *)(param_1 + 0x13c) != 0) {
                return (undefined2 *)0x0;
            }
            return param_2 + 1;
        case 0xf:
        case 0x10:
        case 0x68:
        case 0x69:
        case 0x7f:
        case 0x80:
        case 0x84:
        case 0x85:
            return param_2 + 3;
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
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x51:
        case 0x52:
        case 0x53:
            param_2 = param_2 + 2;
            break;
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2d:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x3a:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x47:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x54:
            param_2 = param_2 + 3;
            break;
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x61:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8a:
        case 0x9a:
            return param_2 + 2;
        case 0x6a:
        case 0x6b:
            return param_2 + 0x11;
        case 0x6c:
            return param_2 + (ushort)param_2[1];
        default:
            return (undefined2 *)0x0;
        case 0x8f:
            return param_2 + (ulonglong)(ushort)param_2[1] + 3;
    }
    if ((*(int *)(param_1 + 0x13c) != 0) && ((param_2[-1] & 0xfc00) == 0xd800)) {
        param_2 = param_2 + 1;
    }
    return param_2;
}



void FUN_1409308b0(int **param_1)

{
    int *piVar1;
    int *piVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;

    piVar1 = *param_1;
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        puVar3 = (undefined2 *)FUN_14092d140(piVar1,2,1,0,0x106,0);
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0xb70f;
        }
    }
    if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        lVar4 = FUN_140931b80(piVar1,2,1,0,0x200,0xd800);
        uVar5 = FUN_140932450(piVar1,0x17);
        if ((*piVar1 == 0) &&
            (puVar6 = (undefined8 *)FUN_14092d590(piVar1,0x10), puVar6 != (undefined8 *)0x0)) {
            piVar2 = param_1[0x28];
            *puVar6 = uVar5;
            puVar6[1] = piVar2;
            param_1[0x28] = (int *)puVar6;
        }
        FUN_140932a90(piVar1,0x1b,6,0,6,0,3,0);
        lVar7 = FUN_140932570(piVar1);
        if ((lVar4 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar7;
        }
    }
    return;
}



void FUN_1409309e0(int **param_1)

{
    int *piVar1;
    int *piVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;

    piVar1 = *param_1;
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        puVar3 = (undefined2 *)FUN_14092d140(piVar1,2,1,0,0x106,0);
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0xb70f;
        }
    }
    if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        lVar4 = FUN_140931b80(piVar1,2,1,0,0x200,0xd800);
        uVar5 = FUN_140932450(piVar1,0x17);
        if ((*piVar1 == 0) &&
            (puVar6 = (undefined8 *)FUN_14092d590(piVar1,0x10), puVar6 != (undefined8 *)0x0)) {
            piVar2 = param_1[0x28];
            *puVar6 = uVar5;
            puVar6[1] = piVar2;
            param_1[0x28] = (int *)puVar6;
        }
        lVar7 = FUN_140932570(piVar1);
        if ((lVar4 != 0) && (lVar7 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar7;
        }
    }
    FUN_140932a90(piVar1,0x19,6,0,6,0,0x200,2);
    return;
}



void FUN_140930b10(int **param_1)

{
    int *piVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar7;
    undefined8 uVar5;
    ulonglong uVar6;

    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar5 = CONCAT44(uVar7,0x106);
            puVar2 = (undefined2 *)FUN_14092d140(piVar1,2,3,0,uVar5,0);
            uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0xb70f;
            }
        }
        uVar5 = CONCAT44(uVar7,6);
        FUN_140932a90(piVar1,0x19,6,0,uVar5,0,0x200,2);
        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar7 = 0;
            FUN_14092aa10(piVar1,1,0,0x200,0);
        }
        uVar5 = CONCAT44(uVar7,0x200);
        lVar3 = FUN_140931b80(piVar1,4,3,0,uVar5,0xff);
        uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0x103);
        FUN_140932690(piVar1,7,1,0,uVar5,param_1[0xd]);
        uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
        lVar4 = FUN_140932570(piVar1);
        if ((lVar3 != 0) && (lVar4 != 0)) {
            *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | 1;
            *(longlong *)(lVar3 + 0x18) = lVar4;
        }
        uVar5 = CONCAT44(uVar7,3);
        FUN_140932a90(piVar1,0x1e,3,0,uVar5,0,0x200,0xfc00);
        uVar6 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),3);
        FUN_140932a90(piVar1,0x21b,0,0,uVar6,0,0x200,0xd800);
        FUN_140932fc0(piVar1,6,3,0,uVar6 & 0xffffffff00000000,0,0);
        FUN_140932a90(piVar1,0x21,3,0,3,0,0x200,1);
        FUN_140932a90(piVar1,0x19,6,0,6,0,3,0);
        return;
    }
    uVar5 = CONCAT44(uVar7,0x106);
    FUN_140932690(piVar1,9,3,0,uVar5,0);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),6);
    FUN_140932a90(piVar1,0x19,6,0,uVar5,0,0x200,2);
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar7 = 0;
        FUN_14092aa10(piVar1,1,0,0x200,0);
    }
    lVar3 = FUN_140931b80(piVar1,4,3,0,CONCAT44(uVar7,0x200),0xff);
    FUN_140932690(piVar1,7,1,0,0x103,param_1[0xd]);
    lVar4 = FUN_140932570(piVar1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar3 + 0x10) = *(ulonglong *)(lVar3 + 0x10) | 1;
        *(longlong *)(lVar3 + 0x18) = lVar4;
    }
    return;
}



void FUN_140930e10(int **param_1,uint param_2)

{
    int iVar1;
    int *piVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 in_stack_ffffffffffffffd8;
    undefined8 uVar7;
    undefined4 uVar8;

    piVar2 = *param_1;
    lVar5 = (longlong)(int)param_2;
    uVar7 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20),0x106);
    FUN_140932a90(piVar2,0x1b,1,0,uVar7,0x10,0x200,2);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)param_2 < 8) {
        if (0 < (int)param_2) {
            lVar5 = 0x30;
            uVar6 = (ulonglong)param_2;
            do {
                if (*piVar2 == 0) {
                    iVar1 = *(int *)((longlong)param_1 + 0x24);
                    piVar2[0x1a] = 0;
                    FUN_14092aa10(piVar2,0x10b,iVar1 + lVar5,1,0);
                }
                lVar5 = lVar5 + 8;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else {
        FUN_1409337f0(piVar2,2,0,(longlong)*(int *)((longlong)param_1 + 0x24) + -8);
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            if (lVar5 + 0x80000000U < 0x100000000) {
                uVar7 = CONCAT44(uVar8,3);
                puVar3 = (undefined *)FUN_14092d140(piVar2,1,0x200,lVar5,uVar7,0);
                uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
                if (puVar3 != (undefined *)0x0) {
                    *puVar3 = 199;
                }
            }
            else {
                FUN_14092a980(piVar2,3,lVar5);
            }
        }
        lVar5 = FUN_140932570(piVar2);
        FUN_140932690(piVar2,0xe,0x102,8,CONCAT44(uVar8,1),0);
        FUN_140932a90(piVar2,0x21b,3,0,3,0,0x200,1);
        lVar4 = FUN_140932450(piVar2,1);
        if ((lVar4 != 0) && (lVar5 != 0)) {
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
            *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
            *(longlong *)(lVar4 + 0x18) = lVar5;
        }
    }
    return;
}



void FUN_140930fc0(int **param_1,longlong param_2)

{
    int *piVar1;
    int iVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar6;
    undefined8 uVar5;

    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    piVar1 = *param_1;
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar5 = CONCAT44(uVar6,2);
        puVar3 = (undefined *)FUN_14092d140(piVar1,1,9,0,uVar5,0);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0x89;
        }
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = 0xffffffff;
            FUN_14092aa10(piVar1,1,0,0x200,0xfffffffffffffff4);
            if (*piVar1 == 0) {
                piVar1[0x1a] = 0;
                uVar5 = CONCAT44(uVar6,0x102);
                FUN_14092aee0(piVar1,1,3,0,uVar5,0x38);
                uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
            }
        }
    }
    uVar5 = CONCAT44(uVar6,0x200);
    lVar4 = FUN_140931b80(piVar1,2,3,0,uVar5,2);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((lVar4 != 0) && (param_2 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = param_2;
    }
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar6 = 0;
        FUN_14092aa10(piVar1,6,0,0x102,0x10);
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            uVar6 = 0;
            FUN_14092aa10(piVar1,2,0,0x102,0x20);
        }
    }
    if (*(int *)(param_1 + 10) == 2) {
        iVar2 = *(int *)(param_1 + 6);
    }
    else {
        iVar2 = *(int *)((longlong)param_1 + 0x34);
    }
    if (*piVar1 == 0) {
        lVar4 = (longlong)iVar2 + 0x30;
        piVar1[0x1a] = 0;
        FUN_14092aa10(piVar1,3,0,0x10b,lVar4);
        uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
    }
    uVar5 = CONCAT44(uVar6,7);
    FUN_140932a90(piVar1,0x1b,7,0,uVar5,0,6,0);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),7);
    FUN_140932a90(piVar1,0x23,7,0,uVar5,0,0x200,1);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        uVar5 = CONCAT44(uVar6,7);
        FUN_14092aee0(piVar1,1,0x102,4,uVar5,0);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    FUN_140932a90(piVar1,0x1b,3,0,CONCAT44(uVar6,3),0,6,0);
    FUN_140932a90(piVar1,0x23,3,0,3,0,0x200,1);
    if (*piVar1 == 0) {
        piVar1[0x1a] = 0;
        FUN_14092aee0(piVar1,1,0x102,0,3,0);
    }
    lVar4 = FUN_140932450(piVar1,0x16);
    if ((lVar4 != 0) && (param_2 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = param_2;
    }
    return;
}



undefined8 FUN_140931270(int **param_1,ushort param_2,int param_3,int param_4)

{
    int iVar1;
    int *piVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    uint uVar12;
    uint uVar13;
    undefined8 in_stack_ffffffffffffff98;
    undefined4 uVar15;
    undefined8 uVar14;

    uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    piVar2 = *param_1;
    lVar11 = 0;
    uVar8 = (ulonglong)param_2;
    if (*piVar2 == 0) {
        piVar2[0x1a] = 0;
        puVar3 = (undefined *)FUN_14092d140(piVar2);
        if (puVar3 != (undefined *)0x0) {
            *puVar3 = 0x8b;
        }
    }
    FUN_140932a90(piVar2);
    lVar4 = FUN_140931b80(piVar2);
    lVar5 = FUN_140931b80(piVar2);
    if (param_4 == 0) {
        if (*piVar2 == 0) {
            piVar2[0x1a] = 0;
            uVar15 = 0;
            FUN_14092aa10(piVar2);
        }
    }
    else {
        FUN_140932a90(piVar2);
    }
    lVar6 = FUN_140932570(piVar2);
    uVar7 = FUN_140931b80(piVar2);
    FUN_140932690();
    uVar13 = (uint)param_2;
    if ((param_3 != 0) && (param_2 < 0x100)) {
        uVar13 = (uint)*(byte *)((longlong)param_1[8] + uVar8);
    }
    if (param_2 != uVar13) {
        uVar12 = param_2 ^ uVar13;
        if ((uVar12 & uVar12 - 1) != 0) {
            uVar14 = CONCAT44(uVar15,0x200);
            lVar9 = FUN_140931b80(piVar2,0,3,0,uVar14,uVar8);
            uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),0x200);
            lVar11 = FUN_140931b80(piVar2,0,3,0,uVar14,uVar13);
            uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
            goto LAB_1409314cf;
        }
        uVar14 = CONCAT44(uVar15,3);
        FUN_140932a90(piVar2,0x1f,3,0,uVar14,0,0x200,(ulonglong)uVar12);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar8 = uVar8 | uVar12;
    }
    uVar14 = CONCAT44(uVar15,0x200);
    lVar9 = FUN_140931b80(piVar2,0,3,0,uVar14,uVar8);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
    LAB_1409314cf:
    FUN_140932a90(piVar2,0x19,1,0,CONCAT44(uVar15,1),0,0x200,2);
    lVar10 = FUN_140932450(piVar2,0x16);
    if ((lVar10 != 0) && (lVar6 != 0)) {
        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar10 + 0x10) = *(ulonglong *)(lVar10 + 0x10) | 1;
        *(longlong *)(lVar10 + 0x18) = lVar6;
    }
    lVar6 = FUN_140932570(piVar2);
    if ((lVar9 != 0) && (lVar6 != 0)) {
        *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar9 + 0x10) = *(ulonglong *)(lVar9 + 0x10) | 1;
        *(longlong *)(lVar9 + 0x18) = lVar6;
    }
    if ((lVar11 != 0) && (lVar6 = FUN_140932570(piVar2), lVar6 != 0)) {
        *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar11 + 0x10) = *(ulonglong *)(lVar11 + 0x10) | 1;
        *(longlong *)(lVar11 + 0x18) = lVar6;
    }
    if (*piVar2 == 0) {
        iVar1 = *(int *)(param_1 + 5);
        piVar2[0x1a] = 0;
        FUN_14092aa10(piVar2,0x10b,(longlong)iVar1 + 0x30,1,0);
    }
    lVar11 = FUN_140932570(piVar2);
    if ((lVar5 != 0) && (lVar11 != 0)) {
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar5 + 0x10) = *(ulonglong *)(lVar5 + 0x10) | 1;
        *(longlong *)(lVar5 + 0x18) = lVar11;
    }
    lVar11 = FUN_140932570(piVar2);
    if ((lVar4 != 0) && (lVar11 != 0)) {
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) & 0xfffffffffffffffd;
        *(ulonglong *)(lVar4 + 0x10) = *(ulonglong *)(lVar4 + 0x10) | 1;
        *(longlong *)(lVar4 + 0x18) = lVar11;
    }
    return uVar7;
}



void FUN_140931600(longlong *param_1,longlong param_2)

{
    longlong lVar1;

    if (param_1 != (longlong *)0x0) {
        do {
            lVar1 = *param_1;
            if ((lVar1 != 0) && (param_2 != 0)) {
                *(ulonglong *)(lVar1 + 0x10) = *(ulonglong *)(lVar1 + 0x10) & 0xfffffffffffffffd;
                *(ulonglong *)(lVar1 + 0x10) = *(ulonglong *)(lVar1 + 0x10) | 1;
                *(longlong *)(lVar1 + 0x18) = param_2;
            }
            param_1 = (longlong *)param_1[1];
        } while (param_1 != (longlong *)0x0);
    }
    return;
}



void FUN_140931630(longlong param_1,int param_2,short *param_3)

{
    uint uVar1;
    short *psVar2;
    short *psVar3;
    short *psVar4;
    uint uVar5;
    uint uVar6;

    psVar3 = *(short **)(param_1 + 8);
    if (psVar3 < param_3) {
        uVar5 = 2;
        psVar4 = (short *)0x0;
        do {
            uVar1 = uVar5;
            switch(*psVar3) {
                case 0x21:
                case 0x23:
                case 0x2e:
                case 0x30:
                case 0x3b:
                case 0x3d:
                case 0x48:
                case 0x4a:
                    uVar6 = 0xfffffffe;
                    break;
                case 0x22:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x2f:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x3c:
                case 0x3e:
                case 0x3f:
                case 0x40:
                case 0x49:
                case 0x4b:
                case 0x4c:
                case 0x4d:
                    uVar6 = 0xfffffffe;
                    uVar1 = 1;
                    break;
                case 0x27:
                case 0x28:
                case 0x34:
                case 0x35:
                case 0x41:
                case 0x42:
                case 0x4e:
                case 0x4f:
                    uVar6 = 0xfffffffd;
                    break;
                default:
                    psVar3 = (short *)FUN_140930750();
                    goto LAB_14093181b;
                case 0x55:
                case 0x57:
                    uVar1 = 0;
                    if ((psVar3[1] != 0x11) && (uVar1 = 0, psVar3[1] != 0x16)) {
                        uVar1 = uVar5;
                    }
                    uVar6 = 1;
                    goto LAB_1409317b9;
                case 0x56:
                case 0x58:
                case 0x59:
                case 0x5a:
                    uVar6 = 1;
                    uVar1 = 1;
                    break;
                case 0x5b:
                case 0x5c:
                    uVar1 = 0;
                    uVar6 = uVar5;
                    if ((psVar3[2] != 0x11) && (uVar1 = 0, psVar3[2] != 0x16)) {
                        uVar1 = uVar5;
                    }
                    goto LAB_1409317b9;
                case 0x6a:
                case 0x6b:
                    uVar6 = 0x11;
                    goto LAB_1409317b2;
                case 0x6c:
                    uVar6 = (uint)(ushort)psVar3[1];
                LAB_1409317b2:
                    uVar1 = FUN_14092ee10();
                LAB_1409317b9:
                    if (0 < (int)uVar1) break;
                    goto LAB_1409317d6;
                case 0x77:
                case 0x78:
                case 0x79:
                case 0x7a:
                case 0x7b:
                case 0x7c:
                case 0x7e:
                case 0x82:
                case 0x83:
                case 0x86:
                    *(int *)(*(longlong *)(param_1 + 0x10) +
                             ((longlong)psVar3 - *(longlong *)(param_1 + 8) >> 1) * 4) = param_2;
                    param_2 = param_2 + 8;
                case 0x7d:
                    goto LAB_1409316dc;
                case 0x80:
                case 0x85:
                    *(int *)(*(longlong *)(param_1 + 0x10) +
                             ((longlong)psVar3 - *(longlong *)(param_1 + 8) >> 1) * 4) = param_2;
                    param_2 = param_2 + 8;
                case 0x7f:
                case 0x84:
                    uVar1 = 3;
                    goto LAB_1409316dc;
                case 0x81:
                    if ((ushort)(psVar3[(ushort)psVar3[1]] - 0x73U) < 2) {
                        *(int *)(*(longlong *)(param_1 + 0x10) +
                                 ((longlong)psVar3 - *(longlong *)(param_1 + 8) >> 1) * 4) = param_2;
                        param_2 = param_2 + 8;
                    }
                LAB_1409316dc:
                    psVar2 = psVar3;
                    if (psVar4 <= psVar3) {
                        do {
                            psVar4 = psVar2 + (ushort)psVar2[1];
                            psVar2 = psVar2 + (ushort)psVar2[1];
                        } while (*psVar4 == 0x71);
                        psVar4 = psVar2 + 2;
                        if (*psVar2 == 0x72) {
                            psVar4 = (short *)0x0;
                        }
                    }
                    psVar3 = psVar3 + (int)uVar1;
                    goto LAB_14093181b;
            }
            if (psVar4 <= psVar3) {
                *(int *)(*(longlong *)(param_1 + 0x10) +
                         ((longlong)psVar3 - *(longlong *)(param_1 + 8) >> 1) * 4) = param_2;
                param_2 = param_2 + uVar1 * 8;
            }
            LAB_1409317d6:
            if (uVar6 != 0) {
                if ((int)uVar6 < 0) {
                    psVar3 = psVar3 + (int)-uVar6;
                    if ((*(int *)(param_1 + 0x13c) != 0) && ((psVar3[-1] & 0xfc00U) == 0xd800)) {
                        psVar3 = psVar3 + 1;
                    }
                }
                else {
                    psVar3 = psVar3 + (int)uVar6;
                }
            }
            LAB_14093181b:
        } while (psVar3 < param_3);
    }
    return;
}



void FUN_1409318f0(int **param_1)

{
    int *piVar1;
    undefined2 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;

    piVar1 = *param_1;
    if (*(int *)((longlong)param_1 + 0x13c) == 0) {
        uVar4 = 2;
        uVar3 = 0x200;
    }
    else {
        if (*piVar1 == 0) {
            piVar1[0x1a] = 0;
            puVar2 = (undefined2 *)FUN_14092d140(piVar1,2,1,0,0x106,0xfffffffffffffffe);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0xb70f;
            }
        }
        FUN_140932a90(piVar1,0x1b,6,0,6,0,0x200,2);
        FUN_140932a90(piVar1,0x1e,1,0,1,0,0x200,0xfc00);
        FUN_140932a90(piVar1,0x21b,0,0,1,0,0x200,0xdc00);
        FUN_140932fc0(piVar1,6,1,0,0,0,0);
        FUN_140932a90(piVar1,0x21,1,0,1,0,0x200,1);
        uVar4 = 0;
        uVar3 = 1;
    }
    FUN_140932a90(piVar1,0x1b,6,0,6,0,uVar3,uVar4);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_140931a70(void)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    undefined8 uVar3;
    longlong lVar4;
    bool bVar5;

    puVar2 = (undefined4 *)(*(code *)PTR_FUN_140c1b1e0)(0x70);
    if (puVar2 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
    }
    FUN_1407e4830(puVar2,0,0x70);
    *puVar2 = 0;
    uVar3 = (*(code *)PTR_FUN_140c1b1e0)(0x1000);
    *(undefined8 *)(puVar2 + 0xe) = uVar3;
    lVar4 = (*(code *)PTR_FUN_140c1b1e0)(0x1000);
    puVar1 = *(undefined8 **)(puVar2 + 0xe);
    *(longlong *)(puVar2 + 0x10) = lVar4;
    if (puVar1 != (undefined8 *)0x0) {
        if (lVar4 != 0) {
            bVar5 = _DAT_140c63558 == 0;
            *puVar1 = 0;
            *(undefined8 *)(*(longlong *)(puVar2 + 0xe) + 8) = 0;
            **(undefined8 **)(puVar2 + 0x10) = 0;
            *(undefined8 *)(*(longlong *)(puVar2 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar2 + 0x12) = 0xffffffffffffffff;
            if (bVar5) {
                _DAT_140c63558 = 1;
                _DAT_140c63578 = &DAT_140c63580;
                DAT_140c63580 = 0x80000000;
                DAT_140c63590 = 0x7fffffff;
                DAT_140c635a0 = 0;
                DAT_140c635a4 = 0x80000000;
                DAT_140c635b0 = 0xffffffff;
                DAT_140c635b4 = 0x7fffffff;
            }
            return puVar2;
        }
        if (puVar1 != (undefined8 *)0x0) {
            (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
        }
    }
    if (*(longlong *)(puVar2 + 0x10) != 0) {
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)();
    }
    (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(puVar2);
    return (undefined4 *)0x0;
}



undefined8
FUN_140931b80(int *param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5,
              undefined8 param_6)

{
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;

    if (*param_1 != 0) {
        return 0;
    }
    uVar3 = 0x200;
    uVar4 = param_2 & 0xff;
    uVar2 = param_6;
    uVar5 = param_5;
    if (((param_3 & 0x200) != 0) && ((param_5 & 0x200) == 0)) {
        switch(uVar4) {
            case 2:
                uVar4 = 4;
                break;
            case 3:
                uVar4 = 5;
                break;
            case 4:
                uVar4 = 2;
                break;
            case 5:
                uVar4 = 3;
                break;
            case 6:
                uVar4 = 8;
                break;
            case 7:
                uVar4 = 9;
                break;
            case 8:
                uVar4 = 6;
                break;
            case 9:
                uVar4 = 7;
        }
        param_2 = param_2 & 0x1100;
        uVar2 = param_4;
        param_4 = param_6;
        uVar5 = param_3;
        param_3 = param_5;
    }
    if ((1 < uVar4) && (uVar3 = 0x400, uVar4 < 6)) {
        uVar3 = 0x800;
    }
    iVar1 = FUN_140932a90(param_1,param_2 & 0x100 | uVar3 | 0x1b,0,0,param_3,param_4,uVar5,uVar2);
    if (iVar1 != 0) {
        return 0;
    }
    uVar2 = FUN_140932450(param_1,param_2 & 0x1000 | uVar4);
    return uVar2;
}



int FUN_140931ce0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
    undefined *puVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined2 *puVar4;
    uint uVar5;

    if (*param_1 != 0) {
        return *param_1;
    }
    param_1[0x12] = param_3;
    param_1[0x13] = param_4;
    param_1[0x1b] = 0;
    uVar5 = param_4 * 8 + 8;
    iVar3 = param_4;
    if (3 < param_4) {
        iVar3 = param_4 * 2 + -3;
    }
    if (4 < param_3) {
        iVar3 = iVar3 + 2;
        uVar5 = param_4 * 8 + 0x10;
    }
    iVar3 = iVar3 + param_2 * 3;
    if (0 < iVar3) {
        puVar1 = (undefined *)FUN_14092d610(param_1,(longlong)(iVar3 + 1));
        if (puVar1 == (undefined *)0x0) goto LAB_140931f00;
        *puVar1 = (char)iVar3;
        puVar4 = (undefined2 *)(puVar1 + 1);
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + (longlong)iVar3;
        if (4 < param_4) {
            *puVar4 = 0x5741;
            puVar4 = (undefined2 *)(puVar1 + 3);
        }
        if (3 < param_4) {
            *puVar4 = 0x5641;
            puVar4 = puVar4 + 1;
        }
        if (2 < param_4) {
            *(undefined *)puVar4 = 0x57;
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        }
        if (1 < param_4) {
            *(undefined *)puVar4 = 0x56;
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        }
        if (0 < param_4) {
            *(undefined *)puVar4 = 0x53;
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        }
        if (4 < param_3) {
            *puVar4 = 0x5541;
            puVar4 = puVar4 + 1;
        }
        if (0 < param_2) {
            *puVar4 = 0x8b48;
            *(undefined *)(puVar4 + 1) = 0xd9;
            puVar4 = (undefined2 *)((longlong)puVar4 + 3);
        }
        if (1 < param_2) {
            *puVar4 = 0x8b48;
            *(undefined *)(puVar4 + 1) = 0xf2;
            puVar4 = (undefined2 *)((longlong)puVar4 + 3);
        }
        if (2 < param_2) {
            *puVar4 = 0x8b49;
            *(undefined *)(puVar4 + 1) = 0xf8;
        }
    }
    iVar3 = (param_5 + 0x3f + uVar5 & 0xfffffff0) - uVar5;
    param_1[0x14] = iVar3;
    if (iVar3 < 0x401) {
        LAB_140931f09:
        if (iVar3 < 0x80) {
            puVar1 = (undefined *)FUN_14092d610(param_1,5);
            if (puVar1 == (undefined *)0x0) goto LAB_140931f00;
            *puVar1 = 4;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 4;
            *(undefined2 *)(puVar1 + 1) = 0x8348;
            puVar1[3] = 0xec;
            puVar1[4] = (char)iVar3;
        }
        else {
            puVar1 = (undefined *)FUN_14092d610(param_1,8);
            if (puVar1 == (undefined *)0x0) goto LAB_140931f00;
            *puVar1 = 7;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 7;
            *(undefined2 *)(puVar1 + 1) = 0x8148;
            puVar1[3] = 0xec;
            *(int *)(puVar1 + 4) = iVar3;
        }
        puVar1 = (undefined *)FUN_14092d610(param_1,6);
        if (puVar1 != (undefined *)0x0) {
            *puVar1 = 5;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 5;
            puVar1[1] = 0xf;
            *(undefined4 *)(puVar1 + 2) = 0x20247429;
            return 0;
        }
    }
    else {
        puVar1 = (undefined *)FUN_14092d610(param_1,0xc);
        if (puVar1 == (undefined *)0x0) goto LAB_140931f00;
        *puVar1 = 0xb;
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 0xb;
        *(undefined2 *)(puVar1 + 1) = 0x8348;
        puVar1[3] = 0xec;
        if ((uVar5 & 8) == 0) {
            puVar1[4] = 0x20;
            iVar3 = iVar3 + -0x20;
        }
        else {
            puVar1[4] = 0x28;
            iVar3 = iVar3 + -0x28;
        }
        *(undefined2 *)(puVar1 + 5) = 0xc748;
        puVar1[7] = 0xc0;
        *(int *)(puVar1 + 8) = iVar3;
        if (*param_1 != 0) goto LAB_140931f00;
        if (param_1[0x1b] != 0) {
            param_1[0x1b] = 0;
        }
        puVar1 = (undefined *)FUN_14092d610(param_1,4);
        if (puVar1 == (undefined *)0x0) {
            if (*param_1 != 0) {
                return *param_1;
            }
        }
        else {
            *puVar1 = 3;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 3;
            *(undefined2 *)(puVar1 + 1) = 0x8b48;
            puVar1[3] = 200;
        }
        puVar2 = (undefined8 *)FUN_14092d590(param_1,0x20);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[2] = 2;
            if (*(undefined8 **)(param_1 + 10) == (undefined8 *)0x0) {
                *(undefined8 **)(param_1 + 4) = puVar2;
            }
            else {
                **(undefined8 **)(param_1 + 10) = puVar2;
            }
            *(undefined8 **)(param_1 + 10) = puVar2;
            puVar2[3] = FUN_140933950;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 0xd;
            puVar4 = (undefined2 *)FUN_14092d610(param_1,2);
            if (puVar4 != (undefined2 *)0x0) {
                *puVar4 = 0x1d00;
                goto LAB_140931f09;
            }
        }
        *param_1 = 2;
    }
    LAB_140931f00:
    return *param_1;
}



int FUN_140931fa0(int *param_1,int param_2,longlong param_3)

{
    undefined *puVar1;

    if (*param_1 != 0) {
        return *param_1;
    }
    if (param_2 != 0x10b) {
        if (param_2 == 0) {
            param_2 = 0xc;
        }
        else if (0xc < param_2) goto LAB_140931fbf;
        if ((byte)(&DAT_1409d00e0)[param_2] < 8) {
            puVar1 = (undefined *)FUN_14092d610(param_1,2);
            if (puVar1 != (undefined *)0x0) {
                *puVar1 = 1;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 1;
                puVar1[1] = (&DAT_1409d00f0)[param_2] + 'X';
                return 0;
            }
        }
        else {
            puVar1 = (undefined *)FUN_14092d610(param_1,3);
            if (puVar1 != (undefined *)0x0) {
                *puVar1 = 2;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 2;
                puVar1[1] = 0x41;
                puVar1[2] = (&DAT_1409d00f0)[param_2] + 'X';
                return 0;
            }
        }
        return *param_1;
    }
    param_3 = param_3 + 0x30;
    LAB_140931fbf:
    param_1[0x1a] = 1;
    puVar1 = (undefined *)FUN_14092d140(param_1,1,0,0,param_2,param_3);
    if (puVar1 != (undefined *)0x0) {
        *puVar1 = 0x8f;
        return 0;
    }
    return *param_1;
}



int FUN_1409320b0(int *param_1,uint param_2,longlong param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    if (*param_1 != 0) {
        return *param_1;
    }
    if (param_2 == 0x10b) {
        param_3 = param_3 + 0x30;
    }
    if (((param_2 >> 9 & 1) == 0) || (param_3 + 0x80000000U < 0x100000000)) {
        if (0xc < (int)param_2) {
            if ((param_2 >> 8 & 1) != 0) {
                param_1[0x1a] = 1;
                puVar6 = (undefined *)FUN_14092d140(param_1,1,0,0,param_2,param_3);
                if (puVar6 != (undefined *)0x0) {
                    *puVar6 = 0xff;
                    puVar6[1] = puVar6[1] | 0x30;
                    puVar6 = (undefined *)FUN_14092d610(param_1,2);
                    if (puVar6 != (undefined *)0x0) {
                        *puVar6 = 1;
                        puVar6 = puVar6 + 1;
                        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 1;
                        goto LAB_14093229b;
                    }
                }
                goto LAB_140932276;
            }
            puVar6 = (undefined *)FUN_14092d610(param_1,7);
            if (puVar6 == (undefined *)0x0) goto LAB_140932276;
            *puVar6 = 6;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
            puVar6[1] = 0x68;
            *(int *)(puVar6 + 2) = (int)param_3;
            puVar6 = puVar6 + 6;
            goto LAB_14093229b;
        }
    }
    else {
        lVar2 = *(longlong *)(param_1 + 0xe);
        lVar3 = *(longlong *)(lVar2 + 8);
        uVar1 = lVar3 + 0xb;
        if (uVar1 < 0xff1) {
            *(ulonglong *)(lVar2 + 8) = uVar1;
            puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar2);
            LAB_14093214f:
            if (puVar4 == (undefined8 *)0x0) goto LAB_140932154;
            *(undefined *)puVar4 = 10;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 10;
            *(undefined2 *)((longlong)puVar4 + 1) = 0xba49;
            *(longlong *)((longlong)puVar4 + 3) = param_3;
        }
        else {
            puVar4 = (undefined8 *)(*(code *)PTR_FUN_140c1b1e0)(0x1000);
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = *(undefined8 *)(param_1 + 0xe);
                *(undefined8 **)(param_1 + 0xe) = puVar4;
                puVar4[1] = 0xb;
                puVar4 = puVar4 + 2;
                goto LAB_14093214f;
            }
            *param_1 = 2;
            LAB_140932154:
            if (*param_1 != 0) {
                return *param_1;
            }
        }
        param_2 = 0xc;
    }
    if ((byte)(&DAT_1409d00e0)[(int)param_2] < 8) {
        puVar5 = (undefined *)FUN_14092d610(param_1,3);
        if (puVar5 == (undefined *)0x0) {
            LAB_140932276:
            return *param_1;
        }
        *puVar5 = 2;
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 2;
        puVar6 = puVar5 + 2;
        puVar5[1] = (&DAT_1409d00f0)[(int)param_2] + 'P';
    }
    else {
        puVar5 = (undefined *)FUN_14092d610(param_1,4);
        if (puVar5 == (undefined *)0x0) goto LAB_140932276;
        *puVar5 = 3;
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 3;
        puVar5[1] = 0x41;
        puVar6 = puVar5 + 3;
        puVar5[2] = (&DAT_1409d00f0)[(int)param_2] + 'P';
    }
    LAB_14093229b:
    *puVar6 = 0xc3;
    return 0;
}



int FUN_1409322b0(int *param_1,int param_2,int param_3,longlong param_4)

{
    int iVar1;
    undefined *puVar2;
    undefined8 *puVar3;
    byte bVar4;

    if (*param_1 != 0) {
        return *param_1;
    }
    if (param_3 == 0x10b) {
        param_4 = param_4 + 0x30;
    }
    if (param_1[0x1b] != 0) {
        if (param_2 < 0x17) {
            puVar2 = (undefined *)FUN_14092d610(param_1,7);
            if (puVar2 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 6;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
                *(undefined4 *)(puVar2 + 1) = 0x648d489d;
                *(undefined2 *)(puVar2 + 5) = 0xf824;
                param_1[0x1b] = 0;
            }
        }
        param_1[0x1b] = 0;
    }
    if (0x18 < param_2) {
        if (param_3 == 3) {
            param_3 = 0xc;
            puVar2 = (undefined *)FUN_14092d140(param_1,1,3,0,0xc,0);
            if (puVar2 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return *param_1;
                }
            }
            else {
                *puVar2 = 0x89;
            }
        }
        iVar1 = FUN_14091b870(param_1,param_2);
        if (iVar1 != 0) goto LAB_140932412;
    }
    if (param_3 == 0x200) {
        puVar3 = (undefined8 *)FUN_14092d590(param_1,0x20);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            puVar3[2] = 2;
            if (*(undefined8 **)(param_1 + 10) == (undefined8 *)0x0) {
                *(undefined8 **)(param_1 + 4) = puVar3;
            }
            else {
                **(undefined8 **)(param_1 + 10) = puVar3;
            }
            *(undefined8 **)(param_1 + 10) = puVar3;
            puVar3[3] = param_4;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 0xd;
            puVar2 = (undefined *)FUN_14092d610(param_1,2);
            if (puVar2 != (undefined *)0x0) {
                *puVar2 = 0;
                puVar2[1] = (char)param_2 + '\x04';
                return 0;
            }
        }
        *param_1 = 2;
        return 2;
    }
    param_1[0x1a] = 1;
    puVar2 = (undefined *)FUN_14092d140(param_1,1,0,0,param_3,param_4);
    if (puVar2 != (undefined *)0x0) {
        bVar4 = 0x20;
        if (0x16 < param_2) {
            bVar4 = 0x10;
        }
        *puVar2 = 0xff;
        puVar2[1] = puVar2[1] | bVar4;
        return 0;
    }
    LAB_140932412:
    return *param_1;
}



undefined8 * FUN_140932450(int *param_1,uint param_2)

{
    int iVar1;
    undefined *puVar2;
    undefined8 *puVar3;
    longlong lVar4;

    if (*param_1 != 0) {
        return (undefined8 *)0x0;
    }
    if (param_1[0x1b] != 0) {
        if ((param_2 & 0xff) < 0x17) {
            puVar2 = (undefined *)FUN_14092d610(param_1,7);
            if (puVar2 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return (undefined8 *)0x0;
                }
            }
            else {
                *puVar2 = 6;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
                *(undefined4 *)(puVar2 + 1) = 0x648d489d;
                *(undefined2 *)(puVar2 + 5) = 0xf824;
                param_1[0x1b] = 0;
            }
        }
        param_1[0x1b] = 0;
    }
    puVar3 = (undefined8 *)FUN_14092d590(param_1,0x20);
    if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[2] = (ulonglong)(param_2 & 0x1000);
        if (*(undefined8 **)(param_1 + 10) == (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 4) = puVar3;
        }
        else {
            **(undefined8 **)(param_1 + 10) = puVar3;
        }
        *(undefined8 **)(param_1 + 10) = puVar3;
        if ((0x18 < (param_2 & 0xff)) && (iVar1 = FUN_14091b870(param_1,param_2 & 0xff), iVar1 != 0)) {
            return (undefined8 *)0x0;
        }
        lVar4 = 0xf;
        if (0x15 < (param_2 & 0xff)) {
            lVar4 = 0xd;
        }
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + lVar4;
        puVar2 = (undefined *)FUN_14092d610(param_1,2);
        if (puVar2 != (undefined *)0x0) {
            *puVar2 = 0;
            puVar2[1] = (char)param_2 + '\x04';
            return puVar3;
        }
    }
    *param_1 = 2;
    return (undefined8 *)0x0;
}



undefined8 * FUN_140932570(int *param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined2 *puVar5;

    if (*param_1 != 0) {
        return (undefined8 *)0x0;
    }
    if (param_1[0x1b] == 0) goto LAB_14093260a;
    lVar2 = *(longlong *)(param_1 + 0xe);
    lVar3 = *(longlong *)(lVar2 + 8);
    uVar1 = lVar3 + 7;
    if (uVar1 < 0xff1) {
        *(ulonglong *)(lVar2 + 8) = uVar1;
        puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar2);
        LAB_1409325dc:
        if (puVar4 != (undefined8 *)0x0) {
            *(undefined *)puVar4 = 6;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
            *(undefined4 *)((longlong)puVar4 + 1) = 0x648d489d;
            *(undefined2 *)((longlong)puVar4 + 5) = 0xf824;
            param_1[0x1b] = 0;
            goto LAB_14093260a;
        }
    }
    else {
        puVar4 = (undefined8 *)(*(code *)PTR_FUN_140c1b1e0)(0x1000);
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = *(undefined8 *)(param_1 + 0xe);
            *(undefined8 **)(param_1 + 0xe) = puVar4;
            puVar4[1] = 7;
            puVar4 = puVar4 + 2;
            goto LAB_1409325dc;
        }
        *param_1 = 2;
    }
    if (*param_1 != 0) {
        return (undefined8 *)0x0;
    }
    LAB_14093260a:
    puVar4 = *(undefined8 **)(param_1 + 8);
    if ((puVar4 != (undefined8 *)0x0) && (puVar4[2] == *(longlong *)(param_1 + 0x16))) {
        return puVar4;
    }
    puVar4 = (undefined8 *)FUN_14092d590(param_1,0x18);
    if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[2] = *(undefined8 *)(param_1 + 0x16);
        if (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 2) = puVar4;
        }
        else {
            **(undefined8 **)(param_1 + 8) = puVar4;
        }
        *(undefined8 **)(param_1 + 8) = puVar4;
        puVar5 = (undefined2 *)FUN_14092d610(param_1,2);
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
            return puVar4;
        }
    }
    return (undefined8 *)0x0;
}



ulonglong FUN_140932690(uint *param_1,uint param_2,ulonglong param_3,longlong param_4,uint param_5,
                        ulonglong param_6)

{
    bool bVar1;
    int iVar2;
    undefined *puVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    uint uVar6;
    uint uVar7;
    ulonglong in_stack_ffffffffffffffc8;
    undefined4 uVar8;

    uVar8 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    uVar4 = param_3 & 0xffffffff;
    uVar7 = param_2 & 0x7f00;
    if (*param_1 != 0) {
        return (ulonglong)*param_1;
    }
    if ((uint)param_3 == 0x10b) {
        param_4 = param_4 + 0x30;
    }
    if (param_5 == 0x10b) {
        param_6 = param_6 + 0x30;
    }
    uVar6 = param_2 & 0xffff80ff;
    param_1[0x1a] = param_2 & 0x100;
    if (0xf < uVar6 - 6) {
        if ((param_2 & 0x3e00) != 0) {
            param_1[0x1b] = 0;
        }
        if (uVar6 == 0x16) {
            if ((uVar7 >> 9 & 1) != 0) {
                uVar4 = FUN_14092bc00(param_1,uVar4,param_4,param_5,param_6);
                return uVar4;
            }
            uVar5 = 0x10;
            LAB_140932a22:
            uVar4 = FUN_14092ce50(param_1,uVar5,param_3,param_4,CONCAT44(uVar8,param_5),param_6);
            return uVar4;
        }
        if (uVar6 == 0x17) {
            if ((uVar7 >> 0xe != 0) && (param_1[0x1b] == 0)) {
                puVar3 = (undefined *)FUN_14092d610(param_1,7);
                if (puVar3 == (undefined *)0x0) {
                    if (*param_1 != 0) {
                        return (ulonglong)*param_1;
                    }
                }
                else {
                    *puVar3 = 6;
                    *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
                    *(undefined4 *)(puVar3 + 1) = 0x24648d48;
                    *(undefined2 *)(puVar3 + 5) = 0x9c08;
                    param_1[0x1b] = 1;
                }
            }
            uVar5 = 0x18;
            param_3 = uVar4;
            goto LAB_140932a22;
        }
        if (uVar6 == 0x18) {
            if ((uVar7 >> 0xe != 0) && (param_1[0x1b] == 0)) {
                puVar3 = (undefined *)FUN_14092d610(param_1,7);
                if (puVar3 == (undefined *)0x0) {
                    if (*param_1 != 0) {
                        return (ulonglong)*param_1;
                    }
                }
                else {
                    *puVar3 = 6;
                    *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
                    *(undefined4 *)(puVar3 + 1) = 0x24648d48;
                    *(undefined2 *)(puVar3 + 5) = 0x9c08;
                    param_1[0x1b] = 1;
                }
            }
            uVar4 = FUN_140929830(param_1,uVar7,uVar4,param_4,CONCAT44(uVar8,param_5),param_6);
            return uVar4;
        }
        goto LAB_140932935;
    }
    param_1[0x1a] = 0;
    if ((param_2 & 0x100) == 0) {
        LAB_14093277d:
        bVar1 = false;
        if (0xd < (int)uVar6) {
            LAB_140932782:
            uVar6 = uVar6 - 8;
            bVar1 = true;
        }
    }
    else {
        if ((((int)param_5 < 0xd) && (param_5 == (uint)param_3)) && ((uVar6 - 7 & 0xfffffff4) != 0))
            goto LAB_140932935;
        bVar1 = false;
        if (uVar6 != 0xc) {
            if (uVar6 == 0x14) {
                if ((param_5 >> 8 & 1) == 0) goto LAB_140932782;
                uVar6 = 0x13;
            }
            else {
                if (uVar6 == 0xb) goto LAB_14093275e;
                if (uVar6 != 0x13) goto LAB_14093277d;
            }
            if ((param_5 >> 9 & 1) != 0) {
                uVar6 = 0x14;
            }
            goto LAB_140932782;
        }
        if ((param_5 >> 8 & 1) == 0) goto LAB_14093278b;
        uVar6 = 0xb;
        LAB_14093275e:
        if ((param_5 >> 9 & 1) != 0) {
            uVar6 = 0xc;
            bVar1 = false;
        }
    }
    LAB_14093278b:
    if (((param_5 >> 9 & 1) != 0) && (uVar6 - 7 < 6)) {
        switch(uVar6) {
            case 7:
                param_6 = param_6 & 0xff;
                break;
            case 8:
                param_6 = (ulonglong)(char)param_6;
                break;
            case 9:
                param_6 = param_6 & 0xffff;
                break;
            case 10:
                param_6 = (ulonglong)(short)param_6;
                break;
            case 0xb:
                param_6 = param_6 & 0xffffffff;
                break;
            case 0xc:
                param_6 = (ulonglong)(int)param_6;
        }
    }
    if (((bVar1) && ((param_5 >> 8 & 1) != 0)) &&
        (((param_5 & 0xf) != 0 && ((param_6 != 0 || ((param_5 & 0xf0) != 0)))))) {
        in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
        puVar3 = (undefined *)FUN_14092d140(param_1,1,param_5 & 0xf,0,in_stack_ffffffffffffffc8,param_6)
                ;
        if (puVar3 == (undefined *)0x0) goto LAB_1409328cd;
        param_5 = param_5 & 0x10f;
        *puVar3 = 0x8d;
        param_6 = 0;
    }
    switch(uVar6) {
        case 6:
        case 0xd:
            iVar2 = FUN_14092aa10(param_1,uVar4,param_4,param_5,param_6);
            in_stack_ffffffffffffffc8 = param_6;
            break;
        case 7:
            in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
            iVar2 = FUN_14092ac10(param_1,0,uVar4,param_4,in_stack_ffffffffffffffc8,param_6);
            break;
        case 8:
            in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
            iVar2 = FUN_14092ac10(param_1,1,uVar4,param_4,in_stack_ffffffffffffffc8,param_6);
            break;
        case 9:
            uVar5 = 0;
            goto LAB_14093288e;
        case 10:
            uVar5 = 1;
        LAB_14093288e:
            in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
            iVar2 = FUN_14092ad90(param_1,uVar5,uVar4,param_4,in_stack_ffffffffffffffc8,param_6);
            break;
        case 0xb:
            in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
            iVar2 = FUN_14092aee0(param_1,0,uVar4,param_4,in_stack_ffffffffffffffc8,param_6);
            goto joined_r0x0001409328f2;
        case 0xc:
            in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000 | (ulonglong)param_5;
            iVar2 = FUN_14092aee0(param_1,1,uVar4,param_4,in_stack_ffffffffffffffc8,param_6);
        joined_r0x0001409328f2:
            if (iVar2 != 0) goto LAB_1409328cd;
        default:
            goto switchD_140932832_caseD_8;
    }
    if (iVar2 == 0) {
        switchD_140932832_caseD_8:
        if ((((bVar1) && (((uint)uVar4 >> 8 & 1) != 0)) && ((param_3 & 0xf) != 0)) &&
            ((param_4 != 0 || ((param_3 & 0xf0) != 0)))) {
            puVar3 = (undefined *)
                    FUN_14092d140(param_1,1,(uint)uVar4 & 0xf,0,
                                  in_stack_ffffffffffffffc8 & 0xffffffff00000000 | uVar4,param_4);
            if (puVar3 == (undefined *)0x0) {
                LAB_1409328cd:
                return (ulonglong)*param_1;
            }
            *puVar3 = 0x8d;
        }
        LAB_140932935:
        uVar4 = 0;
    }
    else {
        uVar4 = (ulonglong)*param_1;
    }
    return uVar4;
}



ulonglong FUN_140932a90(uint *param_1,uint param_2,int param_3,longlong param_4,int param_5,
                        longlong param_6,uint param_7,longlong param_8)

{
    int iVar1;
    undefined *puVar2;
    ulonglong uVar3;

    if (*param_1 != 0) {
        return (ulonglong)*param_1;
    }
    if (param_3 == 0x10b) {
        param_4 = param_4 + 0x30;
    }
    if (param_5 == 0x10b) {
        param_6 = param_6 + 0x30;
    }
    if (param_7 == 0x10b) {
        param_8 = param_8 + 0x30;
    }
    param_1[0x1a] = param_2 & 0x100;
    if (0x1c < (int)(param_2 & 0xffff80ff)) {
        if ((param_2 & 0x3e00) == 0) {
            if (((param_2 >> 0xe & 1) != 0) && (param_1[0x1b] == 0)) {
                puVar2 = (undefined *)FUN_14092d610(param_1,7);
                if (puVar2 == (undefined *)0x0) {
                    if (*param_1 != 0) {
                        return (ulonglong)*param_1;
                    }
                }
                else {
                    *puVar2 = 6;
                    *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
                    *(undefined4 *)(puVar2 + 1) = 0x24648d48;
                    *(undefined2 *)(puVar2 + 5) = 0x9c08;
                    param_1[0x1b] = 1;
                }
            }
        }
        else {
            param_1[0x1b] = 0;
        }
    }
    switch(param_2 & 0xffff80ff) {
        case 0x19:
            if ((param_2 & 0x3e00) == 0) {
                iVar1 = FUN_14092a7d0(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
                if (iVar1 != 4) {
                    return (ulonglong)*param_1;
                }
            }
            else {
                param_1[0x1b] = 0;
            }
            if ((((param_2 >> 0xe & 1) == 0) || (param_1[0x1b] != 0)) ||
                (iVar1 = FUN_14092bf90(param_1), iVar1 == 0)) {
                uVar3 = FUN_140929f50(param_1,3,1,0,5,param_3,param_4,param_5,param_6,param_7,param_8);
                return uVar3;
            }
            goto LAB_140932d82;
        case 0x1a:
            if (param_1[0x1b] == 0) {
                if (((param_2 >> 0xe & 1) != 0) && (iVar1 = FUN_14092bf90(param_1), iVar1 != 0))
                    goto LAB_140932d82;
            }
            else {
                iVar1 = FUN_14092bf40(param_1,1);
                if (iVar1 != 0) {
                    return (ulonglong)*param_1;
                }
            }
            if ((param_2 & 0x3e00) != 0) {
                param_1[0x1b] = 0;
            }
            uVar3 = FUN_140929f50(param_1,0x13,0x11,0x10,0x15,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
            break;
        case 0x1b:
            if ((param_2 & 0x3e00) == 0) {
                if (((param_7 >> 9 & 1) != 0) &&
                    (iVar1 = FUN_14092a7d0(param_1,param_3,param_4,param_5,param_6,0x200,-param_8), iVar1 != 4)
                        ) {
                    return (ulonglong)*param_1;
                }
            }
            else {
                param_1[0x1b] = 0;
            }
            if ((((param_2 >> 0xe & 1) == 0) || (param_1[0x1b] != 0)) ||
                (iVar1 = FUN_14092bf90(param_1), iVar1 == 0)) {
                if (param_3 == 0) {
                    uVar3 = FUN_140929c10(param_1,param_5,param_6,param_7,param_8);
                    return uVar3;
                }
                uVar3 = FUN_14092b530(param_1,0x2b,0x29,0x28,0x2d,param_3,param_4,param_5,param_6,param_7,
                                      param_8);
                return uVar3;
            }
        LAB_140932d82:
            uVar3 = (ulonglong)*param_1;
            break;
        case 0x1c:
            if (param_1[0x1b] == 0) {
                if ((param_2 >> 0xe & 1) != 0) {
                    iVar1 = FUN_14092bf90(param_1);
                    goto joined_r0x000140932d99;
                }
            }
            else {
                iVar1 = FUN_14092bf40(param_1,1);
                joined_r0x000140932d99:
                if (iVar1 != 0) goto LAB_140932d82;
            }
            if ((param_2 & 0x3e00) != 0) {
                param_1[0x1b] = 0;
            }
            uVar3 = FUN_14092b530(param_1,0x1b,0x19,0x18,0x1d,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
            break;
        case 0x1d:
            uVar3 = FUN_14092b0a0(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
            break;
        case 0x1e:
            if (param_3 == 0) {
                uVar3 = FUN_14092cb80(param_1,param_5,param_6,param_7,param_8);
            }
            else {
                uVar3 = FUN_140929f50(param_1,0x140000023,0x21,0x20,0x25,param_3,param_4,param_5,param_6,
                                      param_7,param_8);
            }
            break;
        case 0x1f:
            uVar3 = FUN_140929f50(param_1,0x14000000b,9,8,0xd,param_3,param_4,param_5,param_6,param_7,
                                  param_8);
            break;
        case 0x20:
            uVar3 = FUN_140929f50(param_1,0x140000033,0x31,0x30,0x35,param_3,param_4,param_5,param_6,param_7
                    ,param_8);
            break;
        case 0x21:
            uVar3 = FUN_14092c8a0(param_1,0x140000020,param_2 & 0x3e00,param_3,param_4,param_5,param_6,
                                  param_7,param_8);
            break;
        case 0x22:
            uVar3 = FUN_14092c8a0(param_1,0x140000028,param_2 & 0x3e00,param_3,param_4,param_5,param_6,
                                  param_7,param_8);
            break;
        case 0x23:
            uVar3 = FUN_14092c8a0(param_1,0x140000038,param_2 & 0x3e00,param_3,param_4,param_5,param_6,
                                  param_7,param_8);
            break;
        default:
            uVar3 = 0;
    }
    return uVar3;
}



ulonglong FUN_140932fc0(uint *param_1,uint param_2,int param_3,longlong param_4,undefined8 param_5,
                        undefined8 param_6,undefined4 param_7)

{
    char cVar1;
    byte bVar2;
    undefined *puVar3;
    ulonglong uVar4;
    int iVar5;

    uVar4 = (ulonglong)*param_1;
    if (*param_1 == 0) {
        if (param_3 == 0) {
            return uVar4;
        }
        if (param_3 == 0x10b) {
            param_4 = param_4 + 0x30;
        }
        if (param_1[0x1b] != 0) {
            puVar3 = (undefined *)FUN_14092d610(param_1,7);
            if (puVar3 == (undefined *)0x0) {
                if (*param_1 != 0) {
                    return (ulonglong)*param_1;
                }
            }
            else {
                *puVar3 = 6;
                *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 6;
                *(undefined4 *)(puVar3 + 1) = 0x648d489d;
                *(undefined2 *)(puVar3 + 5) = 0xf824;
                param_1[0x1b] = param_2 & 0x4000;
            }
        }
        cVar1 = FUN_14092f340(param_7);
        if ((param_2 != 6) || (iVar5 = param_3, 0xc < param_3)) {
            iVar5 = 0xc;
        }
        puVar3 = (undefined *)FUN_14092d610(param_1,9);
        if (puVar3 == (undefined *)0x0) {
            uVar4 = (ulonglong)*param_1;
        }
        else {
            *puVar3 = 8;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 8;
            puVar3[1] = (7 < (byte)(&DAT_1409d00e0)[iVar5]) + '@';
            puVar3[2] = 0xf;
            puVar3[3] = cVar1 + '\x10';
            puVar3[4] = (&DAT_1409d00f0)[iVar5] | 0xc0;
            bVar2 = 0x45;
            if ((byte)(&DAT_1409d00e0)[iVar5] < 8) {
                bVar2 = 0;
            }
            puVar3[5] = bVar2 | 0x48;
            *(undefined2 *)(puVar3 + 6) = 0xb60f;
            puVar3[8] = ((&DAT_1409d00f0)[iVar5] | 0xf8) << 3 | (&DAT_1409d00f0)[iVar5];
            if (iVar5 == 0xc) {
                if ((int)(param_2 & 0xffff80ff) < 0x19) {
                    param_1[0x1a] = (uint)((param_2 & 0xffff80ff) != 6);
                    puVar3 = (undefined *)FUN_14092d140(param_1,1,0xc,0,param_3,param_4);
                    if (puVar3 == (undefined *)0x0) {
                        uVar4 = (ulonglong)*param_1;
                    }
                    else {
                        *puVar3 = 0x89;
                        uVar4 = 0;
                    }
                }
                else {
                    uVar4 = FUN_140932a90(param_1,param_2,param_3,param_4,param_3,param_4,0xc,0);
                }
            }
            else {
                uVar4 = 0;
            }
        }
    }
    return uVar4;
}



int FUN_1409331a0(int *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
    int iVar1;
    int iVar2;
    undefined *puVar3;
    undefined2 *puVar4;

    iVar2 = *param_1;
    if (iVar2 == 0) {
        param_1[0x1b] = 0;
        iVar2 = (int)param_2;
        if ((iVar2 != 0) && ((param_3 != 1 || ((iVar2 != 6 && (iVar2 != 0xd)))))) {
            iVar2 = FUN_140932690(param_1,param_2,1,0,param_3,param_4);
            if (iVar2 != 0) goto LAB_1409331e4;
        }
        puVar3 = (undefined *)FUN_14092d610(param_1,6);
        if (puVar3 == (undefined *)0x0) {
            LAB_1409331e4:
            return *param_1;
        }
        *puVar3 = 5;
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 5;
        puVar3[1] = 0xf;
        *(undefined4 *)(puVar3 + 2) = 0x20247428;
        if (param_1[0x14] < 0x80) {
            puVar3 = (undefined *)FUN_14092d610(param_1,5);
            if (puVar3 == (undefined *)0x0) goto LAB_1409331e4;
            *puVar3 = 4;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 4;
            *(undefined2 *)(puVar3 + 1) = 0x8348;
            puVar3[3] = 0xc4;
            puVar3[4] = *(undefined *)(param_1 + 0x14);
        }
        else {
            puVar3 = (undefined *)FUN_14092d610(param_1,8);
            if (puVar3 == (undefined *)0x0) goto LAB_1409331e4;
            *puVar3 = 7;
            *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 7;
            *(undefined2 *)(puVar3 + 1) = 0x8148;
            puVar3[3] = 0xc4;
            *(int *)(puVar3 + 4) = param_1[0x14];
        }
        iVar1 = param_1[0x13];
        iVar2 = iVar1 + 1;
        if (3 < iVar1) {
            iVar2 = iVar1 * 2 + -2;
        }
        if (4 < param_1[0x12]) {
            iVar2 = iVar2 + 2;
        }
        puVar3 = (undefined *)FUN_14092d610(param_1,(longlong)(iVar2 + 1));
        if (puVar3 == (undefined *)0x0) {
            return *param_1;
        }
        *puVar3 = (char)iVar2;
        puVar4 = (undefined2 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + (longlong)iVar2;
        if (4 < param_1[0x12]) {
            *puVar4 = 0x5d41;
            puVar4 = (undefined2 *)(puVar3 + 3);
        }
        if (0 < param_1[0x13]) {
            *(undefined *)puVar4 = 0x5b;
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        }
        if (1 < param_1[0x13]) {
            *(undefined *)puVar4 = 0x5e;
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        }
        if (2 < param_1[0x13]) {
            *(undefined *)puVar4 = 0x5f;
            puVar4 = (undefined2 *)((longlong)puVar4 + 1);
        }
        if (3 < param_1[0x13]) {
            *puVar4 = 0x5e41;
            puVar4 = puVar4 + 1;
        }
        if (4 < param_1[0x13]) {
            *puVar4 = 0x5f41;
            puVar4 = puVar4 + 1;
        }
        *(undefined *)puVar4 = 0xc3;
        iVar2 = 0;
    }
    return iVar2;
}



void FUN_140933320(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    puVar2 = *(undefined8 **)(param_1 + 0x38);
    while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar2;
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(puVar2);
        puVar2 = puVar1;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar2;
        (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(puVar2);
        puVar2 = puVar1;
    }
    // WARNING: Could not recover jumptable at 0x00014093337e. Too many branches
    // WARNING: Treating indirect jump as call
    (*(code *)PTR_thunk_FUN_140001e60_140c1b1e8)(param_1);
    return;
}



void FUN_140933390(longlong **param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    longlong **lpAddress;
    longlong lVar6;

    if (DAT_140c63540 == (HANDLE)0x0) {
        DAT_140c63540 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,(LPCSTR)0x0);
    }
    else {
        WaitForSingleObject(DAT_140c63540,0xffffffff);
    }
    plVar3 = param_1[-2];
    lpAddress = param_1 + -2;
    lVar6 = DAT_140c63568 - (longlong)plVar3;
    pplVar5 = (longlong **)((longlong)lpAddress - (longlong)param_1[-1]);
    DAT_140c63568 = lVar6;
    if (*pplVar5 == (longlong *)0x0) {
        pplVar5[4] = (longlong *)((longlong)pplVar5[4] + (longlong)plVar3);
        pplVar4 = pplVar5 + 4;
        *(longlong **)((longlong)(pplVar5[4] + 1) + (longlong)pplVar5) = pplVar5[4];
        lpAddress = pplVar5;
        pplVar5 = DAT_140c63560;
    }
    else {
        pplVar4 = param_1 + 2;
        *pplVar4 = plVar3;
        *lpAddress = (longlong *)0x0;
        *param_1 = (longlong *)DAT_140c63560;
        param_1[1] = (longlong *)0x0;
        pplVar5 = lpAddress;
        if (DAT_140c63560 != (longlong **)0x0) {
            DAT_140c63560[3] = (longlong *)lpAddress;
        }
    }
    DAT_140c63560 = pplVar5;
    plVar1 = *pplVar4;
    plVar3 = (longlong *)((longlong)plVar1 + (longlong)lpAddress);
    if (*(longlong *)((longlong)plVar1 + (longlong)lpAddress) == 0) {
        *pplVar4 = (longlong *)((longlong)plVar1 + plVar3[4]);
        if (plVar3[2] != 0) {
            *(longlong *)(plVar3[2] + 0x18) = plVar3[3];
        }
        pplVar5 = (longlong **)plVar3[2];
        if (plVar3[3] != 0) {
            *(longlong ***)(plVar3[3] + 0x10) = (longlong **)plVar3[2];
            pplVar5 = DAT_140c63560;
        }
        DAT_140c63560 = pplVar5;
        plVar3 = *pplVar4;
        *(longlong **)((longlong)(plVar3 + 1) + (longlong)lpAddress) = plVar3;
        plVar3 = (longlong *)((longlong)plVar3 + (longlong)lpAddress);
    }
    if (((lpAddress[1] == (longlong *)0x0) && (*plVar3 == 1)) &&
        (uVar2 = DAT_140c63570 - (longlong)*pplVar4, (ulonglong)(lVar6 * 3) >> 1 < uVar2)) {
        DAT_140c63570 = uVar2;
        if (lpAddress[2] != (longlong *)0x0) {
            lpAddress[2][3] = (longlong)lpAddress[3];
        }
        pplVar5 = (longlong **)lpAddress[2];
        if (lpAddress[3] != (longlong *)0x0) {
            lpAddress[3][2] = (longlong)lpAddress[2];
            pplVar5 = DAT_140c63560;
        }
        DAT_140c63560 = pplVar5;
        VirtualFree(lpAddress,0,0x8000);
    }
    // WARNING: Could not recover jumptable at 0x0001409334e8. Too many branches
    // WARNING: Treating indirect jump as call
    ReleaseMutex(DAT_140c63540);
    return;
}



longlong * FUN_1409334f0(int *param_1)

{
    longlong *plVar1;
    byte bVar2;
    longlong **pplVar3;
    longlong lVar4;
    ulonglong uVar5;
    char cVar6;
    undefined uVar7;
    undefined uVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong **pplVar11;
    longlong lVar12;
    longlong **pplVar13;
    longlong *plVar14;
    longlong *plVar15;
    undefined8 *puVar16;
    byte *pbVar17;
    longlong *plVar18;
    int iVar19;
    undefined8 *puVar20;
    undefined8 *puVar21;

    if (*param_1 != 0) {
        return (longlong *)0x0;
    }
    pplVar3 = *(longlong ***)(param_1 + 0xe);
    pplVar13 = (longlong **)0x0;
    do {
        pplVar11 = pplVar3;
        pplVar3 = (longlong **)*pplVar11;
        *pplVar11 = (longlong *)pplVar13;
        pplVar13 = pplVar11;
    } while (pplVar3 != (longlong **)0x0);
    *(longlong ***)(param_1 + 0xe) = pplVar11;
    plVar9 = (longlong *)FUN_1409339a0();
    if (plVar9 == (longlong *)0x0) {
        *param_1 = 3;
        return (longlong *)0x0;
    }
    plVar10 = *(longlong **)(param_1 + 0xe);
    puVar16 = *(undefined8 **)(param_1 + 6);
    puVar20 = *(undefined8 **)(param_1 + 4);
    puVar21 = *(undefined8 **)(param_1 + 2);
    plVar15 = plVar9;
    do {
        plVar18 = plVar10 + 2;
        plVar1 = (longlong *)((longlong)plVar18 + plVar10[1]);
        plVar14 = plVar15;
        do {
            uVar8 = 0xd1;
            bVar2 = *(byte *)plVar18;
            pbVar17 = (byte *)((longlong)plVar18 + 1);
            if (bVar2 == 0) {
                bVar2 = *pbVar17;
                if (bVar2 < 4) {
                    plVar15 = plVar14;
                    if (bVar2 == 0) {
                        puVar21[1] = plVar14;
                        puVar21[2] = (longlong)plVar14 - (longlong)plVar9;
                        puVar21 = (undefined8 *)*puVar21;
                    }
                    else if (bVar2 == 1) {
                        puVar16[1] = plVar14 + -1;
                        puVar16 = (undefined8 *)*puVar16;
                    }
                    else {
                        lVar4 = *(longlong *)((longlong)plVar18 + 2);
                        lVar12 = lVar4 - (longlong)plVar14;
                        if (lVar12 + 0x7ffffffbU < 0x100000000) {
                            *(char *)plVar14 = (bVar2 != 2) + -0x18;
                            plVar15 = (longlong *)((longlong)plVar14 + 1);
                            *plVar15 = lVar12 + -5;
                        }
                        else {
                            *(undefined2 *)plVar14 = 0xb949;
                            *(longlong *)((longlong)plVar14 + 2) = lVar4;
                            *(undefined2 *)((longlong)plVar14 + 10) = 0xff41;
                            uVar8 = 0xe1;
                            if (bVar2 == 2) {
                                uVar8 = 0xd1;
                            }
                            plVar15 = (longlong *)((longlong)plVar14 + 0xd);
                            *(undefined *)((longlong)plVar14 + 0xc) = uVar8;
                        }
                        pbVar17 = (byte *)((longlong)plVar18 + 9);
                    }
                }
                else {
                    puVar20[1] = plVar14;
                    if ((*(uint *)(puVar20 + 2) >> 0xc & 1) == 0) {
                        plVar15 = (longlong *)FUN_14092ed20();
                        puVar20 = (undefined8 *)*puVar20;
                    }
                    else {
                        iVar19 = *pbVar17 - 4;
                        plVar15 = plVar14;
                        if (iVar19 < 0x16) {
                            uVar8 = 0xd1;
                            cVar6 = FUN_14092f340();
                            plVar15 = (longlong *)((longlong)plVar14 + 2);
                            *(char *)plVar14 = cVar6 + -0x10;
                            *(undefined *)((longlong)plVar14 + 1) = 0xd;
                        }
                        *(undefined2 *)plVar15 = 0xb949;
                        puVar20[1] = (undefined8 *)((longlong)plVar15 + 2);
                        if ((puVar20[2] & 1) == 0) {
                            *(undefined8 *)((longlong)plVar15 + 2) = puVar20[3];
                        }
                        else {
                            puVar20[2] = puVar20[2] | 0x10;
                        }
                        *(undefined2 *)((longlong)plVar15 + 10) = 0xff41;
                        uVar7 = 0xe1;
                        if (0x16 < iVar19) {
                            uVar7 = uVar8;
                        }
                        *(undefined *)((longlong)plVar15 + 0xc) = uVar7;
                        puVar20 = (undefined8 *)*puVar20;
                        plVar15 = (longlong *)((longlong)plVar15 + 0xd);
                    }
                }
                plVar18 = (longlong *)(pbVar17 + 1);
            }
            else {
                FUN_1407db590();
                plVar15 = (longlong *)((longlong)plVar14 + (ulonglong)bVar2);
                plVar18 = (longlong *)(pbVar17 + bVar2);
            }
            plVar14 = plVar15;
        } while (plVar18 < plVar1);
        plVar10 = (longlong *)*plVar10;
    } while (plVar10 != (longlong *)0x0);
    for (puVar20 = *(undefined8 **)(param_1 + 4); puVar20 != (undefined8 *)0x0;
         puVar20 = (undefined8 *)*puVar20) {
        uVar5 = puVar20[2];
        if ((uVar5 & 4) == 0) {
            if ((uVar5 & 8) == 0) {
                if ((uVar5 & 0x10) != 0) {
                    *(undefined8 *)puVar20[1] = *(undefined8 *)(puVar20[3] + 8);
                }
            }
            else if ((uVar5 & 1) == 0) {
                *(int *)puVar20[1] = (*(int *)(puVar20 + 3) - *(int *)(puVar20 + 1)) + -4;
            }
            else {
                *(int *)puVar20[1] = (*(int *)(puVar20[3] + 8) - *(int *)(puVar20 + 1)) + -4;
            }
        }
        else {
            *(char *)puVar20[1] = (*(char *)(puVar20[3] + 8) - *(char *)(puVar20 + 1)) + -1;
        }
    }
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x16);
    return plVar9;
}



ulonglong FUN_1409337f0(uint *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong in_stack_ffffffffffffffd8;
    undefined8 uVar8;

    uVar6 = param_2 & 0xffffffff;
    if (*param_1 != 0) {
        return (ulonglong)*param_1;
    }
    if ((int)param_2 == 0x10b) {
        param_3 = param_3 + 0x30;
    }
    lVar7 = param_4 + 0x30;
    param_1[0x1a] = 0;
    if (param_4 + 0x80000030U < 0x100000000) {
        if (lVar7 == 0) {
            if ((int)param_2 == 0) {
                return 0;
            }
            puVar4 = (undefined *)
                    FUN_14092d140(param_1,1,0xb,0,
                                  in_stack_ffffffffffffffd8 & 0xffffffff00000000 | param_2 & 0xffffffff,
                                  param_3);
            if (puVar4 == (undefined *)0x0) {
                return (ulonglong)*param_1;
            }
            *puVar4 = 0x89;
            return 0;
        }
        uVar8 = 0x200;
        uVar6 = param_2;
        goto LAB_140933917;
    }
    lVar2 = *(longlong *)(param_1 + 0xe);
    lVar3 = *(longlong *)(lVar2 + 8);
    uVar1 = lVar3 + 0xb;
    if (uVar1 < 0xff1) {
        *(ulonglong *)(lVar2 + 8) = uVar1;
        puVar5 = (undefined8 *)(lVar3 + 0x10 + lVar2);
        LAB_1409338e9:
        if (puVar5 == (undefined8 *)0x0) goto LAB_1409338ee;
        *(undefined *)puVar5 = 10;
        *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 0x16) + 10;
        *(undefined2 *)((longlong)puVar5 + 1) = 0xba49;
        *(longlong *)((longlong)puVar5 + 3) = lVar7;
    }
    else {
        puVar5 = (undefined8 *)(*(code *)PTR_FUN_140c1b1e0)(0x1000);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = *(undefined8 *)(param_1 + 0xe);
            *(undefined8 **)(param_1 + 0xe) = puVar5;
            puVar5[1] = 0xb;
            puVar5 = puVar5 + 2;
            goto LAB_1409338e9;
        }
        *param_1 = 2;
        LAB_1409338ee:
        if (*param_1 != 0) {
            return (ulonglong)*param_1;
        }
    }
    lVar7 = 0;
    uVar8 = 0xc;
    LAB_140933917:
    uVar6 = FUN_14092a7d0(param_1,uVar6,param_3,0xb,0,uVar8,lVar7);
    return uVar6;
}



void FUN_140933950(void)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 auStack64 [5];
    ulonglong local_18 [2];

    local_18[0] = DAT_140c0f7b0 ^ (ulonglong)local_18;
    auStack64[0] = 0x140933985;
    lVar1 = FUN_1407f0f60();
    uVar2 = local_18[0] ^ (ulonglong)local_18;
    *(undefined8 *)((longlong)auStack64 - lVar1) = 0x140933994;
    FUN_1407db4f0(uVar2);
    return;
}



ulonglong * FUN_1409339a0(ulonglong param_1)

{
    ulonglong *puVar1;
    HANDLE hMutex;
    ulonglong *puVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if (DAT_140c63540 == (HANDLE)0x0) {
        DAT_140c63540 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,(LPCSTR)0x0);
    }
    else {
        WaitForSingleObject(DAT_140c63540,0xffffffff);
    }
    hMutex = DAT_140c63540;
    if (param_1 < 0x28) {
        param_1 = 0x28;
    }
    uVar5 = param_1 + 0x17 & 0xfffffffffffffff8;
    for (puVar2 = DAT_140c63560; puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[2]) {
        if (uVar5 <= puVar2[4]) {
            uVar4 = puVar2[4];
            if (uVar5 + 0x40 < uVar4) {
                uVar4 = uVar4 - uVar5;
                puVar2[4] = uVar4;
                puVar2 = (ulonglong *)((longlong)puVar2 + uVar4);
                puVar2[1] = uVar4;
                *(ulonglong *)((longlong)puVar2 + uVar5 + 8) = uVar5;
                uVar4 = uVar5;
                puVar1 = DAT_140c63560;
            }
            else {
                if (puVar2[2] != 0) {
                    *(ulonglong *)(puVar2[2] + 0x18) = puVar2[3];
                }
                puVar1 = (ulonglong *)puVar2[2];
                if (puVar2[3] != 0) {
                    *(ulonglong **)(puVar2[3] + 0x10) = (ulonglong *)puVar2[2];
                    puVar1 = DAT_140c63560;
                }
            }
            DAT_140c63560 = puVar1;
            DAT_140c63568 = DAT_140c63568 + uVar4;
            *puVar2 = uVar4;
            ReleaseMutex(hMutex);
            return puVar2 + 2;
        }
    }
    uVar4 = uVar5 + 0x1000f & 0xffffffffffff0000;
    puVar2 = (ulonglong *)VirtualAlloc((LPVOID)0x0,uVar4,0x3000,0x40);
    if (puVar2 == (ulonglong *)0x0) {
        ReleaseMutex(DAT_140c63540);
        return (ulonglong *)0x0;
    }
    uVar4 = uVar4 - 0x10;
    DAT_140c63570 = DAT_140c63570 + uVar4;
    puVar2[1] = 0;
    if (uVar5 + 0x40 < uVar4) {
        DAT_140c63568 = DAT_140c63568 + uVar5;
        puVar1 = (ulonglong *)((longlong)puVar2 + uVar5);
        *puVar2 = uVar5;
        uVar4 = uVar4 - uVar5;
        puVar1[1] = uVar5;
        *puVar1 = 0;
        puVar1[2] = (ulonglong)DAT_140c63560;
        puVar1[3] = 0;
        puVar1[4] = uVar4;
        if (DAT_140c63560 != (ulonglong *)0x0) {
            DAT_140c63560[3] = (ulonglong)puVar1;
        }
        puVar3 = (undefined8 *)(uVar4 + (longlong)puVar1);
        DAT_140c63560 = puVar1;
    }
    else {
        DAT_140c63568 = DAT_140c63568 + uVar4;
        *puVar2 = uVar4;
        puVar3 = (undefined8 *)((longlong)puVar2 + uVar4);
    }
    *puVar3 = 1;
    puVar3[1] = uVar4;
    ReleaseMutex(DAT_140c63540);
    return puVar2 + 2;
}



undefined8 FUN_140933b70(longlong param_1,ulonglong param_2)

{
    BOOL BVar1;
    LPVOID pvVar2;
    LPVOID lpAddress;

    if (*(ulonglong *)(param_1 + 0x18) <= param_2 && param_2 != *(ulonglong *)(param_1 + 0x18)) {
        return 0xffffffffffffffff;
    }
    if (*(ulonglong *)(param_1 + 8) <= param_2) {
        lpAddress = (LPVOID)(DAT_140c63550 + param_2 & ~DAT_140c63550);
        pvVar2 = (LPVOID)(*(longlong *)(param_1 + 0x10) + DAT_140c63550 & ~DAT_140c63550);
        if (lpAddress != pvVar2) {
            if (pvVar2 < lpAddress) {
                pvVar2 = VirtualAlloc(pvVar2,(longlong)lpAddress - (longlong)pvVar2,0x1000,4);
                if (pvVar2 == (LPVOID)0x0) {
                    return 0xffffffffffffffff;
                }
            }
            else {
                BVar1 = VirtualFree(lpAddress,(longlong)pvVar2 - (longlong)lpAddress,0x4000);
                if (BVar1 == 0) {
                    return 0xffffffffffffffff;
                }
            }
        }
        *(ulonglong *)(param_1 + 0x10) = param_2;
        return 0;
    }
    return 0xffffffffffffffff;
}



ushort FUN_140933c10(uint param_1,ushort *param_2,int param_3)

{
    ushort uVar1;
    ushort uVar2;
    ushort *puVar3;
    ushort *puVar4;
    ushort *puVar5;
    uint uVar6;
    uint uVar7;

    uVar1 = *param_2;
    if (((param_1 < 0x100) && ((uVar1 & 2) != 0)) &&
        ((*(byte *)((ulonglong)(param_1 >> 3) + 2 + (longlong)param_2) &
          (byte)(1 << ((byte)param_1 & 7))) != 0)) {
        LAB_140933c50:
        return (ushort)((uVar1 & 1) == 0);
    }
    puVar3 = param_2 + 1;
    if ((uVar1 & 2) != 0) {
        puVar3 = param_2 + 0x11;
    }
    uVar2 = *puVar3;
    do {
        if (uVar2 == 0) {
            return uVar1 & 1;
        }
        puVar5 = puVar3 + 1;
        if (uVar2 == 1) {
            uVar2 = *puVar5;
            uVar6 = (uint)uVar2;
            puVar5 = puVar3 + 2;
            if ((param_3 != 0) && ((uVar6 & 0xfc00) == 0xd800)) {
                uVar6 = (*puVar5 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
                puVar5 = puVar3 + 3;
            }
            if (param_1 == uVar6) goto LAB_140933c50;
        }
        else if (uVar2 == 2) {
            uVar6 = (uint)*puVar5;
            if (param_3 == 0) {
                uVar7 = (uint)puVar3[2];
                puVar5 = puVar3 + 3;
            }
            else {
                puVar4 = puVar3 + 2;
                if ((uVar6 & 0xfc00) == 0xd800) {
                    uVar6 = (*puVar4 & 0x3ff | (*puVar5 & 0x3ff) << 10) + 0x10000;
                    puVar4 = puVar3 + 3;
                }
                uVar7 = (uint)*puVar4;
                puVar5 = puVar4 + 1;
                if ((uVar7 & 0xfc00) == 0xd800) {
                    uVar7 = (*puVar5 & 0x3ff | (*puVar4 & 0x3ff) << 10) + 0x10000;
                    puVar5 = puVar4 + 2;
                }
            }
            if ((uVar6 <= param_1) && (param_1 <= uVar7)) goto LAB_140933c50;
        }
        uVar2 = *puVar5;
        puVar3 = puVar5;
    } while( true );
}


void FUN_140933db0(undefined8 *param_1)

{
    undefined8 unaff_RBX;
    undefined8 unaff_RBP;
    undefined8 unaff_RSI;
    undefined8 unaff_RDI;
    undefined8 unaff_R12;
    undefined8 unaff_R13;
    undefined8 unaff_R14;
    undefined8 unaff_R15;
    undefined4 in_MXCSR;
    undefined2 in_FPUControlWord;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
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
    undefined4 in_XMM10_Da;
    undefined4 in_XMM10_Db;
    undefined4 in_XMM10_Dc;
    undefined4 in_XMM10_Dd;
    undefined4 in_XMM11_Da;
    undefined4 in_XMM11_Db;
    undefined4 in_XMM11_Dc;
    undefined4 in_XMM11_Dd;
    undefined4 in_XMM12_Da;
    undefined4 in_XMM12_Db;
    undefined4 in_XMM12_Dc;
    undefined4 in_XMM12_Dd;
    undefined4 in_XMM13_Da;
    undefined4 in_XMM13_Db;
    undefined4 in_XMM13_Dc;
    undefined4 in_XMM13_Dd;
    undefined4 in_XMM14_Da;
    undefined4 in_XMM14_Db;
    undefined4 in_XMM14_Dc;
    undefined4 in_XMM14_Dd;
    undefined4 in_XMM15_Da;
    undefined4 in_XMM15_Db;
    undefined4 in_XMM15_Dc;
    undefined4 in_XMM15_Dd;
    undefined in_stack_00000000;
    undefined7 in_stack_00000001;
    undefined local_res8 [32];

    if (DAT_140dc5230 == (code *)0x0) {
        *param_1 = 0;
        param_1[1] = unaff_RBX;
        param_1[3] = unaff_RBP;
        param_1[4] = unaff_RSI;
        param_1[5] = unaff_RDI;
        param_1[6] = unaff_R12;
        param_1[7] = unaff_R13;
        param_1[8] = unaff_R14;
        param_1[9] = unaff_R15;
        param_1[2] = local_res8;
        param_1[10] = CONCAT71(in_stack_00000001,in_stack_00000000);
        *(undefined4 *)(param_1 + 0xb) = in_MXCSR;
        *(undefined2 *)((longlong)param_1 + 0x5c) = in_FPUControlWord;
        *(undefined4 *)(param_1 + 0xc) = in_XMM6_Da;
        *(undefined4 *)((longlong)param_1 + 100) = in_XMM6_Db;
        *(undefined4 *)(param_1 + 0xd) = in_XMM6_Dc;
        *(undefined4 *)((longlong)param_1 + 0x6c) = in_XMM6_Dd;
        *(undefined4 *)(param_1 + 0xe) = in_XMM7_Da;
        *(undefined4 *)((longlong)param_1 + 0x74) = in_XMM7_Db;
        *(undefined4 *)(param_1 + 0xf) = in_XMM7_Dc;
        *(undefined4 *)((longlong)param_1 + 0x7c) = in_XMM7_Dd;
        *(undefined4 *)(param_1 + 0x10) = in_XMM8_Da;
        *(undefined4 *)((longlong)param_1 + 0x84) = in_XMM8_Db;
        *(undefined4 *)(param_1 + 0x11) = in_XMM8_Dc;
        *(undefined4 *)((longlong)param_1 + 0x8c) = in_XMM8_Dd;
        *(undefined4 *)(param_1 + 0x12) = in_XMM9_Da;
        *(undefined4 *)((longlong)param_1 + 0x94) = in_XMM9_Db;
        *(undefined4 *)(param_1 + 0x13) = in_XMM9_Dc;
        *(undefined4 *)((longlong)param_1 + 0x9c) = in_XMM9_Dd;
        *(undefined4 *)(param_1 + 0x14) = in_XMM10_Da;
        *(undefined4 *)((longlong)param_1 + 0xa4) = in_XMM10_Db;
        *(undefined4 *)(param_1 + 0x15) = in_XMM10_Dc;
        *(undefined4 *)((longlong)param_1 + 0xac) = in_XMM10_Dd;
        *(undefined4 *)(param_1 + 0x16) = in_XMM11_Da;
        *(undefined4 *)((longlong)param_1 + 0xb4) = in_XMM11_Db;
        *(undefined4 *)(param_1 + 0x17) = in_XMM11_Dc;
        *(undefined4 *)((longlong)param_1 + 0xbc) = in_XMM11_Dd;
        *(undefined4 *)(param_1 + 0x18) = in_XMM12_Da;
        *(undefined4 *)((longlong)param_1 + 0xc4) = in_XMM12_Db;
        *(undefined4 *)(param_1 + 0x19) = in_XMM12_Dc;
        *(undefined4 *)((longlong)param_1 + 0xcc) = in_XMM12_Dd;
        *(undefined4 *)(param_1 + 0x1a) = in_XMM13_Da;
        *(undefined4 *)((longlong)param_1 + 0xd4) = in_XMM13_Db;
        *(undefined4 *)(param_1 + 0x1b) = in_XMM13_Dc;
        *(undefined4 *)((longlong)param_1 + 0xdc) = in_XMM13_Dd;
        *(undefined4 *)(param_1 + 0x1c) = in_XMM14_Da;
        *(undefined4 *)((longlong)param_1 + 0xe4) = in_XMM14_Db;
        *(undefined4 *)(param_1 + 0x1d) = in_XMM14_Dc;
        *(undefined4 *)((longlong)param_1 + 0xec) = in_XMM14_Dd;
        *(undefined4 *)(param_1 + 0x1e) = in_XMM15_Da;
        *(undefined4 *)((longlong)param_1 + 0xf4) = in_XMM15_Db;
        *(undefined4 *)(param_1 + 0x1f) = in_XMM15_Dc;
        *(undefined4 *)((longlong)param_1 + 0xfc) = in_XMM15_Dd;
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140933e4e. Too many branches
    // WARNING: Treating indirect jump as call
    (*DAT_140dc5230)();
    return;
}



double FUN_140933e50(double param_1)

{
    double dVar1;
    int iVar2;
    ulonglong uVar3;
    double dVar4;
    double dVar5;
    undefined4 uVar6;
    uint uVar7;
    double local_res8;
    undefined4 uVar8;

    uVar8 = SUB84(param_1,0);
    uVar7 = (uint)((ulonglong)param_1 >> 0x20);
    local_res8 = 0.0;
    iVar2 = (uVar7 >> 0x14 & 0x7ff) - 0x3ff;
    if (((ulonglong)param_1 & 0x7fffffffffffffff) < 0x7ff0000000000001) {
        if (iVar2 < -0x38) {
            uVar8 = 0x3ff921fb;
        }
        else {
            if (iVar2 < 0) {
                if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
                    uVar7 = uVar7 ^ 0x80000000;
                }
                if (iVar2 < -1) {
                    dVar4 = (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar7 << 0x20) *
                            (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar7 << 0x20);
                }
                else {
                    dVar4 = (1.0 - (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar7 << 0x20)) * 0.5
                            ;
                    local_res8 = SQRT(dVar4);
                    uVar8 = SUB84(local_res8,0);
                    uVar7 = (uint)((ulonglong)local_res8 >> 0x20);
                }
                dVar5 = ((((((dVar4 * 4.82901920344787e-05 + 0.001092426972350747) * dVar4 -
                             0.05499898092356859) * dVar4 + 0.2755581752569377) * dVar4 - 0.4450172168676356)
                          * dVar4 + 0.227485835556935) * dVar4) /
                        ((((dVar4 * 0.1058694220872044 - 0.9436391370324927) * dVar4 + 2.76568859157271) *
                          dVar4 - 3.284315057209587) * dVar4 + 1.36491501334161);
                if (iVar2 >= -1) {
                    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
                        return 3.141592653589793 -
                               ((dVar5 * (double)CONCAT44(uVar7,uVar8) - 6.123233995736766e-17) + local_res8) *
                               2.0;
                    }
                    dVar1 = (double)((ulonglong)local_res8 & 0xffffffff00000000);
                    return ((dVar4 - dVar1 * dVar1) / (dVar1 + local_res8)) * 2.0 +
                           (double)CONCAT44(uVar7,uVar8) * 2.0 * dVar5 + dVar1 * 2.0;
                }
                return 1.570796326794897 - (param_1 - (6.123233995736766e-17 - dVar5 * param_1));
            }
            if (param_1 == 1.0) {
                return 0.0;
            }
            if (param_1 != -1.0) {
                uVar3 = 0xfff8000000000000;
                uVar8 = 8;
                goto LAB_140933ee9;
            }
            uVar8 = 0x400921fb;
        }
        uVar6 = 0x54442d18;
        _set_statfp(0x20);
        dVar4 = (double)CONCAT44(uVar8,uVar6);
    }
    else {
        uVar3 = (ulonglong)param_1 | 0x8000000000000;
        uVar8 = 0;
        LAB_140933ee9:
        dVar4 = (double)FUN_1407efc20(&DAT_140963b28,0xd,uVar3,1,uVar8,0x21,param_1,0,1);
    }
    return dVar4;
}



double FUN_140934138(double param_1)

{
    double dVar1;
    int iVar2;
    ulonglong uVar3;
    double dVar4;
    double dVar5;
    uint uVar6;
    double local_res8;
    undefined4 uVar7;

    uVar7 = SUB84(param_1,0);
    uVar6 = (uint)((ulonglong)param_1 >> 0x20);
    local_res8 = 0.0;
    iVar2 = (uVar6 >> 0x14 & 0x7ff) - 0x3ff;
    if (((ulonglong)param_1 & 0x7fffffffffffffff) < 0x7ff0000000000001) {
        if (-0x1d < iVar2) {
            if (iVar2 < 0) {
                if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
                    uVar6 = uVar6 ^ 0x80000000;
                }
                if (iVar2 < -1) {
                    dVar4 = (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar6 << 0x20) *
                            (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar6 << 0x20);
                }
                else {
                    dVar4 = (1.0 - (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar6 << 0x20)) * 0.5
                            ;
                    local_res8 = SQRT(dVar4);
                    uVar7 = SUB84(local_res8,0);
                    uVar6 = (uint)((ulonglong)local_res8 >> 0x20);
                }
                dVar5 = ((((((dVar4 * 4.82901920344787e-05 + 0.001092426972350747) * dVar4 -
                             0.05499898092356859) * dVar4 + 0.2755581752569377) * dVar4 - 0.4450172168676356)
                          * dVar4 + 0.227485835556935) * dVar4) /
                        ((((dVar4 * 0.1058694220872044 - 0.9436391370324927) * dVar4 + 2.76568859157271) *
                          dVar4 - 3.284315057209587) * dVar4 + 1.36491501334161);
                if (iVar2 < -1) {
                    dVar4 = dVar5 * (double)CONCAT44(uVar6,uVar7) + (double)CONCAT44(uVar6,uVar7);
                }
                else {
                    dVar1 = (double)((ulonglong)local_res8 & 0xffffffff00000000);
                    dVar4 = 0.7853981633974483 -
                            ((local_res8 * 2.0 * dVar5 -
                              (6.123233995736766e-17 - ((dVar4 - dVar1 * dVar1) / (dVar1 + local_res8)) * 2.0))
                             - (0.7853981633974483 - dVar1 * 2.0));
                }
                if (((ulonglong)param_1 & 0x8000000000000000) == 0) {
                    return dVar4;
                }
                return (double)((ulonglong)dVar4 ^ 0x8000000000000000);
            }
            if (param_1 == 1.0) {
                uVar7 = 0x54442d18;
                uVar6 = 0x3ff921fb;
            }
            else {
                if (param_1 != -1.0) {
                    uVar3 = 0xfff8000000000000;
                    uVar7 = 8;
                    goto LAB_1409341d1;
                }
                uVar7 = 0x54442d18;
                uVar6 = 0xbff921fb;
            }
        }
        _set_statfp(0x20);
        dVar4 = (double)CONCAT44(uVar6,uVar7);
    }
    else {
        uVar3 = (ulonglong)param_1 | 0x8000000000000;
        uVar7 = 0;
        LAB_1409341d1:
        dVar4 = (double)FUN_1407efc20(&DAT_140963b20,0xe,uVar3,1,uVar7,0x21,param_1,0,1);
    }
    return dVar4;
}



double FUN_140934400(double param_1)

{
    double dVar1;
    bool bVar2;
    double dVar3;
    double dVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    uint uVar7;

    dVar1 = (double)((ulonglong)param_1 & 0x7fffffffffffffff);
    bVar2 = param_1 != dVar1;
    dVar3 = param_1;
    if (bVar2) {
        dVar3 = (double)((ulonglong)param_1 ^ 0x8000000000000000);
    }
    if ((ulonglong)dVar1 < 0x4003800000000001) {
        if ((ulonglong)dVar1 < 0x3ff3000000000001) {
            if ((ulonglong)dVar1 < 0x3fe6000000000001) {
                if ((ulonglong)dVar1 < 0x3fdc000000000001) {
                    dVar1 = 0.0;
                    uVar5 = 0;
                    uVar6 = 0;
                }
                else {
                    dVar1 = 0.4636476090008061;
                    uVar5 = 0x222f65e0;
                    uVar6 = 0x3c7a2b7f;
                    dVar3 = (dVar3 * 2.0 - 1.0) / (dVar3 + 2.0);
                }
            }
            else {
                dVar1 = 0.7853981633974483;
                dVar3 = (dVar3 - 1.0) / (dVar3 + 1.0);
                uVar5 = 0x33145c06;
                uVar6 = 0x3c81a626;
            }
        }
        else {
            dVar1 = 0.9827937232473291;
            uVar5 = 0x7af0cbbc;
            uVar6 = 0x3c700788;
            dVar3 = (dVar3 - 1.5) / (dVar3 * 1.5 + 1.0);
        }
    }
    else {
        if (0x7ff0000000000000 < (ulonglong)dVar1) {
            dVar3 = (double)FUN_1407efc20(&DAT_140963b30,0xf,(ulonglong)param_1 | 0x8000000000000,1,0,0x21
                    ,param_1,0,1);
            return dVar3;
        }
        if (4.859383997932765e+18 < dVar3) {
            uVar5 = (undefined4)DAT_140c5f480;
            uVar7 = (uint)((ulonglong)DAT_140c5f480 >> 0x20);
            if (bVar2) {
                uVar7 = uVar7 ^ 0x80000000;
            }
            _set_statfp(0x20);
            return (double)CONCAT44(uVar7,uVar5);
        }
        dVar1 = 1.570796326794897;
        uVar5 = 0x33145c06;
        uVar6 = 0x3c91a626;
        dVar3 = -1.0 / dVar3;
    }
    dVar4 = dVar3 * dVar3;
    dVar1 = dVar1 - (((((((dVar4 * 0.0001423169033423178 + 0.0304455919504853) * dVar4 +
                          0.2206387807166674) * dVar4 + 0.4476772068054975) * dVar4 +
                        0.2682979205325459) * dVar4 * dVar3) /
                      ((((dVar4 * 0.03895258739447422 + 0.4246025942038471) * dVar4 +
                         1.412542599319589) * dVar4 + 1.825967877375071) * dVar4 + 0.8048937615976377)
                      - (double)CONCAT44(uVar6,uVar5)) - dVar3);
    if (bVar2) {
        dVar1 = (double)((ulonglong)dVar1 ^ 0x8000000000000000);
    }
    return dVar1;
}



double FUN_140934660(double param_1,double param_2)

{
    bool bVar1;
    bool bVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    int iVar9;
    int iVar10;
    uint uVar11;
    uint uVar12;
    double dVar13;
    ulonglong uVar14;
    double dVar15;
    double dVar16;
    undefined4 uVar17;
    uint uVar18;
    undefined4 uVar19;
    uint uVar20;
    undefined4 uVar21;
    undefined4 uVar22;

    uVar6 = 0;
    uVar17 = SUB84(param_2,0);
    uVar20 = (uint)((ulonglong)param_2 >> 0x20);
    uVar21 = SUB84(param_1,0);
    uVar18 = (uint)((ulonglong)param_1 >> 0x20);
    uVar4 = (ulonglong)param_1 & 0x7fffffffffffffff;
    uVar3 = (ulonglong)param_2 & 0x7fffffffffffffff;
    uVar11 = uVar20 >> 0x14 & 0x7ff;
    uVar7 = (ulonglong)param_2 & 0x8000000000000000;
    uVar8 = (ulonglong)param_1 & 0x8000000000000000;
    uVar12 = uVar18 >> 0x14 & 0x7ff;
    iVar9 = uVar12 - uVar11;
    dVar13 = param_2;
    if ((0x7ff0000000000000 < uVar3) || (dVar13 = param_1, 0x7ff0000000000000 < uVar4)) {
        dVar13 = (double)FUN_1407efc20("atan2",0x10,(ulonglong)dVar13 | 0x8000000000000,1,0,0x21,param_2
                ,param_1,2);
        return dVar13;
    }
    if (uVar4 == 0) {
        if (uVar7 == 0) {
            return param_1;
        }
        LAB_1409347ad:
        uVar17 = (undefined4)DAT_140c5f488;
        uVar18 = (uint)((ulonglong)DAT_140c5f488 >> 0x20);
        if (uVar8 != 0) {
            uVar18 = uVar18 ^ 0x80000000;
        }
        goto LAB_140934911;
    }
    if (uVar3 == 0) {
        uVar14 = DAT_140c5f490;
        if (uVar8 == 0) {
            dVar13 = (double)_set_statfp();
            goto LAB_140934816;
        }
        LAB_1409347dc:
        dVar13 = (double)(uVar14 ^ 0x8000000000000000);
        uVar17 = (undefined4)uVar14;
        uVar18 = (uint)((ulonglong)dVar13 >> 0x20);
    }
    else {
        LAB_140934816:
        if ((uVar11 < 0x3fd) && (uVar12 < 0x3fd)) {
            if (((ulonglong)param_2 & 0x7ff0000000000000) == 0) {
                if (uVar7 == 0) {
                    param_2 = (double)((ulonglong)param_2 | 0x4010000000000000) - 4.0;
                    dVar13 = param_2;
                }
                else {
                    param_2 = (double)((ulonglong)param_2 | 0x4010000000000000) + 4.0;
                    dVar13 = param_2;
                }
            }
            else {
                param_2 = (double)((longlong)param_2 + 0x4000000000000000);
            }
            if (((ulonglong)param_1 & 0x7ff0000000000000) == 0) {
                if (uVar8 == 0) {
                    param_1 = (double)((ulonglong)param_1 | 0x4010000000000000) - 4.0;
                    dVar13 = param_1;
                }
                else {
                    param_1 = (double)((ulonglong)param_1 | 0x4010000000000000) + 4.0;
                    dVar13 = param_1;
                }
            }
            else {
                param_1 = (double)((longlong)param_1 + 0x4000000000000000);
            }
            uVar17 = SUB84(param_2,0);
            uVar20 = (uint)((ulonglong)param_2 >> 0x20);
            uVar18 = (uint)((ulonglong)param_1 >> 0x20);
            uVar21 = SUB84(param_1,0);
            iVar9 = (uVar18 >> 0x14 & 0x7ff) - (uVar20 >> 0x14 & 0x7ff);
        }
        if (0x38 < iVar9) {
            uVar14 = DAT_140c5f490;
            if (uVar8 == 0) {
                uVar17 = (undefined4)DAT_140c5f490;
                uVar18 = (uint)(DAT_140c5f490 >> 0x20);
                goto LAB_140934911;
            }
            goto LAB_1409347dc;
        }
        if ((iVar9 < -0x1c) && (uVar7 == 0)) {
            if (iVar9 < -0x432) {
                if (uVar8 == 0) {
                    uVar17 = 0;
                    uVar18 = 0;
                }
                else {
                    uVar17 = 0;
                    uVar18 = 0x80000000;
                }
            }
            else {
                if (-0x3ff < iVar9) {
                    return (double)CONCAT44(uVar18,uVar21) / (double)CONCAT44(uVar20,uVar17);
                }
                dVar13 = ((double)CONCAT44(uVar18,uVar21) * 1.267650600228229e+30) /
                         (double)CONCAT44(uVar20,uVar17);
                iVar9 = (((uint)((ulonglong)dVar13 >> 0x20) & 0x7fffffff) >> 0x14) - 100;
                if (iVar9 < 1) {
                    if (1 - iVar9 < 0x37) {
                        uVar3 = ((ulonglong)dVar13 & 0x1fffffffffffff | 0x10000000000000) >>
                                                                                          ((char)(1 - iVar9) - 1U & 0x3f);
                        uVar6 = (uVar3 >> 1) + (ulonglong)((uint)uVar3 & 1);
                    }
                }
                else {
                    uVar6 = (longlong)iVar9 << 0x34 | (ulonglong)dVar13 & 0xfffffffffffff;
                }
                uVar18 = (uint)(uVar6 >> 0x20) | (uint)(((ulonglong)dVar13 & 0x8000000000000000) >> 0x20);
                uVar17 = (undefined4)uVar6;
                if ((uVar6 & 0x7ff0000000000000) != 0) {
                    return (double)(uVar6 & 0xffffffff00000000 | (ulonglong)dVar13 & 0x8000000000000000 |
                                    uVar6 & 0xffffffff);
                }
            }
            uVar5 = 0x30;
            goto LAB_140934916;
        }
        if ((iVar9 < -0x38) && (uVar7 != 0)) goto LAB_1409347ad;
        if ((uVar4 != 0x7ff0000000000000) || (uVar3 != 0x7ff0000000000000)) {
            if (uVar7 != 0) {
                uVar20 = uVar20 ^ 0x80000000;
            }
            if (uVar8 != 0) {
                uVar18 = uVar18 ^ 0x80000000;
            }
            bVar1 = (double)CONCAT44(uVar18,uVar21) != (double)CONCAT44(uVar20,uVar17);
            bVar2 = (double)CONCAT44(uVar20,uVar17) <= (double)CONCAT44(uVar18,uVar21);
            uVar19 = uVar21;
            uVar11 = uVar18;
            if (bVar2 && bVar1) {
                uVar19 = uVar17;
                uVar11 = uVar20;
                uVar17 = uVar21;
                uVar20 = uVar18;
            }
            dVar13 = (double)CONCAT44(uVar11,uVar19) / (double)CONCAT44(uVar20,uVar17);
            if (dVar13 <= 0.0625) {
                uVar21 = 0;
                uVar22 = 0;
                if (1e-08 <= dVar13) {
                    dVar16 = dVar13 * dVar13;
                    dVar15 = (double)((ulonglong)dVar13 & 0xffffffff00000000);
                    dVar13 = (((((double)CONCAT44(uVar11,uVar19) -
                                 dVar15 * (double)((ulonglong)uVar20 << 0x20)) -
                                ((double)CONCAT44(uVar20,uVar17) - (double)((ulonglong)uVar20 << 0x20)) *
                                dVar15) - (dVar13 - dVar15) * (double)CONCAT44(uVar20,uVar17)) /
                              (double)CONCAT44(uVar20,uVar17) -
                              (0.3333333333333317 -
                               (0.1999999999939322 -
                                (0.1428571356180717 -
                                 (0.1111073628351453 - dVar16 * 0.09002981028544979) * dVar16) * dVar16) * dVar16)
                              * dVar16 * dVar13) + dVar13;
                }
            }
            else {
                uVar18 = (uint)(dVar13 * 256.0 + 0.5);
                uVar3 = (ulonglong)(uVar18 - 0x10);
                uVar21 = (undefined4)*(undefined8 *)(&DAT_140b7b820 + uVar3 * 8);
                uVar22 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_140b7b820 + uVar3 * 8) >> 0x20);
                iVar10 = -((uVar20 >> 0x14 & 0x7ff) - 0x3ff);
                iVar9 = iVar10 / 2;
                dVar13 = (double)(ulonglong)uVar18 * 0.00390625;
                dVar16 = (double)((longlong)iVar9 + 0x3ff << 0x34) * (double)CONCAT44(uVar20,uVar17) *
                         (double)((longlong)(iVar10 - iVar9) + 0x3ff << 0x34);
                dVar15 = (double)((longlong)iVar9 + 0x3ff << 0x34) * (double)CONCAT44(uVar11,uVar19) *
                         (double)((longlong)(iVar10 - iVar9) + 0x3ff << 0x34);
                dVar13 = ((dVar15 - (double)((ulonglong)dVar16 & 0xfffffffff8000000) * dVar13) -
                          (dVar16 - (double)((ulonglong)dVar16 & 0xfffffffff8000000)) * dVar13) /
                         (dVar13 * dVar15 + dVar16);
                dVar13 = (dVar13 + *(double *)(&DAT_140b7bfb0 + uVar3 * 8)) -
                         (0.333333333332241 - dVar13 * dVar13 * 0.1999991803898914) * dVar13 * dVar13 *
                         dVar13;
            }
            if (bVar2 && bVar1) {
                dVar15 = DAT_140c5f4b8 - (double)CONCAT44(uVar22,uVar21);
                dVar13 = DAT_140c5f4c0 - dVar13;
                uVar21 = SUB84(dVar15,0);
                uVar22 = (undefined4)((ulonglong)dVar15 >> 0x20);
            }
            if (uVar7 != 0) {
                dVar15 = DAT_140c5f4a8 - (double)CONCAT44(uVar22,uVar21);
                dVar13 = DAT_140c5f4b0 - dVar13;
                uVar21 = SUB84(dVar15,0);
                uVar22 = (undefined4)((ulonglong)dVar15 >> 0x20);
            }
            dVar13 = (double)CONCAT44(uVar22,uVar21) + dVar13;
            uVar18 = (uint)((ulonglong)dVar13 >> 0x20);
            if (uVar8 != 0) {
                uVar18 = uVar18 ^ 0x80000000;
            }
            return (double)((ulonglong)dVar13 & 0xffffffff | (ulonglong)uVar18 << 0x20);
        }
        if (uVar7 == 0) {
            uVar14 = DAT_140c5f498;
            if (uVar8 != 0) goto LAB_1409347dc;
            uVar17 = (undefined4)DAT_140c5f498;
            uVar18 = (uint)(DAT_140c5f498 >> 0x20);
        }
        else {
            uVar14 = DAT_140c5f4a0;
            if (uVar8 != 0) goto LAB_1409347dc;
            uVar17 = (undefined4)DAT_140c5f4a0;
            uVar18 = (uint)(DAT_140c5f4a0 >> 0x20);
        }
    }
    LAB_140934911:
    uVar5 = 0x20;
    LAB_140934916:
    _set_statfp(dVar13,uVar5);
    return (double)CONCAT44(uVar18,uVar17);
}



ulonglong FUN_140934e10(float param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;
    double dVar3;
    double dVar4;
    double dVar5;
    float fVar6;
    undefined4 uVar7;

    dVar4 = (double)param_1;
    uVar1 = (ulonglong)dVar4 & 0x7fffffffffffffff;
    uVar2 = (ulonglong)dVar4 & 0x8000000000000000;
    if (uVar2 != 0) {
        dVar4 = (double)((ulonglong)dVar4 ^ 0x8000000000000000);
    }
    if (uVar1 < 0x3fdc000000000000) {
        dVar5 = 0.0;
    }
    else if (uVar1 < 0x3fe6000000000000) {
        dVar5 = 0.4636476090008061;
        dVar4 = (dVar4 * 2.0 - 1.0) / (dVar4 + 2.0);
    }
    else if (uVar1 < 0x3ff3000000000000) {
        dVar5 = 0.7853981633974483;
        dVar4 = (dVar4 - 1.0) / (dVar4 + 1.0);
    }
    else if (uVar1 < 0x4003800000000000) {
        dVar5 = 0.9827937232473291;
        dVar4 = (dVar4 - 1.5) / (dVar4 * 1.5 + 1.0);
    }
    else {
        if (0x7ff0000000000000 < uVar1) {
            uVar1 = FUN_1407efd48("atanf",0xf,(uint)param_1 | 0x400000,1,0,0x21,param_1,0,1);
            return uVar1;
        }
        if (5.512405943901487e+18 < dVar4) {
            if (uVar2 == 0) {
                fVar6 = (float)DAT_140c5f4c8;
                dVar4 = (double)(ulonglong)(uint)fVar6;
            }
            else {
                dVar4 = (double)((ulonglong)DAT_140c5f4c8 ^ 0x8000000000000000);
                fVar6 = (float)dVar4;
            }
            uVar7 = 0;
            _set_statfp(dVar4,0x20);
            return CONCAT44(uVar7,fVar6);
        }
        dVar5 = 1.570796326794897;
        dVar4 = -1.0 / dVar4;
    }
    dVar3 = dVar4 * dVar4;
    dVar5 = dVar5 - ((((dVar3 * 0.004706779342861492 + 0.1923245464021086) * dVar3 +
                       0.2965285988192392) * dVar3 * dVar4) /
                     ((dVar3 * 0.2993096999596597 + 1.110724999953995) * dVar3 + 0.8895857968624323) -
                     dVar4);
    if (uVar2 != 0) {
        dVar5 = (double)((ulonglong)dVar5 ^ 0x8000000000000000);
    }
    return (ulonglong)(uint)(float)dVar5;
}



void FUN_140935050(void)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    undefined in_XMM0 [16];
    uint uVar5;
    undefined8 uVar6;
    undefined8 uVar7;

    uVar4 = SUB168(in_XMM0,0);
    uVar5 = SUB164(in_XMM0 >> 0x20,0);
    uVar1 = uVar4 & 0x7fffffffffffffff;
    if (uVar1 < 0x3e30000000000000) {
        if ((in_XMM0 & (undefined  [16])0x7fffffffffffffff) != (undefined  [16])0x0) {
            _set_statfp(0x20);
        }
    }
    else {
        uVar2 = 0x7ff0000000000000;
        if (uVar1 < 0x7ff0000000000000) {
            if (uVar1 != uVar4) {
                uVar5 = uVar5 ^ 0x80000000;
            }
            if ((double)CONCAT44(uVar5,SUB164(in_XMM0,0)) < 710.475860073944) {
                if ((double)CONCAT44(uVar5,SUB164(in_XMM0,0)) < 20.0) {
                    return;
                }
                FUN_1409353fc();
                return;
            }
            uVar3 = 3;
            uVar7 = 0x22;
            uVar6 = 0x11;
        }
        else {
            if (uVar1 < 0x7ff0000000000001) {
                _set_statfp(0);
                return;
            }
            uVar2 = uVar4 | 0x8000000000000;
            uVar3 = 1;
            uVar7 = 0x21;
            uVar6 = 0;
        }
        FUN_1407efc20(&DAT_140963b10,0x13,uVar2,uVar3,uVar6,uVar7);
    }
    return;
}



void FUN_1409353fc(double param_1,double param_2,double param_3,double param_4)

{
    double dVar1;
    double dVar2;
    double dVar3;
    uint uVar4;
    uint uVar5;
    double dVar6;
    double in_stack_00000028;
    int *in_stack_00000030;
    double *in_stack_00000038;
    double *in_stack_00000040;

    param_3 = param_1 * param_3;
    if (param_3 <= 0.0) {
        param_3 = param_3 - 0.5;
    }
    else {
        param_3 = param_3 + 0.5;
    }
    uVar5 = (uint)param_3;
    uVar4 = uVar5 & 0x1f;
    dVar1 = *(double *)(&DAT_140b7cd80 + (longlong)(int)uVar4 * 8);
    dVar2 = *(double *)(&DAT_140b7cc80 + (longlong)(int)uVar4 * 8);
    *in_stack_00000030 = (int)((uVar5 - uVar4) + ((int)(uVar5 - uVar4) >> 0x1f & 0x1fU)) >> 5;
    dVar3 = (param_1 - (double)uVar5 * param_4) * param_2;
    *in_stack_00000038 = dVar2;
    param_2 = (double)-uVar5 * in_stack_00000028 * param_2;
    dVar6 = param_2 + dVar3;
    *in_stack_00000040 =
            (((((dVar6 * 0.001388894908637772 + 0.008333367984342196) * dVar6 + 0.04166666666622608) *
               dVar6 + 0.1666666666652609) * dVar6 + 0.5) * dVar6 * dVar6 + param_2 + dVar3) *
            (dVar1 + dVar2) + dVar1;
    return;
}



void FUN_140935530(double param_1,undefined8 param_2)

{
    if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        if (param_1 != INFINITY) {
            if (param_1 == -INFINITY) {
                return;
            }
            FUN_1409023c4(param_2,(ulonglong)param_1 | 0x8000000000000,1);
        }
    }
    else {
        if (((ulonglong)param_1 & 0x7fffffffffffffff) < 0x3c00000000000000) {
            return;
        }
        if (65536.0 < param_1 * 92.33248261689366) {
            FUN_1409023c4(param_1,param_2,param_1,3);
        }
        else {
            if (-68800.0 < param_1 * 92.33248261689366) {
                return;
            }
            FUN_1409023c4(param_1,param_2,param_1,2);
        }
    }
    return;
}



double FUN_1409357c8(double param_1,ulonglong param_2)

{
    int iVar1;
    double dVar2;
    uint uVar3;
    int iVar4;
    ulonglong uVar5;
    uint uVar6;
    int iVar7;
    double dVar8;
    double dVar9;
    double dVar10;
    double dVar11;
    double dVar12;
    uint uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    double local_res18;
    undefined4 uVar16;

    dVar8 = (double)(param_2 & 0x7fffffffffffffff);
    dVar9 = (double)((ulonglong)param_1 & 0x7fffffffffffffff);
    uVar3 = (uint)((ulonglong)param_1 >> 0x34) & 0x7ff;
    uVar6 = (uint)(param_2 >> 0x34) & 0x7ff;
    if (uVar3 == 0) {
        LAB_14093588e:
        if (uVar3 < 0x7ff) {
            if (0x7fe < uVar6) {
                if ((param_2 & 0xfffffffffffff) == 0) {
                    return param_1;
                }
                uVar16 = 0;
                uVar5 = param_2 | 0x8000000000000;
                goto LAB_1409358df;
            }
            if (dVar9 == 0.0) {
                if (dVar8 != 0.0) {
                    return param_1;
                }
            }
            else if (dVar8 != 0.0) {
                dVar2 = dVar9;
                if (uVar3 == 0) {
                    for (; (ulonglong)dVar2 < 0x10000000000000; dVar2 = (double)((longlong)dVar2 * 2)) {
                        uVar3 = uVar3 - 1;
                    }
                }
                dVar2 = dVar8;
                if (uVar6 == 0) {
                    for (; (ulonglong)dVar2 < 0x10000000000000; dVar2 = (double)((longlong)dVar2 * 2)) {
                        uVar6 = uVar6 - 1;
                    }
                }
                goto LAB_1409359d0;
            }
            uVar5 = 0xfff8000000000000;
            uVar16 = 8;
            goto LAB_1409358df;
        }
    }
    else if (uVar3 < 0x7ff) {
        if (0x7fd < uVar6 - 1) goto LAB_14093588e;
        if (dVar9 == dVar8) {
            return (double)((ulonglong)param_1 & 0x8000000000000000);
        }
        LAB_1409359d0:
        uVar16 = SUB84(dVar9,0);
        uVar13 = (uint)((ulonglong)dVar9 >> 0x20);
        uVar14 = SUB84(dVar8,0);
        uVar15 = (undefined4)((ulonglong)dVar8 >> 0x20);
        if ((ulonglong)dVar9 < (ulonglong)dVar8) {
            if (param_1 < 0.0) {
                uVar13 = uVar13 ^ 0x80000000;
            }
            return (double)((ulonglong)param_1 & 0xffffffff | (ulonglong)uVar13 << 0x20);
        }
        if ((int)uVar6 < (int)uVar3) {
            uVar3 = (int)(uVar3 - uVar6) / 0x34;
            if (uVar3 != 0) {
                iVar7 = uVar3 * 0x34;
                uVar5 = (longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffff;
                iVar4 = (int)(uVar5 >> 0x1f) + (int)uVar5;
                iVar1 = (iVar7 - iVar4) / 2;
                dVar8 = (double)((longlong)iVar4 + 0x3ff << 0x34) * dVar8 *
                        (double)((longlong)iVar1 + 0x3ff << 0x34) *
                        (double)((longlong)((iVar7 - iVar1) - iVar4) + 0x3ff << 0x34);
                uVar14 = SUB84(dVar8,0);
                uVar15 = (undefined4)((ulonglong)dVar8 >> 0x20);
                uVar6 = 0x3cb00000;
                goto LAB_140935afd;
            }
        }
        else {
            uVar3 = 0;
        }
        uVar6 = 0x3ff00000;
        LAB_140935afd:
        if (0 < (int)uVar3) {
            uVar5 = (ulonglong)uVar3;
            do {
                dVar10 = (double)(longlong)
                        ((double)CONCAT44(uVar13,uVar16) / (double)CONCAT44(uVar15,uVar14));
                dVar2 = (double)(CONCAT44(uVar15,uVar14) & 0xfffffffff8000000);
                dVar11 = dVar10 * (double)CONCAT44(uVar15,uVar14);
                dVar9 = (double)CONCAT44(uVar13,uVar16) - dVar11;
                dVar8 = (double)CONCAT44(uVar15,uVar14) - dVar2;
                dVar12 = dVar10 - (double)((ulonglong)dVar10 & 0xfffffffff8000000);
                dVar9 = ((((double)CONCAT44(uVar13,uVar16) - dVar9) - dVar11) -
                         (((double)((ulonglong)dVar10 & 0xfffffffff8000000) * dVar2 - dVar11) +
                          dVar12 * dVar2 + (double)((ulonglong)dVar10 & 0xfffffffff8000000) * dVar8 +
                          dVar12 * dVar8)) + dVar9;
                uVar16 = SUB84(dVar9,0);
                uVar13 = (uint)((ulonglong)dVar9 >> 0x20);
                if (dVar9 < 0.0) {
                    dVar9 = dVar9 + (double)CONCAT44(uVar15,uVar14);
                    uVar16 = SUB84(dVar9,0);
                    uVar13 = (uint)((ulonglong)dVar9 >> 0x20);
                }
                dVar8 = (double)CONCAT44(uVar15,uVar14) * (double)((ulonglong)uVar6 << 0x20);
                uVar14 = SUB84(dVar8,0);
                uVar15 = (undefined4)((ulonglong)dVar8 >> 0x20);
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        dVar2 = (double)(CONCAT44(uVar15,uVar14) & 0xfffffffff8000000);
        dVar11 = (double)CONCAT44(uVar15,uVar14) - dVar2;
        dVar8 = (double)(longlong)((double)CONCAT44(uVar13,uVar16) / (double)CONCAT44(uVar15,uVar14));
        dVar9 = dVar8 * (double)CONCAT44(uVar15,uVar14);
        dVar10 = dVar8 - (double)((ulonglong)dVar8 & 0xfffffffff8000000);
        local_res18 = (double)CONCAT44(uVar13,uVar16) - dVar9;
        local_res18 = ((((double)CONCAT44(uVar13,uVar16) - local_res18) - dVar9) -
                       (((double)((ulonglong)dVar8 & 0xfffffffff8000000) * dVar2 - dVar9) +
                        dVar10 * dVar2 + (double)((ulonglong)dVar8 & 0xfffffffff8000000) * dVar11 +
                        dVar10 * dVar11)) + local_res18;
        if (local_res18 < 0.0) {
            local_res18 = local_res18 + (double)CONCAT44(uVar15,uVar14);
        }
        if (param_1 < 0.0) {
            local_res18 = (double)((ulonglong)local_res18 ^ 0x8000000000000000);
        }
        return local_res18;
    }
    if (((ulonglong)param_1 & 0xfffffffffffff) == 0) {
        uVar16 = 8;
        uVar5 = 0xfff8000000000000;
    }
    else {
        uVar16 = 0;
        uVar5 = (ulonglong)param_1 | 0x8000000000000;
    }
    LAB_1409358df:
    dVar8 = (double)FUN_1407efc20(&DAT_140963b8c,0x16,uVar5,1,uVar16,0x21,param_1,param_2,2);
    return dVar8;
}



void FUN_140935d04(double param_1)

{
    double dVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    double dVar4;
    undefined8 uVar5;
    undefined8 uVar6;

    dVar1 = (double)((ulonglong)param_1 & 0x7fffffffffffffff);
    if ((ulonglong)dVar1 < 0x3e30000000000000) {
        if (dVar1 != 0.0) {
            _set_statfp(0x20);
        }
    }
    else {
        if ((ulonglong)dVar1 < 0x7ff0000000000000) {
            dVar4 = param_1;
            if (dVar1 != param_1) {
                dVar4 = (double)((ulonglong)param_1 ^ 0x8000000000000000);
            }
            if (dVar4 < 710.475860073944) {
                if (dVar4 < 36.12359947967774) {
                    return;
                }
                FUN_1409360fc();
                return;
            }
            uVar3 = 3;
            uVar6 = 0x22;
            uVar5 = 1;
            if (dVar1 != param_1) {
                uVar2 = 0xfff0000000000000;
            }
            else {
                uVar2 = 0x7ff0000000000000;
            }
        }
        else {
            if ((ulonglong)dVar1 < 0x7ff0000000000001) {
                return;
            }
            uVar2 = (ulonglong)param_1 | 0x8000000000000;
            uVar6 = 0x21;
            uVar5 = 0;
            uVar3 = 1;
        }
        FUN_1407efc20(&DAT_140963b08,0x1f,uVar2,uVar3,uVar5,uVar6,param_1,0,1);
    }
    return;
}



void FUN_1409360fc(double param_1,double param_2,double param_3,double param_4)

{
    double dVar1;
    double dVar2;
    double dVar3;
    uint uVar4;
    uint uVar5;
    double dVar6;
    double in_stack_00000028;
    int *in_stack_00000030;
    double *in_stack_00000038;
    double *in_stack_00000040;

    param_3 = param_1 * param_3;
    if (param_3 <= 0.0) {
        param_3 = param_3 - 0.5;
    }
    else {
        param_3 = param_3 + 0.5;
    }
    uVar5 = (uint)param_3;
    uVar4 = uVar5 & 0x1f;
    dVar1 = *(double *)(&DAT_140b7d680 + (longlong)(int)uVar4 * 8);
    dVar2 = *(double *)(&DAT_140b7d580 + (longlong)(int)uVar4 * 8);
    *in_stack_00000030 = (int)((uVar5 - uVar4) + ((int)(uVar5 - uVar4) >> 0x1f & 0x1fU)) >> 5;
    dVar3 = (param_1 - (double)uVar5 * param_4) * param_2;
    *in_stack_00000038 = dVar2;
    param_2 = (double)-uVar5 * in_stack_00000028 * param_2;
    dVar6 = param_2 + dVar3;
    *in_stack_00000040 =
            (((((dVar6 * 0.001388894908637772 + 0.008333367984342196) * dVar6 + 0.04166666666622608) *
               dVar6 + 0.1666666666652609) * dVar6 + 0.5) * dVar6 * dVar6 + param_2 + dVar3) *
            (dVar1 + dVar2) + dVar1;
    return;
}



void FUN_140936224(double param_1,double param_2,double param_3,double param_4)

{
    double dVar1;
    double dVar2;
    double dVar3;
    uint uVar4;
    uint uVar5;
    double dVar6;
    double in_stack_00000028;
    int *in_stack_00000030;
    double *in_stack_00000038;
    double *in_stack_00000040;

    param_3 = param_1 * param_3;
    if (param_3 <= 0.0) {
        param_3 = param_3 - 0.5;
    }
    else {
        param_3 = param_3 + 0.5;
    }
    uVar5 = (uint)param_3;
    uVar4 = uVar5 & 0x1f;
    dVar1 = *(double *)(&DAT_140b7d8b0 + (longlong)(int)uVar4 * 8);
    dVar2 = *(double *)(&DAT_140b7d7b0 + (longlong)(int)uVar4 * 8);
    *in_stack_00000030 = (int)((uVar5 - uVar4) + ((int)(uVar5 - uVar4) >> 0x1f & 0x1fU)) >> 5;
    dVar3 = (param_1 - (double)uVar5 * param_4) * param_2;
    *in_stack_00000038 = dVar2;
    param_2 = (double)-uVar5 * in_stack_00000028 * param_2;
    dVar6 = param_2 + dVar3;
    *in_stack_00000040 =
            (((((dVar6 * 0.001388894908637772 + 0.008333367984342196) * dVar6 + 0.04166666666622608) *
               dVar6 + 0.1666666666652609) * dVar6 + 0.5) * dVar6 * dVar6 + param_2 + dVar3) *
            (dVar1 + dVar2) + dVar1;
    return;
}



ulonglong FUN_14093634c(ulonglong param_1)

{
    double dVar1;
    ulonglong uVar2;
    undefined4 uVar3;
    double dVar4;
    double dVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint uVar8;
    uint uVar9;
    int local_res8;
    double local_res18;
    double local_res20;
    ulonglong in_stack_ffffffffffffff98;

    uVar2 = param_1 & 0x7fffffffffffffff;
    uVar3 = (undefined4)param_1;
    uVar9 = (uint)(param_1 >> 0x20);
    if (uVar2 < 0x3e30000000000000) {
        if (uVar2 != 0) {
            _set_statfp(0x20);
            param_1 = CONCAT44(uVar9,uVar3);
        }
    }
    else if (uVar2 < 0x7ff0000000000001) {
        uVar2 = (ulonglong)(uVar2 != param_1);
        if (uVar2 != 0) {
            uVar9 = uVar9 ^ 0x80000000;
        }
        uVar3 = 0;
        uVar8 = 0x3ff00000;
        if ((double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20) < 20.0 ||
            (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20) == 20.0) {
            if (1.0 < (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20)) {
                uVar6 = 0;
                uVar7 = 0x40000000;
                FUN_140936224((double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20) * 2.0,
                              0x3ff0000000000000,0x40471547652b82fe,0x3f962e42fe000000);
                dVar5 = (double)CONCAT44(uVar8,uVar3) -
                        (double)CONCAT44(uVar7,uVar6) /
                        ((local_res18 + local_res20) * (double)((longlong)(local_res8 / 2) + 0x3ff << 0x34)
                         * (double)((longlong)(local_res8 - local_res8 / 2) + 0x3ff << 0x34) +
                         (double)CONCAT44(uVar8,uVar3));
                uVar3 = SUB84(dVar5,0);
                uVar8 = (uint)((ulonglong)dVar5 >> 0x20);
            }
            else {
                dVar5 = (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20) *
                        (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20);
                if (0.9 < (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20) ||
                    (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20) == 0.9) {
                    dVar4 = ((dVar5 * 0.000173076050126226 + 0.01673587754618966) * dVar5 + 0.3172045589772944
                            ) * dVar5 + 0.6833816119772959;
                    dVar1 = ((-0.00016559704390355 - dVar5 * 1.154758789961434e-08) * dVar5 -
                             0.01461730472887317) * dVar5 - 0.2277938706590883;
                    uVar3 = SUB84(dVar1,0);
                    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
                }
                else {
                    dVar4 = ((dVar5 * 0.0002091140262529164 + 0.02015621660269376) * dVar5 +
                             0.3816414142883289) * dVar5 + 0.8220912739685393;
                    dVar1 = ((-0.0002000476210719095 - dVar5 * 1.420779263788347e-08) * dVar5 -
                             0.01760163490030447) * dVar5 - 0.2740304246561798;
                    uVar3 = SUB84(dVar1,0);
                    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
                }
                dVar5 = ((double)CONCAT44(uVar6,uVar3) *
                         dVar5 * (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20)) / dVar4 +
                        (double)(param_1 & 0xffffffff | (ulonglong)uVar9 << 0x20);
                uVar3 = SUB84(dVar5,0);
                uVar8 = (uint)((ulonglong)dVar5 >> 0x20);
            }
        }
        if (uVar2 != 0) {
            uVar8 = uVar8 ^ 0x80000000;
        }
        param_1 = CONCAT44(uVar8,uVar3);
    }
    else {
        param_1 = FUN_1407efc20(&DAT_140963b18,0x21,param_1 | 0x8000000000000,1,
                                in_stack_ffffffffffffff98 & 0xffffffff00000000,0x21,param_1,0,1);
    }
    return param_1;
}



void FUN_140936620(undefined8 param_1,longlong param_2)

{
    if (*(int *)(param_2 + 0x80) != 0) {
        FUN_1407e2528(8);
    }
    return;
}



void FUN_140936644(undefined8 *param_1)

{
    FUN_1407e3a94(*(undefined4 *)*param_1,param_1);
    return;
}



void FUN_140936662(void)

{
    FUN_1407e2528(0xc);
    return;
}



void FUN_14093667d(void)

{
    FUN_1407e2528(0xc);
    return;
}



void FUN_140936698(undefined8 param_1,longlong param_2)

{
    uint *puVar1;

    puVar1 = (uint *)(*(longlong *)(param_2 + 0x60) + 200);
    *puVar1 = *puVar1 & 0xffffffef;
    return;
}



void FUN_1409366b3(void)

{
    FUN_1407dbd9c();
    return;
}



void FUN_1409366c7(undefined8 param_1,longlong param_2)

{
    _unlock_file(*(FILE **)(param_2 + 0x50));
    return;
}



void FUN_1409366e1(void)

{
    FUN_1407e2528(0);
    return;
}



void FUN_1409366f7(undefined8 param_1,longlong param_2)

{
    if (*(int *)(param_2 + 0x60) != 0) {
        FUN_1407e2528(0);
    }
    return;
}



void FUN_140936715(undefined8 param_1,longlong param_2)

{
    _unlock_file(*(FILE **)(param_2 + 0x48));
    return;
}



void FUN_14093672d(undefined8 param_1,longlong param_2)

{
    _unlock_file(*(FILE **)(param_2 + 0x30));
    return;
}



void FUN_140936745(undefined8 param_1,longlong param_2)

{
    _unlock_file2(*(int *)(param_2 + 0x20),
                  *(void **)(DAT_140dc5328 + (longlong)*(int *)(param_2 + 0x20) * 8));
    return;
}



void FUN_14093676d(void)

{
    FUN_1407e2528(1);
    return;
}



void FUN_140936786(undefined8 param_1,longlong param_2)

{
    _unlock_file(*(FILE **)(param_2 + 0x40));
    return;
}



void FUN_1409367a0(void)

{
    // WARNING: Could not recover jumptable at 0x0001409367b5. Too many branches
    // WARNING: Treating indirect jump as call
    LeaveCriticalSection(DAT_140c0f870);
    return;
}



bool FUN_1409367c0(int **param_1)

{
    return **param_1 == -0x3ffffffb;
}



void FUN_1409367e0(void)

{
    FUN_1407e2528(0xd);
    return;
}



void FUN_1409367f9(void)

{
    FUN_1407e2528(0xd);
    return;
}



void FUN_140936812(void)

{
    FUN_1407e2528(0xc);
    return;
}



void FUN_14093682b(void)

{
    FUN_1407e2528(0xb);
    return;
}



void FUN_140936846(void)

{
    FUN_1407e2528(0xc);
    return;
}



void FUN_14093685f(void)

{
    FUN_1407e2528(1);
    return;
}



void FUN_140936878(undefined8 param_1,longlong param_2)

{
    FUN_1407f56c8(*(undefined4 *)(param_2 + 0x40));
    return;
}



bool FUN_14093688f(undefined8 param_1,longlong param_2)

{
    return *(char *)(param_2 + 0x38) != '\0';
}



void FUN_1409368a7(void)

{
    FUN_1407e2528(0xe);
    return;
}



void FUN_1409368c0(undefined8 param_1,longlong param_2)

{
    FUN_1407f56c8(*(undefined4 *)(param_2 + 0x50));
    return;
}



void FUN_1409368d7(void)

{
    longlong lVar1;

    lVar1 = FUN_1407ddfa0();
    _unlock_file2(1,(void *)(lVar1 + 0x30));
    return;
}



void FUN_1409368fe(void)

{
    FUN_1407e2528(10);
    return;
}



void FUN_140936917(void)

{
    FUN_1407e2528(10);
    return;
}



void FUN_140936932(void)

{
    FUN_1407e2528(0xb);
    return;
}



void FUN_14093694b(undefined8 param_1,longlong param_2)

{
    byte *pbVar1;

    if (*(int *)(param_2 + 0x40) != 0) {
        if (*(int *)(param_2 + 0x44) != 0) {
            pbVar1 = (byte *)((&DAT_140c60410)[(longlong)(int)**(uint **)(param_2 + 0x80) >> 5] + 8 +
                              (ulonglong)(**(uint **)(param_2 + 0x80) & 0x1f) * 0x58);
            *pbVar1 = *pbVar1 & 0xfe;
        }
        FUN_1407f56c8(**(undefined4 **)(param_2 + 0x80));
    }
    return;
}



undefined8 FUN_14093699e(int **param_1)

{
    undefined8 uVar1;

    if ((**param_1 == -0x3ffffffb) || (**param_1 == -0x3fffffe3)) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}



undefined8 FUN_1409369d0(void)

{
    return 0xffffffff;
}



void FUN_1409369e3(undefined8 param_1,longlong param_2)

{
    _unlock_file(*(FILE **)(param_2 + 0x38));
    return;
}



void FUN_1409369fb(undefined8 param_1,longlong param_2)

{
    _unlock_file(*(FILE **)(param_2 + 0x78));
    return;
}



void FUN_140936a13(void)

{
    FUN_1407e2528(7);
    return;
}



void FUN_140936a2c(void)

{
    FUN_1407e2528(6);
    return;
}



void FUN_140936a45(void)

{
    FUN_1407e2528(7);
    return;
}



undefined8 FUN_140936a60(void)

{
    return 0xffffffff;
}



void FUN_140936a80(void)

{
    FUN_14000a310();
    FUN_1407dd89c(&LAB_14094c7d0);
    return;
}



void FUN_140936aa0(void)

{
    undefined2 *puVar1;
    wchar_t *local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    local_20 = (undefined2 *)0x0;
    local_18 = (undefined2 *)0x0;
    local_10 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_10 = puVar1 + 1;
    local_20 = puVar1;
    local_18 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409d04a4,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_30 = 2;
    local_38 = L"login.account";
    local_18 = puVar1;
    FUN_1400198c0(&DAT_140c667c0,&local_38,local_28,1,0);
    FUN_140001b70();
    if (local_20 != (undefined2 *)0x0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094c7e0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140936b60(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_login_saveAccount_140c3adc8);
    *puVar1 = &PTR_PTR_LAB_140c3adc0;
    PTR_PTR_LAB_140c3adc0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3ade7 = 0;
    _DAT_140c3ade8 = 0;
    _DAT_140c3adf0 = 0;
    _DAT_140c3adf8 = 0;
    _DAT_140c3ade0 = 0;
    DAT_140c3ade4 = 0;
    FUN_1407dd89c(&LAB_14094c7f0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140936bd0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_login_saveIp_140c3ae08);
    *puVar1 = &PTR_PTR_LAB_140c3ae00;
    PTR_PTR_LAB_140c3ae00 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3ae27 = 1;
    _DAT_140c3ae20 = 0x1010101;
    DAT_140c3ae24 = 1;
    _DAT_140c3ae28 = 0;
    _DAT_140c3ae30 = 0;
    _DAT_140c3ae38 = 0;
    FUN_1407dd89c(&LAB_14094c830);
    return;
}



void FUN_140936c50(void)

{
    undefined2 *puVar1;
    wchar_t *local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    local_20 = (undefined2 *)0x0;
    local_18 = (undefined2 *)0x0;
    local_10 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_10 = puVar1 + 1;
    local_20 = puVar1;
    local_18 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409d050c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_30 = 2;
    local_38 = L"login.realm";
    local_18 = puVar1;
    FUN_1400198c0(&DAT_140c66900,&local_38,local_28,2,0);
    FUN_140001b70();
    if (local_20 != (undefined2 *)0x0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094c870);
    return;
}



void FUN_140936d10(void)

{
    undefined2 *puVar1;
    wchar_t *local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    local_20 = (undefined2 *)0x0;
    local_18 = (undefined2 *)0x0;
    local_10 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_10 = puVar1 + 1;
    local_20 = puVar1;
    local_18 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409d053c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_30 = 2;
    local_38 = L"login.character";
    local_18 = puVar1;
    FUN_1400198c0(&DAT_140c66a40,&local_38,local_28,3,0);
    FUN_140001b70();
    if (local_20 != (undefined2 *)0x0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094c880);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140936de0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_draw_walk_140c3ae88);
    *puVar1 = &PTR_PTR_LAB_140c3ae80;
    PTR_PTR_LAB_140c3ae80 = (undefined *)&PTR_LAB_140b55200;
    _DAT_140c3aebc = 0;
    _DAT_140c3aec0 = 0;
    _DAT_140c3aec8 = 0;
    _DAT_140c3aed0 = 0;
    _DAT_140c3aea0 = 0;
    _DAT_140c3aea8 = 0;
    _DAT_140c3aeb0 = 0;
    FUN_1407dd89c(&LAB_14094c8d0);
    return;
}



void FUN_140936e70(void)

{
    undefined2 *puVar1;
    undefined8 local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined2 *local_20;
    undefined2 *local_18;
    undefined2 *local_10;

    local_20 = (undefined2 *)0x0;
    local_18 = (undefined2 *)0x0;
    local_10 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_10 = puVar1 + 1;
    local_20 = puVar1;
    local_18 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409d057c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_38 = 0;
    local_30 = 0;
    local_18 = puVar1;
    FUN_1400198c0(&DAT_140c66b80,&local_38,local_28,1,0);
    FUN_140001b70();
    if (local_20 != (undefined2 *)0x0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094c950);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140936f50(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_lod_defaults_140c3b0b8);
    *puVar1 = &PTR_PTR_LAB_140c3b0b0;
    PTR_PTR_LAB_140c3b0b0 = (undefined *)&PTR_LAB_140b55200;
    _DAT_140c3b0e8 = 2;
    _DAT_140c3b0e0 = 0;
    _DAT_140c3b0f0 = 0;
    _DAT_140c3b100 = 0;
    _DAT_140c3b0d0 = 0;
    _DAT_140c3b0d8 = 0;
    _DAT_140c3b0f8 = 1;
    FUN_1407dd89c(&LAB_14094ca20);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140936fd0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_exclusive_140c3b148);
    *puVar1 = &PTR_PTR_LAB_140c3b140;
    PTR_PTR_LAB_140c3b140 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b167 = 1;
    _DAT_140c3b168 = 0;
    _DAT_140c3b170 = 0;
    _DAT_140c3b160 = 0x1010101;
    DAT_140c3b164 = 1;
    _DAT_140c3b178 = &LAB_1400163b0;
    FUN_1407dd89c(&LAB_14094ca60);
    return;
}



void FUN_140937050(undefined8 param_1)

{
    undefined8 local_28;
    undefined4 local_20;
    wchar_t *local_18;
    undefined4 local_10;

    local_28 = 0;
    local_20 = 0;
    local_18 = L"video.exclusiveDisplayMode";
    local_10 = 2;
    FUN_140019cb0(param_1,&local_18,&local_28);
    FUN_1407dd89c(&LAB_14094caa0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409370a0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_fullscreen_140c3b188);
    *puVar1 = &PTR_PTR_LAB_140c3b180;
    PTR_PTR_LAB_140c3b180 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b1a7 = 1;
    _DAT_140c3b1a8 = 0;
    _DAT_140c3b1b0 = 0;
    _DAT_140c3b1a0 = 0x1010101;
    DAT_140c3b1a4 = 1;
    _DAT_140c3b1b8 = &LAB_1400163b0;
    FUN_1407dd89c(&LAB_14094cae0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937120(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_verticalSync_140c3b1c8);
    *puVar1 = &PTR_PTR_LAB_140c3b1c0;
    PTR_PTR_LAB_140c3b1c0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b1e7 = 0;
    _DAT_140c3b1e8 = 0;
    _DAT_140c3b1f0 = 0;
    _DAT_140c3b1e0 = 0;
    DAT_140c3b1e4 = 0;
    _DAT_140c3b1f8 = &LAB_1400163b0;
    FUN_1407dd89c(&LAB_14094cb20);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409371a0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_windowPos_140c3b208);
    *puVar1 = &PTR_PTR_LAB_140c3b200;
    _DAT_140c3b220 = ZEXT816(0);
    _DAT_140c3b230 = ZEXT816(0);
    PTR_PTR_LAB_140c3b200 = (undefined *)&PTR_LAB_140b551c8;
    _DAT_140c3b258 = 0;
    _DAT_140c3b260 = 0;
    _DAT_140c3b268 = 0;
    _DAT_140c3b240 = 0;
    _DAT_140c3b270 = &LAB_140016390;
    FUN_1407dd89c(&LAB_14094cb60);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937230(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_windowSize_140c3b288);
    *puVar1 = &PTR_PTR_LAB_140c3b280;
    _DAT_140c3b2a0 = ZEXT816(0);
    _DAT_140c3b2b0 = ZEXT816(0);
    PTR_PTR_LAB_140c3b280 = (undefined *)&PTR_LAB_140b551c8;
    _DAT_140c3b2d8 = 0;
    _DAT_140c3b2e0 = 0;
    _DAT_140c3b2e8 = 0;
    _DAT_140c3b2c0 = 0;
    _DAT_140c3b2f0 = &LAB_140016390;
    FUN_1407dd89c(&LAB_14094cba0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409372c0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_windowMaximized_140c3b308);
    *puVar1 = &PTR_PTR_LAB_140c3b300;
    PTR_PTR_LAB_140c3b300 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b327 = 0;
    _DAT_140c3b328 = 0;
    _DAT_140c3b330 = 0;
    _DAT_140c3b320 = 0;
    DAT_140c3b324 = 0;
    _DAT_140c3b338 = &LAB_140016390;
    FUN_1407dd89c(&LAB_14094cbe0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937340(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_windowMinimized_140c3b348);
    *puVar1 = &PTR_PTR_LAB_140c3b340;
    PTR_PTR_LAB_140c3b340 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b367 = 0;
    _DAT_140c3b368 = 0;
    _DAT_140c3b370 = 0;
    _DAT_140c3b360 = 0;
    DAT_140c3b364 = 0;
    _DAT_140c3b378 = &LAB_140016390;
    FUN_1407dd89c(&LAB_14094cc20);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409373c0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_tutorial_visibilityFlags_140c3b388);
    *puVar1 = &PTR_PTR_LAB_140c3b380;
    PTR_PTR_LAB_140c3b380 = (undefined *)&PTR_LAB_140b55200;
    _DAT_140c3b3bc = 0xffffffff;
    _DAT_140c3b3a0 = 0xffffffffffffffff;
    _DAT_140c3b3a8 = 0xffffffffffffffff;
    _DAT_140c3b3b0 = 0xffffffff;
    _DAT_140c3b3c0 = 0;
    _DAT_140c3b3c8 = 0;
    _DAT_140c3b3d0 = 0;
    FUN_1407dd89c(&LAB_14094cc60);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937450(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_demotime_remaining_140c3b3e8);
    *puVar1 = &PTR_PTR_LAB_140c3b3e0;
    PTR_PTR_LAB_140c3b3e0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b418 = 0x45e10000;
    _DAT_140c3b400 = ZEXT816(0);
    _DAT_140c3b410 = 0;
    _DAT_140c3b41c = 0;
    _DAT_140c3b428 = 1;
    _DAT_140c3b420 = 0;
    _DAT_140c3b430 = 0;
    FUN_1407dd89c(&LAB_14094cca0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937530(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeMaster_140c3b948);
    *puVar1 = &PTR_PTR_LAB_140c3b940;
    _DAT_140c3b97c = 0x3f666666;
    _DAT_140c3b974 = 0;
    _DAT_140c3b978 = 0x3f800000;
    _DAT_140c3b960 = 0x3f666666;
    uRam0000000140c3b964 = 0x3f666666;
    uRam0000000140c3b968 = 0x3f666666;
    uRam0000000140c3b96c = 0x3f666666;
    PTR_PTR_LAB_140c3b940 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b980 = 0;
    _DAT_140c3b988 = 1;
    _DAT_140c3b970 = 0x3f666666;
    _DAT_140c3b990 = &LAB_1400516c0;
    FUN_1407dd89c(&LAB_14094cd80);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409375e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeAmbient_140c3b568);
    *puVar1 = &PTR_PTR_LAB_140c3b560;
    PTR_PTR_LAB_140c3b560 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b594 = 0;
    _DAT_140c3b580 = 0x3f800000;
    uRam0000000140c3b584 = 0x3f800000;
    uRam0000000140c3b588 = 0x3f800000;
    uRam0000000140c3b58c = 0x3f800000;
    _DAT_140c3b598 = 0x3f800000;
    _DAT_140c3b59c = 0x3f800000;
    _DAT_140c3b5a0 = 0;
    _DAT_140c3b5b0 = FUN_140051710;
    _DAT_140c3b5a8 = 1;
    _DAT_140c3b590 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094cdc0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937680(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeMusic_140c3b5f8);
    *puVar1 = &PTR_PTR_LAB_140c3b5f0;
    PTR_PTR_LAB_140c3b5f0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b624 = 0;
    _DAT_140c3b610 = 0x3f800000;
    uRam0000000140c3b614 = 0x3f800000;
    uRam0000000140c3b618 = 0x3f800000;
    uRam0000000140c3b61c = 0x3f800000;
    _DAT_140c3b628 = 0x3f800000;
    _DAT_140c3b62c = 0x3f800000;
    _DAT_140c3b630 = 0;
    _DAT_140c3b640 = FUN_140051760;
    _DAT_140c3b638 = 1;
    _DAT_140c3b620 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094ce00);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937720(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeSfx_140c3b658);
    *puVar1 = &PTR_PTR_LAB_140c3b650;
    PTR_PTR_LAB_140c3b650 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b684 = 0;
    _DAT_140c3b670 = 0x3f800000;
    uRam0000000140c3b674 = 0x3f800000;
    uRam0000000140c3b678 = 0x3f800000;
    uRam0000000140c3b67c = 0x3f800000;
    _DAT_140c3b688 = 0x3f800000;
    _DAT_140c3b68c = 0x3f800000;
    _DAT_140c3b690 = 0;
    _DAT_140c3b6a0 = FUN_1400517b0;
    _DAT_140c3b698 = 1;
    _DAT_140c3b680 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094ce40);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409377c0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeUI_140c3b6e8);
    *puVar1 = &PTR_PTR_LAB_140c3b6e0;
    PTR_PTR_LAB_140c3b6e0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b714 = 0;
    _DAT_140c3b700 = 0x3f800000;
    uRam0000000140c3b704 = 0x3f800000;
    uRam0000000140c3b708 = 0x3f800000;
    uRam0000000140c3b70c = 0x3f800000;
    _DAT_140c3b718 = 0x3f800000;
    _DAT_140c3b71c = 0x3f800000;
    _DAT_140c3b720 = 0;
    _DAT_140c3b730 = FUN_140051800;
    _DAT_140c3b728 = 1;
    _DAT_140c3b710 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094ce80);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937860(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeVoice_140c3b748);
    *puVar1 = &PTR_PTR_LAB_140c3b740;
    PTR_PTR_LAB_140c3b740 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b774 = 0;
    _DAT_140c3b760 = 0x3f800000;
    uRam0000000140c3b764 = 0x3f800000;
    uRam0000000140c3b768 = 0x3f800000;
    uRam0000000140c3b76c = 0x3f800000;
    _DAT_140c3b778 = 0x3f800000;
    _DAT_140c3b77c = 0x3f800000;
    _DAT_140c3b780 = 0;
    _DAT_140c3b790 = FUN_140051850;
    _DAT_140c3b788 = 1;
    _DAT_140c3b770 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094cec0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937900(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_volumeMovie_140c3b8e8);
    *puVar1 = &PTR_PTR_LAB_140c3b8e0;
    PTR_PTR_LAB_140c3b8e0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3b914 = 0;
    _DAT_140c3b900 = 0x3f800000;
    uRam0000000140c3b904 = 0x3f800000;
    uRam0000000140c3b908 = 0x3f800000;
    uRam0000000140c3b90c = 0x3f800000;
    _DAT_140c3b918 = 0x3f800000;
    _DAT_140c3b91c = 0x3f800000;
    _DAT_140c3b920 = 0;
    _DAT_140c3b930 = FUN_140001b70;
    _DAT_140c3b928 = 1;
    _DAT_140c3b910 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094cf00);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409379a0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_playInBackground_140c3b7a8);
    *puVar1 = &PTR_PTR_LAB_140c3b7a0;
    PTR_PTR_LAB_140c3b7a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b7c7 = 1;
    _DAT_140c3b7c0 = 0x1010101;
    DAT_140c3b7c4 = 1;
    _DAT_140c3b7c8 = 0;
    _DAT_140c3b7d0 = 0;
    _DAT_140c3b7d8 = 0;
    FUN_1407dd89c(&LAB_14094cf40);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937a20(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_mute_140c3b7e8);
    *puVar1 = &PTR_PTR_LAB_140c3b7e0;
    PTR_PTR_LAB_140c3b7e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b807 = 0;
    _DAT_140c3b808 = 0;
    _DAT_140c3b810 = 0;
    _DAT_140c3b818 = 0;
    _DAT_140c3b800 = 0;
    DAT_140c3b804 = 0;
    FUN_1407dd89c(&LAB_14094cf80);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937ab0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_app_introVideoPlayedStory_140c3b9a8)
            ;
    *puVar1 = &PTR_PTR_LAB_140c3b9a0;
    PTR_PTR_LAB_140c3b9a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3b9c7 = 0;
    _DAT_140c3b9c8 = 0;
    _DAT_140c3b9d0 = 0;
    _DAT_140c3b9d8 = 0;
    _DAT_140c3b9c0 = 0;
    DAT_140c3b9c4 = 0;
    FUN_1407dd89c(&LAB_14094d040);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140937ec0(void)

{
    uint uVar1;
    int iVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    ulonglong uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar9 [16];
    undefined4 uVar10;

    uVar1 = (uint)register0x00000020;
    fVar6 = (DAT_140c66f38 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar11 = (DAT_140c66f30 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar18 = fVar6 * 0.5;
    fVar15 = fVar18 + fVar11;
    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar18))) >> 0x20,0),
                        fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar16 = SUB164(auVar13,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar13 >> 0x20,0);
    fVar15 = fVar16 * 0.3333333 + 1e-05;
    auVar13 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar13 >> 0x60,0),
                                          CONCAT48(SUB164(auVar13 >> 0x40,0),CONCAT44(uVar10,fVar16)))
                                        >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar3 = ZEXT416((uint)(fVar11 - fVar18)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar3,0);
    fVar11 = SUB164(auVar13,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar3,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar3,0) | SUB168(auVar3,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar3,0) - fVar6) - fVar11) + 1.0 + (fVar16 - fVar11)) * 0.3333333 + 1e-05;
    uVar12 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar11),0);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar3 >> 0x40,0),uVar12 | uVar12 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        uVar12 = (ulonglong)(uint)(float)(iVar2 - uVar1);
    }
    fVar11 = (fVar6 - (float)uVar12) * 0.5;
    auVar3 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar3,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (DAT_140c66f28 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar15 = (DAT_140c66f20 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar11,fVar11);
    auVar9 = CONCAT412(fVar11,CONCAT48(fVar11,lVar7));
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar11 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar16 = fVar11 * 0.5;
    fVar18 = fVar16 + fVar15;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar16))) >> 0x20,0),
                        fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = SUB164(auVar9,0);
    fVar17 = SUB164(auVar14,0) - fVar11 * 2.0;
    uVar10 = SUB164(auVar14 >> 0x20,0);
    fVar18 = fVar17 * 0.3333333 + 1e-05;
    auVar14 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar14 >> 0x60,0),
                                          CONCAT48(SUB164(auVar14 >> 0x40,0),CONCAT44(uVar10,fVar17)))
                                        >> 0x20,0),fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar15 - fVar16)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar15 = SUB164(auVar14,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (((SUB164(auVar4,0) - fVar11) - fVar15) + 1.0 + (fVar17 - fVar15)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        auVar5 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (fVar11 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    _DAT_140c66f08 = (int)(SUB164(auVar14,0) * 2.0 + fVar11 + SUB164(auVar5,0)) + -1;
    _DAT_140c66f0c = (int)SUB164(auVar4,0) + -1;
    _DAT_140c66f10 = (int)(SUB164(auVar13,0) * 2.0 + fVar6 + (float)uVar12) + 2;
    _DAT_140c66f14 = (int)SUB164(auVar3,0) + 2;
    return;
}



void FUN_140938370(void)

{
    FUN_1400b2a60();
    FUN_1407dd89c(&LAB_14094d2b0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938390(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_musicLoopImmediate_140c3bee8);
    *puVar1 = &PTR_PTR_LAB_140c3bee0;
    PTR_PTR_LAB_140c3bee0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3bf07 = 0;
    _DAT_140c3bf08 = 0;
    _DAT_140c3bf10 = 0;
    _DAT_140c3bf18 = 0;
    _DAT_140c3bf00 = 0;
    DAT_140c3bf04 = 0;
    FUN_1407dd89c(&LAB_14094d2c0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938460(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_TooltipDelay_140c3c3c8);
    *puVar1 = &PTR_PTR_LAB_140c3c3c0;
    _DAT_140c3c3fc = 0x3e4ccccd;
    _DAT_140c3c3f4 = 0;
    _DAT_140c3c3f8 = 0x41a00000;
    _DAT_140c3c3e0 = 0x3e4ccccd;
    uRam0000000140c3c3e4 = 0x3e4ccccd;
    uRam0000000140c3c3e8 = 0x3e4ccccd;
    uRam0000000140c3c3ec = 0x3e4ccccd;
    PTR_PTR_LAB_140c3c3c0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3c408 = 1;
    _DAT_140c3c400 = 0;
    _DAT_140c3c410 = 0;
    _DAT_140c3c3f0 = 0x3e4ccccd;
    FUN_1407dd89c(&LAB_14094d480);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938500(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_WindowWireframe_140c3c5e8);
    *puVar1 = &PTR_PTR_LAB_140c3c5e0;
    PTR_PTR_LAB_140c3c5e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3c607 = 0;
    _DAT_140c3c608 = 0;
    _DAT_140c3c610 = 0;
    _DAT_140c3c618 = 0;
    _DAT_140c3c600 = 0;
    DAT_140c3c604 = 0;
    FUN_1407dd89c(&LAB_14094d4c0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938570(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_WindowMouseTargetWireframe_140c3c628);
    *puVar1 = &PTR_PTR_LAB_140c3c620;
    PTR_PTR_LAB_140c3c620 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3c647 = 0;
    _DAT_140c3c648 = 0;
    _DAT_140c3c650 = 0;
    _DAT_140c3c658 = 0;
    _DAT_140c3c640 = 0;
    DAT_140c3c644 = 0;
    FUN_1407dd89c(&LAB_14094d500);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938600(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_scale_140c3c4c8);
    *puVar1 = &PTR_PTR_LAB_140c3c4c0;
    _DAT_140c3c4fc = 0x3f800000;
    _DAT_140c3c4f4 = 0x3f400000;
    _DAT_140c3c4f8 = 0x3fc00000;
    _DAT_140c3c4e0 = 0x3f800000;
    uRam0000000140c3c4e4 = 0x3f800000;
    uRam0000000140c3c4e8 = 0x3f800000;
    uRam0000000140c3c4ec = 0x3f800000;
    PTR_PTR_LAB_140c3c4c0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c3c508 = 1;
    _DAT_140c3c500 = 0;
    _DAT_140c3c510 = 0;
    _DAT_140c3c4f0 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094d5c0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409386b0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_snapshotAnimation_140c3c568);
    *puVar1 = &PTR_PTR_LAB_140c3c560;
    PTR_PTR_LAB_140c3c560 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3c587 = 1;
    _DAT_140c3c580 = 0x1010101;
    DAT_140c3c584 = 1;
    _DAT_140c3c588 = 0;
    _DAT_140c3c590 = 0;
    _DAT_140c3c598 = 0;
    FUN_1407dd89c(&LAB_14094d640);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938730(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_enableAddonProfiling_140c3c5a8);
    *puVar1 = &PTR_PTR_LAB_140c3c5a0;
    PTR_PTR_LAB_140c3c5a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3c5c7 = 0;
    _DAT_140c3c5c8 = 0;
    _DAT_140c3c5d0 = 0;
    _DAT_140c3c5d8 = 0;
    _DAT_140c3c5c0 = 0;
    DAT_140c3c5c4 = 0;
    FUN_1407dd89c(&LAB_14094d680);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409387e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_alienwarefx_enable_140c3cb78);
    *puVar1 = &PTR_PTR_LAB_140c3cb70;
    PTR_PTR_LAB_140c3cb70 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c3cb97 = 0;
    _DAT_140c3cb98 = 0;
    _DAT_140c3cba0 = 0;
    _DAT_140c3cb90 = 0;
    DAT_140c3cb94 = 0;
    _DAT_140c3cba8 = &LAB_1400fd7f0;
    FUN_1407dd89c(&LAB_14094d7c0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140938860(void)

{
    DAT_140c67260 = (undefined *)FUN_14018b280();
    _DAT_140c67268 = 0;
    *DAT_140c67260 = 0;
    *(undefined8 *)(DAT_140c67260 + 8) = 0;
    *(undefined **)(DAT_140c67260 + 0x10) = DAT_140c67260;
    *(undefined **)(DAT_140c67260 + 0x18) = DAT_140c67260;
    FUN_1407dd89c(FUN_14094d800);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409388c0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_ignoreAPIVersionMismatchThres_140c3da68);
    *puVar1 = &PTR_PTR_LAB_140c3da60;
    PTR_PTR_LAB_140c3da60 = (undefined *)&PTR_LAB_140b55dd8;
    _DAT_140c3da80 = ZEXT816(0);
    _DAT_140c3da98 = 10000;
    _DAT_140c3daa8 = 1;
    _DAT_140c3da90 = 0;
    _DAT_140c3daa0 = 0;
    _DAT_140c3dab0 = 0;
    FUN_1407dd89c(&LAB_14094d830);
    return;
}



void FUN_140938c60(void)

{
    FUN_1407dc3cc(FUN_140193580);
    FUN_1407dce60(0,L"English_United States.1252");
    FUN_1407dd89c(&LAB_14094d8d0);
    return;
}



void FUN_140938ca0(void)

{
    FUN_1401a1280();
    FUN_1407dd89c(FUN_14094d940);
    return;
}



void FUN_140938cf0(void)

{
    FUN_1401ae3c0(&DAT_140c77890);
    FUN_1407dd89c(&LAB_14094d9b0);
    return;
}



void FUN_140938e10(void)

{
    FUN_1401c4800();
    FUN_1407dd89c(&LAB_14094da20);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409390b0(void)

{
    DAT_140c799d8 = (undefined *)FUN_14018b280();
    _DAT_140c799e0 = 0;
    *DAT_140c799d8 = 0;
    *(undefined8 *)(DAT_140c799d8 + 8) = 0;
    *(undefined **)(DAT_140c799d8 + 0x10) = DAT_140c799d8;
    *(undefined **)(DAT_140c799d8 + 0x18) = DAT_140c799d8;
    FUN_1407dd89c(FUN_14094da50);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939120(void)

{
    DAT_140c79a08 = (undefined *)FUN_14018b280();
    _DAT_140c79a10 = 0;
    *DAT_140c79a08 = 0;
    *(undefined8 *)(DAT_140c79a08 + 8) = 0;
    *(undefined **)(DAT_140c79a08 + 0x10) = DAT_140c79a08;
    *(undefined **)(DAT_140c79a08 + 0x18) = DAT_140c79a08;
    FUN_1407dd89c(FUN_14094daa0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939180(void)

{
    DAT_140c79a28 = (undefined *)FUN_14018b280();
    _DAT_140c79a30 = 0;
    *DAT_140c79a28 = 0;
    *(undefined8 *)(DAT_140c79a28 + 8) = 0;
    *(undefined **)(DAT_140c79a28 + 0x10) = DAT_140c79a28;
    *(undefined **)(DAT_140c79a28 + 0x18) = DAT_140c79a28;
    FUN_1407dd89c(FUN_14094dad0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1409391e0(void)

{
    DAT_140c79a48 = (undefined *)FUN_14018b280();
    _DAT_140c79a50 = 0;
    *DAT_140c79a48 = 0;
    *(undefined8 *)(DAT_140c79a48 + 8) = 0;
    *(undefined **)(DAT_140c79a48 + 0x10) = DAT_140c79a48;
    *(undefined **)(DAT_140c79a48 + 0x18) = DAT_140c79a48;
    FUN_1407dd89c(FUN_14094db00);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939260(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_video_framerateMax_140c3fea8);
    *puVar1 = &PTR_PTR_LAB_140c3fea0;
    PTR_PTR_LAB_140c3fea0 = (undefined *)&PTR_LAB_140b55200;
    _DAT_140c3fed4 = 0xf;
    _DAT_140c3fed8 = 0xb4;
    _DAT_140c3fedc = 0x78;
    _DAT_140c3fee8 = 1;
    _DAT_140c3fee0 = 0;
    _DAT_140c3fef0 = 0;
    _DAT_140c3fec0 = 0x78;
    _DAT_140c3fec4 = 0x78;
    _DAT_140c3fec8 = 0x78;
    _DAT_140c3fecc = 0x78;
    _DAT_140c3fed0 = 0x78;
    FUN_1407dd89c(&LAB_14094dc00);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939650(void)

{
    uint uVar1;
    int iVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    ulonglong uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar9 [16];
    undefined4 uVar10;

    uVar1 = (uint)register0x00000020;
    fVar6 = (DAT_140c79ab8 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar11 = (DAT_140c79ab0 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar18 = fVar6 * 0.5;
    fVar15 = fVar18 + fVar11;
    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar18))) >> 0x20,0),
                        fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar16 = SUB164(auVar13,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar13 >> 0x20,0);
    fVar15 = fVar16 * 0.3333333 + 1e-05;
    auVar13 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar13 >> 0x60,0),
                                          CONCAT48(SUB164(auVar13 >> 0x40,0),CONCAT44(uVar10,fVar16)))
                                        >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar3 = ZEXT416((uint)(fVar11 - fVar18)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar3,0);
    fVar11 = SUB164(auVar13,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar3,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar3,0) | SUB168(auVar3,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar3,0) - fVar6) - fVar11) + 1.0 + (fVar16 - fVar11)) * 0.3333333 + 1e-05;
    uVar12 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar11),0);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar3 >> 0x40,0),uVar12 | uVar12 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        uVar12 = (ulonglong)(uint)(float)(iVar2 - uVar1);
    }
    fVar11 = (fVar6 - (float)uVar12) * 0.5;
    auVar3 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar3,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (DAT_140c79aa8 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar15 = (DAT_140c79aa0 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar11,fVar11);
    auVar9 = CONCAT412(fVar11,CONCAT48(fVar11,lVar7));
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar11 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar16 = fVar11 * 0.5;
    fVar18 = fVar16 + fVar15;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar16))) >> 0x20,0),
                        fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = SUB164(auVar9,0);
    fVar17 = SUB164(auVar14,0) - fVar11 * 2.0;
    uVar10 = SUB164(auVar14 >> 0x20,0);
    fVar18 = fVar17 * 0.3333333 + 1e-05;
    auVar14 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar14 >> 0x60,0),
                                          CONCAT48(SUB164(auVar14 >> 0x40,0),CONCAT44(uVar10,fVar17)))
                                        >> 0x20,0),fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar15 - fVar16)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar15 = SUB164(auVar14,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (((SUB164(auVar4,0) - fVar11) - fVar15) + 1.0 + (fVar17 - fVar15)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        auVar5 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (fVar11 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    _DAT_140c79b08 = (int)(SUB164(auVar14,0) * 2.0 + fVar11 + SUB164(auVar5,0)) + -1;
    _DAT_140c79b0c = (int)SUB164(auVar4,0) + -1;
    _DAT_140c79b10 = (int)(SUB164(auVar13,0) * 2.0 + fVar6 + (float)uVar12) + 2;
    _DAT_140c79b14 = (int)SUB164(auVar3,0) + 2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939ad0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ppp_cc_140c400c8);
    *puVar1 = &PTR_PTR_LAB_140c400c0;
    PTR_PTR_LAB_140c400c0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c400e7 = 1;
    _DAT_140c400e0 = 0x1010101;
    DAT_140c400e4 = 1;
    _DAT_140c400e8 = 0;
    _DAT_140c400f0 = 0;
    _DAT_140c400f8 = 0;
    FUN_1407dd89c(&LAB_14094dc80);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939b50(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ppp_gamma_140c40108);
    *puVar1 = &PTR_PTR_LAB_140c40100;
    _DAT_140c4013c = 0x3f800000;
    _DAT_140c40134 = 0x3c23d70a;
    _DAT_140c40138 = 0x40000000;
    _DAT_140c40120 = 0x3f800000;
    uRam0000000140c40124 = 0x3f800000;
    uRam0000000140c40128 = 0x3f800000;
    uRam0000000140c4012c = 0x3f800000;
    PTR_PTR_LAB_140c40100 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c40148 = 1;
    _DAT_140c40140 = 0;
    _DAT_140c40150 = 0;
    _DAT_140c40130 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094dcc0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939c60(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_fxaa_enable_140c40508);
    *puVar1 = &PTR_PTR_LAB_140c40500;
    PTR_PTR_LAB_140c40500 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c40527 = 1;
    _DAT_140c40520 = 0x1010101;
    DAT_140c40524 = 1;
    _DAT_140c40528 = 0;
    _DAT_140c40530 = 0;
    _DAT_140c40538 = 0;
    FUN_1407dd89c(&LAB_14094dec0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939ce0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_fxaa_preset_140c404a8);
    *puVar1 = &PTR_PTR_LAB_140c404a0;
    PTR_PTR_LAB_140c404a0 = (undefined *)&PTR_LAB_140b55200;
    _DAT_140c404d8 = 5;
    _DAT_140c404dc = 3;
    _DAT_140c404e8 = 1;
    _DAT_140c404c0 = 3;
    _DAT_140c404d4 = 0;
    _DAT_140c404e0 = 0;
    _DAT_140c404f0 = 0;
    _DAT_140c404c4 = 3;
    _DAT_140c404c8 = 3;
    _DAT_140c404cc = 3;
    _DAT_140c404d0 = 3;
    FUN_1407dd89c(&LAB_14094df00);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140939dc0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_gfx_jpgdstfmt_140c405c8);
    *puVar1 = &PTR_PTR_LAB_140c405c0;
    _DAT_140c405e0 = ZEXT816(0);
    PTR_PTR_LAB_140c405c0 = (undefined *)&PTR_LAB_140b55dd8;
    _DAT_140c405f0 = 0;
    _DAT_140c40600 = 0;
    _DAT_140c405f8 = 1;
    _DAT_140c40610 = &LAB_140263080;
    _DAT_140c40608 = 1;
    FUN_1407dd89c(&LAB_14094e000);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093a870(void)

{
    uint uVar1;
    int iVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    ulonglong uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar9 [16];
    undefined4 uVar10;

    uVar1 = (uint)register0x00000020;
    fVar6 = (DAT_140c79c68 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar11 = (DAT_140c79c60 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar18 = fVar6 * 0.5;
    fVar15 = fVar18 + fVar11;
    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar18))) >> 0x20,0),
                        fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar16 = SUB164(auVar13,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar13 >> 0x20,0);
    fVar15 = fVar16 * 0.3333333 + 1e-05;
    auVar13 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar13 >> 0x60,0),
                                          CONCAT48(SUB164(auVar13 >> 0x40,0),CONCAT44(uVar10,fVar16)))
                                        >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar3 = ZEXT416((uint)(fVar11 - fVar18)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar3,0);
    fVar11 = SUB164(auVar13,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar3,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar3,0) | SUB168(auVar3,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar3,0) - fVar6) - fVar11) + 1.0 + (fVar16 - fVar11)) * 0.3333333 + 1e-05;
    uVar12 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar11),0);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar3 >> 0x40,0),uVar12 | uVar12 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        uVar12 = (ulonglong)(uint)(float)(iVar2 - uVar1);
    }
    fVar11 = (fVar6 - (float)uVar12) * 0.5;
    auVar3 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar3,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (DAT_140c79c58 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar15 = (DAT_140c79c50 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar11,fVar11);
    auVar9 = CONCAT412(fVar11,CONCAT48(fVar11,lVar7));
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar11 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar16 = fVar11 * 0.5;
    fVar18 = fVar16 + fVar15;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar16))) >> 0x20,0),
                        fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = SUB164(auVar9,0);
    fVar17 = SUB164(auVar14,0) - fVar11 * 2.0;
    uVar10 = SUB164(auVar14 >> 0x20,0);
    fVar18 = fVar17 * 0.3333333 + 1e-05;
    auVar14 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar14 >> 0x60,0),
                                          CONCAT48(SUB164(auVar14 >> 0x40,0),CONCAT44(uVar10,fVar17)))
                                        >> 0x20,0),fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar15 - fVar16)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar15 = SUB164(auVar14,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (((SUB164(auVar4,0) - fVar11) - fVar15) + 1.0 + (fVar17 - fVar15)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        auVar5 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (fVar11 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    _DAT_140c79c30 = (int)(SUB164(auVar14,0) * 2.0 + fVar11 + SUB164(auVar5,0)) + -1;
    _DAT_140c79c34 = (int)SUB164(auVar4,0) + -1;
    _DAT_140c79c38 = (int)(SUB164(auVar13,0) * 2.0 + fVar6 + (float)uVar12) + 2;
    _DAT_140c79c3c = (int)SUB164(auVar3,0) + 2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093b0c0(void)

{
    uint uVar1;
    int iVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    ulonglong uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar9 [16];
    undefined4 uVar10;

    uVar1 = (uint)register0x00000020;
    fVar6 = (DAT_140c79d38 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar11 = (DAT_140c79d30 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar18 = fVar6 * 0.5;
    fVar15 = fVar18 + fVar11;
    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar18))) >> 0x20,0),
                        fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar16 = SUB164(auVar13,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar13 >> 0x20,0);
    fVar15 = fVar16 * 0.3333333 + 1e-05;
    auVar13 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar13 >> 0x60,0),
                                          CONCAT48(SUB164(auVar13 >> 0x40,0),CONCAT44(uVar10,fVar16)))
                                        >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar3 = ZEXT416((uint)(fVar11 - fVar18)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar3,0);
    fVar11 = SUB164(auVar13,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar3,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar3,0) | SUB168(auVar3,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar3,0) - fVar6) - fVar11) + 1.0 + (fVar16 - fVar11)) * 0.3333333 + 1e-05;
    uVar12 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar11),0);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar3 >> 0x40,0),uVar12 | uVar12 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        uVar12 = (ulonglong)(uint)(float)(iVar2 - uVar1);
    }
    fVar11 = (fVar6 - (float)uVar12) * 0.5;
    auVar3 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar3,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (DAT_140c79d28 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar15 = (DAT_140c79d20 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar11,fVar11);
    auVar9 = CONCAT412(fVar11,CONCAT48(fVar11,lVar7));
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar11 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar16 = fVar11 * 0.5;
    fVar18 = fVar16 + fVar15;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar16))) >> 0x20,0),
                        fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = SUB164(auVar9,0);
    fVar17 = SUB164(auVar14,0) - fVar11 * 2.0;
    uVar10 = SUB164(auVar14 >> 0x20,0);
    fVar18 = fVar17 * 0.3333333 + 1e-05;
    auVar14 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar14 >> 0x60,0),
                                          CONCAT48(SUB164(auVar14 >> 0x40,0),CONCAT44(uVar10,fVar17)))
                                        >> 0x20,0),fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar15 - fVar16)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar15 = SUB164(auVar14,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (((SUB164(auVar4,0) - fVar11) - fVar15) + 1.0 + (fVar17 - fVar15)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        auVar5 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (fVar11 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    _DAT_140c79d00 = (int)(SUB164(auVar14,0) * 2.0 + fVar11 + SUB164(auVar5,0)) + -1;
    _DAT_140c79d04 = (int)SUB164(auVar4,0) + -1;
    _DAT_140c79d08 = (int)(SUB164(auVar13,0) * 2.0 + fVar6 + (float)uVar12) + 2;
    _DAT_140c79d0c = (int)SUB164(auVar3,0) + 2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093b8b0(void)

{
    uint uVar1;
    int iVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    ulonglong uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar9 [16];
    undefined4 uVar10;

    uVar1 = (uint)register0x00000020;
    fVar6 = (DAT_140c79dc8 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar11 = (DAT_140c79dc0 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar18 = fVar6 * 0.5;
    fVar15 = fVar18 + fVar11;
    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar18))) >> 0x20,0),
                        fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar16 = SUB164(auVar13,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar13 >> 0x20,0);
    fVar15 = fVar16 * 0.3333333 + 1e-05;
    auVar13 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar13 >> 0x60,0),
                                          CONCAT48(SUB164(auVar13 >> 0x40,0),CONCAT44(uVar10,fVar16)))
                                        >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar3 = ZEXT416((uint)(fVar11 - fVar18)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar3,0);
    fVar11 = SUB164(auVar13,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar3,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar3,0) | SUB168(auVar3,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar3,0) - fVar6) - fVar11) + 1.0 + (fVar16 - fVar11)) * 0.3333333 + 1e-05;
    uVar12 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar11),0);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar3 >> 0x40,0),uVar12 | uVar12 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        uVar12 = (ulonglong)(uint)(float)(iVar2 - uVar1);
    }
    fVar11 = (fVar6 - (float)uVar12) * 0.5;
    auVar3 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar3,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (DAT_140c79db8 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar15 = (DAT_140c79db0 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar11,fVar11);
    auVar9 = CONCAT412(fVar11,CONCAT48(fVar11,lVar7));
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar11 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar16 = fVar11 * 0.5;
    fVar18 = fVar16 + fVar15;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar16))) >> 0x20,0),
                        fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = SUB164(auVar9,0);
    fVar17 = SUB164(auVar14,0) - fVar11 * 2.0;
    uVar10 = SUB164(auVar14 >> 0x20,0);
    fVar18 = fVar17 * 0.3333333 + 1e-05;
    auVar14 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar14 >> 0x60,0),
                                          CONCAT48(SUB164(auVar14 >> 0x40,0),CONCAT44(uVar10,fVar17)))
                                        >> 0x20,0),fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar15 - fVar16)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar15 = SUB164(auVar14,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (((SUB164(auVar4,0) - fVar11) - fVar15) + 1.0 + (fVar17 - fVar15)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        auVar5 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (fVar11 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    _DAT_140c79d90 = (int)(SUB164(auVar14,0) * 2.0 + fVar11 + SUB164(auVar5,0)) + -1;
    _DAT_140c79d94 = (int)SUB164(auVar4,0) + -1;
    _DAT_140c79d98 = (int)(SUB164(auVar13,0) * 2.0 + fVar6 + (float)uVar12) + 2;
    _DAT_140c79d9c = (int)SUB164(auVar3,0) + 2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093c020(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_particle_envParticleScale_140c425f8)
            ;
    *puVar1 = &PTR_PTR_LAB_140c425f0;
    PTR_PTR_LAB_140c425f0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c42624 = 0;
    _DAT_140c42610 = 0x3f800000;
    uRam0000000140c42614 = 0x3f800000;
    uRam0000000140c42618 = 0x3f800000;
    uRam0000000140c4261c = 0x3f800000;
    _DAT_140c42628 = 0x3f800000;
    _DAT_140c4262c = 0x3f800000;
    _DAT_140c42638 = 1;
    _DAT_140c42630 = 0;
    _DAT_140c42640 = 0;
    _DAT_140c42620 = 0x3f800000;
    FUN_1407dd89c(&LAB_14094e4c0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093c750(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_sound_lowQuality_140c43ba8);
    *puVar1 = &PTR_PTR_LAB_140c43ba0;
    PTR_PTR_LAB_140c43ba0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c43bc7 = 0;
    _DAT_140c43bc8 = 0;
    _DAT_140c43bd0 = 0;
    _DAT_140c43bd8 = 0;
    _DAT_140c43bc0 = 0;
    DAT_140c43bc4 = 0;
    FUN_1407dd89c(&LAB_14094efb0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093c9e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_ui_fakeLocalizedString_140c43d98);
    *puVar1 = &PTR_PTR_LAB_140c43d90;
    PTR_PTR_LAB_140c43d90 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c43db7 = 0;
    _DAT_140c43db8 = 0;
    _DAT_140c43dc0 = 0;
    _DAT_140c43dc8 = 0;
    _DAT_140c43db0 = 0;
    DAT_140c43db4 = 0;
    FUN_1407dd89c(&LAB_14094f280);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093ca50(void)

{
    DAT_140c7aba8 = (undefined *)FUN_14018b280();
    _DAT_140c7abb0 = 0;
    *DAT_140c7aba8 = 0;
    *(undefined8 *)(DAT_140c7aba8 + 8) = 0;
    *(undefined **)(DAT_140c7aba8 + 0x10) = DAT_140c7aba8;
    *(undefined **)(DAT_140c7aba8 + 0x18) = DAT_140c7aba8;
    FUN_1407dd89c(FUN_14094f2c0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093ce00(void)

{
    uint uVar1;
    int iVar2;
    undefined auVar3 [16];
    undefined auVar4 [16];
    undefined auVar5 [16];
    float fVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar11;
    ulonglong uVar12;
    undefined auVar13 [16];
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined auVar9 [16];
    undefined4 uVar10;

    uVar1 = (uint)register0x00000020;
    fVar6 = (DAT_140c7ac28 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar11 = (DAT_140c7ac20 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar6,fVar6);
    auVar9 = CONCAT412(fVar6,CONCAT48(fVar6,lVar7));
    iVar2 = (int)fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar6 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar18 = fVar6 * 0.5;
    fVar15 = fVar18 + fVar11;
    auVar13 = CONCAT124(SUB1612(CONCAT412(fVar6,CONCAT48(fVar6,CONCAT44(fVar6,fVar18))) >> 0x20,0),
                        fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar6,CONCAT48(fVar6,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar6 = SUB164(auVar9,0);
    fVar16 = SUB164(auVar13,0) - fVar6 * 2.0;
    uVar10 = SUB164(auVar13 >> 0x20,0);
    fVar15 = fVar16 * 0.3333333 + 1e-05;
    auVar13 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar13 >> 0x60,0),
                                          CONCAT48(SUB164(auVar13 >> 0x40,0),CONCAT44(uVar10,fVar16)))
                                        >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar12 = SUB168(auVar13,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar12)) >> 0x40,0),
                                        uVar12 & 0xffffffff | uVar12 << 0x20));
        uVar1 = uVar1 & 1;
        auVar13 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar3 = ZEXT416((uint)(fVar11 - fVar18)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar3,0);
    fVar11 = SUB164(auVar13,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar3,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar3,0) | SUB168(auVar3,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (((SUB164(auVar3,0) - fVar6) - fVar11) + 1.0 + (fVar16 - fVar11)) * 0.3333333 + 1e-05;
    uVar12 = SUB168(CONCAT124(SUB1612(auVar3 >> 0x20,0),fVar11),0);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar3 >> 0x40,0),uVar12 | uVar12 << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        uVar12 = (ulonglong)(uint)(float)(iVar2 - uVar1);
    }
    fVar11 = (fVar6 - (float)uVar12) * 0.5;
    auVar3 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar11);
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar3,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar3 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = (DAT_140c7ac18 + DAT_140c3b738) * (1.0 / _DAT_140c66f48) + 1.0;
    fVar15 = (DAT_140c7ac10 + DAT_140c3b738) * (1.0 / DAT_140c66f1c) + 0.5;
    lVar7 = CONCAT44(fVar11,fVar11);
    auVar9 = CONCAT412(fVar11,CONCAT48(fVar11,lVar7));
    iVar2 = (int)fVar11;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar11)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,lVar7)) >> 0x40,0),
                                        (ulonglong)(uint)fVar11 | lVar7 << 0x20));
        uVar1 = uVar1 & 1;
        auVar9 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar16 = fVar11 * 0.5;
    fVar18 = fVar16 + fVar15;
    auVar14 = CONCAT124(SUB1612(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar16))) >> 0x20,0),
                        fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(fVar11,CONCAT48(fVar11,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar11 = SUB164(auVar9,0);
    fVar17 = SUB164(auVar14,0) - fVar11 * 2.0;
    uVar10 = SUB164(auVar14 >> 0x20,0);
    fVar18 = fVar17 * 0.3333333 + 1e-05;
    auVar14 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar14 >> 0x60,0),
                                          CONCAT48(SUB164(auVar14 >> 0x40,0),CONCAT44(uVar10,fVar17)))
                                        >> 0x20,0),fVar18);
    iVar2 = (int)fVar18;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar18)) {
        uVar8 = SUB168(auVar14,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        uVar1 = uVar1 & 1;
        auVar14 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    auVar4 = ZEXT416((uint)(fVar15 - fVar16)) & (undefined  [16])0xffffffffffffffff;
    iVar2 = (int)SUB164(auVar4,0);
    fVar15 = SUB164(auVar14,0) * 3.0;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != SUB164(auVar4,0))) {
        uVar1 = movmskps(uVar1,ZEXT816(SUB168(auVar4,0) | SUB168(auVar4,0) << 0x20));
        uVar1 = uVar1 & 1;
        auVar4 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (((SUB164(auVar4,0) - fVar11) - fVar15) + 1.0 + (fVar17 - fVar15)) * 0.3333333 + 1e-05;
    auVar5 = CONCAT124(SUB1612(auVar4 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(auVar4 >> 0x40,0),
                                        SUB168(auVar5,0) | SUB168(auVar5,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        uVar1 = uVar1 & 1;
        auVar5 = ZEXT416((uint)(float)(iVar2 - uVar1));
    }
    fVar15 = (fVar11 - SUB164(auVar5,0)) * 0.5;
    auVar4 = CONCAT124(SUB1612(auVar9 >> 0x20,0),fVar15);
    iVar2 = (int)fVar15;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar15)) {
        uVar10 = SUB164(auVar9 >> 0x20,0);
        uVar8 = SUB168(auVar4,0);
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar10,CONCAT48(uVar10,uVar8)) >> 0x40,0),
                                        uVar8 & 0xffffffff | uVar8 << 0x20));
        auVar4 = ZEXT416((uint)(float)(iVar2 - (uVar1 & 1)));
    }
    _DAT_140c7ac00 = (int)(SUB164(auVar14,0) * 2.0 + fVar11 + SUB164(auVar5,0)) + -1;
    _DAT_140c7ac04 = (int)SUB164(auVar4,0) + -1;
    _DAT_140c7ac08 = (int)(SUB164(auVar13,0) * 2.0 + fVar6 + (float)uVar12) + 2;
    _DAT_140c7ac0c = (int)SUB164(auVar3,0) + 2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093d650(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_camera_reorient_140c44708);
    *puVar1 = &PTR_PTR_LAB_140c44700;
    PTR_PTR_LAB_140c44700 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c44727 = 1;
    _DAT_140c44720 = 0x1010101;
    DAT_140c44724 = 1;
    _DAT_140c44728 = 0;
    _DAT_140c44730 = 0;
    _DAT_140c44738 = 0;
    FUN_1407dd89c(&LAB_14094f890);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093d7b0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_player_ignoreAlwaysFaceTarget_140c44d28);
    *puVar1 = &PTR_PTR_LAB_140c44d20;
    PTR_PTR_LAB_140c44d20 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c44d47 = 1;
    _DAT_140c44d40 = 0x1010101;
    DAT_140c44d44 = 1;
    _DAT_140c44d48 = 0;
    _DAT_140c44d50 = 0;
    _DAT_140c44d58 = 0;
    FUN_1407dd89c(&LAB_14094fc50);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093d830(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_player_disableFacingLock_140c44d68);
    *puVar1 = &PTR_PTR_LAB_140c44d60;
    PTR_PTR_LAB_140c44d60 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c44d87 = 0;
    _DAT_140c44d88 = 0;
    _DAT_140c44d90 = 0;
    _DAT_140c44d98 = 0;
    _DAT_140c44d80 = 0;
    DAT_140c44d84 = 0;
    FUN_1407dd89c(&LAB_14094fc90);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093d900(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_visualSuppression_140c44da8);
    *puVar1 = &PTR_PTR_LAB_140c44da0;
    PTR_PTR_LAB_140c44da0 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c44dd8 = 0x3f800000;
    _DAT_140c44dc0 = ZEXT816(0);
    _DAT_140c44dd0 = 0;
    _DAT_140c44ddc = 0;
    _DAT_140c44de8 = 1;
    _DAT_140c44de0 = 0;
    _DAT_140c44df0 = 0;
    FUN_1407dd89c(&LAB_14094fd00);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093d990(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_visualSuppressedAlpha_140c44e38);
    *puVar1 = &PTR_PTR_LAB_140c44e30;
    PTR_PTR_LAB_140c44e30 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c44e68 = 0x3f800000;
    _DAT_140c44e50 = ZEXT816(0);
    _DAT_140c44e60 = 0;
    _DAT_140c44e6c = 0;
    _DAT_140c44e78 = 1;
    _DAT_140c44e70 = 0;
    _DAT_140c44e80 = 0;
    FUN_1407dd89c(&LAB_14094fd40);
    return;
}



void FUN_14093da20(void)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 local_38;
    undefined4 local_30;
    undefined local_28 [8];
    longlong local_20;
    undefined2 *local_18;
    longlong local_10;

    lVar3 = 0;
    local_20 = 0;
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    do {
        lVar2 = lVar3 + 1;
        lVar3 = lVar3 + 1;
    } while (L"Arial Bold"[lVar2] != L'\0');
    lVar3 = lVar3 * 2 >> 1;
    uVar1 = lVar3 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar2 = uVar1 * 2;
        local_18 = (undefined2 *)FUN_14018b280(lVar2,0);
        local_10 = lVar2 + (longlong)local_18;
    }
    lVar2 = (longlong)local_18;
    lVar3 = lVar3 * 2;
    local_20 = (longlong)local_18;
    FUN_1407db590(local_18,L"Arial Bold",lVar3);
    local_18 = (undefined2 *)(lVar3 + lVar2);
    if (local_18 != (undefined2 *)0x0) {
        *local_18 = 0;
    }
    local_38 = 0;
    local_30 = 0;
    FUN_1400198c0(&DAT_140c7aee0,&local_38,local_28,4,&LAB_1403f71e0);
    FUN_140001b70();
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094fd80);
    return;
}



void FUN_14093db50(void)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 local_38;
    undefined4 local_30;
    undefined local_28 [8];
    longlong local_20;
    undefined2 *local_18;
    longlong local_10;

    lVar3 = 0;
    local_20 = 0;
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    do {
        lVar2 = lVar3 + 1;
        lVar3 = lVar3 + 1;
    } while (L"CRB_Dialog"[lVar2] != L'\0');
    lVar3 = lVar3 * 2 >> 1;
    uVar1 = lVar3 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar2 = uVar1 * 2;
        local_18 = (undefined2 *)FUN_14018b280(lVar2,0);
        local_10 = lVar2 + (longlong)local_18;
    }
    lVar2 = (longlong)local_18;
    lVar3 = lVar3 * 2;
    local_20 = (longlong)local_18;
    FUN_1407db590(local_18,L"CRB_Dialog",lVar3);
    local_18 = (undefined2 *)(lVar3 + lVar2);
    if (local_18 != (undefined2 *)0x0) {
        *local_18 = 0;
    }
    local_38 = 0;
    local_30 = 0;
    FUN_1400198c0(&DAT_140c7b020,&local_38,local_28,4,&LAB_1403f7280);
    FUN_140001b70();
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094fe10);
    return;
}



void FUN_14093dc70(void)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 local_38;
    undefined4 local_30;
    undefined local_28 [8];
    longlong local_20;
    undefined2 *local_18;
    longlong local_10;

    lVar3 = 0;
    local_20 = 0;
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    do {
        lVar2 = lVar3 + 1;
        lVar3 = lVar3 + 1;
    } while (L"Fluxatione10"[lVar2] != L'\0');
    lVar3 = lVar3 * 2 >> 1;
    uVar1 = lVar3 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar2 = uVar1 * 2;
        local_18 = (undefined2 *)FUN_14018b280(lVar2,0);
        local_10 = lVar2 + (longlong)local_18;
    }
    lVar2 = (longlong)local_18;
    lVar3 = lVar3 * 2;
    local_20 = (longlong)local_18;
    FUN_1407db590(local_18,L"Fluxatione10",lVar3);
    local_18 = (undefined2 *)(lVar3 + lVar2);
    if (local_18 != (undefined2 *)0x0) {
        *local_18 = 0;
    }
    local_38 = 0;
    local_30 = 0;
    FUN_1400198c0(&DAT_140c7b160,&local_38,local_28,4,FUN_1403f7320);
    FUN_140001b70();
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    FUN_1407dd89c(&LAB_14094fe60);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093ddc0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_player_moveSpeed_140c45dd8);
    *puVar1 = &PTR_PTR_LAB_140c45dd0;
    PTR_PTR_LAB_140c45dd0 = (undefined *)&PTR_LAB_140b55200;
    _DAT_140c45e08 = 2;
    _DAT_140c45e04 = 0;
    _DAT_140c45e10 = 0;
    _DAT_140c45e0c = 2;
    _DAT_140c45e18 = 1;
    _DAT_140c45df0 = 2;
    _DAT_140c45e20 = &LAB_1404dafb0;
    _DAT_140c45df4 = 2;
    _DAT_140c45df8 = 2;
    _DAT_140c45dfc = 2;
    _DAT_140c45e00 = 2;
    FUN_1407dd89c(&LAB_14094ff70);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093dee0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_useButtonDownForAbilities_140c45e78);
    *puVar1 = &PTR_PTR_LAB_140c45e70;
    PTR_PTR_LAB_140c45e70 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45e97 = 1;
    _DAT_140c45e98 = 0;
    _DAT_140c45ea0 = 0;
    _DAT_140c45e90 = 0x1010101;
    DAT_140c45e94 = 1;
    _DAT_140c45ea8 = FUN_1403f7480;
    FUN_1407dd89c(&LAB_14094fff0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093df60(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_disableAutoTargeting_140c45eb8);
    *puVar1 = &PTR_PTR_LAB_140c45eb0;
    PTR_PTR_LAB_140c45eb0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45ed7 = 0;
    _DAT_140c45ed8 = 0;
    _DAT_140c45ee0 = 0;
    _DAT_140c45ed0 = 0;
    DAT_140c45ed4 = 0;
    _DAT_140c45ee8 = FUN_1403f7530;
    FUN_1407dd89c(&LAB_140950030);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093dfe0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_holdToContinueCasting_140c45e38);
    *puVar1 = &PTR_PTR_LAB_140c45e30;
    PTR_PTR_LAB_140c45e30 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45e57 = 1;
    _DAT_140c45e58 = 0;
    _DAT_140c45e60 = 0;
    _DAT_140c45e50 = 0x1010101;
    DAT_140c45e54 = 1;
    _DAT_140c45e68 = FUN_1403f7580;
    FUN_1407dd89c(&LAB_140950070);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e060(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyTelegraphDisplay_140c45168);
    *puVar1 = &PTR_PTR_LAB_140c45160;
    PTR_PTR_LAB_140c45160 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45187 = 1;
    _DAT_140c45180 = 0x1010101;
    DAT_140c45184 = 1;
    _DAT_140c45188 = 0;
    _DAT_140c45190 = 0;
    _DAT_140c45198 = 0;
    FUN_1407dd89c(&LAB_1409500b0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e0e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyTelegraphDisplay_140c451a8);
    *puVar1 = &PTR_PTR_LAB_140c451a0;
    PTR_PTR_LAB_140c451a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c451c7 = 1;
    _DAT_140c451c0 = 0x1010101;
    DAT_140c451c4 = 1;
    _DAT_140c451c8 = 0;
    _DAT_140c451d0 = 0;
    _DAT_140c451d8 = 0;
    FUN_1407dd89c(&LAB_1409500f0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e160(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_selfTelegraphDisplay_140c451e8);
    *puVar1 = &PTR_PTR_LAB_140c451e0;
    PTR_PTR_LAB_140c451e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45207 = 1;
    _DAT_140c45200 = 0x1010101;
    DAT_140c45204 = 1;
    _DAT_140c45208 = 0;
    _DAT_140c45210 = 0;
    _DAT_140c45218 = 0;
    FUN_1407dd89c(&LAB_140950130);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e1e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyNPCTelegraphDisplay_140c45228);
    *puVar1 = &PTR_PTR_LAB_140c45220;
    PTR_PTR_LAB_140c45220 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45247 = 1;
    _DAT_140c45240 = 0x1010101;
    DAT_140c45244 = 1;
    _DAT_140c45248 = 0;
    _DAT_140c45250 = 0;
    _DAT_140c45258 = 0;
    FUN_1407dd89c(&LAB_140950170);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e260(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyNPCBeneficialTelegrap_140c45268);
    *puVar1 = &PTR_PTR_LAB_140c45260;
    PTR_PTR_LAB_140c45260 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45287 = 1;
    _DAT_140c45280 = 0x1010101;
    DAT_140c45284 = 1;
    _DAT_140c45288 = 0;
    _DAT_140c45290 = 0;
    _DAT_140c45298 = 0;
    FUN_1407dd89c(&LAB_1409501b0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e2e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyNPCDetrimentalTelegra_140c452a8);
    *puVar1 = &PTR_PTR_LAB_140c452a0;
    PTR_PTR_LAB_140c452a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c452c7 = 1;
    _DAT_140c452c0 = 0x1010101;
    DAT_140c452c4 = 1;
    _DAT_140c452c8 = 0;
    _DAT_140c452d0 = 0;
    _DAT_140c452d8 = 0;
    FUN_1407dd89c(&LAB_1409501f0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e360(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyPlayerTelegraphDispla_140c452e8);
    *puVar1 = &PTR_PTR_LAB_140c452e0;
    PTR_PTR_LAB_140c452e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45307 = 1;
    _DAT_140c45300 = 0x1010101;
    DAT_140c45304 = 1;
    _DAT_140c45308 = 0;
    _DAT_140c45310 = 0;
    _DAT_140c45318 = 0;
    FUN_1407dd89c(&LAB_140950230);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e3e0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyPlayerBeneficialTeleg_140c45328);
    *puVar1 = &PTR_PTR_LAB_140c45320;
    PTR_PTR_LAB_140c45320 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45347 = 0;
    _DAT_140c45348 = 0;
    _DAT_140c45350 = 0;
    _DAT_140c45358 = 0;
    _DAT_140c45340 = 0;
    DAT_140c45344 = 0;
    FUN_1407dd89c(&LAB_140950270);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e450(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyPlayerDetrimentalTele_140c45368);
    *puVar1 = &PTR_PTR_LAB_140c45360;
    PTR_PTR_LAB_140c45360 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45387 = 1;
    _DAT_140c45380 = 0x1010101;
    DAT_140c45384 = 1;
    _DAT_140c45388 = 0;
    _DAT_140c45390 = 0;
    _DAT_140c45398 = 0;
    FUN_1407dd89c(&LAB_1409502b0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e4d0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyPlayerDetrimentalCanD_140c453a8);
    *puVar1 = &PTR_PTR_LAB_140c453a0;
    PTR_PTR_LAB_140c453a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c453c7 = 1;
    _DAT_140c453c0 = 0x1010101;
    DAT_140c453c4 = 1;
    _DAT_140c453c8 = 0;
    _DAT_140c453d0 = 0;
    _DAT_140c453d8 = 0;
    FUN_1407dd89c(&LAB_1409502f0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e550(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_enemyHarmlessTelegraphDisp_140c453e8);
    *puVar1 = &PTR_PTR_LAB_140c453e0;
    PTR_PTR_LAB_140c453e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45407 = 1;
    _DAT_140c45400 = 0x1010101;
    DAT_140c45404 = 1;
    _DAT_140c45408 = 0;
    _DAT_140c45410 = 0;
    _DAT_140c45418 = 0;
    FUN_1407dd89c(&LAB_140950330);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e5d0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyNPCTelegraphDisplay_140c45428);
    *puVar1 = &PTR_PTR_LAB_140c45420;
    PTR_PTR_LAB_140c45420 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45447 = 1;
    _DAT_140c45440 = 0x1010101;
    DAT_140c45444 = 1;
    _DAT_140c45448 = 0;
    _DAT_140c45450 = 0;
    _DAT_140c45458 = 0;
    FUN_1407dd89c(&LAB_140950370);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e650(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyNPCBeneficialTelegraph_140c45468);
    *puVar1 = &PTR_PTR_LAB_140c45460;
    PTR_PTR_LAB_140c45460 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45487 = 1;
    _DAT_140c45480 = 0x1010101;
    DAT_140c45484 = 1;
    _DAT_140c45488 = 0;
    _DAT_140c45490 = 0;
    _DAT_140c45498 = 0;
    FUN_1407dd89c(&LAB_1409503b0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e6d0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyNPCDetrimentalTelegrap_140c454a8);
    *puVar1 = &PTR_PTR_LAB_140c454a0;
    PTR_PTR_LAB_140c454a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c454c7 = 0;
    _DAT_140c454c8 = 0;
    _DAT_140c454d0 = 0;
    _DAT_140c454d8 = 0;
    _DAT_140c454c0 = 0;
    DAT_140c454c4 = 0;
    FUN_1407dd89c(&LAB_1409503f0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e740(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyPlayerTelegraphDisplay_140c454e8);
    *puVar1 = &PTR_PTR_LAB_140c454e0;
    PTR_PTR_LAB_140c454e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45507 = 1;
    _DAT_140c45500 = 0x1010101;
    DAT_140c45504 = 1;
    _DAT_140c45508 = 0;
    _DAT_140c45510 = 0;
    _DAT_140c45518 = 0;
    FUN_1407dd89c(&LAB_140950430);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e7c0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyPlayerBeneficialTelegr_140c45528);
    *puVar1 = &PTR_PTR_LAB_140c45520;
    PTR_PTR_LAB_140c45520 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45547 = 1;
    _DAT_140c45540 = 0x1010101;
    DAT_140c45544 = 1;
    _DAT_140c45548 = 0;
    _DAT_140c45550 = 0;
    _DAT_140c45558 = 0;
    FUN_1407dd89c(&LAB_140950470);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e840(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_allyPlayerDetrimentalTeleg_140c45568);
    *puVar1 = &PTR_PTR_LAB_140c45560;
    PTR_PTR_LAB_140c45560 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45587 = 0;
    _DAT_140c45588 = 0;
    _DAT_140c45590 = 0;
    _DAT_140c45598 = 0;
    _DAT_140c45580 = 0;
    DAT_140c45584 = 0;
    FUN_1407dd89c(&LAB_1409504b0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e8b0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_partyMemberAllyTelegraphDi_140c455a8);
    *puVar1 = &PTR_PTR_LAB_140c455a0;
    PTR_PTR_LAB_140c455a0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c455c7 = 1;
    _DAT_140c455c0 = 0x1010101;
    DAT_140c455c4 = 1;
    _DAT_140c455c8 = 0;
    _DAT_140c455d0 = 0;
    _DAT_140c455d8 = 0;
    FUN_1407dd89c(&LAB_1409504f0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093e930(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_spell_waveTelegraphDisplay_140c455e8);
    *puVar1 = &PTR_PTR_LAB_140c455e0;
    PTR_PTR_LAB_140c455e0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45607 = 1;
    _DAT_140c45600 = 0x1010101;
    DAT_140c45604 = 1;
    _DAT_140c45608 = 0;
    _DAT_140c45610 = 0;
    _DAT_140c45618 = 0;
    FUN_1407dd89c(&LAB_140950530);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093eb80(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_draw_subtitles_140c45ef8);
    *puVar1 = &PTR_PTR_LAB_140c45ef0;
    PTR_PTR_LAB_140c45ef0 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45f17 = 0;
    _DAT_140c45f18 = 0;
    _DAT_140c45f20 = 0;
    _DAT_140c45f28 = 0;
    _DAT_140c45f10 = 0;
    DAT_140c45f14 = 0;
    FUN_1407dd89c(&LAB_140950a30);
    return;
}



// WARNING: Removing unreachable block (ram,0x00014093ec65)
// WARNING: Removing unreachable block (ram,0x00014093fb08)
// WARNING: Removing unreachable block (ram,0x00014093fb10)
// WARNING: Removing unreachable block (ram,0x00014093f968)
// WARNING: Removing unreachable block (ram,0x00014093f970)
// WARNING: Removing unreachable block (ram,0x00014093f7c8)
// WARNING: Removing unreachable block (ram,0x00014093f7d0)
// WARNING: Removing unreachable block (ram,0x00014093f628)
// WARNING: Removing unreachable block (ram,0x00014093f630)
// WARNING: Removing unreachable block (ram,0x00014093f488)
// WARNING: Removing unreachable block (ram,0x00014093f490)
// WARNING: Removing unreachable block (ram,0x00014093f2e8)
// WARNING: Removing unreachable block (ram,0x00014093f2f0)
// WARNING: Removing unreachable block (ram,0x00014093f148)
// WARNING: Removing unreachable block (ram,0x00014093f150)
// WARNING: Removing unreachable block (ram,0x00014093efa8)
// WARNING: Removing unreachable block (ram,0x00014093efb0)
// WARNING: Removing unreachable block (ram,0x00014093ee08)
// WARNING: Removing unreachable block (ram,0x00014093ee10)
// WARNING: Removing unreachable block (ram,0x00014093ed37)
// WARNING: Removing unreachable block (ram,0x00014093ed40)
// WARNING: Removing unreachable block (ram,0x00014093eed8)
// WARNING: Removing unreachable block (ram,0x00014093eee0)
// WARNING: Removing unreachable block (ram,0x00014093f078)
// WARNING: Removing unreachable block (ram,0x00014093f080)
// WARNING: Removing unreachable block (ram,0x00014093f218)
// WARNING: Removing unreachable block (ram,0x00014093f220)
// WARNING: Removing unreachable block (ram,0x00014093f3b8)
// WARNING: Removing unreachable block (ram,0x00014093f3c0)
// WARNING: Removing unreachable block (ram,0x00014093f558)
// WARNING: Removing unreachable block (ram,0x00014093f560)
// WARNING: Removing unreachable block (ram,0x00014093f6f8)
// WARNING: Removing unreachable block (ram,0x00014093f700)
// WARNING: Removing unreachable block (ram,0x00014093f898)
// WARNING: Removing unreachable block (ram,0x00014093f8a0)
// WARNING: Removing unreachable block (ram,0x00014093fa38)
// WARNING: Removing unreachable block (ram,0x00014093fa40)
// WARNING: Removing unreachable block (ram,0x00014093fbd8)
// WARNING: Removing unreachable block (ram,0x00014093fbe0)

void FUN_14093ec20(void)

{
    undefined2 *puVar1;
    wchar_t *local_48;
    undefined4 local_40;
    undefined local_38 [8];
    undefined2 *local_30;
    undefined2 *local_28;
    undefined2 *local_20;

    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e802c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society00";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7b310,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e8074,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society01";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7b448,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e804c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society02";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7b580,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e819c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society03";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7b6b8,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e8184,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society04";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7b7f0,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e8224,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society05";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7b928,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e81d4,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society06";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7ba60,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e80bc,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society07";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7bb98,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e809c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society08";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7bcd0,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e816c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society09";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7be08,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e80dc,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society10";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7bf40,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e8374,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society11";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c078,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e833c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society12";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c1b0,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e83ac,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society13";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c2e8,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e8394,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society14";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c420,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e827c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society15";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c558,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e8244,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society16";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c690,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e82f4,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society17";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c7c8,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e82cc,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society18";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7c900,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    local_30 = (undefined2 *)0x0;
    local_28 = (undefined2 *)0x0;
    local_20 = (undefined2 *)0x0;
    puVar1 = (undefined2 *)FUN_14018b280(2,0);
    local_20 = puVar1 + 1;
    local_30 = puVar1;
    local_28 = puVar1;
    FUN_1407db590(puVar1,&DAT_1409e844c,0);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_40 = 2;
    local_48 = L"chat.society19";
    local_28 = puVar1;
    FUN_1400198c0(&DAT_140c7ca38,&local_48,local_38,4,0);
    FUN_140001b70();
    if (local_30 != (undefined2 *)0x0) {
        FUN_14018b900(local_30,0);
    }
    FUN_1407dd89c(FUN_140950ab0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093fd30(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_chat_saveLog_140c45f78);
    *puVar1 = &PTR_PTR_LAB_140c45f70;
    PTR_PTR_LAB_140c45f70 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c45f97 = 0;
    _DAT_140c45f98 = 0;
    _DAT_140c45fa0 = 0;
    _DAT_140c45f90 = 0;
    DAT_140c45f94 = 0;
    _DAT_140c45fa8 = &LAB_140401390;
    FUN_1407dd89c(&LAB_140950b30);
    return;
}



void FUN_14093fdc0(void)

{
    FUN_14043aaa0();
    FUN_1407dd89c(&LAB_140950cd0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093fde0(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14019d520(DAT_140c63750 + 8,&PTR_u_draw_shadows_140c46808);
    *puVar1 = &PTR_PTR_LAB_140c46800;
    PTR_PTR_LAB_140c46800 = (undefined *)&PTR_LAB_140b55238;
    DAT_140c46827 = 1;
    _DAT_140c46828 = 0;
    _DAT_140c46830 = 0;
    _DAT_140c46820 = 0x1010101;
    DAT_140c46824 = 1;
    _DAT_140c46838 = &LAB_14043dda0;
    FUN_1407dd89c(&LAB_140950ce0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14093fe60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    undefined8 *puVar1;
    undefined4 in_XMM6_Da;
    undefined4 uVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 uVar3;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined4 in_XMM8_Da;
    undefined4 uVar4;
    undefined4 in_XMM8_Db;
    undefined4 uVar5;
    undefined4 in_XMM8_Dc;
    undefined4 uVar6;
    undefined4 in_XMM8_Dd;
    undefined4 uVar7;

    uVar2 = DAT_140c44c60;
    uVar3 = DAT_140c44bd0;
    uVar4 = DAT_140c44cf0;
    uVar5 = DAT_140c44cf0;
    uVar6 = DAT_140c44cf0;
    uVar7 = DAT_140c44cf0;
    puVar1 = (undefined8 *)
            FUN_14019d520(DAT_140c63750 + 8,&PTR_u_lod_viewDistance_140c46418,param_3,param_4,
                          CONCAT412(in_XMM8_Dd,CONCAT48(in_XMM8_Dc,CONCAT44(in_XMM8_Db,in_XMM8_Da))),
                          CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                          CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))))
            ;
    *puVar1 = &PTR_PTR_LAB_140c46410;
    PTR_PTR_LAB_140c46410 = (undefined *)&PTR_LAB_140b55190;
    _DAT_140c46450 = 0;
    _DAT_140c46460 = &LAB_14043dda0;
    _DAT_140c46458 = 1;
    _DAT_140c46430 = uVar4;
    uRam0000000140c46434 = uVar5;
    uRam0000000140c46438 = uVar6;
    uRam0000000140c4643c = uVar7;
    _DAT_140c46440 = uVar4;
    _DAT_140c46444 = uVar2;
    _DAT_140c46448 = uVar3;
    _DAT_140c4644c = uVar4;
    FUN_1407dd89c(&LAB_140950d20);
    return;
}

