//
// Created by flop on 05.04.22.
//



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_140500010(undefined8 param_1,float param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    float fVar4;
    float fVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined auStack280 [32];
    undefined local_f8 [8];
    undefined8 uStack240;
    undefined local_e8 [16];
    float *local_d8 [10];
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    if ((*(longlong **)(param_3 + 0x918) != (longlong *)0x0) &&
        (iVar1 = (**(code **)(**(longlong **)(param_3 + 0x918) + 0x18))(), 0 < iVar1)) {
        (**(code **)(**(longlong **)(param_3 + 0x918) + 0x70))();
    }
    fVar11 = DAT_140c3d7d8;
    *(undefined4 *)(param_3 + 0x8e0) = 1;
    local_d8[0] = (float *)(param_3 + 0x440);
    local_e8 = ZEXT1216(CONCAT48(0x403851eb,0x3ed9999800000000));
    _local_f8 = CONCAT48(0x4104b5dc,0x3e38f5c000000000);
    _local_f8 = ZEXT1216(_local_f8);
    lVar2 = 1;
    if (local_f8._4_4_ < 8.294399) {
        lVar2 = 2;
    }
    auVar6 = ZEXT416((uint)(*(float *)(local_e8 + lVar2 * -4 + -4) + 0.0)) &
             (undefined  [16])0xffffffffffffffff;
    fVar4 = SUB164(auVar6,0) + *(float *)(local_f8 + lVar2 * 4);
    auVar6 = CONCAT124(SUB1612(auVar6 >> 0x20,0),fVar4);
    if (fVar4 <= fVar11) {
        local_f8._0_4_ = 0.0;
        fVar12 = 0.0;
        uStack240._4_4_ = 0.0;
        uStack240._0_4_ = 0.0;
        fVar13 = 0.0;
        fVar4 = 0.0;
        fVar10 = (float)uStack240;
    }
    else {
        auVar6 = sqrtps(auVar6,auVar6);
        fVar10 = 1.0 / SUB164(auVar6,0);
        fVar4 = fVar10 * 0.0;
        fVar13 = fVar10 * 0.425;
        _local_f8 = CONCAT48(fVar10 * local_e8._8_4_,0x3e38f5c000000000);
        _local_f8 = CONCAT124(_local_f8 >> 0x20,fVar4) & (undefined  [16])0xffffffffffffffff;
        fVar10 = fVar10 * local_e8._8_4_;
        fVar12 = (float)uStack240;
    }
    fVar7 = fRam0000000140c77874 * 0.0 - fVar13 * fRam0000000140c77878;
    fVar8 = local_f8._0_4_ * 0.0 - _DAT_140c77870 * 0.0;
    uStack240._0_4_ = fVar13 * _DAT_140c77870 - local_f8._0_4_ * fRam0000000140c77874;
    fVar9 = uStack240._4_4_ * fRam0000000140c7787c - uStack240._4_4_ * fRam0000000140c7787c;
    local_e8 = CONCAT412(fVar9,CONCAT48((float)uStack240,CONCAT44(fVar8,fVar7)));
    fVar9 = fVar9 * fVar9;
    _local_f8 = CONCAT412(fVar9,CONCAT48((float)uStack240 * (float)uStack240,
                                         CONCAT44(fVar8 * fVar8,fVar7 * fVar7)));
    uVar3 = (ulonglong)(fVar7 * fVar7 < fVar8 * fVar8);
    lVar2 = 1 - uVar3;
    if (*(float *)(local_f8 + uVar3 * 4) <= 0.0 && *(float *)(local_f8 + uVar3 * 4) != 0.0) {
        uVar3 = 2;
    }
    auVar6 = ZEXT416((uint)(*(float *)(local_e8 + (lVar2 + uVar3) * -4 + -4) +
                            *(float *)(local_f8 + lVar2 * 4))) & (undefined  [16])0xffffffffffffffff;
    fVar5 = SUB164(auVar6,0) + *(float *)(local_f8 + uVar3 * 4);
    auVar6 = CONCAT124(SUB1612(auVar6 >> 0x20,0),fVar5);
    if (fVar5 <= fVar11) {
        fVar9 = 0.0;
        uStack240._0_4_ = 0.0;
        fVar8 = 0.0;
        fVar7 = 0.0;
    }
    else {
        auVar6 = sqrtps(auVar6,auVar6);
        fVar11 = 1.0 / SUB164(auVar6,0);
        fVar7 = fVar7 * fVar11;
        fVar8 = fVar8 * fVar11;
        uStack240._0_4_ = (float)uStack240 * fVar11;
    }
    *local_d8[0] = fVar7;
    *(float *)(param_3 + 0x448) = fVar4;
    *(float *)(param_3 + 0x450) = fVar8;
    *(undefined4 *)(param_3 + 0x44c) = 0;
    *(undefined4 *)(param_3 + 0x45c) = 0;
    *(undefined4 *)(param_3 + 0x46c) = 0;
    *(float *)(param_3 + 0x458) = fVar13;
    *(float *)(param_3 + 0x460) = (float)uStack240;
    *(float *)(param_3 + 0x468) = fVar10;
    fVar11 = fVar13 * 0.0 - fVar8 * fVar12;
    fVar4 = fVar7 * fVar12 - local_f8._0_4_ * 0.0;
    fVar10 = fVar8 * local_f8._0_4_ - fVar7 * fVar13;
    *(float *)(param_3 + 0x444) = fVar11;
    _local_f8 = CONCAT412(fVar9 * 0.0,
                          CONCAT48((float)uStack240 * 2.88,CONCAT44(fVar8 * 1.44,fVar7 * 0.0)));
    *(float *)(param_3 + 0x454) = fVar4;
    fVar11 = fVar11 * 0.0;
    fVar4 = fVar4 * 1.44;
    *(float *)(param_3 + 0x464) = fVar10;
    uVar3 = (ulonglong)(fVar7 * 0.0 < fVar8 * 1.44);
    lVar2 = 1 - uVar3;
    if (*(float *)(local_f8 + uVar3 * 4) <= 0.0 && *(float *)(local_f8 + uVar3 * 4) != 0.0) {
        uVar3 = 2;
    }
    _local_f8 = CONCAT412((fVar9 * uStack240._4_4_ - fVar9 * uStack240._4_4_) * 0.0,
                          CONCAT48(fVar10 * 2.88,CONCAT44(fVar4,fVar11)));
    *(uint *)(param_3 + 0x470) =
            (uint)(*(float *)(local_e8 + (lVar2 + uVar3) * -4 + -4) + *(float *)(local_f8 + lVar2 * 4) +
                   *(float *)(local_f8 + uVar3 * 4)) ^ 0x80000000;
    uVar3 = (ulonglong)(fVar11 < fVar4);
    lVar2 = 1 - uVar3;
    if (*(float *)(local_f8 + uVar3 * 4) <= 0.0 && *(float *)(local_f8 + uVar3 * 4) != 0.0) {
        uVar3 = 2;
    }
    _local_f8 = CONCAT412(uStack240._4_4_ * 0.0,
                          CONCAT48(fVar12 * 2.88,CONCAT44(fVar13 * 1.44,local_f8._0_4_ * 0.0)));
    *(uint *)(param_3 + 0x474) =
            (uint)(*(float *)(local_e8 + (lVar2 + uVar3) * -4 + -4) + *(float *)(local_f8 + lVar2 * 4) +
                   *(float *)(local_f8 + uVar3 * 4)) ^ 0x80000000;
    uVar3 = (ulonglong)(local_f8._0_4_ * 0.0 < fVar13 * 1.44);
    lVar2 = 1 - uVar3;
    if (*(float *)(local_f8 + uVar3 * 4) <= 0.0 && *(float *)(local_f8 + uVar3 * 4) != 0.0) {
        uVar3 = 2;
    }
    *(undefined4 *)(param_3 + 0x47c) = 0x3f800000;
    *(uint *)(param_3 + 0x478) =
            (uint)(*(float *)(local_e8 + (lVar2 + uVar3) * -4 + -4) + *(float *)(local_f8 + lVar2 * 4) +
                   *(float *)(local_f8 + uVar3 * 4)) ^ 0x80000000;
    FUN_1401afc20(local_d8,param_3 + 0x480);
    _local_f8 = CONCAT88(uStack240,0x42c800003f800000);
    *(undefined8 *)(param_3 + 0x4c0) = 0x42c800003f800000;
    FUN_1408fc950();
    fVar11 = extraout_XMM0_Da;
    FUN_1408fe3d0();
    *(undefined8 *)(param_3 + 0x4d4) = 0;
    *(undefined8 *)(param_3 + 0x4dc) = 0;
    *(undefined8 *)(param_3 + 0x4e8) = 0;
    *(undefined8 *)(param_3 + 0x4f0) = 0;
    *(float *)(param_3 + 0x4e4) = fVar11 / extraout_XMM0_Da_00;
    *(float *)(param_3 + 0x4d0) = (fVar11 / extraout_XMM0_Da_00) / param_2;
    *(undefined4 *)(param_3 + 0x4fc) = 0xbf800000;
    *(undefined8 *)(param_3 + 0x500) = 0;
    fVar11 = *(float *)(param_3 + 0x4c4) / (*(float *)(param_3 + 0x4c0) - *(float *)(param_3 + 0x4c4))
            ;
    *(float *)(param_3 + 0x4f8) = fVar11;
    *(undefined4 *)(param_3 + 0x50c) = 0;
    *(float *)(param_3 + 0x508) = fVar11 * *(float *)(param_3 + 0x4c0);
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack280);
    return;
}



longlong FUN_140500510(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    longlong lVar5;

    lVar5 = *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 3;
    if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
        lVar5 = lVar5 * 8;
        lVar2 = FUN_14018b280(lVar5,0);
        *(longlong *)(param_1 + 8) = lVar2;
        *(longlong *)(param_1 + 0x10) = lVar2;
        *(longlong *)(param_1 + 0x18) = lVar2 + lVar5;
    }
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    puVar3 = *(undefined8 **)(param_1 + 8);
    for (puVar4 = *(undefined8 **)(param_2 + 8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = *puVar4;
        }
        puVar3 = puVar3 + 1;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    return param_1;
}



undefined8 FUN_1405005b0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
            while (lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                iVar3 = FUN_1404f4b50(lVar2 + 0x18,0);
                lVar2 = lVar1;
                if (iVar3 == 0) {
                    return 0;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



longlong FUN_140500630(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined *puVar3;
    undefined8 uVar4;

    puVar3 = (undefined *)FUN_14018b280();
    *(undefined **)(param_1 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
    *puVar3 = 0;
    if (lVar1 == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    }
    else {
        lVar1 = *(longlong *)(param_1 + 8);
        uVar4 = FUN_140500770(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar4;
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
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    return param_1;
}



undefined8 FUN_140500700(undefined8 param_1,uint param_2,uint param_3)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63600 + 0x58) != 0) {
        lVar2 = *(longlong *)(DAT_140c63600 + 0x50);
        uVar5 = *(ulonglong *)(DAT_140c63600 + 0x58);
        do {
            uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
            uVar1 = *(uint *)(lVar2 + uVar3 * 0x10);
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) {
                    uVar1 = *(uint *)(lVar2 + 4 + uVar3 * 0x10);
                    if (param_3 < uVar1) goto LAB_140500750;
                    if (param_3 <= uVar1) {
                        return *(undefined8 *)(lVar2 + 8 + uVar3 * 0x10);
                    }
                }
                uVar4 = uVar3 + 1;
                uVar3 = uVar5;
            }
            LAB_140500750:
            uVar5 = uVar3;
        } while (uVar4 < uVar3);
    }
    return 0;
}



undefined * FUN_140500770(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
    undefined uVar1;
    undefined *puVar2;
    undefined8 uVar3;
    undefined *puVar4;
    undefined *puVar5;
    undefined *puVar6;

    puVar2 = (undefined *)FUN_14018b280(0x48);
    if ((undefined4 *)(puVar2 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        FUN_140030c70(puVar2 + 0x28,param_2 + 0x28);
    }
    uVar1 = *param_2;
    *(undefined8 *)(puVar2 + 8) = param_3;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *puVar2 = uVar1;
    if (*(longlong *)(param_2 + 0x18) != 0) {
        uVar3 = FUN_140500770(param_1,*(longlong *)(param_2 + 0x18),puVar2);
        *(undefined8 *)(puVar2 + 0x18) = uVar3;
    }
    puVar6 = *(undefined **)(param_2 + 0x10);
    puVar5 = puVar2;
    if (puVar6 == (undefined *)0x0) {
        return puVar2;
    }
    do {
        puVar4 = (undefined *)FUN_14018b280(0x48);
        if ((undefined4 *)(puVar4 + 0x20) != (undefined4 *)0x0) {
            *(undefined4 *)(puVar4 + 0x20) = *(undefined4 *)(puVar6 + 0x20);
            FUN_140030c70(puVar4 + 0x28,puVar6 + 0x28);
        }
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x18) = 0;
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(undefined **)(puVar4 + 8) = puVar5;
        if (*(longlong *)(puVar6 + 0x18) != 0) {
            uVar3 = FUN_140500770(param_1,*(longlong *)(puVar6 + 0x18),puVar4);
            *(undefined8 *)(puVar4 + 0x18) = uVar3;
        }
        puVar6 = *(undefined **)(puVar6 + 0x10);
        puVar5 = puVar4;
    } while (puVar6 != (undefined *)0x0);
    return puVar2;
}



longlong FUN_140500890(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    if (param_2 != param_1) {
        puVar1 = *(undefined8 **)(param_1 + 8);
        puVar6 = *(undefined8 **)(param_2 + 8);
        puVar3 = *(undefined8 **)(param_2 + 0x10);
        uVar7 = (longlong)puVar3 - (longlong)puVar6 >> 3;
        if ((ulonglong)(*(longlong *)(param_1 + 0x18) - (longlong)puVar1 >> 3) < uVar7) {
            lVar2 = FUN_14018b280(uVar7 * 8,0);
            if (puVar6 != puVar3) {
                lVar4 = lVar2 - (longlong)puVar6;
                do {
                    puVar1 = (undefined8 *)(lVar4 + (longlong)puVar6);
                    if (puVar1 != (undefined8 *)0x0) {
                        *puVar1 = *puVar6;
                    }
                    puVar6 = puVar6 + 1;
                } while (puVar6 != puVar3);
            }
            if (*(longlong *)(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong *)(param_1 + 8),0);
            }
            *(longlong *)(param_1 + 8) = lVar2;
            *(ulonglong *)(param_1 + 0x18) = uVar7 * 8 + lVar2;
        }
        else {
            uVar5 = *(longlong *)(param_1 + 0x10) - (longlong)puVar1 >> 3;
            if (uVar5 < uVar7) {
                lVar2 = (longlong)(uVar5 * 8) >> 3;
                if (0 < lVar2) {
                    puVar3 = puVar1;
                    do {
                        lVar2 = lVar2 + -1;
                        *puVar3 = *(undefined8 *)(((longlong)puVar6 - (longlong)puVar1) + (longlong)puVar3);
                        puVar3 = puVar3 + 1;
                    } while (0 < lVar2);
                }
                puVar1 = *(undefined8 **)(param_2 + 0x10);
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                for (puVar6 = (undefined8 *)
                        (*(longlong *)(param_2 + 8) +
                         ((longlong)puVar3 - *(longlong *)(param_1 + 8) >> 3) * 8); puVar6 != puVar1;
                     puVar6 = puVar6 + 1) {
                    if (puVar3 != (undefined8 *)0x0) {
                        *puVar3 = *puVar6;
                    }
                    puVar3 = puVar3 + 1;
                }
            }
            else {
                for (lVar2 = (longlong)puVar3 - (longlong)puVar6 >> 3; 0 < lVar2; lVar2 = lVar2 + -1) {
                    *puVar1 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar1 = puVar1 + 1;
                }
            }
        }
        *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + uVar7 * 8;
    }
    return param_1;
}



undefined8 FUN_140501210(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Money",10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



void FUN_140501380(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    int iVar9;
    undefined auStack696 [32];
    undefined local_298 [8];
    longlong local_290;
    longlong local_288;
    undefined local_278 [8];
    longlong local_270;
    longlong local_268;
    undefined8 *local_258;
    longlong *local_250;
    longlong local_248;
    undefined local_240 [8];
    longlong local_238;
    longlong local_230;
    undefined local_220 [8];
    longlong local_218;
    undefined8 local_200;
    longlong local_1f8;
    undefined8 local_1f0;
    undefined8 local_1e8;
    undefined8 local_1e0;
    undefined8 local_1d8;
    undefined **local_1c8 [50];
    ulonglong local_38;
    longlong local_30;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack696;
    local_258 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Money");
    plVar2 = (longlong *)FUN_14012aaf0();
    puVar8 = (undefined8 *)0x0;
    puVar6 = puVar8;
    if (*(undefined8 **)(DAT_140c63650 + 0x300) != (undefined8 *)0x0) {
        puVar3 = puVar8;
        do {
            if (*(longlong *)
                    (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar3 * 8) + 400) ==
                param_1) {
                puVar6 = *(undefined8 **)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar3 * 8);
                break;
            }
            puVar3 = (undefined8 *)(ulonglong)((int)puVar3 + 1);
        } while (puVar3 < *(undefined8 **)(DAT_140c63650 + 0x300));
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar3) || (puVar3 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0)) {
        lVar7 = puVar6[0x32];
        lVar4 = FUN_14018f0e0(local_278,&DAT_1409f0f4c);
        uVar5 = *(undefined8 *)(lVar4 + 8);
        iVar9 = 3;
        puVar3 = (undefined8 *)(*(longlong *)(lVar7 + 0x18) + 0x20);
        if (((puVar3 < *(undefined8 **)(lVar7 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(lVar7 + 0x18) + 0x28))) {
            uVar5 = FUN_140056bb0(lVar7,3,0);
        }
        FUN_14018f2d0(local_220,uVar5);
        if (local_270 != 0) {
            FUN_14018b900(local_270,0);
        }
        lVar7 = puVar6[0x32];
        lVar4 = FUN_14018f0e0(local_278,L"FFFFFFFF");
        uVar5 = *(undefined8 *)(lVar4 + 8);
        puVar3 = (undefined8 *)(*(longlong *)(lVar7 + 0x18) + 0x30);
        if (((puVar3 < *(undefined8 **)(lVar7 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(lVar7 + 0x18) + 0x38))) {
            uVar5 = FUN_140056bb0(lVar7,4);
        }
        FUN_14018f2d0(local_298,uVar5);
        if (local_270 != 0) {
            FUN_14018b900(local_270,0);
        }
        lVar7 = puVar6[0x32];
        lVar4 = FUN_14018f0e0(local_278,L"Default");
        uVar5 = *(undefined8 *)(lVar4 + 8);
        puVar3 = (undefined8 *)(*(longlong *)(lVar7 + 0x18) + 0x40);
        if (((puVar3 < *(undefined8 **)(lVar7 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(lVar7 + 0x18) + 0x48))) {
            uVar5 = FUN_140056bb0(lVar7,5);
        }
        FUN_14018f2d0(local_240,uVar5);
        if (local_270 != 0) {
            FUN_14018b900(local_270,0);
        }
        lVar7 = puVar6[0x32];
        lVar4 = FUN_14018f0e0(&local_200,L"Left");
        uVar5 = *(undefined8 *)(lVar4 + 8);
        puVar6 = (undefined8 *)(*(longlong *)(lVar7 + 0x18) + 0x50);
        if (((puVar6 < *(undefined8 **)(lVar7 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(lVar7 + 0x18) + 0x58))) {
            uVar5 = FUN_140056bb0(lVar7,6);
        }
        FUN_14018f2d0(local_278,uVar5);
        if (local_1f8 != 0) {
            FUN_14018b900(local_1f8,0);
        }
        lVar7 = (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar1 = (longlong *)(lVar7 + 0x80);
        puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = lVar7;
            puVar6[2] = 0;
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            *puVar6 = &PTR_FUN_140b5eba0;
            *(undefined4 *)(puVar6 + 0xb) = 0;
            puVar6[0xc] = 0;
            puVar8 = puVar6;
        }
        puVar8[10] = plVar1;
        FUN_1401a4c50(puVar8 + 3,&DAT_1409db474);
        lVar7 = local_290;
        if ((local_288 - local_290 & 0xfffffffffffffffeU) != 0) {
            lVar4 = FUN_1401a6c70(puVar8,L"TextColor");
            FUN_1401a4c50(lVar4 + 0x20,local_290);
        }
        if ((local_230 - local_238 & 0xfffffffffffffffeU) != 0) {
            lVar4 = FUN_1401a6c70(puVar8,&DAT_140a31aa8);
            FUN_1401a4c50(lVar4 + 0x20,local_238);
        }
        if ((local_268 - local_270 & 0xfffffffffffffffeU) != 0) {
            lVar4 = FUN_1401a6c70(puVar8,L"Align");
            FUN_1401a4c50(lVar4 + 0x20,local_270);
        }
        local_248 = (**(code **)(*plVar2 + 0x10))(plVar2);
        local_250 = (longlong *)(local_248 + 0x80);
        puVar6 = (undefined8 *)(**(code **)(*local_250 + 0x10))(local_250);
        if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
        }
        else {
            puVar6[1] = local_248;
            puVar6[2] = 0;
            *(undefined4 *)(puVar6 + 3) = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
            puVar6[10] = 0;
            *puVar6 = &PTR_FUN_140b5eba0;
            *(undefined4 *)(puVar6 + 0xb) = 0;
            puVar6[0xc] = 0;
        }
        puVar6[10] = local_250;
        FUN_1401a4c50(puVar6 + 3,&DAT_140a31d20);
        uVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar5 = FUN_1401a7880(uVar5,local_218);
        FUN_1401a5a70(puVar6,uVar5);
        FUN_1401a5a70(puVar8);
        FUN_140503450(local_1c8);
        local_200 = *local_258;
        local_288 = 0;
        local_1e8 = 0;
        local_1f8 = local_258[1];
        local_1d8 = 0;
        local_1f0 = local_258[2];
        local_290 = 1;
        local_1e0 = 1;
        FUN_1405042b0(local_1c8,puVar8,&local_200);
        FUN_14012b490(plVar2,puVar8);
        plVar2 = &local_30;
        local_1c8[0] = &PTR_LAB_140b6a420;
        do {
            plVar1 = plVar2 + -6;
            plVar2 = plVar2 + -0xb;
            if (*plVar1 != 0) {
                FUN_14018b900(*plVar1,0);
            }
            if (*plVar2 != 0) {
                FUN_14018b900(*plVar2,0);
            }
            iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        if (local_270 != 0) {
            FUN_14018b900(local_270,0);
        }
        if (local_238 != 0) {
            FUN_14018b900(local_238,0);
        }
        if (lVar7 != 0) {
            FUN_14018b900(lVar7,0);
        }
        if (local_218 != 0) {
            FUN_14018b900(local_218,0);
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack696);
    return;
}



void FUN_1405018b0(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    int iVar7;
    undefined auStack536 [40];
    undefined8 local_1f0;
    undefined8 local_1e8;
    undefined8 local_1e0;
    undefined8 local_1d8;
    undefined8 local_1d0;
    undefined8 local_1c8;
    undefined8 local_1c0;
    undefined8 local_1b8;
    undefined **local_1a8 [50];
    ulonglong local_18;
    longlong local_10;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack536;
    puVar2 = (undefined8 *)FUN_140056ab0(param_1,1);
    uVar3 = FUN_14012aaf0(param_1,2);
    uVar6 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) break;
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar4 = FUN_14012b2b0(uVar3,param_1);
    if (lVar4 != 0) {
        FUN_140503450(local_1a8);
        local_1e0 = *puVar2;
        local_1f0 = 1;
        local_1d8 = puVar2[1];
        local_1d0 = puVar2[2];
        local_1c0 = 1;
        local_1e8 = 0;
        local_1b8 = 0;
        local_1c8 = 0;
        FUN_1405042b0(local_1a8,lVar4,&local_1e0);
        iVar7 = 3;
        plVar5 = &local_10;
        local_1a8[0] = &PTR_LAB_140b6a420;
        do {
            plVar1 = plVar5 + -6;
            plVar5 = plVar5 + -0xb;
            if (*plVar1 != 0) {
                FUN_14018b900(*plVar1,0);
            }
            if (*plVar5 != 0) {
                FUN_14018b900(*plVar5,0);
            }
            iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack536);
    return;
}



void FUN_140501a20(longlong param_1)

{
    longlong *plVar1;
    byte bVar2;
    undefined2 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    int iVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined auStack504 [32];
    undefined4 local_1d8;
    undefined local_1c8 [8];
    undefined2 *local_1c0;
    undefined2 *local_1b8;
    undefined2 *local_1b0;
    undefined **local_1a8 [50];
    ulonglong local_18;
    longlong local_10;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack504;
    puVar4 = (undefined8 *)FUN_140056ab0(param_1,1,"Game.Money");
    if (puVar4 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        bVar2 = 1;
        if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 1)) {
            puVar7 = &DAT_140a12138;
            if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
                puVar7 = puVar5;
            }
            if ((*(int *)(puVar7 + 1) == 0) || ((*(int *)(puVar7 + 1) == 1 && (*(int *)puVar7 == 0)))) {
                bVar2 = 0;
            }
        }
        local_1c0 = (undefined2 *)FUN_14018b280(0x10);
        local_1b0 = local_1c0 + 8;
        if (local_1c0 != (undefined2 *)0x0) {
            *local_1c0 = 0;
        }
        local_1b8 = local_1c0;
        FUN_140503450(local_1a8);
        local_1d8 = *(undefined4 *)((longlong)puVar4 + 0x14);
        uVar11 = (ulonglong)*(uint *)(puVar4 + 2);
        FUN_140503600(local_1a8,*(undefined4 *)(puVar4 + 1),*(undefined4 *)((longlong)puVar4 + 0xc),
                      uVar11);
        FUN_140505290(local_1a8,local_1c8,*puVar4,uVar11 & 0xffffffffffffff00 | (ulonglong)bVar2);
        puVar3 = local_1c0;
        lVar6 = FUN_14018f0e0(local_1c8,local_1c0);
        if (*(longlong *)(lVar6 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar10) != '\0');
            FUN_140058710(param_1);
        }
        if (local_1c0 != (undefined2 *)0x0) {
            FUN_14018b900(local_1c0,0);
        }
        iVar9 = 3;
        plVar8 = &local_10;
        local_1a8[0] = &PTR_LAB_140b6a420;
        do {
            plVar1 = plVar8 + -6;
            plVar8 = plVar8 + -0xb;
            if (*plVar1 != 0) {
                FUN_14018b900(*plVar1,0);
            }
            if (*plVar8 != 0) {
                FUN_14018b900(*plVar8,0);
            }
            iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        if (puVar3 != (undefined2 *)0x0) {
            FUN_14018b900(puVar3,0);
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack504);
    return;
}



undefined8 FUN_140501c00(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(int *)(lVar1 + 8) == 0xf) {
        if (*(int *)(lVar1 + 0x10) == 0) {
            if (*(int *)(lVar1 + 0xc) == 1) {
                uVar2 = FUN_14034bdd0(0xf,0x8054f);
                lVar1 = FUN_14018f0e0(local_28,uVar2);
                if (*(longlong *)(lVar1 + 8) != 0) {
                    lVar3 = -1;
                    do {
                        lVar3 = lVar3 + 1;
                    } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
                    goto LAB_140501caa;
                }
            }
            else {
                if (*(int *)(lVar1 + 0x14) == 0) goto LAB_140501d54;
                FUN_1405057d0(*(int *)(lVar1 + 0x14));
                uVar2 = FUN_14034bdd0();
                lVar1 = FUN_14018f0e0(local_28,uVar2);
                if (*(longlong *)(lVar1 + 8) != 0) {
                    lVar3 = -1;
                    do {
                        lVar3 = lVar3 + 1;
                    } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
                    goto LAB_140501caa;
                }
            }
        }
        else {
            lVar1 = FUN_1400b5df0(DAT_140c658f0);
            if (lVar1 == 0) goto LAB_140501d93;
            uVar2 = FUN_14034bdd0();
            lVar1 = FUN_14018f0e0(local_28,uVar2);
            if (*(longlong *)(lVar1 + 8) != 0) {
                lVar3 = -1;
                do {
                    lVar3 = lVar3 + 1;
                } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
                goto LAB_140501caa;
            }
        }
    }
    else {
        LAB_140501d54:
        lVar1 = FUN_1401fa4a0();
        if (lVar1 == 0) {
            LAB_140501d93:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        uVar2 = FUN_14034bdd0();
        lVar1 = FUN_14018f0e0(local_28,uVar2);
        if (*(longlong *)(lVar1 + 8) != 0) {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
            LAB_140501caa:
            FUN_140058710(param_1);
            goto LAB_140501cb2;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    LAB_140501cb2:
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_140501db0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0x41dfffffffc00000;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 8);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140501e30(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0x41dfffffffc00000;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140501eb0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar1 + 0x10),0);
    FUN_140415c70(param_1,uVar2);
    return 1;
}



undefined8 FUN_140501f10(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar4 == 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = 0x41dfffffffc00000;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar4 + 0x14);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140501f90(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Money");
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    lVar3 = *plVar4;
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)lVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140502000(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Money");
    if (plVar4 == (longlong *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    lVar3 = *plVar4;
    puVar2[2] = 1;
    *puVar2 = (uint)(lVar3 == 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140502070(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;

    uVar1 = 1;
    lVar2 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar2 == 0) {
        return;
    }
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar1 = FUN_140056d60(param_1,2);
    }
    *(undefined4 *)(lVar2 + 8) = uVar1;
    *(undefined8 *)(lVar2 + 0xc) = 0;
    *(undefined4 *)(lVar2 + 0x14) = 0;
    return;
}



void FUN_140502100(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;

    uVar1 = 1;
    lVar2 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar2 == 0) {
        return;
    }
    *(undefined4 *)(lVar2 + 8) = 0xf;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar1 = FUN_140056d60(param_1,2);
    }
    *(undefined4 *)(lVar2 + 0xc) = uVar1;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140502190(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong *plVar5;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar3 != 0) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 0)) {
            plVar5 = (longlong *)0x0;
        }
        else {
            plVar5 = (longlong *)FUN_140056ab0(param_1,2,"Game.ItemData");
        }
        *(undefined8 *)(lVar3 + 8) = 0xf;
        if (((plVar5 == (longlong *)0x0) || (lVar1 = *plVar5, lVar1 == 0)) ||
            ((*(int *)(lVar1 + 0x4a0) == 0 || (*(longlong *)(lVar1 + 8) == 0)))) {
            uVar2 = 0;
        }
        else {
            uVar2 = _DAT_00000000;
            if (*(int *)(lVar1 + 0x4a0) != 0) {
                uVar2 = **(undefined4 **)(lVar1 + 8);
            }
        }
        *(undefined4 *)(lVar3 + 0x10) = uVar2;
        *(undefined4 *)(lVar3 + 0x14) = 0;
    }
    return 0;
}



undefined8 FUN_140502250(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Money");
    if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 8) = 0xf;
        *(undefined4 *)(lVar2 + 0x10) = 0;
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        uVar1 = 0;
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (uVar1 = 0, puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar1 = FUN_140056d60(param_1,2);
        }
        *(undefined4 *)(lVar2 + 0x14) = uVar1;
    }
    return 0;
}



undefined8 FUN_140502c70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong local_28;
    undefined4 local_20;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Money");
    if (plVar4 == (longlong *)0x0) {
        return 0;
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iVar3 = FUN_140056d60(param_1,2);
    }
    else {
        iVar3 = 1;
    }
    local_28 = *plVar4;
    lVar1 = plVar4[1];
    lVar2 = plVar4[2];
    lVar6 = iVar3 * local_28;
    plVar4 = (longlong *)FUN_140059170(param_1,0x18);
    *plVar4 = lVar6;
    plVar4[1] = lVar1;
    plVar4[2] = lVar2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_140502f90(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Money");
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 8) == 0xf)) && (*(int *)(lVar2 + 0x10) == 0)) &&
        (*(int *)(lVar2 + 0xc) != 0)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140503010(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Money");
    if (((lVar2 != 0) && (*(int *)(lVar2 + 8) == 0xf)) && (*(int *)(lVar2 + 0x10) != 0)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140503080(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Money");
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 8) == 0xf)) && (*(int *)(lVar2 + 0x10) == 0)) &&
        ((*(int *)(lVar2 + 0xc) == 0 && (*(int *)(lVar2 + 0x14) != 0)))) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140503100(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint *puVar4;
    uint uVar5;
    longlong *plVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    bool bVar9;
    bool bVar10;

    plVar6 = (longlong *)FUN_140056ab0(param_1,1);
    uVar7 = 0;
    if (plVar6 == (longlong *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        goto LAB_14050323d;
    }
    iVar1 = *(int *)(plVar6 + 1);
    if (iVar1 == 0xf) {
        if (*(int *)(plVar6 + 2) != 0) {
            uVar5 = FUN_1403ac840(DAT_140c65898 + 0xa0,2);
            bVar10 = SBORROW8((ulonglong)uVar5,*plVar6);
            bVar9 = (longlong)((ulonglong)uVar5 - *plVar6) < 0;
            goto LAB_140503226;
        }
        if (*(int *)((longlong)plVar6 + 0xc) != 1) {
            uVar5 = *(uint *)((longlong)plVar6 + 0x14);
            if (uVar5 == 0) goto LAB_140503207;
            if (uVar5 < 0x13) {
                lVar3 = *(longlong *)
                        (*(longlong *)(DAT_140c635f0 + 0x15d0) + 0xd0 + (longlong)(int)uVar5 * 8);
                bVar10 = SBORROW8(lVar3,*plVar6);
                bVar9 = lVar3 - *plVar6 < 0;
            }
            else {
                bVar10 = false;
                bVar9 = 0 < *plVar6;
            }
            goto LAB_140503226;
        }
        uVar8 = uVar7;
        if (DAT_140c7de20 != 0) {
            if (DAT_140c7de20 == 0) goto LAB_1405031ba;
            do {
                lVar3 = *(longlong *)(DAT_140c7de18 + uVar7 * 8);
                if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == 3)) {
                    bVar10 = SBORROW8((ulonglong)*(uint *)(lVar3 + 0x1f8),*plVar6);
                    bVar9 = (longlong)((ulonglong)*(uint *)(lVar3 + 0x1f8) - *plVar6) < 0;
                    goto LAB_140503226;
                }
                LAB_1405031ba:
                uVar7 = uVar7 + 1;
                uVar8 = 0;
            } while (uVar7 < DAT_140c7de20);
        }
    }
    else {
        LAB_140503207:
        if (iVar1 - 1U < 0xe) {
            uVar7 = *(ulonglong *)(DAT_140c65898 + 0x15f0 + (longlong)iVar1 * 8);
        }
        bVar10 = SBORROW8(uVar7,*plVar6);
        bVar9 = (longlong)(uVar7 - *plVar6) < 0;
        LAB_140503226:
        uVar8 = (ulonglong)(bVar10 == bVar9);
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)((int)uVar8 != 0);
    LAB_14050323d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140503260(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_1405032a3:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.Money",10);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_140503387;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1405032a3;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140503387:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1405033a0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.Money");
    plVar5 = (longlong *)FUN_140056ab0(param_1,2,"Game.Money");
    if ((plVar4 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((((*plVar4 == *plVar5) && (*(int *)(plVar4 + 1) == *(int *)(plVar5 + 1))) &&
             (*(int *)((longlong)plVar4 + 0xc) == *(int *)((longlong)plVar5 + 0xc))) &&
            ((*(int *)(plVar4 + 2) == *(int *)(plVar5 + 2) &&
              (*(int *)((longlong)plVar4 + 0x14) == *(int *)((longlong)plVar5 + 0x14))))) {
            bVar3 = 1;
        }
        else {
            bVar3 = 0;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 * FUN_140503450(undefined8 *param_1)

{
    undefined2 *puVar1;
    undefined8 *puVar2;
    int iVar3;

    iVar3 = 3;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    puVar2 = param_1 + 8;
    *param_1 = &PTR_LAB_140b6a420;
    do {
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar1 = (undefined2 *)FUN_14018b280(0x10);
        puVar2[-1] = puVar1;
        *puVar2 = puVar1;
        puVar2[1] = puVar1 + 8;
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar1 = (undefined2 *)FUN_14018b280(0x10);
        puVar2[4] = puVar1;
        puVar2[5] = puVar1;
        puVar2[6] = puVar1 + 8;
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        puVar2 = puVar2 + 0xb;
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_140503600(param_1,1,0,0,0);
    *(undefined4 *)(param_1 + 4) = DAT_140c46108;
    *(undefined4 *)((longlong)param_1 + 0x24) = DAT_140c4610c;
    return param_1;
}



undefined8 FUN_140503540(undefined8 param_1,ulonglong param_2)

{
    FUN_140503580();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140503580(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = 3;
    *param_1 = &PTR_LAB_140b6a420;
    plVar2 = param_1 + 0x33;
    do {
        plVar1 = plVar2 + -6;
        plVar2 = plVar2 + -0xb;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        if (*plVar2 != 0) {
            FUN_14018b900(*plVar2,0);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    *param_1 = &PTR_LAB_140b55048;
    return;
}



void FUN_140503600(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
    short sVar1;
    longlong lVar2;
    undefined8 uVar3;
    int iVar4;
    short *psVar5;
    short *psVar6;
    longlong lVar7;
    longlong lVar8;
    short *psVar9;
    ulonglong uVar10;
    ulonglong uVar11;

    if (param_2 == 1) {
        lVar8 = 0;
        *(undefined *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x50) = 1;
        *(undefined8 *)(param_1 + 0x78) = 99;
        *(undefined4 *)(param_1 + 0x54) = 3;
        lVar7 = lVar8;
        do {
            lVar2 = lVar7 + 1;
            lVar7 = lVar7 + 1;
        } while (L"sprCashCopper"[lVar2] != L'\0');
        lVar2 = *(longlong *)(param_1 + 0x38);
        uVar11 = *(longlong *)(param_1 + 0x40) - lVar2 >> 1;
        uVar10 = lVar7 * 2 >> 1;
        if (uVar11 < uVar10) {
            FUN_1407db590(lVar2,L"sprCashCopper",uVar11 * 2);
            FUN_14001c310(param_1 + 0x30,
                          L"sprCashCopper" +
                          (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 1),
                          L"sprCashCopper" + lVar7);
        }
        else {
            lVar7 = uVar10 * 2;
            FUN_1407db590(lVar2,L"sprCashCopper",lVar7);
            FUN_14001c2b0(param_1 + 0x30,*(longlong *)(param_1 + 0x38) + lVar7,
                          *(undefined8 *)(param_1 + 0x40));
        }
        psVar5 = (short *)FUN_14034bdd0();
        sVar1 = *psVar5;
        lVar7 = lVar8;
        while (sVar1 != 0) {
            lVar7 = lVar7 + 1;
            sVar1 = psVar5[lVar7];
        }
        FUN_14001c480(param_1 + 0x58,psVar5,psVar5 + lVar7);
        *(undefined *)(param_1 + 0x80) = 1;
        *(undefined8 *)(param_1 + 0xd0) = 99;
        *(undefined4 *)(param_1 + 0xa8) = 100;
        *(undefined4 *)(param_1 + 0xac) = 3;
        lVar7 = lVar8;
        do {
            lVar2 = lVar7 + 1;
            lVar7 = lVar7 + 1;
        } while (L"sprCashSilver"[lVar2] != L'\0');
        lVar2 = *(longlong *)(param_1 + 0x90);
        uVar11 = *(longlong *)(param_1 + 0x98) - lVar2 >> 1;
        uVar10 = lVar7 * 2 >> 1;
        if (uVar11 < uVar10) {
            FUN_1407db590(lVar2,L"sprCashSilver",uVar11 * 2);
            FUN_14001c310(param_1 + 0x88,
                          L"sprCashSilver" +
                          (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 1),
                          L"sprCashSilver" + lVar7);
        }
        else {
            lVar7 = uVar10 * 2;
            FUN_1407db590(lVar2,L"sprCashSilver",lVar7);
            FUN_14001c2b0(param_1 + 0x88,*(longlong *)(param_1 + 0x90) + lVar7,
                          *(undefined8 *)(param_1 + 0x98));
        }
        psVar5 = (short *)FUN_14034bdd0();
        sVar1 = *psVar5;
        lVar7 = lVar8;
        while (sVar1 != 0) {
            lVar7 = lVar7 + 1;
            sVar1 = psVar5[lVar7];
        }
        FUN_14001c480(param_1 + 0xb0,psVar5,psVar5 + lVar7);
        *(undefined *)(param_1 + 0xd8) = 1;
        *(undefined8 *)(param_1 + 0x128) = 99;
        *(undefined4 *)(param_1 + 0x100) = 10000;
        *(undefined4 *)(param_1 + 0x104) = 3;
        lVar7 = lVar8;
        do {
            psVar5 = &DAT_140b0ff52 + lVar7;
            lVar7 = lVar7 + 1;
        } while (*psVar5 != 0);
        lVar2 = *(longlong *)(param_1 + 0xe8);
        uVar11 = *(longlong *)(param_1 + 0xf0) - lVar2 >> 1;
        uVar10 = lVar7 * 2 >> 1;
        if (uVar11 < uVar10) {
            FUN_1407db590(lVar2,&DAT_140b0ff50,uVar11 * 2);
            FUN_14001c310(param_1 + 0xe0,
                          &DAT_140b0ff50 +
                          (*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 1) * 2,
                          &DAT_140b0ff50 + lVar7 * 2);
        }
        else {
            lVar7 = uVar10 * 2;
            FUN_1407db590(lVar2,&DAT_140b0ff50,lVar7);
            FUN_14001c2b0(param_1 + 0xe0,*(longlong *)(param_1 + 0xe8) + lVar7,
                          *(undefined8 *)(param_1 + 0xf0));
        }
        psVar5 = (short *)FUN_14034bdd0();
        sVar1 = *psVar5;
        lVar7 = lVar8;
        while (sVar1 != 0) {
            lVar7 = lVar7 + 1;
            sVar1 = psVar5[lVar7];
        }
        FUN_14001c480(param_1 + 0x108,psVar5,psVar5 + lVar7);
        *(undefined *)(param_1 + 0x130) = 1;
        *(undefined8 *)(param_1 + 0x180) = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x158) = 1000000;
        *(undefined4 *)(param_1 + 0x15c) = 4;
        lVar7 = lVar8;
        do {
            lVar2 = lVar7 + 1;
            lVar7 = lVar7 + 1;
        } while (L"sprCashPlatinum"[lVar2] != L'\0');
        lVar2 = *(longlong *)(param_1 + 0x140);
        uVar11 = *(longlong *)(param_1 + 0x148) - lVar2 >> 1;
        uVar10 = lVar7 * 2 >> 1;
        if (uVar11 < uVar10) {
            FUN_1407db590(lVar2,L"sprCashPlatinum",uVar11 * 2);
            FUN_14001c310(param_1 + 0x138,
                          L"sprCashPlatinum" +
                          (*(longlong *)(param_1 + 0x148) - *(longlong *)(param_1 + 0x140) >> 1),
                          L"sprCashPlatinum" + lVar7);
        }
        else {
            lVar7 = uVar10 * 2;
            FUN_1407db590(lVar2,L"sprCashPlatinum",lVar7);
            FUN_14001c2b0(param_1 + 0x138,*(longlong *)(param_1 + 0x140) + lVar7,
                          *(undefined8 *)(param_1 + 0x148));
        }
        psVar5 = (short *)FUN_14034bdd0();
        sVar1 = *psVar5;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar5[lVar8];
        }
        FUN_14001c480(param_1 + 0x160,psVar5,psVar5 + lVar8);
        goto LAB_140503c62;
    }
    if (param_2 == 0xf) {
        if (param_3 == 1) {
            psVar9 = (short *)0x0;
            *(undefined *)(param_1 + 0x28) = 1;
            *(undefined4 *)(param_1 + 0x50) = 1;
            *(undefined8 *)(param_1 + 0x78) = 0x7fffffff;
            *(undefined4 *)(param_1 + 0x54) = 6;
            psVar5 = psVar9;
            do {
                lVar7 = (longlong)psVar5 + 1;
                psVar5 = (short *)((longlong)psVar5 + 1);
            } while (L"Icon_Windows_UI_CRB_Coin_War"[lVar7] != L'\0');
            lVar7 = *(longlong *)(param_1 + 0x38);
            uVar11 = *(longlong *)(param_1 + 0x40) - lVar7 >> 1;
            uVar10 = (longlong)psVar5 * 2 >> 1;
            if (uVar11 < uVar10) {
                FUN_1407db590(lVar7,L"Icon_Windows_UI_CRB_Coin_War",uVar11 * 2);
                FUN_14001c310(param_1 + 0x30,
                              L"Icon_Windows_UI_CRB_Coin_War" +
                              (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 1),
                              L"Icon_Windows_UI_CRB_Coin_War" + (longlong)psVar5);
            }
            else {
                lVar8 = uVar10 * 2;
                FUN_1407db590(lVar7,L"Icon_Windows_UI_CRB_Coin_War",lVar8);
                FUN_14001c2b0(param_1 + 0x30,*(longlong *)(param_1 + 0x38) + lVar8,
                              *(undefined8 *)(param_1 + 0x40));
            }
            psVar5 = (short *)FUN_14034bdd0();
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                psVar9 = (short *)((longlong)psVar9 + 1);
                sVar1 = psVar5[(longlong)psVar9];
            }
        }
        else if (param_4 == 0) {
            if (param_5 == 0) goto LAB_140503bb0;
            *(undefined *)(param_1 + 0x28) = 1;
            *(undefined8 *)(param_1 + 0x78) = 0x7fffffff;
            *(undefined4 *)(param_1 + 0x50) = 1;
            *(undefined4 *)(param_1 + 0x54) = 6;
            psVar6 = (short *)FUN_140505820(param_5);
            psVar9 = (short *)0x0;
            sVar1 = *psVar6;
            psVar5 = psVar9;
            while (sVar1 != 0) {
                psVar5 = (short *)((longlong)psVar5 + 1);
                sVar1 = psVar6[(longlong)psVar5];
            }
            FUN_14001c480(param_1 + 0x30,psVar6,psVar6 + (longlong)psVar5);
            FUN_1405057d0(param_5);
            psVar5 = (short *)FUN_14034bdd0();
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                psVar9 = (short *)((longlong)psVar9 + 1);
                sVar1 = psVar5[(longlong)psVar9];
            }
        }
        else {
            iVar4 = FUN_140444550(DAT_140c658f0);
            if (iVar4 == 0) {
                return;
            }
            lVar7 = FUN_1402096e0(param_4);
            if (lVar7 == 0) {
                return;
            }
            *(undefined *)(param_1 + 0x28) = 1;
            *(undefined8 *)(param_1 + 0x78) = 0x7fffffff;
            *(undefined4 *)(param_1 + 0x50) = 1;
            *(undefined4 *)(param_1 + 0x54) = 6;
            uVar10 = *(ulonglong *)(lVar7 + 0xc0);
            psVar9 = (short *)0x0;
            psVar5 = psVar9;
            if (uVar10 != 0) {
                if (DAT_140c3fe70 < uVar10) {
                    psVar5 = (short *)0x0;
                }
                else {
                    psVar5 = (short *)(DAT_140c3fe68 + uVar10);
                }
            }
            sVar1 = *psVar5;
            psVar6 = psVar9;
            while (sVar1 != 0) {
                psVar6 = (short *)((longlong)psVar6 + 1);
                sVar1 = psVar5[(longlong)psVar6];
            }
            FUN_14001c480(param_1 + 0x30,psVar5,psVar5 + (longlong)psVar6);
            psVar5 = (short *)FUN_14034bdd0();
            sVar1 = *psVar5;
            while (sVar1 != 0) {
                psVar9 = (short *)((longlong)psVar9 + 1);
                sVar1 = psVar5[(longlong)psVar9];
            }
        }
    }
    else {
        LAB_140503bb0:
        lVar7 = FUN_1401fa4a0(param_2);
        if (lVar7 == 0) {
            return;
        }
        *(undefined *)(param_1 + 0x28) = 1;
        uVar3 = *(undefined8 *)(lVar7 + 0x20);
        *(undefined4 *)(param_1 + 0x50) = 1;
        *(undefined4 *)(param_1 + 0x54) = 6;
        *(undefined8 *)(param_1 + 0x78) = uVar3;
        uVar10 = *(ulonglong *)(lVar7 + 0x18);
        psVar5 = (short *)0x0;
        psVar9 = (short *)0x0;
        psVar6 = psVar5;
        if (uVar10 != 0) {
            if (DAT_140c3fe70 < uVar10) {
                psVar6 = (short *)0x0;
            }
            else {
                psVar6 = (short *)(DAT_140c3fe68 + uVar10);
            }
        }
        sVar1 = *psVar6;
        while (sVar1 != 0) {
            psVar5 = (short *)((longlong)psVar5 + 1);
            sVar1 = psVar6[(longlong)psVar5];
        }
        FUN_14001c480(param_1 + 0x30,psVar6,psVar6 + (longlong)psVar5);
        psVar5 = (short *)FUN_14034bdd0();
        sVar1 = *psVar5;
        while (sVar1 != 0) {
            psVar9 = (short *)((longlong)psVar9 + 1);
            sVar1 = psVar5[(longlong)psVar9];
        }
    }
    FUN_14001c480(param_1 + 0x58,psVar5,psVar5 + (longlong)psVar9);
    *(undefined *)(param_1 + 0x130) = 0;
    *(undefined *)(param_1 + 0xd8) = 0;
    *(undefined *)(param_1 + 0x80) = 0;
    LAB_140503c62:
    *(int *)(param_1 + 0x18) = param_4;
    *(int *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0x14) = param_3;
    *(int *)(param_1 + 0x1c) = param_5;
    return;
}



void FUN_140503ca0(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    undefined *puVar4;
    longlong lVar5;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    if ((*(char *)(param_1 + 0x28) == '\0') ||
        (piVar2 = (int *)(param_1 + 0x50), *(int *)(param_1 + 0x50) != 1)) {
        LAB_140503dd5:
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_res8 = 0x141e0a540;
        puVar4 = &DAT_140c8ad64;
    }
    else {
        lVar5 = 1;
        do {
            if ((*(char *)(piVar2 + 0xc) != '\0') && (piVar2[0x16] == *piVar2 || piVar2[0x16] < *piVar2))
                goto LAB_140503dd5;
            lVar5 = lVar5 + 1;
            piVar2 = piVar2 + 0x16;
        } while (lVar5 < 4);
        if ((*(char *)(param_1 + 0x130) != '\0') && (iVar1 = *(int *)(param_1 + 0x158), 0 < iVar1)) {
            uVar3 = param_2 / (ulonglong)(longlong)iVar1;
            param_2 = param_2 % (ulonglong)(longlong)iVar1;
            param_3[3] = uVar3;
        }
        if ((*(char *)(param_1 + 0xd8) != '\0') && (iVar1 = *(int *)(param_1 + 0x100), 0 < iVar1)) {
            uVar3 = param_2 / (ulonglong)(longlong)iVar1;
            param_2 = param_2 % (ulonglong)(longlong)iVar1;
            param_3[2] = uVar3;
        }
        if ((*(char *)(param_1 + 0x80) != '\0') && (iVar1 = *(int *)(param_1 + 0xa8), 0 < iVar1)) {
            uVar3 = param_2 / (ulonglong)(longlong)iVar1;
            param_2 = param_2 % (ulonglong)(longlong)iVar1;
            param_3[1] = uVar3;
        }
        if ((*(char *)(param_1 + 0x28) != '\0') && (0 < *(int *)(param_1 + 0x50))) {
            uVar3 = param_2 / (ulonglong)(longlong)*(int *)(param_1 + 0x50);
            param_2 = param_2 % (ulonglong)(longlong)*(int *)(param_1 + 0x50);
            *param_3 = uVar3;
        }
        if (param_2 == 0) {
            return;
        }
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_res8 = 0x141e0a520;
        puVar4 = &DAT_140c8ad60;
    }
    local_28 = local_48;
    local_20 = local_40;
    local_18 = local_38;
    iVar1 = FUN_140196f30(puVar4,0xd,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return;
}



longlong FUN_140503e80(longlong param_1,longlong *param_2)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar4 = 0;
    if ((*(char *)(param_1 + 0x28) != '\0') &&
        (piVar2 = (int *)(param_1 + 0x50), *(int *)(param_1 + 0x50) == 1)) {
        lVar3 = 1;
        while ((*(char *)(piVar2 + 0xc) == '\0' || (piVar2[0x16] != *piVar2 && *piVar2 <= piVar2[0x16]))
                ) {
            lVar3 = lVar3 + 1;
            piVar2 = piVar2 + 0x16;
            if (3 < lVar3) {
                if ((*(char *)(param_1 + 0x130) != '\0') && (0 < *(int *)(param_1 + 0x158))) {
                    lVar4 = param_2[3] * (longlong)*(int *)(param_1 + 0x158);
                }
                if ((*(char *)(param_1 + 0xd8) != '\0') && (0 < *(int *)(param_1 + 0x100))) {
                    lVar4 = lVar4 + param_2[2] * (longlong)*(int *)(param_1 + 0x100);
                }
                if ((*(char *)(param_1 + 0x80) != '\0') && (0 < *(int *)(param_1 + 0xa8))) {
                    lVar4 = lVar4 + param_2[1] * (longlong)*(int *)(param_1 + 0xa8);
                }
                if ((*(char *)(param_1 + 0x28) != '\0') && (0 < *(int *)(param_1 + 0x50))) {
                    lVar4 = lVar4 + (longlong)*(int *)(param_1 + 0x50) * *param_2;
                }
                return lVar4;
            }
        }
    }
    local_40 = 0;
    local_48 = &PTR_LAB_140b5e648;
    local_38 = TlsGetValue(DAT_140c63720);
    TlsSetValue(DAT_140c63720,&local_48);
    local_28 = local_48;
    local_res8 = 0x141e0a570;
    local_18 = local_38;
    local_20 = local_40;
    iVar1 = FUN_140196f30(&DAT_140c8ad68,0xd,&local_res8,&local_28);
    local_48 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_38);
    if (iVar1 != 0) {
        DebugBreak();
    }
    return 0;
}



void FUN_140504000(longlong param_1,longlong param_2,undefined8 param_3)

{
    longlong *plVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    undefined auStack568 [32];
    undefined local_218 [8];
    longlong local_210;
    longlong local_1f8 [4];
    undefined local_1d8 [400];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack568;
    FUN_140503ca0(param_1,param_3,local_1f8);
    lVar8 = 3;
    plVar7 = (longlong *)(param_1 + 0x140);
    do {
        if ((*(char *)(plVar7 + -2) != '\0') && (local_1f8[lVar8] != 0)) {
            FUN_14018efa0(local_218,L" %llu");
            lVar3 = local_210;
            lVar4 = FUN_1401a7880(*(undefined8 *)(param_2 + 8),local_210);
            if (*(longlong *)(lVar4 + 8) == *(longlong *)(param_2 + 8)) {
                lVar6 = *(longlong *)(lVar4 + 0x10);
                if (lVar6 == 0) {
                    (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x20))();
                }
                else {
                    if (lVar4 == *(longlong *)(lVar6 + 0x30)) {
                        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x48);
                    }
                    if (lVar4 == *(longlong *)(lVar6 + 0x38)) {
                        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x40);
                    }
                    if (*(longlong *)(lVar4 + 0x40) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar4 + 0x40) + 0x48) = *(undefined8 *)(lVar4 + 0x48);
                    }
                    if (*(longlong *)(lVar4 + 0x48) != 0) {
                        *(undefined8 *)(*(longlong *)(lVar4 + 0x48) + 0x40) = *(undefined8 *)(lVar4 + 0x40);
                    }
                    *(undefined8 *)(lVar4 + 0x10) = 0;
                }
                if (*(longlong *)(param_2 + 0x38) == 0) {
                    *(longlong *)(param_2 + 0x38) = lVar4;
                    *(longlong *)(param_2 + 0x30) = lVar4;
                    *(undefined8 *)(lVar4 + 0x40) = 0;
                }
                else {
                    *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x48) = lVar4;
                    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_2 + 0x38);
                    *(longlong *)(param_2 + 0x38) = lVar4;
                }
                *(undefined8 *)(lVar4 + 0x48) = 0;
                *(longlong *)(lVar4 + 0x10) = param_2;
            }
            if (*plVar7 != plVar7[1]) {
                lVar4 = *(longlong *)(param_2 + 8);
                plVar1 = (longlong *)(lVar4 + 0x80);
                puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
                if (puVar5 == (undefined8 *)0x0) {
                    puVar5 = (undefined8 *)0x0;
                }
                else {
                    puVar5[1] = lVar4;
                    puVar5[2] = 0;
                    *(undefined4 *)(puVar5 + 3) = 0;
                    puVar5[4] = 0;
                    puVar5[5] = 0;
                    puVar5[6] = 0;
                    puVar5[7] = 0;
                    puVar5[8] = 0;
                    puVar5[9] = 0;
                    puVar5[10] = 0;
                    *puVar5 = &PTR_FUN_140b5eba0;
                    *(undefined4 *)(puVar5 + 0xb) = 0;
                    puVar5[0xc] = 0;
                }
                puVar5[10] = plVar1;
                FUN_1401a4c50(puVar5 + 3,&DAT_140b100a8);
                lVar4 = *plVar7;
                lVar6 = FUN_1401a6c70(puVar5,L"Image");
                FUN_1401a4c50(lVar6 + 0x20,lVar4);
                uVar2 = *(undefined4 *)(param_1 + 0x20);
                lVar4 = FUN_1401a6c70(puVar5,L"Width");
                FUN_1401a4c20(local_1d8,200,&DAT_1409e41f4,uVar2);
                FUN_1401a4c50(lVar4 + 0x20,local_1d8);
                lVar4 = FUN_1401a6c70(puVar5,L"Height");
                FUN_1401a4c20(local_1d8,200,&DAT_1409e41f4);
                FUN_1401a4c50(lVar4 + 0x20,local_1d8);
                FUN_1401a5a70(param_2,puVar5);
            }
            if (lVar3 != 0) {
                FUN_14018b900(lVar3,0);
            }
        }
        plVar7 = plVar7 + -0xb;
        lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack568);
    return;
}



void FUN_1405042b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    int iVar3;
    undefined auStack472 [32];
    undefined4 local_1b8;
    undefined **local_1a8 [50];
    ulonglong local_18;
    longlong local_10;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    if ((((param_3[3] == 0) && (*(int *)(param_1 + 0x10) == *(int *)(param_3 + 1))) &&
         (*(int *)(param_1 + 0x14) == *(int *)((longlong)param_3 + 0xc))) &&
        (*(int *)(param_1 + 0x1c) == *(int *)((longlong)param_3 + 0x14))) {
        FUN_140504000(param_1,param_2,*param_3);
    }
    else {
        FUN_140503450(local_1a8);
        local_1b8 = *(undefined4 *)((longlong)param_3 + 0x14);
        FUN_140503600(local_1a8,*(undefined4 *)(param_3 + 1),*(undefined4 *)((longlong)param_3 + 0xc),
                      *(undefined4 *)(param_3 + 2));
        FUN_140504000(local_1a8,param_2,*param_3);
        if (param_3[3] != 0) {
            local_1b8 = *(undefined4 *)((longlong)param_3 + 0x2c);
            FUN_140503600(local_1a8,*(undefined4 *)(param_3 + 4),*(undefined4 *)((longlong)param_3 + 0x24)
                    ,*(undefined4 *)(param_3 + 5));
            FUN_140504000(local_1a8,param_2,param_3[3]);
        }
        iVar3 = 3;
        plVar2 = &local_10;
        local_1a8[0] = &PTR_LAB_140b6a420;
        do {
            plVar1 = plVar2 + -6;
            plVar2 = plVar2 + -0xb;
            if (*plVar1 != 0) {
                FUN_14018b900(*plVar1,0);
            }
            if (*plVar2 != 0) {
                FUN_14018b900(*plVar2,0);
            }
            iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack472);
    return;
}



void FUN_1405043e0(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
    short sVar1;
    short *psVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    short **ppsVar10;
    undefined auStack200 [32];
    undefined local_a8 [8];
    longlong local_a0;
    undefined8 local_98;
    undefined local_88 [8];
    longlong local_80;
    longlong local_68 [4];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    lVar9 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_2 + 8) = puVar3;
    *(undefined2 **)(param_2 + 0x10) = puVar3;
    *(undefined2 **)(param_2 + 0x18) = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    FUN_140503ca0(param_1,param_3,local_68);
    lVar7 = 3;
    ppsVar10 = (short **)(param_1 + 0x140);
    do {
        if ((*(char *)(ppsVar10 + -2) != '\0') && ((param_4 == '\0' || (local_68[lVar7] != 0)))) {
            FUN_14018efa0(local_a8,L"%llu",local_68[lVar7]);
            uVar8 = local_98;
            lVar6 = local_a0;
            FUN_14001c310(param_2,local_a0,local_98);
            lVar4 = lVar9;
            if (*ppsVar10 != ppsVar10[1]) {
                do {
                    psVar2 = &DAT_140b100ba + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b100b8,&DAT_140b100b8 + lVar4 * 2);
                lVar4 = lVar9;
                do {
                    lVar4 = lVar4 + 1;
                } while (L"Image"[lVar4] != L'\0');
                FUN_14001c310(param_2,L"Image",L"Image" + lVar4);
                lVar4 = lVar9;
                do {
                    psVar2 = &DAT_140b100b2 + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b100b0,&DAT_140b100b0 + lVar4 * 2);
                psVar2 = *ppsVar10;
                sVar1 = *psVar2;
                lVar4 = lVar9;
                while (sVar1 != 0) {
                    lVar4 = lVar4 + 1;
                    sVar1 = psVar2[lVar4];
                }
                FUN_14001c310(param_2,psVar2,psVar2 + lVar4);
                lVar4 = lVar9;
                do {
                    psVar2 = &DAT_140b10082 + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b10080,&DAT_140b10080 + lVar4 * 2);
                lVar4 = lVar9;
                do {
                    lVar4 = lVar4 + 1;
                } while (L"Width"[lVar4] != L'\0');
                FUN_14001c310(param_2,L"Width",L"Width" + lVar4);
                lVar4 = lVar9;
                do {
                    psVar2 = &DAT_140b1007a + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b10078,&DAT_140b10078 + lVar4 * 2);
                puVar5 = (undefined *)FUN_14018efa0(local_88,&DAT_140b10090,*(undefined4 *)(param_1 + 0x20))
                        ;
                if (puVar5 != local_a8) {
                    FUN_14001c480(local_a8,*(undefined8 *)(puVar5 + 8),*(undefined8 *)(puVar5 + 0x10));
                    lVar6 = local_a0;
                    uVar8 = local_98;
                }
                if (local_80 != 0) {
                    FUN_14018b900(local_80,0);
                }
                FUN_14001c310(param_2,lVar6,uVar8);
                lVar4 = lVar9;
                do {
                    psVar2 = &DAT_140b1008a + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b10088,&DAT_140b10088 + lVar4 * 2);
                lVar4 = lVar9;
                do {
                    lVar4 = lVar4 + 1;
                } while (L"Height"[lVar4] != L'\0');
                FUN_14001c310(param_2,L"Height",L"Height" + lVar4);
                lVar4 = lVar9;
                do {
                    psVar2 = &DAT_140b10056 + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b10054,&DAT_140b10054 + lVar4 * 2);
                puVar5 = (undefined *)FUN_14018efa0(local_88,&DAT_140b1004c,*(undefined4 *)(param_1 + 0x24))
                        ;
                if (puVar5 != local_a8) {
                    FUN_14001c480(local_a8,*(undefined8 *)(puVar5 + 8),*(undefined8 *)(puVar5 + 0x10));
                    lVar6 = local_a0;
                    uVar8 = local_98;
                }
                if (local_80 != 0) {
                    FUN_14018b900(local_80,0);
                }
                FUN_14001c310(param_2,lVar6,uVar8);
                lVar4 = lVar9;
                do {
                    psVar2 = &DAT_140b10072 + lVar4;
                    lVar4 = lVar4 + 1;
                } while (*psVar2 != 0);
                FUN_14001c310(param_2,&DAT_140b10070,&DAT_140b10070 + lVar4 * 2);
            }
            if (lVar6 != 0) {
                FUN_14018b900(lVar6,0);
            }
        }
        ppsVar10 = ppsVar10 + -0xb;
        lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack200);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_140504780(undefined8 param_1,longlong param_2,undefined8 param_3,undefined param_4,
                       undefined (*param_5) [16],short *param_6,int param_7)

{
    short *psVar1;
    longlong lVar2;
    char cVar3;
    short sVar7;
    short sVar8;
    short sVar9;
    short sVar10;
    unkbyte10 Var11;
    undefined auVar12 [12];
    undefined auVar13 [14];
    short sVar14;
    undefined4 uVar15;
    undefined6 uVar16;
    undefined2 *puVar17;
    longlong lVar18;
    longlong lVar19;
    wchar_t *pwVar20;
    ulonglong uVar21;
    longlong lVar22;
    ulonglong uVar23;
    int iVar24;
    uint uVar26;
    int iVar27;
    undefined extraout_XMM0 [16];
    undefined auVar25 [16];
    int iVar28;
    char cVar29;
    char cVar30;
    undefined local_48 [8];
    longlong local_40;
    char cVar4;
    char cVar5;
    char cVar6;

    lVar22 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar17 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_2 + 8) = puVar17;
    *(undefined2 **)(param_2 + 0x10) = puVar17;
    *(undefined2 **)(param_2 + 0x18) = puVar17 + 8;
    lVar18 = lVar22;
    if (puVar17 != (undefined2 *)0x0) {
        *puVar17 = 0;
    }
    do {
        psVar1 = &DAT_140b10062 + lVar18;
        lVar18 = lVar18 + 1;
    } while (*psVar1 != 0);
    lVar2 = *(longlong *)(param_2 + 8);
    lVar18 = lVar18 * 2;
    uVar23 = *(longlong *)(param_2 + 0x10) - lVar2 >> 1;
    uVar21 = lVar18 >> 1;
    lVar19 = lVar22;
    if (uVar23 < uVar21) {
        FUN_1407db590(lVar2,&DAT_140b10060,uVar23 * 2);
        FUN_14001c310(param_2,&DAT_140b10060 +
                              (*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 1) * 2,
                      &DAT_140b10060 + lVar18);
    }
    else {
        lVar18 = uVar21 * 2;
        FUN_1407db590(lVar2,&DAT_140b10060,lVar18);
        FUN_14001c2b0(param_2,*(longlong *)(param_2 + 8) + lVar18,*(undefined8 *)(param_2 + 0x10));
    }
    do {
        lVar18 = lVar19 + 1;
        lVar19 = lVar19 + 1;
    } while (L"<P Align=\""[lVar18] != L'\0');
    FUN_14001c310(param_2,L"<P Align=\"",L"<P Align=\"" + lVar19);
    lVar18 = lVar22;
    if (param_7 == 1) {
        pwVar20 = L"Center";
        do {
            lVar19 = lVar18 + 1;
            lVar18 = lVar18 + 1;
        } while (L"Center"[lVar19] != L'\0');
    }
    else if (param_7 == 2) {
        pwVar20 = L"Right";
        do {
            lVar19 = lVar18 + 1;
            lVar18 = lVar18 + 1;
        } while (L"Right"[lVar19] != L'\0');
    }
    else {
        pwVar20 = L"Left";
        do {
            psVar1 = &DAT_140b10032 + lVar18;
            lVar18 = lVar18 + 1;
        } while (*psVar1 != 0);
    }
    FUN_14001c310(param_2,pwVar20,pwVar20 + lVar18);
    lVar18 = lVar22;
    do {
        psVar1 = &DAT_1409f100e + lVar18;
        lVar18 = lVar18 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(param_2,&DAT_1409f100c,&DAT_1409f100c + lVar18 * 2);
    lVar18 = lVar22;
    do {
        lVar18 = lVar18 + 1;
    } while (L"TextColor"[lVar18] != L'\0');
    FUN_14001c310(param_2,L"TextColor",L"TextColor" + lVar18);
    lVar18 = lVar22;
    do {
        psVar1 = &DAT_140b10156 + lVar18;
        lVar18 = lVar18 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(param_2,&DAT_140b10154,&DAT_140b10154 + lVar18 * 2);
    auVar25 = maxps(extraout_XMM0 & (undefined  [16])0x0,*param_5);
    auVar25 = minps(auVar25,_DAT_140b7b240);
    iVar24 = (int)(SUB164(auVar25,0) * 255.0 + 0.5);
    uVar26 = (uint)(SUB164(auVar25 >> 0x20,0) * 255.0 + 0.5);
    iVar27 = (int)(SUB164(auVar25 >> 0x40,0) * 255.0 + 0.5);
    iVar28 = (int)(SUB164(auVar25 >> 0x60,0) * 255.0 + 0.5);
    cVar29 = (char)((uint)iVar24 >> 0x10);
    cVar30 = (char)((uint)iVar28 >> 0x10);
    uVar23 = (ulonglong)
            CONCAT16((char)(uVar26 >> 0x10),
                     CONCAT15((char)(uVar26 >> 8),CONCAT14((char)uVar26,iVar27)));
    uVar21 = ((ulonglong)uVar26 & 0xff000000) << 0x20 | uVar23;
    Var11 = CONCAT19((char)((uint)iVar24 >> 8),CONCAT18((char)iVar24,uVar21));
    auVar12 = CONCAT111((char)((uint)iVar24 >> 0x18),CONCAT110(cVar29,Var11));
    auVar13 = CONCAT113((char)((uint)iVar28 >> 8),CONCAT112((char)iVar28,auVar12));
    sVar7 = (short)iVar27;
    cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char)iVar27 - (0xff < sVar7);
    sVar7 = (short)(uVar23 >> 0x10);
    sVar8 = (short)(uVar23 >> 0x20);
    cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)(uVar23 >> 0x20) - (0xff < sVar8);
    sVar8 = (short)(uVar21 >> 0x30);
    sVar9 = (short)((unkuint10)Var11 >> 0x40);
    cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar24 - (0xff < sVar9);
    sVar9 = SUB122(auVar12 >> 0x50,0);
    sVar10 = SUB142(auVar13 >> 0x60,0);
    cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar28 - (0xff < sVar10);
    sVar10 = SUB162(CONCAT115((char)((uint)iVar28 >> 0x18),CONCAT114(cVar30,auVar13)) >> 0x70,0);
    sVar14 = CONCAT11((0 < sVar7) * (sVar7 < 0xff) * (char)(uVar23 >> 0x10) - (0xff < sVar7),cVar3);
    uVar15 = CONCAT13((0 < sVar8) * (sVar8 < 0xff) * (char)(uVar23 >> 0x30) - (0xff < sVar8),
                      CONCAT12(cVar4,sVar14));
    uVar16 = CONCAT15((0 < sVar9) * (sVar9 < 0xff) * cVar29 - (0xff < sVar9),CONCAT14(cVar5,uVar15));
    sVar7 = (short)((uint)uVar15 >> 0x10);
    sVar8 = (short)((uint6)uVar16 >> 0x20);
    sVar9 = (short)(CONCAT17((0 < sVar10) * (sVar10 < 0xff) * cVar30 - (0xff < sVar10),
                             CONCAT16(cVar6,uVar16)) >> 0x30);
    lVar18 = FUN_14018efa0(local_48,&DAT_140b10164,
                           CONCAT13((0 < sVar9) * (sVar9 < 0xff) * cVar6 - (0xff < sVar9),
                                    CONCAT12((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                             CONCAT11((0 < sVar7) * (sVar7 < 0xff) * cVar4 -
                                                      (0xff < sVar7),
                                                      (0 < sVar14) * (sVar14 < 0xff) * cVar3 -
                                                      (0xff < sVar14)))));
    FUN_14001c310(param_2,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
    lVar18 = lVar22;
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    do {
        psVar1 = &DAT_140b1015e + lVar18;
        lVar18 = lVar18 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(param_2,&DAT_140b1015c,&DAT_140b1015c + lVar18 * 2);
    lVar19 = lVar22;
    lVar18 = lVar22;
    if (param_6 != (short *)0x0) {
        do {
            lVar19 = lVar19 + 1;
        } while ((&DAT_140a31aa8)[lVar19] != 0);
        FUN_14001c310(param_2,&DAT_140a31aa8,&DAT_140a31aa8 + lVar19);
        lVar19 = lVar22;
        do {
            psVar1 = &DAT_140b10142 + lVar19;
            lVar19 = lVar19 + 1;
        } while (*psVar1 != 0);
        FUN_14001c310(param_2,&DAT_140b10140,&DAT_140b10140 + lVar19 * 2);
        sVar7 = *param_6;
        lVar19 = lVar22;
        while (sVar7 != 0) {
            lVar19 = lVar19 + 1;
            sVar7 = param_6[lVar19];
        }
        FUN_14001c310(param_2,param_6,param_6 + lVar19);
        lVar19 = lVar22;
        do {
            psVar1 = &DAT_140b1013a + lVar19;
            lVar19 = lVar19 + 1;
        } while (*psVar1 != 0);
        FUN_14001c310(param_2,&DAT_140b10138,&DAT_140b10138 + lVar19 * 2);
    }
    do {
        psVar1 = &DAT_1409f0fd6 + lVar18;
        lVar18 = lVar18 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(param_2,&DAT_1409f0fd4,&DAT_1409f0fd4 + lVar18 * 2);
    lVar18 = FUN_1405043e0(param_1,local_48,param_3,param_4);
    FUN_14001c310(param_2,*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x10));
    lVar18 = lVar22;
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    do {
        psVar1 = &DAT_140b1014a + lVar18;
        lVar18 = lVar18 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(param_2,&DAT_140b10148,&DAT_140b10148 + lVar18 * 2);
    do {
        psVar1 = &DAT_140b10102 + lVar22;
        lVar22 = lVar22 + 1;
    } while (*psVar1 != 0);
    FUN_14001c310(param_2,&DAT_140b10100,&DAT_140b10100 + lVar22 * 2);
    return param_2;
}



void FUN_140504b50(longlong param_1,longlong *param_2,char param_3,short *param_4,int param_5)

{
    longlong *plVar1;
    short *psVar2;
    short sVar3;
    undefined2 *puVar4;
    longlong lVar5;
    longlong lVar6;
    wchar_t *pwVar7;
    undefined *puVar8;
    ulonglong uVar9;
    longlong *plVar10;
    int iVar11;
    int iVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined auStack952 [32];
    int local_398;
    undefined local_388 [8];
    longlong local_380;
    undefined **local_368 [50];
    undefined **local_1d8;
    longlong local_1d0 [49];
    ulonglong local_48;
    longlong local_40;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack952;
    FUN_140503450(&local_1d8);
    FUN_140503450(local_368);
    lVar13 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 8) = puVar4;
    *(undefined2 **)(param_1 + 0x10) = puVar4;
    *(undefined2 **)(param_1 + 0x18) = puVar4 + 8;
    lVar5 = lVar13;
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    do {
        psVar2 = &DAT_140b100f2 + lVar5;
        lVar5 = lVar5 + 1;
    } while (*psVar2 != 0);
    lVar6 = *(longlong *)(param_1 + 8);
    lVar5 = lVar5 * 2;
    uVar14 = *(longlong *)(param_1 + 0x10) - lVar6 >> 1;
    uVar9 = lVar5 >> 1;
    if (uVar14 < uVar9) {
        FUN_1407db590(lVar6,&DAT_140b100f0,uVar14 * 2);
        FUN_14001c310(param_1,&DAT_140b100f0 +
                              (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 1) * 2,
                      &DAT_140b100f0 + lVar5);
    }
    else {
        lVar5 = uVar9 * 2;
        FUN_1407db590(lVar6,&DAT_140b100f0,lVar5);
        FUN_14001c2b0(param_1,*(longlong *)(param_1 + 8) + lVar5,*(undefined8 *)(param_1 + 0x10));
    }
    lVar5 = lVar13;
    if (*param_2 != 0) {
        do {
            lVar6 = lVar5 + 1;
            lVar5 = lVar5 + 1;
        } while (L"<P Align=\""[lVar6] != L'\0');
        FUN_14001c310(param_1,L"<P Align=\"",L"<P Align=\"" + lVar5);
        lVar5 = lVar13;
        if (param_5 == 1) {
            pwVar7 = L"Center";
            do {
                lVar6 = lVar5 + 1;
                lVar5 = lVar5 + 1;
            } while (L"Center"[lVar6] != L'\0');
        }
        else if (param_5 == 2) {
            pwVar7 = L"Right";
            do {
                lVar6 = lVar5 + 1;
                lVar5 = lVar5 + 1;
            } while (L"Right"[lVar6] != L'\0');
        }
        else {
            pwVar7 = L"Left";
            do {
                psVar2 = &DAT_140b100ca + lVar5;
                lVar5 = lVar5 + 1;
            } while (*psVar2 != 0);
        }
        FUN_14001c310(param_1,pwVar7,pwVar7 + lVar5);
        lVar5 = lVar13;
        do {
            psVar2 = &DAT_1409f0fb6 + lVar5;
            lVar5 = lVar5 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_1409f0fb4,&DAT_1409f0fb4 + lVar5 * 2);
        lVar5 = lVar13;
        do {
            lVar5 = lVar5 + 1;
        } while (L"TextColor"[lVar5] != L'\0');
        FUN_14001c310(param_1,L"TextColor",L"TextColor" + lVar5);
        lVar5 = lVar13;
        do {
            psVar2 = &DAT_140b100e6 + lVar5;
            lVar5 = lVar5 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_140b100e4,&DAT_140b100e4 + lVar5 * 2);
        lVar5 = lVar13;
        if (param_3 == '\0') {
            if (DAT_140c65898 != 0) {
                lVar6 = lVar13;
                if (*(int *)(param_2 + 1) - 1U < 0xe) {
                    lVar6 = *(longlong *)(DAT_140c65898 + 0x15f0 + (longlong)*(int *)(param_2 + 1) * 8);
                }
                if (lVar6 < *param_2) {
                    sVar3 = *(short *)PTR_DAT_140c2c930;
                    while (puVar8 = PTR_DAT_140c2c930, sVar3 != 0) {
                        lVar5 = lVar5 + 1;
                        sVar3 = *(short *)(PTR_DAT_140c2c930 + lVar5 * 2);
                    }
                    goto LAB_140504de9;
                }
            }
            lVar5 = 0;
            sVar3 = *(short *)PTR_u_ffffffff_140c2c910;
            while (puVar8 = PTR_u_ffffffff_140c2c910, sVar3 != 0) {
                lVar5 = lVar5 + 1;
                sVar3 = *(short *)(PTR_u_ffffffff_140c2c910 + lVar5 * 2);
            }
        }
        else {
            sVar3 = *(short *)PTR_DAT_140c2c918;
            while (puVar8 = PTR_DAT_140c2c918, sVar3 != 0) {
                lVar5 = lVar5 + 1;
                sVar3 = *(short *)(PTR_DAT_140c2c918 + lVar5 * 2);
            }
        }
        LAB_140504de9:
        FUN_14001c310(param_1,puVar8,puVar8 + lVar5 * 2);
        lVar5 = lVar13;
        do {
            psVar2 = &DAT_140b10226 + lVar5;
            lVar5 = lVar5 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_140b10224,&DAT_140b10224 + lVar5 * 2);
        lVar5 = lVar13;
        lVar6 = lVar13;
        if (param_4 != (short *)0x0) {
            do {
                lVar6 = lVar6 + 1;
            } while ((&DAT_140a31aa8)[lVar6] != 0);
            FUN_14001c310(param_1,&DAT_140a31aa8,&DAT_140a31aa8 + lVar6);
            lVar6 = lVar13;
            do {
                psVar2 = &DAT_140b1021e + lVar6;
                lVar6 = lVar6 + 1;
            } while (*psVar2 != 0);
            FUN_14001c310(param_1,&DAT_140b1021c,&DAT_140b1021c + lVar6 * 2);
            sVar3 = *param_4;
            lVar6 = lVar13;
            while (sVar3 != 0) {
                lVar6 = lVar6 + 1;
                sVar3 = param_4[lVar6];
            }
            FUN_14001c310(param_1,param_4,param_4 + lVar6);
            lVar6 = lVar13;
            do {
                psVar2 = &DAT_140b1022e + lVar6;
                lVar6 = lVar6 + 1;
            } while (*psVar2 != 0);
            FUN_14001c310(param_1,&DAT_140b1022c,&DAT_140b1022c + lVar6 * 2);
        }
        do {
            psVar2 = &DAT_1409f10ce + lVar5;
            lVar5 = lVar5 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_1409f10cc,&DAT_1409f10cc + lVar5 * 2);
        local_398 = *(int *)((longlong)param_2 + 0x14);
        FUN_140503600(&local_1d8,*(int *)(param_2 + 1),*(int *)((longlong)param_2 + 0xc),
                      *(int *)(param_2 + 2));
        lVar5 = FUN_1405043e0(&local_1d8,local_388,(longlong)*(int *)param_2,1);
        FUN_14001c310(param_1,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
        lVar5 = lVar13;
        if (local_380 != 0) {
            FUN_14018b900(local_380,0);
        }
        do {
            psVar2 = &DAT_140b10202 + lVar5;
            lVar5 = lVar5 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_140b10200,&DAT_140b10200 + lVar5 * 2);
    }
    lVar5 = lVar13;
    if (param_2[3] == 0) goto LAB_1405051c0;
    do {
        lVar6 = lVar5 + 1;
        lVar5 = lVar5 + 1;
    } while (L"<P Align=\"Right\""[lVar6] != L'\0');
    FUN_14001c310(param_1,L"<P Align=\"Right\"",L"<P Align=\"Right\"" + lVar5);
    lVar5 = lVar13;
    do {
        lVar5 = lVar5 + 1;
    } while (L"TextColor"[lVar5] != L'\0');
    FUN_14001c310(param_1,L"TextColor",L"TextColor" + lVar5);
    lVar5 = lVar13;
    do {
        psVar2 = &DAT_140b10216 + lVar5;
        lVar5 = lVar5 + 1;
    } while (*psVar2 != 0);
    FUN_14001c310(param_1,&DAT_140b10214,&DAT_140b10214 + lVar5 * 2);
    lVar5 = lVar13;
    if (param_3 == '\0') {
        if (DAT_140c65898 != 0) {
            lVar6 = lVar13;
            if (*(int *)(param_2 + 4) - 1U < 0xe) {
                lVar6 = *(longlong *)(DAT_140c65898 + 0x15f0 + (longlong)*(int *)(param_2 + 4) * 8);
            }
            if (param_2[3] <= lVar6) {
                sVar3 = *(short *)PTR_u_ffffffff_140c2c910;
                while (puVar8 = PTR_u_ffffffff_140c2c910, sVar3 != 0) {
                    lVar5 = lVar5 + 1;
                    sVar3 = *(short *)(PTR_u_ffffffff_140c2c910 + lVar5 * 2);
                }
                goto LAB_140505049;
            }
        }
        lVar5 = 0;
        sVar3 = *(short *)PTR_DAT_140c2c930;
        while (puVar8 = PTR_DAT_140c2c930, sVar3 != 0) {
            lVar5 = lVar5 + 1;
            sVar3 = *(short *)(PTR_DAT_140c2c930 + lVar5 * 2);
        }
    }
    else {
        sVar3 = *(short *)PTR_DAT_140c2c918;
        while (puVar8 = PTR_DAT_140c2c918, sVar3 != 0) {
            lVar5 = lVar5 + 1;
            sVar3 = *(short *)(PTR_DAT_140c2c918 + lVar5 * 2);
        }
    }
    LAB_140505049:
    FUN_14001c310(param_1,puVar8,puVar8 + lVar5 * 2);
    lVar5 = lVar13;
    do {
        psVar2 = &DAT_140b1020e + lVar5;
        lVar5 = lVar5 + 1;
    } while (*psVar2 != 0);
    FUN_14001c310(param_1,&DAT_140b1020c,&DAT_140b1020c + lVar5 * 2);
    lVar5 = lVar13;
    lVar6 = lVar13;
    if (param_4 != (short *)0x0) {
        do {
            lVar6 = lVar6 + 1;
        } while ((&DAT_140a31aa8)[lVar6] != 0);
        FUN_14001c310(param_1,&DAT_140a31aa8,&DAT_140a31aa8 + lVar6);
        lVar6 = lVar13;
        do {
            psVar2 = &DAT_140b101be + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_140b101bc,&DAT_140b101bc + lVar6 * 2);
        sVar3 = *param_4;
        lVar6 = lVar13;
        while (sVar3 != 0) {
            lVar6 = lVar6 + 1;
            sVar3 = param_4[lVar6];
        }
        FUN_14001c310(param_1,param_4,param_4 + lVar6);
        lVar6 = lVar13;
        do {
            psVar2 = &DAT_140b101b6 + lVar6;
            lVar6 = lVar6 + 1;
        } while (*psVar2 != 0);
        FUN_14001c310(param_1,&DAT_140b101b4,&DAT_140b101b4 + lVar6 * 2);
    }
    do {
        psVar2 = &DAT_1409f10ae + lVar5;
        lVar5 = lVar5 + 1;
    } while (*psVar2 != 0);
    FUN_14001c310(param_1,&DAT_1409f10ac,&DAT_1409f10ac + lVar5 * 2);
    local_398 = *(int *)((longlong)param_2 + 0x2c);
    FUN_140503600(local_368,*(int *)(param_2 + 4),*(int *)((longlong)param_2 + 0x24),
                  *(int *)(param_2 + 5));
    lVar5 = FUN_1405043e0(local_368,local_388,(longlong)*(int *)(param_2 + 3),1);
    FUN_14001c310(param_1,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    lVar5 = lVar13;
    if (local_380 != 0) {
        FUN_14018b900(local_380,0);
    }
    do {
        psVar2 = &DAT_140b101ca + lVar5;
        lVar5 = lVar5 + 1;
    } while (*psVar2 != 0);
    FUN_14001c310(param_1,&DAT_140b101c8,&DAT_140b101c8 + lVar5 * 2);
    LAB_1405051c0:
    do {
        psVar2 = &DAT_140b10172 + lVar13;
        lVar13 = lVar13 + 1;
    } while (*psVar2 != 0);
    FUN_14001c310(param_1,&DAT_140b10170,&DAT_140b10170 + lVar13 * 2);
    iVar12 = 3;
    iVar11 = 3;
    plVar10 = local_1d0;
    local_368[0] = &PTR_LAB_140b6a420;
    do {
        plVar1 = plVar10 + -6;
        plVar10 = plVar10 + -0xb;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        if (*plVar10 != 0) {
            FUN_14018b900(*plVar10,0);
        }
        iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
    local_1d8 = &PTR_LAB_140b6a420;
    plVar10 = &local_40;
    do {
        plVar1 = plVar10 + -6;
        plVar10 = plVar10 + -0xb;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        if (*plVar10 != 0) {
            FUN_14018b900(*plVar10,0);
        }
        iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack952);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140505290(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
    ulonglong uVar1;
    short sVar2;
    undefined2 *puVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    short *psVar7;
    longlong lVar8;
    int iVar9;
    int iVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined auStack408 [32];
    char local_178;
    short *local_170;
    undefined local_168 [8];
    longlong local_160;
    undefined2 *local_158;
    longlong local_150;
    undefined **local_148 [2];
    undefined8 local_138;
    undefined local_f0 [8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_88 [16];
    undefined2 *local_78;
    longlong local_68 [4];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    local_178 = param_4;
    FUN_14001c2b0(param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    FUN_140503ca0(param_1,param_3,local_68);
    puVar11 = (undefined8 *)(param_1 + 0x168);
    lVar12 = 3;
    do {
        plVar6 = (longlong *)0x0;
        if ((*(char *)(puVar11 + -7) != '\0') && ((param_4 == '\0' || (local_68[lVar12] != 0)))) {
            FUN_1400b7090(local_148);
            local_148[0] = &PTR_FUN_140b69230;
            local_78 = (undefined2 *)0x0;
            local_88 = ZEXT816(0);
            puVar3 = (undefined2 *)FUN_14018b280(0x10);
            local_88 = CONCAT88(puVar3,puVar3);
            local_78 = puVar3 + 8;
            if (puVar3 != (undefined2 *)0x0) {
                *puVar3 = 0;
            }
            lVar4 = FUN_14018b280();
            plVar5 = plVar6;
            if (lVar4 != 0) {
                iVar9 = 0x7fffffff;
                if (*(int *)(local_68 + lVar12) < 0x7fffffff) {
                    iVar9 = *(int *)(local_68 + lVar12);
                }
                iVar10 = -0x80000000;
                if (-0x80000000 < iVar9) {
                    iVar10 = iVar9;
                }
                plVar5 = (longlong *)FUN_1404ddc40(lVar4,*puVar11,iVar10);
            }
            local_160 = 0;
            local_158 = (undefined2 *)0x0;
            local_150 = 0;
            do {
                lVar4 = (longlong)plVar6 + 1;
                plVar6 = (longlong *)((longlong)plVar6 + 1);
            } while (L"denomination"[lVar4] != L'\0');
            lVar4 = (longlong)plVar6 * 2 >> 1;
            uVar1 = lVar4 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar8 = uVar1 * 2;
                local_158 = (undefined2 *)FUN_14018b280(lVar8,0);
                local_150 = (longlong)local_158 + lVar8;
            }
            lVar8 = (longlong)local_158;
            lVar4 = lVar4 * 2;
            local_160 = (longlong)local_158;
            FUN_1407db590(local_158,L"denomination",lVar4);
            local_158 = (undefined2 *)(lVar8 + lVar4);
            lVar4 = 0;
            if (local_158 != (undefined2 *)0x0) {
                *local_158 = 0;
            }
            FUN_1400b7480(local_148,plVar5);
            (**(code **)(*plVar5 + 0x48))(plVar5,local_168);
            if (local_160 != 0) {
                FUN_14018b900(local_160,0);
            }
            if (*(longlong *)(param_2 + 8) != *(longlong *)(param_2 + 0x10)) {
                psVar7 = (short *)FUN_14034bdd0();
                sVar2 = *psVar7;
                lVar8 = lVar4;
                while (sVar2 != 0) {
                    lVar8 = lVar8 + 1;
                    sVar2 = psVar7[lVar8];
                }
                FUN_14001c310(param_2,psVar7,psVar7 + lVar8);
            }
            if ((local_e8 == local_e0) && (DAT_140c63648 != (undefined8 *)0x0)) {
                local_170 = (short *)0x0;
                (**(code **)*DAT_140c63648)(DAT_140c63648,local_138,local_148,&local_170);
                if (local_170 == (short *)0x0) {
                    if (local_e8 == local_e0) goto LAB_14050552b;
                    *local_e8 = 0;
                    local_e0 = local_e8;
                }
                else {
                    sVar2 = *local_170;
                    while (sVar2 != 0) {
                        lVar4 = lVar4 + 1;
                        sVar2 = local_170[lVar4];
                    }
                    FUN_14001c480(local_f0,local_170,local_170 + lVar4);
                }
                if (local_170 != (short *)0x0) {
                    (**(code **)(*(longlong *)(local_170 + -8) + 8))(local_170 + -8,local_e8);
                }
            }
            LAB_14050552b:
            FUN_14001c310(param_2,local_e8,local_e0);
            if (local_88._0_8_ != 0) {
                FUN_14018b900(local_88._0_8_,0);
            }
            FUN_1400b7390(local_148);
            param_4 = local_178;
        }
        puVar11 = puVar11 + -0xb;
        lVar12 = lVar12 + -1;
        if (lVar12 < 0) {
            FUN_1407db4f0(local_48 ^ (ulonglong)auStack408);
            return;
        }
    } while( true );
}



// WARNING: Removing unreachable block (ram,0x000140505695)

void FUN_140505590(longlong param_1,longlong param_2,undefined8 param_3)

{
    short sVar1;
    short *psVar2;
    undefined8 *puVar3;
    undefined2 *puVar4;
    undefined2 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined auStack232 [32];
    undefined8 local_c8;
    undefined8 local_c0;
    undefined local_b8 [8];
    undefined2 *local_b0;
    undefined2 *local_a8;
    undefined2 *local_a0;
    undefined4 local_98;
    undefined4 local_94;
    undefined8 local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined2 *local_78;
    undefined8 local_68 [4];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    FUN_140508730(param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    FUN_140503ca0(param_1,param_3,local_68);
    lVar7 = 3;
    puVar8 = (undefined8 *)(param_1 + 0x168);
    do {
        if (*(char *)(puVar8 + -7) != '\0') {
            puVar4 = (undefined2 *)FUN_14018b280(0x10);
            local_a0 = puVar4 + 8;
            if (puVar4 != (undefined2 *)0x0) {
                *puVar4 = 0;
            }
            local_b0 = puVar4;
            local_a8 = puVar4;
            puVar5 = (undefined2 *)FUN_14018b280(0x10);
            local_78 = puVar5 + 8;
            if (puVar5 != (undefined2 *)0x0) {
                *puVar5 = 0;
            }
            local_98 = *(undefined4 *)(puVar8 + -2);
            psVar2 = (short *)puVar8[-5];
            local_94 = *(undefined4 *)((longlong)puVar8 + -0xc);
            sVar1 = *psVar2;
            lVar6 = 0;
            while (sVar1 != 0) {
                lVar6 = lVar6 + 1;
                sVar1 = psVar2[lVar6];
            }
            local_88 = puVar5;
            local_80 = puVar5;
            if (lVar6 * 2 >> 1 == 0) {
                FUN_1407db590(puVar4,psVar2,0);
            }
            else {
                FUN_14001c310(local_b8);
                puVar5 = local_88;
                puVar4 = local_b0;
            }
            if (puVar8 + -1 != &local_90) {
                FUN_14001c480(&local_90,*puVar8,puVar8[1]);
                puVar5 = local_88;
                puVar4 = local_b0;
            }
            puVar3 = *(undefined8 **)(param_2 + 0x10);
            local_c8 = local_68[lVar7];
            local_c0 = puVar8[3];
            if (puVar3 == *(undefined8 **)(param_2 + 0x18)) {
                FUN_1405087e0(param_2,puVar3,&local_c8);
                puVar5 = local_88;
                puVar4 = local_b0;
            }
            else {
                if (puVar3 != (undefined8 *)0x0) {
                    puVar3[1] = local_c0;
                    *puVar3 = local_c8;
                    puVar3[3] = 0;
                    puVar3[4] = 0;
                    puVar3[5] = 0;
                    FUN_14001c1b0(puVar3 + 2,puVar4,local_a8);
                    *(undefined4 *)(puVar3 + 6) = local_98;
                    *(undefined4 *)((longlong)puVar3 + 0x34) = local_94;
                    puVar3[8] = 0;
                    puVar3[9] = 0;
                    puVar3[10] = 0;
                    FUN_14001c1b0(puVar3 + 7,puVar5,local_80);
                }
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x58;
            }
            if (puVar5 != (undefined2 *)0x0) {
                FUN_14018b900();
            }
            if (puVar4 != (undefined2 *)0x0) {
                FUN_14018b900();
            }
        }
        puVar8 = puVar8 + -0xb;
        lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack232);
    return;
}



undefined4 FUN_1405057d0(int param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_1401e87e0();
    if (lVar2 == 0) {
        return 0;
    }
    if ((param_1 != 7) ||
        (uVar1 = 0xb3285, (*(byte *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) == 0)) {
        uVar1 = *(undefined4 *)(lVar2 + 4);
    }
    return uVar1;
}



longlong FUN_140505820(void)

{
    ulonglong uVar1;
    longlong lVar2;

    lVar2 = FUN_1401e87e0();
    if (((lVar2 != 0) && (uVar1 = *(ulonglong *)(lVar2 + 8), uVar1 != 0)) && (uVar1 <= DAT_140c3fe70))
    {
        return DAT_140c3fe68 + uVar1;
    }
    return 0;
}



longlong * FUN_140505860(longlong *param_1)

{
    longlong **pplVar1;
    ulonglong uVar2;
    char cVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    int iVar9;
    longlong lVar10;
    ulonglong in_stack_00000028;
    ulonglong in_stack_00000030;

    FUN_1400c5920();
    pplVar1 = (longlong **)(param_1 + 0x80);
    *param_1 = (longlong)&PTR_LAB_140b6a1e0;
    FUN_1401095e0(pplVar1);
    plVar6 = param_1 + 0x87;
    iVar9 = 1;
    do {
        FUN_140508cb0(plVar6);
        plVar6 = plVar6 + 0x1d;
        iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    param_1[0x36] = param_1[0x36] | 0x40000;
    lVar8 = 0;
    lVar10 = 2;
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x86) = 0;
    *(undefined *)((longlong)param_1 + 0x434) = 0;
    *(undefined4 *)(param_1 + 0x58) = 2;
    plVar6 = param_1 + 0x8b;
    do {
        plVar6[-3] = -1;
        lVar4 = FUN_14018b280(0x188,0);
        lVar5 = lVar8;
        if (lVar4 != 0) {
            lVar5 = FUN_140503450(lVar4);
        }
        in_stack_00000030 = in_stack_00000030 & 0xffffffff00000000;
        *plVar6 = lVar5;
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
        FUN_140505bb0(param_1,1,0,0,in_stack_00000028,in_stack_00000030);
        uVar7 = plVar6[-4];
        if ((ulonglong)param_1[0x88] < (ulonglong)plVar6[-4]) {
            uVar7 = param_1[0x88];
        }
        uVar2 = param_1[0x87];
        param_1[0x87] = uVar7;
        if (uVar7 != uVar2) {
            param_1[0x8a] = param_1[0x89];
            *(undefined *)((longlong)param_1 + 0x434) = 0;
            *(undefined4 *)(param_1 + 0x86) = 0;
        }
        param_1[0x89] = param_1[0x87];
        param_1[0x8a] = param_1[0x87];
        (**(code **)(*param_1 + 0x238))(param_1);
        plVar6 = plVar6 + 0x1d;
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *(undefined *)((longlong)param_1 + 0x434) = 0;
    FUN_140505e40(param_1);
    lVar10 = param_1[4];
    if ((lVar10 != 0) &&
        ((*pplVar1 == (longlong *)0x0 ||
          (cVar3 = FUN_14002c740(param_1 + 0x82,L"WhiteFill"), cVar3 == '\0')))) {
        plVar6 = (longlong *)FUN_140108e80(lVar10 + 0xf0,L"WhiteFill");
        if (plVar6 != (longlong *)0x0) {
            do {
                lVar10 = lVar8 + 1;
                lVar8 = lVar8 + 1;
            } while (L"WhiteFill"[lVar10] != L'\0');
            FUN_14001c480(param_1 + 0x82,L"WhiteFill",L"WhiteFill" + lVar8);
        }
        if (plVar6 != *pplVar1) {
            if (plVar6 != (longlong *)0x0) {
                (**(code **)*plVar6)(plVar6);
            }
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
            *pplVar1 = plVar6;
        }
    }
    return param_1;
}



undefined8 FUN_140505aa0(undefined8 param_1,ulonglong param_2)

{
    FUN_140505ae0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140505ae0(undefined8 *param_1)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;

    pplVar1 = (longlong **)(param_1 + 0x8b);
    lVar4 = 2;
    *param_1 = &PTR_LAB_140b6a1e0;
    do {
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
        pplVar1 = pplVar1 + 0x1d;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar3 = 1;
    puVar2 = param_1 + 0xc6;
    do {
        puVar2 = puVar2 + -0x1d;
        FUN_140003810(puVar2,0x30,4,FUN_140109650);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if (param_1[0x83] != 0) {
        FUN_14018b900(param_1[0x83],0);
    }
    FUN_1400c6030(param_1);
    return;
}



void FUN_140505bb0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined4 in_stack_00000028;
    uint in_stack_00000030;
    undefined local_48 [8];
    longlong *local_40;
    longlong *local_38;
    undefined8 local_30;

    if (in_stack_00000030 < 3) {
        *(undefined *)(param_1 + 0x434) = 0;
        lVar7 = (ulonglong)in_stack_00000030 * 0xe8;
        FUN_140503600(*(undefined8 *)(lVar7 + 0x458 + param_1));
        uVar6 = 0;
        local_40 = (longlong *)0x0;
        local_38 = (longlong *)0x0;
        local_30 = 0;
        FUN_140505590(*(undefined8 *)(lVar7 + 0x458 + param_1),local_48,
                      *(undefined8 *)(lVar7 + 0x438 + param_1));
        plVar3 = local_38;
        plVar2 = local_40;
        if (local_40 != local_38) {
            plVar4 = local_40 + 3;
            do {
                if (3 < (uint)uVar6) break;
                if (*plVar4 == plVar4[1]) {
                    lVar5 = uVar6 * 0x30 + lVar7;
                    plVar1 = *(longlong **)(lVar5 + 0x460 + param_1);
                    if (plVar1 != (longlong *)0x0) {
                        (**(code **)(*plVar1 + 8))();
                        *(undefined8 *)(lVar5 + 0x460 + param_1) = 0;
                    }
                }
                else if (*(longlong *)(param_1 + 0x20) != 0) {
                    FUN_140109710(uVar6 * 0x30 + 0x460 + lVar7 + param_1,*(longlong *)(param_1 + 0x20) + 0xf0,
                                  *plVar4,0,in_stack_00000028);
                }
                uVar6 = (ulonglong)((uint)uVar6 + 1);
                plVar1 = plVar4 + 8;
                plVar4 = plVar4 + 0xb;
            } while (plVar1 != plVar3);
        }
        if (plVar2 != plVar3) {
            plVar4 = plVar2 + 3;
            do {
                if (plVar4[5] != 0) {
                    FUN_14018b900(plVar4[5],0);
                }
                if (*plVar4 != 0) {
                    FUN_14018b900(*plVar4,0);
                }
                plVar1 = plVar4 + 8;
                plVar4 = plVar4 + 0xb;
            } while (plVar1 != plVar3);
        }
        if (plVar2 != (longlong *)0x0) {
            FUN_14018b900(plVar2,0);
        }
    }
    return;
}



void FUN_140505d60(longlong *param_1,ulonglong param_2,char param_3,char param_4,uint param_5)

{
    ulonglong uVar1;
    ulonglong uVar2;

    if (param_5 < 3) {
        uVar2 = (ulonglong)param_5;
        if ((ulonglong)param_1[uVar2 * 0x1d + 0x88] < param_2) {
            param_2 = param_1[uVar2 * 0x1d + 0x88];
        }
        uVar1 = param_1[uVar2 * 0x1d + 0x87];
        param_1[uVar2 * 0x1d + 0x87] = param_2;
        if (param_2 != uVar1) {
            param_1[uVar2 * 0x1d + 0x8a] = param_1[uVar2 * 0x1d + 0x89];
            *(undefined *)((longlong)param_1 + 0x434) = 0;
            *(undefined4 *)(param_1 + 0x86) = 0;
        }
        if (param_3 != '\0') {
            param_1[uVar2 * 0x1d + 0x89] = param_1[uVar2 * 0x1d + 0x87];
            param_1[uVar2 * 0x1d + 0x8a] = param_1[uVar2 * 0x1d + 0x87];
        }
        (**(code **)(*param_1 + 0x238))(param_1);
        if (param_4 != '\0') {
            FUN_1400d4040(param_1,"CashWindowAmountChanged",param_1,&DAT_1409f116c,param_2);
        }
    }
    return;
}



void FUN_140505e40(longlong *param_1)

{
    longlong lVar1;
    longlong local_40;
    undefined8 local_38;
    undefined8 local_30;
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;

    if (*(char *)((longlong)param_1 + 0x434) == '\0') {
        *(undefined *)((longlong)param_1 + 0x434) = 1;
        lVar1 = param_1[0x8b];
        local_40 = 0;
        local_38 = 1;
        local_30 = 0;
        local_28 = 0;
        local_20 = 1;
        local_18 = 0;
        if (lVar1 != 0) {
            local_40 = param_1[0x87];
            local_38 = *(undefined8 *)(lVar1 + 0x10);
            local_30 = *(undefined8 *)(lVar1 + 0x18);
        }
        lVar1 = param_1[0xa8];
        if (lVar1 != 0) {
            local_28 = param_1[0xa4];
            local_20 = *(undefined8 *)(lVar1 + 0x10);
            local_18 = *(undefined8 *)(lVar1 + 0x18);
        }
        (**(code **)(*param_1 + 0x78))(param_1,&DAT_1409f1114,10,&local_40,&local_28);
    }
    return;
}



undefined8 FUN_140506040(longlong *param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = param_1[0x87];
    uVar2 = uVar1 / 10;
    if ((ulonglong)param_1[0x88] < uVar2) {
        uVar2 = param_1[0x88];
    }
    param_1[0x87] = uVar2;
    if (uVar2 != uVar1) {
        param_1[0x8a] = param_1[0x89];
        *(undefined *)((longlong)param_1 + 0x434) = 0;
        *(undefined4 *)(param_1 + 0x86) = 0;
    }
    param_1[0x89] = uVar2;
    param_1[0x8a] = uVar2;
    (**(code **)(*param_1 + 0x238))(param_1);
    FUN_1400d4040(param_1,"CashWindowAmountChanged",param_1,&DAT_1409f116c,uVar2);
    return 0;
}



void FUN_140506100(longlong *param_1,ushort param_2)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = param_1[0x87];
    if ((uVar1 < 100000000000) && ((ushort)(param_2 - 0x30) < 10)) {
        uVar2 = (longlong)(int)(param_2 - 0x30) + uVar1 * 10;
        if ((ulonglong)param_1[0x88] < uVar2) {
            uVar2 = param_1[0x88];
        }
        param_1[0x87] = uVar2;
        if (uVar2 != uVar1) {
            param_1[0x8a] = param_1[0x89];
            *(undefined *)((longlong)param_1 + 0x434) = 0;
            *(undefined4 *)(param_1 + 0x86) = 0;
        }
        param_1[0x89] = uVar2;
        param_1[0x8a] = uVar2;
        (**(code **)(*param_1 + 0x238))(param_1);
        FUN_1400d4040(param_1,"CashWindowAmountChanged",param_1,&DAT_1409f116c,uVar2);
    }
    return;
}



void FUN_1405061e0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                   char *param_5)

{
    longlong lVar1;
    int iVar2;

    if ((((*param_5 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) &&
         (*(longlong *)(lVar1 + 0xb40) == param_1)) && ((~*(byte *)(param_1 + 0x298) & 1) == 0)) {
        iVar2 = (int)param_2;
        if (iVar2 == 0x100) {
            switch(param_3) {
                case 0x10:
                    *(undefined *)(param_1 + 0x435) = 1;
                    *param_5 = '\x01';
                    return;
                case 0x11:
                    *(undefined *)(param_1 + 0x436) = 1;
                    break;
                case 0x2d:
                    if (*(char *)(param_1 + 0x435) != '\0') goto switchD_140506250_caseD_25;
                    break;
                case 0x2e:
                    if (*(char *)(param_1 + 0x435) == '\0') {
                        switchD_140506355_caseD_8:
                        FUN_140506040(param_1);
                        *param_5 = '\x01';
                        return;
                    }
                case 0x25:
                case 0x27:
                switchD_140506250_caseD_25:
                    *param_5 = '\x01';
                    return;
                case 0xc0:
                    param_2 = 0x100;
                    goto LAB_14050625d;
            }
            *param_5 = '\x01';
            return;
        }
        if (iVar2 == 0x101) {
            if (param_3 == 0x10) {
                *(undefined *)(param_1 + 0x435) = 0;
            }
            else {
                if (param_3 == 0x11) {
                    *(undefined *)(param_1 + 0x436) = 0;
                    *param_5 = '\x01';
                    return;
                }
                if (param_3 == 0xc0) {
                    param_3 = 0xc0;
                    goto LAB_14050625d;
                }
            }
            *param_5 = '\x01';
            return;
        }
        if (iVar2 == 0x102) {
            switch(param_3) {
                case 8:
                    goto switchD_140506355_caseD_8;
                case 9:
                case 0x60:
                    param_2 = 0x102;
                    break;
                default:
                    GetKeyState(0xa3);
                    GetKeyState(0xa2);
                    *param_5 = '\x01';
                    return;
                case 0xd:
                case 0x1b:
                    FUN_1400e8bf0(lVar1);
                    *param_5 = '\x01';
                    return;
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
                    FUN_140506100(param_1,param_3 & 0xffff);
                    *param_5 = '\x01';
                    return;
            }
        }
    }
    LAB_14050625d:
    FUN_1400d1af0(param_1,param_2,param_3,param_4);
    return;
}



uint FUN_140506500(longlong param_1)

{
    if ((*(uint *)(param_1 + 0x2c0) & 2) != 0) {
        return 2;
    }
    return *(uint *)(param_1 + 0x2c0) & 1;
}



void FUN_140506520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   char param_5)

{
    longlong *plVar1;
    bool bVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong *plVar7;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined8 local_88;
    longlong *local_80;
    longlong *local_78;
    undefined8 local_70;
    undefined local_68 [8];
    longlong local_60;

    local_80 = (longlong *)0x0;
    local_78 = (longlong *)0x0;
    local_70 = 0;
    bVar2 = false;
    FUN_140505590(param_2,&local_88,param_4);
    plVar4 = local_78;
    plVar3 = local_80;
    plVar7 = local_78;
    while (plVar7 != plVar3) {
        plVar6 = plVar7 + -0xb;
        if (((param_5 == '\0') || (*plVar6 != 0)) ||
            ((plVar1 = plVar7 + -5, plVar7 = plVar6, *(int *)plVar1 == 1 && (!bVar2)))) {
            bVar2 = true;
            FUN_14018efa0(local_68,L"%llu",*plVar6);
            lVar5 = local_60;
            local_98 = 0x3f800000;
            uStack148 = 0x3f800000;
            uStack144 = 0x3f800000;
            uStack140 = 0x3f800000;
            local_88 = 0;
            local_78 = (longlong *)0x447a0000447a0000;
            (**(code **)(*DAT_140c65680 + 0x108))
                    (DAT_140c65680,param_3,local_60,0xffffffffffffffff,&local_88,0x400,&local_98,1);
            plVar7 = plVar6;
            if (lVar5 != 0) {
                FUN_14018b900(lVar5,0);
            }
        }
    }
    if (plVar3 != plVar4) {
        plVar7 = plVar3 + 3;
        do {
            if (plVar7[5] != 0) {
                FUN_14018b900(plVar7[5],0);
            }
            if (*plVar7 != 0) {
                FUN_14018b900(*plVar7,0);
            }
            plVar6 = plVar7 + 8;
            plVar7 = plVar7 + 0xb;
        } while (plVar6 != plVar4);
    }
    if (plVar3 != (longlong *)0x0) {
        FUN_14018b900(plVar3,0);
    }
    return;
}
