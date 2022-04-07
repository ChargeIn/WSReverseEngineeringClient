//
// Created by flop on 05.04.22.
//



void FUN_140400010(longlong param_1,undefined *param_2)

{
    if (1 < ((longlong)param_2 - param_1) / 0x70) {
        do {
            FUN_140400730(param_1,param_2);
            param_2 = &DAT_ffffffffffffff90 + (longlong)param_2;
        } while (1 < ((longlong)param_2 - param_1) / 0x70);
    }
    return;
}



void FUN_1404000c0(undefined8 param_1,undefined8 param_2)

{
    undefined local_78 [16];
    longlong local_68;
    longlong *local_40;
    longlong *local_38;

    FUN_140474e10(local_78,param_1);
    FUN_140474ec0(param_1,param_2);
    FUN_140474ec0(param_2,local_78);
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_78);
    }
    if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))();
        local_40 = (longlong *)0x0;
    }
    if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 8))();
        local_38 = (longlong *)0x0;
    }
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    return;
}



void FUN_140400180(undefined4 *param_1,undefined8 param_2,code *param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    char cVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;

    cVar5 = (*param_3)(param_2,param_1 + -0x1c);
    if (cVar5 != '\0') {
        puVar7 = (undefined8 *)(param_1 + -0x18);
        puVar6 = param_1;
        puVar4 = param_1 + -0x1c;
        do {
            param_1 = puVar4;
            if (puVar6 != param_1) {
                if ((undefined8 *)puVar7[5] != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)puVar7[5])();
                }
                if ((undefined8 *)puVar7[6] != (undefined8 *)0x0) {
                    (***(code ***)(undefined8 *)puVar7[6])();
                }
                if (*(longlong **)(puVar6 + 0xe) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(puVar6 + 0xe) + 8))();
                    *(undefined8 *)(puVar6 + 0xe) = 0;
                }
                if (*(longlong **)(puVar6 + 0x10) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(puVar6 + 0x10) + 8))();
                    *(undefined8 *)(puVar6 + 0x10) = 0;
                }
                *puVar6 = *param_1;
                if (puVar7 + -1 != (undefined8 *)(puVar6 + 2)) {
                    FUN_14001c480(puVar6 + 2,*puVar7,puVar7[1]);
                }
                puVar6[10] = *(undefined4 *)(puVar7 + 3);
                puVar6[0xb] = *(undefined4 *)((longlong)puVar7 + 0x1c);
                puVar6[0xc] = *(undefined4 *)(puVar7 + 4);
                *(undefined8 *)(puVar6 + 0xe) = puVar7[5];
                *(undefined8 *)(puVar6 + 0x10) = puVar7[6];
                puVar6[0x12] = *(undefined4 *)(puVar7 + 7);
                puVar6[0x13] = *(undefined4 *)((longlong)puVar7 + 0x3c);
                puVar6[0x15] = *(undefined4 *)((longlong)puVar7 + 0x44);
                uVar1 = *(undefined4 *)((longlong)puVar7 + 0x54);
                uVar2 = *(undefined4 *)(puVar7 + 0xb);
                uVar3 = *(undefined4 *)((longlong)puVar7 + 0x5c);
                puVar6[0x18] = *(undefined4 *)(puVar7 + 10);
                puVar6[0x19] = uVar1;
                puVar6[0x1a] = uVar2;
                puVar6[0x1b] = uVar3;
                puVar6[0x16] = *(undefined4 *)(puVar7 + 9);
                puVar6[0x14] = *(undefined4 *)(puVar7 + 8);
            }
            puVar7 = puVar7 + -0xe;
            cVar5 = (*param_3)(param_2,param_1 + -0x1c);
            puVar6 = param_1;
            puVar4 = param_1 + -0x1c;
        } while (cVar5 != '\0');
    }
    FUN_140474ec0(param_1,param_2);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404002b0(longlong param_1,longlong param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined4 local_88 [2];
    undefined local_80 [8];
    undefined local_78 [16];
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    longlong *local_50;
    longlong *local_48;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;

    lVar1 = (param_2 - param_1) / 0x70;
    if (1 < lVar1) {
        lVar2 = (lVar1 + -2) / 2;
        puVar3 = (undefined8 *)(param_1 + 0x10 + lVar2 * 0x70);
        while( true ) {
            local_88[0] = *(undefined4 *)(puVar3 + -2);
            local_78 = ZEXT816(0);
            local_68 = 0;
            FUN_14001c1b0(local_80,*puVar3,puVar3[1]);
            local_40 = *(undefined4 *)(puVar3 + 7);
            local_50 = (longlong *)puVar3[5];
            local_60 = *(undefined4 *)(puVar3 + 3);
            local_5c = *(undefined4 *)((longlong)puVar3 + 0x1c);
            local_58 = *(undefined4 *)(puVar3 + 4);
            local_48 = (longlong *)puVar3[6];
            local_3c = *(undefined4 *)((longlong)puVar3 + 0x3c);
            local_28 = *(undefined4 *)(puVar3 + 10);
            uStack36 = *(undefined4 *)((longlong)puVar3 + 0x54);
            uStack32 = *(undefined4 *)(puVar3 + 0xb);
            uStack28 = *(undefined4 *)((longlong)puVar3 + 0x5c);
            local_38 = *(undefined4 *)(puVar3 + 8);
            local_34 = *(undefined4 *)((longlong)puVar3 + 0x44);
            local_30 = *(undefined4 *)(puVar3 + 9);
            if (local_50 != (longlong *)0x0) {
                (**(code **)*local_50)(local_50);
            }
            if (local_48 != (longlong *)0x0) {
                (**(code **)*local_48)();
            }
            FUN_1404004e0(param_1,lVar2,lVar1,local_88,param_3);
            if (lVar2 == 0) break;
            lVar2 = lVar2 + -1;
            puVar3 = puVar3 + -0xe;
            if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
                FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,
                              local_88);
            }
            if (local_50 != (longlong *)0x0) {
                (**(code **)(*local_50 + 8))();
                local_50 = (longlong *)0x0;
            }
            if (local_48 != (longlong *)0x0) {
                (**(code **)(*local_48 + 8))();
                local_48 = (longlong *)0x0;
            }
            if (local_78._0_8_ != 0) {
                FUN_14018b900(local_78._0_8_,0);
            }
        }
        if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
            FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_88)
                    ;
        }
        if (local_50 != (longlong *)0x0) {
            (**(code **)(*local_50 + 8))();
            local_50 = (longlong *)0x0;
        }
        if (local_48 != (longlong *)0x0) {
            (**(code **)(*local_48 + 8))();
            local_48 = (longlong *)0x0;
        }
        if (local_78._0_8_ != 0) {
            FUN_14018b900(local_78._0_8_,0);
        }
    }
    return;
}



void FUN_1404004e0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                   code *param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    char cVar5;
    longlong lVar6;
    longlong lVar7;
    undefined4 *puVar8;
    longlong lVar9;
    undefined4 *puVar10;

    lVar9 = param_2 * 2;
    lVar4 = param_2;
    while (lVar7 = lVar9 + 2, lVar7 < param_3) {
        lVar6 = lVar7 * 0x70 + param_1;
        cVar5 = (*param_5)(lVar6,&DAT_ffffffffffffff90 + lVar6);
        if (cVar5 != '\0') {
            lVar7 = lVar9 + 1;
        }
        FUN_140474ec0(param_1 + lVar4 * 0x70,lVar7 * 0x70 + param_1);
        lVar4 = lVar7;
        lVar9 = lVar7 * 2;
    }
    if (lVar7 == param_3) {
        FUN_140474ec0(param_1 + lVar4 * 0x70,&DAT_ffffffffffffff90 + lVar7 * 0x70 + param_1);
        lVar4 = lVar9 + 1;
    }
    while (param_2 < lVar4) {
        lVar9 = (lVar4 + -1) / 2;
        puVar10 = (undefined4 *)(lVar9 * 0x70 + param_1);
        cVar5 = (*param_5)(puVar10,param_4);
        if (cVar5 == '\0') break;
        puVar8 = (undefined4 *)(lVar4 * 0x70 + param_1);
        lVar4 = lVar9;
        if (puVar8 != puVar10) {
            if (*(undefined8 **)(puVar10 + 0xe) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(puVar10 + 0xe))();
            }
            if (*(undefined8 **)(puVar10 + 0x10) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(puVar10 + 0x10))();
            }
            if (*(longlong **)(puVar8 + 0xe) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(puVar8 + 0xe) + 8))();
                *(undefined8 *)(puVar8 + 0xe) = 0;
            }
            if (*(longlong **)(puVar8 + 0x10) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(puVar8 + 0x10) + 8))();
                *(undefined8 *)(puVar8 + 0x10) = 0;
            }
            *puVar8 = *puVar10;
            if (puVar10 + 2 != puVar8 + 2) {
                FUN_14001c480(puVar8 + 2,*(undefined8 *)(puVar10 + 4),*(undefined8 *)(puVar10 + 6));
            }
            puVar8[10] = puVar10[10];
            puVar8[0xb] = puVar10[0xb];
            puVar8[0xc] = puVar10[0xc];
            *(undefined8 *)(puVar8 + 0xe) = *(undefined8 *)(puVar10 + 0xe);
            *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
            puVar8[0x12] = puVar10[0x12];
            puVar8[0x13] = puVar10[0x13];
            puVar8[0x15] = puVar10[0x15];
            uVar1 = puVar10[0x19];
            uVar2 = puVar10[0x1a];
            uVar3 = puVar10[0x1b];
            puVar8[0x18] = puVar10[0x18];
            puVar8[0x19] = uVar1;
            puVar8[0x1a] = uVar2;
            puVar8[0x1b] = uVar3;
            puVar8[0x16] = puVar10[0x16];
            puVar8[0x14] = puVar10[0x14];
        }
    }
    FUN_140474ec0(lVar4 * 0x70 + param_1,param_4);
    return;
}



void FUN_140400730(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined local_78 [16];
    longlong local_68;
    longlong *local_40;
    longlong *local_38;

    FUN_140474e10(local_78,&DAT_ffffffffffffff90 + param_2);
    FUN_140474ec0(&DAT_ffffffffffffff90 + param_2,param_1);
    FUN_1404004e0(param_1,0,(longlong)(&DAT_ffffffffffffff90 + (param_2 - param_1)) / 0x70,local_78,
                  param_4);
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x7340) != 0)) {
        FUN_1400ea3e0(*(longlong *)(DAT_140c65898 + 0x7340),"MessageFinished",&DAT_1409eb834,local_78);
    }
    if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))();
        local_40 = (longlong *)0x0;
    }
    if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 8))();
        local_38 = (longlong *)0x0;
    }
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    return;
}



void FUN_140400840(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4,
                   undefined4 param_5)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1f9,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,(longlong)param_3,
                param_4,param_5,0,0);
    return;
}



void FUN_140400940(longlong *param_1,undefined8 param_2,int param_3)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1fa,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,(longlong)param_3,0,0
            ,0,0);
    return;
}



void FUN_140400a20(longlong *param_1,undefined8 param_2,int param_3)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,499,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,(longlong)param_3,0,0,0
            ,0);
    return;
}



void FUN_140400b00(longlong *param_1,undefined8 param_2)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1fe,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0);
    return;
}



void FUN_140400be0(longlong *param_1,undefined8 param_2)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1fd,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0);
    return;
}



void FUN_140400cc0(longlong *param_1,undefined8 param_2,code *param_3)

{
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
    LAB_140400cf0:
    lVar5 = *param_1;
    bVar3 = true;
    lVar2 = lVar9;
    lVar7 = lVar5;
    do {
        for (; (lVar6 = lVar9, lVar8 = lVar9, lVar5 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar5 = *(longlong *)(lVar5 + 0x30);
        }
        while( true ) {
            if (lVar5 == 0) goto LAB_140400d91;
            if (lVar6 == 0) goto LAB_140400da0;
            if (lVar8 == 0) break;
            iVar4 = (*param_3)(lVar7,lVar5,0);
            if (iVar4 < 1) {
                lVar7 = *(longlong *)(lVar7 + 0x30);
                lVar6 = lVar6 + -1;
            }
            else {
                lVar8 = lVar8 + -1;
                **(undefined8 **)(lVar5 + 0x28) = *(undefined8 *)(lVar5 + 0x30);
                plVar1 = *(longlong **)(lVar5 + 0x28);
                lVar2 = *plVar1;
                if (lVar2 != 0) {
                    *(longlong **)(lVar2 + 0x28) = plVar1;
                }
                plVar1 = *(longlong **)(lVar7 + 0x28);
                *(longlong *)(lVar5 + 0x30) = lVar7;
                *(longlong **)(lVar5 + 0x28) = plVar1;
                *plVar1 = lVar5;
                *(longlong **)(lVar7 + 0x28) = (longlong *)(lVar5 + 0x30);
                lVar5 = lVar2;
            }
        }
        LAB_140400db3:
        bVar3 = false;
        lVar2 = lVar9;
        lVar7 = lVar5;
    } while( true );
    LAB_140400da0:
    if (lVar8 == 0) goto LAB_140400db3;
    lVar5 = *(longlong *)(lVar5 + 0x30);
    lVar8 = lVar8 + -1;
    if (lVar5 == 0) goto LAB_140400d91;
    goto LAB_140400da0;
    LAB_140400d91:
    if (bVar3) {
        return;
    }
    lVar9 = lVar9 * 2;
    goto LAB_140400cf0;
}



undefined8 * FUN_140400e10(undefined8 *param_1,longlong param_2)

{
    short *psVar1;
    short sVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    puVar5 = (undefined8 *)0x0;
    *(undefined4 *)param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    psVar1 = (short *)(param_2 + 0x18);
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    lVar3 = param_1[2];
    if (psVar1 == (short *)0x0) {
        param_1[2] = 0;
    }
    else {
        sVar2 = *psVar1;
        puVar6 = puVar5;
        while (sVar2 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar2 = psVar1[(longlong)puVar6];
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = puVar6;
            *puVar4 = &PTR_LAB_140b55060;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,psVar1,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar5) = 0;
        param_1[2] = puVar5;
    }
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x70);
    if (0.0 <= *(float *)(param_2 + 0x74)) {
        param_1[6] = 0;
    }
    else if (param_1 != (undefined8 *)&DAT_ffffffffffffffd0) {
        FUN_1401e82f0();
        return param_1;
    }
    return param_1;
}



undefined8 * FUN_140400f50(undefined8 *param_1,longlong param_2)

{
    short *psVar1;
    short sVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    puVar6 = (undefined8 *)0x0;
    psVar1 = (short *)(param_2 + 0x18);
    *(undefined4 *)param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    lVar4 = param_1[2];
    if (psVar1 == (short *)0x0) {
        param_1[2] = 0;
    }
    else {
        sVar2 = *psVar1;
        puVar7 = puVar6;
        while (sVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar2 = psVar1[(longlong)puVar7];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = puVar7;
            *puVar5 = &PTR_LAB_140b55060;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,psVar1,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar6) = 0;
        param_1[2] = puVar6;
    }
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    uVar3 = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    param_1[4] = 4;
    *(undefined4 *)(param_1 + 3) = uVar3;
    param_1[5] = 0;
    param_1[6] = 0xffffffffffffffff;
    return param_1;
}



longlong FUN_140401060(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x71a8);
    if (lVar1 == 0) {
        lVar1 = *(longlong *)(param_1 + 0x71a0);
    }
    return lVar1 + 0x60;
}



void FUN_140401080(longlong *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
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
    LAB_1404010b0:
    lVar5 = *param_1;
    bVar3 = true;
    lVar2 = lVar9;
    lVar7 = lVar5;
    do {
        for (; (lVar6 = lVar9, lVar8 = lVar9, lVar5 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar5 = *(longlong *)(lVar5 + 0x60);
        }
        while( true ) {
            if (lVar5 == 0) goto LAB_140401151;
            if (lVar6 == 0) goto LAB_140401163;
            if (lVar8 == 0) break;
            iVar4 = (*param_3)(lVar7,lVar5,param_4);
            if (iVar4 < 1) {
                lVar7 = *(longlong *)(lVar7 + 0x60);
                lVar6 = lVar6 + -1;
            }
            else {
                lVar8 = lVar8 + -1;
                **(undefined8 **)(lVar5 + 0x58) = *(undefined8 *)(lVar5 + 0x60);
                plVar1 = *(longlong **)(lVar5 + 0x58);
                lVar2 = *plVar1;
                if (lVar2 != 0) {
                    *(longlong **)(lVar2 + 0x58) = plVar1;
                }
                plVar1 = *(longlong **)(lVar7 + 0x58);
                *(longlong *)(lVar5 + 0x60) = lVar7;
                *(longlong **)(lVar5 + 0x58) = plVar1;
                *plVar1 = lVar5;
                *(longlong **)(lVar7 + 0x58) = (longlong *)(lVar5 + 0x60);
                lVar5 = lVar2;
            }
        }
        LAB_140401176:
        bVar3 = false;
        lVar2 = lVar9;
        lVar7 = lVar5;
    } while( true );
    LAB_140401163:
    if (lVar8 == 0) goto LAB_140401176;
    lVar5 = *(longlong *)(lVar5 + 0x60);
    lVar8 = lVar8 + -1;
    if (lVar5 == 0) goto LAB_140401151;
    goto LAB_140401163;
    LAB_140401151:
    if (bVar3) {
        return;
    }
    lVar9 = lVar9 * 2;
    goto LAB_1404010b0;
}



undefined8 * FUN_1404011c0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b66938;
    FUN_140008410();
    FUN_14018b900(param_1[4],0);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong FUN_140401220(longlong *param_1,uint param_2,ulonglong param_3)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar2 = param_1[1];
    uVar4 = 0;
    uVar6 = uVar4;
    uVar7 = uVar2;
    if (uVar2 != 0) {
        do {
            uVar4 = (uVar7 - uVar6 >> 1) + uVar6;
            lVar5 = *(longlong *)(*param_1 + uVar4 * 8);
            uVar1 = **(uint **)(lVar5 + 8);
            if (uVar1 < param_2) {
                LAB_14040127c:
                uVar6 = uVar4 + 1;
                uVar8 = uVar7;
            }
            else {
                uVar8 = uVar4;
                if (uVar1 <= param_2) {
                    uVar3 = *(ulonglong *)(lVar5 + 0x10);
                    if (uVar3 < param_3) goto LAB_14040127c;
                    if (uVar3 <= param_3) break;
                }
            }
            uVar4 = uVar6;
            uVar6 = uVar4;
            uVar7 = uVar8;
        } while (uVar4 < uVar8);
    }
    if (((uVar2 <= uVar4) ||
         (lVar5 = *(longlong *)(*param_1 + uVar4 * 8), **(uint **)(lVar5 + 8) != param_2)) ||
        (*(ulonglong *)(lVar5 + 0x10) != param_3)) {
        lVar5 = 0;
    }
    return lVar5;
}



void FUN_1404012c0(undefined8 param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    lVar3 = DAT_140c658a0;
    puVar5 = (undefined8 *)0x0;
    lVar2 = *(longlong *)(DAT_140c658a0 + 0x108);
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(DAT_140c658a0 + 0x108) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = param_2[(longlong)puVar6];
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = puVar6;
            *puVar4 = &PTR_LAB_140b55060;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,param_2,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar5) = 0;
        *(undefined8 **)(lVar3 + 0x108) = puVar5;
    }
    if (lVar2 != 0) {
        // WARNING: Could not recover jumptable at 0x000140401385. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        return;
    }
    return;
}



undefined4 * FUN_140401410(undefined4 *param_1)

{
    undefined2 *puVar1;

    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0x544e5645;
    param_1[0x11] = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 0x18) = puVar1;
    *(undefined2 **)(param_1 + 0x1a) = puVar1;
    *(undefined2 **)(param_1 + 0x1c) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    return param_1;
}



void FUN_140401490(undefined4 *param_1)

{
    longlong lVar1;

    FUN_14018b900(*(undefined8 *)(param_1 + 0x14));
    FUN_14018b900(*(undefined8 *)(param_1 + 0x12));
    lVar1 = *(longlong *)(param_1 + 0x1e);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_14018b900();
    }
    FUN_140195d70(param_1);
    *param_1 = 0;
    if (*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
    }
    if (*(undefined8 **)(param_1 + 6) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 6) = *(undefined8 *)(param_1 + 4);
    }
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    return;
}



undefined8 FUN_140401510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    if (*(longlong *)(param_1 + 0x48) != 0) {
        return 1;
    }
    puVar1 = (undefined8 *)FUN_14018b280();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
    }
    *(undefined8 **)(param_1 + 0x48) = puVar1;
    uVar2 = FUN_140402720(param_3,param_1 + 0x58,param_1 + 0x78,param_2);
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20) = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(undefined4 *)(param_1 + 0x80);
    return uVar2;
}



undefined8 FUN_1404015d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    if (*(longlong *)(param_1 + 0x50) != 0) {
        return 1;
    }
    puVar1 = (undefined8 *)FUN_14018b280();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
    }
    *(undefined8 **)(param_1 + 0x50) = puVar1;
    uVar2 = FUN_140402720(param_3,param_1 + 0x58,param_1 + 0x78,param_2);
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x10) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x20) = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x18) = *(undefined4 *)(param_1 + 0x80);
    return uVar2;
}



undefined8 * FUN_140401690(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
    short sVar1;
    ulonglong uVar2;
    undefined2 *puVar3;
    short *psVar4;
    longlong lVar5;
    longlong lVar6;
    short *psVar7;
    undefined8 *puVar8;
    ulonglong *puVar9;
    undefined8 *puVar10;
    int iVar11;
    int iVar12;
    undefined8 *puVar13;
    longlong lVar14;

    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    param_1[4] = puVar3;
    param_1[5] = puVar3;
    param_1[6] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    puVar10 = param_1 + 7;
    iVar11 = 1;
    puVar8 = param_1 + 9;
    iVar12 = 1;
    do {
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar3 = (undefined2 *)FUN_14018b280(0x10);
        puVar8[-1] = puVar3;
        *puVar8 = puVar3;
        puVar8[1] = puVar3 + 8;
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
        }
        puVar8 = puVar8 + 4;
        iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x10] = puVar3;
    param_1[0x11] = puVar3;
    param_1[0x12] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x14] = puVar3;
    param_1[0x15] = puVar3;
    param_1[0x16] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    puVar13 = param_1 + 0x17;
    puVar8 = param_1 + 0x19;
    do {
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar3 = (undefined2 *)FUN_14018b280(0x10);
        puVar8[-1] = puVar3;
        *puVar8 = puVar3;
        puVar8[1] = puVar3 + 8;
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
        }
        puVar8 = puVar8 + 4;
        iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    lVar5 = 0;
    param_1[0x20] = puVar3;
    param_1[0x21] = puVar3;
    param_1[0x22] = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    psVar4 = (short *)FUN_14034bdd0(puVar3 + 8,*(undefined4 *)(param_2 + 0x20));
    psVar7 = (short *)&DAT_1409e84a4;
    if (psVar4 != (short *)0x0) {
        psVar7 = psVar4;
    }
    sVar1 = *psVar7;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar7[lVar5];
    }
    FUN_14001c480(param_1 + 3,psVar7,psVar7 + lVar5);
    lVar14 = 2;
    puVar9 = (ulonglong *)(param_2 + 0x10);
    lVar5 = 2;
    do {
        uVar2 = *puVar9;
        if (uVar2 == 0) {
            psVar7 = (short *)0x0;
        }
        else if (DAT_140c3fe70 < uVar2) {
            psVar7 = (short *)0x0;
        }
        else {
            psVar7 = (short *)(DAT_140c3fe68 + uVar2);
        }
        lVar6 = 0;
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar7[lVar6];
        }
        FUN_14001c480(puVar10,psVar7,psVar7 + lVar6);
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 4;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    psVar4 = (short *)FUN_14034bdd0();
    psVar7 = (short *)&DAT_1409e8484;
    if (psVar4 != (short *)0x0) {
        psVar7 = psVar4;
    }
    sVar1 = *psVar7;
    lVar6 = lVar5;
    while (sVar1 != 0) {
        lVar6 = lVar6 + 1;
        sVar1 = psVar7[lVar6];
    }
    FUN_14001c480(param_1 + 0xf,psVar7,psVar7 + lVar6);
    psVar4 = (short *)FUN_14034bdd0();
    psVar7 = (short *)&DAT_1409e8464;
    if (psVar4 != (short *)0x0) {
        psVar7 = psVar4;
    }
    sVar1 = *psVar7;
    lVar6 = lVar5;
    while (sVar1 != 0) {
        lVar6 = lVar6 + 1;
        sVar1 = psVar7[lVar6];
    }
    FUN_14001c480(param_1 + 0x13,psVar7,psVar7 + lVar6);
    do {
        psVar4 = (short *)FUN_14034bdd0();
        psVar7 = (short *)&DAT_1409e8424;
        if (psVar4 != (short *)0x0) {
            psVar7 = psVar4;
        }
        sVar1 = *psVar7;
        lVar6 = lVar5;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar7[lVar6];
        }
        FUN_14001c480(puVar13,psVar7,psVar7 + lVar6);
        puVar13 = puVar13 + 4;
        lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    return param_1;
}



void FUN_1404019f0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    plVar1 = *(longlong **)(param_1 + 0x120);
    while (plVar1 != (longlong *)0x0) {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
            *(longlong *)*plVar1 = plVar1[1];
        }
        if ((longlong *)plVar1[1] != (longlong *)0x0) {
            *(longlong *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        FUN_14018b900(plVar1,0);
        plVar1 = *(longlong **)(param_1 + 0x120);
    }
    plVar1 = *(longlong **)(param_1 + 0x128);
    while (plVar1 != (longlong *)0x0) {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
            *(longlong *)*plVar1 = plVar1[1];
        }
        if ((longlong *)plVar1[1] != (longlong *)0x0) {
            *(longlong *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        FUN_14018b900(plVar1,0);
        plVar1 = *(longlong **)(param_1 + 0x128);
    }
    if (*(longlong *)(param_1 + 0x128) != 0) {
        FUN_1401a4a00(param_1 + 0x128);
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
        FUN_1401a4a00(param_1 + 0x120);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x100),0);
    }
    iVar4 = 1;
    lVar2 = param_1 + 0x100;
    iVar3 = 1;
    do {
        plVar1 = (longlong *)(lVar2 + -0x20);
        lVar2 = lVar2 + -0x20;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0xa0),0);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x80),0);
    }
    lVar2 = param_1 + 0x80;
    do {
        plVar1 = (longlong *)(lVar2 + -0x20);
        lVar2 = lVar2 + -0x20;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x20),0);
    }
    return;
}



void FUN_140401b70(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong *plVar5;
    short *psVar6;
    longlong *plVar7;

    pplVar2 = (longlong **)(param_1 + 0x120);
    plVar5 = *pplVar2;
    while (plVar5 != (longlong *)0x0) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
            *(longlong *)*plVar5 = plVar5[1];
        }
        if ((longlong *)plVar5[1] != (longlong *)0x0) {
            *(longlong *)plVar5[1] = *plVar5;
        }
        *plVar5 = 0;
        plVar5[1] = 0;
        FUN_14018b900(plVar5,0);
        plVar5 = *pplVar2;
    }
    plVar5 = (longlong *)0x0;
    if (param_4 != (longlong *)0x0) {
        do {
            plVar3 = (longlong *)FUN_14018b280(0x60);
            plVar7 = (longlong *)0x0;
            if (plVar3 != (longlong *)0x0) {
                *plVar3 = 0;
                plVar3[1] = 0;
                plVar7 = plVar3;
            }
            psVar6 = *(short **)(param_2 + (longlong)plVar5 * 8);
            plVar3 = plVar7 + 2;
            lVar4 = 0x21;
            do {
                if ((lVar4 == -0x7fffffdd) || (*psVar6 == 0)) {
                    if (lVar4 != 0) goto LAB_140401c40;
                    break;
                }
                *(short *)plVar3 = *psVar6;
                plVar3 = (longlong *)((longlong)plVar3 + 2);
                psVar6 = psVar6 + 1;
                lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            plVar3 = (longlong *)((longlong)plVar3 + -2);
            LAB_140401c40:
            *(undefined2 *)plVar3 = 0;
            *(uint *)((longlong)plVar7 + 0x54) = *(uint *)(param_3 + (longlong)plVar5 * 4) & 1;
            *(uint *)(plVar7 + 0xb) = *(uint *)(param_3 + (longlong)plVar5 * 4) >> 1 & 1;
            *(uint *)((longlong)plVar7 + 0x5c) = *(uint *)(param_3 + (longlong)plVar5 * 4) >> 2 & 1;
            if (*plVar7 == 0) {
                *plVar7 = (longlong)pplVar2;
                pplVar1 = (longlong **)(plVar7 + 1);
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar7;
                if (*pplVar1 != (longlong *)0x0) {
                    **pplVar1 = (longlong)pplVar1;
                }
            }
            plVar5 = (longlong *)((longlong)plVar5 + 1);
        } while (plVar5 < param_4);
    }
    return;
}



ulonglong FUN_140401cb0(byte *param_1)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    sbyte sVar4;
    uint uVar5;

    if ((*(byte *)(*(int **)(param_1 + 8) + 0xd) & 4) == 0) {
        return 0;
    }
    iVar1 = **(int **)(param_1 + 8);
    switch(iVar1) {
        case 7:
            uVar2 = *(ulonglong *)(DAT_140c65898 + 0x6c50);
            if (uVar2 == 0) {
                return uVar2;
            }
            if ((*(byte *)(uVar2 + 8) & 1) == 0) {
                return (ulonglong)(*(longlong *)(DAT_140c65898 + 0x6c58) != 0);
            }
            break;
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x1d:
        case 0x1e:
        case 0x2f:
            if ((iVar1 == 0x10) || (sVar4 = 0xb, iVar1 == 0x1e)) {
                sVar4 = 0xc;
            }
            uVar5 = 1;
            lVar3 = FUN_1405845f0(sVar4,*(undefined8 *)(param_1 + 0x10));
            if ((((lVar3 == 0) || (9 < (ulonglong)(longlong)*(int *)(lVar3 + 0x304))) ||
                 (lVar3 = lVar3 + ((longlong)*(int *)(lVar3 + 0x304) * 5 + 3) * 8, lVar3 == 0)) ||
                ((*(uint *)(lVar3 + 8) & 1 << sVar4) == 0)) {
                uVar5 = 0;
            }
            return (ulonglong)uVar5;
        case 0x12:
            return (ulonglong)((*param_1 & 0xc) == 0);
        case 0x20:
            if ((*(longlong *)(DAT_140c65898 + 0x6c50) != 0) &&
                ((*(byte *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) & 1) == 0)) {
                return 1;
            }
            return 0;
    }
    return 1;
}



void FUN_140401e40(longlong param_1,short *param_2)

{
    short sVar1;
    undefined4 *puVar2;
    longlong lVar3;
    short *psVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined8 in_stack_fffffffffffffef8;
    undefined4 uVar13;
    undefined local_f8 [8];
    longlong local_f0;
    undefined2 *local_e8;
    longlong local_e0;
    undefined local_d8 [8];
    longlong local_d0;
    undefined2 *local_c8;
    longlong local_c0;
    undefined local_b8 [8];
    longlong local_b0;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    undefined local_78 [8];
    longlong local_70;
    longlong local_68;
    undefined local_58 [8];
    longlong local_50;

    uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
    iVar5 = **(int **)(param_1 + 8);
    if (iVar5 == 1) {
        FUN_14011b780(local_f8,*(undefined8 *)(DAT_140c65898 + 0x7340),param_2);
        if (local_f0 == 0) {
            return;
        }
        FUN_14018b900(local_f0,0);
        return;
    }
    if (iVar5 == 6) {
        if (param_2 == (short *)0x0) {
            return;
        }
        if (*param_2 == 0) {
            return;
        }
        lVar11 = 0;
        local_f0 = 0;
        local_e0 = 0;
        lVar6 = lVar11;
        do {
            lVar10 = lVar6 + 1;
            lVar6 = lVar6 + 1;
        } while (param_2[lVar10] != 0);
        lVar6 = lVar6 * 2 >> 1;
        uVar8 = lVar6 + 1;
        if (uVar8 < 0x7fffffffffffffff) {
            lVar10 = uVar8 * 2;
            local_f0 = FUN_14018b280(lVar10,0);
            local_e0 = local_f0 + lVar10;
        }
        lVar10 = local_f0;
        lVar6 = lVar6 * 2;
        FUN_1407db590(local_f0,param_2,lVar6);
        local_e8 = (undefined2 *)(lVar10 + lVar6);
        if (local_e8 != (undefined2 *)0x0) {
            *local_e8 = 0;
        }
        FUN_14040b680(local_b8,local_f8,0);
        if (lVar10 != 0) {
            FUN_14018b900(lVar10,0);
        }
        lVar6 = FUN_14018b280(0x88,0);
        if (lVar6 != 0) {
            lVar11 = FUN_140401410(lVar6);
        }
        iVar5 = FUN_1404015d0(lVar11,local_50,param_1);
        if (iVar5 == 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,param_1,
                          CONCAT44(uVar13,0x13));
        }
        *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 0x30) = 0;
        **(longlong **)(lVar11 + 0x50) = local_90;
        *(longlong *)(*(longlong *)(lVar11 + 0x50) + 8) = local_70;
        FUN_140405cb0();
        FUN_1403f4740(DAT_140c65898,0x1d4,*(undefined8 *)(lVar11 + 0x50));
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        lVar6 = local_90;
        if (local_70 != 0) {
            FUN_14018b900(local_70,0);
        }
        goto joined_r0x00014040256b;
    }
    if (iVar5 != 0x22) {
        if (param_2 == (short *)0x0) {
            return;
        }
        if (*param_2 == 0) {
            return;
        }
        lVar6 = FUN_14018b280(0x88,0);
        if (lVar6 == 0) {
            lVar6 = 0;
        }
        else {
            lVar6 = FUN_140401410(lVar6);
        }
        iVar5 = FUN_140401510(lVar6,param_2,param_1);
        if (iVar5 == 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,param_1,
                          CONCAT44(uVar13,0x13));
        }
        puVar2 = *(undefined4 **)(lVar6 + 0x48);
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(param_1 + 0x10);
        uVar13 = **(undefined4 **)(param_1 + 8);
        *puVar2 = uVar13;
        FUN_140405cb0(uVar13,lVar6);
        FUN_1403f4740(DAT_140c65898,0x1c3,*(undefined8 *)(lVar6 + 0x48));
        return;
    }
    if (param_2 == (short *)0x0) {
        return;
    }
    if (*param_2 == 0) {
        return;
    }
    lVar11 = 0;
    local_d0 = 0;
    local_c0 = 0;
    lVar6 = lVar11;
    do {
        lVar10 = lVar6 + 1;
        lVar6 = lVar6 + 1;
    } while (param_2[lVar10] != 0);
    lVar6 = lVar6 * 2 >> 1;
    uVar8 = lVar6 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar10 = uVar8 * 2;
        local_d0 = FUN_14018b280(lVar10,0);
        local_c0 = lVar10 + local_d0;
    }
    lVar10 = local_d0;
    lVar6 = lVar6 * 2;
    FUN_1407db590(local_d0,param_2,lVar6);
    local_c8 = (undefined2 *)(lVar6 + lVar10);
    if (local_c8 != (undefined2 *)0x0) {
        *local_c8 = 0;
    }
    FUN_14040b680(local_b8,local_d8,0);
    if (lVar10 != 0) {
        FUN_14018b900(lVar10,0);
    }
    uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
    if (local_70 == local_68) {
        local_d0 = 0;
        local_c0 = 0;
        lVar6 = lVar11;
        do {
            psVar4 = &DAT_140af86da + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar4 != 0);
        lVar6 = lVar6 * 2 >> 1;
        uVar8 = lVar6 + 1;
        if (uVar8 < 0x7fffffffffffffff) {
            lVar10 = uVar8 * 2;
            local_d0 = FUN_14018b280(lVar10,0);
            local_c0 = lVar10 + local_d0;
        }
        lVar10 = local_d0;
        lVar6 = lVar6 * 2;
        FUN_1407db590(local_d0,&DAT_140af86d8,lVar6);
        local_c8 = (undefined2 *)(lVar6 + lVar10);
        if (local_c8 != (undefined2 *)0x0) {
            *local_c8 = 0;
        }
        local_f0 = 0;
        local_e0 = 0;
        sVar1 = *param_2;
        lVar6 = lVar11;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = param_2[lVar6];
        }
        lVar6 = lVar6 * 2 >> 1;
        uVar8 = lVar6 + 1;
        if (uVar8 < 0x7fffffffffffffff) {
            lVar9 = uVar8 * 2;
            local_f0 = FUN_14018b280(lVar9,0);
            local_e0 = lVar9 + local_f0;
        }
        lVar9 = local_f0;
        lVar6 = lVar6 * 2;
        FUN_1407db590(local_f0,param_2,lVar6);
        local_e8 = (undefined2 *)(lVar9 + lVar6);
        if (local_e8 != (undefined2 *)0x0) {
            *local_e8 = 0;
        }
        FUN_14018fbd0(local_f8,local_98,local_58,local_d8);
        if (lVar9 != 0) {
            FUN_14018b900(lVar9,0);
        }
        if (lVar10 != 0) {
            FUN_14018b900(lVar10,0);
        }
        lVar6 = local_90;
        for (lVar10 = *(longlong *)(DAT_140c65898 + 0x6ab0); lVar10 != 0;
             lVar10 = *(longlong *)(lVar10 + 0x80)) {
            iVar5 = FUN_14018e2c0(*(undefined8 *)(lVar10 + 0x60),lVar6);
            lVar9 = local_88;
            uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
            if (iVar5 == 0) {
                if ((*(longlong *)(lVar10 + 0x70) != 0) &&
                    (lVar3 = **(longlong **)(lVar10 + 0x68), lVar3 != 0)) {
                    psVar4 = *(short **)(lVar3 + 0x30);
                    sVar1 = *psVar4;
                    lVar7 = lVar11;
                    while (sVar1 != 0) {
                        lVar7 = lVar7 + 1;
                        sVar1 = psVar4[lVar7];
                    }
                    uVar8 = local_88 - lVar6 >> 1;
                    uVar12 = (longlong)(psVar4 + lVar7) - (longlong)psVar4 >> 1;
                    if (uVar8 < uVar12) {
                        FUN_1407db590(lVar6,psVar4,uVar8 * 2);
                        FUN_14001c310(local_98,psVar4 + uVar8,psVar4 + lVar7);
                        lVar6 = local_90;
                    }
                    else {
                        lVar7 = uVar12 * 2;
                        FUN_1407db590(lVar6,psVar4,lVar7);
                        lVar7 = lVar7 + lVar6;
                        if (lVar7 != lVar9) {
                            FUN_1407db590(lVar7,lVar9,2);
                            local_88 = (lVar9 - lVar7 >> 1) * -2 + lVar9;
                        }
                    }
                    psVar4 = *(short **)(lVar3 + 0x38);
                    sVar1 = *psVar4;
                    lVar9 = lVar11;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar4[lVar9];
                    }
                    uVar8 = local_68 - local_70 >> 1;
                    uVar12 = (longlong)(psVar4 + lVar9) - (longlong)psVar4 >> 1;
                    if (uVar8 < uVar12) {
                        FUN_1407db590(local_70,psVar4,uVar8 * 2);
                        FUN_14001c310(local_78,psVar4 + uVar8,psVar4 + lVar9);
                        lVar6 = local_90;
                    }
                    else {
                        lVar9 = uVar12 * 2;
                        FUN_1407db590(local_70,psVar4,lVar9);
                        lVar9 = local_70 + lVar9;
                        if (lVar9 != local_68) {
                            FUN_1407db590(lVar9,local_68,2);
                        }
                    }
                }
                goto LAB_140402311;
            }
        }
        LAB_140402180:
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatAccountTellFailed",&DAT_1409ee254,
                      param_1,lVar6);
    }
    else {
        lVar10 = FUN_1405e21b0();
        lVar6 = local_90;
        LAB_140402311:
        if (lVar10 == 0) goto LAB_140402180;
        lVar10 = FUN_14018b280(0x88,0);
        if (lVar10 != 0) {
            lVar11 = FUN_140401410(lVar10);
        }
        iVar5 = FUN_1404015d0(lVar11,local_50,param_1);
        if (iVar5 == 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,param_1,
                          CONCAT44(uVar13,0x13));
        }
        *(undefined4 *)(*(longlong *)(lVar11 + 0x50) + 0x30) = 1;
        **(longlong **)(lVar11 + 0x50) = lVar6;
        *(longlong *)(*(longlong *)(lVar11 + 0x50) + 8) = local_70;
        FUN_140405cb0();
        FUN_1403f4740(DAT_140c65898,0x1d4,*(undefined8 *)(lVar11 + 0x50));
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    joined_r0x00014040256b:
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    if (local_b0 != 0) {
        FUN_14018b900(local_b0,0);
    }
    return;
}



ulonglong FUN_140402720(longlong param_1,longlong param_2,longlong param_3,short *param_4)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    IMAGE_DOS_HEADER *pIVar6;
    short sVar7;

    FUN_14001c2b0(param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    lVar5 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        if (**(int **)(param_1 + 8) != 1) {
            FUN_1400a7f20(param_2,499);
            FUN_14040af10(param_3,0x20);
            sVar7 = *param_4;
            while (sVar7 != 0) {
                sVar7 = 0xa0;
                pIVar6 = &IMAGE_DOS_HEADER_140000000;
                if (0x1f2 < (ulonglong)(*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 1))
                    break;
                sVar1 = param_4[lVar5];
                iVar3 = FUN_1403e0ae0();
                if ((iVar3 != 0) || (sVar1 == sVar7)) {
                    if ((sVar1 == 0x3c) && ((ushort)param_4[lVar5 + 1] - 0x21 < 0x4e)) {
                        // WARNING: Could not recover jumptable at 0x000140402838. Too many branches
                        // WARNING: Treating indirect jump as call
                        uVar4 = (*(code *)(pIVar6->e_magic +
                                           *(uint *)(pIVar6[0x8056].e_res2_10_ +
                                                     (ulonglong)
                                                             pIVar6[0x8056].e_program
                        [(longlong)(int)((ushort)param_4[lVar5 + 1] - 0x21) + 0xc] *
                                                                                           2 + 6)))
                        (pIVar6->e_magic +
                         *(uint *)(pIVar6[0x8056].e_res2_10_ +
                                   (ulonglong)
                                           pIVar6[0x8056].e_program
                        [(longlong)(int)((ushort)param_4[lVar5 + 1] - 0x21) + 0xc] *
                                                                                           2 + 6));
                        return uVar4;
                    }
                    FUN_1400a7ea0(param_2,sVar1);
                }
                lVar5 = lVar5 + 1;
                sVar7 = param_4[lVar5];
            }
            return (ulonglong)(param_4[lVar5] == 0);
        }
        do {
            lVar2 = lVar5 + 1;
            lVar5 = lVar5 + 1;
        } while (param_4[lVar2] != 0);
        FUN_14001c480(param_2,param_4,param_4 + lVar5);
    }
    return 1;
}



undefined8 * FUN_140402ba0(undefined8 *param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined *puVar3;
    longlong lVar4;
    longlong *plVar5;

    plVar5 = (longlong *)0x0;
    param_1[1] = 0;
    *param_1 = 0;
    FUN_1402c8db0();
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    puVar3 = (undefined *)FUN_14018b280(8,0);
    param_1[0xd] = puVar3;
    param_1[0xe] = puVar3;
    param_1[0xf] = puVar3 + 8;
    if (puVar3 != (undefined *)0x0) {
        *puVar3 = 0;
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    param_1[0x1a] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    lVar4 = FUN_14018b280(0x2c0,0);
    if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_1406456e0(lVar4);
    }
    plVar1 = (longlong *)param_1[0x1a];
    if (plVar1 != plVar5) {
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
        }
        param_1[0x1a] = plVar5;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    lVar4 = FUN_140200220(0x459);
    if (lVar4 == 0) {
        iVar2 = 0x200;
    }
    else {
        iVar2 = *(int *)(lVar4 + 8);
    }
    param_1[0x1b] = (longlong)iVar2;
    FUN_14040b200(param_1 + 0x1d);
    return param_1;
}



void FUN_140402cf0(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = param_1[1];
    uVar4 = 0;
    uVar2 = uVar4;
    if (uVar3 != 0) {
        do {
            lVar1 = *(longlong *)(*param_1 + uVar2 * 8);
            if (lVar1 != 0) {
                FUN_1404019f0(lVar1);
                FUN_14018b900(lVar1,0);
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
    }
    lVar1 = param_1[0x21];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[0x1f];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14040b000(param_1 + 0x1d);
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1a] + 8))();
    }
    FUN_140195d70(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        *(longlong *)param_1[0x12] = param_1[0x13];
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
        *(longlong *)param_1[0x13] = param_1[0x12];
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd],0);
    }
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
    }
    uVar3 = uVar4;
    if (param_1[10] != 0) {
        do {
            lVar1 = *(longlong *)(param_1[9] + uVar3 * 8);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < (ulonglong)param_1[10]);
    }
    lVar1 = param_1[9];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[8] != 0) {
        do {
            lVar1 = *(longlong *)(param_1[7] + uVar4 * 8);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)param_1[8]);
    }
    lVar1 = param_1[7];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140019490(param_1 + 2);
    FUN_14018b900(param_1[4],0);
    param_1[4] = 0;
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140402eb0. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



undefined8 FUN_140402ec0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_140401220(DAT_140c658a0,2);
    if (lVar1 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"AccountSupportTicketResult",
                      &DAT_1409ee784,lVar1,*param_2);
    }
    return 0;
}



undefined8 FUN_140402f20(longlong *param_1,int *param_2)

{
    int *piVar1;
    short sVar2;
    ulonglong *puVar3;
    ulonglong uVar4;
    int iVar5;
    undefined4 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    undefined4 *puVar16;
    ulonglong uVar17;
    ulonglong in_stack_ffffffffffffff38;
    longlong local_78;
    longlong local_70;
    int local_68;
    int iStack100;
    int iStack96;
    int iStack92;
    undefined8 local_58;
    ulonglong local_50;
    ulonglong local_48;
    undefined8 local_40;

    lVar8 = DAT_140c65898;
    piVar1 = param_2 + 8;
    if ((param_2[8] != 0) && (*(longlong *)(param_2 + 10) != 0)) {
        uVar7 = (**(code **)(DAT_140c65898 + 0x68f0))(piVar1);
        for (puVar3 = *(ulonglong **)
                (*(longlong *)(lVar8 + 0x68e8) + (uVar7 % *(ulonglong *)(lVar8 + 0x68e0)) * 8);
             puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[1]) {
            if ((uVar7 == *puVar3) &&
                (iVar5 = (**(code **)(lVar8 + 0x68f8))(piVar1,puVar3 + 2), iVar5 != 0)) {
                if ((puVar3 + 4 != (ulonglong *)0x0) && (*(int *)(puVar3[4] + 0xd0) == 1)) {
                    return 0;
                }
                break;
            }
        }
    }
    if (((*param_2 != 0x22) || (param_2[5] != 0)) ||
        (lVar8 = FUN_1405e2090(DAT_140c65898 + 0x6838,piVar1), lVar8 != 0)) {
        uVar9 = FUN_140407590();
        uVar7 = 0;
        if ((((ulonglong)param_1[1] <= uVar9) ||
             (uVar9 = *(ulonglong *)(*param_1 + uVar9 * 8), **(int **)(uVar9 + 8) != *param_2)) ||
            (*(longlong *)(uVar9 + 0x10) != *(longlong *)(param_2 + 2))) {
            uVar9 = uVar7;
        }
        local_58 = *(undefined8 *)(param_2 + 0x12);
        uVar14 = *(ulonglong *)(param_2 + 0x16);
        local_70 = 0;
        local_50 = *(ulonglong *)(param_2 + 0x14);
        local_78 = 0;
        local_40 = *(undefined8 *)(param_2 + 0x18);
        iVar5 = DAT_140c45f40;
        if (*DAT_140c63750 < DAT_140c45f40) {
            iVar5 = *DAT_140c63750;
        }
        uVar6 = 0;
        local_48 = uVar14;
        if ((((&DAT_140c45f50)[iVar5] != '\0') ||
             ((uVar10 = uVar7, uVar9 != 0 &&
                               ((*(int *)(DAT_140c635f0 + 0x1708) == 1 || ((*(byte *)(uVar9 + 4) & 1) != 0)))))) &&
            ((**(code **)(*DAT_140c65890 + 8))
                    (DAT_140c65890,*(undefined8 *)(param_2 + 0x12),2,&local_78,
                     in_stack_ffffffffffffff38 & 0xffffffff00000000), uVar12 = local_50, uVar10 = 0,
                    local_70 != 0)) {
            uVar15 = local_50 & 0xffffffff;
            uVar10 = FUN_14018dbc0(0,uVar15 + local_70,0x68);
            uVar13 = uVar7;
            if (uVar10 != 0) {
                uVar13 = uVar10;
            }
            uVar10 = uVar13;
            uVar4 = uVar7;
            uVar17 = uVar7;
            lVar8 = local_70;
            if (uVar15 != 0) {
                uVar11 = FUN_14018db00(uVar13,uVar15,0x68);
                FUN_1407db590(uVar11,uVar14,(uVar12 & 0xffffffff) * 0x68);
                uVar4 = uVar15;
                lVar8 = local_70;
                if ((uVar13 != uVar11) && (uVar10 = uVar11, uVar13 != 0)) {
                    (**(code **)(*(longlong *)(uVar13 - 0x10) + 8))(uVar13 - 0x10);
                    lVar8 = local_70;
                }
            }
            for (; lVar8 != 0; lVar8 = lVar8 + -1) {
                uVar12 = FUN_14018db00(uVar10,uVar4 + 1,0x68);
                uVar14 = uVar10;
                if ((uVar10 != uVar12) &&
                    (FUN_1407db590(uVar12,uVar10,uVar4 * 0x68), uVar14 = uVar12, uVar10 != 0)) {
                    (**(code **)(*(longlong *)(uVar10 - 0x10) + 8))();
                }
                puVar16 = (undefined4 *)(uVar4 * 0x68 + uVar14);
                uVar17 = uVar17 + 0x10;
                puVar16[2] = DAT_140c636a8;
                *puVar16 = 7;
                sVar2 = *(short *)(local_78 + -0x10 + uVar17);
                *(short *)(puVar16 + 1) = sVar2;
                *(short *)((longlong)puVar16 + 6) = *(short *)(local_78 + -8 + uVar17) + sVar2;
                uVar10 = uVar14;
                uVar4 = uVar4 + 1;
            }
            local_50 = local_50 & 0xffffffff00000000 | uVar4 & 0xffffffff;
            local_48 = uVar10;
        }
        if (param_2[5] == 0) {
            local_68 = param_2[8];
            iStack100 = param_2[9];
            iStack96 = param_2[10];
            iStack92 = param_2[0xb];
            uVar6 = FUN_140405ac0(param_1,&local_68,*(undefined8 *)(param_2 + 0xc),
                                  *(undefined8 *)(param_2 + 0x12));
        }
        if ((((uVar9 != 0) && ((*(byte *)(*(longlong *)(uVar9 + 8) + 0x34) & 0x10) != 0)) &&
             (param_2[0x1a] != 0)) &&
            ((lVar8 = FUN_1403d90d0(DAT_140c65898), uVar7 = 0, lVar8 != 0 && (param_2[6] == 0)))) {
            uVar7 = 1;
        }
        FUN_1404045c0(param_1,*param_2,*(undefined8 *)(param_2 + 2),param_2[0x1a],
                      *(undefined8 *)(param_2 + 0xc),*(undefined8 *)(param_2 + 0xe),param_2[0x10],
                      &local_58,param_2[5],param_2[4],param_2[6],(int)uVar7,uVar6,
                      *(undefined *)(param_2 + 0x1b));
        if (local_78 != 0) {
            (**(code **)(*(longlong *)(local_78 + -0x10) + 8))(local_78 + -0x10);
        }
        if (uVar10 != 0) {
            (**(code **)(*(longlong *)(uVar10 - 0x10) + 8))(uVar10 - 0x10);
        }
    }
    return 0;
}



undefined8 FUN_140403330(undefined8 param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    undefined8 uVar3;

    uVar1 = DAT_140c658a0;
    if (param_2[5] != 0) {
        uVar2 = FUN_14034bdd0(param_1,param_2[4]);
        uVar3 = FUN_14034bdd0();
        FUN_140003890(uVar1,*param_2,*(undefined8 *)(param_2 + 2),uVar3,0,uVar2);
    }
    return 0;
}



undefined8 FUN_1404033a0(undefined8 param_1,undefined4 *param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;

    uVar1 = DAT_140c658a0;
    if ((*(short **)(param_2 + 6) != (short *)0x0) && (**(short **)(param_2 + 6) != 0)) {
        uVar2 = FUN_14034bdd0(param_1,param_2[4]);
        FUN_140003890(uVar1,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 6),0,uVar2);
    }
    return 0;
}



undefined8 FUN_140403400(undefined8 param_1,ushort *param_2)

{
    ushort uVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    uint uVar6;
    ulonglong uVar7;
    longlong lVar8;
    uint uVar9;
    longlong lVar10;
    undefined4 local_78;
    undefined4 uStack116;
    undefined8 uStack112;
    undefined4 local_68;
    undefined8 local_64;
    undefined8 local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined8 local_30;
    uint local_28;
    longlong local_20;
    undefined4 local_18;
    undefined4 local_10;
    undefined local_c;

    lVar4 = DAT_140c658a0;
    uVar1 = *param_2;
    if (((uVar1 != 0) && ((ulonglong)uVar1 < *(ulonglong *)(DAT_140c658a0 + 0x100))) &&
        (lVar10 = *(longlong *)(*(longlong *)(DAT_140c658a0 + 0xf8) + (ulonglong)uVar1 * 8),
                lVar10 != 0)) {
        FUN_1407e4830(&local_78,0,0x70);
        if (*(longlong *)(lVar10 + 0x48) == 0) {
            if (*(longlong *)(lVar10 + 0x50) != 0) {
                local_20 = *(longlong *)(*(longlong *)(lVar10 + 0x50) + 0x20);
                local_28 = *(uint *)(*(longlong *)(lVar10 + 0x50) + 0x18);
                local_30 = *(undefined8 *)(*(longlong *)(lVar10 + 0x50) + 0x10);
                uStack112 = 0;
                local_78 = 6;
                if (*(int *)(*(longlong *)(lVar10 + 0x50) + 0x30) != 0) {
                    local_78 = 0x22;
                }
            }
        }
        else {
            local_20 = *(longlong *)(*(longlong *)(lVar10 + 0x48) + 0x20);
            local_28 = *(uint *)(*(longlong *)(lVar10 + 0x48) + 0x18);
            local_30 = *(undefined8 *)(*(longlong *)(lVar10 + 0x48) + 0x10);
            puVar2 = *(undefined4 **)(lVar10 + 0x48);
            local_78 = *puVar2;
            uStack116 = puVar2[1];
            uStack112 = *(undefined8 *)(puVar2 + 2);
        }
        if ((*(longlong *)(lVar10 + 0x48) != 0) || (*(longlong *)(lVar10 + 0x50) != 0)) {
            if ((*(int *)(param_2 + 4) != 0) && (uVar9 = 0, local_28 != 0)) {
                do {
                    lVar10 = (ulonglong)uVar9 * 0x68;
                    if (*(int *)(local_20 + lVar10) == 9) {
                        uVar7 = 0;
                        if (*(uint *)(param_2 + 4) != 0) {
                            plVar5 = *(longlong **)(param_2 + 8);
                            do {
                                if (*(longlong *)(local_20 + 8 + lVar10) == *plVar5) {
                                    *(undefined4 *)(local_20 + lVar10) = 8;
                                    lVar3 = *(longlong *)(param_2 + 8);
                                    lVar8 = uVar7 * 0x60;
                                    lVar10 = local_20 + lVar10;
                                    *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar8 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar8 + 8 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar8 + 0x10 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar8 + 0x18 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar8 + 0x20 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar8 + 0x28 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(lVar8 + 0x30 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar8 + 0x38 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar8 + 0x40 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar8 + 0x48 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar8 + 0x50 + lVar3);
                                    *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar8 + 0x58 + lVar3);
                                    break;
                                }
                                uVar6 = (int)uVar7 + 1;
                                uVar7 = (ulonglong)uVar6;
                                plVar5 = plVar5 + 0xc;
                            } while (uVar6 < *(uint *)(param_2 + 4));
                        }
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar9 < local_28);
            }
            local_18 = 0;
            local_38 = *(undefined4 *)(DAT_140c65898 + 0x6b28);
            local_68 = *(undefined4 *)(param_2 + 2);
            local_64 = 1;
            local_48 = *(undefined8 *)(param_2 + 0xc);
            local_40 = *(undefined8 *)(param_2 + 0x10);
            local_10 = *(undefined4 *)(param_2 + 0x14);
            local_c = *(undefined *)(param_2 + 0x16);
            FUN_140402f20(lVar4,&local_78);
        }
    }
    FUN_140405e00(lVar4,*param_2);
    return 0;
}



undefined8 FUN_1404037d0(undefined8 param_1,int *param_2)

{
    int *piVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;

    plVar3 = DAT_140c658a0;
    uVar4 = FUN_140407590(DAT_140c658a0);
    lVar2 = DAT_140c65898;
    if ((((uVar4 < (ulonglong)plVar3[1]) &&
          (piVar1 = *(int **)(*plVar3 + uVar4 * 8), **(int **)(piVar1 + 2) == *param_2)) &&
         (*(longlong *)(piVar1 + 4) == *(longlong *)(param_2 + 2))) && (piVar1 != (int *)0x0)) {
        *piVar1 = param_2[4];
        FUN_1400ea3e0(*(undefined8 *)(lVar2 + 0x7340),"ChatFlag",&DAT_1409ee694);
    }
    return 0;
}



undefined8 FUN_140403850(undefined8 param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    plVar3 = DAT_140c658a0;
    uVar4 = FUN_140407590(DAT_140c658a0);
    if (uVar4 < (ulonglong)plVar3[1]) {
        lVar2 = *(longlong *)(*plVar3 + uVar4 * 8);
        if (((**(int **)(lVar2 + 8) == *param_2) &&
             (*(longlong *)(lVar2 + 0x10) == *(longlong *)(param_2 + 2))) && (lVar2 != 0)) {
            if (((*(int **)(lVar2 + 8))[0xd] & 0x100U) == 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,lVar2,
                              param_2[4]);
            }
            if (((plVar3[0x1a] != 0) && (**(int **)(lVar2 + 8) == 0x13)) &&
                ((iVar1 = param_2[4], iVar1 == 4 || ((iVar1 == 0x11 || (iVar1 == 0x16)))))) {
                local_28 = 0;
                local_20 = 0;
                local_18 = 0;
                local_10 = 0;
                local_28 = FUN_14034bdd0();
                if (DAT_140c65c30 == plVar3[0x1a]) {
                    FUN_140645bb0(plVar3[0x1a],&DAT_1409e8524,&local_28,0);
                }
            }
        }
    }
    FUN_140405e00(plVar3,*(undefined2 *)(param_2 + 5));
    return 0;
}



undefined8 FUN_1404039f0(int *param_1,int *param_2)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    short sVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    longlong lVar9;
    int *piVar10;
    int *local_res8;
    int local_48 [8];

    plVar4 = DAT_140c658a0;
    local_res8 = param_1;
    uVar5 = FUN_140407590(DAT_140c658a0);
    if ((((ulonglong)plVar4[1] <= uVar5) ||
         (piVar10 = *(int **)(*plVar4 + uVar5 * 8), **(int **)(piVar10 + 2) != *param_2)) ||
        (*(longlong *)(piVar10 + 4) != *(longlong *)(param_2 + 2))) {
        lVar6 = FUN_1401f20e0(*param_2);
        if (lVar6 == 0) {
            return 0;
        }
        if ((*(byte *)(lVar6 + 0x34) & 0x80) == 0) {
            return 0;
        }
        lVar7 = FUN_14018b280(0x138,0);
        lVar9 = 0;
        if (lVar7 == 0) {
            local_res8 = (int *)0x0;
        }
        else {
            local_res8 = (int *)FUN_140401690(lVar7,lVar6,*(undefined8 *)(param_2 + 2));
        }
        piVar10 = local_res8;
        if (*param_2 == 0x12) {
            *local_res8 = param_2[7];
            psVar8 = *(short **)(param_2 + 4);
            sVar3 = *psVar8;
            lVar6 = lVar9;
            while (sVar3 != 0) {
                lVar6 = lVar6 + 1;
                sVar3 = psVar8[lVar6];
            }
            lVar6 = lVar6 * 2 >> 1;
            uVar1 = lVar6 + 1;
            lVar7 = lVar9;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar7 = FUN_14018b280(uVar1 * 2,0);
            }
            lVar6 = lVar6 * 2;
            FUN_1407db590(lVar7,psVar8,lVar6);
            puVar2 = (undefined2 *)(lVar6 + lVar7);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            if (local_48 != piVar10 + 6) {
                FUN_14001c480(piVar10 + 6,lVar7);
            }
            if (lVar7 != 0) {
                FUN_14018b900(lVar7,0);
            }
        }
        if ((*(uint *)(*(longlong *)(piVar10 + 2) + 0x34) & 0x400) != 0) {
            lVar6 = FUN_14024db80(*(undefined4 *)(plVar4 + 0x19));
            if ((lVar6 == 0) || (psVar8 = (short *)FUN_14034bdd0(), psVar8 == (short *)0x0)) {
                psVar8 = &DAT_1409e87a4;
            }
            sVar3 = *psVar8;
            lVar6 = lVar9;
            while (sVar3 != 0) {
                lVar6 = lVar6 + 1;
                sVar3 = psVar8[lVar6];
            }
            lVar6 = lVar6 * 2 >> 1;
            uVar1 = lVar6 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar9 = FUN_14018b280(uVar1 * 2,0);
            }
            lVar6 = lVar6 * 2;
            FUN_1407db590(lVar9,psVar8,lVar6);
            puVar2 = (undefined2 *)(lVar6 + lVar9);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            if (local_48 != piVar10 + 0x3e) {
                FUN_14001c480(piVar10 + 0x3e,lVar9);
            }
            if (lVar9 != 0) {
                FUN_14018b900(lVar9,0);
            }
        }
        FUN_140407990();
        FUN_1400b4de0(plVar4,uVar5,&local_res8);
        piVar10 = local_res8;
        FUN_140407e40(plVar4,local_res8);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatJoin",&DAT_1409ee774,piVar10);
    return 0;
}



undefined8 FUN_140403c80(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    plVar2 = DAT_140c658a0;
    uVar3 = FUN_140407590(DAT_140c658a0);
    if (uVar3 < (ulonglong)plVar2[1]) {
        lVar1 = *(longlong *)(*plVar2 + uVar3 * 8);
        if (((**(int **)(lVar1 + 8) == *param_2) &&
             (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_2 + 2))) &&
            ((*(byte *)(*(int **)(lVar1 + 8) + 0xd) & 0x80) != 0)) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatLeave",&DAT_1409ee7ec,lVar1,
                          param_2[4] == 1,param_2[4] == 2);
            FUN_140408580(plVar2,lVar1);
            FUN_140007270(plVar2,uVar3);
            FUN_1404019f0(lVar1);
            FUN_14018b900(lVar1,0);
        }
        return 0;
    }
    return 0;
}



undefined8 FUN_140403d70(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    plVar2 = DAT_140c658a0;
    uVar3 = FUN_140407590(DAT_140c658a0);
    if ((((uVar3 < (ulonglong)plVar2[1]) &&
          (lVar1 = *(longlong *)(*plVar2 + uVar3 * 8), **(int **)(lVar1 + 8) == *param_2)) &&
         (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_2 + 2))) && (lVar1 != 0)) {
        FUN_140401b70(lVar1,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8),param_2[4]);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatList",&DAT_1409ee7bc,lVar1);
    }
    return 0;
}



undefined8 FUN_140403e00(undefined8 param_1,int *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    plVar2 = DAT_140c658a0;
    uVar3 = FUN_140407590(DAT_140c658a0);
    if ((((uVar3 < (ulonglong)plVar2[1]) &&
          (lVar1 = *(longlong *)(*plVar2 + uVar3 * 8), **(int **)(lVar1 + 8) == *param_2)) &&
         (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_2 + 2))) && (lVar1 != 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatAction",&DAT_140b012d4,lVar1,
                      param_2[8],*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
    }
    return 0;
}



undefined4 * FUN_140403e90(undefined4 *param_1,ulonglong param_2,ulonglong param_3,short *param_4)

{
    undefined2 *puVar1;
    short sVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined4 *puVar11;
    uint uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    undefined4 *local_res8;
    undefined4 local_48 [8];

    plVar6 = DAT_140c658a0;
    uVar10 = 0;
    uVar4 = DAT_140c658a0[1];
    uVar12 = (uint)param_2;
    uVar9 = uVar10;
    uVar14 = uVar10;
    uVar15 = uVar4;
    if (uVar4 != 0) {
        do {
            uVar13 = (uVar15 - uVar9 >> 1) + uVar9;
            lVar7 = *(longlong *)(*DAT_140c658a0 + uVar13 * 8);
            uVar3 = **(uint **)(lVar7 + 8);
            if (uVar3 < uVar12) {
                LAB_140403efe:
                uVar9 = uVar13 + 1;
                uVar13 = uVar15;
            }
            else if (uVar3 <= uVar12) {
                uVar5 = *(ulonglong *)(lVar7 + 0x10);
                if (uVar5 < param_3) goto LAB_140403efe;
                uVar14 = uVar13;
                if (uVar5 <= param_3) break;
            }
            uVar14 = uVar9;
            uVar15 = uVar13;
        } while (uVar9 < uVar13);
    }
    if (((uVar4 <= uVar14) ||
         (puVar11 = *(undefined4 **)(*DAT_140c658a0 + uVar14 * 8), **(uint **)(puVar11 + 2) != uVar12))
        || (*(ulonglong *)(puVar11 + 4) != param_3)) {
        if (((uVar12 < 0x30) && ((0x800060038000U >> (param_2 & 0x3f) & 1) != 0)) &&
            (local_res8 = param_1, lVar7 = FUN_1401f20e0(param_2 & 0xffffffff), lVar7 != 0)) {
            lVar8 = FUN_14018b280(0x138,0);
            if (lVar8 == 0) {
                local_res8 = (undefined4 *)0x0;
            }
            else {
                local_res8 = (undefined4 *)FUN_140401690(lVar8,lVar7,param_3);
            }
            puVar11 = local_res8;
            *local_res8 = 0;
            sVar2 = *param_4;
            uVar9 = uVar10;
            while (sVar2 != 0) {
                uVar9 = uVar9 + 1;
                sVar2 = param_4[uVar9];
            }
            lVar7 = (longlong)(uVar9 * 2) >> 1;
            uVar9 = lVar7 + 1;
            if (uVar9 < 0x7fffffffffffffff) {
                uVar10 = FUN_14018b280(uVar9 * 2,0);
            }
            lVar7 = lVar7 * 2;
            FUN_1407db590(uVar10,param_4,lVar7);
            puVar1 = (undefined2 *)(lVar7 + uVar10);
            if (puVar1 != (undefined2 *)0x0) {
                *puVar1 = 0;
            }
            if (local_48 != puVar11 + 6) {
                FUN_14001c480(puVar11 + 6,uVar10);
            }
            if (uVar10 != 0) {
                FUN_14018b900(uVar10,0);
            }
            FUN_140407990();
            FUN_1400b4de0(plVar6,uVar14,&local_res8);
            puVar11 = local_res8;
            FUN_140407e40(plVar6,local_res8);
            if (DAT_140c65898 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatJoin",&DAT_1409ee774,puVar11);
            }
        }
        else {
            puVar11 = (undefined4 *)0x0;
        }
    }
    return puVar11;
}



void FUN_140404090(undefined8 param_1,uint param_2,ulonglong param_3,short *param_4)

{
    undefined2 *puVar1;
    short sVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined *puVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined local_38 [32];

    plVar5 = DAT_140c658a0;
    uVar7 = 0;
    uVar6 = DAT_140c658a0[1];
    uVar9 = uVar7;
    uVar12 = uVar7;
    if (uVar6 != 0) {
        do {
            uVar8 = (uVar6 - uVar12 >> 1) + uVar12;
            lVar11 = *(longlong *)(*DAT_140c658a0 + uVar8 * 8);
            uVar3 = **(uint **)(lVar11 + 8);
            if (uVar3 < param_2) {
                LAB_1404040fc:
                uVar12 = uVar8 + 1;
                uVar8 = uVar6;
            }
            else if (uVar3 <= param_2) {
                uVar4 = *(ulonglong *)(lVar11 + 0x10);
                if (uVar4 < param_3) goto LAB_1404040fc;
                uVar9 = uVar8;
                if (uVar4 <= param_3) break;
            }
            uVar9 = uVar12;
            uVar12 = uVar9;
            uVar6 = uVar8;
        } while (uVar9 < uVar8);
    }
    if (uVar9 < (ulonglong)DAT_140c658a0[1]) {
        lVar11 = *(longlong *)(uVar9 * 8 + *DAT_140c658a0);
        if ((**(uint **)(lVar11 + 8) == param_2) && (*(ulonglong *)(lVar11 + 0x10) == param_3)) {
            sVar2 = *param_4;
            uVar6 = uVar7;
            while (sVar2 != 0) {
                uVar6 = uVar6 + 1;
                sVar2 = param_4[uVar6];
            }
            lVar11 = (longlong)(uVar6 * 2) >> 1;
            uVar6 = lVar11 + 1;
            if (uVar6 < 0x7fffffffffffffff) {
                uVar7 = FUN_14018b280(uVar6 * 2,0);
            }
            lVar11 = lVar11 * 2;
            FUN_1407db590(uVar7,param_4,lVar11);
            puVar1 = (undefined2 *)(lVar11 + uVar7);
            if (puVar1 != (undefined2 *)0x0) {
                *puVar1 = 0;
            }
            puVar10 = (undefined *)(*(longlong *)(uVar9 * 8 + *plVar5) + 0x18);
            if (local_38 != puVar10) {
                FUN_14001c480(puVar10,uVar7);
            }
            if (uVar7 != 0) {
                FUN_14018b900(uVar7,0);
            }
        }
    }
    return;
}



void FUN_1404041e0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong *plVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    plVar4 = DAT_140c658a0;
    uVar5 = 0;
    uVar9 = DAT_140c658a0[1];
    uVar6 = (uint)param_2;
    uVar8 = uVar5;
    if (uVar9 != 0) {
        do {
            uVar7 = (uVar9 - uVar5 >> 1) + uVar5;
            lVar2 = *(longlong *)(*DAT_140c658a0 + uVar7 * 8);
            uVar1 = **(uint **)(lVar2 + 8);
            if (uVar1 < uVar6) {
                LAB_14040423e:
                uVar5 = uVar7 + 1;
                uVar7 = uVar9;
            }
            else if (uVar1 <= uVar6) {
                uVar3 = *(ulonglong *)(lVar2 + 0x10);
                if (uVar3 < param_3) goto LAB_14040423e;
                uVar8 = uVar7;
                if (uVar3 <= param_3) break;
            }
            uVar8 = uVar5;
            uVar9 = uVar7;
        } while (uVar5 < uVar7);
    }
    if ((((uVar8 < (ulonglong)DAT_140c658a0[1]) &&
          (lVar2 = *(longlong *)(*DAT_140c658a0 + uVar8 * 8), **(uint **)(lVar2 + 8) == uVar6)) &&
         (*(ulonglong *)(lVar2 + 0x10) == param_3)) &&
        ((uVar6 < 0x30 && ((0x800060038000U >> (param_2 & 0x3f) & 1) != 0)))) {
        if (DAT_140c65898 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatLeave",&DAT_1409ee7ec,lVar2,0,0);
        }
        FUN_140408580(plVar4,lVar2);
        FUN_140007270(plVar4,uVar8);
        if (lVar2 != 0) {
            FUN_1404019f0(lVar2);
            FUN_14018b900(lVar2,0);
        }
    }
    return;
}



ulonglong FUN_140404300(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 local_res8;

    local_res8 = *(undefined8 *)(param_2 + 8);
    uVar3 = (**(code **)(param_1 + 0x28))(&local_res8);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x20) + (uVar3 % *(ulonglong *)(param_1 + 0x18)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x30))(&local_res8,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140404390(undefined8 param_1,longlong param_2)

{
    short sVar1;
    ulonglong uVar2;
    short *psVar3;
    longlong lVar4;
    char cVar5;
    uint uVar6;
    int iVar7;
    longlong lVar8;
    undefined4 *puVar9;
    uint uVar10;
    short *psVar11;

    lVar8 = FUN_140404300(DAT_140c658a0);
    if (lVar8 != 0) {
        return **(undefined4 **)(lVar8 + 8);
    }
    uVar10 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c6528c != 0) {
            return 0x12;
        }
        iVar7 = FUN_1401f1e80();
        if (iVar7 < 0) {
            return 0x12;
        }
        uVar6 = (**(code **)(*DAT_140c64728 + 0x28))();
    }
    else {
        uVar6 = (*DAT_140c63838)(&PTR_u_ChatChannel_140a69870);
    }
    if (uVar6 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c6528c == 0) {
                    iVar7 = FUN_1401f1e80();
                    if (iVar7 < 0) {
                        puVar9 = (undefined4 *)0x0;
                    }
                    else {
                        puVar9 = (undefined4 *)(**(code **)(*DAT_140c64728 + 0x20))();
                    }
                }
                else {
                    puVar9 = (undefined4 *)0x0;
                }
            }
            else {
                puVar9 = (undefined4 *)(*DAT_140c63848)(&PTR_u_ChatChannel_140a69870);
            }
            uVar2 = *(ulonglong *)(puVar9 + 4);
            if (uVar2 == 0) {
                psVar11 = (short *)0x0;
            }
            else if (DAT_140c3fe70 < uVar2) {
                psVar11 = (short *)0x0;
            }
            else {
                psVar11 = (short *)(DAT_140c3fe68 + uVar2);
            }
            psVar3 = *(short **)(param_2 + 8);
            lVar8 = 0;
            sVar1 = *psVar3;
            if (sVar1 == *psVar11) {
                do {
                    if (sVar1 == 0) goto LAB_1404045ad;
                    sVar1 = psVar3[lVar8 + 1];
                    lVar4 = lVar8 + 1;
                    lVar8 = lVar8 + 1;
                } while (sVar1 == psVar11[lVar4]);
            }
            uVar2 = *(ulonglong *)(puVar9 + 6);
            if (uVar2 == 0) {
                psVar11 = (short *)0x0;
            }
            else if (DAT_140c3fe70 < uVar2) {
                psVar11 = (short *)0x0;
            }
            else {
                psVar11 = (short *)(DAT_140c3fe68 + uVar2);
            }
            sVar1 = *psVar3;
            lVar8 = 0;
            if (sVar1 == *psVar11) {
                do {
                    if (sVar1 == 0) goto LAB_1404045ad;
                    sVar1 = psVar3[lVar8 + 1];
                    lVar4 = lVar8 + 1;
                    lVar8 = lVar8 + 1;
                } while (sVar1 == psVar11[lVar4]);
            }
            lVar8 = FUN_14034bdd0();
            if (((((lVar8 != 0) && (cVar5 = FUN_14040b320(lVar8), cVar5 != '\0')) ||
                  ((lVar8 = FUN_14034bdd0(), lVar8 != 0 && (cVar5 = FUN_14040b320(lVar8), cVar5 != '\0'))))
                 || ((lVar8 = FUN_14034bdd0(), lVar8 != 0 && (cVar5 = FUN_14040b320(lVar8), cVar5 != '\0'))
                 )) || ((lVar8 = FUN_14034bdd0(), lVar8 != 0 &&
                                                  (cVar5 = FUN_14040b320(lVar8), cVar5 != '\0')))) {
                LAB_1404045ad:
                return *puVar9;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
    }
    return 0x12;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404045c0(undefined2 *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                   undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                   int param_9,int param_10,int param_11,int param_12,int param_13,undefined param_14
)

{
    undefined2 *puVar1;
    uint *puVar2;
    undefined2 *puVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined8 *puVar10;
    longlong lVar11;
    undefined *puVar12;
    longlong lVar13;
    undefined *puVar14;
    undefined8 *puVar15;
    undefined auStack344 [32];
    undefined8 local_138;
    int local_130;
    undefined8 local_128;
    undefined *local_120;
    undefined *local_118;
    undefined *local_110;
    undefined *local_108;
    int local_f8;
    int local_f4;
    undefined **local_f0;
    undefined8 local_e8;
    code *local_e0;
    undefined8 local_d8;
    int local_d0;
    undefined *local_c8;
    undefined local_c0 [8];
    longlong local_b8;
    undefined8 *local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined **local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    longlong local_68;
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
    local_98 = param_6;
    puVar12 = &DAT_1409e84ec;
    if (param_5 != (undefined *)0x0) {
        puVar12 = param_5;
    }
    local_f4 = param_9;
    local_a0 = param_8;
    local_f8 = param_10;
    local_d0 = param_2;
    local_c8 = puVar12;
    local_90 = param_3;
    lVar6 = FUN_140401220(param_1);
    if ((lVar6 != 0) && (param_10 = local_f8, DAT_140c65898 != 0)) {
        if ((*(uint *)(*(longlong *)(lVar6 + 8) + 0x34) & 0x100) == 0) {
            local_d8 = (undefined2 *)CONCAT44(local_d8._4_4_,1);
            puVar1 = *(undefined2 **)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
            local_f0 = &PTR_FUN_140b569f0;
            local_e0 = (code *)puVar1;
            if (*(ulonglong *)(*(longlong *)(puVar1 + 0x10) + 0x70) <=
                *(ulonglong *)(*(longlong *)(puVar1 + 0x10) + 0x78)) {
                FUN_14005e2c0(puVar1);
            }
            puVar15 = *(undefined8 **)(puVar1 + 8);
            uVar7 = FUN_14005c1b0(puVar1,0,0);
            *(undefined4 *)(puVar15 + 1) = 5;
            *puVar15 = uVar7;
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            uVar4 = FUN_1400578c0(puVar1);
            local_e8 = (undefined2 *)CONCAT44(local_e8._4_4_,uVar4);
            local_70 = 1;
            lVar9 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
            local_88 = &PTR_FUN_140b569f0;
            local_78 = lVar9;
            if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar9);
            }
            puVar15 = *(undefined8 **)(lVar9 + 0x10);
            uVar7 = FUN_14005c1b0(lVar9,0,0);
            *(undefined4 *)(puVar15 + 1) = 5;
            *puVar15 = uVar7;
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
            local_80 = FUN_1400578c0(lVar9);
            puVar10 = local_a0;
            FUN_140408850();
            local_68 = FUN_1403d90d0(DAT_140c65898,param_4);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            lVar9 = FUN_14018f0e0(local_c0,L"bAutoResponse");
            lVar11 = -1;
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(puVar1 + 8) + 8) = 0;
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar13) != '\0');
                FUN_140058710(puVar1);
            }
            if (local_b8 != 0) {
                FUN_14018b900(local_b8,0);
            }
            puVar2 = *(uint **)(puVar1 + 8);
            puVar2[2] = 1;
            *puVar2 = (uint)(param_11 != 0);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            uVar7 = FUN_1400580e0(puVar1,0xfffffffd);
            FUN_14005ea50(puVar1,uVar7,*(longlong *)(puVar1 + 8) + -0x20,*(longlong *)(puVar1 + 8) + -0x10
            );
            *(undefined **)(puVar1 + 8) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar1 + 8);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            lVar9 = FUN_14018f0e0(local_c0,&DAT_140af8898);
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(puVar1 + 8) + 8) = 0;
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar13) != '\0');
                FUN_140058710(puVar1);
            }
            if (local_b8 != 0) {
                FUN_14018b900(local_b8,0);
            }
            puVar2 = *(uint **)(puVar1 + 8);
            puVar2[2] = 1;
            *puVar2 = (uint)(local_f8 != 0);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            uVar7 = FUN_1400580e0(puVar1,0xfffffffd);
            FUN_14005ea50(puVar1,uVar7,*(longlong *)(puVar1 + 8) + -0x20,*(longlong *)(puVar1 + 8) + -0x10
            );
            *(undefined **)(puVar1 + 8) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar1 + 8);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            lVar9 = FUN_14018f0e0(local_c0,L"bSelf");
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(puVar1 + 8) + 8) = 0;
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar13) != '\0');
                FUN_140058710(puVar1);
            }
            if (local_b8 != 0) {
                FUN_14018b900(local_b8,0);
            }
            puVar2 = *(uint **)(puVar1 + 8);
            puVar2[2] = 1;
            *puVar2 = (uint)(local_f4 != 0);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            uVar7 = FUN_1400580e0(puVar1,0xfffffffd);
            FUN_14005ea50(puVar1,uVar7,*(longlong *)(puVar1 + 8) + -0x20,*(longlong *)(puVar1 + 8) + -0x10
            );
            *(undefined **)(puVar1 + 8) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar1 + 8);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            FUN_1400f0870(puVar1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + -0x10;
            puVar15 = *(undefined8 **)(puVar1 + 8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            FUN_1400f0870(puVar1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + -0x10;
            puVar15 = *(undefined8 **)(puVar1 + 8);
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            FUN_1400f06f0(puVar1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + -0x10;
            FUN_1400fb2a0(&local_f0,L"arMessageSegments",local_80);
            if ((local_68 != 0) && (iVar5 = FUN_140649930(puVar1,local_68), iVar5 != 0)) {
                FUN_1400fb540(&local_f0,L"unitSource");
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + -0x10;
            }
            puVar8 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            *puVar15 = *puVar8;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            lVar9 = FUN_14018f0e0(local_c0,L"bShowChatBubble");
            if (*(longlong *)(lVar9 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(puVar1 + 8) + 8) = 0;
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            }
            else {
                lVar13 = -1;
                do {
                    lVar13 = lVar13 + 1;
                } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar13) != '\0');
                FUN_140058710(puVar1);
            }
            if (local_b8 != 0) {
                FUN_14018b900(local_b8,0);
            }
            puVar2 = *(uint **)(puVar1 + 8);
            puVar2[2] = 1;
            *puVar2 = (uint)(param_12 != 0);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            uVar7 = FUN_1400580e0(puVar1,0xfffffffd);
            FUN_14005ea50(puVar1,uVar7,*(longlong *)(puVar1 + 8) + -0x20,*(longlong *)(puVar1 + 8) + -0x10
            );
            *(undefined **)(puVar1 + 8) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar1 + 8);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            iVar5 = *(int *)(puVar10 + 3);
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            *puVar15 = *puVar10;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            lVar9 = FUN_14018f0e0(local_c0,L"bCrossFaction");
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *)(*(longlong *)(puVar1 + 8) + 8) = 0;
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            }
            else {
                do {
                    lVar11 = lVar11 + 1;
                } while (*(char *)(lVar9 + lVar11) != '\0');
                FUN_140058710(puVar1,lVar9,lVar11);
            }
            if (local_b8 != 0) {
                FUN_14018b900(local_b8,0);
            }
            puVar2 = *(uint **)(puVar1 + 8);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar5 != 0);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            uVar7 = FUN_1400580e0(puVar1,0xfffffffd);
            FUN_14005ea50(puVar1,uVar7,*(longlong *)(puVar1 + 8) + -0x20,*(longlong *)(puVar1 + 8) + -0x10
            );
            *(undefined **)(puVar1 + 8) = &DAT_ffffffffffffffd0 + *(longlong *)(puVar1 + 8);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            if (param_13 != 0) {
                puVar10 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
                *puVar15 = *puVar10;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
                FUN_1400f06f0(puVar1);
                *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + -0x10;
            }
            puVar10 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0xa0),uVar4);
            puVar15 = *(undefined8 **)(puVar1 + 8);
            *puVar15 = *puVar10;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + 0x10;
            FUN_1400f06f0(puVar1,puVar15,L"nPremiumTier",param_14);
            lVar9 = DAT_140c65898;
            *(longlong *)(puVar1 + 8) = *(longlong *)(puVar1 + 8) + -0x10;
            local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar4);
            FUN_1400ea3e0(*(undefined8 *)(lVar9 + 0x7340),"ChatMessage",&DAT_1409ee174,lVar6);
            if (local_78 != 0) {
                FUN_1400579e0();
            }
            FUN_1400579e0(puVar1);
            param_8 = local_a0;
            puVar12 = local_c8;
            param_2 = local_d0;
        }
        param_10 = local_f8;
        lVar9 = *(longlong *)(param_1 + 0x68);
        if (((lVar9 != 0) && (param_2 == 0x13)) && (DAT_140c65c30 == lVar9)) {
            FUN_140645bb0(lVar9,puVar12,param_8,local_f8);
        }
    }
    if (*(longlong *)(param_1 + 0x2c) != 0) {
        GetLocalTime((LPSYSTEMTIME)&local_68);
        local_e8 = (undefined2 *)FUN_14018b280(0x10);
        local_d8 = local_e8 + 8;
        if (local_e8 != (undefined2 *)0x0) {
            *local_e8 = 0;
        }
        local_e0 = (code *)local_e8;
        FUN_14018cf50((_SYSTEMTIME *)&local_68,&local_f0);
        puVar1 = local_e8;
        local_108 = &DAT_1409e84cc;
        if ((undefined *)*param_8 != (undefined *)0x0) {
            local_108 = (undefined *)*param_8;
        }
        if (lVar6 == 0) {
            local_138 = &DAT_1409e8624;
            puVar14 = &DAT_1409e85e4;
        }
        else {
            local_138 = *(undefined **)(lVar6 + 0x100);
            puVar14 = *(undefined **)(lVar6 + 0x20);
        }
        local_118 = &DAT_1409e859c;
        if (param_10 != 0) {
            local_118 = &DAT_1409e85b4;
        }
        local_120 = &DAT_140af0754;
        if (local_f4 != 0) {
            local_120 = &DAT_140af1014;
        }
        local_128 = local_90;
        local_130 = param_2;
        local_110 = puVar12;
        FUN_14018efa0(local_c0,L"[%s]%s.%s(%d, %I64u) %s%s%s: %s\r\n",local_e8,puVar14);
        FUN_14018f0e0(&local_f0,local_b8);
        puVar3 = local_e8;
        FUN_14001b050(param_1 + 0x30,local_e8,local_e0);
        if (puVar3 != (undefined2 *)0x0) {
            FUN_14018b900(puVar3,0);
        }
        if (*(longlong *)(param_1 + 0x48) == 0) {
            local_f0 = (undefined **)((ulonglong)local_f0 & 0xffffffff00000000);
            local_e0 = FUN_14040ac60;
            local_d8 = (undefined2 *)0x0;
            local_e8 = param_1;
            FUN_140195960(param_1 + 0x40,1000,&local_f0,4);
        }
        if (local_b8 != 0) {
            FUN_14018b900(local_b8,0);
        }
        if (puVar1 != (undefined2 *)0x0) {
            FUN_14018b900(puVar1,0);
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack344);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140404ee0(void)

{
    uint uVar1;
    uint *puVar2;
    longlong *plVar3;
    uint uVar4;
    int iVar5;
    uint *puVar6;
    longlong lVar7;
    uint *puVar8;
    uint *puVar9;
    uint *puVar10;
    uint *puVar11;
    uint uVar12;
    uint *puVar13;
    uint *puVar14;

    plVar3 = DAT_140c658a0;
    puVar14 = (uint *)0x0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c6528c != 0) || (iVar5 = FUN_1401f1e80(), iVar5 < 0)) goto LAB_140405082;
        uVar4 = (**(code **)(*DAT_140c64728 + 0x28))();
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_ChatChannel_140a69870);
    }
    puVar13 = puVar14;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar6 = puVar14;
                if (_DAT_140c6528c == 0) {
                    iVar5 = FUN_1401f1e80();
                    if (iVar5 < 0) {
                        puVar6 = (uint *)0x0;
                    }
                    else {
                        puVar6 = (uint *)(**(code **)(*DAT_140c64728 + 0x20))();
                    }
                }
            }
            else {
                puVar6 = (uint *)(*DAT_140c63848)(&PTR_u_ChatChannel_140a69870);
            }
            if (((puVar6[0xd] & 8) != 0) && (-1 < (char)puVar6[0xd])) {
                puVar2 = (uint *)plVar3[1];
                uVar12 = *puVar6;
                puVar8 = puVar14;
                puVar9 = puVar2;
                puVar11 = puVar14;
                if (puVar2 != (uint *)0x0) {
                    do {
                        puVar10 = (uint *)(((ulonglong)((longlong)puVar9 - (longlong)puVar8) >> 1) +
                                           (longlong)puVar8);
                        lVar7 = *(longlong *)(*plVar3 + (longlong)puVar10 * 8);
                        uVar1 = **(uint **)(lVar7 + 8);
                        if (uVar1 < uVar12) {
                            puVar8 = (uint *)((longlong)puVar10 + 1);
                            puVar10 = puVar9;
                        }
                        else if ((uVar1 <= uVar12) && (puVar11 = puVar10, *(longlong *)(lVar7 + 0x10) == 0))
                            break;
                        puVar9 = puVar10;
                        puVar11 = puVar8;
                    } while (puVar8 < puVar10);
                }
                if (((puVar2 <= puVar11) ||
                     (lVar7 = *(longlong *)(*plVar3 + (longlong)puVar11 * 8),
                             **(uint **)(lVar7 + 8) != uVar12)) || (*(longlong *)(lVar7 + 0x10) != 0)) {
                    lVar7 = FUN_14018b280(0x138,0);
                    if (lVar7 != 0) {
                        FUN_140401690(lVar7,puVar6,0);
                    }
                    FUN_1400b4de0(plVar3);
                }
            }
            uVar12 = (int)puVar13 + 1;
            puVar13 = (uint *)(ulonglong)uVar12;
        } while (uVar12 < uVar4);
    }
    LAB_140405082:
    iVar5 = DAT_140c45f80;
    if (*DAT_140c63750 < DAT_140c45f80) {
        iVar5 = *DAT_140c63750;
    }
    FUN_1404057a0(plVar3,(&DAT_140c45f90)[iVar5]);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404050c0(void)

{
    longlong *plVar1;
    short sVar2;
    ulonglong uVar3;
    short *psVar4;
    uint uVar5;
    int iVar6;
    undefined8 *puVar7;
    short *psVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined8 *puVar11;
    undefined8 uVar12;
    undefined8 *puVar13;
    longlong lVar14;
    undefined8 *puVar15;
    uint uVar16;
    ulonglong *puVar17;
    longlong *plVar18;
    undefined8 *local_res18;
    longlong *local_res20;
    undefined local_70 [8];
    short *local_68;
    short *local_60;
    short *local_58;

    plVar18 = DAT_140c658a0;
    local_res20 = DAT_140c658a0;
    FUN_140019490(DAT_140c658a0 + 2);
    plVar1 = plVar18 + 7;
    FUN_140019c40(plVar1);
    puVar13 = (undefined8 *)plVar18[0x1a];
    puVar15 = (undefined8 *)0x0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    if (DAT_140c65c30 == puVar13) {
        DAT_140c65c30 = puVar15;
    }
    FUN_140645850(plVar18[0x1a]);
    uVar16 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64648 != 0) || (iVar6 = FUN_1401fd980(), iVar6 < 0)) goto LAB_1404054db;
        uVar5 = (**(code **)(*DAT_140c64040 + 0x28))();
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Emotes_140a6a210,DAT_140c63858);
    }
    puVar13 = puVar15;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                puVar7 = puVar15;
                if (_DAT_140c64648 == 0) {
                    iVar6 = FUN_1401fd980();
                    if (iVar6 < 0) {
                        puVar7 = (undefined8 *)0x0;
                    }
                    else {
                        puVar7 = (undefined8 *)(**(code **)(*DAT_140c64040 + 0x20))(DAT_140c64040,puVar13);
                    }
                }
            }
            else {
                puVar7 = (undefined8 *)(*DAT_140c63848)(&PTR_u_Emotes_140a6a210,puVar13,DAT_140c63858);
            }
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 != (short *)0x0) {
                sVar2 = *psVar8;
                puVar13 = puVar15;
                while (sVar2 != 0) {
                    puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                    sVar2 = psVar8[(longlong)puVar13];
                }
                puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar13 * 2 + 0x12,0);
                puVar11 = puVar15;
                if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = &PTR_LAB_140b55060;
                    puVar9[1] = puVar13;
                    puVar11 = puVar9;
                }
                puVar11 = puVar11 + 2;
                FUN_1407db590(puVar11,psVar8,(longlong)puVar13 * 2);
                *(short *)((longlong)puVar13 * 2 + (longlong)puVar11) = 0;
                local_res18 = puVar11;
                FUN_140019b70(plVar1,&local_res18);
                if (local_res18 != (undefined8 *)0x0) {
                    (**(code **)(local_res18[-2] + 8))(local_res18 + -2);
                }
                FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),psVar8,FUN_140405e90,puVar7);
                local_68 = (short *)FUN_14018b280(0x10);
                local_58 = local_68 + 8;
                if (local_68 != (short *)0x0) {
                    *local_68 = 0;
                }
                local_60 = local_68;
                FUN_1400a7b60(local_70,psVar8);
                psVar4 = local_68;
                iVar6 = FUN_14018e2c0(psVar8,local_68);
                if (iVar6 != 0) {
                    if (psVar4 == (short *)0x0) {
                        local_res18 = (undefined8 *)0x0;
                    }
                    else {
                        sVar2 = *psVar4;
                        puVar13 = puVar15;
                        while (sVar2 != 0) {
                            puVar13 = (undefined8 *)((longlong)puVar13 + 1);
                            sVar2 = psVar4[(longlong)puVar13];
                        }
                        puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar13 * 2 + 0x12,0);
                        puVar11 = puVar15;
                        if (puVar9 != (undefined8 *)0x0) {
                            *puVar9 = &PTR_LAB_140b55060;
                            puVar9[1] = puVar13;
                            puVar11 = puVar9;
                        }
                        puVar11 = puVar11 + 2;
                        FUN_1407db590(puVar11,psVar4,(longlong)puVar13 * 2);
                        *(short *)((longlong)puVar13 * 2 + (longlong)puVar11) = 0;
                        local_res18 = puVar11;
                    }
                    lVar10 = FUN_140019b70(plVar18 + 9,&local_res18);
                    if (local_res18 != (undefined8 *)0x0) {
                        (**(code **)(local_res18[-2] + 8))(local_res18 + -2);
                    }
                    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),
                                  *(undefined8 *)(plVar18[9] + lVar10 * 8),FUN_140405e90,puVar7);
                }
                puVar17 = puVar7 + 0xc;
                lVar10 = 2;
                do {
                    uVar3 = *puVar17;
                    puVar13 = puVar15;
                    if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
                        puVar13 = (undefined8 *)(DAT_140c3fe68 + uVar3);
                    }
                    sVar2 = *(short *)puVar13;
                    puVar11 = puVar15;
                    while (sVar2 != 0) {
                        puVar11 = (undefined8 *)((longlong)puVar11 + 1);
                        sVar2 = *(short *)((longlong)puVar13 + (longlong)puVar11 * 2);
                    }
                    lVar14 = (longlong)puVar11 * 2 >> 1;
                    uVar3 = lVar14 + 1;
                    puVar11 = puVar15;
                    if (uVar3 < 0x7fffffffffffffff) {
                        puVar11 = (undefined8 *)FUN_14018b280(uVar3 * 2,0);
                    }
                    lVar14 = lVar14 * 2;
                    FUN_1407db590(puVar11,puVar13,lVar14);
                    puVar13 = (undefined8 *)((longlong)puVar11 + lVar14);
                    if (puVar13 != (undefined8 *)0x0) {
                        *(short *)puVar13 = 0;
                    }
                    if (puVar11 != puVar13) {
                        FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),puVar11,FUN_140405e90,puVar7);
                    }
                    if (puVar11 != (undefined8 *)0x0) {
                        FUN_14018b900(puVar11);
                    }
                    puVar17 = puVar17 + 1;
                    lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                plVar18 = local_res20;
                if (local_68 != (short *)0x0) {
                    FUN_14018b900(local_68);
                    plVar18 = local_res20;
                }
            }
            uVar16 = uVar16 + 1;
            puVar13 = (undefined8 *)(ulonglong)uVar16;
        } while (uVar16 < uVar5);
    }
    LAB_1404054db:
    puVar13 = (undefined8 *)plVar18[1];
    if (puVar13 != (undefined8 *)0x0) {
        do {
            FUN_140407e40(plVar18,*(undefined8 *)(*plVar18 + (longlong)puVar15 * 8));
            puVar15 = (undefined8 *)((longlong)puVar15 + 1);
        } while (puVar15 < puVar13);
    }
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140406040,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140406390,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_1404065f0,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140406850,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140406ca0,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140406ad0,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140407090,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_140406e70,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,FUN_1404072b0,0);
    uVar12 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar12,&LAB_140409b60,0);
    return 0;
}



void FUN_1404056c0(void)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar3 = DAT_140c658a0;
    FUN_14040ac60(DAT_140c658a0);
    uVar1 = *(ulonglong *)(lVar3 + 0xd0);
    uVar4 = 0;
    if (DAT_140c65c30 == uVar1) {
        DAT_140c65c30 = uVar4;
    }
    *(undefined8 *)(uVar1 + 0x10) = 0;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    *(undefined8 *)(uVar1 + 0x20) = 0;
    *(undefined8 *)(uVar1 + 0x28) = 0;
    if (*(longlong *)(lVar3 + 0x58) != 0) {
        FUN_14040ac60(lVar3);
        if (*(longlong **)(lVar3 + 0x58) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar3 + 0x58) + 8))();
            *(undefined8 *)(lVar3 + 0x58) = 0;
        }
    }
    uVar1 = *(ulonglong *)(lVar3 + 0x100);
    if (uVar1 != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0xf8) + uVar4 * 8);
            if (lVar2 != 0) {
                FUN_140401490(lVar2);
                FUN_14018b900(lVar2,0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    *(undefined8 *)(lVar3 + 0x100) = 0;
    return;
}



void FUN_1404057a0(longlong param_1,int param_2)

{
    longlong **pplVar1;
    short *psVar2;
    short sVar3;
    int iVar4;
    DWORD DVar5;
    longlong lVar6;
    short *psVar7;
    LPCWSTR lpFileName;
    longlong lVar8;
    longlong lVar9;
    undefined auStack3304 [32];
    wchar_t *local_cc8;
    ulonglong local_cc0;
    wchar_t *local_cb8;
    uint local_cb0;
    uint local_ca8;
    uint local_ca0;
    _SYSTEMTIME local_c98;
    short local_c88 [264];
    WCHAR local_a78 [264];
    undefined local_868 [528];
    short local_658 [264];
    WCHAR local_448 [264];
    undefined local_238 [528];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack3304;
    pplVar1 = (longlong **)(param_1 + 0x58);
    if ((param_2 == 0) == (*pplVar1 == (longlong *)0x0)) goto LAB_140405aa2;
    if (param_2 == 0) {
        FUN_14040ac60(param_1);
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
        goto LAB_140405aa2;
    }
    GetLocalTime(&local_c98);
    local_ca0 = (uint)local_c98.wMilliseconds;
    local_ca8 = (uint)local_c98.wSecond;
    local_cb0 = (uint)local_c98.wMinute;
    local_cb8 = (wchar_t *)((ulonglong)local_cb8 & 0xffffffff00000000 | (ulonglong)local_c98.wHour);
    local_cc0 = local_cc0 & 0xffffffff00000000 | (ulonglong)local_c98.wDay;
    local_cc8 = (wchar_t *)((ulonglong)local_cc8 & 0xffffffff00000000 | (ulonglong)local_c98.wMonth);
    FUN_14001b370(local_658,0x104,L"Chat %i.%i.%i %2ih%2im%02i.%03is.txt",local_c98.wYear);
    local_cb8 = L"ChatLogs";
    local_cc0 = *(ulonglong *)(DAT_140c63788 + 0x1320);
    local_cc8 = L"NCSOFT";
    iVar4 = FUN_14001b370(local_c88,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xe8c);
    lVar8 = DAT_140c63788;
    if ((-1 < iVar4) && (local_c88[0] != 0)) {
        psVar7 = local_c88;
        do {
            psVar2 = psVar7 + 1;
            psVar7 = psVar7 + 1;
        } while (*psVar2 != 0);
    }
    lVar6 = FUN_1401b5110(DAT_140c63788,local_238);
    if (lVar6 == 0) {
        FUN_1401b5020(lVar8,local_a78);
        lpFileName = local_a78;
        LAB_14040592c:
        DVar5 = GetFileAttributesW(lpFileName);
        if ((DVar5 == 0xffffffff) || ((DVar5 >> 4 & 1) == 0)) goto LAB_140405941;
    }
    else {
        if (*(int *)(lVar8 + 0x870) != 0) {
            FUN_1401b5020(lVar8,local_448);
            lpFileName = local_448;
            goto LAB_14040592c;
        }
        LAB_140405941:
        FUN_1401b5020(DAT_140c63788,local_868);
        Ordinal_165(0,local_868);
    }
    lVar8 = 0x104;
    psVar7 = local_c88;
    do {
        if (*psVar7 == 0) {
            if (lVar8 != 0) {
                lVar6 = -lVar8 + 0x104;
                psVar7 = local_c88 + lVar6;
                lVar6 = 0x104 - lVar6;
                if (lVar6 == 0) goto LAB_1404059e7;
                lVar8 = -lVar8 + 0x7ffffffe + lVar6;
                lVar9 = (longlong)&DAT_1409e8564 - (longlong)psVar7;
                goto LAB_1404059c0;
            }
            break;
        }
        psVar7 = psVar7 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    goto LAB_1404059ef;
    while( true ) {
        *psVar7 = sVar3;
        psVar7 = psVar7 + 1;
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) break;
        LAB_140405a35:
        if ((lVar8 == 0) || (sVar3 = *(short *)(lVar9 + (longlong)psVar7), sVar3 == 0)) {
            if (lVar6 != 0) goto LAB_140405a5e;
            break;
        }
    }
    LAB_140405a5a:
    psVar7 = psVar7 + -1;
    LAB_140405a5e:
    *psVar7 = 0;
    goto LAB_140405a62;
    while( true ) {
        *psVar7 = sVar3;
        psVar7 = psVar7 + 1;
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) break;
        LAB_1404059c0:
        if ((lVar8 == 0) || (sVar3 = *(short *)(lVar9 + (longlong)psVar7), sVar3 == 0)) {
            if (lVar6 != 0) goto LAB_1404059eb;
            break;
        }
    }
    LAB_1404059e7:
    psVar7 = psVar7 + -1;
    LAB_1404059eb:
    *psVar7 = 0;
    LAB_1404059ef:
    lVar8 = 0x104;
    psVar7 = local_c88;
    do {
        if (*psVar7 == 0) {
            if (lVar8 != 0) {
                lVar6 = -lVar8 + 0x104;
                psVar7 = local_c88 + lVar6;
                lVar6 = 0x104 - lVar6;
                if (lVar6 == 0) goto LAB_140405a5a;
                lVar8 = -lVar8 + 0x7ffffffe + lVar6;
                lVar9 = (longlong)local_658 - (longlong)psVar7;
                goto LAB_140405a35;
            }
            break;
        }
        psVar7 = psVar7 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    LAB_140405a62:
    local_cc8 = (wchar_t *)pplVar1;
    FUN_1401b5b50(DAT_140c63788,local_c88,2);
    LAB_140405aa2:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack3304);
    return;
}



undefined4 FUN_140405ac0(longlong param_1,_FILETIME param_2,short *param_3,short *param_4)

{
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    _FILETIME local_res10;

    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    uVar7 = (ulonglong)*(uint *)(param_1 + 0xe0) % *(ulonglong *)(param_1 + 0xd8);
    local_res10 = param_2;
    if (*(ulonglong *)(param_1 + 0xf0) < uVar7 + 1) {
        FUN_14040b0a0(param_1 + 0xe8);
    }
    puVar6 = (undefined8 *)0x0;
    *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + uVar7 * 0x30) = *(undefined4 *)(param_1 + 0xe0);
    lVar2 = *(longlong *)(param_1 + 0xe8);
    lVar3 = *(longlong *)(lVar2 + 0x28 + uVar7 * 0x30);
    if (param_4 == (short *)0x0) {
        *(undefined8 *)(lVar2 + 0x28 + uVar7 * 0x30) = 0;
    }
    else {
        sVar1 = *param_4;
        puVar8 = puVar6;
        while (sVar1 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar1 = param_4[(longlong)puVar8];
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        puVar5 = puVar6;
        if (puVar4 != (undefined8 *)0x0) {
            puVar4[1] = puVar8;
            *puVar4 = &PTR_LAB_140b55060;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,param_4,(longlong)puVar8 * 2);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar5) = 0;
        *(undefined8 **)(lVar2 + 0x28 + uVar7 * 0x30) = puVar5;
        param_2 = local_res10;
    }
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar2 = *(longlong *)(param_1 + 0xe8);
    *(undefined8 *)(lVar2 + 8 + uVar7 * 0x30) = *(undefined8 *)param_2;
    *(undefined8 *)(lVar2 + 0x10 + uVar7 * 0x30) = *(undefined8 *)((longlong)param_2 + 8);
    lVar2 = *(longlong *)(param_1 + 0xe8);
    lVar3 = *(longlong *)(lVar2 + 0x20 + uVar7 * 0x30);
    if (param_3 == (short *)0x0) {
        *(undefined8 *)(lVar2 + 0x20 + uVar7 * 0x30) = 0;
    }
    else {
        sVar1 = *param_3;
        puVar8 = puVar6;
        while (sVar1 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar1 = param_3[(longlong)puVar8];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = puVar8;
            *puVar5 = &PTR_LAB_140b55060;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,param_3,(longlong)puVar8 * 2);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar6) = 0;
        *(undefined8 **)(lVar2 + 0x20 + uVar7 * 0x30) = puVar6;
    }
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    GetSystemTimeAsFileTime(&local_res10);
    *(_FILETIME *)(*(longlong *)(param_1 + 0xe8) + 0x18 + uVar7 * 0x30) = local_res10;
    return *(undefined4 *)(param_1 + 0xe0);
}



void FUN_140405cb0(undefined8 param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined4 local_38 [2];
    longlong local_30;
    code *local_28;
    longlong local_20;

    local_30 = DAT_140c658a0;
    uVar5 = 0;
    do {
        uVar1 = *(ulonglong *)(local_30 + 0x100);
        uVar5 = uVar5 + 1;
        if (uVar5 < uVar1) {
            plVar3 = (longlong *)(*(longlong *)(local_30 + 0xf8) + uVar5 * 8);
            do {
                if (*plVar3 == 0) goto LAB_140405d78;
                uVar5 = uVar5 + 1;
                plVar3 = plVar3 + 1;
            } while (uVar5 < uVar1);
        }
        lVar4 = FUN_14018db00(*(undefined8 *)(local_30 + 0xf8),uVar1 + 1,8);
        *(undefined8 *)(lVar4 + uVar1 * 8) = 0;
        if (*(longlong *)(local_30 + 0xf8) != lVar4) {
            FUN_1407db590(lVar4,*(longlong *)(local_30 + 0xf8),*(longlong *)(local_30 + 0x100) << 3);
            lVar2 = *(longlong *)(local_30 + 0xf8);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong *)(local_30 + 0xf8) = lVar4;
        }
        *(ulonglong *)(local_30 + 0x100) = uVar1 + 1;
        uVar5 = uVar1;
        LAB_140405d78:
        if (uVar5 != 0) {
            *(longlong *)(*(longlong *)(local_30 + 0xf8) + uVar5 * 8) = param_2;
            if (*(longlong *)(param_2 + 0x48) != 0) {
                *(short *)(*(longlong *)(param_2 + 0x48) + 0x28) = (short)uVar5;
            }
            if (*(longlong *)(param_2 + 0x50) != 0) {
                *(short *)(*(longlong *)(param_2 + 0x50) + 0x28) = (short)uVar5;
            }
            local_38[0] = 1;
            local_28 = FUN_14040acf0;
            local_20 = param_2;
            FUN_140195960(param_2,30000,local_38,4);
            return;
        }
    } while( true );
}



void FUN_140405e00(longlong param_1,ushort param_2)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_2 != 0) && ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x100))) {
        lVar1 = (ulonglong)param_2 * 8;
        lVar2 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0xf8));
        if (lVar2 != 0) {
            FUN_140401490(lVar2);
            FUN_14018b900(lVar2,0);
        }
        *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0xf8)) = 0;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140405e90(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 local_a8;
    undefined4 local_a0;
    undefined4 uStack156;
    undefined4 local_98;
    undefined local_88 [8];
    longlong local_80;
    longlong local_60;
    longlong local_58;
    longlong local_40;
    longlong local_20;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x2ac) == 0)) && (-1 < DAT_140c636a8 - _DAT_140c8a7b4)) {
        uStack156 = 0;
        local_98 = 0;
        local_a8 = (ulonglong)*param_2;
        local_a0 = 0;
        uVar2 = FUN_1401ae6a0(0,0xffff);
        local_a8 = local_a8 & 0xffffffff | (ulonglong)uVar2 << 0x20;
        local_98 = 0;
        FUN_14040b680(local_88,param_1,0);
        if (((param_2[4] != 0) && (param_2[6] != 0)) && (param_2[5] != 0)) {
            lVar3 = *(longlong *)(DAT_140c65898 + 0x6490);
            if ((lVar3 != 0) && (*(int *)(lVar3 + 0x108) != 0)) {
                uStack156 = 1;
                local_a0 = 0;
                if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
                    local_a0 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
                }
            }
            if (local_60 != local_58) {
                uStack156 = 1;
                lVar3 = FUN_1403d9160(lVar3,local_60);
                if (lVar3 != 0) {
                    local_a0 = *(undefined4 *)(lVar3 + 8);
                }
            }
        }
        FUN_1404739b0(lVar1,*param_2,local_a0,local_a8._4_4_,uStack156,local_98);
        FUN_1403f4900(DAT_140c65898,0x37e,&local_a8);
        _DAT_140c8a7b4 = DAT_140c636a8 + 0xfa;
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        if (local_60 != 0) {
            FUN_14018b900(local_60,0);
        }
        if (local_80 != 0) {
            FUN_14018b900(local_80,0);
        }
    }
    return;
}



void FUN_140406040(longlong param_1)

{
    undefined2 *puVar1;
    short sVar2;
    short *psVar3;
    ulonglong *puVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined8 uVar10;
    longlong lVar11;
    ulonglong uVar12;
    longlong lVar13;
    ulonglong local_res8;
    undefined4 in_stack_ffffffffffffff68;
    undefined2 uVar14;
    ulonglong local_88;
    longlong local_80;
    undefined2 *local_78;
    ulonglong local_70;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;

    uVar14 = (undefined2)((uint)in_stack_ffffffffffffff68 >> 0x10);
    uVar12 = 0;
    local_80 = 0;
    local_70 = 0;
    uVar8 = uVar12;
    do {
        psVar3 = &DAT_140af88a2 + uVar8;
        uVar8 = uVar8 + 1;
    } while (*psVar3 != 0);
    lVar13 = (longlong)(uVar8 * 2) >> 1;
    uVar8 = lVar13 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar11 = uVar8 * 2;
        local_80 = FUN_14018b280(lVar11,0);
        local_70 = local_80 + lVar11;
    }
    lVar11 = local_80;
    lVar13 = lVar13 * 2;
    FUN_1407db590(local_80,&DAT_140af88a0,lVar13);
    local_78 = (undefined2 *)(lVar11 + lVar13);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_60 = 0;
    local_50 = 0;
    sVar2 = *psVar3;
    uVar8 = uVar12;
    while (sVar2 != 0) {
        uVar8 = uVar8 + 1;
        sVar2 = psVar3[uVar8];
    }
    lVar13 = (longlong)(uVar8 * 2) >> 1;
    uVar8 = lVar13 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar5 = uVar8 * 2;
        local_60 = FUN_14018b280(lVar5,0);
        local_50 = local_60 + lVar5;
    }
    lVar5 = local_60;
    lVar13 = lVar13 * 2;
    FUN_1407db590(local_60,psVar3,lVar13);
    local_58 = (undefined2 *)(lVar5 + lVar13);
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    FUN_14018f570(local_48,local_68,&local_88,0x22,CONCAT22(uVar14,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar11 != 0) {
        FUN_14018b900(lVar11,0);
    }
    uVar8 = local_38 - local_40 >> 5;
    lVar13 = local_40;
    if (uVar8 == 1) {
        psVar3 = *(short **)(local_40 + 8);
        sVar2 = *psVar3;
        uVar8 = uVar12;
        while (sVar2 != 0) {
            uVar8 = uVar8 + 1;
            sVar2 = psVar3[uVar8];
        }
        lVar11 = (longlong)(uVar8 * 2) >> 1;
        uVar8 = lVar11 + 1;
        uVar9 = uVar12;
        if (uVar8 < 0x7fffffffffffffff) {
            uVar9 = FUN_14018b280(uVar8 * 2,0);
        }
        lVar11 = lVar11 * 2;
        FUN_1407db590(uVar9,psVar3,lVar11);
        puVar1 = (undefined2 *)(uVar9 + lVar11);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        lVar11 = DAT_140c658a0;
        local_res8 = uVar9;
        uVar8 = (**(code **)(DAT_140c658a0 + 0x28))(&local_res8);
        for (puVar4 = *(ulonglong **)
                (*(longlong *)(lVar11 + 0x20) + (uVar8 % *(ulonglong *)(lVar11 + 0x18)) * 8);
             puVar4 != (ulonglong *)0x0; puVar4 = (ulonglong *)puVar4[1]) {
            if ((uVar8 == *puVar4) &&
                (iVar6 = (**(code **)(lVar11 + 0x30))(&local_res8,puVar4 + 2), iVar6 != 0)) {
                if (puVar4 + 3 != (ulonglong *)0x0) {
                    uVar12 = puVar4[3];
                }
                break;
            }
        }
        if (uVar9 != 0) {
            FUN_14018b900(uVar9,0);
        }
        local_88 = 0;
        local_80 = 0;
        local_78 = (undefined2 *)0x0;
        local_70 = 0;
        if (uVar12 != 0) {
            local_80 = *(longlong *)(local_40 + 8);
            local_78 = (undefined2 *)&DAT_1409e854c;
            goto LAB_1404062d7;
        }
        lVar11 = *(longlong *)(local_40 + 8);
        uVar7 = FUN_140404390();
        local_88 = local_88 & 0xffffffff00000000 | (ulonglong)uVar7;
        local_78 = (undefined2 *)&DAT_1409e857c;
        local_80 = lVar11;
    }
    else {
        if (uVar8 < 2) {
            uVar10 = FUN_140401220(DAT_140c658a0,1);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar10,1);
            goto joined_r0x000140406342;
        }
        local_80 = *(longlong *)(local_40 + 8);
        local_78 = *(undefined2 **)(local_40 + 0x28);
        LAB_1404062d7:
        local_70 = 0;
        local_88 = 0x12;
    }
    local_70 = local_70 & 0xffffffff00000000;
    FUN_1403f4740(DAT_140c65898,0x1ba,&local_88);
    joined_r0x000140406342:
    for (; lVar13 != local_38; lVar13 = lVar13 + 0x20) {
        if (*(longlong *)(lVar13 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar13 + 8),0);
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return;
}



void FUN_140406390(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar8;
    ulonglong local_78;
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar8 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar5 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar7 = lVar5;
    do {
        psVar3 = &DAT_140af88ea + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar3 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_70,&DAT_140af88e8,lVar7);
    local_68 = (undefined2 *)(lVar7 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar7 = lVar5 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar5 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar5,0);
        local_40 = lVar5 + local_50;
    }
    lVar5 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,psVar3,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar5);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,&local_78,0x22,CONCAT22(uVar8,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    lVar7 = local_30;
    if ((local_28 - local_30 >> 5 == 0) || (lVar5 = FUN_140404300(DAT_140c658a0,local_30), lVar5 == 0)
            ) {
        uVar6 = FUN_140401220(DAT_140c658a0,1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar6,1);
    }
    else {
        local_70 = *(longlong *)(lVar5 + 0x10);
        local_78 = (ulonglong)**(uint **)(lVar5 + 8);
        FUN_1403f4740(DAT_140c65898,0x1be,&local_78);
    }
    for (; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
        if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 8),0);
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_1404065f0(longlong param_1)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar8;
    ulonglong local_78;
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar8 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar5 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar7 = lVar5;
    do {
        psVar3 = &DAT_140af88da + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar3 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_70 = FUN_14018b280(lVar4,0);
        local_60 = lVar4 + local_70;
    }
    lVar4 = local_70;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_70,&DAT_140af88d8,lVar7);
    local_68 = (undefined2 *)(lVar7 + lVar4);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar3 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar7 = lVar5 * 2 >> 1;
    uVar1 = lVar7 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar5 = uVar1 * 2;
        local_50 = FUN_14018b280(lVar5,0);
        local_40 = lVar5 + local_50;
    }
    lVar5 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,psVar3,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar5);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,&local_78,0x22,CONCAT22(uVar8,0x5c));
    if (lVar5 != 0) {
        FUN_14018b900(lVar5,0);
    }
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    lVar7 = local_30;
    if ((local_28 - local_30 >> 5 == 0) || (lVar5 = FUN_140404300(DAT_140c658a0,local_30), lVar5 == 0)
            ) {
        uVar6 = FUN_140401220(DAT_140c658a0,1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar6,1);
    }
    else {
        local_70 = *(longlong *)(lVar5 + 0x10);
        local_78 = (ulonglong)**(uint **)(lVar5 + 8);
        FUN_1403f4740(DAT_140c65898,0x1d2,&local_78);
    }
    for (; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
        if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 8),0);
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_140406850(longlong param_1)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined4 in_stack_ffffffffffffff78;
    undefined2 uVar8;
    ulonglong local_78;
    longlong local_70;
    undefined2 *local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;
    undefined local_38 [8];
    longlong local_30;
    longlong local_28;

    uVar8 = (undefined2)((uint)in_stack_ffffffffffffff78 >> 0x10);
    lVar4 = 0;
    local_70 = 0;
    local_60 = 0;
    lVar7 = lVar4;
    do {
        psVar2 = &DAT_140af88ca + lVar7;
        lVar7 = lVar7 + 1;
    } while (*psVar2 != 0);
    lVar7 = lVar7 * 2 >> 1;
    uVar6 = lVar7 + 1;
    if (uVar6 < 0x7fffffffffffffff) {
        lVar3 = uVar6 * 2;
        local_70 = FUN_14018b280(lVar3,0);
        local_60 = lVar3 + local_70;
    }
    lVar3 = local_70;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_70,&DAT_140af88c8,lVar7);
    local_68 = (undefined2 *)(lVar7 + lVar3);
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_50 = 0;
    local_40 = 0;
    sVar1 = *psVar2;
    while (sVar1 != 0) {
        lVar4 = lVar4 + 1;
        sVar1 = psVar2[lVar4];
    }
    lVar7 = lVar4 * 2 >> 1;
    uVar6 = lVar7 + 1;
    if (uVar6 < 0x7fffffffffffffff) {
        lVar4 = uVar6 * 2;
        local_50 = FUN_14018b280(lVar4,0);
        local_40 = lVar4 + local_50;
    }
    lVar4 = local_50;
    lVar7 = lVar7 * 2;
    FUN_1407db590(local_50,psVar2,lVar7);
    local_48 = (undefined2 *)(lVar7 + lVar4);
    if (local_48 != (undefined2 *)0x0) {
        *local_48 = 0;
    }
    FUN_14018f570(local_38,local_58,&local_78,0x22,CONCAT22(uVar8,0x5c));
    if (lVar4 != 0) {
        FUN_14018b900(lVar4,0);
    }
    if (lVar3 != 0) {
        FUN_14018b900(lVar3,0);
    }
    uVar6 = local_28 - local_30 >> 5;
    lVar7 = local_30;
    if ((uVar6 == 0) || (lVar4 = FUN_140404300(DAT_140c658a0,local_30), lVar4 == 0)) {
        uVar5 = FUN_140401220(DAT_140c658a0,1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,1);
    }
    else {
        if (uVar6 < 2) {
            local_68 = (undefined2 *)&DAT_1409e86dc;
        }
        else {
            local_68 = *(undefined2 **)(local_30 + 0x28);
        }
        local_70 = *(longlong *)(lVar4 + 0x10);
        local_78 = (ulonglong)**(uint **)(lVar4 + 8);
        FUN_1403f4740(DAT_140c65898,0x1d0,&local_78);
    }
    for (; lVar7 != local_28; lVar7 = lVar7 + 0x20) {
        if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar7 + 8),0);
        }
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return;
}



void FUN_140406ad0(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong local_res18 [2];
    undefined4 uVar6;
    ulonglong local_b8;
    undefined8 local_b0;
    longlong local_a8;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if (local_90 != local_88) {
        local_res18[0] = local_90;
        uVar4 = (**(code **)(DAT_140c658a0 + 0x28))(local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar4 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar4 == *puVar1) &&
                (iVar3 = (**(code **)(lVar2 + 0x30))(local_res18,puVar1 + 2), iVar3 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar4 = puVar1[3], uVar4 != 0)) {
                    iVar3 = FUN_1403e1170(local_70,0);
                    if (iVar3 != 0) {
                        local_b0 = *(undefined8 *)(uVar4 + 0x10);
                        local_a8 = local_70;
                        local_b8 = (ulonglong)**(uint **)(uVar4 + 8);
                        FUN_1403f4740(DAT_140c65898,0x1bd,&local_b8);
                        goto LAB_140406ba4;
                    }
                    uVar5 = FUN_140401220(DAT_140c658a0,1,0);
                    uVar6 = 0x14;
                    goto LAB_140406b80;
                }
                break;
            }
        }
    }
    uVar5 = FUN_140401220(DAT_140c658a0,1);
    uVar6 = 1;
    LAB_140406b80:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,uVar6);
    LAB_140406ba4:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_140406ca0(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong local_res18 [2];
    undefined4 uVar6;
    ulonglong local_b8;
    undefined8 local_b0;
    longlong local_a8;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_50;
    longlong local_30;

    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if (local_90 != local_88) {
        local_res18[0] = local_90;
        uVar4 = (**(code **)(DAT_140c658a0 + 0x28))(local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar4 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar4 == *puVar1) &&
                (iVar3 = (**(code **)(lVar2 + 0x30))(local_res18,puVar1 + 2), iVar3 != 0)) {
                if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar4 = puVar1[3], uVar4 != 0)) {
                    iVar3 = FUN_1403e1170(local_70,0);
                    if (iVar3 != 0) {
                        local_b0 = *(undefined8 *)(uVar4 + 0x10);
                        local_a8 = local_70;
                        local_b8 = (ulonglong)**(uint **)(uVar4 + 8);
                        FUN_1403f4740(DAT_140c65898,0x1cf,&local_b8);
                        goto LAB_140406d74;
                    }
                    uVar5 = FUN_140401220(DAT_140c658a0,1,0);
                    uVar6 = 0x14;
                    goto LAB_140406d50;
                }
                break;
            }
        }
    }
    uVar5 = FUN_140401220(DAT_140c658a0,1);
    uVar6 = 1;
    LAB_140406d50:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,uVar6);
    LAB_140406d74:
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_140406e70(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong local_res18 [2];
    ulonglong local_b8;
    undefined8 local_b0;
    longlong local_a8;
    ulonglong local_a0;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_50;
    longlong local_30;
    longlong local_28;

    uVar4 = 0;
    uVar6 = 0;
    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if (local_90 != local_88) {
        local_res18[0] = local_90;
        uVar4 = (**(code **)(DAT_140c658a0 + 0x28))(local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar4 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x30))(local_res18), iVar3 != 0)) {
                if (puVar1 + 3 != (ulonglong *)0x0) {
                    uVar4 = puVar1[3];
                    goto LAB_140406efe;
                }
                break;
            }
        }
        uVar4 = 0;
    }
    LAB_140406efe:
    if (local_30 != local_28) {
        uVar5 = FUN_14034bdd0();
        iVar3 = FUN_14018e2c0(uVar5);
        if ((iVar3 == 0) || (iVar3 = FUN_14018e2c0(&DAT_1409e869c), iVar3 == 0)) goto LAB_140406f41;
    }
    uVar6 = 1;
    LAB_140406f41:
    if (uVar4 == 0) {
        uVar5 = FUN_140401220(DAT_140c658a0,1,0);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,1);
    }
    iVar3 = FUN_1403e1170(local_70);
    if (iVar3 == 0) {
        uVar5 = FUN_140401220(DAT_140c658a0,1,0);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,0x14);
    }
    else {
        local_b0 = *(undefined8 *)(uVar4 + 0x10);
        local_a8 = local_70;
        local_a0 = (ulonglong)uVar6;
        local_b8 = (ulonglong)**(uint **)(uVar4 + 8);
        FUN_1403f4740(DAT_140c65898,0x1cd,&local_b8);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_140407090(undefined8 param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong local_res18 [2];
    ulonglong local_b8;
    undefined8 local_b0;
    longlong local_a8;
    ulonglong local_a0;
    undefined local_98 [8];
    longlong local_90;
    longlong local_88;
    longlong local_70;
    longlong local_50;
    longlong local_30;
    longlong local_28;

    uVar4 = 0;
    uVar6 = 0;
    FUN_14040b680(local_98,param_1,1);
    lVar2 = DAT_140c658a0;
    if (local_90 != local_88) {
        local_res18[0] = local_90;
        uVar4 = (**(code **)(DAT_140c658a0 + 0x28))(local_res18);
        for (puVar1 = *(ulonglong **)
                (*(longlong *)(lVar2 + 0x20) + (uVar4 % *(ulonglong *)(lVar2 + 0x18)) * 8);
             puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
            if ((uVar4 == *puVar1) && (iVar3 = (**(code **)(lVar2 + 0x30))(local_res18), iVar3 != 0)) {
                if (puVar1 + 3 != (ulonglong *)0x0) {
                    uVar4 = puVar1[3];
                    goto LAB_14040711e;
                }
                break;
            }
        }
        uVar4 = 0;
    }
    LAB_14040711e:
    if (local_30 != local_28) {
        uVar5 = FUN_14034bdd0();
        iVar3 = FUN_14018e2c0(uVar5);
        if ((iVar3 == 0) || (iVar3 = FUN_14018e2c0(&DAT_1409e869c), iVar3 == 0)) goto LAB_140407161;
    }
    uVar6 = 1;
    LAB_140407161:
    if (uVar4 == 0) {
        uVar5 = FUN_140401220(DAT_140c658a0,1,0);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,1);
    }
    iVar3 = FUN_1403e1170(local_70);
    if (iVar3 == 0) {
        uVar5 = FUN_140401220(DAT_140c658a0,1,0);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar5,0x14);
    }
    else {
        local_b0 = *(undefined8 *)(uVar4 + 0x10);
        local_a8 = local_70;
        local_a0 = (ulonglong)uVar6;
        local_b8 = (ulonglong)**(uint **)(uVar4 + 8);
        FUN_1403f4740(DAT_140c65898,0x1ce,&local_b8);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_70 != 0) {
        FUN_14018b900(local_70,0);
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90,0);
    }
    return;
}



void FUN_1404072b0(longlong param_1)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined4 in_stack_ffffffffffffff68;
    undefined2 uVar10;
    ulonglong local_88;
    longlong local_80;
    undefined2 *local_78;
    ulonglong local_70;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;

    uVar10 = (undefined2)((uint)in_stack_ffffffffffffff68 >> 0x10);
    lVar6 = 0;
    local_80 = 0;
    local_70 = 0;
    lVar9 = lVar6;
    do {
        psVar2 = &DAT_140af8a2a + lVar9;
        lVar9 = lVar9 + 1;
    } while (*psVar2 != 0);
    lVar9 = lVar9 * 2 >> 1;
    uVar8 = lVar9 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar3 = uVar8 * 2;
        local_80 = FUN_14018b280(lVar3,0);
        local_70 = lVar3 + local_80;
    }
    lVar3 = local_80;
    lVar9 = lVar9 * 2;
    FUN_1407db590(local_80,&DAT_140af8a28,lVar9);
    local_78 = (undefined2 *)(lVar9 + lVar3);
    if (local_78 != (undefined2 *)0x0) {
        *local_78 = 0;
    }
    psVar2 = *(short **)(param_1 + 8);
    local_60 = 0;
    local_50 = 0;
    sVar1 = *psVar2;
    lVar9 = lVar6;
    while (sVar1 != 0) {
        lVar9 = lVar9 + 1;
        sVar1 = psVar2[lVar9];
    }
    lVar9 = lVar9 * 2 >> 1;
    uVar8 = lVar9 + 1;
    if (uVar8 < 0x7fffffffffffffff) {
        lVar4 = uVar8 * 2;
        local_60 = FUN_14018b280(lVar4,0);
        local_50 = lVar4 + local_60;
    }
    lVar4 = local_60;
    lVar9 = lVar9 * 2;
    FUN_1407db590(local_60,psVar2,lVar9);
    local_58 = (undefined2 *)(lVar9 + lVar4);
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    FUN_14018f570(local_48,local_68,&local_88,0x22,CONCAT22(uVar10,0x5c));
    if (lVar4 != 0) {
        FUN_14018b900();
    }
    if (lVar3 != 0) {
        FUN_14018b900();
    }
    uVar8 = local_38 - local_40 >> 5;
    if (uVar8 != 0) {
        lVar6 = FUN_140404300();
    }
    if (uVar8 < 2) {
        uVar5 = 1;
    }
    else {
        uVar5 = FUN_140407530();
    }
    lVar9 = local_40;
    if (lVar6 == 0) {
        uVar7 = FUN_140401220(DAT_140c658a0,1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChatResult",&DAT_1409ee65c,uVar7,1);
    }
    else {
        local_80 = *(longlong *)(lVar6 + 0x10);
        local_70 = (ulonglong)uVar5;
        local_88 = (ulonglong)**(uint **)(lVar6 + 8);
        local_78 = (undefined2 *)&DAT_1409e86bc;
        FUN_1403f4740(DAT_140c65898,0x1ce,&local_88);
    }
    for (; lVar9 != local_38; lVar9 = lVar9 + 0x20) {
        if (*(longlong *)(lVar9 + 8) != 0) {
            FUN_14018b900(*(longlong *)(lVar9 + 8),0);
        }
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    return;
}



undefined8 FUN_140407530(longlong param_1)

{
    undefined8 uVar1;
    int iVar2;
    undefined8 uVar3;

    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_14034bdd0(param_1,0x34ba6);
    iVar2 = FUN_14018e2c0(uVar3,uVar1);
    if (iVar2 != 0) {
        iVar2 = FUN_14018e2c0(&DAT_1409e869c,*(undefined8 *)(param_1 + 8));
        if (iVar2 != 0) {
            return 1;
        }
    }
    return 0;
}



ulonglong FUN_140407590(longlong *param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar5 = 0;
    if (param_1[1] != 0) {
        uVar6 = param_1[1];
        do {
            uVar4 = (uVar6 - uVar5 >> 1) + uVar5;
            lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
            uVar1 = **(uint **)(lVar2 + 8);
            if (uVar1 < *param_2) {
                LAB_1404075e1:
                uVar5 = uVar4 + 1;
                uVar4 = uVar6;
            }
            else if (uVar1 <= *param_2) {
                uVar3 = *(ulonglong *)(lVar2 + 0x10);
                if (uVar3 < *(ulonglong *)(param_2 + 2)) goto LAB_1404075e1;
                if (uVar3 <= *(ulonglong *)(param_2 + 2)) {
                    return uVar4;
                }
            }
            uVar6 = uVar4;
        } while (uVar5 < uVar4);
    }
    return uVar5;
}



void FUN_140407600(undefined8 param_1,longlong param_2,undefined4 param_3)

{
    longlong *plVar1;
    ulonglong uVar2;
    undefined2 *puVar3;
    undefined8 uVar4;
    char cVar5;
    longlong lVar6;
    undefined *puVar7;
    ulonglong uVar8;
    int iVar9;
    undefined2 **ppuVar10;
    ulonglong uVar11;
    undefined auStack312 [32];
    undefined local_118 [8];
    longlong local_110;
    undefined local_f8 [8];
    undefined2 *local_f0 [3];
    undefined local_d8 [8];
    undefined2 *local_d0;
    undefined2 *local_c8;
    undefined2 *local_c0;
    undefined local_b8 [8];
    undefined2 *local_b0;
    undefined2 *local_a8;
    undefined2 *local_a0;
    undefined local_98 [8];
    undefined2 *local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined local_78 [8];
    undefined8 local_70;
    undefined8 local_68;
    undefined local_58 [8];
    longlong local_50 [4];
    undefined local_30 [8];

    local_50[3] = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    uVar8 = 0;
    if (*(int *)(*(longlong *)(param_2 + 8) + 0x24) == 0) {
        local_f0[1] = (undefined2 *)FUN_14018b280(2);
        local_f0[2] = local_f0[1] + 1;
        local_f0[0] = local_f0[1];
        FUN_1407db590(local_f0[1],&DAT_1409e8784,0);
        if (local_f0[1] != (undefined2 *)0x0) {
            *local_f0[1] = 0;
        }
    }
    else {
        FUN_14034bdd0();
        FUN_140407b90();
    }
    if (*(int *)(*(longlong *)(param_2 + 8) + 0x28) == 0) {
        local_c8 = (undefined2 *)FUN_14018b280(2);
        local_c0 = local_c8 + 1;
        local_d0 = local_c8;
        FUN_1407db590(local_c8,&DAT_1409e8784,0);
        if (local_c8 != (undefined2 *)0x0) {
            *local_c8 = 0;
        }
    }
    else {
        FUN_14034bdd0();
        FUN_140407b90();
    }
    if (*(int *)(*(longlong *)(param_2 + 8) + 0x2c) == 0) {
        local_a8 = (undefined2 *)FUN_14018b280(2);
        local_a0 = local_a8 + 1;
        local_b0 = local_a8;
        FUN_1407db590(local_a8,&DAT_1409e8784,0);
        if (local_a8 != (undefined2 *)0x0) {
            *local_a8 = 0;
        }
    }
    else {
        FUN_14034bdd0();
        FUN_140407b90();
    }
    if (*(int *)(*(longlong *)(param_2 + 8) + 0x30) == 0) {
        local_88 = (undefined2 *)FUN_14018b280(2);
        local_80 = local_88 + 1;
        local_90 = local_88;
        FUN_1407db590(local_88,&DAT_1409e8784,0);
        if (local_88 != (undefined2 *)0x0) {
            *local_88 = 0;
        }
    }
    else {
        FUN_14034bdd0();
        FUN_140407b90();
    }
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 0x10);
    uVar11 = uVar8;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        uVar11 = DAT_140c3fe68 + uVar2;
    }
    FUN_140407b90(uVar2,local_78,uVar11,param_3);
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 8) + 0x18);
    uVar11 = uVar8;
    if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
        uVar11 = DAT_140c3fe68 + uVar2;
    }
    FUN_140407b90(uVar2,local_58,uVar11,param_3);
    ppuVar10 = local_f0;
    do {
        puVar3 = *ppuVar10;
        if (puVar3 != ppuVar10[1]) {
            cVar5 = FUN_1400ec6c0(*(undefined8 *)(DAT_140c65898 + 0x7340),puVar3);
            if (cVar5 != '\0') goto LAB_140407938;
            uVar4 = *(undefined8 *)(DAT_140c65898 + 0x7340);
            lVar6 = FUN_14018f0e0(local_118,puVar3);
            cVar5 = FUN_1400ec7d0(uVar4,*(undefined8 *)(lVar6 + 8));
            if (local_110 != 0) {
                FUN_14018b900(local_110,0);
            }
            if (cVar5 != '\0') goto LAB_140407938;
        }
        uVar8 = uVar8 + 1;
        ppuVar10 = ppuVar10 + 4;
    } while (uVar8 < 6);
    if (local_f8 != (undefined *)(param_2 + 0x78)) {
        FUN_14001c480((undefined *)(param_2 + 0x78),local_f0[0],local_f0[1]);
    }
    if (local_d8 != (undefined *)(param_2 + 0x98)) {
        FUN_14001c480((undefined *)(param_2 + 0x98),local_d0,local_c8);
    }
    if (local_b8 != (undefined *)(param_2 + 0xb8)) {
        FUN_14001c480((undefined *)(param_2 + 0xb8),local_b0,local_a8);
    }
    if (local_98 != (undefined *)(param_2 + 0xd8)) {
        FUN_14001c480((undefined *)(param_2 + 0xd8),local_90,local_88);
    }
    if (local_78 != (undefined *)(param_2 + 0x38)) {
        FUN_14001c480((undefined *)(param_2 + 0x38),local_70,local_68);
    }
    if (local_58 != (undefined *)(param_2 + 0x58)) {
        FUN_14001c480((undefined *)(param_2 + 0x58),local_50[0],local_50[1]);
    }
    LAB_140407938:
    iVar9 = 5;
    puVar7 = local_30;
    do {
        plVar1 = (longlong *)(puVar7 + -0x20);
        puVar7 = puVar7 + -0x20;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    FUN_1407db4f0(local_50[3] ^ (ulonglong)auStack312);
    return;
}



void FUN_140407990(undefined8 param_1,longlong param_2,short *param_3,int param_4)

{
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined *puVar7;
    int iVar8;
    uint uVar9;
    undefined *puVar10;
    undefined *puVar11;
    undefined *puVar12;
    undefined local_48 [8];
    longlong local_40;
    undefined2 *local_38;
    longlong local_30;

    puVar7 = (undefined *)0x0;
    puVar12 = puVar7;
    puVar10 = puVar7;
    if (**(int **)(param_2 + 8) == 0x11) {
        puVar12 = &DAT_140c7b310;
        puVar10 = (undefined *)0x14;
    }
    do {
        uVar9 = 0;
        iVar8 = (int)puVar7;
        if (iVar8 == 0) {
            if ((param_4 != 0) && (iVar4 = FUN_140407600(0,param_2,param_4), iVar4 != 0)) {
                return;
            }
            puVar7 = (undefined *)0x0;
            if (puVar12 == (undefined *)0x0) {
                uVar9 = **(int **)(param_2 + 8) - 0x11;
                if (1 < uVar9) {
                    puVar7 = (undefined *)0x0;
                    goto LAB_140407b63;
                }
            }
            else if (puVar10 != (undefined *)0x0) {
                iVar4 = *DAT_140c63750;
                puVar11 = puVar12;
                do {
                    iVar5 = *(int *)(puVar11 + 0x10);
                    if (iVar4 < *(int *)(puVar11 + 0x10)) {
                        iVar5 = iVar4;
                    }
                    iVar5 = FUN_14018e2c0(*(undefined8 *)(puVar11 + (longlong)iVar5 * 0x20 + 0x28),param_3);
                    if (iVar5 == 0) {
                        if ((puVar7 < puVar10) && (iVar4 = FUN_140407600(), iVar4 != 0)) {
                            lVar6 = 0;
                            local_40 = 0;
                            local_30 = 0;
                            sVar2 = *param_3;
                            while (sVar2 != 0) {
                                lVar6 = lVar6 + 1;
                                sVar2 = param_3[lVar6];
                            }
                            lVar6 = lVar6 * 2 >> 1;
                            uVar1 = lVar6 + 1;
                            if (uVar1 < 0x7fffffffffffffff) {
                                lVar3 = uVar1 * 2;
                                local_40 = FUN_14018b280(lVar3,0);
                                local_30 = lVar3 + local_40;
                            }
                            lVar3 = local_40;
                            lVar6 = lVar6 * 2;
                            FUN_1407db590(local_40,param_3,lVar6);
                            local_38 = (undefined2 *)(lVar6 + lVar3);
                            if (local_38 != (undefined2 *)0x0) {
                                *local_38 = 0;
                            }
                            iVar8 = *(int *)(puVar12 + (longlong)puVar7 * 0x138 + 0x10);
                            if (*DAT_140c63750 < iVar8) {
                                iVar8 = *DAT_140c63750;
                            }
                            FUN_14001a9b0(puVar12 + (longlong)puVar7 * 0x138,iVar8,local_48);
                            if (lVar3 == 0) {
                                return;
                            }
                            FUN_14018b900(lVar3,0);
                            return;
                        }
                        break;
                    }
                    puVar7 = puVar7 + 1;
                    puVar11 = puVar11 + 0x138;
                } while (puVar7 < puVar10);
            }
        }
        else {
            LAB_140407b63:
            iVar4 = FUN_140407600(uVar9,param_2,puVar7);
            if (iVar4 != 0) {
                return;
            }
        }
        uVar9 = iVar8 + 1;
        puVar7 = (undefined *)(ulonglong)uVar9;
        if (99 < uVar9) {
            return;
        }
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_140407b90(undefined8 param_1,longlong param_2,short *param_3,int param_4)

{
    short sVar1;
    char cVar2;
    undefined2 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 uVar7;
    undefined ***pppuVar8;
    undefined8 *puVar9;
    undefined extraout_XMM0 [16];
    undefined extraout_XMM0_00 [16];
    undefined **local_1f8;
    undefined local_1f0 [184];
    undefined local_138 [16];
    undefined2 *local_128;
    undefined **local_118;
    undefined local_110 [184];
    undefined local_58 [16];
    undefined2 *local_48;
    undefined local_38 [8];
    longlong local_30;

    if (*param_3 == 0) {
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        puVar3 = (undefined2 *)FUN_14018b280(2,0);
        *(undefined2 **)(param_2 + 8) = puVar3;
        *(undefined2 **)(param_2 + 0x18) = puVar3 + 1;
        *(undefined2 **)(param_2 + 0x10) = puVar3;
        FUN_1407db590(puVar3,&DAT_1409e8764,0);
        *(undefined2 **)(param_2 + 0x10) = puVar3;
        if (puVar3 == (undefined2 *)0x0) {
            return param_2;
        }
        *puVar3 = 0;
        return param_2;
    }
    FUN_1400b6f30(&local_118);
    puVar9 = (undefined8 *)0x0;
    local_58 = extraout_XMM0 & (undefined  [16])0x0;
    local_48 = (undefined2 *)0x0;
    local_118 = &PTR_FUN_140b69230;
    puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
    local_48 = puVar3 + 8;
    local_58 = CONCAT88(puVar3,puVar3);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    FUN_1400b6f30(&local_1f8);
    local_1f8 = &PTR_FUN_140b69230;
    local_138 = extraout_XMM0_00 & (undefined  [16])0x0;
    local_128 = (undefined2 *)0x0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    local_128 = puVar3 + 8;
    local_138 = CONCAT88(puVar3,puVar3);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    sVar1 = *param_3;
    puVar4 = puVar9;
    while (sVar1 != 0) {
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        sVar1 = param_3[(longlong)puVar4];
    }
    FUN_14001c480(local_1f0,param_3,param_3 + (longlong)puVar4);
    if (param_4 == 0) {
        pppuVar8 = &local_1f8;
    }
    else {
        sVar1 = *param_3;
        puVar4 = puVar9;
        while (sVar1 != 0) {
            puVar4 = (undefined8 *)((longlong)puVar4 + 1);
            sVar1 = param_3[(longlong)puVar4];
        }
        FUN_14001c480(local_110,param_3,param_3 + (longlong)puVar4);
        puVar4 = (undefined8 *)FUN_14018b280(0x58);
        if (puVar4 != (undefined8 *)0x0) {
            FUN_1400b6390(puVar4);
            *(int *)(puVar4 + 1) = param_4;
            *puVar4 = &PTR_FUN_140b69300;
            *(float *)((longlong)puVar4 + 0xc) = (float)param_4;
            puVar9 = puVar4;
        }
        FUN_1400b7480(&local_118,puVar9);
        uVar6 = FUN_1400b7660(&local_1f8);
        uVar7 = FUN_1400b7660(&local_118);
        cVar2 = FUN_14001be70(uVar7,uVar6);
        pppuVar8 = &local_118;
        if (cVar2 != '\0') {
            uVar6 = FUN_14018efa0(local_38,&DAT_140af1064,param_4);
            uVar7 = FUN_1400b7660(&local_1f8);
            FUN_1400422a0(param_2,uVar7,uVar6);
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
            goto LAB_140407de1;
        }
    }
    lVar5 = FUN_1400b7660(pppuVar8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    FUN_14001c1b0(param_2,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    LAB_140407de1:
    if (local_138._0_8_ != 0) {
        FUN_14018b900(local_138._0_8_,0);
    }
    FUN_1400b7390(&local_1f8);
    if (local_58._0_8_ != 0) {
        FUN_14018b900(local_58._0_8_,0);
    }
    FUN_1400b7390(&local_118);
    return param_2;
}



void FUN_140407e40(longlong param_1,ulonglong param_2)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    undefined2 *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    ulonglong uVar8;
    ulonglong *puVar9;
    undefined8 *puVar10;
    ulonglong local_res10;
    undefined2 *local_res18;
    undefined2 *local_res20;
    undefined local_68 [8];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;

    puVar9 = (ulonglong *)0x0;
    local_res10 = param_2;
    if (*(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88)) {
        local_res18 = *(undefined2 **)(param_2 + 0x80);
        FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_res18,&LAB_140405e70,param_2);
        plVar1 = (longlong *)(param_1 + 0x10);
        if (*plVar1 == *(longlong *)(param_1 + 0x18)) {
            FUN_1400290d0(plVar1);
        }
        uVar5 = (**(code **)(param_1 + 0x28))(&local_res18);
        ppuVar2 = (ulonglong **)
                (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
        puVar6 = (ulonglong *)FUN_14018b280(0x20);
        puVar7 = puVar9;
        if (puVar6 != (ulonglong *)0x0) {
            puVar7 = *ppuVar2;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong)puVar7;
            puVar6[3] = param_2;
            puVar6[2] = (ulonglong)local_res18;
            puVar7 = puVar6;
        }
        *ppuVar2 = puVar7;
        *plVar1 = *plVar1 + 1;
        local_60 = (undefined2 *)FUN_14018b280(0x10);
        local_50 = local_60 + 8;
        if (local_60 != (undefined2 *)0x0) {
            *local_60 = 0;
        }
        local_58 = local_60;
        FUN_1400a7b60(local_68,local_res18);
        puVar3 = local_60;
        iVar4 = FUN_14018e2c0(local_res18);
        if (iVar4 != 0) {
            local_res20 = puVar3;
            uVar5 = (**(code **)(param_1 + 0x28))(&local_res20);
            for (puVar7 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
                 puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                if ((uVar5 == *puVar7) && (iVar4 = (**(code **)(param_1 + 0x30))(&local_res20), iVar4 != 0))
                {
                    if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140407fcc;
                    break;
                }
            }
            iVar4 = FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),puVar3,&LAB_140405e70,param_2);
            if (-1 < iVar4) {
                local_res20 = puVar3;
                FUN_14040adf0(plVar1,&local_res20,&local_res10);
            }
        }
        LAB_140407fcc:
        if (puVar3 != (undefined2 *)0x0) {
            FUN_14018b900(puVar3);
        }
    }
    if (*(longlong *)(param_2 + 0xa0) != *(longlong *)(param_2 + 0xa8)) {
        local_res20 = *(undefined2 **)(param_2 + 0xa0);
        FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_res20,&LAB_140405e70,param_2);
        plVar1 = (longlong *)(param_1 + 0x10);
        if (*plVar1 == *(longlong *)(param_1 + 0x18)) {
            FUN_1400290d0(plVar1);
        }
        uVar5 = (**(code **)(param_1 + 0x28))(&local_res20);
        ppuVar2 = (ulonglong **)
                (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
        puVar6 = (ulonglong *)FUN_14018b280(0x20);
        puVar7 = puVar9;
        if (puVar6 != (ulonglong *)0x0) {
            puVar7 = *ppuVar2;
            *puVar6 = uVar5;
            puVar6[1] = (ulonglong)puVar7;
            puVar6[3] = param_2;
            puVar6[2] = (ulonglong)local_res20;
            puVar7 = puVar6;
        }
        *ppuVar2 = puVar7;
        *plVar1 = *plVar1 + 1;
        local_60 = (undefined2 *)FUN_14018b280(0x10);
        local_50 = local_60 + 8;
        if (local_60 != (undefined2 *)0x0) {
            *local_60 = 0;
        }
        local_58 = local_60;
        FUN_1400a7b60(local_68,local_res20);
        puVar3 = local_60;
        iVar4 = FUN_14018e2c0(local_res20);
        if (iVar4 != 0) {
            local_res18 = puVar3;
            uVar5 = (**(code **)(param_1 + 0x28))(&local_res18);
            for (puVar7 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
                 puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                if ((uVar5 == *puVar7) && (iVar4 = (**(code **)(param_1 + 0x30))(&local_res18), iVar4 != 0))
                {
                    if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140408144;
                    break;
                }
            }
            iVar4 = FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),puVar3,&LAB_140405e70,param_2);
            if (-1 < iVar4) {
                local_res18 = puVar3;
                FUN_14040adf0(plVar1,&local_res18,&local_res10);
            }
        }
        LAB_140408144:
        if (puVar3 != (undefined2 *)0x0) {
            FUN_14018b900(puVar3);
        }
    }
    puVar10 = (undefined8 *)(param_2 + 0x40);
    do {
        if (puVar10 == (undefined8 *)&DAT_00000008) break;
        if ((undefined2 *)*puVar10 != (undefined2 *)puVar10[1]) {
            plVar1 = (longlong *)(param_1 + 0x10);
            local_res18 = (undefined2 *)*puVar10;
            uVar5 = (**(code **)(param_1 + 0x28))(&local_res18);
            for (puVar7 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
                 puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                if ((uVar5 == *puVar7) && (iVar4 = (**(code **)(param_1 + 0x30))(&local_res18), iVar4 != 0))
                {
                    if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140408327;
                    break;
                }
            }
            FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_res18,&LAB_140405e70,param_2);
            if (*plVar1 == *(longlong *)(param_1 + 0x18)) {
                FUN_1400290d0(plVar1);
            }
            uVar5 = (**(code **)(param_1 + 0x28))(&local_res18);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar7 == (ulonglong *)0x0) {
                puVar7 = (ulonglong *)0x0;
            }
            else {
                puVar6 = *ppuVar2;
                *puVar7 = uVar5;
                puVar7[1] = (ulonglong)puVar6;
                puVar7[3] = param_2;
                puVar7[2] = (ulonglong)local_res18;
            }
            *ppuVar2 = puVar7;
            *plVar1 = *plVar1 + 1;
            local_60 = (undefined2 *)FUN_14018b280(0x10);
            local_50 = local_60 + 8;
            if (local_60 != (undefined2 *)0x0) {
                *local_60 = 0;
            }
            local_58 = local_60;
            FUN_1400a7b60(local_68,local_res18);
            puVar3 = local_60;
            iVar4 = FUN_14018e2c0(local_res18);
            if (iVar4 != 0) {
                local_res20 = puVar3;
                uVar5 = (**(code **)(param_1 + 0x28))(&local_res20);
                for (puVar7 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8
                        ); puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                    if ((uVar5 == *puVar7) &&
                        (iVar4 = (**(code **)(param_1 + 0x30))(&local_res20), iVar4 != 0)) {
                        if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140408318;
                        break;
                    }
                }
                iVar4 = FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),puVar3,&LAB_140405e70,param_2)
                        ;
                if (-1 < iVar4) {
                    local_res20 = puVar3;
                    FUN_14040adf0(plVar1,&local_res20,&local_res10);
                }
            }
            LAB_140408318:
            if (puVar3 != (undefined2 *)0x0) {
                FUN_14018b900(puVar3);
            }
        }
        LAB_140408327:
        puVar9 = (ulonglong *)((longlong)puVar9 + 1);
        puVar10 = puVar10 + 4;
    } while (puVar9 < (ulonglong *)0x2);
    uVar5 = 0;
    puVar9 = (ulonglong *)(param_2 + 0xc0);
    do {
        if (puVar9 == (ulonglong *)&DAT_00000008) {
            return;
        }
        local_res10 = *puVar9;
        if (local_res10 != puVar9[1]) {
            plVar1 = (longlong *)(param_1 + 0x10);
            uVar8 = (**(code **)(param_1 + 0x28))(&local_res10);
            for (puVar7 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar8 % *(ulonglong *)(param_1 + 0x18)) * 8);
                 puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                if ((uVar8 == *puVar7) && (iVar4 = (**(code **)(param_1 + 0x30))(&local_res10), iVar4 != 0))
                {
                    if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140408558;
                    break;
                }
            }
            FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_res10,&LAB_140405e70,param_2);
            if (*plVar1 == *(longlong *)(param_1 + 0x18)) {
                FUN_1400290d0(plVar1);
            }
            uVar8 = (**(code **)(param_1 + 0x28))(&local_res10);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar8 % *(ulonglong *)(param_1 + 0x18)) * 8);
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar7 == (ulonglong *)0x0) {
                puVar7 = (ulonglong *)0x0;
            }
            else {
                puVar6 = *ppuVar2;
                *puVar7 = uVar8;
                puVar7[1] = (ulonglong)puVar6;
                puVar7[3] = param_2;
                puVar7[2] = local_res10;
            }
            *ppuVar2 = puVar7;
            *plVar1 = *plVar1 + 1;
            local_60 = (undefined2 *)FUN_14018b280(0x10);
            local_50 = local_60 + 8;
            if (local_60 != (undefined2 *)0x0) {
                *local_60 = 0;
            }
            local_58 = local_60;
            FUN_1400a7b60(local_68,local_res10);
            puVar3 = local_60;
            iVar4 = FUN_14018e2c0(local_res10);
            if (iVar4 != 0) {
                local_res18 = puVar3;
                uVar8 = (**(code **)(param_1 + 0x28))(&local_res18);
                for (puVar7 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x20) + (uVar8 % *(ulonglong *)(param_1 + 0x18)) * 8
                        ); puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)puVar7[1]) {
                    if ((uVar8 == *puVar7) &&
                        (iVar4 = (**(code **)(param_1 + 0x30))(&local_res18), iVar4 != 0)) {
                        if (puVar7 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_140408549;
                        break;
                    }
                }
                iVar4 = FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),puVar3,&LAB_140405e70,param_2)
                        ;
                if (-1 < iVar4) {
                    local_res18 = puVar3;
                    if (*plVar1 == *(longlong *)(param_1 + 0x18)) {
                        FUN_1400290d0(plVar1);
                    }
                    uVar8 = (**(code **)(param_1 + 0x28))(&local_res18);
                    ppuVar2 = (ulonglong **)
                            (*(longlong *)(param_1 + 0x20) + (uVar8 % *(ulonglong *)(param_1 + 0x18)) * 8);
                    puVar7 = (ulonglong *)FUN_14018b280(0x20);
                    if (puVar7 != (ulonglong *)0x0) {
                        puVar6 = *ppuVar2;
                        *puVar7 = uVar8;
                        puVar7[1] = (ulonglong)puVar6;
                        puVar7[3] = param_2;
                        puVar7[2] = (ulonglong)local_res18;
                    }
                    *ppuVar2 = puVar7;
                    *plVar1 = *plVar1 + 1;
                }
            }
            LAB_140408549:
            if (puVar3 != (undefined2 *)0x0) {
                FUN_14018b900(puVar3);
            }
        }
        LAB_140408558:
        uVar5 = uVar5 + 1;
        puVar9 = puVar9 + 4;
        if (1 < uVar5) {
            return;
        }
    } while( true );
}



longlong * FUN_140408580(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong **ppuVar8;
    longlong *plVar9;
    undefined8 local_res10;
    undefined8 local_res18;
    longlong local_res20;
    longlong local_48 [2];

    if (*(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88)) {
        FUN_1400ecdf0(*(undefined8 *)(DAT_140c65898 + 0x7340));
        local_res10 = *(undefined8 *)(param_2 + 0x80);
        uVar3 = (**(code **)(param_1 + 0x28))(&local_res10);
        uVar6 = uVar3 % *(ulonglong *)(param_1 + 0x18);
        ppuVar8 = (ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
        puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
        while (puVar1 != (ulonglong *)0x0) {
            if ((uVar3 == **ppuVar8) &&
                (iVar2 = (**(code **)(param_1 + 0x30))(&local_res10,*ppuVar8 + 2), iVar2 != 0)) {
                puVar1 = *ppuVar8;
                *ppuVar8 = (ulonglong *)puVar1[1];
                FUN_14018b900(puVar1,0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                break;
            }
            ppuVar8 = (ulonglong **)(*ppuVar8 + 1);
            puVar1 = *ppuVar8;
        }
    }
    if (*(longlong *)(param_2 + 0xa0) != *(longlong *)(param_2 + 0xa8)) {
        FUN_1400ecdf0(*(undefined8 *)(DAT_140c65898 + 0x7340));
        local_res18 = *(undefined8 *)(param_2 + 0xa0);
        uVar3 = (**(code **)(param_1 + 0x28))(&local_res18);
        uVar6 = uVar3 % *(ulonglong *)(param_1 + 0x18);
        ppuVar8 = (ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
        puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar6 * 8);
        while (puVar1 != (ulonglong *)0x0) {
            if ((uVar3 == **ppuVar8) &&
                (iVar2 = (**(code **)(param_1 + 0x30))(&local_res18,*ppuVar8 + 2), iVar2 != 0)) {
                puVar1 = *ppuVar8;
                *ppuVar8 = (ulonglong *)puVar1[1];
                FUN_14018b900(puVar1,0);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                break;
            }
            ppuVar8 = (ulonglong **)(*ppuVar8 + 1);
            puVar1 = *ppuVar8;
        }
    }
    uVar6 = 0;
    plVar9 = (longlong *)(param_2 + 0x40);
    uVar3 = uVar6;
    do {
        if (plVar9 == (longlong *)&DAT_00000008) break;
        if (*plVar9 != plVar9[1]) {
            FUN_1400ecdf0(*(undefined8 *)(DAT_140c65898 + 0x7340));
            local_res20 = *plVar9;
            uVar4 = (**(code **)(param_1 + 0x28))(&local_res20);
            uVar7 = uVar4 % *(ulonglong *)(param_1 + 0x18);
            ppuVar8 = (ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar7 * 8);
            puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar7 * 8);
            while (puVar1 != (ulonglong *)0x0) {
                if ((uVar4 == **ppuVar8) &&
                    (iVar2 = (**(code **)(param_1 + 0x30))(&local_res20,*ppuVar8 + 2), iVar2 != 0)) {
                    puVar1 = *ppuVar8;
                    *ppuVar8 = (ulonglong *)puVar1[1];
                    FUN_14018b900(puVar1,0);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                    break;
                }
                ppuVar8 = (ulonglong **)(*ppuVar8 + 1);
                puVar1 = *ppuVar8;
            }
        }
        uVar3 = uVar3 + 1;
        plVar9 = plVar9 + 4;
    } while (uVar3 < 2);
    plVar9 = (longlong *)(param_2 + 0xc0);
    do {
        plVar5 = plVar9 + -1;
        if (plVar5 == (longlong *)0x0) {
            return (longlong *)0x0;
        }
        if (*plVar9 != plVar9[1]) {
            FUN_1400ecdf0(*(undefined8 *)(DAT_140c65898 + 0x7340));
            local_48[0] = *plVar9;
            uVar3 = (**(code **)(param_1 + 0x28))(local_48);
            plVar5 = (longlong *)(uVar3 / *(ulonglong *)(param_1 + 0x18));
            uVar4 = uVar3 % *(ulonglong *)(param_1 + 0x18);
            ppuVar8 = (ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8);
            puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8);
            while (puVar1 != (ulonglong *)0x0) {
                if ((uVar3 == **ppuVar8) &&
                    (plVar5 = (longlong *)(**(code **)(param_1 + 0x30))(local_48,*ppuVar8 + 2),
                            (int)plVar5 != 0)) {
                    puVar1 = *ppuVar8;
                    *ppuVar8 = (ulonglong *)puVar1[1];
                    plVar5 = (longlong *)FUN_14018b900(puVar1,0);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                    break;
                }
                ppuVar8 = (ulonglong **)(*ppuVar8 + 1);
                puVar1 = *ppuVar8;
            }
        }
        uVar6 = uVar6 + 1;
        plVar9 = plVar9 + 4;
        if (1 < uVar6) {
            return plVar5;
        }
    } while( true );
}



// WARNING: Removing unreachable block (ram,0x000140408efc)
// WARNING: Removing unreachable block (ram,0x0001404091d1)
// WARNING: Could not reconcile some variable overlaps

void FUN_140408850(undefined8 param_1,longlong param_2,short **param_3)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    longlong lVar3;
    double *pdVar4;
    undefined8 *puVar5;
    byte bVar6;
    short **ppsVar7;
    ushort uVar8;
    short sVar9;
    int iVar10;
    uint uVar11;
    undefined8 uVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    int *piVar16;
    longlong *plVar17;
    undefined ***pppuVar18;
    ushort uVar19;
    undefined8 *puVar20;
    undefined **ppuVar21;
    short *psVar22;
    ulonglong uVar23;
    undefined *puVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    undefined **ppuVar27;
    ulonglong uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    undefined auStack488 [32];
    uint local_1c8;
    uint local_1c0;
    undefined8 local_1b8;
    longlong local_1b0;
    longlong *local_1a8;
    undefined *local_1a0;
    ulonglong local_198;
    ulonglong local_190;
    ulonglong local_188;
    short **local_180;
    int local_178;
    undefined **local_170;
    ulonglong local_168;
    longlong local_160;
    undefined4 local_158;
    longlong local_150;
    ulonglong local_148;
    undefined **local_140;
    int local_138;
    longlong local_130;
    undefined4 local_128;
    ulonglong local_120;
    ulonglong local_118;
    longlong local_110;
    ulonglong local_108;
    ulonglong local_100;
    longlong local_f8;
    longlong local_e8 [7];
    longlong local_b0;
    int local_88;
    undefined local_84 [44];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack488;
    local_180 = param_3;
    local_150 = param_2;
    if (*(int *)(param_3 + 1) == 0) {
        lVar13 = *(longlong *)(param_2 + 0x10);
        local_128 = 1;
        local_140 = &PTR_FUN_140b569f0;
        local_130 = lVar13;
        if (*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar13);
        }
        puVar20 = *(undefined8 **)(lVar13 + 0x10);
        uVar12 = FUN_14005c1b0(lVar13,0,0);
        *(undefined4 *)(puVar20 + 1) = 5;
        *puVar20 = uVar12;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        iVar10 = FUN_1400578c0(lVar13);
        local_1c0 = 0;
        local_1c8 = 0;
        local_138 = iVar10;
        FUN_140409860();
        FUN_1400fb1d0(param_2,iVar10);
        FUN_1400579e0(lVar13);
    }
    else {
        lVar13 = FUN_14018b280(0x18);
        uVar26 = 0;
        if (lVar13 == 0) {
            local_1a8 = (longlong *)0x0;
        }
        else {
            local_1a8 = (longlong *)FUN_1401ae310(lVar13);
        }
        local_1b0 = 0;
        psVar22 = (short *)&DAT_1409e8714;
        if (*param_3 != (short *)0x0) {
            psVar22 = *param_3;
        }
        sVar9 = *psVar22;
        uVar14 = uVar26;
        while (sVar9 != 0) {
            uVar14 = uVar14 + 1;
            sVar9 = psVar22[uVar14];
        }
        lVar13 = (longlong)(uVar14 * 2) >> 1;
        uVar14 = lVar13 + 1;
        if (uVar14 < 0x7fffffffffffffff) {
            local_1b0 = FUN_14018b280(uVar14 * 2,0);
        }
        FUN_1407db590(local_1b0,psVar22);
        puVar2 = (undefined2 *)(local_1b0 + lVar13 * 2);
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        local_188 = (longlong)puVar2 - local_1b0 >> 1;
        local_148 = 0;
        lVar13 = (local_188 >> 3) + 1;
        local_1b8 = (undefined **)((ulonglong)local_1b8._4_4_ << 0x20);
        local_198 = 0;
        local_1a0 = (undefined *)0x0;
        if ((lVar13 != 0) && (FUN_140033620(&local_1a0,lVar13), puVar24 = local_1a0, lVar13 != 0)) {
            for (; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar24 = 0;
                puVar24 = puVar24 + 1;
            }
        }
        local_1b8._0_4_ = 0;
        uVar14 = local_198;
        puVar24 = local_1a0;
        if (local_198 != 0) {
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar24 = 0;
                puVar24 = puVar24 + 1;
            }
        }
        local_190 = 0;
        uVar14 = local_198;
        uVar28 = uVar26;
        if (*(int *)(param_3 + 1) != 0) {
            do {
                psVar22 = param_3[2];
                if ((*(int *)((longlong)psVar22 + uVar26) == 1) ||
                    (*(int *)((longlong)psVar22 + uVar26) == 7)) {
                    uVar19 = *(ushort *)((longlong)psVar22 + uVar26 + 6);
                    local_1b8._0_4_ = *(uint *)((longlong)psVar22 + uVar26 + 8);
                    uVar28 = (ulonglong)*(ushort *)((longlong)psVar22 + uVar26 + 4);
                    local_1b8 = (undefined **)
                            ((ulonglong)local_1b8 & 0xffffffff00000000 | (ulonglong)(uint)local_1b8);
                    uVar8 = (short)uVar14 << 3;
                    if (uVar8 < uVar19) {
                        uVar19 = uVar8;
                    }
                    if (uVar28 < uVar19) {
                        uVar25 = uVar14;
                        do {
                            if (*(int *)(uVar26 + (longlong)param_3[2]) == 7) {
                                *(undefined2 *)(local_1b0 + uVar28 * 2) = 0x23;
                            }
                            uVar23 = uVar28 >> 3;
                            uVar14 = uVar25;
                            if (((uVar25 <= uVar23) && (uVar1 = uVar23 + 1, param_3 = local_180, uVar25 < uVar1))
                                && (FUN_140033620(&local_1a0,uVar1), uVar14 = local_198, param_3 = local_180,
                                    uVar25 < uVar1)) {
                                puVar24 = local_1a0 + uVar25;
                                for (lVar13 = uVar1 - uVar25; lVar13 != 0; lVar13 = lVar13 + -1) {
                                    *puVar24 = 0;
                                    puVar24 = puVar24 + 1;
                                }
                            }
                            bVar6 = (byte)uVar28;
                            uVar28 = uVar28 + 1;
                            local_1a0[uVar23] = local_1a0[uVar23] | '\x01' << (bVar6 & 7);
                            uVar25 = uVar14;
                        } while (uVar28 < uVar19);
                        goto LAB_140408b4d;
                    }
                }
                else {
                    LAB_140408b4d:
                }
                local_190 = local_190 + 1;
                uVar26 = uVar26 + 0x68;
                uVar28 = local_148;
            } while (local_190 < *(uint *)(param_3 + 1));
        }
        plVar17 = local_1a8;
        uVar23 = 0;
        (**(code **)(*local_1a8 + 0x10))(local_1a8,(uint)local_1b8);
        puVar24 = local_1a0;
        lVar13 = local_1b0;
        uVar26 = local_188;
        uVar25 = uVar23;
        if (local_188 != 0) {
            do {
                sVar9 = *(short *)(lVar13 + uVar25 * 2);
                if (((sVar9 == 0x23) && (uVar25 >> 3 < uVar14)) &&
                    (uVar26 = local_188, (puVar24[uVar25 >> 3] & '\x01' << ((byte)uVar25 & 7)) != 0)) {
                    iVar10 = (**(code **)(*plVar17 + 0x40))(plVar17,3,0xc);
                    if (uVar28 + 1 < (ulonglong)(longlong)iVar10) {
                        sVar9 = (**(code **)(*plVar17 + 0x40))(plVar17,0,0x19);
                        *(short *)(lVar13 + uVar25 * 2) = sVar9 + 0x61;
                        uVar26 = local_188;
                        uVar28 = uVar28 + 1;
                    }
                    else {
                        *(undefined2 *)(lVar13 + uVar25 * 2) = 0x20;
                        uVar26 = local_188;
                        uVar28 = uVar23;
                    }
                }
                else if (sVar9 == 0x20) {
                    uVar28 = uVar23;
                }
                uVar25 = uVar25 + 1;
                param_3 = local_180;
            } while (uVar25 < uVar26);
        }
        (**(code **)(*plVar17 + 8))(plVar17);
        local_168 = (ulonglong)*(uint *)(param_3 + 1);
        local_170 = (undefined **)0x0;
        local_1c8 = 2;
        FUN_1401d3110(&local_108,&LAB_1404013b0,&local_170,param_3[2]);
        local_168 = (ulonglong)*(uint *)(param_3 + 1);
        local_170 = (undefined **)0x0;
        local_1c8 = 2;
        FUN_1401d3110(&local_120,&LAB_1404013e0,&local_170,param_3[2]);
        local_e8[0] = 0;
        FUN_1407e4830(local_e8 + 1,0,0x58);
        local_148 = (ulonglong)*(uint *)(param_3 + 1);
        if (local_148 == 0) {
            puVar20 = (undefined8 *)0x0;
        }
        else {
            puVar15 = (undefined8 *)FUN_14018b280(local_148 * 4 + 0x10);
            if (puVar15 == (undefined8 *)0x0) {
                puVar20 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar20 = puVar15 + 2;
                *puVar15 = &PTR_FUN_140b5f110;
            }
        }
        local_1a8 = puVar20;
        FUN_1407e4830(puVar20);
        uVar29 = 0;
        uVar30 = 0;
        local_190 = 0;
        uVar26 = 0;
        local_1b8 = (undefined **)((ulonglong)local_1b8 & 0xffffffffffff0000);
        local_178 = 0;
        do {
            uVar28 = 0;
            uVar14 = local_188;
            if (uVar23 < *(uint *)(param_3 + 1)) {
                do {
                    lVar13 = *(longlong *)(local_f8 + uVar23 * 8);
                    piVar16 = (int *)(param_3[2] + lVar13 * 0x34);
                    uVar19 = *(ushort *)(piVar16 + 1);
                    if ((uVar19 < *(ushort *)((longlong)piVar16 + 6) ||
                         uVar19 == *(ushort *)((longlong)piVar16 + 6)) && (*piVar16 < 0xd)) {
                        if ((ushort)uVar26 < uVar19) {
                            if (*(ushort *)(piVar16 + 1) < local_188) {
                                uVar14 = (ulonglong)*(ushort *)(piVar16 + 1);
                            }
                            break;
                        }
                        local_e8[*piVar16] = local_e8[*piVar16] + 1;
                        *(undefined4 *)((longlong)puVar20 + lVar13 * 4) = 1;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < *(uint *)(param_3 + 1));
            }
            if (local_190 < *(uint *)(param_3 + 1)) {
                do {
                    lVar13 = *(longlong *)(local_110 + local_190 * 8);
                    piVar16 = (int *)(param_3[2] + lVar13 * 0x34);
                    uVar19 = *(ushort *)((longlong)piVar16 + 6);
                    if ((*(ushort *)(piVar16 + 1) < uVar19 || *(ushort *)(piVar16 + 1) == uVar19) &&
                        (*piVar16 < 0xd)) {
                        if ((ushort)uVar26 < uVar19) {
                            if (*(ushort *)((longlong)piVar16 + 6) < uVar14) {
                                uVar14 = (ulonglong)*(ushort *)((longlong)piVar16 + 6);
                            }
                            break;
                        }
                        local_e8[*piVar16] = local_e8[*piVar16] + -1;
                        *(undefined4 *)((longlong)puVar20 + lVar13 * 4) = 0;
                        if (*(short *)(piVar16 + 1) == *(short *)((longlong)piVar16 + 6)) {
                            local_170 = &PTR_FUN_140b569f0;
                            local_158 = 1;
                            lVar13 = *(longlong *)(local_150 + 0x10);
                            local_160 = lVar13;
                            if (*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x78)) {
                                FUN_14005e2c0(lVar13);
                            }
                            puVar20 = *(undefined8 **)(lVar13 + 0x10);
                            uVar12 = FUN_14005c1b0(lVar13,0);
                            *(undefined4 *)(puVar20 + 1) = 5;
                            *puVar20 = uVar12;
                            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                            uVar11 = FUN_1400578c0(lVar13);
                            local_168 = local_168 & 0xffffffff00000000 | (ulonglong)uVar11;
                            iVar10 = FUN_140409330(&local_170,piVar16);
                            uVar26 = local_168;
                            if (iVar10 != 0) {
                                local_1c8 = (uint)(local_b0 != 0);
                                local_1c0 = (uint)(local_e8[2] != 0);
                                FUN_140409860(local_e8[2] != 0,&local_170,&DAT_1409e867c,local_e8[1] != 0);
                                FUN_1400fb1d0(local_150,uVar26 & 0xffffffff);
                            }
                            lVar13 = local_160;
                            if ((local_160 != 0) && (-1 < (int)local_168)) {
                                plVar17 = (longlong *)FUN_1400580e0(local_160,0xffffd8f0);
                                puVar20 = *(undefined8 **)(*plVar17 + 0x20);
                                do {
                                    if ((*(int *)(puVar20 + 3) == 3) &&
                                        ((double)CONCAT44(uVar30,uVar29) == (double)puVar20[2])) goto LAB_140408f2d;
                                    puVar20 = (undefined8 *)puVar20[4];
                                } while (puVar20 != (undefined8 *)0x0);
                                puVar20 = &DAT_140a12138;
                                LAB_140408f2d:
                                puVar15 = *(undefined8 **)(lVar13 + 0x10);
                                *puVar15 = *puVar20;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar20 + 1);
                                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                                FUN_140058b30(lVar13,0xffffd8f0);
                                pdVar4 = *(double **)(lVar13 + 0x10);
                                *(undefined4 *)(pdVar4 + 1) = 3;
                                *pdVar4 = (double)(int)local_168;
                                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                                FUN_140058b30(lVar13,0xffffd8f0);
                            }
                            uVar26 = (ulonglong)local_1b8 & 0xffff;
                            puVar20 = local_1a8;
                        }
                    }
                    local_190 = local_190 + 1;
                } while (local_190 < *(uint *)(param_3 + 1));
            }
            uVar25 = uVar14;
            if (local_188 <= uVar14) {
                local_178 = 1;
                uVar25 = local_188;
            }
            local_1b8 = (undefined **)(uVar25 - uVar26);
            local_170 = (undefined **)(local_188 - uVar26);
            pppuVar18 = &local_170;
            if ((undefined **)(uVar25 - uVar26) <= (undefined **)(local_188 - uVar26)) {
                pppuVar18 = (undefined ***)&local_1b8;
            }
            lVar13 = local_1b0 + uVar26 * 2;
            local_170 = (undefined **)0x0;
            lVar3 = local_1b0 + ((longlong)*pppuVar18 + uVar26) * 2;
            uVar25 = (lVar3 - lVar13 >> 1) + 1;
            if (uVar25 < 0x7fffffffffffffff) {
                local_170 = (undefined **)FUN_14018b280(uVar25 * 2,0);
            }
            ppuVar27 = local_170;
            ppuVar21 = local_170;
            if (lVar13 != lVar3) {
                lVar13 = (local_1b0 - (longlong)local_170) + uVar26 * 2;
                do {
                    if (ppuVar21 != (undefined **)0x0) {
                        *(undefined2 *)ppuVar21 = *(undefined2 *)((longlong)ppuVar21 + lVar13);
                    }
                    ppuVar21 = (undefined **)((longlong)ppuVar21 + 2);
                } while ((longlong)ppuVar21 + lVar13 != lVar3);
            }
            if (ppuVar21 != (undefined **)0x0) {
                *(undefined2 *)ppuVar21 = 0;
            }
            local_1b8 = (undefined **)((ulonglong)local_1b8 & 0xffffffffffff0000 | uVar14 & 0xffff);
            local_128 = 1;
            lVar13 = *(longlong *)(local_150 + 0x10);
            local_140 = &PTR_FUN_140b569f0;
            local_130 = lVar13;
            if (*(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar13 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar13);
            }
            puVar20 = *(undefined8 **)(lVar13 + 0x10);
            uVar12 = FUN_14005c1b0(lVar13,0,0);
            *(undefined4 *)(puVar20 + 1) = 5;
            *puVar20 = uVar12;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            iVar10 = FUN_1400578c0();
            local_1c0 = (uint)(local_e8[2] != 0);
            local_1c8 = (uint)(local_b0 != 0);
            local_138 = iVar10;
            FUN_140409860();
            local_88 = 0;
            FUN_1407e4830(local_84);
            uVar26 = local_148;
            ppsVar7 = local_180;
            puVar15 = local_1a8;
            uVar14 = uVar28;
            if (local_148 != 0) {
                do {
                    psVar22 = ppsVar7[2];
                    if (((*(int *)((longlong)puVar15 + uVar14 * 4) != 0) &&
                         (iVar10 = *(int *)((longlong)psVar22 + uVar28), iVar10 < 0xc)) &&
                        (*(int *)(local_84 + (longlong)iVar10 * 4 + -4) == 0)) {
                        FUN_140409330(&local_140);
                        *(undefined4 *)(local_84 + (longlong)*(int *)((longlong)psVar22 + uVar28) * 4 + -4) = 1;
                    }
                    uVar14 = uVar14 + 1;
                    uVar28 = uVar28 + 0x68;
                    lVar13 = local_130;
                    ppuVar27 = local_170;
                    iVar10 = local_138;
                } while (uVar14 < uVar26);
            }
            FUN_1400fb1d0(local_150);
            if ((lVar13 != 0) && (-1 < iVar10)) {
                plVar17 = (longlong *)FUN_1400580e0(lVar13,0xffffd8f0);
                puVar20 = *(undefined8 **)(*plVar17 + 0x20);
                do {
                    if ((*(int *)(puVar20 + 3) == 3) &&
                        ((double)CONCAT44(uVar30,uVar29) == (double)puVar20[2])) goto LAB_1404091fd;
                    puVar20 = (undefined8 *)puVar20[4];
                } while (puVar20 != (undefined8 *)0x0);
                puVar20 = &DAT_140a12138;
                LAB_1404091fd:
                puVar5 = *(undefined8 **)(lVar13 + 0x10);
                *puVar5 = *puVar20;
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar20 + 1);
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                FUN_140058b30(lVar13,0xffffd8f0);
                pdVar4 = *(double **)(lVar13 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar10;
                *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                FUN_140058b30(lVar13);
            }
            if (ppuVar27 != (undefined **)0x0) {
                FUN_14018b900(ppuVar27);
            }
            uVar26 = (ulonglong)local_1b8 & 0xffff;
            puVar20 = local_1a8;
            param_3 = local_180;
        } while (local_178 == 0);
        if (puVar15 != (undefined8 *)0x0) {
            (**(code **)puVar15[-2])(puVar15 + -2);
        }
        if (local_120 < local_118) {
            FUN_14018b900(local_110 + local_120 * 8,0);
        }
        if (local_108 < local_100) {
            FUN_14018b900(local_f8 + local_108 * 8,0);
        }
        if (local_1a0 != (undefined *)0x0) {
            (**(code **)(*(longlong *)(local_1a0 + -0x10) + 8))(local_1a0 + -0x10);
        }
        if (local_1b0 != 0) {
            FUN_14018b900(local_1b0,0);
        }
    }
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack488);
    return;
}



void FUN_140409330(longlong param_1,undefined4 *param_2)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    code *pcVar4;
    bool bVar5;
    longlong lVar6;
    undefined4 uVar7;
    int iVar8;
    longlong lVar9;
    undefined8 uVar10;
    longlong lVar11;
    undefined8 *puVar12;
    longlong *plVar13;
    longlong *plVar14;
    undefined8 uVar15;
    wchar_t *pwVar16;
    ulonglong uVar17;
    undefined8 unaff_R15;
    undefined8 uStackX8;
    undefined4 auStackX16 [2];
    longlong lStackX24;
    undefined4 auStackX32 [2];
    undefined local_e78 [1216];
    undefined local_9b8 [1216];
    longlong *local_4f8 [96];
    longlong local_1f8;
    undefined8 local_44;
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x140409349;
    lVar9 = FUN_1407f0f60();
    lVar9 = -lVar9;
    local_38 = DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar9);
    switch(*param_2) {
        case 4:
            uVar7 = param_2[2];
            uVar15 = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404094d3;
            uVar10 = FUN_1400b5df0(DAT_140c658f0,uVar7,0);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404094de;
            iVar8 = FUN_140415c70(uVar15,uVar10);
            if (iVar8 == 0) break;
            pwVar16 = L"uItem";
            goto LAB_1404094e9;
        case 5:
            uVar15 = *(undefined8 *)(param_1 + 0x10);
            if (param_2[2] == 0) break;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409515;
            lVar11 = FUN_1405a8a40();
            if (lVar11 == 0) break;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409525;
            iVar8 = FUN_140663030(uVar15,lVar11);
            if (iVar8 == 0) break;
            pwVar16 = L"uQuest";
        LAB_1404094e9:
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404094f1;
            FUN_1400fb540(param_1,pwVar16);
            plVar13 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar13 = *plVar13 + -0x10;
            break;
        case 6:
            uVar7 = param_2[2];
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040953e;
            FUN_14040b420(param_1,&IMAGE_DOS_HEADER_140000000,uVar7);
            break;
        case 8:
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409392;
            FUN_14040fae0(local_4f8);
            if (param_2 != (undefined4 *)&DAT_fffffffffffffff8) {
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404093ab;
                iVar8 = FUN_1404112e0(local_4f8);
                if (iVar8 != 0) {
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404093c4;
                    uVar15 = FUN_14040fc60(&stack0x00000048 + lVar9,local_4f8);
                    pwVar16 = L"uItem";
                    LAB_1404097a1:
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404097ac;
                    FUN_14040b3a0(param_1,pwVar16,uVar15);
                    if (local_4f8[0] != (longlong *)0x0) {
                        pcVar4 = *(code **)(*local_4f8[0] + 8);
                        *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404097be;
                        (*pcVar4)();
                        local_4f8[0] = (longlong *)0x0;
                    }
                    if (local_1f8 != 0) {
                        *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404097de;
                        FUN_14018b900(local_1f8,0);
                    }
                    break;
                }
            }
            goto LAB_1404097e5;
        case 9:
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404093dc;
            FUN_14040fae0(local_4f8);
            uVar15 = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404093f3;
            plVar13 = (longlong *)FUN_1403acbb0(DAT_140c65898 + 0xa0,uVar15);
            if (plVar13 != (longlong *)0x0) {
                bVar5 = false;
                if (plVar13 != local_4f8[0]) {
                    bVar5 = true;
                    if (local_4f8[0] != (longlong *)0x0) {
                        pcVar4 = *(code **)(*local_4f8[0] + 8);
                        *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040941f;
                        (*pcVar4)();
                    }
                    pcVar4 = *(code **)*plVar13;
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040942e;
                    local_4f8[0] = plVar13;
                    (*pcVar4)(plVar13);
                }
                local_44 = 0;
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409441;
                FUN_140412ad0(local_4f8);
                if (bVar5) {
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409459;
                    uVar15 = FUN_14040fc60(local_9b8,local_4f8);
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040946b;
                    FUN_14040b3a0(param_1,L"uItem",uVar15);
                    if (local_4f8[0] != (longlong *)0x0) {
                        pcVar4 = *(code **)(*local_4f8[0] + 8);
                        *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040947d;
                        (*pcVar4)();
                        local_4f8[0] = (longlong *)0x0;
                    }
                    if (local_1f8 != 0) {
                        *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409497;
                        FUN_14018b900(local_1f8,0);
                    }
                    break;
                }
            }
            if (local_4f8[0] != (longlong *)0x0) {
                pcVar4 = *(code **)(*local_4f8[0] + 8);
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404094b7;
                (*pcVar4)();
                goto LAB_1404097f9;
            }
            goto LAB_140409800;
        case 10:
            lVar11 = *(longlong *)(param_1 + 0x10);
            *(undefined8 *)(&stack0x00001398 + lVar9) = unaff_R15;
            lVar3 = *(longlong *)(lVar11 + 0x20);
            *(undefined ***)((longlong)&uStackX8 + lVar9) = &PTR_FUN_140b569f0;
            *(undefined4 *)((longlong)auStackX32 + lVar9) = 1;
            uVar17 = *(ulonglong *)(lVar3 + 0x70);
            *(longlong *)((longlong)&lStackX24 + lVar9) = lVar11;
            if (uVar17 <= *(ulonglong *)(lVar3 + 0x78)) {
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409583;
                FUN_14005e2c0(lVar11);
            }
            puVar2 = *(undefined8 **)(lVar11 + 0x10);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409594;
            uVar15 = FUN_14005c1b0(lVar11,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar15;
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404095ab;
            uVar7 = FUN_1400578c0(lVar11);
            uVar15 = *(undefined8 *)(param_1 + 0x10);
            *(undefined (*) [16])(&stack0xfffffffffffffff8 + lVar9) =
                    ZEXT1216(CONCAT48(param_2[4],(ulonglong)(uint)param_2[3]));
            *(undefined4 *)((longlong)auStackX16 + lVar9) = uVar7;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404095df;
            FUN_1400fa3c0(&stack0x00000028 + lVar9,uVar15,&stack0xfffffffffffffff8 + lVar9);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404095f5;
            FUN_1400fb2a0((longlong)&uStackX8 + lVar9,L"tPosition",*(undefined4 *)(&stack0x00000030 + lVar9)
            );
            uVar17 = (ulonglong)(uint)param_2[2];
            uVar15 = *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040960c;
            puVar12 = (undefined8 *)FUN_14005c3c0(uVar15,uVar7);
            puVar2 = *(undefined8 **)(lVar11 + 0x10);
            *puVar2 = *puVar12;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409633;
            FUN_1400f06f0(lVar11,puVar2,L"nMapZoneId",uVar17 & 0xffffffff);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            uVar15 = 0;
            if (DAT_140c658f8 != 0) {
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040964c;
                plVar13 = (longlong *)FUN_140448420();
                if (plVar13 != (longlong *)0x0) {
                    pcVar4 = *(code **)(*plVar13 + 0x18);
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040965d;
                    plVar14 = (longlong *)(*pcVar4)(plVar13);
                    pcVar4 = *(code **)(*plVar14 + 0x30);
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409666;
                    iVar8 = (*pcVar4)();
                    if (iVar8 == 0) {
                        pcVar4 = *(code **)(*plVar13 + 8);
                        *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409679;
                        uVar15 = (*pcVar4)(plVar13);
                    }
                }
            }
            uVar10 = *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0);
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040968f;
            puVar12 = (undefined8 *)FUN_14005c3c0(uVar10,uVar7);
            puVar2 = *(undefined8 **)(lVar11 + 0x10);
            *puVar2 = *puVar12;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404096b6;
            FUN_1400f0870(lVar11,puVar2,L"strZoneName",uVar15);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404096cd;
            FUN_1400fb2a0(param_1,L"tNavPoint",uVar7);
            if (*(longlong *)(&stack0x00000038 + lVar9) != 0) {
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404096e1;
                FUN_1400579e0();
            }
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404096ec;
            FUN_1400579e0(lVar11);
            break;
        case 0xb:
            *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040970a;
            FUN_14040fae0(local_4f8);
            uVar1 = param_2[2];
            lVar11 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
            lVar6 = lVar11;
            lVar3 = *(longlong *)(lVar11 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar6 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((lVar6 == lVar11) ||
                (*(longlong *)(&stack0xfffffffffffffff8 + lVar9) = lVar6, uVar1 < *(uint *)(lVar6 + 0x20))) {
                *(longlong *)(&stack0xfffffffffffffff8 + lVar9) = lVar11;
            }
            if ((*(longlong *)(&stack0xfffffffffffffff8 + lVar9) != lVar11) &&
                (lVar11 = *(longlong *)(&stack0xfffffffffffffff8 + lVar9) + 0x28, lVar11 != 0)) {
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409783;
                iVar8 = FUN_1404111e0(local_4f8,lVar11,1);
                if (iVar8 != 0) {
                    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x14040979a;
                    uVar15 = FUN_14040fc60(local_e78,local_4f8);
                    pwVar16 = L"uItem";
                    goto LAB_1404097a1;
                }
            }
        LAB_1404097e5:
            if (local_4f8[0] != (longlong *)0x0) {
                pcVar4 = *(code **)(*local_4f8[0] + 8);
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x1404097f7;
                (*pcVar4)();
                LAB_1404097f9:
                local_4f8[0] = (longlong *)0x0;
            }
        LAB_140409800:
            if (local_1f8 != 0) {
                *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409813;
                FUN_14018b900(local_1f8,0);
            }
    }
    *(undefined8 *)((longlong)&uStack48 + lVar9) = 0x140409824;
    FUN_1407db4f0(local_38 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar9));
    return;
}



void FUN_140409860(undefined8 param_1,longlong param_2,undefined *param_3,int param_4,int param_5,
                   int param_6)

{
    longlong *plVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    undefined *puVar9;
    longlong lVar10;
    undefined local_38 [8];
    longlong local_30;

    lVar10 = *(longlong *)(param_2 + 0x10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar10 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    lVar5 = FUN_14018f0e0(local_38,L"bAlien");
    lVar7 = -1;
    if (*(longlong *)(lVar5 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar8) != '\0');
        FUN_140058710(lVar10);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar3 = *(uint **)(lVar10 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(param_4 != 0);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar10,0xfffffffd);
    FUN_14005ea50(lVar10,uVar6,*(longlong *)(lVar10 + 0x10) + -0x20,
                  *(longlong *)(lVar10 + 0x10) + -0x10);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar10 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    lVar5 = FUN_14018f0e0(local_38,L"bRolePlay");
    if (*(longlong *)(lVar5 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar8) != '\0');
        FUN_140058710(lVar10);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar3 = *(uint **)(lVar10 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(param_6 != 0);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar10,0xfffffffd);
    FUN_14005ea50(lVar10,uVar6,*(longlong *)(lVar10 + 0x10) + -0x20,
                  *(longlong *)(lVar10 + 0x10) + -0x10);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar10 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    lVar5 = FUN_14018f0e0(local_38,L"bProfanity");
    lVar5 = *(longlong *)(lVar5 + 8);
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    }
    else {
        do {
            lVar7 = lVar7 + 1;
        } while (*(char *)(lVar5 + lVar7) != '\0');
        FUN_140058710(lVar10,lVar5,lVar7);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar3 = *(uint **)(lVar10 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(param_5 != 0);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar10,0xfffffffd);
    FUN_14005ea50(lVar10,uVar6,*(longlong *)(lVar10 + 0x10) + -0x20,
                  *(longlong *)(lVar10 + 0x10) + -0x10);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar10 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    puVar9 = &DAT_1409e87ec;
    if (param_3 != (undefined *)0x0) {
        puVar9 = param_3;
    }
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strText",puVar9);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



longlong FUN_14040aa40(longlong param_1,int *param_2)

{
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    undefined2 *puVar4;
    undefined8 uVar5;
    int iVar6;
    short *psVar7;
    undefined *puVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined2 *puVar12;
    longlong local_res8;
    ulonglong in_stack_ffffffffffffff90;
    undefined local_68 [8];
    longlong local_60;
    undefined2 *local_58;
    longlong local_50;
    undefined local_48 [8];
    longlong local_40;

    uVar5 = DAT_140c658a0;
    lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar3 == 0) {
        return 1;
    }
    local_res8 = param_1;
    psVar7 = (short *)FUN_14034bdd0(param_1,0x97079);
    lVar10 = 0;
    local_60 = 0;
    local_50 = 0;
    sVar2 = *psVar7;
    lVar9 = lVar10;
    while (sVar2 != 0) {
        lVar9 = lVar9 + 1;
        sVar2 = psVar7[lVar9];
    }
    lVar9 = lVar9 * 2 >> 1;
    uVar1 = lVar9 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar11 = uVar1 * 2;
        local_60 = FUN_14018b280(lVar11,0);
        local_50 = lVar11 + local_60;
    }
    lVar11 = local_60;
    lVar9 = lVar9 * 2;
    FUN_1407db590(local_60,psVar7,lVar9);
    local_58 = (undefined2 *)(lVar9 + lVar11);
    if (local_58 != (undefined2 *)0x0) {
        *local_58 = 0;
    }
    if ((*param_2 == *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1a0)) &&
        (*(longlong *)(param_2 + 2) == *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1a8))) {
        puVar4 = *(undefined2 **)(lVar3 + 0x10);
        puVar12 = &DAT_140b7b704;
        if (puVar4 != (undefined2 *)0x0) {
            puVar12 = puVar4;
        }
    }
    else {
        lVar3 = *(longlong *)(DAT_140c65898 + 0x6c50);
        if ((lVar3 == 0) ||
            ((iVar6 = FUN_14079ee60(lVar3,param_2,&local_res8), iVar6 == 0 ||
                                                                (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x58) + local_res8 * 8), lVar3 == 0)))) {
            lVar10 = 1;
            goto LAB_14040ac1f;
        }
        puVar12 = (undefined2 *)(lVar3 + 0x20);
    }
    puVar8 = (undefined *)
            FUN_14018efa0(local_48,lVar11,puVar12,param_2[6],param_2[4],
                          in_stack_ffffffffffffff90 & 0xffffffff00000000 |
                          (ulonglong)(uint)param_2[5]);
    if (puVar8 != local_68) {
        FUN_14001c480(local_68,*(undefined8 *)(puVar8 + 8),*(undefined8 *)(puVar8 + 0x10));
        lVar11 = local_60;
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_140003890(uVar5,2,0,lVar11,0,0);
    LAB_14040ac1f:
    if (lVar11 != 0) {
        FUN_14018b900(lVar11,0);
    }
    return lVar10;
}



void FUN_14040ac60(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;

    plVar1 = *(longlong **)(param_1 + 0x58);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x70))
                (plVar1,*(undefined8 *)(param_1 + 0x68),
                 *(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68),0,0);
        lVar2 = *(longlong *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_1 + 0x68);
        if (lVar3 != lVar2) {
            FUN_1407db590(lVar3,lVar2,1);
            *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + (lVar3 - lVar2);
        }
    }
    if (*(longlong *)(param_1 + 0x90) == 0) {
        return;
    }
    FUN_140195d70(param_1 + 0x80);
    return;
}



void FUN_14040acf0(longlong param_1,longlong param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x100);
    if (uVar1 != 0) {
        do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xf8) + uVar2 * 8) == param_2) {
                *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + uVar2 * 8) = 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
    }
    if (param_2 == 0) {
        return;
    }
    FUN_140401490(param_2);
    FUN_14018b900(param_2,0);
    return;
}



int FUN_14040ad50(void)

{
    int iVar1;
    longlong lVar2;

    if (DAT_140c658a0 != 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x110,0);
    if (lVar2 == 0) {
        DAT_140c658a0 = 0;
    }
    else {
        DAT_140c658a0 = FUN_140402ba0(lVar2);
    }
    iVar1 = FUN_140404ee0();
    lVar2 = DAT_140c658a0;
    if (iVar1 < 0) {
        if (DAT_140c658a0 != 0) {
            FUN_140402cf0(DAT_140c658a0);
            FUN_14018b900(lVar2,0);
        }
        DAT_140c658a0 = 0;
        return iVar1;
    }
    return 0;
}



void FUN_14040adf0(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong *puVar4;

    if (*param_1 == param_1[1]) {
        FUN_1400290d0();
    }
    uVar3 = (*(code *)param_1[3])(param_2);
    ppuVar1 = (ulonglong **)(param_1[2] + (uVar3 % (ulonglong)param_1[1]) * 8);
    puVar4 = (ulonglong *)FUN_14018b280(0x20);
    if (puVar4 == (ulonglong *)0x0) {
        *ppuVar1 = (ulonglong *)0x0;
    }
    else {
        puVar2 = *ppuVar1;
        *puVar4 = uVar3;
        puVar4[1] = (ulonglong)puVar2;
        puVar4[2] = *param_2;
        puVar4[3] = *param_3;
        *ppuVar1 = puVar4;
    }
    *param_1 = *param_1 + 1;
    return;
}



void FUN_14040ae90(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1,param_2,0x68);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] * 0x68);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_14040af10(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_2 <= (ulonglong)param_1[1] && param_1[1] != param_2) {
        param_1[1] = param_2;
    }
    lVar2 = FUN_14018dbc0(*param_1,param_2,0x68);
    if (*param_1 != lVar2) {
        FUN_1407db590(lVar2,*param_1,param_1[1] * 0x68);
        lVar1 = *param_1;
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *param_1 = lVar2;
    }
    return;
}



longlong FUN_14040af80(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar1 = lVar2 + 1;
    lVar4 = FUN_14018db00(*param_1,lVar1,0x68);
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0x68);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar1;
    return lVar2;
}



void FUN_14040b000(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    uVar4 = uVar3;
    if (param_1[1] != 0) {
        do {
            lVar1 = *param_1;
            lVar2 = *(longlong *)(lVar1 + 0x28 + uVar4);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            lVar1 = *(longlong *)(lVar1 + 0x20 + uVar4);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 + 0x30;
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x00014040b092. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



void FUN_14040b0a0(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;

    if (param_2 < (ulonglong)param_1[1]) {
        if ((ulonglong)param_1[1] <= param_2) {
            param_1[1] = param_2;
            return;
        }
        lVar6 = param_2 * 0x30;
        uVar4 = param_2;
        do {
            lVar2 = *param_1;
            lVar1 = *(longlong *)(lVar2 + 0x28 + lVar6);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            lVar2 = *(longlong *)(lVar2 + 0x20 + lVar6);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 0x30;
        } while (uVar4 < (ulonglong)param_1[1]);
    }
    else {
        lVar6 = FUN_14018db00(*param_1,param_2,0x30);
        uVar5 = 0;
        uVar4 = param_1[1];
        if (uVar4 < param_2) {
            puVar3 = (undefined4 *)(uVar4 * 0x30 + 8 + lVar6);
            lVar2 = param_2 - uVar4;
            do {
                if (puVar3 != (undefined4 *)&DAT_00000008) {
                    *puVar3 = 0;
                    *(undefined8 *)(puVar3 + 2) = 0;
                    *(undefined8 *)(puVar3 + 6) = 0;
                    *(undefined8 *)(puVar3 + 8) = 0;
                }
                puVar3 = puVar3 + 0xc;
                lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
        }
        if (*param_1 != lVar6) {
            uVar4 = uVar5;
            if (param_1[1] != 0) {
                do {
                    if (uVar5 + lVar6 != 0) {
                        FUN_14040b570(uVar5 + lVar6,*param_1 + uVar5);
                    }
                    lVar2 = *param_1;
                    lVar1 = *(longlong *)(lVar2 + 0x28 + uVar5);
                    if (lVar1 != 0) {
                        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                    }
                    lVar2 = *(longlong *)(lVar2 + 0x20 + uVar5);
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    uVar4 = uVar4 + 1;
                    uVar5 = uVar5 + 0x30;
                } while (uVar4 < (ulonglong)param_1[1]);
            }
            lVar2 = *param_1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *param_1 = lVar6;
        }
    }
    param_1[1] = param_2;
    return;
}
