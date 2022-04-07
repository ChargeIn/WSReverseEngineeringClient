//
// Created by flop on 05.04.22.
//



char ** FUN_140600070(longlong param_1,char **param_2,uint *param_3)

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
            bVar7 = *param_3 < *(uint *)(pcVar6 + 0x20);
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
            ppcVar2 = (char **)FUN_1405fffb0(param_1,local_res8,pcVar3,pcVar6,param_3);
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
    if (*(uint *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(uint *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_140600500(pcVar5,param_3);
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
            pcVar3 = (char *)FUN_140600500(pcVar5,param_3);
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



void FUN_140600230(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_1405ffa80(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_140600310(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_1403af180(lVar2 + 0x28,param_5 + 2);
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
        lVar2 = FUN_140600590(param_1,param_5);
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



char ** FUN_140600400(longlong param_1,char **param_2,uint *param_3)

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
            bVar6 = *param_3 < *(uint *)(pcVar5 + 0x20);
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14060045e;
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
    if (*param_3 <= *(uint *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14060045e:
    ppcVar1 = (char **)FUN_140600310(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140600500(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x80,0);
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
        *(undefined8 *)(lVar1 + 0x68) = param_2[9];
        *(undefined8 *)(lVar1 + 0x70) = param_2[10];
        *(undefined8 *)(lVar1 + 0x78) = param_2[0xb];
    }
    return lVar1;
}



longlong FUN_140600590(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_1403af180(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



undefined8 FUN_1406005d0(void)

{
    longlong lVar1;
    undefined8 uVar2;

    if (DAT_140c65bb0 == 0) {
        lVar1 = FUN_14018b280(0x38);
        if (lVar1 != 0) {
            uVar2 = FUN_14018b280(0x18);
            *(undefined8 *)(lVar1 + 8) = uVar2;
            *(undefined8 *)uVar2 = uVar2;
            *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
            FUN_1400522f0(lVar1 + 0x10);
            DAT_140c65bb0 = lVar1;
            return 0;
        }
        DAT_140c65bb0 = 0;
    }
    return 0;
}



void FUN_140600650(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    FUN_140600750();
    FUN_140019490(param_1 + 0x10);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



void FUN_1406006d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar4 [16];

    lVar2 = DAT_140c65bb0;
    auVar4 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    plVar3 = (longlong *)**(longlong **)(DAT_140c65bb0 + 8);
    if (plVar3 != *(longlong **)(DAT_140c65bb0 + 8)) {
        do {
            lVar1 = plVar3[2];
            plVar3 = (longlong *)*plVar3;
            param_1 = FUN_14061b900(param_1,param_2,lVar1);
            if (*(int *)(lVar1 + 700) != 0) {
                param_1 = FUN_1406012b0(lVar2,lVar1,param_5,param_6,auVar4);
            }
        } while (plVar3 != (longlong *)*(longlong *)(lVar2 + 8));
    }
    return;
}



void FUN_140600750(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = plVar2 + 2;
            plVar2 = (longlong *)*plVar2;
            FUN_1406012b0(param_1,*plVar1);
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 8));
    }
    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    return;
}



undefined8 FUN_1406007c0(longlong param_1,undefined8 param_2,longlong **param_3,longlong **param_4)

{
    longlong **pplVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong *plVar6;

    lVar3 = FUN_14018b280(0x670,8);
    if (lVar3 == 0) {
        plVar4 = (longlong *)0x0;
    }
    else {
        plVar4 = (longlong *)FUN_140619900(lVar3);
    }
    iVar2 = FUN_14061a840(plVar4,param_2);
    if (iVar2 < 0) {
        if (plVar4 != (longlong *)0x0) {
            FUN_140619bb0(plVar4);
            FUN_14018b900(plVar4,0);
        }
        uVar5 = 0x80004005;
    }
    else {
        lVar3 = *(longlong *)(param_1 + 8);
        plVar6 = (longlong *)FUN_14018b280(0x18);
        if ((longlong **)(plVar6 + 2) != (longlong **)0x0) {
            plVar6[2] = (longlong)plVar4;
        }
        *plVar6 = lVar3;
        plVar6[1] = *(longlong *)(lVar3 + 8);
        **(longlong ***)(lVar3 + 8) = plVar6;
        *(longlong **)(lVar3 + 8) = plVar6;
        if ((param_3 != (longlong **)0x0) && (*plVar4 == 0)) {
            *plVar4 = (longlong)param_3;
            pplVar1 = (longlong **)(plVar4 + 1);
            *pplVar1 = *param_3;
            *param_3 = plVar4;
            if (*pplVar1 != (longlong *)0x0) {
                **pplVar1 = (longlong)pplVar1;
            }
        }
        if (param_4 != (longlong **)0x0) {
            *param_4 = plVar4;
        }
        uVar5 = 0;
    }
    return uVar5;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406008c0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,ulonglong param_4,
                   int param_5,undefined4 param_6,undefined (*param_7) [12],undefined4 *param_8,
                   undefined4 param_9,undefined4 *param_10,float param_11,longlong param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16)

{
    uint uVar1;
    ulonglong uVar2;
    double dVar3;
    int iVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 local_1e8 [4];
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined local_188 [16];
    longlong local_178;
    longlong local_170;
    longlong local_168;
    longlong local_160;
    longlong local_158;
    undefined8 local_150;
    longlong local_148;
    longlong local_140;
    uint local_138;
    undefined4 local_134;
    undefined4 local_130;
    undefined4 local_12c;
    undefined4 local_128;
    float local_124;
    float local_120;
    float local_11c;
    uint local_118;
    undefined4 local_114;
    undefined4 local_110;
    undefined4 local_10c;
    undefined4 local_108;
    undefined4 local_104;
    undefined4 local_100;
    int local_fc;
    undefined4 local_f8;
    uint local_f0;
    undefined4 local_ec;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    int local_cc;
    undefined4 local_c8;
    float local_c4;
    undefined4 local_c0;
    undefined4 local_bc;
    float local_b8;
    float local_b4;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_9c;
    undefined4 local_98;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined local_58 [8];
    undefined4 uStack80;
    undefined4 uStack76;

    FUN_1407e4830(local_1e8,0,0x160);
    uVar1 = param_2[0x14];
    local_1e8[0] = *param_2;
    local_140 = 0;
    local_ec = 1;
    local_138 = local_138 |
                ((uVar1 & 0x10 | uVar1 >> 2 & 0xf000) >> 1 | uVar1 & 0x7e0) >> 3 | uVar1 >> 2 & 2;
    local_f0 = param_2[1];
    if ((local_f0 != 2) && (local_f0 != 3)) {
        local_f0 = (uint)(local_f0 == 1);
    }
    local_134 = param_6;
    iVar4 = FUN_1407e6af0(param_8,&DAT_140c78390,0x40);
    local_c4 = 1.0;
    if (iVar4 == 0) {
        local_88 = _DAT_140c78410;
        uStack132 = uRam0000000140c78414;
        uStack128 = uRam0000000140c78418;
        uStack124 = uRam0000000140c7841c;
        local_68 = _DAT_140c78430;
        uStack100 = uRam0000000140c78434;
        uStack96 = uRam0000000140c78438;
        uStack92 = uRam0000000140c7843c;
        local_78 = _DAT_140c78420;
        uStack116 = uRam0000000140c78424;
        uStack112 = uRam0000000140c78428;
        uStack108 = uRam0000000140c7842c;
        _local_58 = CONCAT412(0x3f800000,*param_7);
    }
    else {
        local_88 = *param_8;
        uStack132 = param_8[1];
        uStack128 = param_8[2];
        uStack124 = param_8[3];
        local_78 = param_8[4];
        uStack116 = param_8[5];
        uStack112 = param_8[6];
        uStack108 = param_8[7];
        local_68 = param_8[8];
        uStack100 = param_8[9];
        uStack96 = param_8[10];
        uStack92 = param_8[0xb];
        _local_58 = *(undefined (*) [16])(param_8 + 0xc);
    }
    local_cc = param_2[0x2c];
    local_1d8 = local_88;
    uStack468 = uStack132;
    uStack464 = uStack128;
    uStack460 = uStack124;
    local_1c8 = local_78;
    uStack452 = uStack116;
    uStack448 = uStack112;
    uStack444 = uStack108;
    local_1b8 = local_68;
    uStack436 = uStack100;
    uStack432 = uStack96;
    uStack428 = uStack92;
    local_130 = param_9;
    local_1a8 = local_58._0_4_;
    uStack420 = local_58._4_4_;
    uStack416 = uStack80;
    uStack412 = uStack76;
    local_198 = *param_10;
    uStack404 = param_10[1];
    uStack400 = param_10[2];
    uStack396 = param_10[3];
    local_12c = param_16;
    local_f8 = param_2[0x15];
    local_e4 = param_2[0x18];
    local_e8 = param_2[0x17];
    local_c8 = param_2[0x2d];
    if (((local_cc == 0) && (local_178 = param_12, param_12 == 0)) &&
        (uVar2 = *(ulonglong *)(param_2 + 6), local_178 = local_140, uVar2 != 0)) {
        if (DAT_140c3fe70 < uVar2) {
            local_178 = 0;
        }
        else {
            local_178 = uVar2 + DAT_140c3fe68;
        }
    }
    uVar2 = *(ulonglong *)(param_2 + 10);
    local_148 = local_140;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        local_148 = uVar2 + DAT_140c3fe68;
    }
    local_114 = param_2[0xc];
    local_110 = param_2[0xd];
    uVar2 = *(ulonglong *)(param_2 + 8);
    local_170 = local_140;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        local_170 = uVar2 + DAT_140c3fe68;
    }
    uVar2 = *(ulonglong *)(param_2 + 0x20);
    local_168 = local_140;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        local_168 = uVar2 + DAT_140c3fe68;
    }
    uVar2 = *(ulonglong *)(param_2 + 0x22);
    local_160 = local_140;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        local_160 = uVar2 + DAT_140c3fe68;
    }
    uVar2 = *(ulonglong *)(param_2 + 0x24);
    local_158 = local_140;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        local_158 = uVar2 + DAT_140c3fe68;
    }
    local_150 = param_13;
    if ((uVar1 >> 0xd & 1) == 0) {
        local_11c = (float)param_2[0x26];
    }
    else {
        local_11c = (float)(param_4 & 0xffffffff);
    }
    fVar5 = (float)param_2[0x28];
    fVar7 = (float)param_2[0x27];
    local_128 = param_3;
    dVar3 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
    fVar6 = (float)param_2[0x2a];
    fVar8 = (float)param_2[0x29];
    local_124 = DAT_140c3b438 * 0.005555556 * ((float)(dVar3 * (double)(fVar5 - fVar7)) + fVar7);
    dVar3 = (double)(**(code **)(DAT_140c77890 + 0x28))();
    fVar5 = DAT_140c3b438 * 0.005555556;
    local_118 = (uint)(param_2[0x2b] == 1);
    local_fc = param_2[0x12] + param_5;
    local_10c = param_2[0x10];
    uVar2 = *(ulonglong *)(param_2 + 0x1c);
    local_108 = param_2[0x11];
    local_120 = ((float)(dVar3 * (double)(fVar6 - fVar8)) + fVar8) * fVar5;
    local_104 = param_2[0xe];
    local_100 = param_2[0xf];
    local_dc = param_2[0x19];
    local_d8 = param_2[0x1a];
    local_d4 = param_2[0x1b];
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        local_140 = DAT_140c3fe68 + uVar2;
    }
    local_d0 = param_2[0x1e];
    fVar7 = (float)param_2[0x2e];
    if (fVar7 == 0.0) {
        local_c4 = 0.0;
    }
    else {
        local_c4 = local_c4 / (fVar7 * fVar7);
    }
    local_bc = param_2[0x30];
    local_c0 = param_2[0x2f];
    local_b4 = (float)param_2[0x35];
    local_b8 = (float)param_2[0x34];
    local_188 = ZEXT1216(CONCAT48(fVar5 * (float)param_2[0x33],
                                  CONCAT44(fVar5 * (float)param_2[0x32],fVar5 * (float)param_2[0x31]))
    );
    fVar5 = fVar5 * (float)param_2[0x33];
    if ((param_2[0x14] & 0x20000) != 0) {
        if (local_b8 == 0.0) {
            local_b8 = param_11;
        }
        else {
            local_b8 = local_b8 * param_11;
        }
        fVar5 = param_11;
        if (local_b4 == 0.0) {
            local_b4 = param_11;
        }
        else {
            local_b4 = local_b4 * param_11;
        }
    }
    local_ac = param_2[0x39];
    local_a8 = param_2[0x3a];
    local_a4 = param_2[0x3b];
    local_a0 = param_2[0x38];
    local_9c = param_2[0x3c];
    local_98 = param_2[0x3d];
    FUN_1406007c0(fVar5,DAT_140c65bb0,local_1e8,param_14,param_15);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140600e10(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong *puVar9;
    ulonglong uVar10;
    float fVar11;
    undefined4 local_188 [4];
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined local_148 [16];
    undefined local_138 [16];
    undefined local_128 [16];
    ulonglong local_118;
    ulonglong local_e8;
    uint local_d8;
    undefined4 local_d4;
    undefined4 local_d0;
    undefined4 local_cc;
    undefined4 local_ac;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined4 local_9c;
    int local_98;
    int local_94;
    undefined4 local_90;
    undefined4 local_8c;
    undefined4 local_88;
    undefined4 local_80;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;

    uVar4 = (**(code **)(param_1 + 0x28))(param_2 + 9);
    puVar9 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x20) + (uVar4 % *(ulonglong *)(param_1 + 0x18)) * 8);
    do {
        if (puVar9 == (ulonglong *)0x0) {
            LAB_140600e7f:
            puVar5 = (undefined4 *)FUN_140237680(*param_2);
            if (puVar5 != (undefined4 *)0x0) {
                FUN_1403d90d0(DAT_140c65898,param_2[1]);
                FUN_1403d90d0(DAT_140c65898,param_2[5]);
                FUN_1407e4830(local_188,0,0x160);
                local_188[0] = *puVar5;
                uVar7 = 0;
                local_8c = 1;
                local_d8 = local_d8 | (uint)puVar5[0x14] >> 2 & 2;
                local_90 = puVar5[1];
                uVar4 = *(ulonglong *)(puVar5 + 10);
                local_e8 = uVar7;
                if (uVar4 != 0) {
                    if (DAT_140c3fe70 < uVar4) {
                        local_e8 = 0;
                    }
                    else {
                        local_e8 = uVar4 + DAT_140c3fe68;
                    }
                }
                uVar4 = *(ulonglong *)(puVar5 + 6);
                local_118 = uVar7;
                if ((uVar4 != 0) && (uVar4 <= DAT_140c3fe70)) {
                    local_118 = uVar4 + DAT_140c3fe68;
                }
                local_98 = puVar5[0x15];
                local_d0 = param_2[5];
                local_d4 = param_2[1];
                local_cc = 0;
                local_138 = ZEXT1216(*(undefined (*) [12])(param_2 + 6));
                local_178 = _DAT_140c78410;
                uStack372 = uRam0000000140c78414;
                uStack368 = uRam0000000140c78418;
                uStack364 = uRam0000000140c7841c;
                local_158 = _DAT_140c78430;
                uStack340 = uRam0000000140c78434;
                uStack336 = uRam0000000140c78438;
                uStack332 = uRam0000000140c7843c;
                local_168 = _DAT_140c78420;
                uStack356 = uRam0000000140c78424;
                uStack352 = uRam0000000140c78428;
                uStack348 = uRam0000000140c7842c;
                local_148 = CONCAT412(0x3f800000,ZEXT812(*(ulonglong *)(param_2 + 2)));
                if (local_98 == -1) {
                    local_94 = 0;
                }
                else {
                    local_94 = param_2[10];
                    local_98 = local_98 - local_94;
                }
                local_ac = puVar5[0x10];
                local_5c = puVar5[0x30];
                local_a8 = puVar5[0x11];
                fVar11 = DAT_140c3b438 * 0.005555556;
                local_a4 = puVar5[0xe];
                local_a0 = puVar5[0xf];
                local_58 = puVar5[0x34];
                local_9c = puVar5[0x12];
                local_54 = puVar5[0x35];
                local_88 = puVar5[0x17];
                local_4c = puVar5[0x39];
                local_128 = ZEXT1216(CONCAT48(fVar11 * (float)puVar5[0x33],
                                              CONCAT44(fVar11 * (float)puVar5[0x32],
                                                       fVar11 * (float)puVar5[0x31])));
                local_48 = puVar5[0x3a];
                local_44 = puVar5[0x3b];
                local_40 = puVar5[0x38];
                local_3c = puVar5[0x3c];
                local_38 = puVar5[0x3d];
                local_80 = param_2[9];
                lVar6 = FUN_14018b280(0x670,8);
                if (lVar6 != 0) {
                    uVar7 = FUN_140619900(lVar6);
                }
                iVar3 = FUN_14061a840(uVar7);
                if (iVar3 < 0) {
                    if (uVar7 != 0) {
                        FUN_140619bb0(uVar7);
                        FUN_14018b900(uVar7,0);
                    }
                }
                else {
                    lVar6 = *(longlong *)(param_1 + 8);
                    plVar8 = (longlong *)FUN_14018b280(0x18);
                    if ((ulonglong *)(plVar8 + 2) != (ulonglong *)0x0) {
                        plVar8[2] = uVar7;
                    }
                    *plVar8 = lVar6;
                    plVar8[1] = *(longlong *)(lVar6 + 8);
                    **(longlong ***)(lVar6 + 8) = plVar8;
                    *(longlong **)(lVar6 + 8) = plVar8;
                    if (uVar7 != 0) {
                        if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x18)) {
                            FUN_1400290d0(param_1 + 0x10);
                        }
                        uVar4 = (**(code **)(param_1 + 0x28))(uVar7 + 0x3d8);
                        lVar6 = *(longlong *)(param_1 + 0x20);
                        uVar10 = uVar4 % *(ulonglong *)(param_1 + 0x18);
                        puVar9 = (ulonglong *)FUN_14018b280(0x20);
                        if (puVar9 != (ulonglong *)0x0) {
                            uVar2 = *(ulonglong *)(lVar6 + uVar10 * 8);
                            *puVar9 = uVar4;
                            puVar9[1] = uVar2;
                            uVar1 = *(undefined4 *)(uVar7 + 0x3d8);
                            puVar9[3] = uVar7;
                            *(undefined4 *)(puVar9 + 2) = uVar1;
                        }
                        *(ulonglong **)(lVar6 + uVar10 * 8) = puVar9;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                    }
                }
            }
            return 0;
        }
        if ((uVar4 == *puVar9) &&
            (iVar3 = (**(code **)(param_1 + 0x30))(param_2 + 9,puVar9 + 2), iVar3 != 0)) {
            if (puVar9 != (ulonglong *)&DAT_ffffffffffffffe8) {
                return 0;
            }
            goto LAB_140600e7f;
        }
        puVar9 = (ulonglong *)puVar9[1];
    } while( true );
}



void FUN_140601260(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = DAT_140c65bb0;
    plVar2 = (longlong *)**(longlong **)(DAT_140c65bb0 + 8);
    if (plVar2 != *(longlong **)(DAT_140c65bb0 + 8)) {
        do {
            FUN_140620de0(plVar2[2],param_2);
            plVar2 = (longlong *)*plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(lVar1 + 8));
    }
    return;
}



void FUN_1406012b0(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    if (param_2 != (longlong *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 8);
        puVar2 = (undefined8 *)*puVar1;
        while (puVar4 = puVar2, puVar4 != puVar1) {
            puVar2 = (undefined8 *)*puVar4;
            if ((longlong *)puVar4[2] == param_2) {
                puVar3 = (undefined8 *)puVar4[1];
                *puVar3 = puVar2;
                puVar2[1] = puVar3;
                FUN_14018b900(puVar4,0);
            }
        }
        if ((longlong *)*param_2 != (longlong *)0x0) {
            *(longlong *)*param_2 = param_2[1];
        }
        if ((longlong *)param_2[1] != (longlong *)0x0) {
            *(longlong *)param_2[1] = *param_2;
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (*(int *)(param_2 + 0x7b) != 0) {
            FUN_1400b6120(param_1 + 0x10);
        }
        FUN_140625930(param_2);
        FUN_140619bb0(param_2);
        FUN_14018b900(param_2,0);
    }
    return;
}



undefined8 FUN_1406013e0(undefined8 param_1,ulonglong param_2)

{
    FUN_140601420();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140601420(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;

    *param_1 = &PTR_FUN_140b6f2f0;
    plVar1 = (longlong *)param_1[0x10];
    while (plVar1 != (longlong *)0x0) {
        lVar2 = *plVar1;
        plVar1 = (longlong *)plVar1[2];
        (**(code **)(lVar2 + 0x20))();
    }
    if (param_1[0x10] != 0) {
        FUN_1401a4a00(param_1 + 0x10);
    }
    lVar2 = param_1[0xe];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_14079eab0(param_1);
    return;
}



void FUN_1406014b0(longlong param_1,undefined4 param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_140240f80(param_2);
    if (lVar4 != 0) {
        lVar4 = FUN_1406017b0(param_1,param_2);
        if (lVar4 != 0) {
            for (plVar1 = *(longlong **)(param_1 + 0x80); plVar1 != (longlong *)0x0;
                 plVar1 = (longlong *)plVar1[2]) {
                iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
                if (iVar3 == *(int *)(lVar4 + 4)) {
                    (**(code **)(*plVar1 + 0x20))(plVar1);
                    break;
                }
            }
        }
        lVar2 = DAT_140c65898;
        *(int *)(lVar4 + 4) = param_3;
        lVar4 = FUN_1403d90d0(lVar2,param_3);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x16e8) != 0)) {
            FUN_140601880(param_1,param_2,param_3);
        }
        if (((param_3 == 0) || ((lVar4 != 0 && (*(longlong *)(lVar4 + 0x16e8) != 0)))) &&
            (param_1 == *(longlong *)(DAT_140c65898 + 0x6c50))) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_SetMark",&DAT_1409ea434,param_2,
                          param_3);
        }
    }
    return;
}



void FUN_1406015c0(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    int *piVar7;

    iVar1 = *(int *)(param_2 + 8);
    uVar5 = 0;
    if (*(ulonglong *)(param_1 + 0x78) != 0) {
        piVar7 = (int *)(*(longlong *)(param_1 + 0x70) + 4);
        while (*piVar7 != iVar1) {
            uVar5 = uVar5 + 1;
            piVar7 = piVar7 + 2;
            if (*(ulonglong *)(param_1 + 0x78) <= uVar5) {
                return;
            }
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + uVar5 * 8);
        if (iVar2 != 0) {
            lVar6 = FUN_1406017b0(param_1,iVar2);
            if (lVar6 != 0) {
                for (plVar3 = *(longlong **)(param_1 + 0x80); plVar3 != (longlong *)0x0;
                     plVar3 = (longlong *)plVar3[2]) {
                    iVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
                    if (iVar4 == *(int *)(lVar6 + 4)) {
                        (**(code **)(*plVar3 + 0x20))(plVar3);
                        break;
                    }
                }
            }
            FUN_140601880(param_1,iVar2,iVar1);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_SetMark",&DAT_1409ea434,iVar2,
                          iVar1);
        }
    }
    return;
}



void FUN_1406016c0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    undefined local_18 [16];

    if (param_2 == 0) {
        plVar2 = *(longlong **)(param_1 + 0x80);
        while (plVar2 != (longlong *)0x0) {
            lVar3 = *plVar2;
            plVar2 = (longlong *)plVar2[2];
            (**(code **)(lVar3 + 0x20))();
        }
    }
    else {
        uVar5 = 0;
        if (*(longlong *)(param_1 + 0x78) != 0) {
            do {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + uVar5 * 8);
                if (((iVar1 != 0) && (lVar3 = FUN_140240f80(), lVar3 != 0)) && (*(int *)(lVar3 + 4) != 0)) {
                    uVar4 = FUN_140248f00();
                    local_18 = ZEXT816(0);
                    FUN_1405787d0(param_1 + 0x80,0,iVar1,param_4,uVar4,0,0,0,param_1 + 0x80,local_18,0);
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(ulonglong *)(param_1 + 0x78));
            return;
        }
    }
    return;
}



int * FUN_1406017b0(longlong param_1,int param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;
    int *piVar5;

    uVar1 = *(ulonglong *)(param_1 + 0x78);
    uVar3 = 0;
    if (uVar1 != 0) {
        piVar5 = *(int **)(param_1 + 0x70);
        do {
            if (*piVar5 == param_2) {
                return *(int **)(param_1 + 0x70) + uVar3 * 2;
            }
            uVar3 = uVar3 + 1;
            piVar5 = piVar5 + 2;
        } while (uVar3 < uVar1);
    }
    lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x70),uVar1 + 1,8);
    if (*(longlong *)(param_1 + 0x70) != lVar4) {
        FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x70),*(longlong *)(param_1 + 0x78) << 3);
        lVar2 = *(longlong *)(param_1 + 0x70);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *(longlong *)(param_1 + 0x70) = lVar4;
    }
    *(ulonglong *)(param_1 + 0x78) = uVar1 + 1;
    *(int *)(*(longlong *)(param_1 + 0x70) + uVar1 * 8) = param_2;
    return (int *)(*(longlong *)(param_1 + 0x70) + uVar1 * 8);
}



undefined8 FUN_140601880(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined local_18 [16];

    if (param_3 != 0) {
        lVar1 = FUN_140240f80();
        if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) {
            uVar2 = FUN_140248f00();
            local_18 = ZEXT816(0);
            FUN_1405787d0(param_1 + 0x80,0,param_3,param_4,uVar2,0,0,0,param_1 + 0x80,local_18,0);
            return 1;
        }
    }
    return 0;
}



void FUN_140601920(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(param_1 + 0x48))();
    }
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(param_1 + 0x40))();
    }
    FUN_1406070a0(param_1);
    FUN_140195d70(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    }
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    return;
}



longlong FUN_1406019a0(longlong *param_1,undefined4 param_2)

{
    undefined8 uVar1;
    longlong local_18;
    undefined8 local_10;

    local_18 = *param_1;
    if (local_18 == 0) {
        return local_18;
    }
    local_10 = CONCAT44(param_2,1);
    FUN_1403f4900(DAT_140c65898,0x41a,&local_18);
    uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
    FUN_1400ea3e0(uVar1,"HideInstanceGameModeDialog",&DAT_1409e8fbc,1);
    FUN_1400ea3e0(uVar1,"Group_AcceptInvite","");
    FUN_1406070a0(param_1);
    return 1;
}



longlong FUN_140601a50(longlong *param_1)

{
    longlong local_18;
    undefined8 local_10;

    local_18 = *param_1;
    if (local_18 == 0) {
        return local_18;
    }
    local_10 = 0;
    FUN_1403f4900(DAT_140c65898,0x41a,&local_18);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_DeclineInvite","");
    FUN_1406070a0(param_1);
    return 1;
}



undefined8 FUN_140601ad0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (param_2 < *(ulonglong *)(lVar1 + 0x60))) {
        uVar2 = *(ulonglong *)(lVar1 + 0x68);
        uVar4 = uVar2;
        if ((param_2 != 0) && (uVar4 = param_2, param_2 <= uVar2)) {
            uVar4 = param_2 - 1;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar4 * 8);
        if (lVar3 != 0) {
            if (*(ulonglong *)(lVar1 + 0x60) == 0) {
                lVar5 = 0;
            }
            else {
                lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar2 * 8);
            }
            if (lVar3 != lVar5) {
                local_28 = *(undefined8 *)(lVar1 + 0x48);
                local_20 = *(undefined8 *)(lVar3 + 0x10);
                local_18 = *(undefined8 *)(lVar3 + 0x18);
                FUN_1403f4740(DAT_140c65898,0x428,&local_28);
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_140601b80(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (param_2 < *(ulonglong *)(lVar1 + 0x60))) {
        if (param_2 == 0) {
            param_2 = *(ulonglong *)(lVar1 + 0x68);
        }
        else if (param_2 < *(ulonglong *)(lVar1 + 0x68) || param_2 == *(ulonglong *)(lVar1 + 0x68)) {
            param_2 = param_2 - 1;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + param_2 * 8);
        if (lVar2 != 0) {
            local_28 = *(undefined8 *)(lVar1 + 0x48);
            local_20 = *(undefined8 *)(lVar2 + 0x10);
            local_18 = *(undefined8 *)(lVar2 + 0x18);
            FUN_1403f4740(DAT_140c65898,0x446,&local_28);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140601c10(longlong param_1,int param_2)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 local_18;
    ulonglong local_10;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 != 0) {
        uVar1 = *(uint *)(lVar2 + 8);
        if (param_2 == 0) {
            uVar3 = uVar1 & 0xffffffdf | 0x10;
        }
        else if (param_2 == 1) {
            uVar3 = uVar1 & 0xffffffcf;
        }
        else {
            if (param_2 != 2) {
                return 0;
            }
            uVar3 = uVar1 & 0xffffffef | 0x20;
        }
        if (uVar1 != uVar3) {
            local_18 = *(undefined8 *)(lVar2 + 0x48);
            local_10 = (ulonglong)uVar3;
            FUN_1403f4740(DAT_140c65898,0x406,&local_18);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140601c90(longlong param_1,int param_2)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 local_18;
    ulonglong local_10;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 != 0) {
        uVar1 = *(uint *)(lVar2 + 8);
        if (param_2 == 0) {
            uVar3 = uVar1 & 0xffffff7f | 0x40;
        }
        else if (param_2 == 1) {
            uVar3 = uVar1 & 0xffffff3f;
        }
        else {
            if (param_2 != 2) {
                return 0;
            }
            uVar3 = uVar1 & 0xffffffbf | 0x80;
        }
        if (uVar1 != uVar3) {
            local_18 = *(undefined8 *)(lVar2 + 0x48);
            local_10 = (ulonglong)uVar3;
            FUN_1403f4740(DAT_140c65898,0x406,&local_18);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140601d20(longlong param_1,ulonglong param_2,int param_3,uint param_4)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (param_2 < *(ulonglong *)(lVar1 + 0x60))) {
        if (param_2 == 0) {
            param_2 = *(ulonglong *)(lVar1 + 0x68);
        }
        else if (param_2 < *(ulonglong *)(lVar1 + 0x68) || param_2 == *(ulonglong *)(lVar1 + 0x68)) {
            param_2 = param_2 - 1;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + param_2 * 8);
        if (lVar2 != 0) {
            local_28 = *(undefined8 *)(lVar1 + 0x48);
            local_20 = *(undefined8 *)(lVar2 + 0x10);
            local_18 = *(undefined8 *)(lVar2 + 0x18);
            if (param_3 == 0) {
                uVar3 = ~param_4 & *(uint *)(lVar2 + 8);
            }
            else {
                uVar3 = param_4 | *(uint *)(lVar2 + 8);
            }
            if (param_4 == 0x800) {
                uVar3 = uVar3 | 0x4000;
            }
            local_10 = CONCAT44(uVar3 ^ *(uint *)(lVar2 + 8),uVar3);
            FUN_1403f4740(DAT_140c65898,0x408,&local_28);
            return 1;
        }
    }
    return 0;
}



void FUN_140601df0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    bool bVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined auStack88 [32];
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (param_2 < *(ulonglong *)(lVar1 + 0x60))) {
        uVar6 = *(ulonglong *)(lVar1 + 0x68);
        uVar5 = uVar6;
        if ((param_2 != 0) && (uVar5 = param_2, param_2 <= uVar6)) {
            uVar5 = param_2 - 1;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar5 * 8);
        if ((lVar2 != 0) && (param_3 < *(ulonglong *)(lVar1 + 0x60))) {
            if ((param_3 != 0) && (bVar4 = param_3 <= uVar6, uVar6 = param_3, bVar4)) {
                uVar6 = param_3 - 1;
            }
            lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar6 * 8);
            if ((lVar3 != 0) && (lVar2 != lVar3)) {
                local_38 = *(undefined8 *)(lVar1 + 0x48);
                local_30 = *(undefined8 *)(lVar2 + 0x10);
                local_28 = *(undefined8 *)(lVar2 + 0x18);
                local_20 = *(undefined8 *)(lVar3 + 0x10);
                local_18 = *(undefined8 *)(lVar3 + 0x18);
                FUN_1403f4740(DAT_140c65898,0x463,&local_38);
                FUN_1407db4f0(local_10 ^ (ulonglong)auStack88);
                return;
            }
        }
    }
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack88);
    return;
}



undefined8 FUN_140601f00(longlong param_1,ulonglong param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (param_2 < *(ulonglong *)(lVar1 + 0x60))) {
        if (param_2 == 0) {
            param_2 = *(ulonglong *)(lVar1 + 0x68);
        }
        else if (param_2 < *(ulonglong *)(lVar1 + 0x68) || param_2 == *(ulonglong *)(lVar1 + 0x68)) {
            param_2 = param_2 - 1;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + param_2 * 8);
        if (lVar2 != 0) {
            local_28 = *(undefined8 *)(lVar1 + 0x48);
            local_20 = *(undefined8 *)(lVar2 + 0x10);
            local_18 = *(undefined8 *)(lVar2 + 0x18);
            uVar4 = 0xffffffff;
            if (param_3 != 0xffffffff) {
                uVar4 = param_3;
            }
            uVar3 = 0;
            if (uVar4 != 0) {
                uVar3 = uVar4;
            }
            local_10 = (ulonglong)uVar3;
            FUN_1403f4740(DAT_140c65898,0x45c,&local_28);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140601fb0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8),
                 lVar1 != 0)) && (*(int *)(lVar1 + 0xe8) == 0)) {
        lVar1 = FUN_14024acc0(*(undefined4 *)(lVar1 + 0xd4));
        if ((lVar1 != 0) &&
            ((8 < *(uint *)(lVar1 + 0x14) || ((0x1a4U >> (*(uint *)(lVar1 + 0x14) & 0x1f) & 1) == 0)))) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_140602020(longlong param_1,undefined8 param_2)

{
    int iVar1;
    undefined8 local_18;
    undefined8 local_10;

    if (*(longlong *)(param_1 + 0x40) != 0) {
        iVar1 = FUN_1403e1170(param_2,0xb);
        if ((iVar1 != 0) &&
            ((*(longlong *)(param_1 + 0x40) == 0 || (*(longlong *)(param_1 + 0x70) == 0)))) {
            local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48);
            local_10 = param_2;
            FUN_1403f4740(DAT_140c65898,0x44a,&local_18);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1406020b0(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    ulonglong uVar6;
    bool bVar7;
    undefined8 local_res8 [4];

    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 == 0) {
        return 0;
    }
    uVar2 = 0;
    uVar6 = uVar2;
    if (*(longlong *)(lVar1 + 0x60) != 0) {
        uVar6 = *(ulonglong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8);
    }
    if ((*(uint *)(uVar6 + 8) & 0x2000) == 0) {
        return 0;
    }
    if (*(ulonglong *)(lVar1 + 0x78) != 0) {
        piVar3 = (int *)(*(longlong *)(lVar1 + 0x70) + 4);
        do {
            if (*piVar3 == param_3) {
                iVar4 = *(int *)(*(longlong *)(lVar1 + 0x70) + uVar2 * 8);
                if (iVar4 != 0) {
                    iVar5 = 0;
                    if ((param_2 != 0) && (bVar7 = iVar4 == param_2, iVar5 = param_3, iVar4 = param_2, bVar7))
                    {
                        iVar5 = 0;
                    }
                    goto LAB_140602125;
                }
                break;
            }
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 2;
        } while (uVar2 < *(ulonglong *)(lVar1 + 0x78));
    }
    iVar5 = param_3;
    iVar4 = param_2;
    if (param_2 != 0) {
        LAB_140602125:
        local_res8[0] = CONCAT44(iVar5,iVar4);
        FUN_1403f4900(DAT_140c65898,0x432,local_res8);
    }
    return 1;
}



undefined8 FUN_140602180(undefined8 param_1,longlong param_2)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_Invite_Result",&DAT_1409ea2bc,
                  *(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
    if (*(int *)(param_2 + 0x10) == 10) {
        FUN_1406070a0(param_1);
    }
    return 0;
}



undefined8 FUN_1406021e0(undefined8 param_1,longlong param_2)

{
    undefined *puVar1;

    FUN_140606d90();
    puVar1 = &DAT_1409f3c94;
    if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 0x10)) {
        puVar1 = *(undefined **)
                ((ulonglong)*(uint *)(param_2 + 0xc) * 0xa8 + *(longlong *)(param_2 + 0x18));
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_Invited",&DAT_1409ea264,puVar1);
    return 0;
}



undefined8 FUN_140602240(longlong param_1,longlong param_2)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_Request_Result",&DAT_1409ea21c,
                  *(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                  *(undefined4 *)(param_2 + 0x14));
    if (*(int *)(param_2 + 0x10) == 10) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 0;
    }
    return 0;
}



undefined8 FUN_1406022c0(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;

    *(undefined8 *)(param_1 + 0x20) = *param_2;
    uVar1 = param_2[3];
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    uVar1 = FUN_140605420();
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_Referral",&DAT_1409ea074,uVar1,
                  param_2[3]);
    return 0;
}



undefined8 FUN_1406029b0(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) == *param_2)) ||
        ((lVar2 = *(longlong *)(param_1 + 0x48), lVar2 != 0 &&
                                                 (*(longlong *)(lVar2 + 0x48) == *param_2)))) {
        iVar1 = FUN_14079ee60(lVar2,param_2 + 2,&local_res8);
        if ((iVar1 != 0) &&
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + local_res8 * 8), lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0x134) = *(undefined4 *)(param_2 + 4);
            *(undefined4 *)(lVar2 + 0x138) = *(undefined4 *)((longlong)param_2 + 0x24);
            *(undefined4 *)(lVar2 + 0x13c) = *(undefined4 *)(param_2 + 5);
            *(undefined4 *)(lVar2 + 0x140) = *(undefined4 *)((longlong)param_2 + 0x2c);
            *(undefined4 *)(lVar2 + 0x144) = *(undefined4 *)(param_2 + 6);
            *(undefined4 *)(lVar2 + 0x148) = *(undefined4 *)((longlong)param_2 + 0x34);
            *(undefined4 *)(lVar2 + 0x14c) = *(undefined4 *)(param_2 + 7);
            *(undefined4 *)(lVar2 + 0x150) = *(undefined4 *)((longlong)param_2 + 0x3c);
            *(undefined4 *)(lVar2 + 0x154) = *(undefined4 *)(param_2 + 8);
            *(undefined4 *)(lVar2 + 0x158) = *(undefined4 *)((longlong)param_2 + 0x44);
            *(undefined4 *)(lVar2 + 0x15c) = *(undefined4 *)(param_2 + 9);
            *(undefined4 *)(lVar2 + 0x160) = *(undefined4 *)((longlong)param_2 + 0x4c);
            *(undefined4 *)(lVar2 + 0x164) = *(undefined4 *)(param_2 + 10);
            *(undefined4 *)(lVar2 + 0x168) = *(undefined4 *)((longlong)param_2 + 0x54);
            *(undefined4 *)(lVar2 + 0x16c) = *(undefined4 *)(param_2 + 0xb);
            *(undefined4 *)(lVar2 + 0x170) = *(undefined4 *)((longlong)param_2 + 0x5c);
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"MatchingPenaltyUpdated","");
    }
    return 0;
}



undefined8 FUN_140602ae0(longlong param_1,longlong *param_2)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = *(longlong *)(param_1 + 0x40);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x48) == *param_2)) {
        uVar1 = *(ulonglong *)(lVar3 + 0x60);
        uVar4 = 0;
        if (uVar1 != 0) {
            do {
                lVar3 = *(longlong *)(param_1 + 0x40);
                if (uVar4 != *(ulonglong *)(lVar3 + 0x68)) {
                    if (uVar4 < *(ulonglong *)(lVar3 + 0x60)) {
                        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x58) + uVar4 * 8);
                    }
                    else {
                        lVar3 = 0;
                    }
                    if (*(int *)(lVar3 + 0x10) == *(int *)(DAT_140c635f0 + 0x1680)) {
                        FUN_1405e2530(DAT_140c65898 + 0x6838,lVar3 + 0x10,lVar3 + 0x20);
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
        }
        puVar2 = *(undefined8 **)(param_1 + 0x40);
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
        }
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
        FUN_140195d70(param_1 + 0x60);
        lVar3 = DAT_140c65898;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(lVar3 + 0x6f98) = 1;
        FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"Group_Left",&DAT_1409ea14c,
                      *(undefined4 *)(param_2 + 1));
        return 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if ((puVar2 != (undefined8 *)0x0) && (puVar2[9] == *param_2)) {
        (**(code **)*puVar2)(puVar2,1);
        *(undefined8 *)(param_1 + 0x48) = 0;
    }
    return 0;
}



undefined8 FUN_140602c30(longlong param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
        FUN_14079eb90(lVar1,*(undefined4 *)(param_2 + 2));
        FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x11b8);
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
        FUN_14079eb90(lVar1,*(undefined4 *)(param_2 + 2));
    }
    return 0;
}



undefined8 FUN_140602ca0(longlong param_1,longlong *param_2)

{
    longlong lVar1;

    lVar1 = DAT_140c65898;
    if ((*(longlong *)(param_1 + 0x40) != 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) == *param_2)) {
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 8) = *(undefined4 *)(param_2 + 2);
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"Group_FlagsChanged",&DAT_1409d0e6e);
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
        *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_2 + 2);
    }
    return 0;
}



undefined8 FUN_140602d20(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong local_res8;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x48) != *param_2)) {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
            iVar3 = FUN_14079ee60(lVar1,param_2 + 2,&local_res8);
            if ((iVar3 != 0) &&
                (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
                *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_2 + 4);
            }
        }
    }
    else {
        iVar3 = FUN_14079ee60(lVar1,param_2 + 2,&local_res8);
        if ((iVar3 != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
            uVar6 = *(uint *)(param_2 + 4) ^ *(uint *)(lVar1 + 8);
            *(uint *)(lVar1 + 8) = *(uint *)(param_2 + 4);
            if (uVar6 != 0) {
                local_20 = 1;
                lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
                local_38 = &PTR_FUN_140b569f0;
                local_28 = lVar1;
                if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar1);
                }
                puVar2 = *(undefined8 **)(lVar1 + 0x10);
                uVar5 = FUN_14005c1b0(lVar1,0,0);
                *(undefined4 *)(puVar2 + 1) = 5;
                *puVar2 = uVar5;
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(lVar1);
                local_30 = uVar4;
                FUN_1400fafe0(&local_38,uVar6,&PTR_DAT_140c39100,0xf);
                iVar3 = FUN_140605420(param_1);
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_MemberFlagsChanged",
                              &DAT_1409ea12c,iVar3 + 1,*(undefined4 *)((longlong)param_2 + 0x24),uVar4);
                FUN_1400579e0(lVar1);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406031d0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    undefined uVar2;
    int iVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x48) != *param_2)) {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
            iVar3 = FUN_14079ee60(lVar1,lVar1 + 0x10,&local_res8);
            if ((iVar3 != 0) &&
                (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
                *(undefined4 *)(lVar1 + 0x130) = 0;
            }
            lVar1 = *(longlong *)(param_1 + 0x48);
            *(longlong *)(lVar1 + 0x10) = param_2[2];
            *(longlong *)(lVar1 + 0x18) = param_2[3];
            lVar1 = *(longlong *)(param_1 + 0x48);
            iVar3 = FUN_14079ee60(lVar1,param_2 + 2,&local_res8);
            if (iVar3 != 0) {
                lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8);
                if (lVar1 != 0) {
                    *(undefined4 *)(lVar1 + 0x130) = 1;
                    return 0;
                }
            }
        }
    }
    else {
        iVar3 = FUN_14079ee60(lVar1,lVar1 + 0x10,&local_res8);
        if ((iVar3 != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
            *(undefined4 *)(lVar1 + 0x130) = 0;
        }
        lVar1 = *(longlong *)(param_1 + 0x40);
        *(longlong *)(lVar1 + 0x10) = param_2[2];
        *(longlong *)(lVar1 + 0x18) = param_2[3];
        lVar1 = *(longlong *)(param_1 + 0x40);
        iVar3 = FUN_14079ee60(lVar1,param_2 + 2,&local_res8);
        if ((iVar3 != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
            *(undefined4 *)(lVar1 + 0x130) = 1;
            if ((*(int *)(param_2 + 2) == *(int *)(param_1 + 0x50)) &&
                (param_2[3] == *(longlong *)(param_1 + 0x58))) {
                uVar2 = 1;
            }
            else {
                uVar2 = 0;
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_MemberPromoted",&DAT_1409ea094,
                          lVar1 + 0x20,uVar2);
        }
    }
    return 0;
}



undefined8 FUN_140603380(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
        iVar2 = FUN_14079ee60(lVar1,param_2 + 1,&local_res8);
        if (iVar2 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8);
        }
        FUN_140607490(uVar3,param_2);
        FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x11b8);
        return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
        iVar2 = FUN_14079ee60(lVar1,param_2 + 1,&local_res8);
        if (iVar2 == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8);
        }
        FUN_140607490(uVar3,param_2);
    }
    return 0;
}



undefined8 FUN_140603450(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) == *param_2)) {
        iVar1 = FUN_14079ee60(lVar2,param_2 + 1,&local_res8);
        if (iVar1 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + local_res8 * 8);
        }
        *(undefined4 *)(lVar2 + 0xd0) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(lVar2 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0x24);
        *(undefined4 *)(lVar2 + 0xd8) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)(lVar2 + 0xe0) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)(param_2 + 7);
        FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x11b8);
        return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x48);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) == *param_2)) {
        iVar1 = FUN_14079ee60(lVar2,param_2 + 1,&local_res8);
        if (iVar1 == 0) {
            lVar2 = 0;
        }
        else {
            lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + local_res8 * 8);
        }
        *(undefined4 *)(lVar2 + 0xd0) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(lVar2 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0x24);
        *(undefined4 *)(lVar2 + 0xd8) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)(lVar2 + 0xe0) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)(param_2 + 7);
    }
    return 0;
}



undefined8 FUN_140603970(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    if ((*(longlong *)(param_1 + 0x40) != 0) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) == *param_2)) {
        lVar2 = FUN_140200220();
        if (lVar2 == 0) {
            uVar3 = 60000;
        }
        else {
            uVar3 = *(undefined4 *)(lVar2 + 4);
        }
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_140603a30;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x60,uVar3,local_28,4);
        iVar1 = FUN_140605420(param_1,param_2 + 1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_ReadyCheck",&DAT_1409ea31c,
                      iVar1 + 1,param_2[3]);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140603a60(longlong param_1,longlong *param_2)

{
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    int iVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    short *psVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined ***pppuVar12;
    longlong local_res18 [2];
    undefined local_218 [8];
    longlong local_210;
    undefined2 *local_208;
    longlong local_200;
    undefined **local_1f8;
    undefined local_1f0 [8];
    undefined2 *local_1e8;
    undefined2 *local_1e0;
    undefined local_138 [16];
    undefined2 *local_128;
    undefined **local_118;
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    longlong local_58;

    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 == 0) {
        return 0;
    }
    if (*(longlong *)(lVar6 + 0x48) != *param_2) {
        return 0;
    }
    iVar4 = FUN_14079ee60(lVar6,param_2 + 2,local_res18);
    plVar10 = (longlong *)0x0;
    plVar8 = plVar10;
    if (iVar4 != 0) {
        plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x58) + local_res18[0] * 8);
    }
    lVar6 = *(longlong *)(param_1 + 0x40);
    iVar4 = FUN_14079ee60(lVar6,param_2 + 4,local_res18);
    if (iVar4 == 0) {
        local_res18[0] = 0;
    }
    else {
        local_res18[0] = *(longlong *)(*(longlong *)(lVar6 + 0x58) + local_res18[0] * 8);
    }
    if (*(int *)(param_2 + 6) == 0) {
        iVar4 = *(int *)(plVar8 + 0x22);
        if ((iVar4 == *(int *)(param_2 + 4)) && (plVar8[0x23] == param_2[5])) goto LAB_140604268;
        if ((iVar4 != 0) &&
            ((plVar8[0x23] != 0 && (lVar6 = FUN_14079ee20(*(undefined8 *)(param_1 + 0x40)), lVar6 != 0)))
                ) {
            FUN_1404dde90(&local_1f8);
            lVar11 = FUN_14018b280(0x60);
            if (lVar11 == 0) {
                plVar10 = (longlong *)0x0;
            }
            else {
                plVar10 = (longlong *)FUN_1404ddb40(lVar11,plVar8 + 4);
            }
            lVar11 = 0;
            local_210 = 0;
            local_208 = (undefined2 *)0x0;
            local_200 = 0;
            do {
                lVar11 = lVar11 + 1;
            } while (*(short *)(&DAT_140b0a7c8 + lVar11 * 2) != 0);
            lVar11 = lVar11 * 2 >> 1;
            uVar1 = lVar11 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar3 = uVar1 * 2;
                local_208 = (undefined2 *)FUN_14018b280(lVar3,0);
                local_200 = (longlong)local_208 + lVar3;
            }
            lVar3 = (longlong)local_208;
            lVar11 = lVar11 * 2;
            local_210 = (longlong)local_208;
            FUN_1407db590(local_208,&DAT_140b0a7c8,lVar11);
            local_208 = (undefined2 *)(lVar3 + lVar11);
            plVar7 = (longlong *)0x0;
            if (local_208 != (undefined2 *)0x0) {
                *local_208 = 0;
            }
            FUN_1400b7480(&local_1f8,plVar10);
            (**(code **)(*plVar10 + 0x48))(plVar10,local_218);
            if (local_210 != 0) {
                FUN_14018b900(local_210,0);
            }
            lVar11 = FUN_14018b280(0x60);
            plVar10 = plVar7;
            if (lVar11 != 0) {
                plVar10 = (longlong *)FUN_1404ddb40(lVar11,lVar6 + 0x20);
            }
            local_210 = 0;
            local_208 = (undefined2 *)0x0;
            local_200 = 0;
            do {
                plVar7 = (longlong *)((longlong)plVar7 + 1);
            } while (L"target"[(longlong)plVar7] != L'\0');
            lVar6 = (longlong)plVar7 * 2 >> 1;
            uVar1 = lVar6 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar11 = uVar1 * 2;
                local_208 = (undefined2 *)FUN_14018b280(lVar11,0);
                local_200 = (longlong)local_208 + lVar11;
            }
            lVar11 = (longlong)local_208;
            lVar6 = lVar6 * 2;
            local_210 = (longlong)local_208;
            FUN_1407db590(local_208,L"target",lVar6);
            local_208 = (undefined2 *)(lVar11 + lVar6);
            lVar6 = 0;
            if (local_208 != (undefined2 *)0x0) {
                *local_208 = 0;
            }
            FUN_1400b7480(&local_1f8,plVar10);
            (**(code **)(*plVar10 + 0x48))(plVar10,local_218);
            if (local_210 != 0) {
                FUN_14018b900(local_210,0);
            }
            psVar9 = (short *)FUN_14034bdd0();
            if (psVar9 == (short *)0x0) {
                if (local_1e8 != local_1e0) {
                    *local_1e8 = 0;
                    local_1e0 = local_1e8;
                }
            }
            else {
                sVar2 = *psVar9;
                while (sVar2 != 0) {
                    lVar6 = lVar6 + 1;
                    sVar2 = psVar9[lVar6];
                }
                FUN_14001c480(local_1f0,psVar9,psVar9 + lVar6);
            }
            lVar6 = FUN_1400b7660(&local_1f8);
            FUN_140003890(DAT_140c658a0,7,0,*(undefined8 *)(lVar6 + 8),0,0);
            if (local_138._0_8_ != 0) {
                FUN_14018b900(local_138._0_8_,0);
            }
            FUN_1400b7390(&local_1f8);
        }
        FUN_140604c70(param_1,plVar8,local_res18[0]);
        FUN_1404dde90(&local_118);
        lVar6 = FUN_14018b280(0x60);
        if (lVar6 == 0) {
            plVar10 = (longlong *)0x0;
        }
        else {
            plVar10 = (longlong *)FUN_1404ddb40(lVar6,plVar8 + 4);
        }
        plVar8 = (longlong *)0x0;
        local_210 = 0;
        local_208 = (undefined2 *)0x0;
        local_200 = 0;
        plVar7 = plVar8;
        do {
            plVar7 = (longlong *)((longlong)plVar7 + 1);
        } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar7 * 2) != 0);
        lVar6 = (longlong)plVar7 * 2 >> 1;
        uVar1 = lVar6 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar11 = uVar1 * 2;
            local_208 = (undefined2 *)FUN_14018b280(lVar11,0);
            local_200 = (longlong)local_208 + lVar11;
        }
        lVar11 = (longlong)local_208;
        lVar6 = lVar6 * 2;
        local_210 = (longlong)local_208;
        FUN_1407db590(local_208,&DAT_140b0a7c8,lVar6);
        local_208 = (undefined2 *)(lVar11 + lVar6);
        if (local_208 != (undefined2 *)0x0) {
            *local_208 = 0;
        }
        FUN_1400b7480(&local_118,plVar10);
        (**(code **)(*plVar10 + 0x48))(plVar10,local_218);
        if (local_210 != 0) {
            FUN_14018b900(local_210,0);
        }
        lVar6 = FUN_14018b280(0x60);
        plVar10 = plVar8;
        if (lVar6 != 0) {
            plVar10 = (longlong *)FUN_1404ddb40(lVar6,local_res18[0] + 0x20);
        }
        local_210 = 0;
        local_208 = (undefined2 *)0x0;
        local_200 = 0;
        plVar7 = plVar8;
        do {
            plVar7 = (longlong *)((longlong)plVar7 + 1);
        } while (L"target"[(longlong)plVar7] != L'\0');
        lVar6 = (longlong)plVar7 * 2 >> 1;
        uVar1 = lVar6 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar11 = uVar1 * 2;
            local_208 = (undefined2 *)FUN_14018b280(lVar11,0);
            local_200 = (longlong)local_208 + lVar11;
        }
        lVar11 = (longlong)local_208;
        lVar6 = lVar6 * 2;
        local_210 = (longlong)local_208;
        FUN_1407db590(local_208,L"target",lVar6);
        local_208 = (undefined2 *)(lVar11 + lVar6);
        if (local_208 != (undefined2 *)0x0) {
            *local_208 = 0;
        }
        FUN_1400b7480(&local_118,plVar10);
        (**(code **)(*plVar10 + 0x48))(plVar10,local_218);
        if (local_210 != 0) {
            FUN_14018b900(local_210,0);
        }
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 == (short *)0x0) {
            if (local_108 != local_100) {
                *local_108 = 0;
                local_100 = local_108;
            }
        }
        else {
            sVar2 = *psVar9;
            while (sVar2 != 0) {
                plVar8 = (longlong *)((longlong)plVar8 + 1);
                sVar2 = psVar9[(longlong)plVar8];
            }
            FUN_14001c480(local_110,psVar9,psVar9 + (longlong)plVar8);
        }
        lVar6 = FUN_1400b7660(&local_118);
        FUN_140003890(DAT_140c658a0,7,0,*(undefined8 *)(lVar6 + 8),0,0);
        if (local_58 != 0) {
            FUN_14018b900(local_58,0);
        }
        pppuVar12 = &local_118;
    }
    else {
        lVar6 = *(longlong *)(param_1 + 0x40);
        iVar4 = FUN_14079ee60(lVar6,plVar8 + 0x22,local_res18);
        if ((iVar4 != 0) &&
            (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x58) + local_res18[0] * 8), lVar6 != 0)) {
            FUN_1406075f0(lVar6 + 0x120,param_2 + 2);
        }
        *(undefined4 *)(plVar8 + 0x22) = 0;
        plVar8[0x23] = 0;
        FUN_1400b6f30(&local_1f8);
        local_1f8 = &PTR_FUN_140b69230;
        local_128 = (undefined2 *)0x0;
        local_138 = ZEXT816(0);
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        local_138 = CONCAT88(puVar5,puVar5);
        local_128 = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        lVar6 = FUN_14018b280(0x60);
        plVar7 = plVar10;
        if (lVar6 != 0) {
            plVar7 = (longlong *)FUN_1404ddb40(lVar6,plVar8 + 4);
        }
        local_210 = 0;
        local_208 = (undefined2 *)0x0;
        local_200 = 0;
        plVar8 = plVar10;
        do {
            plVar8 = (longlong *)((longlong)plVar8 + 1);
        } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar8 * 2) != 0);
        lVar6 = (longlong)plVar8 * 2 >> 1;
        uVar1 = lVar6 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar11 = uVar1 * 2;
            local_208 = (undefined2 *)FUN_14018b280(lVar11,0);
            local_200 = (longlong)local_208 + lVar11;
        }
        lVar11 = (longlong)local_208;
        lVar6 = lVar6 * 2;
        local_210 = (longlong)local_208;
        FUN_1407db590(local_208,&DAT_140b0a7c8,lVar6);
        local_208 = (undefined2 *)(lVar11 + lVar6);
        if (local_208 != (undefined2 *)0x0) {
            *local_208 = 0;
        }
        FUN_1400b7480(&local_1f8,plVar7);
        (**(code **)(*plVar7 + 0x48))(plVar7,local_218);
        if (local_210 != 0) {
            FUN_14018b900(local_210,0);
        }
        psVar9 = (short *)FUN_14034bdd0();
        if (psVar9 == (short *)0x0) {
            if (local_1e8 != local_1e0) {
                *local_1e8 = 0;
                local_1e0 = local_1e8;
            }
        }
        else {
            sVar2 = *psVar9;
            while (sVar2 != 0) {
                plVar10 = (longlong *)((longlong)plVar10 + 1);
                sVar2 = psVar9[(longlong)plVar10];
            }
            FUN_14001c480(local_1f0,psVar9,psVar9 + (longlong)plVar10);
        }
        lVar6 = FUN_1400b7660(&local_1f8);
        FUN_140003890(DAT_140c658a0,7,0,*(undefined8 *)(lVar6 + 8),0,0);
        if (local_138._0_8_ != 0) {
            FUN_14018b900(local_138._0_8_,0);
        }
        pppuVar12 = &local_1f8;
    }
    FUN_1400b7390(pppuVar12);
    LAB_140604268:
    FUN_140605020(param_1,1);
    return 0;
}



undefined8 FUN_140604b70(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x48) != *param_2)) {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) == *param_2)) {
            iVar2 = FUN_14079ee60(lVar1,param_2 + 1,&local_res8);
            if ((iVar2 != 0) &&
                (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
                *(undefined8 *)(lVar1 + 0x108) = 0;
                FUN_1403705b0(lVar1 + 0x100,param_2[4],*(undefined4 *)(param_2 + 3));
            }
        }
    }
    else {
        iVar2 = FUN_14079ee60(lVar1,param_2 + 1,&local_res8);
        if ((iVar2 != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8), lVar1 != 0)) {
            *(undefined8 *)(lVar1 + 0x108) = 0;
            FUN_1403705b0(lVar1 + 0x100,param_2[4],*(undefined4 *)(param_2 + 3));
            FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x11b8);
            return 0;
        }
    }
    return 0;
}



void FUN_140604c70(longlong param_1,longlong param_2,longlong param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    if (((((*(longlong *)(param_1 + 0x40) != 0) && (param_2 != 0)) && (param_3 != 0)) &&
         (*(uint *)(param_3 + 0x78) <= *(uint *)(param_2 + 0x78))) &&
        ((*(int *)(param_3 + 0x110) == 0 || (*(longlong *)(param_3 + 0x118) == 0)))) {
        if ((*(int *)(param_2 + 0x110) == 0) || (*(longlong *)(param_2 + 0x118) == 0)) {
            if (*(longlong *)(param_2 + 0x128) != 0) {
                uVar4 = 0;
                uVar5 = uVar4;
                if (*(longlong *)(param_2 + 0x128) != 0) {
                    do {
                        lVar3 = FUN_14079ee20(*(undefined8 *)(param_1 + 0x40),
                                              *(longlong *)(param_2 + 0x120) + uVar5);
                        if (lVar3 != 0) {
                            *(undefined4 *)(lVar3 + 0x110) = 0;
                            *(undefined8 *)(lVar3 + 0x118) = 0;
                            if ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x50)) &&
                                (*(longlong *)(lVar3 + 0x18) == *(longlong *)(param_1 + 0x58))) {
                                FUN_140604f10(param_1,0,0);
                            }
                        }
                        uVar4 = uVar4 + 1;
                        uVar5 = uVar5 + 0x10;
                    } while (uVar4 < *(ulonglong *)(param_2 + 0x128));
                }
                *(undefined8 *)(param_2 + 0x128) = 0;
            }
        }
        else {
            lVar3 = FUN_14079ee20(*(longlong *)(param_1 + 0x40),param_2 + 0x110);
            if (lVar3 != 0) {
                FUN_1406075f0(lVar3 + 0x120,param_2 + 0x10);
            }
        }
        *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_3 + 0x18);
        FUN_140573d10(param_3 + 0x120,param_2 + 0x10);
        lVar3 = DAT_140c65898;
        uVar1 = FUN_1403d9500(DAT_140c65898,param_3 + 0x10);
        uVar2 = FUN_1403d9500();
        FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"Group_MentorRelationship",&DAT_1409ea454,uVar2,
                      uVar1);
    }
    return;
}



void FUN_140604e20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    short *psVar4;
    longlong lVar5;
    undefined auStack168 [32];
    undefined4 local_88;
    longlong local_78 [2];
    short local_68 [40];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (((lVar2 != 0) && (iVar3 = FUN_14079ee60(lVar2,param_2,local_78), iVar3 != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + local_78[0] * 8), lVar2 != 0)) {
        lVar5 = 0x21;
        psVar4 = local_68;
        do {
            if ((lVar5 == -0x7fffffdd) ||
                (sVar1 = *(short *)((lVar2 - (longlong)local_68) + 0x20 + (longlong)psVar4), sVar1 == 0)) {
                if (lVar5 != 0) goto LAB_140604ebe;
                break;
            }
            *psVar4 = sVar1;
            psVar4 = psVar4 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        psVar4 = psVar4 + -1;
        LAB_140604ebe:
        *psVar4 = 0;
        local_88 = param_3;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_Operation_Result",&DAT_1409ea344,
                      local_68);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack168);
    return;
}



void FUN_140604f10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 == 0) {
        FUN_140604e20(param_1,param_1 + 0x50,0xd);
        return;
    }
    if (((*(longlong *)(DAT_140c65898 + 0x7258) != 0) &&
         (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) != 0)) ||
        ((*(byte *)(lVar1 + 8) & 1) == 0)) {
        FUN_140604e20(param_1,param_1 + 0x50,0x17);
        return;
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar2 == 0) {
        FUN_140604e20(param_1,param_1 + 0x50,0x10);
        return;
    }
    if (*(int *)(lVar2 + 0x2ac) == 0) {
        if (*(int *)(lVar2 + 0x38) != *(int *)(lVar1 + 0x38)) {
            lVar3 = 0;
            lVar2 = lVar3;
            if (*(longlong *)(lVar1 + 0x60) != 0) {
                lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8);
            }
            if ((*(int *)(lVar2 + 0x110) != 0) && (*(longlong *)(lVar2 + 0x118) != 0)) {
                lVar3 = 1;
            }
            FUN_1404274c0(*(undefined8 *)(DAT_140c65898 + 0x7340),lVar3,param_2,param_3);
            return;
        }
        FUN_140604e20(param_1,param_1 + 0x50,0x1a);
        return;
    }
    FUN_140604e20(param_1,param_1 + 0x50,0x19);
    return;
}



void FUN_140605020(longlong param_1,undefined4 param_2)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((((lVar2 != 0) && (1 < *(ulonglong *)(lVar2 + 0x60))) && ((*(byte *)(lVar2 + 8) & 1) != 0)) &&
        (((*(longlong *)(DAT_140c65898 + 0x7258) == 0 ||
           (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 0)) &&
          (lVar2 = *(longlong *)(DAT_140c65898 + 0x78), lVar2 != 0)))) {
        if ((DAT_140dc3590 & 1) == 0) {
            DAT_140dc3590 = DAT_140dc3590 | 1;
            lVar4 = FUN_140200220(0x90);
            if (lVar4 == 0) {
                DAT_140dc3594 = 0;
            }
            else {
                DAT_140dc3594 = *(int *)(lVar4 + 4);
            }
        }
        uVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x38) + DAT_140dc3594;
        puVar1 = (uint *)(lVar2 + 0x38);
        if (uVar3 <= *puVar1 && *puVar1 != uVar3) {
            FUN_140604f10(param_1,param_2,0);
        }
    }
    return;
}



void FUN_1406050e0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong local_res8;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
        if ((*(longlong *)(DAT_140c65898 + 0x7258) != 0) &&
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) != 0)) {
            FUN_140604e20(param_1,param_1 + 0x50,0x17);
            return;
        }
        iVar2 = FUN_14079ee60(lVar1);
        if ((iVar2 != 0) && (*(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res8 * 8) != 0)) {
            if ((*(int *)(param_1 + 0x50) != *(int *)param_2) ||
                (*(longlong *)(param_1 + 0x58) != param_2[1])) {
                lVar1 = *(longlong *)(param_1 + 0x40);
                if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x60) == 0)) {
                    lVar3 = 0;
                }
                else {
                    lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8);
                }
                if ((*(int *)(lVar3 + 0x110) != *(int *)param_2) ||
                    (*(longlong *)(lVar3 + 0x118) != param_2[1])) {
                    local_28 = *(undefined8 *)(lVar1 + 0x48);
                    local_20 = *param_2;
                    local_18 = param_2[1];
                    FUN_1403f4900(DAT_140c65898,0x43e,&local_28);
                }
            }
        }
    }
    return;
}



void FUN_140605210(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 local_res8;
    longlong local_res10;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
        if ((*(longlong *)(DAT_140c65898 + 0x7258) != 0) &&
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) != 0)) {
            FUN_140604e20(param_1,param_1 + 0x50,0x17);
            return;
        }
        iVar2 = FUN_14079ee60(lVar1,param_1 + 0x50,&local_res10);
        if ((iVar2 != 0) && (*(longlong *)(*(longlong *)(lVar1 + 0x58) + local_res10 * 8) != 0)) {
            local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48);
            FUN_1403f4900(DAT_140c65898,0x43b,&local_res8);
        }
    }
    return;
}



void FUN_1406052d0(longlong param_1)

{
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) {
        if ((*(longlong *)(DAT_140c65898 + 0x7258) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 0)) {
            local_28 = *(undefined8 *)(lVar1 + 0x48);
            local_20 = *(undefined8 *)(param_1 + 0x50);
            local_18 = *(undefined8 *)(param_1 + 0x58);
            FUN_1403f4900(DAT_140c65898,0x439,&local_28);
        }
    }
    return;
}



undefined8 FUN_140605340(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    int iVar2;
    longlong local_res8 [4];

    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
        iVar2 = FUN_14079ee60(lVar1,param_2,local_res8);
        if (iVar2 != 0) {
            return *(undefined8 *)(*(longlong *)(lVar1 + 0x58) + local_res8[0] * 8);
        }
    }
    return 0;
}



ulonglong FUN_140605380(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar1 + 0x60);
        uVar6 = 0;
        if (uVar2 != 0) {
            do {
                if (uVar6 < uVar2) {
                    if (uVar6 == 0) {
                        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8);
                    }
                    else {
                        uVar4 = uVar6;
                        if (uVar6 < *(ulonglong *)(lVar1 + 0x68) || uVar6 == *(ulonglong *)(lVar1 + 0x68)) {
                            uVar4 = uVar6 - 1;
                        }
                        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar4 * 8);
                    }
                }
                else {
                    lVar5 = 0;
                }
                iVar3 = FUN_14018e2c0(lVar5 + 0x20,param_2);
                if (iVar3 == 0) {
                    return uVar6;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar2);
        }
    }
    return 0xffffffffffffffff;
}



ulonglong FUN_140605420(longlong param_1,int *param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar1 + 0x60);
        uVar3 = 0;
        if (uVar2 != 0) {
            do {
                if (uVar3 < uVar2) {
                    if (uVar3 == 0) {
                        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8);
                    }
                    else {
                        uVar4 = uVar3;
                        if (uVar3 < *(ulonglong *)(lVar1 + 0x68) || uVar3 == *(ulonglong *)(lVar1 + 0x68)) {
                            uVar4 = uVar3 - 1;
                        }
                        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar4 * 8);
                    }
                }
                else {
                    lVar5 = 0;
                }
                if ((*(int *)(lVar5 + 0x10) == *param_2) &&
                    (*(longlong *)(lVar5 + 0x18) == *(longlong *)(param_2 + 2))) {
                    return uVar3;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar2);
        }
    }
    return 0xffffffffffffffff;
}



undefined8 FUN_140605490(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) != 0)) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + *(longlong *)(lVar1 + 0x68) * 8),
                 lVar2 != 0)) &&
        ((*(int *)(lVar2 + 0x10) == *(int *)(lVar1 + 0x10) &&
          (*(longlong *)(lVar2 + 0x18) == *(longlong *)(lVar1 + 0x18))))) {
        return 1;
    }
    return 0;
}



undefined8 FUN_1406054d0(longlong param_1,longlong param_2,ulonglong param_3)

{
    uint uVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong *plVar9;
    int *piVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    undefined8 *puVar14;
    undefined4 local_res8;
    undefined local_78 [8];
    undefined4 local_70;
    undefined4 uStack108;
    longlong local_68;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((lVar2 != 0) && (param_3 < *(ulonglong *)(lVar2 + 0x60))) {
        if (param_3 == 0) {
            uVar12 = *(ulonglong *)(lVar2 + 0x68);
        }
        else {
            uVar12 = param_3;
            if (param_3 < *(ulonglong *)(lVar2 + 0x68) || param_3 == *(ulonglong *)(lVar2 + 0x68)) {
                uVar12 = param_3 - 1;
            }
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + uVar12 * 8);
        if (lVar2 != 0) {
            FUN_14022d500(*(undefined4 *)(lVar2 + 0x68));
            FUN_14034bdd0();
            FUN_1401f31e0(*(undefined4 *)(lVar2 + 0x6c));
            FUN_14034bdd0();
            local_40 = 1;
            local_58 = &PTR_FUN_140b569f0;
            local_48 = param_2;
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            uVar6 = FUN_14005c1b0(param_2,0,0);
            *(undefined4 *)(puVar14 + 1) = 5;
            *puVar14 = uVar6;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(param_2);
            local_50 = uVar4;
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2,puVar14,L"nMemberIdx",(int)param_3 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            iVar5 = *(int *)(lVar2 + 0x130);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar8 = FUN_14018f0e0(local_78,L"bIsLeader");
            uVar12 = 0;
            if (*(longlong *)(lVar8 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar13) != '\0');
                FUN_140058710(param_2);
            }
            if (CONCAT44(uStack108,local_70) != 0) {
                FUN_14018b900(CONCAT44(uStack108,local_70),0);
            }
            puVar3 = *(uint **)(param_2 + 0x10);
            puVar3[2] = 1;
            *puVar3 = (uint)(iVar5 != 0);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar6,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            uVar1 = *(uint *)(lVar2 + 8);
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar8 = FUN_14018f0e0(local_78,L"bIsOnline");
            if (*(longlong *)(lVar8 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar13) != '\0');
                FUN_140058710(param_2);
            }
            if (CONCAT44(uStack108,local_70) != 0) {
                FUN_14018b900(CONCAT44(uStack108,local_70),0);
            }
            puVar3 = *(uint **)(param_2 + 0x10);
            puVar3[2] = 1;
            *puVar3 = (uint)((~(uVar1 >> 3) & 1) != 0);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar6,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            lVar8 = DAT_140c65898;
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            FUN_1403d9500(lVar8,lVar2 + 0x10);
            plVar9 = (longlong *)FUN_1403d90d0();
            if (plVar9 == (longlong *)0x0) {
                local_res8 = *(undefined4 *)(lVar2 + 0x78);
            }
            else {
                local_res8 = *(undefined4 *)(plVar9 + 7);
                (**(code **)(*plVar9 + 0x40))(plVar9);
                (**(code **)(*plVar9 + 0x48))(plVar9);
                (**(code **)(*plVar9 + 0x70))(plVar9);
                (**(code **)(*plVar9 + 0x78))();
                (**(code **)(*plVar9 + 0x88))(plVar9);
                (**(code **)(*plVar9 + 0x90))(plVar9);
                lVar8 = *(longlong *)(DAT_140c65898 + 0x6c50);
                if ((lVar8 != 0) && (*(ulonglong *)(lVar8 + 0x78) != 0)) {
                    piVar10 = (int *)(*(longlong *)(lVar8 + 0x70) + 4);
                    uVar11 = uVar12;
                    do {
                        if (*piVar10 == *(int *)(plVar9 + 1)) break;
                        uVar11 = uVar11 + 1;
                        piVar10 = piVar10 + 2;
                    } while (uVar11 < *(ulonglong *)(lVar8 + 0x78));
                }
            }
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2,puVar14,L"nLevel",local_res8);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            if ((*(int *)(lVar2 + 0x110) != 0) && (*(longlong *)(lVar2 + 0x118) != 0)) {
                FUN_140605420(param_1,lVar2 + 0x110);
            }
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0630(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0630(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            FUN_1400fa0f0(local_78,param_2,1);
            uVar11 = uVar12;
            if (*(longlong *)(lVar2 + 0x128) != 0) {
                do {
                    iVar5 = FUN_140605420(param_1,*(longlong *)(lVar2 + 0x120) + uVar12);
                    FUN_1400fa9e0(local_78,iVar5 + 1);
                    uVar11 = uVar11 + 1;
                    uVar12 = uVar12 + 0x10;
                } while (uVar11 < *(ulonglong *)(lVar2 + 0x128));
            }
            FUN_1400fb2a0(&local_58,L"tMentoredBy",local_70);
            FUN_1400fafe0(&local_58,*(undefined4 *)(lVar2 + 8),&PTR_DAT_140c39100,0xf);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar4);
            puVar14 = *(undefined8 **)(param_2 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_68 != 0) {
                FUN_1400579e0(local_68,puVar14,local_70);
            }
            FUN_1400579e0(param_2);
            return 1;
        }
    }
    return 0;
}
