//
// Created by flop on 05.04.22.
//

void FUN_1408d0ff0(longlong param_1,ulonglong param_2,int *param_3)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 local_res8 [2];
    undefined4 local_res18 [2];

    fVar5 = (float)param_3[2];
    if (fVar5 == 0.0) {
        FUN_1408a5980(0,param_2,0,local_res18,local_res8);
    }
    else {
        fVar6 = (float)(param_2 & 0xffffffff) * 0.5;
        fVar4 = (float)FUN_1408fe170(fVar6 / (float)param_3[1]);
        fVar5 = (float)FUN_1408fc7f0((uint)(fVar4 * fVar5) ^ 0x80000000);
        FUN_1408a5980(fVar5 * fVar6,fVar5 * fVar6,1);
    }
    if (*(int *)(param_1 + 0x90) != 0) {
        uVar3 = 0;
        do {
            fVar5 = (1.0 / (float)(param_2 & 0xffffffff)) * (float)param_3[1];
            *(float *)(param_1 + 0x10 + uVar3 * 0x18) = fVar5;
            if (*param_3 == 0) {
                *(float *)(param_1 + 0x10 + uVar3 * 0x18) = fVar5 * 6.283185;
            }
            *(undefined4 *)(param_1 + 4 + uVar3 * 0x18) = local_res18[0];
            *(undefined4 *)(param_1 + 8 + uVar3 * 0x18) = local_res8[0];
            iVar1 = *(int *)(param_1 + 0x14 + uVar3 * 0x18);
            if (iVar1 != *param_3) {
                if (iVar1 == 0) {
                    fVar5 = *(float *)(param_1 + 0xc + uVar3 * 0x18) * 0.1591549;
                }
                else {
                    if (*param_3 != 0) goto LAB_1408d1131;
                    fVar5 = *(float *)(param_1 + 0xc + uVar3 * 0x18) * 6.283185;
                }
                *(float *)(param_1 + 0xc + uVar3 * 0x18) = fVar5;
            }
            LAB_1408d1131:
            uVar2 = (int)uVar3 + 1;
            *(int *)(param_1 + 0x14 + uVar3 * 0x18) = *param_3;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(param_1 + 0x90));
    }
    return;
}



void FUN_1408d1160(undefined4 *param_1,undefined8 param_2,int *param_3)

{
    int iVar1;
    float fVar2;
    undefined4 uVar3;
    float fVar4;
    float in_XMM3_Da;

    FUN_1408a5270();
    iVar1 = param_1[5];
    if (*param_3 == 0) {
        fVar2 = 6.283185;
    }
    else {
        fVar2 = 1.0;
    }
    fVar4 = fVar2 * in_XMM3_Da * 0.002777778;
    if (iVar1 == 1) {
        fVar4 = fVar4 + 0.25;
    }
    else if (iVar1 == 3) {
        fVar4 = fVar4 + 0.5;
    }
    if (fVar4 < 0.0) {
        fVar4 = fVar4 + fVar2;
    }
    if (fVar2 <= fVar4) {
        fVar4 = fVar4 - fVar2;
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    param_1[3] = fVar4;
    param_1[4] = param_1[4];
    param_1[5] = iVar1;
    if (iVar1 == 0) {
        uVar3 = 0x40c90fdb;
    }
    else {
        uVar3 = 0x3f800000;
    }
    uVar3 = FUN_1408fde98(fVar4,uVar3);
    param_1[3] = uVar3;
    return;
}



void FUN_1408d1290(longlong param_1,ulonglong param_2,undefined4 param_3,longlong param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;
    undefined8 auStack64 [5];

    uVar3 = 0;
    uVar6 = 0;
    uVar4 = (uint)param_2;
    uVar5 = param_2 & 0xffffffff;
    param_2 = param_2 & 0xffffffff;
    uVar2 = uVar3;
    while (uVar4 != 0) {
        uVar6 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar6;
        uVar4 = (uint)uVar5 & (uint)uVar5 - 1;
        uVar5 = (ulonglong)uVar4;
    }
    *(uint *)(param_1 + 0x90) = uVar6;
    if (uVar6 != 0) {
        uVar2 = (ulonglong)uVar6 * 4 + 0xf;
        if (uVar2 <= (ulonglong)uVar6 * 4) {
            uVar2 = 0xffffffffffffff0;
        }
        uVar2 = uVar2 & 0xfffffffffffffff0;
        auStack64[0] = 0x1408d1301;
        FUN_1407f0f60();
        lVar1 = -uVar2;
        *(undefined8 *)((longlong)auStack64 + lVar1) = 0x1408d1318;
        FUN_1408a5b90(param_2 & 0xffffffff,param_4 + 0x10,&stack0xffffffffffffffe8 + lVar1);
        if (*(int *)(param_1 + 0x90) != 0) {
            do {
                *(undefined8 *)((longlong)auStack64 + lVar1) = 0x1408d1338;
                FUN_1408d1160(param_1 + uVar3 * 0x18,param_3,param_4);
                uVar6 = (int)uVar3 + 1;
                uVar3 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(param_1 + 0x90));
        }
    }
    return;
}



void FUN_1408d1360(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x38);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1758;
        return;
    }
    return;
}



undefined8 * FUN_1408d1430(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_2 + 8))();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b1758;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
        *(undefined *)((longlong)puVar1 + 0x32) = 1;
        *(undefined *)((longlong)puVar1 + 0x2c) = 1;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 FUN_1408d1530(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408d1570(longlong param_1,float *param_2)

{
    undefined uVar1;
    undefined4 uVar2;
    float fVar3;
    float fVar4;
    float fVar5;

    fVar5 = *param_2;
    *(float *)(param_1 + 8) = fVar5;
    *(float *)(param_1 + 0x10) = param_2[1];
    *(float *)(param_1 + 0xc) = param_2[2];
    fVar4 = param_2[3];
    *(float *)(param_1 + 0x14) = fVar4;
    fVar3 = param_2[4];
    *(float *)(param_1 + 0x18) = fVar3;
    *(float *)(param_1 + 0x1c) = param_2[5];
    *(float *)(param_1 + 0x24) = param_2[6];
    *(float *)(param_1 + 0x20) = param_2[7];
    uVar2 = FUN_1408fbfc0(0x41200000,param_2[8] * 0.05);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined *)(param_1 + 0x30) = *(undefined *)(param_2 + 9);
    uVar1 = *(undefined *)((longlong)param_2 + 0x25);
    *(float *)(param_1 + 8) = fVar5 * 0.01;
    *(float *)(param_1 + 0x14) = fVar4 * 0.01;
    *(undefined *)(param_1 + 0x31) = uVar1;
    *(undefined *)(param_1 + 0x32) = 1;
    *(float *)(param_1 + 0x18) = fVar3 * 0.01;
    *(undefined *)(param_1 + 0x2c) = 1;
    return 1;
}



undefined4 FUN_1408d1660(longlong param_1,undefined2 param_2,float *param_3)

{
    float fVar1;
    char cVar2;
    undefined4 uVar3;

    if (param_3 != (float *)0x0) {
        switch(param_2) {
            case 1:
                fVar1 = *param_3;
                *(undefined *)(param_1 + 0x2c) = 1;
                *(float *)(param_1 + 8) = fVar1 * 0.01;
                return 1;
            case 2:
                fVar1 = *param_3;
                *(undefined *)(param_1 + 0x2c) = 1;
                *(float *)(param_1 + 0x10) = fVar1;
                return 1;
            case 3:
                fVar1 = *param_3;
                *(undefined *)(param_1 + 0x2c) = 1;
                *(int *)(param_1 + 0xc) = (int)(longlong)fVar1;
                return 1;
            case 4:
                fVar1 = *param_3;
                *(undefined *)(param_1 + 0x2c) = 1;
                *(float *)(param_1 + 0x14) = fVar1 * 0.01;
                return 1;
            case 5:
                fVar1 = *param_3;
                *(undefined *)(param_1 + 0x2c) = 1;
                *(float *)(param_1 + 0x18) = fVar1 * 0.01;
                return 1;
            case 6:
                *(float *)(param_1 + 0x1c) = *param_3;
                return 1;
            case 7:
                *(int *)(param_1 + 0x24) = (int)(longlong)*param_3;
                return 1;
            case 8:
                *(float *)(param_1 + 0x20) = *param_3;
                return 1;
            case 9:
                uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
                *(undefined *)(param_1 + 0x2c) = 1;
                *(undefined4 *)(param_1 + 0x28) = uVar3;
                return 1;
            case 10:
                cVar2 = *(char *)param_3;
                *(undefined *)(param_1 + 0x32) = 1;
                *(bool *)(param_1 + 0x30) = cVar2 != '\0';
                return 1;
            case 0xb:
                cVar2 = *(char *)param_3;
                *(undefined *)(param_1 + 0x32) = 1;
                *(bool *)(param_1 + 0x31) = cVar2 != '\0';
        }
        return 1;
    }
    return 0x1f;
}



void FUN_1408d1800(longlong param_1,undefined param_2)

{
    *(undefined *)(param_1 + 0x32) = param_2;
    *(undefined *)(param_1 + 0x2c) = param_2;
    return;
}



undefined8 * FUN_1408d1810(undefined8 *param_1)

{
    param_1[1] = 0;
    *param_1 = &PTR_FUN_1409b1790;
    FUN_1408d34f0(param_1 + 3);
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    FUN_1408d33a0(param_1 + 8);
    FUN_1408d33a0(param_1 + 0xc);
    FUN_1408d33a0(param_1 + 0x10);
    FUN_1408d33a0(param_1 + 0x14);
    FUN_1408d33a0(param_1 + 0x18);
    FUN_1408d33a0(param_1 + 0x1c);
    FUN_1408d33a0(param_1 + 0x20);
    FUN_1408d3920(param_1 + 0x24);
    FUN_1408d4d00(param_1 + 0x27);
    FUN_1408d5710(param_1 + 0x29);
    FUN_1408d6020(param_1 + 0x2c);
    FUN_1408d7440(param_1 + 0x2e);
    FUN_1408d6a90(param_1 + 0x31);
    FUN_1408d84b0(param_1 + 0x33);
    return param_1;
}



void FUN_1408d1900(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_1409b1790;
    thunk_FUN_1408d8c80();
    thunk_FUN_1408d8c80(param_1 + 0x31);
    thunk_FUN_1408d8c80(param_1 + 0x2e);
    thunk_FUN_1408d8c80(param_1 + 0x2c);
    thunk_FUN_1408d8c80(param_1 + 0x29);
    thunk_FUN_1408d8c80(param_1 + 0x27);
    thunk_FUN_1408d8c80(param_1 + 0x24);
    FUN_1408d33c0(param_1 + 0x20);
    FUN_1408d33c0(param_1 + 0x1c);
    FUN_1408d33c0(param_1 + 0x18);
    FUN_1408d33c0(param_1 + 0x14);
    FUN_1408d33c0(param_1 + 0x10);
    FUN_1408d33c0(param_1 + 0xc);
    FUN_1408d33c0(param_1 + 8);
    *param_1 = &PTR_LAB_1409a9900;
    return;
}



undefined8
FUN_1408d19d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
              undefined4 *param_5)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    undefined4 uVar10;
    longlong lVar11;
    undefined8 uVar12;
    uint uVar13;
    undefined4 *puVar14;
    undefined4 *puVar15;
    int iVar16;
    undefined4 local_c8 [6];
    char cStack175;
    char cStack155;
    char cStack135;
    char cStack107;
    char cStack83;
    char cStack71;
    char cStack55;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    *(undefined8 *)(param_1 + 0x10) = param_2;
    puVar1 = (undefined4 *)(param_4 + 8);
    *(longlong *)(param_1 + 8) = param_4;
    if ((((uint)puVar1 | (uint)local_c8) & 0xf) == 0) {
        lVar11 = 1;
        puVar9 = local_c8;
        do {
            puVar15 = puVar1;
            puVar14 = puVar9;
            uVar10 = puVar15[1];
            uVar2 = puVar15[2];
            uVar3 = puVar15[3];
            uVar4 = puVar15[4];
            uVar5 = puVar15[5];
            uVar6 = puVar15[6];
            uVar7 = puVar15[7];
            *puVar14 = *puVar15;
            puVar14[1] = uVar10;
            puVar14[2] = uVar2;
            puVar14[3] = uVar3;
            uVar10 = puVar15[8];
            uVar2 = puVar15[9];
            uVar3 = puVar15[10];
            uVar8 = puVar15[0xb];
            puVar14[4] = uVar4;
            puVar14[5] = uVar5;
            puVar14[6] = uVar6;
            puVar14[7] = uVar7;
            uVar4 = puVar15[0xc];
            uVar5 = puVar15[0xd];
            uVar6 = puVar15[0xe];
            uVar7 = puVar15[0xf];
            puVar14[8] = uVar10;
            puVar14[9] = uVar2;
            puVar14[10] = uVar3;
            puVar14[0xb] = uVar8;
            uVar10 = puVar15[0x10];
            uVar2 = puVar15[0x11];
            uVar3 = puVar15[0x12];
            uVar8 = puVar15[0x13];
            puVar14[0xc] = uVar4;
            puVar14[0xd] = uVar5;
            puVar14[0xe] = uVar6;
            puVar14[0xf] = uVar7;
            uVar4 = puVar15[0x14];
            uVar5 = puVar15[0x15];
            uVar6 = puVar15[0x16];
            uVar7 = puVar15[0x17];
            puVar14[0x10] = uVar10;
            puVar14[0x11] = uVar2;
            puVar14[0x12] = uVar3;
            puVar14[0x13] = uVar8;
            uVar10 = puVar15[0x18];
            uVar2 = puVar15[0x19];
            uVar3 = puVar15[0x1a];
            uVar8 = puVar15[0x1b];
            puVar14[0x14] = uVar4;
            puVar14[0x15] = uVar5;
            puVar14[0x16] = uVar6;
            puVar14[0x17] = uVar7;
            uVar4 = puVar15[0x1c];
            uVar5 = puVar15[0x1d];
            uVar6 = puVar15[0x1e];
            uVar7 = puVar15[0x1f];
            puVar14[0x18] = uVar10;
            puVar14[0x19] = uVar2;
            puVar14[0x1a] = uVar3;
            puVar14[0x1b] = uVar8;
            puVar14[0x1c] = uVar4;
            puVar14[0x1d] = uVar5;
            puVar14[0x1e] = uVar6;
            puVar14[0x1f] = uVar7;
            lVar11 = lVar11 + -1;
            puVar9 = puVar14 + 0x20;
            puVar1 = puVar15 + 0x20;
        } while (lVar11 != 0);
        uVar2 = puVar15[0x21];
        uVar3 = puVar15[0x22];
        uVar4 = puVar15[0x23];
        uVar5 = puVar15[0x24];
        uVar6 = puVar15[0x25];
        uVar7 = puVar15[0x26];
        uVar8 = puVar15[0x27];
        uVar10 = puVar15[0x28];
        puVar14[0x20] = puVar15[0x20];
        puVar14[0x21] = uVar2;
        puVar14[0x22] = uVar3;
        puVar14[0x23] = uVar4;
        puVar14[0x24] = uVar5;
        puVar14[0x25] = uVar6;
        puVar14[0x26] = uVar7;
        puVar14[0x27] = uVar8;
        puVar14[0x28] = uVar10;
    }
    else {
        FUN_1407db590(local_c8,puVar1,0xa4);
    }
    iVar16 = 0;
    *(undefined4 *)(param_1 + 0x20) = *param_5;
    for (uVar13 = param_5[1] & 0x3ffff; uVar13 != 0; uVar13 = uVar13 & uVar13 - 1) {
        iVar16 = iVar16 + 1;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (cStack175 != '\0') {
        uVar10 = FUN_1408d3950(param_1 + 0x120,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0x40,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d3970(param_1 + 0x120,param_1 + 0x40,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (cStack155 != '\0') {
        uVar10 = FUN_1408d4d40(param_1 + 0x138,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0x60,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d4d50(param_1 + 0x138,param_1 + 0x60,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (cStack135 != '\0') {
        uVar10 = FUN_1408d5750(param_1 + 0x148,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0x80,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d5770(param_1 + 0x148,param_1 + 0x80,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (cStack107 != '\0') {
        uVar10 = FUN_1408d6060(param_1 + 0x160,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0xa0,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d6070(param_1 + 0x160,param_1 + 0xa0,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (cStack83 != '\0') {
        uVar10 = FUN_1408d6ac0(param_1 + 0x188,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0xe0,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d6ad0(param_1 + 0x188,param_1 + 0xe0,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (cStack71 != '\0') {
        uVar10 = FUN_1408d7480(param_1 + 0x170,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0xc0,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d7490(param_1 + 0x170,param_1 + 0xc0,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    if (cStack55 != '\0') {
        uVar10 = FUN_1408d84f0(param_1 + 0x198,iVar16);
        uVar12 = FUN_1408d33d0(param_1 + 0x100,param_2,uVar10);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        uVar12 = FUN_1408d8500(param_1 + 0x198,param_1 + 0x100,iVar16,*param_5);
        if ((int)uVar12 != 1) {
            return uVar12;
        }
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    *(undefined4 *)(param_1 + 0x24) = uStack52;
    *(undefined4 *)(param_1 + 0x28) = uStack48;
    *(undefined4 *)(param_1 + 0x2c) = uStack44;
    return 1;
}



undefined8 FUN_1408d1d70(undefined8 *param_1,longlong *param_2)

{
    FUN_1408d3440(param_1 + 8);
    FUN_1408d3440(param_1 + 0xc,param_2);
    FUN_1408d3440(param_1 + 0x10,param_2);
    FUN_1408d3440(param_1 + 0x14,param_2);
    FUN_1408d3440(param_1 + 0x18,param_2);
    FUN_1408d3440(param_1 + 0x1c,param_2);
    FUN_1408d3440(param_1 + 0x20,param_2);
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



void FUN_1408d2380(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    double local_58;
    double local_50;
    undefined4 local_48;
    undefined local_44;
    double local_40;
    double local_38;
    double local_30;
    double local_28;
    double local_20;
    double local_18;
    undefined local_10;

    if ((*(char *)((longlong)param_2 + 0x19) != '\0') && (*(char *)(param_2 + 6) != '\0')) {
        local_48 = *param_2;
        iVar1 = *(int *)(param_1 + 0x130);
        local_58 = (double)(float)param_2[1];
        local_50 = (double)(float)param_2[2];
        local_44 = 0;
        local_30 = (double)((ulonglong)local_30 & 0xffffff0000000000 | (ulonglong)(uint)param_2[3]);
        local_40 = (double)(float)param_2[4];
        local_38 = (double)(float)param_2[5];
        FUN_1408d39d0(param_1 + 0x120,&local_40,&local_58);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x130) - iVar1);
    }
    if ((*(char *)((longlong)param_2 + 0x2d) != '\0') && (*(char *)(param_2 + 0xb) != '\0')) {
        local_40 = (double)(float)param_2[8];
        local_38 = (double)(float)param_2[9];
        local_28 = (double)((ulonglong)local_28 & 0xffffff0000000000 | (ulonglong)(uint)param_2[7]);
        local_30 = (double)(float)param_2[10];
        FUN_1408d4db0(param_1 + 0x138,&local_40);
    }
    if ((*(char *)((longlong)param_2 + 0x41) != '\0') && (*(char *)(param_2 + 0x10) != '\0')) {
        iVar1 = *(int *)(param_1 + 0x158);
        local_40 = (double)(float)param_2[0xd];
        local_38 = (double)(float)param_2[0xe];
        local_28 = (double)((ulonglong)local_28 & 0xffffff0000000000 | (ulonglong)(uint)param_2[0xc]);
        local_30 = (double)(float)param_2[0xf];
        FUN_1408d57d0(param_1 + 0x148,&local_40);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x158) - iVar1);
    }
    if ((*(char *)((longlong)param_2 + 0x5d) != '\0') && (*(char *)(param_2 + 0x17) != '\0')) {
        local_10 = 0;
        local_40 = (double)(float)param_2[0x11];
        local_38 = (double)(float)param_2[0x13];
        local_30 = (double)(float)param_2[0x12];
        local_28 = (double)(float)param_2[0x14];
        local_20 = (double)(float)param_2[0x15];
        local_18 = (double)(float)param_2[0x16];
        FUN_1408d60d0(param_1 + 0x160,&local_40);
    }
    if ((*(char *)((longlong)param_2 + 0x81) != '\0') && (*(char *)(param_2 + 0x20) != '\0')) {
        iVar1 = *(int *)(param_1 + 0x180);
        local_38 = (double)(float)param_2[0x1f];
        local_40 = (double)((ulonglong)local_40 & 0xffffffff00000000 | (ulonglong)(uint)param_2[0x1e]);
        local_30 = (double)((ulonglong)local_30 & 0xffffffffffffff00);
        FUN_1408d74f0(param_1 + 0x170,&local_40);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (*(int *)(param_1 + 0x180) - iVar1);
    }
    if ((*(char *)((longlong)param_2 + 0x75) != '\0') && (*(char *)(param_2 + 0x1d) != '\0')) {
        local_18 = (double)((ulonglong)local_18 & 0xffffffffffffff00);
        local_40 = (double)(float)param_2[0x18];
        local_38 = (double)(float)param_2[0x19];
        local_30 = (double)(float)param_2[0x1a];
        local_28 = (double)(float)param_2[0x1b];
        local_20 = (double)(float)param_2[0x1c];
        FUN_1408d6b30(param_1 + 0x188,&local_40);
    }
    if ((*(char *)((longlong)param_2 + 0x91) != '\0') && (*(char *)(param_2 + 0x24) != '\0')) {
        local_40 = *(double *)(param_2 + 0x21);
        local_38 = (double)(float)param_2[0x23];
        local_30 = (double)((ulonglong)local_30 & 0xffffffffffffff00);
        FUN_1408d8560(param_1 + 0x198,&local_40);
    }
    return;
}



void FUN_1408d2650(undefined8 param_1,float param_2,float param_3,undefined (*param_4) [16],
                   undefined8 param_5,undefined8 param_6,uint param_7)

{
    undefined (*pauVar1) [16];
    undefined *puVar2;
    longlong lVar3;
    undefined (*pauVar4) [16];
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    pauVar1 = (undefined (*) [16])(*param_4 + (ulonglong)param_7 * 4);
    puVar2 = *param_4;
    fVar10 = (param_3 - param_2) / (float)(ulonglong)(param_7 & 0xfffffffc);
    fVar12 = fVar10 * 4.0;
    fVar5 = fVar10 + param_2;
    fVar6 = fVar5 + fVar10;
    fVar10 = fVar6 + fVar10;
    pauVar4 = param_4;
    fVar11 = param_2;
    if (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4)) {
        do {
            param_4 = pauVar4[1];
            fVar7 = *(float *)(*pauVar4 + 4) * fVar5;
            fVar8 = *(float *)(*pauVar4 + 8) * fVar6;
            fVar9 = *(float *)(*pauVar4 + 0xc) * fVar10;
            fVar5 = fVar5 + fVar12;
            fVar6 = fVar6 + fVar12;
            fVar10 = fVar10 + fVar12;
            *pauVar4 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,*(float *)*pauVar4 * fVar11)));
            pauVar4 = param_4;
            fVar11 = fVar11 + fVar12;
        } while (param_4 < (undefined (*) [16])(puVar2 + (ulonglong)(param_7 & 0xfffffffc) * 4));
    }
    if (param_4 < pauVar1) {
        lVar3 = (longlong)pauVar1 + (3 - (longlong)param_4);
        fVar11 = (param_3 - param_2) / (float)(ulonglong)param_7;
        if (3 < (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 3)) >> 2) {
            pauVar4 = param_4;
            do {
                param_4 = pauVar4[1];
                *(float *)*pauVar4 = param_2 * *(float *)*pauVar4;
                fVar5 = param_2 + fVar11 + fVar11;
                *(float *)(*pauVar4 + 4) = (param_2 + fVar11) * *(float *)(*pauVar4 + 4);
                fVar6 = fVar5 + fVar11;
                *(float *)(*pauVar4 + 8) = fVar5 * *(float *)(*pauVar4 + 8);
                param_2 = fVar6 + fVar11;
                *(float *)(*pauVar4 + 0xc) = fVar6 * *(float *)(*pauVar4 + 0xc);
                pauVar4 = param_4;
            } while ((longlong)param_4 < (longlong)(pauVar1[-1] + 4));
        }
        for (; param_4 < pauVar1; param_4 = (undefined (*) [16])(*param_4 + 4)) {
            *(float *)*param_4 = param_2 * *(float *)*param_4;
            param_2 = param_2 + fVar11;
        }
    }
    return;
}



void FUN_1408d27a0(undefined8 param_1,float param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint param_5)

{
    undefined (*pauVar1) [16];
    float fVar2;
    undefined *puVar3;
    longlong lVar4;
    undefined (*pauVar5) [16];

    if (param_2 != 1.0) {
        puVar3 = *param_3;
        pauVar1 = (undefined (*) [16])(*param_3 + (ulonglong)param_5 * 4);
        pauVar5 = param_3;
        if (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4)) {
            do {
                param_3 = pauVar5[1];
                *pauVar5 = CONCAT412(*(float *)(*pauVar5 + 0xc) * param_2,
                                     CONCAT48(*(float *)(*pauVar5 + 8) * param_2,
                                              CONCAT44(*(float *)(*pauVar5 + 4) * param_2,
                                                       *(float *)*pauVar5 * param_2)));
                pauVar5 = param_3;
            } while (param_3 < (undefined (*) [16])(puVar3 + (ulonglong)(param_5 & 0xfffffffc) * 4));
        }
        if (param_3 < pauVar1) {
            lVar4 = (longlong)pauVar1 + (3 - (longlong)param_3);
            if (3 < (longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) {
                pauVar5 = param_3;
                do {
                    param_3 = pauVar5[1];
                    fVar2 = *(float *)(*pauVar5 + 4);
                    *(float *)*pauVar5 = param_2 * *(float *)*pauVar5;
                    *(float *)(*pauVar5 + 4) = param_2 * fVar2;
                    *(float *)(*pauVar5 + 8) = param_2 * *(float *)(*pauVar5 + 8);
                    *(float *)(*pauVar5 + 0xc) = param_2 * *(float *)(*pauVar5 + 0xc);
                    pauVar5 = param_3;
                } while ((longlong)param_3 < (longlong)(pauVar1[-1] + 4));
            }
            for (; param_3 < pauVar1; param_3 = (undefined (*) [16])(*param_3 + 4)) {
                *(float *)*param_3 = param_2 * *(float *)*param_3;
            }
        }
    }
    return;
}



void FUN_1408d2890(longlong *param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_1 + 8))(param_1,0x1a8);
    if (lVar1 != 0) {
        FUN_1408d1810(lVar1);
        return;
    }
    return;
}



undefined8 FUN_1408d28c0(undefined8 param_1,uint param_2)

{
    FUN_1408d1900();
    if ((param_2 & 1) != 0) {
        FUN_140001e60(param_1);
    }
    return param_1;
}



undefined8 * FUN_1408d2910(undefined8 *param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;

    puVar7 = (undefined4 *)(param_2 + 8);
    *param_1 = &PTR_FUN_1409b17d8;
    puVar5 = param_1 + 1;
    if ((((uint)puVar7 | (uint)puVar5) & 0xf) == 0) {
        lVar4 = 1;
        do {
            puVar8 = puVar7;
            puVar6 = puVar5;
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *(undefined4 *)puVar6 = *puVar8;
            *(undefined4 *)((longlong)puVar6 + 4) = uVar1;
            *(undefined4 *)(puVar6 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
            uVar1 = puVar8[5];
            uVar2 = puVar8[6];
            uVar3 = puVar8[7];
            *(undefined4 *)(puVar6 + 2) = puVar8[4];
            *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
            *(undefined4 *)(puVar6 + 3) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
            uVar1 = puVar8[9];
            uVar2 = puVar8[10];
            uVar3 = puVar8[0xb];
            *(undefined4 *)(puVar6 + 4) = puVar8[8];
            *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
            *(undefined4 *)(puVar6 + 5) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
            uVar1 = puVar8[0xd];
            uVar2 = puVar8[0xe];
            uVar3 = puVar8[0xf];
            *(undefined4 *)(puVar6 + 6) = puVar8[0xc];
            *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
            *(undefined4 *)(puVar6 + 7) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
            uVar1 = puVar8[0x11];
            uVar2 = puVar8[0x12];
            uVar3 = puVar8[0x13];
            *(undefined4 *)(puVar6 + 8) = puVar8[0x10];
            *(undefined4 *)((longlong)puVar6 + 0x44) = uVar1;
            *(undefined4 *)(puVar6 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar3;
            uVar1 = puVar8[0x15];
            uVar2 = puVar8[0x16];
            uVar3 = puVar8[0x17];
            *(undefined4 *)(puVar6 + 10) = puVar8[0x14];
            *(undefined4 *)((longlong)puVar6 + 0x54) = uVar1;
            *(undefined4 *)(puVar6 + 0xb) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x5c) = uVar3;
            uVar1 = puVar8[0x19];
            uVar2 = puVar8[0x1a];
            uVar3 = puVar8[0x1b];
            *(undefined4 *)(puVar6 + 0xc) = puVar8[0x18];
            *(undefined4 *)((longlong)puVar6 + 100) = uVar1;
            *(undefined4 *)(puVar6 + 0xd) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar3;
            uVar1 = puVar8[0x1d];
            uVar2 = puVar8[0x1e];
            uVar3 = puVar8[0x1f];
            *(undefined4 *)(puVar6 + 0xe) = puVar8[0x1c];
            *(undefined4 *)((longlong)puVar6 + 0x74) = uVar1;
            *(undefined4 *)(puVar6 + 0xf) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0x7c) = uVar3;
            lVar4 = lVar4 + -1;
            puVar5 = puVar6 + 0x10;
            puVar7 = puVar8 + 0x20;
        } while (lVar4 != 0);
        uVar1 = puVar8[0x21];
        uVar2 = puVar8[0x22];
        uVar3 = puVar8[0x23];
        *(undefined4 *)(puVar6 + 0x10) = puVar8[0x20];
        *(undefined4 *)((longlong)puVar6 + 0x84) = uVar1;
        *(undefined4 *)(puVar6 + 0x11) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x8c) = uVar3;
        uVar1 = puVar8[0x25];
        uVar2 = puVar8[0x26];
        uVar3 = puVar8[0x27];
        *(undefined4 *)(puVar6 + 0x12) = puVar8[0x24];
        *(undefined4 *)((longlong)puVar6 + 0x94) = uVar1;
        *(undefined4 *)(puVar6 + 0x13) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x9c) = uVar3;
        *(undefined4 *)(puVar6 + 0x14) = puVar8[0x28];
    }
    else {
        FUN_1407db590(puVar5,puVar7,0xa4);
    }
    *(undefined *)(param_1 + 4) = 1;
    *(undefined *)((longlong)param_1 + 0x34) = 1;
    *(undefined *)(param_1 + 9) = 1;
    *(undefined *)((longlong)param_1 + 100) = 1;
    *(undefined *)((longlong)param_1 + 0x7c) = 1;
    *(undefined *)(param_1 + 0x11) = 1;
    *(undefined *)(param_1 + 0x13) = 1;
    return param_1;
}



void FUN_1408d2a10(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_2 + 8))(param_2,0xb0);
    if (lVar1 != 0) {
        FUN_1408d2910(lVar1,param_1);
        return;
    }
    return;
}



undefined8 FUN_1408d2a50(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined8 uVar1;
    undefined4 uVar2;

    if (param_4 == 0) {
        *(undefined8 *)((longlong)param_1 + 0xc) = 0x468ca000;
        param_1[3] = 0x42200000;
        *(undefined4 *)(param_1 + 7) = 1;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        *(undefined8 *)((longlong)param_1 + 0x24) = 0;
        *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
        *(undefined8 *)((longlong)param_1 + 0x3c) = 0x447a0000;
        *(undefined4 *)((longlong)param_1 + 0x44) = 0xc2c00000;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0xc2c00000;
        *(undefined4 *)(param_1 + 10) = 0x468ca000;
        *(undefined8 *)((longlong)param_1 + 0x54) = 0x42200000;
        *(undefined4 *)((longlong)param_1 + 0x5c) = 0xc1a00000;
        *(undefined4 *)(param_1 + 0xc) = 0x41a00000;
        *(undefined4 *)(param_1 + 0xd) = 0xc2200000;
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0x41200000;
        *(undefined4 *)(param_1 + 0xf) = 0x42c80000;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)((longlong)param_1 + 0x84) = 0x42c80000;
        *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
        *(undefined4 *)((longlong)param_1 + 0x94) = 0;
        uVar2 = FUN_1408fbfc0(0x41200000,0);
        *(undefined4 *)((longlong)param_1 + 0xa4) = 0x42c80000;
        *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
        *(undefined4 *)(param_1 + 0x14) = uVar2;
        *(undefined *)(param_1 + 4) = 1;
        *(undefined *)((longlong)param_1 + 0x34) = 1;
        *(undefined *)(param_1 + 9) = 1;
        *(undefined *)((longlong)param_1 + 100) = 1;
        *(undefined *)((longlong)param_1 + 0x7c) = 1;
        *(undefined *)(param_1 + 0x11) = 1;
        *(undefined *)(param_1 + 0x13) = 1;
        *(undefined *)(param_1 + 0x15) = 1;
        return 1;
    }
    // WARNING: Could not recover jumptable at 0x0001408d2b67. Too many branches
    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
    return uVar1;
}



undefined8 FUN_1408d2b80(undefined8 *param_1,longlong *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,0);
        (**(code **)(*param_2 + 0x10))(param_2,param_1);
    }
    return 1;
}



undefined8 FUN_1408d2bc0(longlong param_1,undefined *param_2)

{
    undefined4 uVar1;

    *(undefined *)(param_1 + 0x21) = *param_2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x15);
    *(undefined *)(param_1 + 0x35) = param_2[0x19];
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x1e);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x26);
    *(undefined *)(param_1 + 0x49) = param_2[0x2a];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x2b);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2f);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x33);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x37);
    *(undefined *)(param_1 + 0x65) = param_2[0x3b];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x50);
    *(undefined *)(param_1 + 0x89) = param_2[0x54];
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x55);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x59);
    *(undefined *)(param_1 + 0x7d) = param_2[0x5d];
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x5e);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x62);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x66);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x6a);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x6e);
    *(undefined *)(param_1 + 0x99) = param_2[0x72];
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x73);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x77);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x7b);
    uVar1 = FUN_1408fbfc0(0x41200000,*(float *)(param_2 + 0x7f) * 0.05);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    uVar1 = FUN_1408fbfc0(0x41200000,*(float *)(param_2 + 0x83) * 0.05);
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x87);
    *(undefined *)(param_1 + 0x20) = 1;
    *(undefined *)(param_1 + 0x34) = 1;
    *(undefined *)(param_1 + 0x48) = 1;
    *(undefined *)(param_1 + 100) = 1;
    *(undefined *)(param_1 + 0x7c) = 1;
    *(undefined *)(param_1 + 0x88) = 1;
    *(undefined *)(param_1 + 0x98) = 1;
    *(undefined *)(param_1 + 0xa8) = 1;
    return 1;
}



undefined4 FUN_1408d2dc0(longlong param_1,undefined2 param_2,float *param_3)

{
    char cVar1;
    float fVar2;
    undefined4 uVar3;

    if (param_3 == (float *)0x0) {
        return 0x1f;
    }
    switch(param_2) {
        case 0:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x34) = 1;
            *(bool *)(param_1 + 0x35) = cVar1 != '\0';
            return 1;
        case 1:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x34) = 1;
            *(float *)(param_1 + 0x24) = fVar2;
            return 1;
        case 2:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x34) = 1;
            *(float *)(param_1 + 0x28) = fVar2;
            return 1;
        case 3:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x34) = 1;
            *(float *)(param_1 + 0x2c) = fVar2;
            return 1;
        case 4:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x34) = 1;
            *(float *)(param_1 + 0x30) = fVar2;
            return 1;
        default:
            return 0x1f;
        case 10:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x7c) = 1;
            *(bool *)(param_1 + 0x7d) = cVar1 != '\0';
            return 1;
        case 0xb:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x7c) = 1;
            *(float *)(param_1 + 0x68) = fVar2;
            return 1;
        case 0xc:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x7c) = 1;
            *(float *)(param_1 + 0x6c) = fVar2;
            return 1;
        case 0xd:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x7c) = 1;
            *(float *)(param_1 + 0x70) = fVar2;
            return 1;
        case 0xe:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x7c) = 1;
            *(float *)(param_1 + 0x74) = fVar2;
            return 1;
        case 0xf:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x7c) = 1;
            *(float *)(param_1 + 0x78) = fVar2;
            return 1;
        case 0x14:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x88) = 1;
            *(bool *)(param_1 + 0x89) = cVar1 != '\0';
            return 1;
        case 0x15:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x88) = 1;
            *(float *)(param_1 + 0x80) = fVar2;
            return 1;
        case 0x16:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x88) = 1;
            *(float *)(param_1 + 0x84) = fVar2;
            return 1;
        case 0x1e:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x98) = 1;
            *(bool *)(param_1 + 0x99) = cVar1 != '\0';
            return 1;
        case 0x1f:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x98) = 1;
            *(int *)(param_1 + 0x8c) = (int)fVar2;
            return 1;
        case 0x20:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x98) = 1;
            *(int *)(param_1 + 0x90) = (int)fVar2;
            return 1;
        case 0x21:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x98) = 1;
            *(float *)(param_1 + 0x94) = fVar2;
            return 1;
        case 0x28:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0xa8) = 1;
            *(undefined4 *)(param_1 + 0x9c) = uVar3;
            return 1;
        case 0x29:
            uVar3 = FUN_1408fbfc0(0x41200000,*param_3 * 0.05);
            *(undefined *)(param_1 + 0xa8) = 1;
            *(undefined4 *)(param_1 + 0xa0) = uVar3;
            return 1;
        case 0x2a:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0xa8) = 1;
            *(float *)(param_1 + 0xa4) = fVar2;
            return 1;
        case 0x32:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(bool *)(param_1 + 0x21) = cVar1 != '\0';
            return 1;
        case 0x33:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(float *)(param_1 + 8) = fVar2;
            return 1;
        case 0x34:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(float *)(param_1 + 0xc) = fVar2;
            return 1;
        case 0x35:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(float *)(param_1 + 0x10) = fVar2;
            return 1;
        case 0x36:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(float *)(param_1 + 0x14) = fVar2;
            return 1;
        case 0x37:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(float *)(param_1 + 0x18) = fVar2;
            return 1;
        case 0x38:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x20) = 1;
            *(float *)(param_1 + 0x1c) = fVar2;
            return 1;
        case 0x3c:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 0x48) = 1;
            *(bool *)(param_1 + 0x49) = cVar1 != '\0';
            return 1;
        case 0x3d:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x48) = 1;
            *(float *)(param_1 + 0x38) = fVar2;
            return 1;
        case 0x3e:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x48) = 1;
            *(float *)(param_1 + 0x3c) = fVar2;
            return 1;
        case 0x3f:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x48) = 1;
            *(float *)(param_1 + 0x40) = fVar2;
            return 1;
        case 0x40:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 0x48) = 1;
            *(float *)(param_1 + 0x44) = fVar2;
            return 1;
        case 0x46:
            cVar1 = *(char *)param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(bool *)(param_1 + 0x65) = cVar1 != '\0';
            return 1;
        case 0x47:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(float *)(param_1 + 0x4c) = fVar2;
            return 1;
        case 0x48:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(float *)(param_1 + 0x50) = fVar2;
            return 1;
        case 0x49:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(float *)(param_1 + 0x54) = fVar2;
            return 1;
        case 0x4a:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(float *)(param_1 + 0x58) = fVar2;
            return 1;
        case 0x4b:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(float *)(param_1 + 0x5c) = fVar2;
            return 1;
        case 0x4c:
            fVar2 = *param_3;
            *(undefined *)(param_1 + 100) = 1;
            *(float *)(param_1 + 0x60) = fVar2;
            return 1;
    }
}



void FUN_1408d3340(longlong *param_1)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xb0);
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1409b17d8;
        return;
    }
    return;
}



undefined8 * FUN_1408d3370(undefined8 *param_1,byte param_2)

{
    *param_1 = &PTR_FUN_1409a70c8;
    if ((param_2 & 1) != 0) {
        FUN_140001e60();
    }
    return param_1;
}



undefined4 * FUN_1408d33a0(undefined4 *param_1)

{
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    return param_1;
}



void FUN_1408d33c0(void)

{
    return;
}



undefined8 FUN_1408d33d0(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
    longlong lVar1;

    lVar1 = (**(code **)(*param_2 + 8))(param_2,param_3);
    *(longlong *)(param_1 + 4) = lVar1;
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
        return 0x34;
    }
    FUN_1407e4830(lVar1,0,param_3);
    *param_1 = (int)param_3;
    *(ulonglong *)(param_1 + 6) = (param_3 & 0xffffffff) + *(longlong *)(param_1 + 4);
    return 1;
}



void FUN_1408d3440(undefined4 *param_1,longlong *param_2)

{
    if (*(longlong *)(param_1 + 2) != 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        *param_1 = 0;
        *(undefined8 *)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
    }
    return;
}



undefined8 FUN_1408d3480(undefined4 *param_1,undefined4 *param_2)

{
    if (param_2 != (undefined4 *)0x0) {
        *param_2 = *param_1;
    }
    return *(undefined8 *)(param_1 + 2);
}



void FUN_1408d34a0(int *param_1)

{
    if (*param_1 != 0) {
        FUN_1407e4830(*(undefined8 *)(param_1 + 2),0,*param_1);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
    }
    return;
}



void FUN_1408d34e0(longlong param_1,longlong param_2)

{
    *(longlong *)(param_1 + 0x10) = param_2 + *(longlong *)(param_1 + 0x10);
    return;
}



undefined4 * FUN_1408d34f0(undefined4 *param_1)

{
    *param_1 = 0xbf7c9;
    return param_1;
}



void FUN_1408d3500(int *param_1,float *param_2,ulonglong param_3)

{
    float *pfVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    float *pfVar6;

    fVar2 = DAT_140c13240;
    pfVar1 = param_2 + (param_3 & 0xffffffff);
    if (param_2 < pfVar1) {
        lVar5 = (longlong)pfVar1 + (3 - (longlong)param_2);
        if (3 < (longlong)(lVar5 + (ulonglong)((uint)(lVar5 >> 0x3f) & 3)) >> 2) {
            pfVar6 = param_2;
            do {
                param_2 = pfVar6 + 4;
                iVar3 = *param_1 * 0x343fd + 0x269ec3;
                iVar4 = iVar3 * 0x343fd + 0x269ec3;
                *pfVar6 = (float)iVar3 * fVar2;
                iVar3 = iVar4 * 0x343fd + 0x269ec3;
                pfVar6[1] = (float)iVar4 * fVar2;
                iVar4 = iVar3 * 0x343fd + 0x269ec3;
                *param_1 = iVar4;
                pfVar6[2] = (float)iVar3 * fVar2;
                pfVar6[3] = (float)iVar4 * fVar2;
                pfVar6 = param_2;
            } while ((longlong)param_2 < (longlong)(pfVar1 + -3));
        }
        for (; param_2 < pfVar1; param_2 = param_2 + 1) {
            iVar3 = *param_1 * 0x343fd + 0x269ec3;
            *param_1 = iVar3;
            *param_2 = (float)iVar3 * fVar2;
        }
    }
    return;
}



longlong FUN_1408d35f0(longlong param_1)

{
    FUN_1408d3b30();
    return param_1 + 0xc0;
}



undefined8 FUN_1408d3610(undefined8 param_1)

{
    FUN_1408d8c60();
    return param_1;
}



undefined8 FUN_1408d3660(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0xc0) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0xc0) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d36e0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
    uint uVar1;
    ulonglong uVar2;
    double dVar3;
    undefined local_78 [48];
    undefined local_48 [64];

    if (*(char *)(param_2 + 0x14) == '\0') {
        dVar3 = *(double *)(param_2 + 8) * 0.01;
        if (0.0 < dVar3) {
            sqrtpd(ZEXT816((ulonglong)dVar3),ZEXT816((ulonglong)dVar3));
        }
        FUN_1408d92a0(*param_1,param_2,param_3,local_48);
        if (*(int *)(param_2 + 0x10) == 1) {
            FUN_1408d92a0(*param_1);
        }
        else {
            FUN_1408d8f20(local_78);
        }
    }
    else {
        FUN_1408d8f20(local_48);
        FUN_1408d8f20(local_78);
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
        do {
            FUN_1408d8e70(param_1,local_48,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,0);
            FUN_1408d8e70(param_1,local_78,*(longlong *)(param_1 + 2) + uVar2 * 0xc0);
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < (uint)param_1[1]);
    }
    return;
}



void FUN_1408d3800(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
    uint uVar1;
    ulonglong uVar2;
    double dVar3;
    undefined local_78 [48];
    undefined local_48 [64];

    if (*(char *)(param_2 + 0x14) == '\0') {
        dVar3 = *(double *)(param_2 + 8) * 0.01;
        if (0.0 < dVar3) {
            sqrtpd(ZEXT816((ulonglong)dVar3),ZEXT816((ulonglong)dVar3));
        }
        FUN_1408d9480(*param_1,param_2,param_3,local_48);
        if (*(int *)(param_2 + 0x10) == 1) {
            FUN_1408d9480(*param_1);
        }
        else {
            FUN_1408d8f20(local_78);
        }
    }
    else {
        FUN_1408d8f20(local_48);
        FUN_1408d8f20(local_78);
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
        do {
            FUN_1408d8e70(param_1,local_48,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,10);
            FUN_1408d8e70(param_1,local_78,*(longlong *)(param_1 + 2) + uVar2 * 0xc0,0xf);
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < (uint)param_1[1]);
    }
    return;
}



undefined8 FUN_1408d3920(undefined8 param_1)

{
    FUN_1408d8c60();
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d3950(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 0xc0;
}



undefined8 FUN_1408d3970(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[4] = 0;
    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0xc0) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0xc0) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d39d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    FUN_1408d36e0();
    FUN_1408d3800(param_1,param_3);
    FUN_1408d3a10(param_1,*(undefined8 *)(param_1 + 8));
    return;
}



void FUN_1408d3a10(longlong param_1,undefined4 *param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;

    local_98 = *param_2;
    local_94 = param_2[1];
    local_90 = param_2[2];
    local_8c = param_2[3];
    local_88 = param_2[4];
    local_80 = param_2[5];
    local_7c = param_2[6];
    local_78 = param_2[7];
    local_74 = param_2[8];
    local_70 = param_2[9];
    local_68 = param_2[10];
    local_64 = param_2[0xb];
    local_60 = param_2[0xc];
    local_5c = param_2[0xd];
    local_58 = param_2[0xe];
    local_50 = param_2[0xf];
    local_4c = param_2[0x10];
    local_48 = param_2[0x11];
    local_44 = param_2[0x12];
    local_40 = param_2[0x13];
    fVar1 = (float)FUN_1408d9a30(&local_98);
    fVar2 = (float)FUN_1408d9a30(&local_80);
    fVar3 = (float)FUN_1408d9a30(&local_68);
    fVar4 = (float)FUN_1408d9a30(&local_50);
    if (fVar1 <= fVar3) {
        fVar1 = fVar3;
    }
    if ((fVar1 == fVar2) || (fVar1 == fVar4)) {
        fVar1 = fVar1 * 1.693147;
    }
    *(int *)(param_1 + 0x10) = (int)(longlong)(fVar1 * 6.91);
    return;
}



void FUN_1408d3b30(float *param_1,longlong param_2,float *param_3,int param_4)

{
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
    float *pfVar21;
    float fVar22;
    float fVar23;
    float fVar24;
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
    float fVar37;
    float fVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float local_res8;
    float local_res20;
    float local_108;

    fVar1 = *param_1;
    fVar2 = param_1[0xf];
    fVar28 = param_1[0x2d];
    fVar29 = param_1[0x18];
    fVar26 = param_1[0x1a];
    fVar34 = param_1[0x19];
    fVar23 = param_1[0x20];
    fVar36 = param_1[0x1b];
    fVar38 = param_1[0x1f];
    fVar40 = param_1[0x21];
    fVar42 = param_1[0x25];
    fVar27 = param_1[0x26];
    fVar24 = param_1[0x2c];
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    fVar5 = param_1[0x10];
    fVar6 = param_1[3];
    fVar7 = param_1[4];
    fVar8 = param_1[0x11];
    fVar9 = param_1[5];
    fVar10 = param_1[6];
    fVar11 = param_1[0x12];
    fVar12 = param_1[7];
    fVar13 = param_1[8];
    fVar14 = param_1[0x13];
    fVar15 = param_1[9];
    fVar16 = param_1[10];
    fVar25 = param_1[0x2b];
    fVar17 = param_1[0xb];
    fVar18 = param_1[0xc];
    fVar19 = param_1[0xd];
    fVar20 = param_1[0xe];
    fVar22 = param_1[0x27];
    fVar30 = param_1[0x1e];
    fVar31 = param_1[0x24];
    fVar32 = param_1[0x2a];
    if (param_4 != 0) {
        pfVar21 = param_3;
        fVar33 = fVar34;
        fVar35 = fVar36;
        fVar37 = fVar38;
        fVar39 = fVar40;
        fVar41 = fVar42;
        local_res8 = fVar25;
        local_res20 = fVar22;
        local_108 = fVar28;
        do {
            fVar28 = fVar24;
            fVar25 = fVar32;
            fVar22 = fVar27;
            fVar42 = fVar31;
            fVar40 = fVar23;
            fVar38 = fVar30;
            fVar36 = fVar26;
            fVar34 = fVar29;
            fVar29 = *(float *)((param_2 - (longlong)param_3) + (longlong)pfVar21);
            fVar26 = ((fVar34 * fVar3 + fVar1 * fVar29 + fVar33 * fVar4) - fVar36 * fVar6) -
                     fVar35 * fVar7;
            fVar23 = ((fVar38 * fVar10 + fVar9 * fVar26 + fVar37 * fVar12) - fVar40 * fVar13) -
                     fVar39 * fVar15;
            fVar27 = ((fVar42 * fVar17 + fVar16 * fVar23 + fVar41 * fVar18) - fVar22 * fVar19) -
                     local_res20 * fVar20;
            fVar24 = ((fVar25 * fVar5 + fVar2 * fVar27 + local_res8 * fVar8) - fVar28 * fVar11) -
                     local_108 * fVar14;
            *pfVar21 = fVar24;
            param_4 = param_4 + -1;
            pfVar21 = pfVar21 + 1;
            fVar30 = fVar26;
            fVar31 = fVar23;
            fVar32 = fVar27;
            fVar33 = fVar34;
            fVar35 = fVar36;
            fVar37 = fVar38;
            fVar39 = fVar40;
            fVar41 = fVar42;
            local_res8 = fVar25;
            local_res20 = fVar22;
            local_108 = fVar28;
        } while (param_4 != 0);
    }
    param_1[0x24] = fVar31;
    param_1[0x2a] = fVar32;
    param_1[0x18] = fVar29;
    param_1[0x1e] = fVar30;
    param_1[0x19] = fVar34;
    param_1[0x1f] = fVar38;
    param_1[0x25] = fVar42;
    param_1[0x2b] = fVar25;
    param_1[0x20] = fVar23;
    param_1[0x26] = fVar27;
    param_1[0x2c] = fVar24;
    param_1[0x1a] = fVar26;
    param_1[0x1b] = fVar36;
    param_1[0x21] = fVar40;
    param_1[0x27] = fVar22;
    param_1[0x2d] = fVar28;
    return;
}



longlong FUN_1408d3f80(longlong param_1)

{
    FUN_1408d4fb0();
    return param_1 + 0x498;
}



longlong FUN_1408d3fb0(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



undefined8 FUN_1408d4000(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x498) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x498) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d4080(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    undefined4 in_XMM6_Da;
    undefined4 uVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar3 [16];

    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        auVar3 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar2 = 0;
        do {
            param_1 = FUN_1408d8ca0(param_1,uVar2,param_2,(ulonglong)uVar1 * 0x498,
                                    *(longlong *)(param_2 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,4,auVar3)
                    ;
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d40f0(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                   undefined param_5)

{
    uint uVar1;

    FUN_1408d5260(param_2,param_3,param_5,&DAT_140c62b10,0x100);
    uVar1 = 0;
    if (*(int *)(param_3 + 4) != 0) {
        do {
            FUN_1408d8ce0(param_3,&DAT_140c62b10,0x100,
                          *(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,0x12);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d4170(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,0x12,(ulonglong)uVar1 * 0x498 + *(longlong *)(param_1 + 8),3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d41d0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = 0;
    uVar3 = 0x3ff00000;
    if (param_4 == '\0') {
        param_1 = FUN_1408ffa00(0x4024000000000000,0xc003333333333334);
        uVar2 = (undefined4)param_1;
        uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
    }
    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            param_1 = FUN_1408d8ca0(param_1,CONCAT44(uVar3,uVar2),param_2,param_3,
                                    (ulonglong)uVar1 * 0x498 + *(longlong *)(param_2 + 8),2,auVar4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d4250(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5,char param_6)

{
    double dVar1;
    uint uVar2;
    int iVar3;
    double dVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;

    uVar11 = 0;
    uVar12 = 0x3ff00000;
    dVar4 = 1.0;
    uVar9 = 0;
    uVar10 = 0;
    if (param_6 == '\0') {
        uVar9 = SUB84(param_2 * 0.01,0);
        uVar10 = (undefined4)((ulonglong)(param_2 * 0.01) >> 0x20);
        dVar4 = (double)FUN_1408ffa00(0x4024000000000000);
    }
    dVar1 = (double)CONCAT44(uVar10,uVar9) * 20.0;
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    iVar3 = (int)dVar1;
    uVar5 = (undefined4)*(undefined8 *)(&DAT_140c132a0 + (longlong)iVar3 * 8);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(&DAT_140c132a0 + (longlong)iVar3 * 8) >> 0x20);
    dVar4 = (double)FUN_1408ffa00(((double)CONCAT44(uVar12,uVar11) - dVar4) / dVar4 +
                                  (double)CONCAT44(uVar12,uVar11));
    FUN_1408ff6e0((((double)CONCAT44(uVar12,uVar11) / dVar4 - (double)CONCAT44(uVar12,uVar11)) *
                   (double)CONCAT44(uVar10,uVar9) + (double)CONCAT44(uVar12,uVar11)) *
                  ((*(double *)(&DAT_140c132a8 + (longlong)iVar3 * 8) - (double)CONCAT44(uVar6,uVar5))
                   * ((double)CONCAT44(uVar8,uVar7) - (double)iVar3) + (double)CONCAT44(uVar6,uVar5)))
            ;
    FUN_1408ffa00(0x4024000000000000);
    uVar2 = 0;
    if (*(int *)(param_3 + 4) != 0) {
        do {
            FUN_1408d8ca0(param_3,param_4,*(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar2 * 0x498,7);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d4410(undefined8 param_1,double param_2,undefined4 *param_3,undefined8 param_4,
                   undefined4 param_5)

{
    uint uVar1;
    double dVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined8 local_res8;

    uVar4 = 0;
    uVar5 = 0;
    param_2 = param_2 * 0.01;
    uVar6 = SUB84(param_2,0);
    uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (0.0 < param_2) {
        uVar6 = SUB84(SQRT(param_2),0);
        uVar7 = (undefined4)((ulonglong)SQRT(param_2) >> 0x20);
    }
    switch(param_5) {
        case 0:
            uVar3 = FUN_1408da340(param_1,(double)CONCAT44(uVar7,uVar6) * 7.800000000000001 + 4.35,*param_3)
                    ;
            param_1 = FUN_1408da310(uVar3,0.85 - (double)CONCAT44(uVar7,uVar6) * 0.5,*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 1:
            uVar3 = FUN_1408da340(param_1,(double)CONCAT44(uVar7,uVar6) * 17.1 + 1.15,*param_3);
            param_1 = FUN_1408da310(uVar3,0.25 - (double)CONCAT44(uVar7,uVar6) * 0.15,*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 2:
            dVar2 = (double)CONCAT44(uVar7,uVar6) * 0.9500000000000002;
            uVar3 = FUN_1408da340(dVar2,2.35 - dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,0.35 - (double)CONCAT44(uVar7,uVar6) * 0.09999999999999998,
                                    *param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 3:
            dVar2 = (double)CONCAT44(uVar7,uVar6) * 0.2;
            uVar3 = FUN_1408da340(dVar2,0.95 - dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,0.25 - (double)CONCAT44(uVar7,uVar6) * 0.15,*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 4:
            dVar2 = (double)CONCAT44(uVar7,uVar6) * 7.9;
            uVar3 = FUN_1408da340(dVar2,8.25 - dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,(double)CONCAT44(uVar7,uVar6) * (double)CONCAT44(uVar5,uVar4) +
                                          0.25,*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 5:
            dVar2 = (double)CONCAT44(uVar7,uVar6) * 1.9;
            uVar3 = FUN_1408da340(dVar2,2.15 - dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,0.5 - (double)CONCAT44(uVar7,uVar6) * 0.3,*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 6:
            dVar2 = 0.7 - (double)CONCAT44(uVar7,uVar6) * 0.5499999999999999;
            uVar4 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            uVar3 = FUN_1408da340(param_1,dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,CONCAT44(uVar5,uVar4),*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 7:
            dVar2 = 0.35 - (double)CONCAT44(uVar7,uVar6) * 0.25;
            uVar4 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            uVar3 = FUN_1408da340(param_1,dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,CONCAT44(uVar5,uVar4),*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 8:
            dVar2 = 0.25 - (double)CONCAT44(uVar7,uVar6) * 0.2;
            uVar4 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            uVar3 = FUN_1408da340(param_1,dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,CONCAT44(uVar5,uVar4),*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        case 9:
            dVar2 = 0.1 - (double)CONCAT44(uVar7,uVar6) * 0.09000000000000001;
            uVar4 = SUB84(dVar2,0);
            uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
            uVar3 = FUN_1408da340(param_1,dVar2,*param_3);
            param_1 = FUN_1408da310(uVar3,CONCAT44(uVar5,uVar4),*param_3);
            uVar4 = (undefined4)param_1;
            uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
            break;
        default:
            uVar4 = (undefined4)local_res8;
            uVar5 = (undefined4)((ulonglong)local_res8 >> 0x20);
    }
    uVar3 = FUN_1408da310(param_1,0x3f847ae147ae147b,*param_3);
    uVar1 = 0;
    if (param_3[1] != 0) {
        do {
            FUN_1408d8ca0(uVar3,CONCAT44(uVar5,uVar4),param_3);
            FUN_1408d8ca0(param_3);
            uVar3 = FUN_1408d8ca0(param_3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_3[1]);
    }
    return;
}



void FUN_1408d47a0(undefined8 param_1,double param_2,double param_3,undefined4 *param_4,
                   char *param_5,undefined8 param_6,uint param_7)

{
    uint uVar1;
    double dVar2;
    double dVar3;
    double local_res8;

    dVar2 = local_res8;
    dVar3 = local_res8;
    if (param_7 < 10) {
        param_5 = IMAGE_DOS_HEADER_140000000.e_magic +
                  (&switchD_1408d47e1::switchdataD_1408d4968)[(int)param_7];
        switch(param_7) {
            case 0:
                local_res8 = 100.0;
                dVar2 = 17500.0;
                dVar3 = 150.0;
                break;
            case 1:
                local_res8 = 100.0;
                dVar2 = 20000.0;
                dVar3 = 300.0;
                break;
            case 2:
                local_res8 = 300.0;
                dVar2 = 10000.0;
                dVar3 = 300.0;
                break;
            case 3:
                local_res8 = 150.0;
                dVar2 = 12000.0;
                dVar3 = 300.0;
                break;
            case 4:
                local_res8 = 100.0;
                dVar2 = 14000.0;
                dVar3 = 200.0;
                break;
            case 5:
                local_res8 = 150.0;
                dVar2 = 16000.0;
                dVar3 = 300.0;
                break;
            case 6:
                local_res8 = 200.0;
                dVar2 = 18000.0;
                dVar3 = 400.0;
                break;
            case 7:
                local_res8 = 100.0;
                dVar2 = 20000.0;
                dVar3 = 1000.0;
                break;
            case 8:
                local_res8 = 200.0;
                dVar2 = 20000.0;
                dVar3 = 2000.0;
                break;
            case 9:
                local_res8 = 150.0;
                dVar2 = 20000.0;
                dVar3 = 1500.0;
        }
    }
    FUN_1408d93b0(local_res8,
                  (((dVar2 - dVar3) * param_3 * 0.01 + dVar3) - local_res8) * param_2 * 0.01 +
                  local_res8,*param_4,param_5,&DAT_140c63310);
    uVar1 = 0;
    if (param_4[1] != 0) {
        do {
            FUN_1408d8ed0(param_4,&DAT_140c63310,(ulonglong)uVar1 * 0x498 + *(longlong *)(param_4 + 2),4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_4[1]);
    }
    return;
}



void FUN_1408d49a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            param_1 = FUN_1408d8ca0(param_1,0,param_2,param_3,
                                    (ulonglong)uVar1 * 0x498 + *(longlong *)(param_2 + 8),0xb);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d4a00(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 in_XMM6_Da;
    undefined4 uVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar3 [16];

    auVar3 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar1 = 0;
    uVar2 = SUB84(param_2 * 0.01 * -2.0,0);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            param_1 = FUN_1408d8ca0(param_1,uVar2,param_3,param_4,
                                    *(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,8,auVar3)
                    ;
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d4a80(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
    uint uVar1;
    undefined local_38 [48];

    FUN_1408d91c0(param_1,0x4034000000000000,*param_2,param_3,local_38);
    uVar1 = 0;
    if (param_2[1] != 0) {
        do {
            FUN_1408d8e70(param_2,local_38,(ulonglong)uVar1 * 0x498 + *(longlong *)(param_2 + 2),0xc);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    return;
}



void FUN_1408d4af0(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined8 uVar2;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 uVar4;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar5 [16];
    undefined auVar6 [16];

    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar5 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    uVar1 = 0;
    uVar3 = SUB84(param_2 * 0.01,0);
    uVar4 = SUB84(1.0 - param_2 * 0.01,0);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar2 = FUN_1408d8ca0(param_1,uVar3,param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,0x10,auVar5
                    ,auVar6);
            param_1 = FUN_1408d8ca0(uVar2,uVar4,param_3,param_4,
                                    *(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,0x11);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d4ba0(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,1,(ulonglong)uVar1 * 0x498 + *(longlong *)(param_1 + 8),0x11);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d4c00(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,0,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d4c80(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,0xf,auVar5)
                    ;
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



longlong FUN_1408d4d00(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d4d40(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 0x498;
}



undefined8 FUN_1408d4d50(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x498) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x498) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d4db0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined4 uVar5;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar6 [16];

    uVar2 = 0;
    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        uVar3 = 0;
        uVar5 = 0x3ff00000;
        do {
            param_1 = FUN_1408d8ca0(param_1,CONCAT44(uVar5,uVar3),param_2,(ulonglong)uVar1 * 0x498,
                                    *(longlong *)(param_2 + 8) + 0x50 + (ulonglong)uVar1 * 0x498,4,auVar6)
                    ;
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    uVar4 = FUN_1408d40f0(param_1,*param_3,param_2);
    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            uVar4 = FUN_1408d8cc0(param_2,0x12,(ulonglong)uVar1 * 0x498 + *(longlong *)(param_2 + 8),3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    uVar4 = FUN_1408d41d0(uVar4,*param_3,param_2);
    uVar4 = FUN_1408d4250(uVar4,*param_3,param_2);
    uVar4 = FUN_1408d4410(uVar4,*param_3,param_2);
    uVar4 = FUN_1408d47a0(uVar4,*param_3,param_3[1],param_2);
    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            uVar4 = FUN_1408d8ca0(uVar4,0,param_2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    FUN_1408d4a00(uVar4,param_3[2],param_2);
    uVar4 = FUN_1408d4a80(param_2);
    uVar4 = FUN_1408d4af0(uVar4,0x4059000000000000,param_2);
    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            uVar4 = FUN_1408d8cc0(param_2,1,(ulonglong)uVar1 * 0x498 + *(longlong *)(param_2 + 8),0x11);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    FUN_1408d4c00(uVar4,0,param_2);
    uVar4 = FUN_1408ffa00(0x4024000000000000,0);
    uVar3 = (undefined4)uVar4;
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (*(int *)(param_2 + 4) != 0) {
        do {
            uVar4 = FUN_1408d8ca0(uVar4,CONCAT44(uVar5,uVar3),param_2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d4fb0(longlong param_1,float *param_2,float *param_3,int param_4)

{
    float fVar1;
    uint uVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    if (param_4 != 0) {
        do {
            param_4 = param_4 + -1;
            fVar7 = *(float *)(param_1 + 0x50) * *param_2;
            *(float *)(param_1 + 0x54) = fVar7;
            fVar4 = (float)((uint)fVar7 & 0x7fffffff);
            if (1.0 <= fVar4) {
                fVar4 = 1.0;
            }
            fVar4 = fVar4 - *(float *)(param_1 + 8);
            if (fVar4 <= 0.0) {
                fVar4 = 0.0;
            }
            fVar5 = *(float *)(param_1 + 0x58);
            *(float *)(param_1 + 0x58) = fVar4;
            fVar5 = (fVar5 * *(float *)(param_1 + 0x14) + fVar4 * *(float *)(param_1 + 0x10)) * 0.5 -
                    *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x5c);
            *(float *)(param_1 + 0x5c) = fVar5;
            fVar6 = fVar5 * 255.0;
            iVar3 = (int)fVar6;
            fVar4 = fVar6;
            if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar6)) {
                uVar2 = movmskps((int)register0x00000020,ZEXT816(CONCAT44(fVar6,fVar6)));
                fVar4 = (float)(iVar3 - (uVar2 & 1));
            }
            uVar2 = (int)fVar6 + 0x12;
            register0x00000020 = (BADSPACEBASE *)(ulonglong)uVar2;
            fVar6 = ((fVar6 - fVar4) * *(float *)(param_1 + 0x54 + (longlong)(int)uVar2 * 4) -
                                                                                                     ((fVar6 - fVar4) - *(float *)(param_1 + 0x60)) *
                                                                                             *(float *)(param_1 + 0x50 + (longlong)(int)uVar2 * 4)) - *(float *)(param_1 + 100);
            fVar4 = *(float *)(param_1 + 0x1c);
            if (fVar6 < 0.0) {
                fVar4 = *(float *)(param_1 + 0x20);
            }
            fVar4 = (fVar5 * *(float *)(param_1 + 0x24) + fVar4) * fVar6 + *(float *)(param_1 + 100);
            *(float *)(param_1 + 100) = fVar4;
            fVar5 = fVar4 * fVar7 * *(float *)(param_1 + 0x6c);
            fVar4 = 0.0;
            if (fVar5 < *(float *)(param_1 + 0x2c)) {
                fVar4 = *(float *)(param_1 + 0x70);
            }
            fVar5 = fVar5 + fVar4 * fVar5;
            if (fVar5 < 1.0) {
                if (fVar5 <= -1.0) {
                    fVar5 = -1.0;
                }
            }
            else {
                fVar5 = 1.0;
            }
            fVar4 = *(float *)(param_1 + 0x74);
            *(float *)(param_1 + 0x74) = fVar5;
            fVar6 = *(float *)(param_1 + 0x78);
            *(float *)(param_1 + 0x78) = fVar4;
            fVar1 = *(float *)(param_1 + 0x80);
            *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x7c);
            fVar4 = ((fVar5 * *(float *)(param_1 + 0x30) + fVar4 * *(float *)(param_1 + 0x34) +
                      fVar6 * *(float *)(param_1 + 0x38)) -
                     *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x3c)) -
                    fVar1 * *(float *)(param_1 + 0x40);
            *(float *)(param_1 + 0x7c) = fVar4;
            *param_3 = fVar7 * *(float *)(param_1 + 0x94) +
                       *(float *)(param_1 + 0x90) * fVar4 * *(float *)(param_1 + 0x8c);
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
        } while (param_4 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1408d5260(double param_1,undefined8 param_2,char param_3,longlong param_4,uint param_5)

{
    uint uVar1;
    undefined8 *puVar2;
    int iVar3;
    int iVar4;
    undefined8 extraout_XMM0_Qa;
    double dVar5;
    undefined8 extraout_XMM0_Qa_00;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined auVar14 [16];
    double local_b8;
    undefined8 local_b0;

    uVar6 = 0;
    uVar7 = 0x3ff00000;
    local_b0 = 0x3ff0000000000000;
    local_b8 = 1.0;
    if (param_3 == '\0') {
        FUN_1408ffa00();
        local_b8 = param_1 * 0.01 * 9.0 + (double)CONCAT44(uVar7,uVar6);
        local_b0 = extraout_XMM0_Qa;
    }
    iVar3 = 0;
    iVar4 = iVar3;
    if ((0 < (int)param_5) && (iVar4 = 0, 3 < param_5)) {
        uVar6 = SUB84(1.0 / (double)param_5,0);
        uVar7 = (undefined4)((ulonglong)(1.0 / (double)param_5) >> 0x20);
        uVar10 = (undefined4)local_b0;
        uVar11 = (undefined4)((ulonglong)local_b0 >> 0x20);
        uVar1 = param_5 & 0x80000003;
        if ((int)uVar1 < 0) {
            uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
        }
        divpd(_DAT_1409b1970,CONCAT88(local_b8,local_b8));
        uVar8 = uVar6;
        uVar9 = uVar7;
        uVar12 = uVar10;
        uVar13 = uVar11;
        auVar14 = _DAT_1409a4790;
        do {
            dVar5 = (double)(iVar3 + SUB164(auVar14,0));
            divpd(CONCAT88((double)(int)((ulonglong)dVar5 >> 0x20) * (double)CONCAT44(uVar9,uVar8),
                           dVar5 * (double)CONCAT44(uVar7,uVar6)),
                  CONCAT412(uVar13,CONCAT48(uVar12,CONCAT44(uVar11,uVar10))));
            thunk_FUN_140904450();
            iVar4 = iVar3 + 2;
            *(undefined (*) [16])(param_4 + (longlong)iVar3 * 8) = extraout_XMM0;
            dVar5 = (double)(iVar4 + SUB164(auVar14,0));
            divpd(CONCAT88((double)(int)((ulonglong)dVar5 >> 0x20) * (double)CONCAT44(uVar9,uVar8),
                           dVar5 * (double)CONCAT44(uVar7,uVar6)),
                  CONCAT412(uVar13,CONCAT48(uVar12,CONCAT44(uVar11,uVar10))));
            thunk_FUN_140904450();
            iVar3 = iVar3 + 4;
            *(undefined (*) [16])(param_4 + (longlong)iVar4 * 8) = extraout_XMM0_00;
            iVar4 = iVar3;
        } while (iVar3 < (int)(param_5 - uVar1));
    }
    if (iVar4 < (int)param_5) {
        puVar2 = (undefined8 *)(param_4 + (longlong)iVar4 * 8);
        do {
            FUN_1408ffa00();
            iVar4 = iVar4 + 1;
            *puVar2 = extraout_XMM0_Qa_00;
            puVar2 = puVar2 + 1;
        } while (iVar4 < (int)param_5);
    }
    return;
}



longlong FUN_1408d54c0(longlong param_1)

{
    FUN_1408d58a0();
    return param_1 + 0x30;
}



longlong FUN_1408d54e0(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



undefined8 FUN_1408d5540(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x30) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x30) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d55c0(undefined4 *param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    double dVar4;
    undefined local_38 [48];

    FUN_1408d8f20();
    if (*(char *)(param_2 + 0x1c) == '\0') {
        iVar1 = *(int *)(param_2 + 0x18);
        if (iVar1 == 0) {
            dVar4 = *(double *)(param_2 + 8) * 0.01;
            if (0.0 < dVar4) {
                sqrtpd(ZEXT816((ulonglong)dVar4),ZEXT816((ulonglong)dVar4));
            }
            FUN_1408d92a0(*param_1);
        }
        else if (iVar1 == 1) {
            FUN_1408d8f50(*param_1);
        }
        else if (iVar1 == 2) {
            dVar4 = *(double *)(param_2 + 8) * 0.01;
            if (0.0 < dVar4) {
                sqrtpd(ZEXT816((ulonglong)dVar4),ZEXT816((ulonglong)dVar4));
            }
            FUN_1408d9480(*param_1);
        }
    }
    uVar3 = 0;
    if (param_1[1] != 0) {
        do {
            FUN_1408d8e70(param_1,local_38,uVar3 * 0x30 + *(longlong *)(param_1 + 2),0);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < (uint)param_1[1]);
    }
    return;
}



longlong FUN_1408d5710(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d5750(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 0x30;
}



undefined8 FUN_1408d5770(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[4] = 0;
    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x30) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x30) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d57d0(longlong param_1)

{
    undefined4 *puVar1;
    float fVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    FUN_1408d55c0();
    puVar1 = *(undefined4 **)(param_1 + 8);
    local_28 = *puVar1;
    local_24 = puVar1[1];
    local_20 = puVar1[2];
    local_1c = puVar1[3];
    local_18 = puVar1[4];
    fVar2 = (float)FUN_1408d9a30(&local_28);
    *(int *)(param_1 + 0x10) = (int)(longlong)(fVar2 * 6.91);
    return;
}



void FUN_1408d5840(longlong param_1,undefined4 *param_2)

{
    float fVar1;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    local_28 = *param_2;
    local_24 = param_2[1];
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_18 = param_2[4];
    fVar1 = (float)FUN_1408d9a30(&local_28);
    *(int *)(param_1 + 0x10) = (int)(longlong)(fVar1 * 6.91);
    return;
}



void FUN_1408d58a0(float *param_1,longlong param_2,float *param_3,int param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float *pfVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;

    fVar12 = param_1[6];
    fVar9 = param_1[7];
    fVar11 = param_1[9];
    fVar1 = *param_1;
    fVar2 = param_1[1];
    fVar7 = param_1[8];
    fVar3 = param_1[4];
    fVar4 = param_1[2];
    fVar5 = param_1[3];
    if (param_4 != 0) {
        pfVar6 = param_3;
        fVar8 = fVar9;
        fVar10 = fVar11;
        do {
            fVar11 = fVar7;
            fVar9 = fVar12;
            fVar12 = *(float *)((param_2 - (longlong)param_3) + (longlong)pfVar6);
            fVar7 = ((fVar9 * fVar2 + fVar1 * fVar12 + fVar8 * fVar4) - fVar11 * fVar5) - fVar10 * fVar3;
            *pfVar6 = fVar7;
            param_4 = param_4 + -1;
            pfVar6 = pfVar6 + 1;
            fVar8 = fVar9;
            fVar10 = fVar11;
        } while (param_4 != 0);
    }
    param_1[6] = fVar12;
    param_1[7] = fVar9;
    param_1[8] = fVar7;
    param_1[9] = fVar11;
    return;
}



longlong FUN_1408d59c0(longlong param_1)

{
    FUN_1408d6310();
    return param_1 + 0xa8;
}



longlong FUN_1408d59f0(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



undefined8 FUN_1408d5a40(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0xa8) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0xa8) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d5ac0(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,0,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 8),0);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d5b10(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4,
                   char param_5)

{
    uint uVar1;
    undefined4 in_XMM6_Da;
    undefined4 uVar2;
    undefined4 in_XMM6_Db;
    undefined4 uVar3;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = 0;
    uVar3 = 0;
    if ((param_5 == '\0') && (-143.0 <= param_2 - 6.0)) {
        param_1 = FUN_1408ffa00(0x4024000000000000,(param_2 - 6.0) * 0.05);
        uVar2 = (undefined4)param_1;
        uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
    }
    uVar1 = 0;
    if (*(int *)(param_3 + 4) != 0) {
        do {
            param_1 = FUN_1408d8ca0(param_1,CONCAT44(uVar3,uVar2),param_3,param_4,
                                    *(longlong *)(param_3 + 8) + 0x54 + (ulonglong)uVar1 * 0xa8,1,auVar4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d5bb0(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                   char param_5)

{
    uint uVar1;
    undefined8 uVar2;
    undefined local_48 [64];

    uVar2 = FUN_1408d8f20(local_48);
    if (param_5 == '\0') {
        FUN_1408d92a0(uVar2,param_2,0x3ff69fbe76c8b439,*param_3);
    }
    uVar1 = 0;
    if (param_3[1] != 0) {
        do {
            FUN_1408d8e70(param_3,local_48,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_3 + 2),1);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_3[1]);
    }
    return;
}



void FUN_1408d5c40(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                   char param_5)

{
    uint uVar1;
    undefined8 uVar2;
    undefined local_48 [64];

    uVar2 = FUN_1408d8f20(local_48);
    if (param_5 == '\0') {
        FUN_1408d9480(uVar2,param_2,0x3ff69fbe76c8b439,*param_3);
    }
    uVar1 = 0;
    if (param_3[1] != 0) {
        do {
            FUN_1408d8e70(param_3,local_48,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_3 + 2),6);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_3[1]);
    }
    return;
}



void FUN_1408d5cd0(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,0xe,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 8),0x12);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d5d30(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,0,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 8),0xb);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d5d80(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  (ulonglong)uVar1 * 0xa8 + *(longlong *)(param_3 + 8),0xc,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d5df0(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  (ulonglong)uVar1 * 0xa8 + *(longlong *)(param_3 + 8),0xe,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d5e60(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    undefined4 in_XMM6_Da;
    undefined4 uVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar3 [16];

    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        auVar3 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar2 = 0;
        do {
            param_1 = FUN_1408d8ca0(param_1,uVar2,param_2,(ulonglong)uVar1 * 0xa8,
                                    *(longlong *)(param_2 + 8) + 0x54 + (ulonglong)uVar1 * 0xa8,0xf,auVar3
            );
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d5ed0(undefined4 *param_1,undefined8 param_2)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = FUN_1408da310(*param_1);
    uVar1 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            uVar2 = FUN_1408d8ca0(uVar2,uVar3,param_1,param_2,
                                  (ulonglong)uVar1 * 0xa8 + *(longlong *)(param_1 + 2),0x11,auVar4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
    }
    return;
}



void FUN_1408d5f40(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    uint uVar2;

    uVar1 = FUN_1408da370(param_1,0x3ff0000000000000,*param_2);
    uVar2 = 0;
    if (param_2[1] != 0) {
        do {
            FUN_1408d8cc0(param_2,uVar1,(ulonglong)uVar2 * 0xa8 + *(longlong *)(param_2 + 2),0xf);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_2[1]);
    }
    return;
}



void FUN_1408d5fb0(undefined4 param_1,undefined4 *param_2,undefined8 param_3)

{
    uint uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];
    ulonglong uVar4;

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408da340(param_1,0x3ff0000000000000,*param_2);
    uVar4 = uVar3 & 0xffffffff;
    uVar1 = 0;
    if (param_2[1] != 0) {
        do {
            uVar2 = FUN_1408d8ca0((int)uVar4,uVar3,param_2,param_3,
                                  (ulonglong)uVar1 * 0xa8 + *(longlong *)(param_2 + 2),0x10,auVar5);
            uVar4 = (ulonglong)uVar2;
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    return;
}



longlong FUN_1408d6020(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d6060(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 0xa8;
}



undefined8 FUN_1408d6070(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0xa8) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0xa8) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d60d0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
    uint uVar1;
    ulonglong uVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined4 uVar6;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar7 [16];

    uVar3 = 0;
    auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar1 = 0;
    if (param_2[1] != 0) {
        do {
            param_1 = FUN_1408d8cc0(param_2,0,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_2 + 2),0,
                                    auVar7);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    uVar5 = FUN_1408d5b10(param_1,*param_3,param_2);
    uVar5 = FUN_1408d5bb0(uVar5,param_3[1],param_2);
    FUN_1408d5c40(uVar5,param_3[2],param_2);
    uVar1 = 0;
    if (param_2[1] != 0) {
        do {
            FUN_1408d8cc0(param_2,0xe,(ulonglong)uVar1 * 0xa8 + *(longlong *)(param_2 + 2),0x12);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    uVar2 = 0;
    if (param_2[1] != 0) {
        do {
            FUN_1408d8cc0(param_2,0,uVar2 * 0xa8 + *(longlong *)(param_2 + 2),0xb);
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
        } while (uVar1 < (uint)param_2[1]);
    }
    uVar5 = FUN_1408ffa00(0x4024000000000000,(double)param_3[3] * 0.05);
    uVar1 = 0;
    uVar4 = (undefined4)uVar5;
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (param_2[1] != 0) {
        do {
            uVar5 = FUN_1408d8ca0(uVar5,CONCAT44(uVar6,uVar4),param_2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    uVar5 = FUN_1408ffa00(0x4024000000000000,(double)param_3[4] * 0.05);
    uVar1 = 0;
    uVar4 = (undefined4)uVar5;
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (param_2[1] != 0) {
        do {
            uVar5 = FUN_1408d8ca0(uVar5,CONCAT44(uVar6,uVar4),param_2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    uVar1 = 0;
    if (param_2[1] != 0) {
        uVar4 = 0;
        uVar6 = 0x3ff00000;
        do {
            uVar5 = FUN_1408d8ca0(uVar5,CONCAT44(uVar6,uVar4),param_2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_2[1]);
    }
    uVar5 = FUN_1408da310(uVar5,param_3[5],*param_2);
    uVar4 = (undefined4)uVar5;
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (param_2[1] != 0) {
        do {
            uVar5 = FUN_1408d8ca0(uVar5,CONCAT44(uVar6,uVar4),param_2);
            uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_2[1]);
    }
    FUN_1408d5f40(param_2);
    FUN_1408d5fb0(param_2);
    return;
}



void FUN_1408d6310(float *param_1,longlong param_2,float *param_3,float *param_4,int param_5)

{
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
    bool bVar11;
    float *pfVar12;
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

    fVar1 = param_1[3];
    fVar2 = param_1[7];
    fVar3 = param_1[2];
    fVar17 = param_1[0x17];
    fVar16 = param_1[0x19];
    fVar19 = param_1[0x18];
    fVar20 = param_1[0x1a];
    fVar15 = param_1[0x1d];
    fVar4 = param_1[1];
    fVar22 = param_1[0x1e];
    fVar24 = param_1[0x20];
    fVar5 = param_1[4];
    fVar6 = param_1[8];
    fVar7 = param_1[5];
    fVar8 = param_1[9];
    fVar9 = param_1[6];
    fVar10 = param_1[10];
    fVar18 = param_1[0x1f];
    if (param_5 != 0) {
        pfVar12 = param_3;
        fVar14 = fVar19;
        fVar13 = fVar20;
        fVar21 = fVar22;
        fVar23 = fVar24;
        do {
            fVar24 = fVar18;
            fVar22 = fVar15;
            fVar20 = fVar16;
            fVar19 = fVar17;
            param_1[0x15] = *(float *)((param_2 - (longlong)param_3) + (longlong)pfVar12);
            param_5 = param_5 + -1;
            fVar15 = *pfVar12;
            *param_1 = fVar15;
            fVar15 = fVar15 * param_1[0x16];
            fVar17 = ((fVar22 * fVar2 + fVar9 * fVar15 + fVar21 * fVar6) - fVar24 * fVar8) -
                     fVar23 * fVar10;
            fVar16 = ((fVar19 * fVar3 + fVar4 * fVar17 + fVar14 * fVar1) - fVar20 * fVar5) -
                     fVar13 * fVar7;
            param_1[0x23] = fVar16;
            fVar18 = param_1[0xe];
            bVar11 = (float)((uint)param_1[0xc] & 0x7fffffff) < (float)((uint)param_1[0x15] & 0x7fffffff);
            fVar14 = param_1[0x24];
            if (bVar11) {
                fVar14 = fVar18;
            }
            fVar13 = param_1[0x25];
            if (bVar11) {
                fVar13 = param_1[0xf];
            }
            fVar13 = fVar13 + -1.0;
            if (fVar13 <= 0.0) {
                fVar13 = 0.0;
                fVar18 = fVar14;
            }
            param_1[0x25] = fVar13;
            fVar14 = param_1[0x10];
            fVar18 = fVar18 - param_1[0x26];
            if (0.0 < fVar18) {
                fVar14 = param_1[0x11];
            }
            fVar18 = fVar14 * fVar18 + param_1[0x26];
            param_1[0x26] = fVar18;
            fVar18 = fVar18 * param_1[0x23];
            param_1[0x28] = fVar18;
            fVar18 = fVar18 + param_1[0x15];
            param_1[0x29] = fVar18;
            *param_4 = fVar18;
            pfVar12 = pfVar12 + 1;
            param_4 = param_4 + 1;
            fVar18 = fVar17;
            fVar14 = fVar19;
            fVar13 = fVar20;
            fVar21 = fVar22;
            fVar23 = fVar24;
        } while (param_5 != 0);
    }
    param_1[0x17] = fVar17;
    param_1[0x1d] = fVar15;
    param_1[0x18] = fVar19;
    param_1[0x1e] = fVar22;
    param_1[0x19] = fVar16;
    param_1[0x1f] = fVar18;
    param_1[0x1a] = fVar20;
    param_1[0x20] = fVar24;
    return;
}



longlong FUN_1408d6660(longlong param_1)

{
    FUN_1408d6d40();
    return param_1 + 0x4c;
}



undefined8 FUN_1408d6680(undefined8 param_1)

{
    FUN_1408d8c60();
    return param_1;
}



undefined8 FUN_1408d66c0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x4c) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x4c) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d6740(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,0,(ulonglong)uVar1 * 0x4c + *(longlong *)(param_1 + 8),9);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d67a0(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,0,(ulonglong)uVar1 * 0x4c + *(longlong *)(param_1 + 8),2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d6800(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  (ulonglong)uVar1 * 0x4c + *(longlong *)(param_3 + 8),3,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d6870(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4,
                   char param_5)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = 0;
    uVar3 = 0x3ff00000;
    if (param_5 == '\0') {
        param_1 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
        uVar2 = (undefined4)param_1;
        uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
    }
    uVar1 = 0;
    if (*(int *)(param_3 + 4) != 0) {
        do {
            param_1 = FUN_1408d8ca0(param_1,CONCAT44(uVar3,uVar2),param_3,param_4,
                                    (ulonglong)uVar1 * 0x4c + *(longlong *)(param_3 + 8),5,auVar4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d68f0(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    undefined4 in_XMM6_Da;
    undefined4 uVar2;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar3 [16];

    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        auVar3 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar2 = 0;
        do {
            param_1 = FUN_1408d8ca0(param_1,uVar2,param_2,(ulonglong)uVar1 * 0x4c,
                                    *(longlong *)(param_2 + 8) + 0x34 + (ulonglong)uVar1 * 0x4c,1,auVar3);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d6950(undefined4 *param_1,undefined8 param_2)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = FUN_1408da310(*param_1);
    uVar1 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            uVar2 = FUN_1408d8ca0(uVar2,uVar3,param_1,param_2,
                                  (ulonglong)uVar1 * 0x4c + *(longlong *)(param_1 + 2),8,auVar4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
    }
    return;
}



void FUN_1408d69c0(undefined4 *param_1)

{
    undefined4 uVar1;
    uint uVar2;

    uVar1 = FUN_1408da370(*param_1);
    uVar2 = 0;
    if (param_1[1] != 0) {
        do {
            FUN_1408d8cc0(param_1,uVar1,(ulonglong)uVar2 * 0x4c + *(longlong *)(param_1 + 2),6);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    return;
}



void FUN_1408d6a20(undefined4 *param_1,undefined8 param_2)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = FUN_1408da340(*param_1);
    uVar1 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            uVar2 = FUN_1408d8ca0(uVar2,uVar3,param_1,param_2,
                                  (ulonglong)uVar1 * 0x4c + *(longlong *)(param_1 + 2),7,auVar4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_1[1]);
    }
    return;
}



undefined8 FUN_1408d6a90(undefined8 param_1)

{
    FUN_1408d8c60();
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d6ac0(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 0x4c;
}



undefined8 FUN_1408d6ad0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x4c) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x4c) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d6b30(undefined4 *param_1,double *param_2)

{
    undefined4 uVar1;
    uint uVar2;
    uint uVar3;
    undefined8 uVar4;
    undefined4 uVar5;
    undefined8 extraout_XMM0_Qa;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar6 [16];

    uVar3 = 0;
    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar2 = 0;
    if (param_1[1] != 0) {
        do {
            FUN_1408d8cc0(param_1,0,(ulonglong)uVar2 * 0x4c + *(longlong *)(param_1 + 2),9,auVar6);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    uVar2 = 0;
    if (param_1[1] != 0) {
        do {
            FUN_1408d8cc0(param_1,0,(ulonglong)uVar2 * 0x4c + *(longlong *)(param_1 + 2),2,auVar6);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    uVar4 = FUN_1408ffa00(0x4024000000000000,*param_2 * 0.05);
    uVar2 = 0;
    uVar1 = (undefined4)uVar4;
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (param_1[1] != 0) {
        do {
            uVar4 = FUN_1408d8ca0(uVar4,CONCAT44(uVar5,uVar1),param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    uVar4 = FUN_1408d6870(uVar4,param_2[1],param_1);
    uVar2 = 0;
    if (param_1[1] != 0) {
        uVar1 = 0;
        uVar5 = 0x3ff00000;
        do {
            uVar4 = FUN_1408d8ca0(uVar4,CONCAT44(uVar5,uVar1),param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    uVar4 = FUN_1408da310(uVar4,param_2[2],*param_1);
    uVar2 = 0;
    uVar1 = (undefined4)uVar4;
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (param_1[1] != 0) {
        do {
            uVar4 = FUN_1408d8ca0(uVar4,CONCAT44(uVar5,uVar1),param_1);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    uVar1 = FUN_1408da370(uVar4,param_2[3],*param_1);
    uVar2 = 0;
    uVar4 = extraout_XMM0_Qa;
    if (param_1[1] != 0) {
        do {
            uVar4 = FUN_1408d8cc0(param_1,uVar1,(ulonglong)uVar2 * 0x4c + *(longlong *)(param_1 + 2),6);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
    }
    uVar4 = FUN_1408da340(uVar4,param_2[4],*param_1);
    uVar1 = (undefined4)uVar4;
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (param_1[1] != 0) {
        do {
            uVar4 = FUN_1408d8ca0(uVar4,CONCAT44(uVar5,uVar1),param_1);
            uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[1]);
    }
    return;
}



void FUN_1408d6d40(longlong param_1,uint *param_2,float *param_3,int param_4)

{
    uint uVar1;
    bool bVar2;
    float fVar3;
    float fVar4;

    if (param_4 != 0) {
        do {
            uVar1 = *param_2;
            param_4 = param_4 + -1;
            *(uint *)(param_1 + 0x34) = uVar1;
            param_2 = param_2 + 1;
            bVar2 = (float)(uVar1 & 0x7fffffff) < (float)(*(uint *)(param_1 + 0xc) & 0x7fffffff);
            fVar4 = *(float *)(param_1 + 0x38);
            if (bVar2) {
                fVar4 = *(float *)(param_1 + 0x14);
            }
            fVar3 = *(float *)(param_1 + 0x3c);
            if (!bVar2) {
                fVar3 = *(float *)(param_1 + 0x18);
            }
            fVar3 = fVar3 + -1.0;
            if (0.0 <= fVar3) {
                if (0.0 < fVar3) {
                    fVar4 = *(float *)(param_1 + 0x38);
                }
            }
            else {
                fVar3 = 0.0;
            }
            *(float *)(param_1 + 0x3c) = fVar3;
            fVar4 = fVar4 - *(float *)(param_1 + 0x40);
            fVar3 = *(float *)(param_1 + 0x1c);
            if (0.0 < fVar4) {
                fVar3 = *(float *)(param_1 + 0x20);
            }
            fVar4 = fVar3 * fVar4 + *(float *)(param_1 + 0x40);
            *(float *)(param_1 + 0x40) = fVar4;
            *(float *)(param_1 + 0x28) = fVar4;
            fVar4 = fVar4 * *(float *)(param_1 + 0x34);
            *(float *)(param_1 + 0x48) = fVar4;
            *param_3 = fVar4;
            param_3 = param_3 + 1;
        } while (param_4 != 0);
    }
    return;
}



longlong FUN_1408d6e60(longlong param_1)

{
    FUN_1408d77f0();
    return param_1 + 0x168;
}



longlong FUN_1408d6e80(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



undefined8 FUN_1408d6ed0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x168) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x168) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d6f50(undefined8 param_1,undefined8 param_2,double param_3,undefined4 *param_4,
                   undefined8 param_5,undefined8 param_6)

{
    longlong lVar1;
    uint uVar2;
    undefined local_158 [48];
    undefined local_128 [48];
    undefined local_f8 [48];
    undefined local_c8 [48];
    undefined local_98 [48];
    undefined local_68 [48];
    undefined local_38 [48];

    FUN_1408da390(param_1,param_2,param_3 * 0.01,*param_4,param_5,param_6,local_128,local_68,local_c8,
                  local_158,local_f8,local_98,local_38);
    uVar2 = 0;
    if (param_4[1] != 0) {
        do {
            lVar1 = (ulonglong)uVar2 * 0x168;
            FUN_1408d8e70(param_4,local_128,*(longlong *)(param_4 + 2) + lVar1,2);
            FUN_1408d8e70(param_4,local_68,*(longlong *)(param_4 + 2) + lVar1,7);
            FUN_1408d8e70(param_4,local_c8,*(longlong *)(param_4 + 2) + lVar1,0xc);
            FUN_1408d8e70(param_4,local_158,*(longlong *)(param_4 + 2) + lVar1,0x11);
            FUN_1408d8e70(param_4,local_f8,*(longlong *)(param_4 + 2) + lVar1,0x16);
            FUN_1408d8e70(param_4,local_98,*(longlong *)(param_4 + 2) + lVar1,0x1b);
            FUN_1408d8e70(param_4,local_38,*(longlong *)(param_4 + 2) + lVar1,0x20);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_4[1]);
    }
    return;
}



void FUN_1408d70d0(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,1,(ulonglong)uVar1 * 0x168 + *(longlong *)(param_1 + 8),0x25);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d7130(double param_1,longlong param_2,undefined4 param_3,char param_4)

{
    uint uVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;

    uVar6 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
    if (param_4 == '\0') {
        uVar6 = 0;
        param_1 = (double)FUN_1408e47b0(param_3);
        uVar3 = SUB84(param_1,0);
        if (param_1 < (double)CONCAT44(uVar5,uVar4)) {
            param_1 = (double)FUN_1408ffa00(0x4024000000000000,SUB84(param_1 * 0.05,0));
            uVar3 = SUB84(param_1,0);
        }
    }
    uVar1 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            uVar2 = FUN_1408d8ca0(param_1,uVar3,param_2);
            param_1 = (double)FUN_1408d8ca0(uVar2,uVar6,param_2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_2 + 4));
    }
    return;
}



void FUN_1408d7210(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined8 uVar2;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 uVar4;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar5 [16];
    undefined auVar6 [16];

    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar5 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    uVar1 = 0;
    uVar3 = SUB84(param_2 * 0.01,0);
    uVar4 = SUB84(1.0 - param_2 * 0.01,0);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar2 = FUN_1408d8ca0(param_1,uVar3,param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0xac + (ulonglong)uVar1 * 0x168,0x2d,auVar5
                    ,auVar6);
            param_1 = FUN_1408d8ca0(uVar2,uVar4,param_3,param_4,
                                    *(longlong *)(param_3 + 8) + 0xac + (ulonglong)uVar1 * 0x168,0x2e);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d72c0(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,1,(ulonglong)uVar1 * 0x168 + *(longlong *)(param_1 + 8),0x28);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d7320(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0xac + (ulonglong)uVar1 * 0x168,0,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d73b0(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0xac + (ulonglong)uVar1 * 0x168,0x2c,auVar5
            );
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



longlong FUN_1408d7440(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d7480(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 0x168;
}



undefined8 FUN_1408d7490(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[4] = 0;
    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(0x168) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(0x168) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d74f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
    uint uVar1;
    uint uVar2;
    undefined8 uVar3;

    FUN_1408d6f50(param_1,param_2,*(undefined8 *)(param_4 + 2),param_3,*param_4);
    uVar2 = 0;
    uVar1 = 0;
    if (*(int *)(param_3 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_3,1,(ulonglong)uVar1 * 0x168 + *(longlong *)(param_3 + 8),0x25);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    uVar3 = FUN_1408d7130(param_3,*param_4,*(undefined *)(param_4 + 4));
    uVar3 = FUN_1408d7210(uVar3,0x4059000000000000,param_3);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8cc0(param_3,1,(ulonglong)uVar2 * 0x168 + *(longlong *)(param_3 + 8),0x28);
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_3 + 4));
    }
    uVar3 = FUN_1408d7320(uVar3,0,param_3);
    FUN_1408d73b0(uVar3,0,param_3);
    FUN_1408d75e0(param_3,*(undefined8 *)(param_3 + 8));
    return;
}



void FUN_1408d75e0(longlong param_1,longlong param_2)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined4 local_118;
    undefined4 local_114;
    undefined4 local_110;
    undefined4 local_10c;
    undefined4 local_108;
    undefined4 local_100;
    undefined4 local_fc;
    undefined4 local_f8;
    undefined4 local_f4;
    undefined4 local_f0;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_d0;
    undefined4 local_cc;
    undefined4 local_c8;
    undefined4 local_c4;
    undefined4 local_c0;
    undefined4 local_b8;
    undefined4 local_b4;
    undefined4 local_b0;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;

    local_100 = *(undefined4 *)(param_2 + 8);
    local_fc = *(undefined4 *)(param_2 + 0xc);
    local_f8 = *(undefined4 *)(param_2 + 0x10);
    local_f4 = *(undefined4 *)(param_2 + 0x14);
    local_f0 = *(undefined4 *)(param_2 + 0x18);
    local_a0 = *(undefined4 *)(param_2 + 0x1c);
    local_9c = *(undefined4 *)(param_2 + 0x20);
    local_98 = *(undefined4 *)(param_2 + 0x24);
    local_94 = *(undefined4 *)(param_2 + 0x28);
    local_90 = *(undefined4 *)(param_2 + 0x2c);
    local_d0 = *(undefined4 *)(param_2 + 0x30);
    local_cc = *(undefined4 *)(param_2 + 0x34);
    local_c8 = *(undefined4 *)(param_2 + 0x38);
    local_c4 = *(undefined4 *)(param_2 + 0x3c);
    local_c0 = *(undefined4 *)(param_2 + 0x40);
    local_118 = *(undefined4 *)(param_2 + 0x44);
    local_114 = *(undefined4 *)(param_2 + 0x48);
    local_110 = *(undefined4 *)(param_2 + 0x4c);
    local_10c = *(undefined4 *)(param_2 + 0x50);
    local_108 = *(undefined4 *)(param_2 + 0x54);
    local_e8 = *(undefined4 *)(param_2 + 0x58);
    local_e4 = *(undefined4 *)(param_2 + 0x5c);
    local_e0 = *(undefined4 *)(param_2 + 0x60);
    local_dc = *(undefined4 *)(param_2 + 100);
    local_d8 = *(undefined4 *)(param_2 + 0x68);
    local_b8 = *(undefined4 *)(param_2 + 0x6c);
    local_b4 = *(undefined4 *)(param_2 + 0x70);
    local_b0 = *(undefined4 *)(param_2 + 0x74);
    local_ac = *(undefined4 *)(param_2 + 0x78);
    local_a8 = *(undefined4 *)(param_2 + 0x7c);
    local_88 = *(undefined4 *)(param_2 + 0x80);
    local_84 = *(undefined4 *)(param_2 + 0x84);
    local_80 = *(undefined4 *)(param_2 + 0x88);
    local_7c = *(undefined4 *)(param_2 + 0x8c);
    local_78 = *(undefined4 *)(param_2 + 0x90);
    fVar1 = (float)thunk_FUN_1408d9a30(&local_100);
    fVar2 = (float)thunk_FUN_1408d9a30(&local_a0);
    fVar3 = (float)thunk_FUN_1408d9a30(&local_d0);
    fVar4 = (float)thunk_FUN_1408d9a30(&local_118);
    fVar5 = (float)thunk_FUN_1408d9a30(&local_e8);
    fVar6 = (float)thunk_FUN_1408d9a30(&local_b8);
    fVar7 = (float)thunk_FUN_1408d9a30(&local_88);
    if (fVar1 <= fVar2) {
        fVar1 = fVar2;
    }
    if (fVar1 <= fVar3) {
        fVar1 = fVar3;
    }
    if (fVar1 <= fVar4) {
        fVar1 = fVar4;
    }
    if (fVar1 <= fVar5) {
        fVar1 = fVar5;
    }
    if (fVar1 <= fVar6) {
        fVar1 = fVar6;
    }
    if (fVar1 <= fVar7) {
        fVar1 = fVar7;
    }
    *(int *)(param_1 + 0x10) = (int)(longlong)(fVar1 * 6.91);
    return;
}



void FUN_1408d77f0(longlong param_1,longlong param_2,float *param_3,int param_4)

{
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
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
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
    float fVar37;
    float *pfVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    float fVar52;
    float fVar53;
    float fVar54;
    float fVar55;
    float fVar56;
    float fVar57;
    float fVar58;
    float fVar59;
    float fVar60;
    float fVar61;
    float fVar62;
    float fVar63;
    float fVar64;
    float local_res8;
    float local_res20;
    float local_178;
    float local_174;
    float local_170;
    float local_16c;
    float local_168;
    float local_164;
    float local_160;
    float local_15c;
    float local_158;
    float local_154;
    float local_150;
    float local_14c;
    float local_148;
    float local_144;

    fVar1 = *(float *)(param_1 + 8);
    fVar43 = *(float *)(param_1 + 0xb8);
    fVar47 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 0xc);
    fVar48 = *(float *)(param_1 + 0xb4);
    fVar3 = *(float *)(param_1 + 0x10);
    fVar39 = *(float *)(param_1 + 0xbc);
    fVar44 = *(float *)(param_1 + 0xd4);
    fVar40 = *(float *)(param_1 + 0xec);
    fVar45 = *(float *)(param_1 + 0x104);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(param_1 + 0x18);
    fVar6 = *(float *)(param_1 + 0x1c);
    fVar7 = *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x24);
    fVar9 = *(float *)(param_1 + 0x28);
    fVar10 = *(float *)(param_1 + 0x2c);
    fVar11 = *(float *)(param_1 + 0x30);
    fVar12 = *(float *)(param_1 + 0x34);
    fVar13 = *(float *)(param_1 + 0x38);
    fVar14 = *(float *)(param_1 + 0x3c);
    fVar15 = *(float *)(param_1 + 0x40);
    fVar16 = *(float *)(param_1 + 0x44);
    fVar17 = *(float *)(param_1 + 0x48);
    fVar18 = *(float *)(param_1 + 0x4c);
    fVar19 = *(float *)(param_1 + 0x50);
    fVar20 = *(float *)(param_1 + 0x54);
    fVar21 = *(float *)(param_1 + 0x58);
    fVar22 = *(float *)(param_1 + 0x5c);
    fVar23 = *(float *)(param_1 + 0x60);
    fVar24 = *(float *)(param_1 + 100);
    local_144 = *(float *)(param_1 + 0x150);
    local_14c = *(float *)(param_1 + 0x148);
    fVar41 = *(float *)(param_1 + 0x11c);
    fVar25 = *(float *)(param_1 + 0x68);
    fVar26 = *(float *)(param_1 + 0x98);
    fVar27 = *(float *)(param_1 + 0x9c);
    fVar28 = *(float *)(param_1 + 0x6c);
    fVar29 = *(float *)(param_1 + 0x70);
    fVar42 = *(float *)(param_1 + 0x14c);
    fVar30 = *(float *)(param_1 + 0x74);
    fVar31 = *(float *)(param_1 + 0x78);
    fVar32 = *(float *)(param_1 + 0x7c);
    fVar33 = *(float *)(param_1 + 0x80);
    fVar34 = *(float *)(param_1 + 0x84);
    fVar35 = *(float *)(param_1 + 0x88);
    fVar36 = *(float *)(param_1 + 0x8c);
    fVar37 = *(float *)(param_1 + 0x90);
    fVar46 = *(float *)(param_1 + 0x144);
    fVar50 = *(float *)(param_1 + 0xcc);
    fVar53 = *(float *)(param_1 + 0xe4);
    fVar56 = *(float *)(param_1 + 0xfc);
    fVar59 = *(float *)(param_1 + 0x114);
    fVar62 = *(float *)(param_1 + 300);
    fVar64 = *(float *)(param_1 + 0x134);
    local_178 = *(float *)(param_1 + 0x100);
    local_174 = *(float *)(param_1 + 0x108);
    local_16c = *(float *)(param_1 + 0x118);
    local_168 = *(float *)(param_1 + 0xd8);
    local_164 = *(float *)(param_1 + 0x120);
    local_160 = *(float *)(param_1 + 0xf0);
    local_15c = *(float *)(param_1 + 0x130);
    local_158 = *(float *)(param_1 + 0xd0);
    local_154 = *(float *)(param_1 + 0x138);
    local_148 = *(float *)(param_1 + 0xe8);
    if (param_4 != 0) {
        pfVar38 = param_3;
        local_res8 = fVar46;
        local_res20 = fVar43;
        local_170 = fVar47;
        local_150 = fVar42;
        do {
            fVar63 = fVar64;
            fVar61 = fVar62;
            fVar60 = fVar41;
            fVar58 = fVar59;
            fVar57 = fVar45;
            fVar55 = fVar56;
            fVar54 = fVar40;
            fVar52 = fVar53;
            fVar51 = fVar44;
            fVar49 = fVar50;
            fVar47 = fVar39;
            fVar43 = fVar48;
            fVar48 = *(float *)((param_2 - (longlong)param_3) + (longlong)pfVar38);
            fVar39 = ((fVar43 * fVar2 + fVar1 * fVar48 + local_res20 * fVar3) - fVar47 * fVar4) -
                     local_170 * fVar5;
            fVar44 = ((fVar49 * fVar7 + fVar6 * fVar39 + local_158 * fVar8) - fVar51 * fVar9) -
                     local_168 * fVar10;
            fVar40 = ((fVar52 * fVar12 + fVar11 * fVar44 + local_148 * fVar13) - fVar54 * fVar14) -
                     local_160 * fVar15;
            fVar45 = ((fVar55 * fVar17 + fVar16 * fVar40 + local_178 * fVar18) - fVar57 * fVar19) -
                     local_174 * fVar20;
            fVar41 = ((fVar58 * fVar22 + fVar21 * fVar45 + local_16c * fVar23) - fVar60 * fVar24) -
                     local_164 * fVar25;
            fVar46 = ((fVar61 * fVar29 + fVar28 * fVar41 + local_15c * fVar30) - fVar63 * fVar31) -
                     local_154 * fVar32;
            fVar42 = ((local_res8 * fVar34 + fVar33 * fVar46 + local_14c * fVar35) - local_150 * fVar36) -
                     local_144 * fVar37;
            local_14c = local_res8;
            local_144 = local_150;
            *pfVar38 = fVar42 * fVar26 + fVar48 * fVar27;
            param_4 = param_4 + -1;
            pfVar38 = pfVar38 + 1;
            fVar50 = fVar39;
            fVar53 = fVar44;
            fVar56 = fVar40;
            fVar59 = fVar45;
            fVar62 = fVar41;
            fVar64 = fVar46;
            local_res8 = fVar46;
            local_res20 = fVar43;
            local_178 = fVar55;
            local_174 = fVar57;
            local_170 = fVar47;
            local_16c = fVar58;
            local_168 = fVar51;
            local_164 = fVar60;
            local_160 = fVar54;
            local_15c = fVar61;
            local_158 = fVar49;
            local_154 = fVar63;
            local_150 = fVar42;
            local_148 = fVar52;
        } while (param_4 != 0);
    }
    *(float *)(param_1 + 0xcc) = fVar50;
    *(float *)(param_1 + 0x144) = fVar46;
    *(float *)(param_1 + 0xe4) = fVar53;
    *(float *)(param_1 + 0xfc) = fVar56;
    *(float *)(param_1 + 0xb4) = fVar48;
    *(float *)(param_1 + 0xb8) = fVar43;
    *(float *)(param_1 + 0xd0) = local_158;
    *(float *)(param_1 + 0x114) = fVar59;
    *(float *)(param_1 + 300) = fVar62;
    *(float *)(param_1 + 0xd4) = fVar44;
    *(float *)(param_1 + 0xd8) = local_168;
    *(float *)(param_1 + 0x148) = local_14c;
    *(float *)(param_1 + 0xe8) = local_148;
    *(float *)(param_1 + 0xec) = fVar40;
    *(float *)(param_1 + 0xf0) = local_160;
    *(float *)(param_1 + 0xbc) = fVar39;
    *(float *)(param_1 + 0x100) = local_178;
    *(float *)(param_1 + 0x104) = fVar45;
    *(float *)(param_1 + 0x108) = local_174;
    *(float *)(param_1 + 0x14c) = fVar42;
    *(float *)(param_1 + 0x118) = local_16c;
    *(float *)(param_1 + 0x11c) = fVar41;
    *(float *)(param_1 + 0x120) = local_164;
    *(float *)(param_1 + 0xc0) = fVar47;
    *(float *)(param_1 + 0x130) = local_15c;
    *(float *)(param_1 + 0x134) = fVar64;
    *(float *)(param_1 + 0x138) = local_154;
    *(float *)(param_1 + 0x150) = local_144;
    return;
}



longlong FUN_1408d8040(longlong param_1)

{
    FUN_1408d86e0();
    return param_1 + 100;
}



longlong FUN_1408d8060(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



undefined8 FUN_1408d80b0(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(100) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(100) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d8130(longlong param_1,int param_2,char param_3)

{
    uint uVar1;
    int iVar2;

    uVar1 = 0;
    iVar2 = 0;
    if (param_3 == '\0') {
        iVar2 = 0x18 - *(int *)(&DAT_1409b19a0 + (longlong)param_2 * 4);
    }
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,iVar2,(ulonglong)uVar1 * 100 + *(longlong *)(param_1 + 8),2);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d81a0(uint *param_1,int param_2,char param_3)

{
    int iVar1;
    uint uVar2;

    uVar2 = 0;
    iVar1 = 0;
    if ((param_3 == '\0') && (iVar1 = param_2, 48000 < *param_1)) {
        iVar1 = param_2 * 2;
    }
    if (param_1[1] != 0) {
        do {
            FUN_1408d8cc0(param_1,iVar1,(ulonglong)uVar2 * 100 + *(longlong *)(param_1 + 2),3);
            uVar2 = uVar2 + 1;
        } while (uVar2 < param_1[1]);
    }
    return;
}



void FUN_1408d8210(undefined4 param_1,double param_2,undefined4 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
    uint uVar1;
    double dVar2;
    undefined local_38 [48];

    dVar2 = 20000.0;
    if ((char)param_5 == '\0') {
        param_2 = param_2 * 0.01;
        param_1 = 0;
        if (0.0 < param_2) {
            param_2 = SQRT(param_2);
        }
        dVar2 = 20000.0 - param_2 * 19000.0;
    }
    FUN_1408d95b0(param_1,0x4034000000000000,dVar2,*param_3,param_4,param_5,local_38);
    uVar1 = 0;
    if (param_3[1] != 0) {
        do {
            FUN_1408d8e70(param_3,local_38,(ulonglong)uVar1 * 100 + *(longlong *)(param_3 + 2),4);
            uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)param_3[1]);
    }
    return;
}



void FUN_1408d82b0(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined8 uVar2;
    undefined4 in_XMM6_Da;
    undefined4 uVar3;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    undefined4 uVar4;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;
    undefined auVar5 [16];
    undefined auVar6 [16];

    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    auVar5 = CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da)));
    uVar1 = 0;
    uVar3 = SUB84(param_2 * 0.01,0);
    uVar4 = SUB84(1.0 - param_2 * 0.01,0);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar2 = FUN_1408d8ca0(param_1,uVar3,param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0x30 + (ulonglong)uVar1 * 100,0xb,auVar5,
                                  auVar6);
            param_1 = FUN_1408d8ca0(uVar2,uVar4,param_3,param_4,
                                    *(longlong *)(param_3 + 8) + 0x30 + (ulonglong)uVar1 * 100,0xc);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d8360(longlong param_1)

{
    uint uVar1;

    uVar1 = 0;
    if (*(int *)(param_1 + 4) != 0) {
        do {
            FUN_1408d8cc0(param_1,1,(ulonglong)uVar1 * 100 + *(longlong *)(param_1 + 8),9);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 4));
    }
    return;
}



void FUN_1408d83c0(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0x30 + (ulonglong)uVar1 * 100,0,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



void FUN_1408d8440(undefined8 param_1,double param_2,longlong param_3,undefined8 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined4 uVar4;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    uVar3 = FUN_1408ffa00(0x4024000000000000,param_2 * 0.05);
    uVar1 = 0;
    uVar2 = (undefined4)uVar3;
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (*(int *)(param_3 + 4) != 0) {
        do {
            uVar3 = FUN_1408d8ca0(uVar3,CONCAT44(uVar4,uVar2),param_3,param_4,
                                  *(longlong *)(param_3 + 8) + 0x30 + (ulonglong)uVar1 * 100,10,auVar5);
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_3 + 4));
    }
    return;
}



longlong FUN_1408d84b0(longlong param_1)

{
    FUN_1408d8c60();
    *(undefined8 *)(param_1 + 8) = 0;
    return param_1;
}



void thunk_FUN_1408d8c80(void)

{
    return;
}



longlong FUN_1408d84f0(undefined8 param_1,uint param_2)

{
    return (ulonglong)param_2 * 100;
}



undefined8 FUN_1408d8500(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong lVar2;

    param_1[1] = param_3;
    *param_1 = param_4;
    uVar1 = SUB168(ZEXT816(100) * ZEXT416(param_3),0);
    if (SUB168(ZEXT816(100) * ZEXT416(param_3) >> 0x40,0) != 0) {
        uVar1 = 0xffffffffffffffff;
    }
    lVar2 = FUN_1408d34e0(param_2,uVar1);
    *(longlong *)(param_1 + 2) = lVar2;
    uVar1 = 1;
    if (lVar2 == 0) {
        uVar1 = 0x34;
    }
    return uVar1;
}



void FUN_1408d8560(undefined8 param_1,uint *param_2,int *param_3)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined4 uVar7;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar8 [16];

    uVar4 = 0;
    auVar8 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    iVar1 = 0;
    if (*(char *)(param_3 + 4) == '\0') {
        iVar1 = 0x18 - *(int *)(&DAT_1409b19a0 + (longlong)*param_3 * 4);
    }
    uVar2 = 0;
    if (param_2[1] != 0) {
        do {
            param_1 = FUN_1408d8cc0(param_2,iVar1,(ulonglong)uVar2 * 100 + *(longlong *)(param_2 + 2),2,
                                    auVar8);
            uVar2 = uVar2 + 1;
        } while (uVar2 < param_2[1]);
    }
    iVar1 = 0;
    if ((*(char *)(param_3 + 4) == '\0') && (iVar1 = param_3[1], 48000 < *param_2)) {
        iVar1 = iVar1 * 2;
    }
    uVar2 = 0;
    if (param_2[1] != 0) {
        do {
            param_1 = FUN_1408d8cc0(param_2,iVar1,(ulonglong)uVar2 * 100 + *(longlong *)(param_2 + 2),3,
                                    auVar8);
            uVar2 = uVar2 + 1;
        } while (uVar2 < param_2[1]);
    }
    uVar6 = FUN_1408d8210(param_1,*(undefined8 *)(param_3 + 2),param_2);
    uVar6 = FUN_1408d82b0(uVar6,0x4059000000000000,param_2);
    uVar3 = 0;
    if (param_2[1] != 0) {
        do {
            uVar6 = FUN_1408d8cc0(param_2,1,uVar3 * 100 + *(longlong *)(param_2 + 2),9);
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < param_2[1]);
    }
    FUN_1408d83c0(uVar6,0,param_2);
    uVar6 = FUN_1408ffa00(0x4024000000000000,0);
    uVar5 = (undefined4)uVar6;
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (param_2[1] != 0) {
        do {
            uVar6 = FUN_1408d8ca0(uVar6,CONCAT44(uVar7,uVar5),param_2);
            uVar4 = uVar4 + 1;
        } while (uVar4 < param_2[1]);
    }
    return;
}



void FUN_1408d86e0(longlong param_1,float *param_2,float *param_3,int param_4)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    double dVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar1 = *(float *)(param_1 + 0x1c);
    fVar7 = *(float *)(param_1 + 8);
    fVar3 = *(float *)(param_1 + 0x40);
    fVar8 = *(float *)(param_1 + 0x44);
    fVar10 = *(float *)(param_1 + 0x4c);
    fVar12 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar2 = *(float *)(param_1 + 0x20);
    fVar13 = *(float *)(param_1 + 0x14);
    fVar14 = *(float *)(param_1 + 0x18);
    dVar6 = (double)FUN_1408ffa00(0x4000000000000000);
    fVar9 = fVar8;
    fVar11 = fVar10;
    if (param_4 != 0) {
        do {
            fVar11 = fVar4;
            fVar9 = fVar3;
            param_4 = param_4 + -1;
            fVar3 = *(float *)(param_1 + 0x30) * *param_2;
            *(float *)(param_1 + 0x34) = fVar3;
            fVar4 = fVar3 * 8388607.0 * (float)dVar6;
            if (fVar4 <= 0.0) {
                fVar4 = fVar4 - 0.5;
            }
            else {
                fVar4 = fVar4 + 0.5;
            }
            fVar3 = *(float *)(param_1 + 0x38);
            fVar5 = *(float *)(param_1 + 0x3c) - 1.0;
            if (fVar5 <= 0.0) {
                fVar5 = *(float *)(param_1 + 0xc);
                fVar3 = (float)((int)fVar4 << ((byte)(int)fVar7 & 0x1f)) * 1.192093e-07;
            }
            *(float *)(param_1 + 0x3c) = fVar5;
            *(float *)(param_1 + 0x38) = fVar3;
            fVar4 = ((fVar9 * fVar13 + fVar12 * fVar3 + fVar8 * fVar14) - fVar11 * fVar1) - fVar10 * fVar2
                    ;
            *param_3 = fVar4 * *(float *)(param_1 + 0x58);
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
            fVar8 = fVar9;
            fVar10 = fVar11;
        } while (param_4 != 0);
    }
    *(float *)(param_1 + 0x40) = fVar3;
    *(float *)(param_1 + 0x44) = fVar9;
    *(float *)(param_1 + 0x48) = fVar4;
    *(float *)(param_1 + 0x4c) = fVar11;
    return;
}



void FUN_1408d8ac0(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                   undefined (*param_5_00) [16],float *param_6_00,undefined8 param_7_00,
                   undefined8 param_8,float param_5,float param_6,uint param_7)

{
    longlong lVar1;
    undefined (*pauVar2) [16];
    undefined (*pauVar3) [16];
    float *pfVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;

    if ((param_4 == param_3) && (param_6 == param_5)) {
        if (param_5_00 < (undefined (*) [16])(*param_5_00 + (ulonglong)param_7 * 4)) {
            pauVar2 = param_5_00;
            do {
                pfVar4 = (float *)(((longlong)param_6_00 - (longlong)param_5_00) + (longlong)pauVar2);
                pauVar3 = pauVar2[1];
                *pauVar2 = CONCAT412(pfVar4[3] * param_6 + *(float *)(*pauVar2 + 0xc) * param_4,
                                     CONCAT48(pfVar4[2] * param_6 + *(float *)(*pauVar2 + 8) * param_4,
                                              CONCAT44(pfVar4[1] * param_6 +
                                                       *(float *)(*pauVar2 + 4) * param_4,
                                                       *pfVar4 * param_6 + *(float *)*pauVar2 * param_4)));
                pauVar2 = pauVar3;
            } while (pauVar3 < (undefined (*) [16])(*param_5_00 + (ulonglong)param_7 * 4));
            return;
        }
    }
    else {
        pauVar2 = (undefined (*) [16])(*param_5_00 + (ulonglong)param_7 * 4);
        fVar5 = 1.0 / (float)(ulonglong)param_7;
        fVar8 = (param_4 - param_3) * fVar5;
        fVar5 = (param_6 - param_5) * fVar5;
        if (param_5_00 < pauVar2) {
            lVar1 = (longlong)pauVar2 + (3 - (longlong)param_5_00);
            if (3 < (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 3)) >> 2) {
                pauVar3 = param_5_00;
                pfVar4 = param_6_00;
                do {
                    param_5_00 = pauVar3[1];
                    param_6_00 = pfVar4 + 4;
                    *(float *)*pauVar3 = param_3 * *(float *)*pauVar3 + param_5 * *pfVar4;
                    fVar6 = param_3 + fVar8 + fVar8;
                    fVar9 = param_5 + fVar5 + fVar5;
                    fVar7 = fVar6 + fVar8;
                    *(float *)(*pauVar3 + 4) =
                            (param_5 + fVar5) * pfVar4[1] + (param_3 + fVar8) * *(float *)(*pauVar3 + 4);
                    fVar10 = fVar9 + fVar5;
                    param_3 = fVar7 + fVar8;
                    *(float *)(*pauVar3 + 8) = fVar9 * pfVar4[2] + fVar6 * *(float *)(*pauVar3 + 8);
                    param_5 = fVar10 + fVar5;
                    *(float *)(*pauVar3 + 0xc) = fVar10 * pfVar4[3] + fVar7 * *(float *)(*pauVar3 + 0xc);
                    pauVar3 = param_5_00;
                    pfVar4 = param_6_00;
                } while ((longlong)param_5_00 < (longlong)(pauVar2[-1] + 4));
            }
            for (; param_5_00 < pauVar2; param_5_00 = (undefined (*) [16])(*param_5_00 + 4)) {
                *(float *)*param_5_00 = param_3 * *(float *)*param_5_00 + param_5 * *param_6_00;
                param_6_00 = param_6_00 + 1;
                param_3 = param_3 + fVar8;
                param_5 = param_5 + fVar5;
            }
        }
    }
    return;
}



undefined4 * FUN_1408d8c60(undefined4 *param_1)

{
    *param_1 = 0xac44;
    param_1[1] = 1;
    return param_1;
}



void FUN_1408d8c80(void)

{
    return;
}



void FUN_1408d8ca0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,int param_6)

{
    *(float *)(param_5 + (longlong)param_6 * 4) = (float)param_2;
    return;
}



void FUN_1408d8cc0(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
    *(float *)(param_3 + (longlong)param_4 * 4) = (float)param_2;
    return;
}



void FUN_1408d8ce0(undefined8 param_1,ulonglong param_2,uint param_3,longlong param_4,int param_5)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    double *pdVar6;
    float *pfVar7;
    longlong lVar8;
    int iVar9;
    longlong lVar10;
    int iVar11;
    int iVar12;

    lVar8 = (longlong)param_5;
    iVar11 = 0;
    iVar12 = iVar11;
    if (((0 < (int)param_3) && (iVar12 = 0, 3 < param_3)) &&
        ((param_2 + (longlong)(int)(param_3 - 1) * 8 < (ulonglong)(param_4 + lVar8 * 4) ||
                                   (iVar12 = iVar11,
                                           (ulonglong)(param_4 + (longlong)(int)((param_3 - 1) + param_5) * 4) < param_2)))) {
        uVar3 = param_3 & 0x80000003;
        if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        iVar9 = param_5 + 2;
        do {
            lVar5 = (longlong)iVar11;
            iVar11 = iVar11 + 4;
            pdVar6 = (double *)(param_2 + lVar5 * 8);
            *(ulonglong *)(param_4 + (longlong)(iVar9 + -2) * 4) =
                    CONCAT44((float)pdVar6[1],(float)*pdVar6);
            pdVar6 = (double *)(param_2 + (longlong)(iVar9 - param_5) * 8);
            lVar5 = (longlong)iVar9;
            iVar9 = iVar9 + 4;
            *(ulonglong *)(param_4 + lVar5 * 4) = CONCAT44((float)pdVar6[1],(float)*pdVar6);
            iVar12 = iVar11;
        } while (iVar11 < (int)(param_3 - uVar3));
    }
    lVar5 = (longlong)iVar12;
    lVar10 = (longlong)(int)param_3;
    if (lVar5 < lVar10) {
        if (3 < lVar10 - lVar5) {
            lVar2 = lVar5 + lVar8;
            lVar1 = lVar5 * 8;
            lVar4 = ((lVar10 - lVar5) - 4U >> 2) + 1;
            lVar5 = lVar5 + lVar4 * 4;
            pdVar6 = (double *)(param_2 + 0x10 + lVar1);
            pfVar7 = (float *)(param_4 + lVar2 * 4);
            do {
                *pfVar7 = (float)pdVar6[-2];
                pfVar7[1] = (float)pdVar6[-1];
                pfVar7[2] = (float)*pdVar6;
                pfVar7[3] = (float)pdVar6[1];
                lVar4 = lVar4 + -1;
                pdVar6 = pdVar6 + 4;
                pfVar7 = pfVar7 + 4;
            } while (lVar4 != 0);
        }
        if (lVar5 < lVar10) {
            pfVar7 = (float *)(param_4 + (lVar5 + lVar8) * 4);
            do {
                lVar8 = lVar5 * 8;
                lVar5 = lVar5 + 1;
                *pfVar7 = (float)*(double *)(param_2 + lVar8);
                pfVar7 = pfVar7 + 1;
            } while (lVar5 < lVar10);
        }
    }
    return;
}



void FUN_1408d8e70(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
    longlong lVar1;

    lVar1 = (longlong)param_4;
    *(float *)(param_3 + lVar1 * 4) = (float)*param_2;
    *(float *)(param_3 + 4 + lVar1 * 4) = (float)param_2[1];
    *(float *)(param_3 + 8 + lVar1 * 4) = (float)param_2[2];
    *(float *)(param_3 + 0xc + lVar1 * 4) = (float)param_2[4];
    *(float *)(param_3 + 0x10 + lVar1 * 4) = (float)param_2[5];
    return;
}



void FUN_1408d8ed0(undefined8 param_1,double *param_2,longlong param_3,int param_4)

{
    longlong lVar1;

    lVar1 = (longlong)param_4;
    *(float *)(param_3 + lVar1 * 4) = (float)*param_2;
    *(float *)(param_3 + 4 + lVar1 * 4) = (float)param_2[1];
    *(float *)(param_3 + 8 + lVar1 * 4) = (float)param_2[4];
    return;
}



void FUN_1408d8f20(undefined8 *param_1)

{
    *param_1 = 0x3ff0000000000000;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3ff0000000000000;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
}



void FUN_1408d8f50(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
    double dVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar7;
    double dVar5;
    undefined4 uVar8;
    double dVar6;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    double dVar12;
    double dVar13;
    double dVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    double *in_stack_00000028;

    *in_stack_00000028 = 1.0;
    in_stack_00000028[3] = 1.0;
    uVar4 = (undefined4)param_4;
    uVar9 = (undefined4)((ulonglong)param_4 >> 0x20);
    uVar10 = (undefined4)param_3;
    uVar11 = (undefined4)((ulonglong)param_3 >> 0x20);
    in_stack_00000028[4] = 1.0;
    in_stack_00000028[1] = 0.0;
    in_stack_00000028[2] = 0.0;
    in_stack_00000028[5] = 0.0;
    param_2 = param_2 / (double)(ulonglong)param_5;
    uVar2 = SUB84(param_2,0);
    uVar7 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            uVar2 = 0x55555555;
            uVar7 = 0x3fdd5555;
        }
    }
    else {
        uVar2 = 0xb4e81b4f;
        uVar7 = 0x3f2b4e81;
    }
    dVar5 = (double)FUN_1409005c8((double)CONCAT44(uVar7,uVar2) * 3.141592653589793);
    uVar15 = 0;
    uVar16 = 0x3ff00000;
    uVar3 = SUB84(dVar5,0);
    uVar8 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar14 = (dVar5 + 1.0) * (1.0 / (double)CONCAT44(uVar11,uVar10));
    uVar10 = SUB84(dVar14,0);
    uVar11 = (undefined4)((ulonglong)dVar14 >> 0x20);
    uVar17 = SUB84(dVar5 * dVar5,0);
    uVar18 = (undefined4)((ulonglong)(dVar5 * dVar5) >> 0x20);
    dVar5 = (double)FUN_1408ffa00(0x4024000000000000);
    dVar14 = (double)((ulonglong)((double)CONCAT44(uVar9,uVar4) * 0.08333333333333333) &
                      0x7fffffffffffffff);
    if (dVar5 < (double)CONCAT44(uVar16,uVar15)) {
        dVar5 = (double)CONCAT44(uVar16,uVar15) / dVar5;
        dVar13 = (double)CONCAT44(uVar16,uVar15);
        dVar6 = dVar5 * (double)CONCAT44(uVar11,uVar10);
        uVar4 = SUB84(dVar6,0);
        uVar9 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar14 = ((double)CONCAT44(uVar7,uVar2) * dVar6 +
                  ((double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar7,uVar2))) * dVar14 +
                 ((double)CONCAT44(uVar16,uVar15) - dVar14);
        if (dVar14 < (double)CONCAT44(uVar16,uVar15)) {
            dVar14 = (double)CONCAT44(uVar16,uVar15);
        }
        if (dVar5 < dVar14) {
            dVar14 = dVar5;
        }
    }
    else {
        dVar6 = dVar5 * (double)CONCAT44(uVar11,uVar10);
        dVar13 = ((double)CONCAT44(uVar7,uVar2) * dVar6 +
                  ((double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar7,uVar2))) * dVar14 +
                 ((double)CONCAT44(uVar16,uVar15) - dVar14);
        if (dVar13 < (double)CONCAT44(uVar16,uVar15)) {
            dVar13 = (double)CONCAT44(uVar16,uVar15);
        }
        if (dVar5 < dVar13) {
            dVar13 = dVar5;
        }
        dVar14 = (double)CONCAT44(uVar16,uVar15);
        uVar4 = uVar10;
        uVar9 = uVar11;
        uVar10 = SUB84(dVar6,0);
        uVar11 = (int)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = (double)CONCAT44(uVar9,uVar4) * (double)CONCAT44(uVar8,uVar3);
    dVar1 = (double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar8,uVar3);
    in_stack_00000028[3] = 1.0;
    dVar12 = (double)CONCAT44(uVar18,uVar17) * 2.0;
    dVar5 = (double)CONCAT44(uVar16,uVar15) / (dVar6 + dVar14 + (double)CONCAT44(uVar18,uVar17));
    *in_stack_00000028 = (dVar1 + dVar13 + (double)CONCAT44(uVar18,uVar17)) * dVar5;
    in_stack_00000028[2] = ((dVar13 - dVar1) + (double)CONCAT44(uVar18,uVar17)) * dVar5;
    in_stack_00000028[1] = (dVar12 - dVar13 * 2.0) * dVar5;
    in_stack_00000028[4] = (dVar12 - dVar14 * 2.0) * dVar5;
    in_stack_00000028[5] = ((dVar14 - dVar6) + (double)CONCAT44(uVar18,uVar17)) * dVar5;
    return;
}


void FUN_1408d91c0(undefined8 param_1,double param_2,uint param_3,undefined8 param_4,double *param_5
)

{
    double dVar1;
    double dVar2;

    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[5] = 0.0;
    *param_5 = 1.0;
    param_5[3] = 1.0;
    param_5[4] = 1.0;
    param_2 = param_2 / (double)(ulonglong)param_3;
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            param_2 = 0.4583333333333333;
        }
    }
    else {
        param_2 = 0.0002083333333333333;
    }
    dVar1 = (double)FUN_1409005c8(param_2 * 3.141592653589793);
    param_5[3] = 1.0;
    dVar2 = 1.0 / (dVar1 + 1.0);
    *param_5 = dVar2;
    param_5[4] = (dVar1 - 1.0) * dVar2;
    param_5[1] = dVar2 * -1.0;
    param_5[2] = dVar2 * 0.0;
    param_5[5] = dVar2 * 0.0;
    return;
}



void FUN_1408d92a0(undefined8 param_1,double param_2,undefined8 param_3,uint param_4,
                   undefined8 param_5,undefined8 param_6,double *param_7)

{
    double dVar1;
    undefined4 uVar2;
    undefined4 uVar4;
    double dVar3;
    double dVar5;

    param_7[1] = 0.0;
    param_7[2] = 0.0;
    param_7[5] = 0.0;
    uVar2 = (undefined4)param_3;
    uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
    *param_7 = 1.0;
    param_7[3] = 1.0;
    param_7[4] = 1.0;
    param_2 = param_2 / (double)(ulonglong)param_4;
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            param_2 = 0.4583333333333333;
        }
    }
    else {
        param_2 = 0.0002083333333333333;
    }
    dVar1 = (double)FUN_1409005c8(param_2 * 3.141592653589793);
    param_7[3] = 1.0;
    dVar5 = dVar1 * dVar1;
    dVar1 = dVar1 * (double)CONCAT44(uVar4,uVar2);
    dVar3 = 1.0 / (dVar1 + 1.0 + dVar5);
    *param_7 = dVar3;
    param_7[2] = dVar3;
    param_7[5] = ((1.0 - dVar1) + dVar5) * dVar3;
    param_7[1] = dVar3 * -2.0;
    param_7[4] = (dVar5 * 2.0 - 2.0) * dVar3;
    return;
}



void FUN_1408d93b0(undefined8 param_1,double param_2,uint param_3,undefined8 param_4,double *param_5
)

{
    double dVar1;
    double dVar2;

    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[5] = 0.0;
    *param_5 = 1.0;
    param_5[3] = 1.0;
    param_5[4] = 1.0;
    param_2 = param_2 / (double)(ulonglong)param_3;
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            param_2 = 0.4583333333333333;
        }
    }
    else {
        param_2 = 0.0002083333333333333;
    }
    dVar1 = (double)FUN_1409005c8(param_2 * 3.141592653589793);
    param_5[3] = 1.0;
    dVar2 = 1.0 / (dVar1 + 1.0);
    *param_5 = dVar2 * dVar1;
    param_5[1] = dVar2 * dVar1;
    param_5[2] = dVar2 * 0.0;
    param_5[5] = dVar2 * 0.0;
    param_5[4] = (dVar1 - 1.0) * dVar2;
    return;
}



void FUN_1408d9480(undefined8 param_1,double param_2,undefined8 param_3,uint param_4,
                   undefined8 param_5,undefined8 param_6,double *param_7)

{
    double dVar1;
    double dVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    double dVar5;

    param_7[1] = 0.0;
    param_7[2] = 0.0;
    param_7[5] = 0.0;
    uVar3 = (undefined4)param_3;
    uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
    *param_7 = 1.0;
    param_7[3] = 1.0;
    param_7[4] = 1.0;
    param_2 = param_2 / (double)(ulonglong)param_4;
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            param_2 = 0.4583333333333333;
        }
    }
    else {
        param_2 = 0.0002083333333333333;
    }
    dVar2 = (double)FUN_1409005c8(param_2 * 3.141592653589793);
    param_7[3] = 1.0;
    dVar1 = dVar2 * dVar2;
    dVar2 = dVar2 * (double)CONCAT44(uVar4,uVar3);
    dVar5 = 1.0 / (dVar2 + 1.0 + dVar1);
    param_7[4] = (dVar1 * 2.0 - 2.0) * dVar5;
    param_7[1] = dVar1 * 2.0 * dVar5;
    param_7[5] = ((1.0 - dVar2) + dVar1) * dVar5;
    *param_7 = dVar5 * dVar1;
    param_7[2] = dVar5 * dVar1;
    return;
}



void FUN_1408d95b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4,
                   undefined8 param_5,undefined8 param_6,double *param_7)

{
    undefined8 uVar1;
    double local_78;
    double local_70;
    double local_58;
    double local_48;
    double local_40;
    double local_28;

    uVar1 = FUN_1408d91c0(param_4,param_5,&local_48);
    FUN_1408d93b0(uVar1,param_3,param_4 & 0xffffffff,param_5,&local_78);
    param_7[3] = 1.0;
    *param_7 = local_78 * local_48;
    param_7[2] = local_40 * local_70;
    param_7[1] = local_40 * local_78 + local_70 * local_48;
    param_7[4] = local_58 + local_28;
    param_7[5] = local_58 * local_28;
    return;
}



void FUN_1408d9680(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
    double dVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar8;
    double dVar5;
    undefined4 uVar9;
    double dVar6;
    double dVar7;
    undefined4 uVar10;
    double dVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    double dVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    double *in_stack_00000028;

    *in_stack_00000028 = 1.0;
    in_stack_00000028[3] = 1.0;
    uVar4 = (undefined4)param_4;
    uVar10 = (undefined4)((ulonglong)param_4 >> 0x20);
    uVar12 = (undefined4)param_3;
    uVar13 = (undefined4)((ulonglong)param_3 >> 0x20);
    in_stack_00000028[4] = 1.0;
    in_stack_00000028[1] = 0.0;
    in_stack_00000028[2] = 0.0;
    in_stack_00000028[5] = 0.0;
    param_2 = param_2 / (double)(ulonglong)param_5;
    uVar2 = SUB84(param_2,0);
    uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            uVar2 = 0x55555555;
            uVar8 = 0x3fdd5555;
        }
    }
    else {
        uVar2 = 0xb4e81b4f;
        uVar8 = 0x3f2b4e81;
    }
    dVar5 = (double)FUN_1409005c8((double)CONCAT44(uVar8,uVar2) * 3.141592653589793);
    uVar15 = 0;
    uVar16 = 0x3ff00000;
    uVar3 = SUB84(dVar5,0);
    uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (dVar5 + 1.0) * (1.0 / (double)CONCAT44(uVar13,uVar12));
    uVar12 = SUB84(dVar6,0);
    uVar13 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar17 = SUB84(dVar5 * dVar5,0);
    uVar18 = (undefined4)((ulonglong)(dVar5 * dVar5) >> 0x20);
    dVar6 = (double)FUN_1408ffa00(0x4024000000000000);
    if (dVar6 < (double)CONCAT44(uVar16,uVar15)) {
        dVar6 = (double)CONCAT44(uVar16,uVar15) / dVar6;
        dVar5 = (double)CONCAT44(uVar16,uVar15);
        dVar11 = (double)((ulonglong)(DAT_140c13350 * (double)CONCAT44(uVar10,uVar4)) &
                          0x7fffffffffffffff);
        dVar7 = dVar6 * (double)CONCAT44(uVar13,uVar12);
        uVar4 = SUB84(dVar7,0);
        uVar10 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar7 = ((double)CONCAT44(uVar8,uVar2) * dVar7 +
                 ((double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar8,uVar2))) * dVar11 +
                ((double)CONCAT44(uVar16,uVar15) - dVar11);
        if (dVar7 < (double)CONCAT44(uVar16,uVar15)) {
            dVar7 = (double)CONCAT44(uVar16,uVar15);
        }
        if (dVar6 < dVar7) {
            dVar7 = dVar6;
        }
    }
    else {
        dVar11 = dVar6 * (double)CONCAT44(uVar13,uVar12);
        dVar5 = (double)((ulonglong)(DAT_140c13350 * (double)CONCAT44(uVar10,uVar4)) &
                         0x7fffffffffffffff);
        dVar5 = ((double)CONCAT44(uVar8,uVar2) * dVar11 +
                 ((double)CONCAT44(uVar16,uVar15) - (double)CONCAT44(uVar8,uVar2))) * dVar5 +
                ((double)CONCAT44(uVar16,uVar15) - dVar5);
        if (dVar5 < (double)CONCAT44(uVar16,uVar15)) {
            dVar5 = (double)CONCAT44(uVar16,uVar15);
        }
        if (dVar6 < dVar5) {
            dVar5 = dVar6;
        }
        dVar7 = (double)CONCAT44(uVar16,uVar15);
        uVar4 = uVar12;
        uVar10 = uVar13;
        uVar12 = SUB84(dVar11,0);
        uVar13 = (int)((ulonglong)dVar11 >> 0x20);
    }
    dVar11 = (double)CONCAT44(uVar10,uVar4) * (double)CONCAT44(uVar9,uVar3);
    dVar1 = (double)CONCAT44(uVar13,uVar12) * (double)CONCAT44(uVar9,uVar3);
    in_stack_00000028[3] = 1.0;
    dVar14 = (double)CONCAT44(uVar18,uVar17) * 2.0;
    dVar6 = (double)CONCAT44(uVar16,uVar15) / (dVar11 + dVar7 + (double)CONCAT44(uVar18,uVar17));
    *in_stack_00000028 = (dVar1 + dVar5 + (double)CONCAT44(uVar18,uVar17)) * dVar6;
    in_stack_00000028[2] = ((dVar5 - dVar1) + (double)CONCAT44(uVar18,uVar17)) * dVar6;
    in_stack_00000028[1] = (dVar14 - dVar5 * 2.0) * dVar6;
    in_stack_00000028[4] = (dVar14 - dVar7 * 2.0) * dVar6;
    in_stack_00000028[5] = ((dVar7 - dVar11) + (double)CONCAT44(uVar18,uVar17)) * dVar6;
    return;
}



void FUN_1408d9900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    double dVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    uVar2 = (undefined4)param_2;
    uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
    dVar1 = (double)FUN_1408ffa00(param_3,0x3fd0000000000000);
    FUN_1408d9bb0(0x8000000000000000,CONCAT44(uVar3,uVar2),0x3feb333333333333,dVar1 * 100.0 * -0.016,
                  param_4);
    return;
}



void FUN_1408d99a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    double dVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    uVar2 = (undefined4)param_2;
    uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
    dVar1 = (double)FUN_1408ffa00(param_3,0x3fd0000000000000);
    FUN_1408d9f60(0x8000000000000000,CONCAT44(uVar3,uVar2),0x3feb333333333333,dVar1 * 100.0 * -0.016,
                  param_4);
    return;
}



float FUN_1408d9a30(longlong param_1)

{
    float fVar1;
    float fVar2;
    float fVar3;
    undefined auVar6 [12];
    undefined auVar5 [16];
    undefined auVar4 [16];

    fVar3 = *(float *)(param_1 + 0xc);
    auVar5 = ZEXT416((uint)(fVar3 * fVar3)) & (undefined  [16])0xffffffffffffffff;
    auVar6 = SUB1612(auVar5 >> 0x20,0);
    fVar1 = SUB164(auVar5,0) - *(float *)(param_1 + 0x10) * 4.0;
    auVar4 = CONCAT124(auVar6,fVar1);
    if (0.0 <= fVar1) {
        auVar5 = sqrtps(auVar5,auVar4);
        fVar1 = (float)((uint)(SUB164(auVar5,0) - fVar3) & 0x7fffffff);
        fVar2 = (float)((uint)((float)((uint)fVar3 ^ 0x80000000) - SUB164(auVar5,0)) & 0x7fffffff);
        fVar3 = (float)((uint)fVar2 ^ 0x80000000);
        if (fVar2 <= fVar1) {
            fVar3 = fVar1;
        }
    }
    else {
        auVar5 = sqrtps(auVar4,CONCAT124(auVar6,SUB164(auVar5,0) - fVar1));
        fVar3 = SUB164(auVar5,0);
    }
    return 1.0 / (1.0 - fVar3 * 0.5);
}



void FUN_1408d9ae0(undefined8 param_1,double param_2,uint param_3,undefined8 param_4,
                   double *param_5_00,double *param_6,double *param_5)

{
    double dVar1;

    param_2 = param_2 / (double)(ulonglong)param_3;
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            param_2 = 0.4583333333333333;
        }
    }
    else {
        param_2 = 0.0002083333333333333;
    }
    *param_5_00 = param_2;
    dVar1 = (double)FUN_1409005c8(param_2 * 3.141592653589793);
    *param_6 = dVar1;
    *param_5 = dVar1 * dVar1;
    return;
}



void FUN_1408d9bb0(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined4 uVar10;
    double dVar6;
    undefined4 uVar11;
    undefined4 uVar12;
    double dVar7;
    double dVar8;
    double dVar9;
    undefined4 uVar13;
    undefined4 uVar16;
    double dVar14;
    double dVar15;
    undefined4 uVar17;
    undefined4 uVar19;
    double dVar18;
    undefined in_XMM4 [16];
    undefined auVar20 [16];
    double dVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined4 uVar31;
    undefined4 uVar32;
    undefined4 uVar33;
    double in_stack_00000028;
    double in_stack_00000030;
    char in_stack_00000038;
    char in_stack_00000040;
    double in_stack_00000048;
    double *in_stack_00000050;

    uVar13 = (undefined4)param_3;
    uVar16 = (undefined4)((ulonglong)param_3 >> 0x20);
    uVar17 = (undefined4)param_4;
    uVar19 = (undefined4)((ulonglong)param_4 >> 0x20);
    param_2 = param_2 / (double)(param_5 & 0xffffffff);
    uVar2 = SUB84(param_2,0);
    uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            uVar2 = 0x55555555;
            uVar10 = 0x3fdd5555;
        }
    }
    else {
        uVar2 = 0xb4e81b4f;
        uVar10 = 0x3f2b4e81;
    }
    uVar24 = SUB84(in_stack_00000030,0);
    uVar25 = (undefined4)((ulonglong)in_stack_00000030 >> 0x20);
    uVar5 = FUN_1408ffa00(0x4024000000000000);
    dVar6 = (double)CONCAT44(uVar10,uVar2) * 3.141592653589793;
    uVar4 = SUB84(dVar6,0);
    uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar30 = 0;
    uVar31 = 0;
    uVar2 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((double)CONCAT44(uVar25,uVar24) < 0.0 || (double)CONCAT44(uVar25,uVar24) == 0.0) {
        dVar6 = (double)FUN_1409005c8(dVar6);
        in_stack_00000048 = (double)CONCAT44(uVar12,uVar4) * in_stack_00000048;
        uVar4 = SUB84(in_stack_00000048,0);
        uVar12 = (undefined4)((ulonglong)in_stack_00000048 >> 0x20);
    }
    else {
        dVar6 = (double)FUN_1409005c8(dVar6 * in_stack_00000048);
    }
    uVar3 = SUB84(dVar6,0);
    uVar11 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar26 = SUB84(dVar6 * dVar6,0);
    uVar27 = (undefined4)((ulonglong)(dVar6 * dVar6) >> 0x20);
    dVar6 = (double)FUN_1409005c8(CONCAT44(uVar12,uVar4));
    uVar22 = 0;
    uVar23 = 0x3ff00000;
    uVar4 = SUB84(dVar6,0);
    uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20);
    uVar28 = SUB84(dVar6 * dVar6,0);
    uVar29 = (undefined4)((ulonglong)(dVar6 * dVar6) >> 0x20);
    if ((double)CONCAT44(uVar25,uVar24) < (double)CONCAT44(uVar31,uVar30) ||
        (double)CONCAT44(uVar25,uVar24) == (double)CONCAT44(uVar31,uVar30)) {
        in_stack_00000030 = 1.0;
        dVar6 = 1.0 / SQRT((double)CONCAT44(uVar10,uVar2));
        dVar6 = dVar6 * dVar6;
        uVar2 = SUB84(dVar6,0);
        uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    else {
        in_stack_00000030 = (double)CONCAT44(uVar10,uVar2);
        uVar2 = uVar22;
        uVar10 = uVar23;
    }
    uVar30 = SUB84(DAT_140c13350,0);
    uVar31 = (undefined4)((ulonglong)DAT_140c13350 >> 0x20);
    uVar32 = 0;
    uVar33 = 0;
    if (in_stack_00000040 != '\0') {
        dVar6 = DAT_140c13358 * (double)CONCAT44(uVar25,uVar24) * DAT_140c13350;
        uVar24 = SUB84(dVar6,0);
        uVar25 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar7 = (double)FUN_1408ffa00(0x4024000000000000);
    dVar6 = (double)CONCAT44(uVar19,uVar17) * 0.5;
    dVar14 = in_stack_00000028 * 0.5;
    uVar1 = CONCAT44(uVar33,uVar32) & 0x7fffffffffffffff;
    auVar20 = sqrtpd(in_XMM4,CONCAT412((int)(uVar1 >> 0x20),
                                       CONCAT48((int)uVar1,
                                                (double)CONCAT44(uVar31,uVar30) *
                                                (double)CONCAT44(uVar25,uVar24))) &
                             (undefined  [16])0xffffffffffffffff);
    if ((double)CONCAT44(uVar25,uVar24) < 0.0 || (double)CONCAT44(uVar25,uVar24) == 0.0) {
        dVar8 = SQRT(dVar7);
        in_stack_00000028 = (double)CONCAT44(uVar23,uVar22);
        dVar7 = (double)CONCAT44(uVar23,uVar22);
        dVar8 = (double)CONCAT44(uVar23,uVar22) / dVar8;
        uVar17 = SUB84(dVar8,0);
        uVar19 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar24 = SUB84(dVar8 * dVar8,0);
        uVar25 = (undefined4)((ulonglong)(dVar8 * dVar8) >> 0x20);
        dVar8 = dVar6;
    }
    else {
        in_stack_00000028 = SQRT(dVar7);
        uVar17 = uVar22;
        uVar19 = uVar23;
        uVar24 = uVar22;
        uVar25 = uVar23;
        dVar8 = dVar14;
        dVar14 = dVar6;
    }
    dVar15 = (double)CONCAT44(uVar16,uVar13) * -2.0;
    dVar18 = (double)CONCAT44(uVar23,uVar22) - (double)CONCAT44(uVar16,uVar13);
    dVar6 = (in_stack_00000030 - in_stack_00000030 * (double)CONCAT44(uVar16,uVar13)) +
            dVar7 * (double)CONCAT44(uVar16,uVar13);
    dVar7 = ((SUB168(auVar20,0) * dVar14 + 1.414213562373095) * (double)CONCAT44(uVar16,uVar13) *
             in_stack_00000028 + dVar18) * (double)CONCAT44(uVar11,uVar3);
    dVar9 = dVar6 * (double)CONCAT44(uVar27,uVar26);
    dVar21 = ((SUB168(auVar20,0) * dVar8 + 1.414213562373095) * (double)CONCAT44(uVar16,uVar13) *
              (double)CONCAT44(uVar19,uVar17) + dVar18) * (double)CONCAT44(uVar12,uVar4);
    dVar8 = dVar7 + (double)CONCAT44(uVar16,uVar13) + dVar9;
    *in_stack_00000050 = dVar8;
    dVar14 = (double)CONCAT44(uVar27,uVar26) * 2.0 * dVar6 + dVar15;
    in_stack_00000050[1] = dVar14;
    dVar9 = ((double)CONCAT44(uVar16,uVar13) - dVar7) + dVar9;
    in_stack_00000050[2] = dVar9;
    dVar7 = ((double)CONCAT44(uVar10,uVar2) -
             (double)CONCAT44(uVar10,uVar2) * (double)CONCAT44(uVar16,uVar13)) +
            (double)CONCAT44(uVar25,uVar24) * (double)CONCAT44(uVar16,uVar13);
    dVar18 = dVar7 * (double)CONCAT44(uVar29,uVar28);
    dVar6 = dVar21 + (double)CONCAT44(uVar16,uVar13) + dVar18;
    dVar18 = ((double)CONCAT44(uVar16,uVar13) - dVar21) + dVar18;
    in_stack_00000050[3] = dVar6;
    in_stack_00000050[5] = dVar18;
    dVar15 = (double)CONCAT44(uVar29,uVar28) * 2.0 * dVar7 + dVar15;
    in_stack_00000050[4] = dVar15;
    if (in_stack_00000038 != '\0') {
        dVar6 = (double)CONCAT44(uVar23,uVar22) / dVar6;
        in_stack_00000050[3] = 1.0;
        *in_stack_00000050 = dVar8 * dVar6;
        in_stack_00000050[1] = dVar14 * dVar6;
        in_stack_00000050[2] = dVar9 * dVar6;
        in_stack_00000050[4] = dVar15 * dVar6;
        in_stack_00000050[5] = dVar18 * dVar6;
    }
    return;
}



void FUN_1408d9f60(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5)

{
    ulonglong uVar1;
    double dVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar9;
    undefined8 uVar5;
    undefined4 uVar10;
    double dVar6;
    double dVar7;
    double dVar8;
    undefined4 uVar11;
    undefined4 uVar13;
    double dVar12;
    undefined4 uVar14;
    undefined4 uVar16;
    double dVar15;
    double dVar17;
    double dVar18;
    double dVar19;
    undefined in_XMM5 [16];
    undefined auVar20 [16];
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined4 uVar31;
    undefined4 uVar32;
    double in_stack_00000028;
    double in_stack_00000030;
    char in_stack_00000038;
    char in_stack_00000040;
    double *in_stack_00000048;

    uVar11 = (undefined4)param_3;
    uVar13 = (undefined4)((ulonglong)param_3 >> 0x20);
    uVar14 = (undefined4)param_4;
    uVar16 = (undefined4)((ulonglong)param_4 >> 0x20);
    param_2 = param_2 / (double)(param_5 & 0xffffffff);
    uVar3 = SUB84(param_2,0);
    uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
    if (0.0002083333333333333 <= param_2) {
        if (0.4583333333333333 < param_2) {
            uVar3 = 0x55555555;
            uVar9 = 0x3fdd5555;
        }
    }
    else {
        uVar3 = 0xb4e81b4f;
        uVar9 = 0x3f2b4e81;
    }
    uVar25 = SUB84(in_stack_00000030,0);
    uVar27 = (undefined4)((ulonglong)in_stack_00000030 >> 0x20);
    uVar5 = FUN_1408ffa00(0x4024000000000000);
    uVar4 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    dVar6 = (double)FUN_1409005c8(1.570796326794897 -
                                  (double)CONCAT44(uVar9,uVar3) * 3.141592653589793);
    uVar21 = 0;
    uVar22 = 0x3ff00000;
    uVar31 = SUB84(dVar6 * dVar6,0);
    uVar32 = (undefined4)((ulonglong)(dVar6 * dVar6) >> 0x20);
    uVar23 = uVar21;
    uVar24 = uVar22;
    if ((double)CONCAT44(uVar27,uVar25) < 0.0 || (double)CONCAT44(uVar27,uVar25) == 0.0) {
        dVar18 = 1.0 / SQRT((double)CONCAT44(uVar10,uVar4));
        dVar18 = dVar18 * dVar18;
        uVar23 = SUB84(dVar18,0);
        uVar24 = (int)((ulonglong)dVar18 >> 0x20);
        uVar4 = 0;
        uVar10 = 0x3ff00000;
    }
    uVar26 = SUB84(DAT_140c13350,0);
    uVar28 = (undefined4)((ulonglong)DAT_140c13350 >> 0x20);
    uVar29 = 0;
    uVar30 = 0;
    if (in_stack_00000040 != '\0') {
        dVar18 = DAT_140c13358 * (double)CONCAT44(uVar27,uVar25) * DAT_140c13350;
        uVar25 = SUB84(dVar18,0);
        uVar27 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
    dVar7 = (double)FUN_1408ffa00(0x4024000000000000);
    dVar18 = (double)CONCAT44(uVar16,uVar14) * 0.5;
    in_stack_00000028 = in_stack_00000028 * 0.5;
    uVar1 = CONCAT44(uVar30,uVar29) & 0x7fffffffffffffff;
    auVar20 = sqrtpd(in_XMM5,CONCAT412((int)(uVar1 >> 0x20),
                                       CONCAT48((int)uVar1,
                                                (double)CONCAT44(uVar28,uVar26) *
                                                (double)CONCAT44(uVar27,uVar25))) &
                             (undefined  [16])0xffffffffffffffff);
    dVar19 = SUB168(auVar20,0);
    if ((double)CONCAT44(uVar27,uVar25) < 0.0 || (double)CONCAT44(uVar27,uVar25) == 0.0) {
        dVar17 = SQRT(dVar7);
        in_stack_00000030 = (double)CONCAT44(uVar22,uVar21);
        dVar7 = (double)CONCAT44(uVar22,uVar21);
        dVar17 = (double)CONCAT44(uVar22,uVar21) / dVar17;
        uVar14 = SUB84(dVar17,0);
        uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
        dVar18 = dVar19 * dVar18;
        uVar26 = SUB84(dVar18,0);
        uVar28 = (undefined4)((ulonglong)dVar18 >> 0x20);
        uVar25 = SUB84(dVar17 * dVar17,0);
        uVar27 = (undefined4)((ulonglong)(dVar17 * dVar17) >> 0x20);
    }
    else {
        in_stack_00000030 = SQRT(dVar7);
        uVar26 = SUB84(dVar19 * in_stack_00000028,0);
        uVar28 = (undefined4)((ulonglong)(dVar19 * in_stack_00000028) >> 0x20);
        uVar14 = uVar21;
        uVar16 = uVar22;
        uVar25 = uVar21;
        uVar27 = uVar22;
        in_stack_00000028 = dVar18;
    }
    dVar18 = (double)CONCAT44(uVar13,uVar11) *
             ((double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(uVar9,uVar3));
    uVar3 = SUB84(dVar18,0);
    uVar9 = (undefined4)((ulonglong)dVar18 >> 0x20);
    if (dVar18 < 0.015) {
        uVar3 = 0xeb851eb8;
        uVar9 = 0x3f8eb851;
    }
    dVar17 = (double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(uVar9,uVar3);
    dVar12 = (double)CONCAT44(uVar9,uVar3) * -2.0;
    dVar18 = ((double)CONCAT44(uVar10,uVar4) -
              (double)CONCAT44(uVar10,uVar4) * (double)CONCAT44(uVar9,uVar3)) +
             dVar7 * (double)CONCAT44(uVar9,uVar3);
    dVar7 = ((dVar19 * in_stack_00000028 + 1.414213562373095) * (double)CONCAT44(uVar9,uVar3) *
             in_stack_00000030 + dVar17) * dVar6;
    dVar15 = (double)CONCAT44(uVar32,uVar31) * 2.0;
    dVar8 = dVar18 * (double)CONCAT44(uVar32,uVar31);
    dVar19 = dVar7 + (double)CONCAT44(uVar9,uVar3) + dVar8;
    dVar8 = ((double)CONCAT44(uVar9,uVar3) - dVar7) + dVar8;
    *in_stack_00000048 = dVar19;
    dVar6 = (((double)CONCAT44(uVar28,uVar26) + 1.414213562373095) * (double)CONCAT44(uVar9,uVar3) *
             (double)CONCAT44(uVar16,uVar14) + dVar17) * dVar6;
    dVar2 = (double)((ulonglong)(dVar18 * dVar15 + dVar12) ^ 0x8000000000000000);
    in_stack_00000048[2] = dVar8;
    dVar7 = ((double)CONCAT44(uVar24,uVar23) -
             (double)CONCAT44(uVar24,uVar23) * (double)CONCAT44(uVar9,uVar3)) +
            (double)CONCAT44(uVar27,uVar25) * (double)CONCAT44(uVar9,uVar3);
    in_stack_00000048[1] = dVar2;
    dVar17 = dVar7 * (double)CONCAT44(uVar32,uVar31);
    dVar18 = dVar6 + (double)CONCAT44(uVar9,uVar3) + dVar17;
    dVar17 = ((double)CONCAT44(uVar9,uVar3) - dVar6) + dVar17;
    dVar6 = (double)((ulonglong)(dVar7 * dVar15 + dVar12) ^ 0x8000000000000000);
    in_stack_00000048[4] = dVar6;
    in_stack_00000048[3] = dVar18;
    in_stack_00000048[5] = dVar17;
    if (in_stack_00000038 != '\0') {
        dVar18 = (double)CONCAT44(uVar22,uVar21) / dVar18;
        in_stack_00000048[3] = 1.0;
        *in_stack_00000048 = dVar19 * dVar18;
        in_stack_00000048[1] = dVar2 * dVar18;
        in_stack_00000048[2] = dVar8 * dVar18;
        in_stack_00000048[4] = dVar6 * dVar18;
        in_stack_00000048[5] = dVar17 * dVar18;
    }
    return;
}



double FUN_1408da310(undefined8 param_1,double param_2,uint param_3)

{
    double dVar1;

    dVar1 = param_2 * 0.001 * (double)(ulonglong)param_3;
    if (dVar1 == 0.0) {
        return 1.0;
    }
    dVar1 = 1.0 / dVar1;
    if (1.0 < dVar1) {
        dVar1 = 1.0;
    }
    return dVar1;
}



double FUN_1408da340(undefined8 param_1,double param_2,uint param_3)

{
    double dVar1;

    dVar1 = param_2 * 0.001 * (double)(ulonglong)param_3;
    if (dVar1 == 0.0) {
        return 1.0;
    }
    dVar1 = 1.0 / dVar1;
    if (1.0 < dVar1) {
        dVar1 = 1.0;
    }
    return dVar1;
}



int FUN_1408da370(undefined8 param_1,double param_2,uint param_3)

{
    return (int)(param_2 * 0.001 * (double)(ulonglong)param_3);
}



void FUN_1408da390(undefined8 param_1,undefined8 param_2,double param_3,undefined4 param_4,
                   uint param_5,undefined8 param_6,undefined8 param_7)

{
    char *pcVar1;
    undefined8 uVar2;
    double dVar3;
    undefined4 uVar4;
    undefined4 uVar6;
    undefined8 uVar5;
    undefined8 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;

    if (0xa3 < param_5) {
        return;
    }
    uVar4 = SUB84(param_3,0);
    uVar6 = (undefined4)((ulonglong)param_3 >> 0x20);
    pcVar1 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_1408da3d9::switchdataD_1408e450c)[(int)param_5];
    switch(param_5) {
        case 0:
            uVar2 = FUN_1408d91c0(param_1,0x404c000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 237.0,DAT_140c13360 * 12.0,
                                  0x4011333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 336.0,0x401b333333333333,
                                  0x4010666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 595.0,0x402999999999999a,
                                  0x4021333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 868.0,0x402299999999999a,
                                  0xc01d333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 6000.0;
            break;
        case 1:
            uVar2 = FUN_1408d91c0(param_1,0x4049000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x4095180000000000,DAT_140c13360 * 2.0,0xc02f000000000000,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 990.0,0x4030000000000000,
                                  0xc008000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1100.0,CONCAT44(uVar9,uVar8),
                                  0x4014000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2500.0,CONCAT44(uVar9,uVar8),
                                  0x3ff8000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 3000.0;
            uVar5 = 0x3fe8000000000000;
            break;
        case 2:
            uVar2 = FUN_1408d91c0(param_1,0x4054000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x4079000000000000,DAT_140c13360 * 10.5,0xc01a000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 625.0,0x4023666666666666,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1640.0,0x4025000000000000,
                                  0x4018cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3590.0,0x401d99999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 1980.0;
            break;
        case 3:
            uVar2 = FUN_1408d92a0(param_1,0x4052a66666666666,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9900(uVar2,0x4063d9999999999a,DAT_140c13360 * 11.0,0x401d333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 224.9,0x4022666666666666,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 692.0,0x4024000000000000,
                                  0x4024000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1680.0,0x400599999999999a,
                                  0x4020cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 6180.0;
            break;
        case 4:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 169.0,0x3fe051eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4054000000000000,0x4030000000000000,0xc029333333333333,param_4);
            uVar8 = 0;
            uVar9 = 0x40140000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 250.0,0x4014000000000000,
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 400.0,CONCAT44(uVar9,uVar8),
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,0x408c200000000000,0x4010000000000000,0xc014000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 9710.0;
            uVar5 = 0x3fe3851eb851eb85;
            break;
        case 5:
            uVar2 = FUN_1408d92a0(param_1,0x4058c00000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 290.0,0x4014000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 780.0,0x4028000000000000,
                                  0xc008000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 999.0,0x4010000000000000,
                                  0x4012000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1650.0,0x4030000000000000,
                                  0x402199999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3fe3333333333333;
            dVar3 = 8760.0;
            break;
        case 6:
            uVar2 = FUN_1408d92a0(param_1,0x405a800000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9900(uVar2,0x4047c00000000000,DAT_140c13360 * 16.0,0xc02b333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 212.9,0x401999999999999a,
                                  0x4008000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 439.4,0x4016cccccccccccd,
                                  0x4011333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1810.0,0x4027333333333333,
                                  0x4021333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3fe199999999999a;
            dVar3 = 8900.0;
            break;
        case 7:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 124.1,0x3fceb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 192.3,0x401c000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x408479999999999a,0x401999999999999a,0x4022666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x409fe00000000000,0x4016cccccccccccd,0x402199999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40ad9c0000000000,0x4027333333333333,0x4021333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 8800.0;
            uVar5 = 0x3fe3333333333333;
            break;
        case 8:
            uVar2 = FUN_1408d92a0(param_1,0x4049000000000000,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 108.0,0x4030000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 321.0,0x402e000000000000,
                                  0x4028000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1000.0;
            uVar8 = SUB84(dVar3,0);
            uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9680(uVar2,dVar3,0x3ff4cccccccccccd,0x401b99999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4850.0,0x3ff999999999999a,
                                  0x4021333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar9,uVar8),0x3ff0000000000000,0,param_4);
            FUN_1408d93b0(uVar2,0x40a9780000000000,param_4);
            return;
        case 9:
            uVar2 = FUN_1408d91c0(param_1,param_3 * 34.8,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 120.6,0x402099999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 265.2,0x402a666666666666,
                                  0xc02fcccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 503.9,0x4030000000000000,
                                  0xc0304ccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2190.0,0x4023000000000000,
                                  0xc02499999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 4670.0;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            goto LAB_1408dade5;
        case 10:
            uVar2 = FUN_1408d92a0(param_1,0x40515147ae147ae1,0x3fd0000000000000,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 81.0,0x4030000000000000,
                                  0x4030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 243.0,CONCAT44(uVar9,uVar8),
                                  0x4029b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 405.0,CONCAT44(uVar9,uVar8),
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 567.0,CONCAT44(uVar9,uVar8),
                                  0x402423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 729.0,CONCAT44(uVar9,uVar8),
                                  0x4022000000000000,param_4);
            uVar5 = 0x3fe28f5c28f5c28f;
            dVar3 = 1366.19;
            break;
        case 0xb:
            uVar2 = FUN_1408d92a0(param_1,0x4046000000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 80.40000000000001,0x4003333333333333
                    ,0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 224.9,0x402a000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 353.1,0x4030000000000000,
                                  0x4026cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 924.3,0x4030000000000000,
                                  0xc02d99999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40b20c0000000000,param_4);
            return;
        case 0xc:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 26.4,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 484.0,0x4012666666666666,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 925.0,0x4030000000000000,
                                  0x402c000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1270.0,0x401ecccccccccccd,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1700.0,0x4030000000000000,
                                  0x402c000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 7130.0;
            break;
        case 0xd:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 24.4,0x3ff6666666666666,param_4);
            uVar8 = 0;
            uVar9 = 0x40320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 161.2,0x4000000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 633.8,0x3ffe666666666666,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 803.1,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1340.0,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff199999999999a;
            dVar3 = 6890.0;
            break;
        case 0xe:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 24.4,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 156.8,0x4015333333333333,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 587.1,0x4020666666666666,
                                  0xc0304ccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 825.4,0x4030000000000000,
                                  0x402ecccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1040.0,0x4030000000000000,
                                  0xc02d99999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 7380.0;
            break;
        case 0xf:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 22.5,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 170.0,0x4000000000000000,
                                  0x4026cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 498.1,0x4000000000000000,
                                  0xc018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 921.1,0x4030000000000000,
                                  0x4023333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1140.0,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 4260.0;
            break;
        case 0x10:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 80.0,0x3fd999999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 120.0,0x4000000000000000,
                                  0x4004000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4076800000000000,0x4008000000000000,0xc00c000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 480.0,0x4014000000000000,
                                  0x3ff8000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1500.0,0x3ff0000000000000,
                                  0x3ff8000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 4000.0;
            uVar5 = 0x3fd999999999999a;
            break;
        case 0x11:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 80.0,0x3fe6666666666666,param_4);
            uVar8 = 0;
            uVar9 = 0x40200000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 120.0,0x4020000000000000,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 240.0,CONCAT44(uVar9,uVar8),0,
                                  param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 360.0,CONCAT44(uVar9,uVar8),0,
                                  param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 480.0,CONCAT44(uVar9,uVar8),0,
                                  param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 8000.0;
            uVar5 = 0x3fe6666666666666;
            break;
        case 0x12:
            uVar2 = FUN_1408d92a0(param_1,0x4046800000000000,0x3fe999999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4056800000000000,0x3ff0000000000000,0xc032800000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 254.0,0x401c000000000000,
                                  0x401799999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 760.0,0x4010cccccccccccd,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2190.0,0x401f333333333333,
                                  0x4031cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40ae000000000000,param_4);
            return;
        case 0x13:
            uVar2 = FUN_1408d91c0(param_1,0x404bf33333333333,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x4079000000000000,DAT_140c13360 * 0.4,0x4023333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 511.9,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 648.5,0x4030000000000000,
                                  0x4026cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2070.0,0x4007333333333333,
                                  0xc02499999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40add80000000000,param_4);
            return;
        case 0x14:
            uVar2 = FUN_1408d91c0(param_1,param_3 * 20.0,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 163.2,0x3ff8000000000000,
                                  0x402f333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 348.8,0x4023cccccccccccd,
                                  0xc030800000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 648.5,0x4030000000000000,
                                  0x4026cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1580.0,0x401999999999999a,
                                  0xc02499999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40add80000000000,param_4);
            return;
        case 0x15:
            uVar2 = FUN_1408d92a0(param_1,0x403bd9999999999a,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 43.43,0x40035c28f5c28f5c,
                                  0x4031ca3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1174.24,0x4011eb851eb851ec,0,param_4
            );
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2858.28,0x40227ae147ae147b,0,param_4
            );
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6148.1,0x4030000000000000,0,param_4)
                    ;
            uVar2 = FUN_1408d99a0(uVar2,0x407bb40000000000,DAT_140c13360 * 16.0,0xc02a051eb851eb85,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 9521.35;
            break;
        case 0x16:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 63.76,0x3fe6b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x406ec0a3d70a3d71,0x4012a3d70a3d70a4,0xc02edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4087295c28f5c28f,0x4028000000000000,0xc01128f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2539.58,0x401eeb851eb851ec,
                                  0x4029b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4225.42,0x40260a3d70a3d70a,
                                  0x4028dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9729.610000000001,0x4000000000000000
                    ,0,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 7141.38;
            uVar5 = 0x3fe851eb851eb852;
            break;
        case 0x17:
            uVar2 = FUN_1408d91c0(param_1,0x407b000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 424.0,0x4010666666666666,
                                  0x4029cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1310.0,0x4027000000000000,
                                  0x4028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2920.0,0x402899999999999a,
                                  0x40304ccccccccccd,param_4);
            uVar2 = FUN_1408d99a0(uVar2,0x40c01d0000000000,DAT_140c13360,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40b7700000000000,param_4);
            return;
        case 0x18:
            uVar2 = FUN_1408d92a0(param_1,0x404b800000000000,0x3fe0000000000000,param_4);
            uVar2 = FUN_1408d9900(uVar2,0x407a800000000000,DAT_140c13360 * 4.1,0xc02ccccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 474.0,0x401399999999999a,
                                  0x402d333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1360.0,0x4027666666666666,
                                  0x402d99999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2980.0,0x402e000000000000,
                                  0x4025cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3fd0000000000000;
            dVar3 = 2690.0;
            break;
        case 0x19:
            uVar2 = FUN_1408d91c0(param_1,0x4074b00000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,0x405bf33333333333,0x400999999999999a,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 400.0,0x400d99999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1750.0,0x4030000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3200.0,0x4030000000000000,
                                  0x4027333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40b6080000000000,param_4);
            return;
        case 0x1a:
            uVar2 = FUN_1408d91c0(param_1,0x4044000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 475.0,0x400ccccccccccccd,
                                  0x4032000000000000,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1070.0,0x4030000000000000,
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1430.0,CONCAT44(uVar9,uVar8),
                                  0x4020cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5710.0,CONCAT44(uVar9,uVar8),
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3fd0a3d70a3d70a4;
            dVar3 = 3840.0;
            break;
        case 0x1b:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 81.73999999999999,0x3fd7ae147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 285.39,0x400b851eb851eb85,
                                  0x4030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x407d5b3333333333,0x3ff23d70a3d70a3d,0xc02edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4083aa8f5c28f5c3,0x4027051eb851eb85,0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4079000000000000,0x4030000000000000,0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1305.08,0x401c51eb851eb852,
                                  0x402bdc28f5c28f5c,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 3738.69;
            uVar5 = 0x3fdae147ae147ae1;
            break;
        case 0x1c:
            uVar2 = FUN_1408d92a0(param_1,0x40532ccccccccccd,0x3fd3333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 200.9,0x400c000000000000,
                                  0x4020cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 400.0,0x400f333333333333,
                                  0xc012cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 610.5,0x4024cccccccccccd,
                                  0x4024333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1620.0,0x4004000000000000,
                                  0x401399999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3fe999999999999a;
            dVar3 = 5230.0;
            break;
        case 0x1d:
            uVar2 = FUN_1408d91c0(param_1,0x405c79999999999a,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 163.9,0x4016000000000000,
                                  0xc01c000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 298.0,0x4028000000000000,
                                  0xc02d333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 554.7,0x4024000000000000,
                                  0x402a333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 861.8,0x4022000000000000,
                                  0x401ecccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3fe0cccccccccccd;
            dVar3 = 3710.0;
            break;
        case 0x1e:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 307.56,0x3fe999999999999a,param_4);
            uVar2 = FUN_1408d92a0(uVar2,0x406388a3d70a3d71,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 346.32,0x401c70a3d70a3d71,
                                  0x402cb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 626.35,0x4023cccccccccccd,
                                  0x402423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3831.73,0x400428f5c28f5c29,
                                  0x4024947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2015.77,0x4011333333333333,
                                  0xc025000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40a5e851eb851eb8,param_4);
            return;
        case 0x1f:
            uVar2 = FUN_1408d91c0(param_1,0x4060000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 169.0,0x400a666666666666,
                                  0xc014666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 229.0,0x4014000000000000,
                                  0x402e333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1860.0,0x4012cccccccccccd,
                                  0xc018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1320.0,0x4030000000000000,
                                  0x4023333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 6210.0;
            break;
        case 0x20:
            uVar2 = FUN_1408d91c0(param_1,0x4076633333333333,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 258.3,0x402f666666666666,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 290.0,0x4028000000000000,
                                  0x4029cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 439.4,0x4030000000000000,
                                  0xc02d333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3030.0,0x402f99999999999a,
                                  0xc022666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40b0540000000000,param_4);
            return;
        case 0x21:
            uVar2 = FUN_1408d92a0(param_1,0x4047800000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9900(uVar2,0x407181999999999a,DAT_140c13360 * 0.4,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 240.0,0x4018000000000000,
                                  0xc018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 946.7,0x4030000000000000,
                                  0x4030666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3000.0,0x401ccccccccccccd,
                                  0x4030b33333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40a8740000000000,param_4);
            return;
        case 0x22:
            uVar2 = FUN_1408d92a0(param_1,0x4063866666666666,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 308.8,0x4020cccccccccccd,
                                  0x401c000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 617.9,0x401a000000000000,
                                  0x402ccccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 896.2,0x4030000000000000,
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2730.0,0x4008000000000000,
                                  0x4020333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff7333333333333;
            dVar3 = 10000.0;
            break;
        case 0x23:
            uVar2 = FUN_1408d91c0(param_1,0x40728b3333333333,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 440.0,0x4023333333333333,
                                  0x402b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1910.0,0x4008cccccccccccd,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3530.0,0x402699999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40caf40000000000,0x4028000000000000,0xc028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2630.0;
            uVar5 = 0x3fe4cccccccccccd;
            break;
        case 0x24:
            uVar2 = FUN_1408d91c0(param_1,0x40728b3333333333,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 922.0,0x4023333333333333,
                                  0xc023333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4099500000000000,0x4008cccccccccccd,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3730.0,0x402699999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b7c00000000000,0x4028000000000000,0xc024cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1870.0;
            uVar5 = 0x3fe4cccccccccccd;
            break;
        case 0x25:
            uVar2 = FUN_1408d91c0(param_1,0x405d99999999999a,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 116.5,0x4018000000000000,
                                  0xc033000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 218.9,0x4030000000000000,
                                  0xc022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 290.0,0x402f666666666666,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2135.0,0x4015333333333333,
                                  0x402fcccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff999999999999a;
            dVar3 = 6020.0;
            break;
        case 0x26:
            uVar2 = FUN_1408d92a0(param_1,0x40a4b1ae147ae148,0x3fe6147ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 861.92,0x4028000000000000,
                                  0x4012000000000000,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2188.54,0x4030000000000000,
                                  0x400d1eb851eb851f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3433.32,CONCAT44(uVar9,uVar8),
                                  0x401d28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5712.44,CONCAT44(uVar9,uVar8),
                                  0xc02647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 12115.28,0x401a000000000000,
                                  0x401a8f5c28f5c28f,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 3237.88;
            break;
        case 0x27:
            uVar2 = FUN_1408d91c0(param_1,0x40a0243d70a3d70a,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 397.19,0x402c0f5c28f5c28f,
                                  0x402723d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1765.29,0x4022e66666666666,
                                  0x402a23d70a3d70a4,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2085.01,0x4030000000000000,
                                  0x40304a3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3684.22,CONCAT44(uVar9,uVar8),
                                  0xc03011eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9653.49,CONCAT44(uVar9,uVar8),
                                  0x402b6b851eb851ec,param_4);
            uVar5 = 0x3fe3333333333333;
            dVar3 = 2103.23;
            break;
        case 0x28:
            uVar2 = FUN_1408d91c0(param_1,0x4047000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x405bcccccccccccd,DAT_140c13360 * 2.0,0xc02f333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 272.0,0x401399999999999a,
                                  0x4017333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 562.3,0x4016000000000000,
                                  0xc02a333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1810.0,0x401799999999999a,
                                  0xc023cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 3130.0;
            break;
        case 0x29:
            uVar2 = FUN_1408d91c0(param_1,0x40be5d947ae147ae,param_4,pcVar1,param_7);
            uVar10 = 0;
            uVar11 = 0x40300000;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 4000.0;
            uVar8 = SUB84(dVar3,0);
            uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9680(uVar2,dVar3,0x4030000000000000,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x406e870a3d70a3d7,0x4012b851eb851eb8,0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x409a4da3d70a3d71,0x3ffc7ae147ae147b,0xc025dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar9,uVar8),CONCAT44(uVar11,uVar10),0x4032000000000000,
                                  param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5108.97,CONCAT44(uVar11,uVar10),
                                  0x402d23d70a3d70a4,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 11813.7;
            uVar5 = 0x3feb333333333333;
            break;
        case 0x2a:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 145.96,0x3fd47ae147ae147b,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4073700000000000,0x402e9eb851eb851f,0x402a947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x407dfe6666666666,0x4030000000000000,0x4025cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 792.27,0x401f000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2040.0,0x402ac7ae147ae148,
                                  0x402b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4480.75,0x402ad70a3d70a3d7,
                                  0x402a23d70a3d70a4,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 5356.3;
            break;
        case 0x2b:
            uVar2 = FUN_1408d92a0(param_1,0x404e400000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 306.5,0x3fd999999999999a,
                                  0x4025cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1770.0,0x400d99999999999a,
                                  0xc029333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6630.0,0x402199999999999a,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 9060.0,0x3ff0000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff0000000000000;
            dVar3 = 9080.0;
            break;
        case 0x2c:
            uVar2 = FUN_1408d92a0(param_1,0x4035000000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 80.0,0x401f99999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 160.0,0x402e000000000000,
                                  0x403019999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 240.0,0x4030000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1270.0,0x400ccccccccccccd,
                                  0x402a333333333333,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 6210.0;
            break;
        case 0x2d:
            uVar2 = FUN_1408d91c0(param_1,0x4036800000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 42.1,0x400b333333333333,
                                  0x4030e66666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 175.7,0x402ecccccccccccd,
                                  0x40304ccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 179.4,0x401a666666666666,
                                  0x4023cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1710.0,0x4002666666666666,
                                  0xc02499999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            FUN_1408d93b0(uVar2,0x40b6a80000000000,param_4);
            return;
        case 0x2e:
            uVar2 = FUN_1408d92a0(param_1,0x403c800000000000,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 130.0,0x4012666666666666,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 311.3,0x4008cccccccccccd,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 165.0,0x4028000000000000,
                                  0x4027cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1190.0,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 7630.0;
            break;
        case 0x2f:
            uVar2 = FUN_1408d92a0(param_1,0x404e333333333333,0x3ff6666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 300.0,0x4026000000000000,
                                  0xc028666666666666,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 727.0,0x3fd999999999999a,
                                  0xc028cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3890.0,0x4015333333333333,
                                  0x402a99999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8930.0,0x4025000000000000,
                                  0x401599999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff6666666666666;
            dVar3 = 11800.0;
            break;
        case 0x30:
            uVar2 = FUN_1408d92a0(param_1,0x40546f5c28f5c28f,0x3ff1c28f5c28f5c3,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4000.0,0x401a000000000000,
                                  0x4023b851eb851eb8,param_4);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1133.55,0x401c8f5c28f5c28f,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1146.9,0x3ff7851eb851eb85,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4859.41,0x402351eb851eb852,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8961.5,0x4030000000000000,
                                  0xc0226b851eb851ec,param_4);
            uVar5 = 0x3fe3333333333333;
            dVar3 = 8860.73;
            break;
        case 0x31:
            uVar2 = FUN_1408d91c0(param_1,0x405eeb851eb851ec,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,0x406defae147ae148,0x3fd999999999999a,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1737.78,0x4021947ae147ae14,
                                  0x40315c28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2993.58,0x402f4ccccccccccd,
                                  0x402d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9323.870000000001,0x401dae147ae147ae
                    ,0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3101.03,0x402b70a3d70a3d71,
                                  0x4029b851eb851eb8,param_4);
            FUN_1408d93b0(uVar2,0x408bbb70a3d70a3d,param_4);
            return;
        case 0x32:
            uVar2 = FUN_1408d92a0(param_1,0x40524ccccccccccd,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 515.96,0x4003851eb851eb85,
                                  0xc031ca3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2878.74,0x4006147ae147ae14,
                                  0xc01b70a3d70a3d71,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5179.47,0x4030000000000000,
                                  0xc0286b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6202.06,CONCAT44(uVar9,uVar8),
                                  0x401fb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9466.52,CONCAT44(uVar9,uVar8),
                                  0xc019b851eb851eb8,param_4);
            FUN_1408d93b0(uVar2,0x40a94bc28f5c28f6,param_4);
            return;
        case 0x33:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 902.59,0x3feccccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 831.3,0x4000000000000000,
                                  0x401570a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1230.71,0x4024c28f5c28f5c3,
                                  0xc022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3831.19,0x402923d70a3d70a4,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b6ef3333333333,0x402c3d70a3d70a3d,0x402a23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40a623c28f5c28f6,0x4030000000000000,0x40256b851eb851ec,param_4);
            uVar5 = 0x3fe6b851eb851eb8;
            dVar3 = 2609.6;
            break;
        case 0x34:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 572.37,0x3fe947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40a7c1f0a3d70a3d,0x4026851eb851eb85,0x4020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 935.64,0x400947ae147ae148,
                                  0x401647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1211.53,0x4000000000000000,
                                  0xc01128f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3535.81,0x4030000000000000,
                                  0xc02fb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b20835c28f5c29,0x4030000000000000,0x402347ae147ae148,param_4);
            uVar5 = 0x3fe70a3d70a3d70a;
            dVar3 = 2180.22;
            break;
        case 0x35:
            uVar2 = FUN_1408d91c0(param_1,0x4034000000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3212.34,0x401a99999999999a,
                                  0xc00651eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4352.1,0x4017d70a3d70a3d7,
                                  0x4024947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7530.09,0x402f4ccccccccccd,
                                  0x4022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9448.32,0x4030000000000000,
                                  0xc02123d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10857.11,0x4030000000000000,
                                  0x4027947ae147ae14,param_4);
            FUN_1408d93b0(uVar2,0x40c8cb3eb851eb85,param_4);
            return;
        case 0x36:
            uVar2 = FUN_1408d92a0(param_1,0x408c34b851eb851f,0x3fe5c28f5c28f5c3,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 902.59,0x3fe5c28f5c28f5c3,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1622.29,0x401d0a3d70a3d70a,
                                  0x4024947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4893.62,0x401b333333333333,
                                  0xc02f47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3930.09,0x402c0f5c28f5c28f,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2609.6,0x3fdd70a3d70a3d71,param_4);
            uVar5 = 0x3fdd70a3d70a3d71;
            dVar3 = 2609.6;
            break;
        case 0x37:
            uVar2 = FUN_1408d92a0(param_1,0x406b9a8f5c28f5c3,0x3fe0000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 484.61,0x4017d70a3d70a3d7,
                                  0x402c47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1520.49,0x401170a3d70a3d71,
                                  0x402423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2600.86,0x401bcccccccccccd,
                                  0x402a947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4325.49,0x40208f5c28f5c28f,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40bdf9cf5c28f5c3,0x3fd0000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 7673.81;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            goto LAB_1408dade5;
        case 0x38:
            uVar2 = FUN_1408d91c0(param_1,0x406b9a8f5c28f5c3,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 183.1,0x4020eb851eb851ec,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 627.52,0x4007333333333333,
                                  0x401728f5c28f5c29,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1761.36,0x4030000000000000,
                                  0xc02d947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4780.82,CONCAT44(uVar9,uVar8),
                                  0x402723d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6576.85,CONCAT44(uVar9,uVar8),
                                  0x402947ae147ae148,param_4);
            uVar5 = 0x3fdb851eb851eb85;
            dVar3 = 11813.7;
            break;
        case 0x39:
            uVar2 = FUN_1408d91c0(param_1,0x4060cb851eb851ec,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 60.0,0x40208f5c28f5c28f,
                                  0xc018d70a3d70a3d7,param_4);
            uVar8 = 0;
            uVar9 = 0x40320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 209.21,0x400ca3d70a3d70a4,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 393.77,0x4010c28f5c28f5c3,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x4010c28f5c28f5c3,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4816.96,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar5 = 0x3fdb851eb851eb85;
            dVar3 = 10231.23;
            break;
        case 0x3a:
            uVar2 = FUN_1408d91c0(param_1,0x4063d1eb851eb852,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 57.12,0x400f5c28f5c28f5c,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 348.77,0x4001c28f5c28f5c3,
                                  0x4020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2231.77,0x4014e147ae147ae1,
                                  0x4027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4660.21,0x4030000000000000,
                                  0xc01b70a3d70a3d71,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 13257.41;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar7 = 0x4028000000000000;
            uVar5 = 0x4030000000000000;
            goto LAB_1408ddde4;
        case 0x3b:
            uVar2 = FUN_1408d92a0(param_1,0x407338f5c28f5c29,0x3fe4cccccccccccd,param_4);
            uVar2 = FUN_1408d91c0(uVar2,(double)CONCAT44(uVar6,uVar4) * 307.56,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4300.0,0x4030000000000000,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5526.33,CONCAT44(uVar9,uVar8),
                                  0xc025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9941.65,CONCAT44(uVar9,uVar8),
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 7673.81,0x3fef5c28f5c28f5c,param_4);
            uVar5 = 0x3fef5c28f5c28f5c;
            dVar3 = 7673.81;
            break;
        case 0x3c:
            uVar2 = FUN_1408d92a0(param_1,0x4076af5c28f5c28f,0x3ff68f5c28f5c28f,param_4);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9680(uVar2,0x404c8f5c28f5c28f,0x3fd999999999999a,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 223.18,0x400af5c28f5c28f6,
                                  0xc0226b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3fd999999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5000.0,0x4020eb851eb851ec,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8000.0,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar5 = 0x3ff5eb851eb851ec;
            dVar3 = 4638.81;
            break;
        case 0x3d:
            uVar8 = 0x28f5c28f;
            uVar9 = 0x3ff68f5c;
            uVar2 = FUN_1408d92a0(param_1,param_3 * 58.69,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 57.12,0x400f5c28f5c28f5c,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 113.36,0x3ff6e147ae147ae1,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 346.04,0x4009333333333333,
                                  0x402d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5802.88,0x4030000000000000,
                                  0x4012d70a3d70a3d7,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 8860.73;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9480(uVar2,dVar3,CONCAT44(uVar9,uVar8),param_4);
            uVar5 = CONCAT44(uVar9,uVar8);
            dVar3 = (double)CONCAT44(uVar6,uVar4);
            break;
        case 0x3e:
            uVar2 = FUN_1408d92a0(param_1,0x405c766666666666,0x3fe70a3d70a3d70a,param_4);
            uVar8 = 0x70a3d70a;
            uVar9 = 0x40278a3d;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 339.34,0x40278a3d70a3d70a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 697.48,0x40125c28f5c28f5c,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2316.84,0x4030000000000000,
                                  0xc0148f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3720.43,CONCAT44(uVar9,uVar8),
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9977.200000000001,
                                  CONCAT44(uVar9,uVar8),0xc032000000000000,param_4);
            uVar5 = 0x3fe4cccccccccccd;
            dVar3 = 3013.23;
            break;
        case 0x3f:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 260.61,0x3fe7ae147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2651.48,0x4024c28f5c28f5c3,
                                  0x401c47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 255.17,0x40150a3d70a3d70a,
                                  0x400b70a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x408e67ae147ae148,0x3ff170a3d70a3d71,0xc028dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4111.16,0x401e851eb851eb85,
                                  0x400ee147ae147ae1,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8961.5,0x40157ae147ae147b,
                                  0x4012000000000000,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 6411.18;
            break;
        case 0x40:
            uVar2 = FUN_1408d92a0(param_1,0x406968f5c28f5c29,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 40.0,DAT_140c13360 * 2.0,
                                  0x401d28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 885.72,0x40113d70a3d70a3d,
                                  0xc013b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x408f400000000000,0x3fd999999999999a,0xc028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2442.16,0x401a333333333333,
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4079.0,0x4017d70a3d70a3d7,
                                  0x401647ae147ae148,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 12694.49;
            break;
        case 0x41:
            uVar8 = 0x28f5c28f;
            uVar9 = 0x3ff68f5c;
            uVar2 = FUN_1408d92a0(param_1,0x4034000000000000,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 20.0,CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 120.69,0x402df5c28f5c28f6,
                                  0xc028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 582.53,0x402df5c28f5c28f6,
                                  0xc01647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4125.69,0x4030000000000000,
                                  0x401128f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7057.47,0x401a99999999999a,
                                  0x400d1eb851eb851f,param_4);
            dVar3 = 18187.0;
            uVar5 = CONCAT44(uVar9,uVar8);
            break;
        case 0x42:
            uVar2 = FUN_1408d91c0(param_1,0x4084408f5c28f5c3,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 91.75,0x4014e147ae147ae1,
                                  0x402047ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 348.77,0x401b5c28f5c28f5c,
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 275.73,0x40258f5c28f5c28f,
                                  0x4024947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40989c3d70a3d70a,0x3ff599999999999a,0xc02947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8254.040000000001,0x40204ccccccccccd
                    ,0x4022dc28f5c28f5c,param_4);
            FUN_1408d93b0(uVar2,0x40b4ec4ccccccccd,param_4);
            return;
        case 0x43:
            uVar2 = FUN_1408d92a0(param_1,0x4052d00000000000,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x405d5ae147ae147b,0x3ff0f5c28f5c28f6,0xc01c47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 259.49,0x401047ae147ae148,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40733ae147ae147b,0x3fd999999999999a,0xc02bdc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5407.7,0x4030000000000000,
                                  0x3ff8000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8254.040000000001,0x4030000000000000
                    ,0x4018000000000000,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 7141.38;
            break;
        case 0x44:
            uVar2 = FUN_1408d92a0(param_1,0x4052d00000000000,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d91c0(uVar2,(double)CONCAT44(uVar6,uVar4) * 75.25,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 84.51000000000001,0x402df5c28f5c28f6
                    ,0xc013b851eb851eb8,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 480.82,0x4030000000000000,
                                  0xc022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3187.21,CONCAT44(uVar9,uVar8),
                                  0x401eeb851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4682.28,CONCAT44(uVar9,uVar8),
                                  0x401570a3d70a3d71,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 14657.96;
            break;
        case 0x45:
            uVar2 = FUN_1408d91c0(param_1,0x407338f5c28f5c29,param_4,pcVar1,param_7);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 311.3,0x4030000000000000,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 500.0,CONCAT44(uVar9,uVar8),
                                  0xc022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2700.0,CONCAT44(uVar9,uVar8),
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4328.96,0x4020333333333333,
                                  0x402cb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10000.0,CONCAT44(uVar9,uVar8),0,
                                  param_4);
            FUN_1408d93b0(uVar2,0x40ab2e947ae147ae,param_4);
            return;
        case 0x46:
            uVar2 = FUN_1408d91c0(param_1,0x4074e1c28f5c28f6,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 145.07,0x3ff5eb851eb851ec,
                                  0x4022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 719.63,0x40227ae147ae147b,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 556.99,0x3feeb851eb851eb8,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5183.97,0x3fd999999999999a,
                                  0xc02947ae147ae148,param_4);
            goto LAB_1408e44a7;
        case 0x47:
            uVar2 = FUN_1408d91c0(param_1,0x409b5b0000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1387.96,0x4022147ae147ae14,
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 224.94,0x3ff599999999999a,
                                  0x4030ee147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 291.26,0x3ffc000000000000,
                                  0x402b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5161.48,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7196.86,0x40242e147ae147ae,
                                  0x4032000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40a94bc28f5c28f6,param_4);
            return;
        case 0x48:
            uVar2 = FUN_1408d92a0(param_1,0x4060cb851eb851ec,0x3ff07ae147ae147b,param_4);
            uVar2 = FUN_1408d91c0(uVar2,(double)CONCAT44(uVar6,uVar4) * 134.36,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 475.23,0x4030000000000000,
                                  0xc028dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 632.46,0x4030000000000000,
                                  0xc02e6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2778.99,0x40138f5c28f5c28f,
                                  0xc020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 12694.49,0x3fedc28f5c28f5c3,param_4)
                    ;
            uVar5 = 0x3fedc28f5c28f5c3;
            dVar3 = 12694.49;
            break;
        case 0x49:
            uVar2 = FUN_1408d92a0(param_1,0x4034000000000000,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 46.24,0x3ff199999999999a,
                                  0x400b70a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 133.62,0x3ff70a3d70a3d70a,
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar2 = FUN_1408d9480(uVar2,0x4076a1c28f5c28f6,0x3ff69fbe76c8b439,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 66.66;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9480(uVar2,dVar3,0x3ff0000000000000,param_4);
            uVar5 = 0x3ff0000000000000;
            dVar3 = (double)CONCAT44(uVar6,uVar4);
            break;
        case 0x4a:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 505.5,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 106.68,0x401999999999999a,
                                  0x400651eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 536.34,0x401a000000000000,
                                  0x4022dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 221.43,0x401651eb851eb852,
                                  0x4027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x409ab83d70a3d70a,0x4010c28f5c28f5c3,0xc02047ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6275.08,0x400c51eb851eb852,
                                  0x4022000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40a5a58000000000,param_4);
            return;
        case 0x4b:
            uVar2 = FUN_1408d92a0(param_1,0x404d5851eb851eb8,0x3fe5c28f5c28f5c3,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 106.68,0x401999999999999a,
                                  0x4019b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 443.91,0x4000000000000000,
                                  0x401fb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 221.43,0x401651eb851eb852,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1710.06,0x4010c28f5c28f5c3,
                                  0xc027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6275.08,0x400c51eb851eb852,
                                  0x401e000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40a5a58000000000,param_4);
            return;
        case 0x4c:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 30.26,0x3febd70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 93.02,0x4006b851eb851eb8,
                                  0x4019b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 443.91,0x401b5c28f5c28f5c,
                                  0x401a8f5c28f5c28f,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1000.0;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9680(uVar2,dVar3,0x3ff0000000000000,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar6,uVar4),0x3ff0000000000000,0,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x4066cdc28f5c28f6,0x3ff68f5c28f5c28f,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 182.43;
            break;
        case 0x4d:
            uVar2 = FUN_1408d92a0(param_1,0x4065880000000000,0x3fe3d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 92.76000000000001,0x3ff87ae147ae147b
                    ,0x401728f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3816.47,0x3ffe666666666666,
                                  0x401728f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3fd999999999999a,
                                  0xc02b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2188.54,0x401c99999999999a,
                                  0xc02d23d70a3d70a4,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 4565.87;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar7 = 0x4022d1eb851eb852;
            uVar5 = 0x4018000000000000;
            goto LAB_1408df04f;
        case 0x4e:
            uVar2 = FUN_1408d92a0(param_1,0x4059900000000000,0x3fe3d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40565147ae147ae1,0x3ffa8f5c28f5c28f,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 137.63,0x3ffd99999999999a,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x409fd13d70a3d70a,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x409fd13d70a3d70a,0x3ff69fbe76c8b439,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2609.6;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9480(uVar2,dVar3,0x3fd0000000000000,param_4);
            uVar5 = 0x3fd0000000000000;
            dVar3 = (double)CONCAT44(uVar6,uVar4);
            break;
        case 0x4f:
            uVar2 = FUN_1408d91c0(param_1,0x4095566666666666,param_4,pcVar1,param_7);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9680(uVar2,0x4069e5c28f5c28f6,0x4015d70a3d70a3d7,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4031.54,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4811.66,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5521.95,0x4026000000000000,
                                  0xc021947ae147ae14,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a5e851eb851eb8,0x3fe147ae147ae148,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2804.16;
            uVar5 = 0x3fe147ae147ae148;
            break;
        case 0x50:
            uVar2 = FUN_1408d9680(param_1,0x405e847ae147ae14,0x3ffbd70a3d70a3d7,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 188.6,0x4006147ae147ae14,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1437.78,0x3ff3333333333333,
                                  0x40304a3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1974.23,0x401dae147ae147ae,
                                  0x401647ae147ae148,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 894.75,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a5e851eb851eb8,0x3fe3d70a3d70a3d7,param_4);
            uVar5 = 0x3fe3d70a3d70a3d7;
            dVar3 = 2804.16;
            break;
        case 0x51:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 745.52,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4060d570a3d70a3d,0x40100a3d70a3d70a,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 479.04,0x400f5c28f5c28f5c,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 765.39,0x40100a3d70a3d70a,
                                  0xc025000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 872.9400000000001,0x3ff69fbe76c8b439
                    ,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a5e851eb851eb8,0x3fdc28f5c28f5c29,param_4);
            uVar5 = 0x3fdc28f5c28f5c29;
            dVar3 = 2804.16;
            break;
        case 0x52:
            uVar8 = 0x76c8b439;
            uVar9 = 0x3ff69fbe;
            uVar2 = FUN_1408d92a0(param_1,param_3 * 1919.43,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 306.49,0x40028f5c28f5c28f,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 630.11,0x3ffbd70a3d70a3d7,
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a5d5851eb851ec,CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a5d5851eb851ec,CONCAT44(uVar9,uVar8),param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2609.6;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9480(uVar2,dVar3,0x3fdc28f5c28f5c29,param_4);
            uVar5 = 0x3fdc28f5c28f5c29;
            dVar3 = (double)CONCAT44(uVar6,uVar4);
            break;
        case 0x53:
            param_3 = param_3 * 362.96;
            uVar8 = SUB84(param_3,0);
            uVar9 = (undefined4)((ulonglong)param_3 >> 0x20);
            uVar2 = FUN_1408d92a0(param_1,param_3,0x3fd70a3d70a3d70a,param_4);
            uVar2 = FUN_1408d92a0(uVar2,CONCAT44(uVar9,uVar8),0x3fd70a3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 620.21,0x40100a3d70a3d70a,
                                  0x4018d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40af400000000000,0x4020eb851eb851ec,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b5b5fae147ae14,0x4010666666666666,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 3013.23,0x3fd0a3d70a3d70a4,param_4);
            uVar5 = 0x3fd0a3d70a3d70a4;
            dVar3 = 3013.23;
            break;
        case 0x54:
            uVar2 = FUN_1408d92a0(param_1,0x4099715c28f5c28f,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 306.49,0x40028f5c28f5c28f,
                                  0x4030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 667.45,0x3ffbd70a3d70a3d7,
                                  0x401c47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1974.23,0x400d5c28f5c28f5c,
                                  0x401647ae147ae148,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a05f8a3d70a3d7,0x3ff69fbe76c8b439,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2609.6;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9480(uVar2,dVar3,0x3fdc28f5c28f5c29,param_4);
            uVar5 = 0x3fdc28f5c28f5c29;
            dVar3 = (double)CONCAT44(uVar6,uVar4);
            break;
        case 0x55:
            uVar2 = FUN_1408d92a0(param_1,0x407ac570a3d70a3d,0x3ff0cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1060.0,0x401199999999999a,
                                  0xc020cccccccccccd,param_4);
            uVar10 = 0;
            uVar11 = 0xc0320000;
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4924.22,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4234.48,CONCAT44(uVar9,uVar8),
                                  CONCAT44(uVar11,uVar10),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5802.88,CONCAT44(uVar9,uVar8),
                                  CONCAT44(uVar11,uVar10),param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 3237.88,0x3fd0000000000000,param_4);
            uVar5 = 0x3fd0000000000000;
            dVar3 = 3237.88;
            break;
        case 0x56:
            uVar8 = 0x76c8b439;
            uVar9 = 0x3ff69fbe;
            uVar2 = FUN_1408d92a0(param_1,0x408dd0f5c28f5c29,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2627.82,0x4014000000000000,
                                  0x402f47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3146.15,0x4020333333333333,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2794.76,CONCAT44(uVar9,uVar8),
                                  param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a5d5851eb851ec,CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2609.6,0x3ff68f5c28f5c28f,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 2609.6;
            break;
        case 0x57:
            uVar2 = FUN_1408d92a0(param_1,0x4087e68f5c28f5c3,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 141.15,0x4018851eb851eb85,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2755.21,0x400c28f5c28f5c29,
                                  0x400ccccccccccccd,param_4);
            uVar2 = FUN_1408d99a0(uVar2,0x40bce4dc28f5c28f,DAT_140c13360 * 16.0,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a536eb851eb852,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a536eb851eb852,0x3ff69fbe76c8b439,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2609.6;
            uVar5 = 0x3fdd70a3d70a3d71;
            break;
        case 0x58:
            uVar2 = FUN_1408d92a0(param_1,0x406b9a8f5c28f5c3,0x3ff68f5c28f5c28f,param_4);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 142.26,0x4009333333333333,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2559.6,0x400d5c28f5c28f5c,
                                  0x402723d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3863.23,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar5 = 0x40155c28f5c28f5c;
            uVar7 = CONCAT44(uVar9,uVar8);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 5370.08;
            goto LAB_1408dfa1c;
        case 0x59:
            uVar2 = FUN_1408d92a0(param_1,0x407d1547ae147ae1,0x3fea3d70a3d70a3d,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 142.26,0x4009333333333333,
                                  0xc022dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1400.45,0x40185c28f5c28f5c,
                                  0x402347ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3863.23,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar7 = 0xc02fb851eb851eb8;
            uVar5 = 0x401c666666666666;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 5672.71;
        LAB_1408dfa1c:
            uVar2 = FUN_1408d9680(uVar2,dVar3,uVar5,uVar7,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a1a8147ae147ae,0x3fd0000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2260.04;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            goto LAB_1408dade5;
        case 0x5a:
            uVar2 = FUN_1408d92a0(param_1,0x407d1547ae147ae1,0x3fd7ae147ae147ae,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 465.33,0x3fd7ae147ae147ae,param_4);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 138.42,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4172.44,0x4017d70a3d70a3d7,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5964.15,0x40051eb851eb851f,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 3237.88,0x3fd3d70a3d70a3d7,param_4);
            uVar5 = 0x3fd3d70a3d70a3d7;
            dVar3 = 3237.88;
            break;
        case 0x5b:
            uVar2 = FUN_1408d92a0(param_1,0x4095566666666666,0x3fe199999999999a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3786.61,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4377.09,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5224.07,0x40260a3d70a3d70a,
                                  0xc0286b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6690.0,0x4026000000000000,
                                  0xc02edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2804.16,0x3fd0000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40a5e851eb851eb8,param_4);
            return;
        case 0x5c:
            uVar2 = FUN_1408d92a0(param_1,0x409214999999999a,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 110.29,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 733.09,0x3ff6666666666666,
                                  0x401eae147ae147ae,param_4);
            uVar2 = FUN_1408d99a0(uVar2,0x40bce4dc28f5c28f,DAT_140c13360 * 16.0,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40ac4a428f5c28f6,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40ac4a428f5c28f6,0x3ff69fbe76c8b439,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2609.6;
            uVar5 = 0x3feb851eb851eb85;
            break;
        case 0x5d:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 334.11,0x3fd47ae147ae147b,param_4);
            uVar10 = 0x76c8b439;
            uVar11 = 0x3ff69fbe;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 245.65;
            uVar8 = SUB84(dVar3,0);
            uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d92a0(uVar2,dVar3,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d92a0(uVar2,CONCAT44(uVar9,uVar8),CONCAT44(uVar11,uVar10),param_4);
            uVar2 = FUN_1408d9680(uVar2,0x407cac28f5c28f5c,0x3ffb851eb851eb85,0x401ed70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a6017ae147ae14,CONCAT44(uVar11,uVar10),param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a6017ae147ae14,CONCAT44(uVar11,uVar10),param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2314.86;
            uVar5 = 0x3fe0f5c28f5c28f6;
            break;
        case 0x5e:
            uVar2 = FUN_1408d9680(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4054000000000000,0x4030000000000000,0xc032000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 250.0;
            uVar8 = SUB84(dVar3,0);
            uVar9 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9680(uVar2,dVar3,0x40100a3d70a3d70a,0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar9,uVar8),0x40100a3d70a3d70a,0x40226b851eb851ec,param_4)
                    ;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5000.0,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 3013.23,0x3fd0000000000000,param_4);
            uVar5 = 0x3fd0000000000000;
            dVar3 = 3013.23;
            break;
        case 0x5f:
            uVar2 = FUN_1408d91c0(param_1,0x4081293333333333,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x4081d9eb851eb852,DAT_140c13360 * 16.0,0xc01570a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 208.81,0x4009333333333333,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 980.63,0x3ffe666666666666,
                                  0x4024947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3970.59,0x40260a3d70a3d70a,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7063.64,0x40035c28f5c28f5c,
                                  0xc022000000000000,param_4);
            uVar5 = 0x3fd70a3d70a3d70a;
            dVar3 = 2260.04;
            break;
        case 0x60:
            uVar2 = FUN_1408d92a0(param_1,0x407049c28f5c28f6,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9900(uVar2,0x4069000000000000,DAT_140c13360 * 9.039999999999999,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 400.0,0x400b70a3d70a3d71,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 180.0,0x4030000000000000,
                                  0xc022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4143.58,0x4014d70a3d70a3d7,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2428.54,0x3fd0000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40a2f9147ae147ae,param_4);
            return;
        case 0x61:
            uVar2 = FUN_1408d92a0(param_1,0x407338f5c28f5c29,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2000.0,0x401f333333333333,
                                  0x402799999999999a,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4730.0,0x4030000000000000,
                                  0x40271eb851eb851f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b3880000000000,CONCAT44(uVar9,uVar8),0xc025dc28f5c28f5c,param_4)
                    ;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6399.01,CONCAT44(uVar9,uVar8),
                                  0x401ed70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40c3880000000000,CONCAT44(uVar9,uVar8),0xc024947ae147ae14,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 12694.49;
            uVar5 = 0x3fdd70a3d70a3d71;
            break;
        case 0x62:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 195.03,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d91c0(uVar2,0x406860f5c28f5c29,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 674.8,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1339.06,0x3ff2666666666666,
                                  0x402123d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5029.73,CONCAT44(uVar9,uVar8),
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8699.309999999999,
                                  CONCAT44(uVar9,uVar8),0,param_4);
            uVar5 = 0x3fd8f5c28f5c28f6;
            dVar3 = 2804.16;
            break;
        case 99:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 362.96,0x3fe7ae147ae147ae,param_4);
            uVar2 = FUN_1408d91c0(uVar2,0x4076af5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 616.67,0x401170a3d70a3d71,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1160.0,0x40214ccccccccccd,
                                  0x4022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2180.0,0x401c666666666666,
                                  0x40304ccccccccccd,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 3738.69,0x3fd0a3d70a3d70a4,param_4);
            uVar5 = 0x3fd0a3d70a3d70a4;
            dVar3 = 3738.69;
            break;
        case 100:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 526.88,0x3fed70a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4074775c28f5c28f,0x4010666666666666,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 533.41,0x40035c28f5c28f5c,
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 883.95,0x4015d70a3d70a3d7,
                                  0x4020d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3076.77,0x401fae147ae147ae,
                                  0x402d947ae147ae14,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 1957.3,0x3fea8f5c28f5c28f,param_4);
            uVar5 = 0x3fea8f5c28f5c28f;
            dVar3 = 1957.3;
            break;
        case 0x65:
            uVar2 = FUN_1408d92a0(param_1,0x4080ecf5c28f5c29,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 494.0,0x401d0a3d70a3d70a,
                                  0x401928f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 530.88,0x401251eb851eb852,
                                  0x4030800000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1418.2,0x3fd999999999999a,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1606.77,0x40214ccccccccccd,
                                  0x40256b851eb851ec,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 1695.11,0x3fe3d70a3d70a3d7,param_4);
            uVar5 = 0x3fe3d70a3d70a3d7;
            dVar3 = 1695.11;
            break;
        case 0x66:
            uVar2 = FUN_1408d91c0(param_1,0x407d1547ae147ae1,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 300.0,0x3ffdeb851eb851ec,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 99.62,0x4030000000000000,
                                  0xc03191eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 627.51,0x400799999999999a,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3742.55,0x401fae147ae147ae,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2609.6,0x3fd7ae147ae147ae,param_4);
            uVar5 = 0x3fd7ae147ae147ae;
            dVar3 = 2609.6;
            break;
        case 0x67:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 465.33,0x3fd28f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9900(uVar2,0x406753d70a3d70a4,DAT_140c13360 * 14.65,0xc0226b851eb851ec,param_4)
                    ;
            uVar2 = FUN_1408d9680(uVar2,0x406bf6b851eb851f,0x401dae147ae147ae,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40926b147ae147ae,0x3fe2e147ae147ae1,0xc02a947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1835.03,0x4006147ae147ae14,
                                  0x402d23d70a3d70a4,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1271.4;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar2 = FUN_1408d9480(uVar2,dVar3,0x3ff68f5c28f5c28f,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = (double)CONCAT44(uVar6,uVar4);
            break;
        case 0x68:
            uVar2 = FUN_1408d91c0(param_1,0x4076af5c28f5c28f,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x4068e9eb851eb852,DAT_140c13360 * 0.4,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 312.55,0x4022147ae147ae14,
                                  0x402d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 594.03,0x400bae147ae147ae,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2673.38,0x4010c28f5c28f5c3,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4503.72,0x3ff0cccccccccccd,
                                  0xc032000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1715.55;
            uVar5 = 0x3fe6147ae147ae14;
            break;
        case 0x69:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 549.15,0x3fe23d70a3d70a3d,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40701fae147ae148,0x40242e147ae147ae,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4096ef3333333333,0x40133d70a3d70a3d,0xc02edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1757.59,0x40278a3d70a3d70a,
                                  0x400d1eb851eb851f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2735.68,0x40278a3d70a3d70a,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x409e37eb851eb852,0x3fe3333333333333,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1933.98;
            uVar5 = 0x3fe3333333333333;
            break;
        case 0x6a:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 428.34,0x3fd1eb851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40643c28f5c28f5c,0x40208f5c28f5c28f,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x406060f5c28f5c29,0x4030000000000000,0xc01ed70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 650.03,0x401251eb851eb852,
                                  0x4020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5365.39,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a94bc28f5c28f6,0x3fe8f5c28f5c28f6,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 3237.88;
            uVar5 = 0x3fe8f5c28f5c28f6;
            break;
        case 0x6b:
            uVar2 = FUN_1408d91c0(param_1,0x4086003d70a3d70a,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 246.14,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 695.88,0x4008cccccccccccd,
                                  0x40287ae147ae147b,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1878.49,0x40242e147ae147ae,
                                  0x401c47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2275.01,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a425051eb851ec,0x3fe0a3d70a3d70a4,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2578.51;
            uVar5 = 0x3fe0a3d70a3d70a4;
            break;
        case 0x6c:
            uVar2 = FUN_1408d92a0(param_1,0x407338f5c28f5c29,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4072c00000000000,0x400028f5c28f5c29,0xc032000000000000,param_4);
            uVar8 = 0;
            uVar9 = 0x40320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 661.58,0x401f8f5c28f5c28f,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 830.2,0x4011eb851eb851ec,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3977.22,0x4022e66666666666,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6238.46,0x4030000000000000,0,param_4
            );
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 6645.88;
            uVar5 = 0x3fd0000000000000;
            break;
        case 0x6d:
            uVar2 = FUN_1408d92a0(param_1,0x4082a48f5c28f5c3,0x3fe947ae147ae148,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 596.5700000000001,0x3fe947ae147ae148
                    ,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 782.9400000000001,0x4018000000000000
                    ,0x401e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1131.28,0x3ff5eb851eb851ec,
                                  0x402647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2428.81,0x401f333333333333,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2888.78,0x401c99999999999a,
                                  0x402e6b851eb851ec,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 1271.4;
            break;
        case 0x6e:
            uVar2 = FUN_1408d92a0(param_1,0x407049c28f5c28f6,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4069000000000000,0x401599999999999a,0xc0300f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 400.0,0x4007d70a3d70a3d7,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2560.0,0x40236b851eb851ec,
                                  0x402af0a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3971.27,0x4030000000000000,
                                  0xc02947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40c43b799999999a,0x401bcccccccccccd,0xc032000000000000,param_4);
            uVar5 = 0x3fe6b851eb851eb8;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 6184.77;
            break;
        case 0x6f:
            uVar2 = FUN_1408d92a0(param_1,0x4095566666666666,0x3fea8f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 437.71,0x3ff91eb851eb851f,0,param_4)
                    ;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1730.44,0x4020eb851eb851ec,
                                  0x4019b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1506.52,0x4030000000000000,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2640.6,0x4023851eb851eb85,
                                  0x4030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40992b70a3d70a3d,0x3ff69fbe76c8b439,param_4);
            uVar5 = 0x3fe70a3d70a3d70a;
            dVar3 = 1695.11;
            break;
        case 0x70:
            uVar2 = FUN_1408d91c0(param_1,0x40992e6666666666,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,0x406095c28f5c28f6,0x3ff1eb851eb851ec,0xc02423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 346.48,0x4020eb851eb851ec,
                                  0x402d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1162.89,0x400347ae147ae148,
                                  0x4025dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2224.84,0x401dae147ae147ae,
                                  0x4009ae147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4127.02,0x40071eb851eb851f,
                                  0x401fb851eb851eb8,param_4);
            uVar5 = 0x3fe3851eb851eb85;
            dVar3 = 2428.54;
            break;
        case 0x71:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 902.59,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 353.03,0x40195c28f5c28f5c,
                                  0x4030ee147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x408a1a0000000000,0x3ff3333333333333,0xc026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3035.32,0x40208f5c28f5c28f,
                                  0x4025dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b8e66b851eb852,0x4030000000000000,0xc020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4605.28,0x4030000000000000,
                                  0x401c47ae147ae148,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1957.3;
            uVar5 = 0x3fe47ae147ae147b;
            break;
        case 0x72:
            uVar2 = FUN_1408d91c0(param_1,0x406dfccccccccccd,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,0x40565147ae147ae1,0x40068f5c28f5c28f,0xc028dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 344.39,0x4016cccccccccccd,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 446.35,0x401251eb851eb852,
                                  0x402b6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1433.84,0x4011eb851eb851ec,
                                  0x402347ae147ae148,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 4017.43,0x3fe851eb851eb852,param_4);
            uVar5 = 0x3fe851eb851eb852;
            dVar3 = 4017.43;
            break;
        case 0x73:
            uVar2 = FUN_1408d92a0(param_1,0x40623eb851eb851f,0x3fe6b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 231.71,0x401451eb851eb852,
                                  0xc0286b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 367.01,0x402a5c28f5c28f5c,
                                  0x402347ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1957.62,0x40214ccccccccccd,
                                  0xc020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2442.16,0x401a99999999999a,
                                  0x4018d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 3237.88,0x3ff2666666666666,param_4);
            uVar5 = 0x3ff2666666666666;
            dVar3 = 3237.88;
            break;
        case 0x74:
            uVar2 = FUN_1408d9680(param_1,0x408f400000000000,0x4030000000000000,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 321.23,0x4007333333333333,
                                  0x40315c28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 471.51,0x40262e147ae147ae,
                                  0x4030ee147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x405e000000000000,0x3fd999999999999a,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4715.07,0x401ac28f5c28f5c3,
                                  0x402647ae147ae148,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 10857.11;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar7 = 0x402e000000000000;
            uVar5 = 0x401128f5c28f5c29;
        LAB_1408ddde4:
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar6,uVar4),uVar5,uVar7,param_4);
            FUN_1408d93b0(uVar2,0x40a4633333333333,param_4);
            return;
        case 0x75:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 307.56,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d92a0(uVar2,0x406b247ae147ae14,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 320.0,0x400147ae147ae148,
                                  0x4028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 640.0,0x40227ae147ae147b,
                                  0x403191eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2800.9,0x40242e147ae147ae,
                                  0x4030ee147ae147ae,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a1a8147ae147ae,0x3fe3851eb851eb85,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2260.04;
            uVar5 = 0x3fe3851eb851eb85;
            break;
        case 0x76:
            uVar2 = FUN_1408d91c0(param_1,0x4065880000000000,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 751.4,0x401970a3d70a3d71,
                                  0xc02edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1206.87,0x401970a3d70a3d71,
                                  0xc01b70a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2295.44,0x4030000000000000,
                                  0xc012000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4684.51,0x4026000000000000,
                                  0x402047ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7259.95,0x4030000000000000,
                                  0x4019b851eb851eb8,param_4);
            FUN_1408d93b0(uVar2,0x40b828c51eb851ec,param_4);
            return;
        case 0x77:
            uVar2 = FUN_1408d91c0(param_1,0x406968f5c28f5c29,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 163.2,0x4014666666666666,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 642.47,0x40003d70a3d70a3d,
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2045.81,0x4030000000000000,
                                  0xc009ae147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4411.6,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a78a75c28f5c29,0x3fe4cccccccccccd,param_4);
            uVar5 = 0x3fe4cccccccccccd;
            dVar3 = 3013.23;
            break;
        case 0x78:
            uVar2 = FUN_1408d91c0(param_1,0x4056333333333333,param_4,pcVar1,param_7);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 190.82,DAT_140c13360 * 16.0,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 80.0,0x3ff87ae147ae147b,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4059.62,0x4030000000000000,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5645.98,0x401128f5c28f5c29,
                                  0xc02a23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a1a8147ae147ae,0x3fdd70a3d70a3d71,param_4);
            uVar5 = 0x3fdd70a3d70a3d71;
            dVar3 = 2260.04;
            break;
        case 0x79:
            uVar2 = FUN_1408d92a0(param_1,0x40581e147ae147ae,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 471.51,0x40071eb851eb851f,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4031.54,0x401a99999999999a,
                                  0x402edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7419.76,0x4030000000000000,
                                  0x401728f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10040.12,0x4025147ae147ae14,
                                  0x4023b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 16966.86,0x4030000000000000,
                                  0xc032000000000000,param_4);
            uVar5 = 0x3fd0000000000000;
            dVar3 = 19542.95;
            break;
        case 0x7a:
            uVar2 = FUN_1408d92a0(param_1,0x4086003d70a3d70a,0x3fe851eb851eb852,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 704.03,0x3fe851eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4093d80000000000,0x4021000000000000,0xc02e666666666666,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8325.110000000001,0x4030000000000000
                    ,0x402347ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10650.3,CONCAT44(uVar9,uVar8),
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40cceb55c28f5c29,CONCAT44(uVar9,uVar8),0xc032000000000000,param_4)
                    ;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 4017.43;
            uVar5 = 0x3fd70a3d70a3d70a;
            break;
        case 0x7b:
            uVar2 = FUN_1408d92a0(param_1,0x407338f5c28f5c29,0x3ff0000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4000.0,0x400c3d70a3d70a3d,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 882.3200000000001,0x3ff30a3d70a3d70a
                    ,0xc027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3577.94,0x401847ae147ae148,
                                  0x4027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5059.64,0x402351eb851eb852,
                                  0x403123d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6225.99,0x402cb33333333333,
                                  0xc02edc28f5c28f5c,param_4);
            uVar5 = 0x3fe6b851eb851eb8;
            dVar3 = 11813.7;
            break;
        case 0x7c:
            uVar2 = FUN_1408d91c0(param_1,0x4071b1c28f5c28f6,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4000.0,0x4030000000000000,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1663.82,0x402370a3d70a3d71,
                                  0x402723d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 631.84,0x401d0a3d70a3d70a,
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 315.13,0x4022e66666666666,
                                  0x4030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9210.549999999999,0x402923d70a3d70a4
                    ,0x401b70a3d70a3d71,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 3237.88;
            break;
        case 0x7d:
            uVar2 = FUN_1408d92a0(param_1,0x4087e68f5c28f5c3,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 536.97,0x40117ae147ae147b,
                                  0x402e6b851eb851ec,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2180.13,0x4030000000000000,
                                  0xc02a23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3396.36,0x402675c28f5c28f6,
                                  0x4028dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7937.41,CONCAT44(uVar9,uVar8),
                                  0x402b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10480.9,CONCAT44(uVar9,uVar8),
                                  0x40256b851eb851ec,param_4);
            uVar5 = 0x3fe3d70a3d70a3d7;
            dVar3 = 2260.04;
            break;
        case 0x7e:
            uVar2 = FUN_1408d91c0(param_1,0x403e428f5c28f5c3,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 392.35,0x401fae147ae147ae,
                                  0xc02d947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 716.92,0x400a51eb851eb852,
                                  0xc027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3843.05,0x4022147ae147ae14,
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6655.3,0x402cae147ae147ae,
                                  0x401570a3d70a3d71,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9283.18,0x4030000000000000,
                                  0xc02e000000000000,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 8860.73;
            break;
        case 0x7f:
            uVar2 = FUN_1408d91c0(param_1,0x408c34b851eb851f,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 392.2,0x402c0f5c28f5c28f,
                                  0x402347ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 996.16,0x4022e66666666666,
                                  0x4024947ae147ae14,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3949.85,0x4030000000000000,
                                  0x40226b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10040.12,CONCAT44(uVar9,uVar8),
                                  0x402647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6866.64,CONCAT44(uVar9,uVar8),
                                  0x4023b851eb851eb8,param_4);
            uVar5 = 0x3fd6666666666666;
            dVar3 = 2804.16;
            break;
        case 0x80:
            uVar2 = FUN_1408d91c0(param_1,0x4071b1c28f5c28f6,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 304.1,0x400d5c28f5c28f5c,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1174.24,0x4011eb851eb851ec,
                                  0xc02edc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2858.28,0x40227ae147ae147b,
                                  0x40226b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6148.1,0x4030000000000000,
                                  0x4028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10656.15,0x4030000000000000,
                                  0xc026b851eb851eb8,param_4);
            FUN_1408d93b0(uVar2,0x40b67ba666666666,param_4);
            return;
        case 0x81:
            uVar2 = FUN_1408d91c0(param_1,0x403bd9999999999a,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 446.35,0x40138f5c28f5c28f,
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 822.23,0x401970a3d70a3d71,
                                  0xc029cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5667.75,0x401470a3d70a3d71,
                                  0x4031ca3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8554.379999999999,0x4030000000000000
                    ,0x402423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10952.29,0x4030000000000000,
                                  0x40226b851eb851ec,param_4);
            uVar5 = 0x3fe147ae147ae148;
            dVar3 = 17544.72;
            break;
        case 0x82:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 63.76,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x408a68a3d70a3d71,0x4014e147ae147ae1,0x4018d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4079000000000000,0x3ff028f5c28f5c29,0xc0148f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b0b328f5c28f5c,0x4000000000000000,0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8617.74,0x4025b33333333333,
                                  0x402423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40c666799999999a,0x401a333333333333,0x402647ae147ae148,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 16925.12;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            goto LAB_1408dade5;
        case 0x83:
            uVar2 = FUN_1408d91c0(param_1,0x405eeb851eb851ec,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 312.55,0x4003c28f5c28f5c3,
                                  0xc0256b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 892.71,0x4030000000000000,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1440.41,0x4022e66666666666,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4684.51,0x4022147ae147ae14,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6506.01,0x4030000000000000,
                                  0x40148f5c28f5c28f,param_4);
            FUN_1408d93b0(uVar2,0x40b828c51eb851ec,param_4);
            return;
        case 0x84:
            uVar2 = FUN_1408d91c0(param_1,param_3 * 134.36,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 1111.87,DAT_140c13360 * 2.08,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40a050428f5c28f6,0x4020eb851eb851ec,0x4009ae147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b13791eb851eb8,0x4030000000000000,0xc012d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b89c4000000000,0x401dae147ae147ae,0x401128f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40c693b1eb851eb8,0x4030000000000000,0x3ffee147ae147ae1,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 8245.940000000001;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            goto LAB_1408dade5;
        case 0x85:
            uVar2 = FUN_1408d92a0(param_1,0x4035bae147ae147b,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 903.95,0x4015c28f5c28f5c3,
                                  0x40148f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 823.88,0x40161eb851eb851f,
                                  0x4028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1156.53,0x40258f5c28f5c28f,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3487.68,0x4018d70a3d70a3d7,
                                  0x402e6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5579.42,0x4023428f5c28f5c3,
                                  0x401ed70a3d70a3d7,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 8245.940000000001;
            break;
        case 0x86:
            uVar2 = FUN_1408d91c0(param_1,0x4035bae147ae147b,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 267.2,0x4020eb851eb851ec,
                                  0x402f47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 414.36,0x401651eb851eb852,
                                  0xc022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2618.24,0x4030000000000000,
                                  0x402e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6655.3,0x402cae147ae147ae,
                                  0x401a8f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8550.32,0x4030000000000000,
                                  0xc02e000000000000,param_4);
            uVar5 = 0x3fec7ae147ae147b;
            dVar3 = 11813.7;
            break;
        case 0x87:
            uVar2 = FUN_1408d91c0(param_1,0x405a333333333333,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 560.1,0x40100a3d70a3d70a,
                                  0x402647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1771.45,0x4009c28f5c28f5c3,
                                  0x402b6b851eb851ec,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5339.89,0x4030000000000000,
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7426.54,CONCAT44(uVar9,uVar8),
                                  0x401ed70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9806.32,CONCAT44(uVar9,uVar8),
                                  0x401728f5c28f5c29,param_4);
            FUN_1408d93b0(uVar2,0x40a2f9147ae147ae,param_4);
            return;
        case 0x88:
            uVar2 = FUN_1408d91c0(param_1,0x4060cb851eb851ec,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9900(uVar2,0x40727deb851eb852,DAT_140c13360 * 2.89,0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 295.9,0x40028f5c28f5c28f,
                                  0xc02bdc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1215.28,0x3ff5eb851eb851ec,
                                  0x4023b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5802.88,0x4030000000000000,
                                  0x4019b851eb851eb8,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40af62dc28f5c28f,0x3fdd70a3d70a3d71,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 4017.43;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
        LAB_1408dade5:
            FUN_1408d93b0(uVar2,CONCAT44(uVar6,uVar4),param_4);
            return;
        case 0x89:
            uVar2 = FUN_1408d91c0(param_1,0x4056333333333333,param_4,pcVar1,param_7);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1663.82,0x4030000000000000,
                                  0x4020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2394.86,CONCAT44(uVar9,uVar8),
                                  0xc026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5224.07,CONCAT44(uVar9,uVar8),
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8321.83,CONCAT44(uVar9,uVar8),
                                  0xc01ed70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 14406.3,CONCAT44(uVar9,uVar8),
                                  0xc0148f5c28f5c28f,param_4);
            FUN_1408d93b0(uVar2,0x40c14e5d70a3d70a,param_4);
            return;
        case 0x8a:
            uVar2 = FUN_1408d91c0(param_1,0x406968f5c28f5c29,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 625.25,0x4000a3d70a3d70a4,
                                  0xc026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2088.13,0x401651eb851eb852,
                                  0x401728f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3638.03,0x401d0a3d70a3d70a,
                                  0x402047ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6475.34,0x4030000000000000,
                                  0xc0315c28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 11246.83,0x4030000000000000,
                                  0xc0226b851eb851ec,param_4);
            uVar5 = 0x3fe0000000000000;
            dVar3 = 8245.940000000001;
            break;
        case 0x8b:
            uVar2 = FUN_1408d91c0(param_1,0x40546f5c28f5c28f,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3463.2,0x4022e66666666666,
                                  0x4019b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8000.0,0x4030000000000000,
                                  0xc01a8f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4072f87ae147ae14,0x3fe947ae147ae148,0xc025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1856.64,0x40173d70a3d70a3d,
                                  0x402b6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4668.83,0x401bb851eb851eb8,
                                  0x4018d70a3d70a3d7,param_4);
            FUN_1408d93b0(uVar2,0x40bbe56147ae147b,param_4);
            return;
        case 0x8c:
            uVar2 = FUN_1408d92a0(param_1,0x403bd9999999999a,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x405cec28f5c28f5c,0x3ff1eb851eb851ec,0xc0011eb851eb851f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1657.43,0x3ff1eb851eb851ec,
                                  0xc025dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3119.67,0x400ae147ae147ae1,
                                  0x402647ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7722.79,0x4030000000000000,
                                  0x402b000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 5000.0;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar7 = 0x400ee147ae147ae1;
            uVar5 = 0x3ff8f5c28f5c28f6;
            goto LAB_1408e2ccd;
        case 0x8d:
            uVar2 = FUN_1408d91c0(param_1,param_3 * 1483.51,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2753.67,0x40161eb851eb851f,
                                  0x40286147ae147ae1,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 420.92,0x3fe6147ae147ae14,
                                  0xc02a947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40b645d1eb851eb8,0x402b9eb851eb851f,0x403123d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4587.58,0x40117ae147ae147b,
                                  0xc02bdc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x40c009f99999999a,0x4030000000000000,0x4029b851eb851eb8,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 3237.88;
            break;
        case 0x8e:
            uVar2 = FUN_1408d92a0(param_1,0x4034000000000000,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2571.77,0x402370a3d70a3d71,
                                  0x4021947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2442.16,0x4000000000000000,
                                  0x402a947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3433.32,0x402923d70a3d70a4,
                                  0xc02b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4587.58,0x40148f5c28f5c28f,
                                  0x4009ae147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8530.07,0x4029b33333333333,
                                  0x40286b851eb851ec,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 13640.94;
            break;
        case 0x8f:
            uVar2 = FUN_1408d92a0(param_1,0x4034000000000000,0x3ff68f5c28f5c28f,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2242.38,0x40278a3d70a3d70a,
                                  0x40286b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2725.17,0x4000000000000000,
                                  0x4020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4903.16,0x40100a3d70a3d70a,
                                  0xc02b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4980.79,0x4030000000000000,
                                  0x4029b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7856.66,0x402a428f5c28f5c3,
                                  0x402c47ae147ae148,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 10231.23;
            break;
        case 0x90:
            uVar2 = FUN_1408d91c0(param_1,0x405eeb851eb851ec,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 378.66,0x4021ae147ae147ae,
                                  0x4030800000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1111.6,0x40043d70a3d70a3d,
                                  0xc030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3278.14,0x4030000000000000,
                                  0x403011eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4084.51,0x4022147ae147ae14,
                                  0xc023b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7461.71,0x4030000000000000,
                                  0x4028000000000000,param_4);
            FUN_1408d93b0(uVar2,0x40bdf9cf5c28f5c3,param_4);
            return;
        case 0x91:
            uVar2 = FUN_1408d92a0(param_1,0x405a333333333333,0x3ff23d70a3d70a3d,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 711.3099999999999,0x401a000000000000
                    ,0xc031ca3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2088.13,0x40227ae147ae147b,
                                  0xc02d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7023.93,0x401dae147ae147ae,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10605.93,0x4030000000000000,
                                  0x402d947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 14793.73,0x4030000000000000,
                                  0x402cb851eb851eb8,param_4);
            FUN_1408d93b0(uVar2,0x40a1a8147ae147ae,param_4);
            return;
        case 0x92:
            uVar2 = FUN_1408d92a0(param_1,0x408c34b851eb851f,0x3fe851eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 426.53,0x401547ae147ae148,
                                  0x4027947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 569.05,0x402675c28f5c28f6,
                                  0x4022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,0x4096037ae147ae14,0x3ff4000000000000,0xc02e6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1757.59,0x4019eb851eb851ec,
                                  0x4022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4070.84,0x401bcccccccccccd,
                                  0x402a947ae147ae14,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 4638.81;
            break;
        case 0x93:
            uVar2 = FUN_1408d92a0(param_1,0x4058cae147ae147b,0x3fe0f5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 130.72,0x3ffc7ae147ae147b,
                                  0x4019b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1839.72,0x40117ae147ae147b,
                                  0x4022000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 9376.450000000001,0x4028947ae147ae14
                    ,0x402723d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 12163.89,0x4017c28f5c28f5c3,
                                  0x402fb851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5825.27,0x4023bd70a3d70a3d,
                                  0x40304a3d70a3d70a,param_4);
            FUN_1408d93b0(uVar2,0x409a7c70a3d70a3d,param_4);
            return;
        case 0x94:
            uVar2 = FUN_1408d9680(param_1,param_3 * 368.42,0x4030000000000000,0xc01d28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 144.62,0x3fee147ae147ae14,
                                  0x402947ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1373.33,0x402299999999999a,
                                  0xc02bdc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2275.85,0x40138f5c28f5c28f,
                                  0x402047ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 6034.36,0x4030000000000000,
                                  0xc01e000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 9518.559999999999;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar7 = 0x402c47ae147ae148;
            uVar5 = 0x4014e147ae147ae1;
        LAB_1408e2ccd:
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar6,uVar4),uVar5,uVar7,param_4);
            FUN_1408d93b0(uVar2,0x40b21ecf5c28f5c3,param_4);
            return;
        case 0x95:
            uVar2 = FUN_1408d9680(param_1,param_3 * 1000.0,0x3ff0000000000000,0,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 108.18,0x4016cccccccccccd,
                                  0x4025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1502.79,0x4009333333333333,
                                  0xc030800000000000,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3443.95,0x4030000000000000,
                                  0xc028dc28f5c28f5c,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8287.16,CONCAT44(uVar9,uVar8),
                                  0xc02a947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 16061.71,CONCAT44(uVar9,uVar8),
                                  0xc032000000000000,param_4);
            uVar5 = 0x3fe147ae147ae148;
            dVar3 = 10231.23;
            break;
        case 0x96:
            uVar2 = FUN_1408d92a0(param_1,0x404511eb851eb852,0x3ff2e147ae147ae1,param_4);
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 446.35,DAT_140c13360 * 4.89,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 969.22,0x40280f5c28f5c28f,
                                  0x402047ae147ae148,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1792.3,0x4030000000000000,
                                  0xc02c47ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 7879.06,CONCAT44(uVar9,uVar8),
                                  0x4018d70a3d70a3d7,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 13269.0;
            uVar4 = SUB84(dVar3,0);
            uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
            uVar7 = 0x401728f5c28f5c29;
            uVar5 = CONCAT44(uVar9,uVar8);
        LAB_1408df04f:
            uVar2 = FUN_1408d9680(uVar2,CONCAT44(uVar6,uVar4),uVar5,uVar7,param_4);
            FUN_1408d93b0(uVar2,0x40b378ab851eb852,param_4);
            return;
        case 0x97:
            uVar2 = FUN_1408d92a0(param_1,0x40546f5c28f5c28f,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 446.35,DAT_140c13360 * 4.89,
                                  0x402423d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 969.22,0x4015d70a3d70a3d7,
                                  0x402047ae147ae148,param_4);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 8100.0,0x4030000000000000,
                                  0xc025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 12200.0,CONCAT44(uVar9,uVar8),
                                  0xc01a666666666666,param_4);
            uVar2 = FUN_1408d99a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 4082.57,
                                  DAT_140c13360 * (double)CONCAT44(uVar9,uVar8),0xc018d70a3d70a3d7,param_4);
            uVar5 = 0x3fef5c28f5c28f5c;
            dVar3 = 13640.94;
            break;
        case 0x98:
            uVar2 = FUN_1408d91c0(param_1,0x4060066666666666,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 300.0,0x4018000000000000,
                                  0x4020000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 933.0,0x401999999999999a,
                                  0x402ccccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1230.0,0x4016cccccccccccd,
                                  0xc033000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3300.0,0x4028000000000000,
                                  0x4018cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1000.0,0x3ff0000000000000,0,param_4)
                    ;
            uVar5 = 0x3ff8000000000000;
            dVar3 = 4410.0;
            break;
        case 0x99:
            uVar2 = FUN_1408d91c0(param_1,0x40623eb851eb851f,param_4,pcVar1,param_7);
            uVar8 = 0;
            uVar9 = 0xc0320000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 131.06,0x4017d70a3d70a3d7,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 131.03,0x3fee147ae147ae14,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 923.91,0x40028f5c28f5c28f,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4922.83,0x40258f5c28f5c28f,
                                  CONCAT44(uVar9,uVar8),param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a4633333333333,0x3febd70a3d70a3d7,param_4);
            uVar5 = 0x3febd70a3d70a3d7;
            dVar3 = 2609.6;
            break;
        case 0x9a:
            uVar2 = FUN_1408d91c0(param_1,0x407d1547ae147ae1,param_4,pcVar1,param_7);
            uVar8 = 0;
            uVar9 = 0x40300000;
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 163.2,DAT_140c13360 * 16.0,
                                  0xc02e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 80.0,0x400799999999999a,
                                  0xc031ca3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3172.07,CONCAT44(uVar9,uVar8),
                                  0x4023b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4411.6,CONCAT44(uVar9,uVar8),
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2103.23,0x3fe051eb851eb852,param_4);
            uVar5 = 0x3fe051eb851eb852;
            dVar3 = 2103.23;
            break;
        case 0x9b:
            uVar2 = FUN_1408d92a0(param_1,0x406dfccccccccccd,0x3ff30a3d70a3d70a,param_4);
            uVar2 = FUN_1408d9900(uVar2,(double)CONCAT44(uVar6,uVar4) * 177.14,0x4000000000000000,
                                  0xc025000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 400.0,0x4008f5c28f5c28f6,
                                  0x4028000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 2762.78,0x4030000000000000,
                                  0x4030ee147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1904.42,0x402199999999999a,
                                  0x401d28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a1a8147ae147ae,0x3fe5c28f5c28f5c3,param_4);
            uVar5 = 0x3fe5c28f5c28f5c3;
            dVar3 = 2260.04;
            break;
        case 0x9c:
            uVar2 = FUN_1408d92a0(param_1,param_3 * 307.56,0x3fd0000000000000,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 648.0700000000001,0x3ff68f5c28f5c28f
                    ,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 263.29,0x4015c28f5c28f5c3,
                                  0x402e6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 482.75,0x400e147ae147ae14,
                                  0xc030ee147ae147ae,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1803.07,0x40208f5c28f5c28f,
                                  0x402047ae147ae148,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x40a867147ae147ae,0x3fd0000000000000,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 1957.3;
            uVar5 = 0x3ff30a3d70a3d70a;
            break;
        case 0x9d:
            uVar2 = FUN_1408d92a0(param_1,0x4074e1c28f5c28f6,0x3fe4cccccccccccd,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 334.11,0x3fe4cccccccccccd,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 338.03,0x4001ae147ae147ae,
                                  0x4018000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3584.6,0x4002e147ae147ae1,
                                  0x402a947ae147ae14,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2524.99,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2804.16,0x3fd6666666666666,param_4);
            uVar5 = 0x3fd6666666666666;
            dVar3 = 2804.16;
            break;
        case 0x9e:
            uVar2 = FUN_1408d92a0(param_1,0x408c34b851eb851f,0x3fd3d70a3d70a3d7,param_4);
            uVar2 = FUN_1408d92a0(uVar2,(double)CONCAT44(uVar6,uVar4) * 1035.89,0x3ff69fbe76c8b439,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 385.99,0x401bc28f5c28f5c3,
                                  0x4031ca3d70a3d70a,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1352.12,0x40051eb851eb851f,
                                  0x4023b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3269.24,0x401151eb851eb852,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9480(uVar2,0x408bf60000000000,0x3ff69fbe76c8b439,param_4);
            dVar3 = (double)CONCAT44(uVar6,uVar4) * 2804.16;
            uVar5 = 0x3fd0000000000000;
            break;
        case 0x9f:
            uVar2 = FUN_1408d92a0(param_1,0x407338f5c28f5c29,0x3fec7ae147ae147b,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 142.26,0x40113d70a3d70a3d,
                                  0x4030b5c28f5c28f6,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 458.76,0x4020a8f5c28f5c29,
                                  0xc02b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 307.68,0x4021c28f5c28f5c3,
                                  0x402b000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1149.19,0x4017d70a3d70a3d7,
                                  0x401047ae147ae148,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4442.41,0x4023bd70a3d70a3d,
                                  0x401a8f5c28f5c28f,param_4);
            FUN_1408d93b0(uVar2,0x4098a60000000000,param_4);
            return;
        case 0xa0:
            uVar2 = FUN_1408d92a0(param_1,0x40515147ae147ae1,0x3fdc28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 172.35,0x4022147ae147ae14,
                                  0x40256b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1856.64,0x401a333333333333,
                                  0x4021947ae147ae14,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3831.19,0x40141eb851eb851f,
                                  0x4020b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5712.44,0x4000000000000000,
                                  0xc01d28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 10738.72,0x4030000000000000,
                                  0x402b000000000000,param_4);
            uVar5 = 0x3febd70a3d70a3d7;
            dVar3 = 7673.81;
            break;
        case 0xa1:
            uVar2 = FUN_1408d92a0(param_1,0x40581e147ae147ae,0x3fe47ae147ae147b,param_4);
            uVar8 = 0;
            uVar9 = 0x40000000;
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 84.51000000000001,0x4000000000000000
                    ,0x401ed70a3d70a3d7,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 201.58,CONCAT44(uVar9,uVar8),
                                  0xc002e147ae147ae1,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 464.16,CONCAT44(uVar9,uVar8),
                                  0x401e000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5407.7,0x4021cccccccccccd,
                                  0x402123d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 1211.53,0x40227ae147ae147b,
                                  0x40148f5c28f5c28f,param_4);
            uVar5 = 0x3ff68f5c28f5c28f;
            dVar3 = 7141.38;
            break;
        case 0xa2:
            uVar2 = FUN_1408d92a0(param_1,0x4068b7ae147ae148,0x3fdc28f5c28f5c29,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 368.42,0x4020333333333333,
                                  0x402b6b851eb851ec,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 3922.53,0x4030000000000000,
                                  0x403011eb851eb852,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5640.82,0x40260a3d70a3d70a,
                                  0x402d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5645.98,0x4027051eb851eb85,
                                  0x402d23d70a3d70a4,param_4);
            uVar2 = FUN_1408d9480(uVar2,(double)CONCAT44(uVar6,uVar4) * 2260.04,0x3fe47ae147ae147b,param_4);
            uVar5 = 0x3fe47ae147ae147b;
            dVar3 = 2260.04;
            break;
        case 0xa3:
            uVar2 = FUN_1408d91c0(param_1,0x4074e1c28f5c28f6,param_4,pcVar1,param_7);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 145.07,0x3ff5eb851eb851ec,
                                  0x4032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 719.63,0x40227ae147ae147b,
                                  0x4026b851eb851eb8,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 556.99,0x3feeb851eb851eb8,
                                  0xc032000000000000,param_4);
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 5183.97,0x3fd999999999999a,
                                  0xc02947ae147ae148,param_4);
        LAB_1408e44a7:
            uVar2 = FUN_1408d9680(uVar2,(double)CONCAT44(uVar6,uVar4) * 4275.16,0x4020333333333333,
                                  0x4032000000000000,param_4);
            dVar3 = 6807.11;
            uVar5 = 0x3fe5c28f5c28f5c3;
    }
    FUN_1408d9480(uVar2,dVar3,uVar5,param_4);
    return;
}


