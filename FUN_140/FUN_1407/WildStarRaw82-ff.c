//
// Created by flop on 05.04.22.
//


undefined8 FUN_140700340(longlong param_1)

{
    ushort uVar1;
    uint uVar2;
    uint uVar3;
    uint *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong local_48;
    ulonglong local_40;
    longlong local_38;
    undefined local_30 [8];
    longlong local_28;

    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar6 + 1))) {
        uVar1 = FUN_140056d60(param_1,1);
    }
    else {
        uVar1 = 0;
    }
    puVar4 = (uint *)FUN_1406622c0(param_1,2);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        uVar2 = FUN_140056d60(param_1,3);
    }
    else {
        uVar2 = 0;
    }
    uVar5 = FUN_140056bb0(param_1,4);
    FUN_14018f2d0(local_30,uVar5);
    uVar3 = 0;
    local_38 = local_28;
    local_48 = (ulonglong)uVar1;
    if (puVar4 != (uint *)0x0) {
        uVar3 = *puVar4;
    }
    local_48 = local_48 | (ulonglong)uVar3 << 0x20;
    local_40 = (ulonglong)uVar2;
    FUN_1403f4900(DAT_140c65898,0x830,&local_48);
    if (local_28 != 0) {
        FUN_14018b900(local_28,0);
    }
    return 0;
}



undefined8 FUN_140700450(undefined8 param_1)

{
    int iVar1;

    iVar1 = FUN_140056d60(param_1,1);
    if (iVar1 - 1U < 3) {
        FUN_14053bcc0(DAT_140c65898,iVar1);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140700480(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    longlong lVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    float fVar15;
    undefined8 local_res8;
    undefined8 local_res10;
    undefined local_res18 [8];
    ulonglong local_res20;
    longlong local_c8;
    longlong local_c0;
    undefined **local_b8;
    int local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined local_98 [8];
    longlong local_90;

    local_a0 = 1;
    local_b8 = &PTR_FUN_140b569f0;
    local_a8 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_b0 = FUN_1400578c0(param_1);
    fVar15 = 0.001;
    uVar13 = 0;
    uVar14 = 0;
    local_res20 = 1;
    do {
        local_res8._0_4_ = 0.0;
        iVar4 = (int)local_res20;
        if (iVar4 == 1) {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c638ac == 0) && (iVar4 = FUN_1401fffc0(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c64c58 + 0x18))();
                    goto LAB_140700639;
                }
            }
            else {
                lVar6 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x3cb,DAT_140c63858);
                LAB_140700639:
                if (lVar6 != 0) {
                    uVar9 = (ulonglong)*(uint *)(lVar6 + 4);
                    goto LAB_140700648;
                }
            }
            uVar9 = 0xc2d9;
        }
        else if (iVar4 == 2) {
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c638ac == 0) && (iVar4 = FUN_1401fffc0(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c64c58 + 0x18))();
                    goto LAB_1407005e1;
                }
            }
            else {
                lVar6 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x3cc,DAT_140c63858);
                LAB_1407005e1:
                if (lVar6 != 0) {
                    uVar9 = (ulonglong)*(uint *)(lVar6 + 4);
                    goto LAB_140700648;
                }
            }
            uVar9 = 0xc2da;
        }
        else {
            uVar9 = 0;
            if (iVar4 == 3) {
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c638ac == 0) && (iVar4 = FUN_1401fffc0(), -1 < iVar4)) {
                        lVar6 = (**(code **)(*DAT_140c64c58 + 0x18))();
                        goto LAB_140700583;
                    }
                }
                else {
                    lVar6 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x3e2,DAT_140c63858);
                    LAB_140700583:
                    if (lVar6 != 0) {
                        uVar9 = (ulonglong)*(uint *)(lVar6 + 4);
                        goto LAB_140700648;
                    }
                }
                uVar9 = 0xcd61;
            }
        }
        LAB_140700648:
        uVar8 = (uint)uVar9;
        uVar9 = 0;
        if (uVar8 != 0) {
            if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
                LAB_1407006ba:
                lVar6 = FUN_1407a0fd0(DAT_140c65b70);
                uVar9 = 0;
                if (lVar6 == 0) goto LAB_140700702;
            }
            else {
                lVar6 = *(longlong *)(DAT_140c65898 + 0x7d18);
                lVar3 = lVar6;
                lVar11 = *(longlong *)(lVar6 + 8);
                while (lVar11 != 0) {
                    if (*(uint *)(lVar11 + 0x20) < uVar8) {
                        lVar11 = *(longlong *)(lVar11 + 0x18);
                    }
                    else {
                        lVar3 = lVar11;
                        lVar11 = *(longlong *)(lVar11 + 0x10);
                    }
                }
                if ((lVar3 == lVar6) || (uVar8 < *(uint *)(lVar3 + 0x20))) {
                    local_c0 = lVar6;
                    plVar7 = &local_c0;
                }
                else {
                    local_c8 = lVar3;
                    plVar7 = &local_c8;
                }
                if ((*plVar7 == lVar6) || (lVar6 = *(longlong *)(*plVar7 + 0x28), lVar6 == 0))
                    goto LAB_1407006ba;
            }
            local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000);
            local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000);
            FUN_1405650e0(*(undefined8 *)(DAT_140c65898 + 0x78),lVar6,&local_res8,local_res18,&local_res10
            );
            uVar9 = (ulonglong)local_res10 & 0xffffffff;
        }
        LAB_140700702:
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar4 = FUN_1400578c0(param_1);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar4 - 1U < *(uint *)(lVar6 + 0x38)) {
            puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
        }
        else {
            local_res10 = (double)iVar4;
            if (local_res10 == (double)CONCAT44(uVar14,uVar13)) {
                puVar10 = *(undefined8 **)(lVar6 + 0x20);
            }
            else {
                local_res10._4_4_ = (int)((ulonglong)local_res10 >> 0x20);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar6 + 0x20) +
                         ((longlong)(ulonglong)(uint)(local_res10._4_4_ + (int)local_res10) %
                          (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar10 + 3) == 3) && (local_res10 == (double)puVar10[2])) goto LAB_1407007cd;
                puVar10 = (undefined8 *)puVar10[4];
            } while (puVar10 != (undefined8 *)0x0);
            puVar10 = &DAT_140a12138;
        }
        LAB_1407007cd:
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar10;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar6 = FUN_14018f0e0(local_98,L"fCooldownPercent");
        lVar6 = *(longlong *)(lVar6 + 8);
        if (lVar6 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(lVar6 + lVar11) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_140062650(param_1,lVar6,lVar11);
            *(undefined4 *)(puVar10 + 1) = 4;
            *puVar10 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)(float)local_res8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        lVar6 = *(longlong *)(param_1 + 0x10);
        *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar6;
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        fVar12 = (float)uVar9 * fVar15;
        if (iVar4 - 1U < *(uint *)(lVar11 + 0x38)) {
            puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
        }
        else {
            local_res10 = (double)iVar4;
            if (local_res10 == (double)CONCAT44(uVar14,uVar13)) {
                puVar10 = *(undefined8 **)(lVar11 + 0x20);
            }
            else {
                local_res10._4_4_ = (int)((ulonglong)local_res10 >> 0x20);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar11 + 0x20) +
                         ((longlong)(ulonglong)(uint)(local_res10._4_4_ + (int)local_res10) %
                          (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar10 + 3) == 3) && (local_res10 == (double)puVar10[2])) goto LAB_140700943;
                puVar10 = (undefined8 *)puVar10[4];
            } while (puVar10 != (undefined8 *)0x0);
            puVar10 = &DAT_140a12138;
        }
        LAB_140700943:
        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar6) = *puVar10;
        *(undefined4 *)(lVar6 + -0x28) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar6 = FUN_14018f0e0(local_98,L"fCooldownTime");
        lVar6 = *(longlong *)(lVar6 + 8);
        if (lVar6 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar11 = -1;
            do {
                lVar11 = lVar11 + 1;
            } while (*(char *)(lVar6 + lVar11) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_140062650(param_1,lVar6,lVar11);
            *(undefined4 *)(puVar10 + 1) = 4;
            *puVar10 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        if (local_90 != 0) {
            FUN_14018b900(local_90,0);
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)fVar12;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        FUN_1400fb1d0(&local_b8);
        FUN_1400579e0(param_1);
        local_res20 = local_res20 + 1;
    } while (local_res20 < 4);
    lVar6 = *(longlong *)(*(longlong *)(local_a8 + 0x20) + 0xa0);
    if (local_b0 - 1U < *(uint *)(lVar6 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(local_b0 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
    }
    else {
        local_res8 = (double)local_b0;
        if (local_res8 == (double)CONCAT44(uVar14,uVar13)) {
            puVar10 = *(undefined8 **)(lVar6 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar6 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)(float)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (local_res8 == (double)puVar10[2])) goto LAB_140700ad4;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_140700ad4:
    puVar1 = *(undefined8 **)(local_a8 + 0x10);
    *puVar1 = *puVar10;
    uVar13 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar13;
    *(longlong *)(local_a8 + 0x10) = *(longlong *)(local_a8 + 0x10) + 0x10;
    FUN_1400579e0(local_a8,uVar13,local_b0);
    return 1;
}



undefined8 FUN_140700b30(undefined8 param_1)

{
    longlong lVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong local_res10;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar2 = FUN_140056d60(param_1,1);
    lVar4 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28);
    local_res10 = lVar4;
    lVar1 = *(longlong *)(lVar4 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < uVar2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res10 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res10 == lVar4) || (uVar2 < *(uint *)(local_res10 + 0x20))) {
        local_res10 = lVar4;
    }
    if ((((local_res10 != *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7d90) + 0x28)) &&
          (local_res10 != -0x28)) &&
         (puVar3 = (undefined4 *)FUN_1406622c0(param_1,2), puVar3 != (undefined4 *)0x0)) &&
        (lVar4 = FUN_1403d90d0(DAT_140c65898,*puVar3), lVar4 != 0)) {
        local_28 = CONCAT44(uVar2,*(undefined4 *)(local_res10 + 0x2c));
        local_20 = *(undefined8 *)(lVar4 + 0x1a0);
        local_18 = *(undefined8 *)(lVar4 + 0x1a8);
        FUN_1403f4900(DAT_140c65898,0xb5,&local_28);
    }
    return 0;
}



undefined8 FUN_140700c70(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        iVar2 = 0;
    }
    else {
        iVar2 = FUN_1403b48b0();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140701090(void)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_res10 [6];

    lVar2 = DAT_140c65898;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *)(lVar1 + 0x15a8) & 2) != 0) {
        return 0;
    }
    if (*(int *)(lVar1 + 0x2ac) != 0) {
        return 0;
    }
    iVar3 = FUN_1405fd420(*DAT_140c65b80);
    if (iVar3 != 0) {
        return 0;
    }
    local_res10[0] = 0;
    if ((*(longlong *)(lVar2 + 0x78) != 0) && (iVar3 = FUN_1403b48b0(), iVar3 != 0)) {
        iVar3 = FUN_1403b5ea0(lVar2);
        local_res10[0] = 0;
        if (iVar3 == 0) goto LAB_140701100;
    }
    local_res10[0] = 1;
    LAB_140701100:
    FUN_1403f4900(lVar2,0x173,local_res10);
    return 0;
}



undefined8 FUN_140701120(void)

{
    undefined local_res10 [24];

    local_res10[0] = 0;
    FUN_1403f4900(DAT_140c65898,0xec,local_res10);
    return 0;
}



undefined8 FUN_140701150(void)

{
    undefined local_res10 [24];

    if (*(int *)(DAT_140c65898 + 0x6ee4) == 1) {
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898,0xe8,local_res10);
    }
    return 0;
}



undefined8 FUN_140701210(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if (*(int *)(DAT_140c65898 + 0x6ee0) != 0) {
        lVar1 = FUN_1403d90d0();
        if (lVar1 != 0) {
            uVar2 = FUN_140649930(param_1,lVar1);
            return uVar2;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140701290(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    undefined8 *puVar3;
    undefined4 local_res10 [6];

    puVar3 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar3 + 1) == 0) || ((*(int *)(puVar3 + 1) == 1 && (*(int *)puVar3 == 0)))) {
        local_res10[0] = 0;
        uVar2 = *(uint *)(DAT_140c65898 + 0x6328);
        uVar1 = uVar2 & 0xfffffff7;
    }
    else {
        local_res10[0] = 1;
        uVar2 = *(uint *)(DAT_140c65898 + 0x6328);
        uVar1 = uVar2 | 8;
    }
    if (uVar1 != uVar2) {
        FUN_1403f4900(DAT_140c65898,0x170,local_res10);
    }
    return 0;
}



undefined8 FUN_1407013d0(longlong param_1)

{
    uint *puVar1;
    undefined4 uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined local_28 [8];
    longlong local_20;

    uVar6 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_28,uVar6);
    uVar2 = FUN_140056d60(param_1,2);
    uVar3 = FUN_1403e1170(local_20,uVar2);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        uVar4 = FUN_140056d60(param_1,3);
        if ((uVar4 < 3) && (uVar3 != 0)) {
            iVar5 = (**(code **)(*DAT_140c65890 + 8))(DAT_140c65890,local_20,uVar4,0,0);
            uVar3 = (uint)(iVar5 == 0);
        }
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1407014c0(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    longlong lVar3;

    uVar2 = FUN_140056d60(param_1,1);
    if ((uVar2 < 0x1d) && ((longlong)(int)uVar2 * 0x18 != -0x140c89730)) {
        lVar3 = *(longlong *)(&DAT_140c89740 + (longlong)(int)uVar2 * 0x18);
        if (lVar3 != 0) {
            lVar3 = lVar3 + -1;
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)(int)lVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_140701530(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    uint *puVar3;
    double *pdVar4;
    longlong lVar5;
    undefined8 uVar6;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    lVar5 = DAT_140c65898;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar1 = *(int *)(lVar5 + 0x642c);
    FUN_140058710(param_1,"bWorldForcesLevelScaling",0x18);
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    lVar5 = DAT_140c65898;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    iVar1 = *(int *)(lVar5 + 0x6424);
    FUN_140058710(param_1,"eWorldDifficulty",0x10);
    pdVar4 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar4 + 1) = 3;
    *pdVar4 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140701650(longlong param_1)

{
    byte bVar1;
    int iVar2;
    double *pdVar3;
    undefined8 *puVar4;
    double *pdVar5;
    uint uVar6;
    undefined8 local_28;
    ulonglong local_20;
    double local_18;
    undefined4 local_10;

    pdVar5 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar5 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar5 + 1) == 3) {
        LAB_1407016bc:
        uVar6 = (uint)*pdVar5;
    }
    else {
        if ((*(int *)(pdVar5 + 1) == 4) && (iVar2 = FUN_14005ac80((longlong)*pdVar5 + 0x20), iVar2 != 0)
                ) {
            local_10 = 3;
            pdVar5 = &local_18;
            goto LAB_1407016bc;
        }
        uVar6 = 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar5 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar5 = pdVar3;
    }
    if (*(int *)(pdVar5 + 1) != 3) {
        if ((*(int *)(pdVar5 + 1) != 4) || (iVar2 = FUN_14005ac80((longlong)*pdVar5 + 0x20), iVar2 == 0)
                ) {
            iVar2 = 0;
            goto LAB_140701717;
        }
        local_10 = 3;
        pdVar5 = &local_18;
    }
    iVar2 = (int)*pdVar5;
    LAB_140701717:
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        bVar1 = FUN_140056d60(param_1);
    }
    else {
        bVar1 = 0;
    }
    if (uVar6 < 2) {
        local_20._0_4_ = (uint)bVar1;
        local_20 = (ulonglong)CONCAT14(iVar2 != 0,(uint)local_20);
        local_28 = CONCAT44(uVar6,*(undefined4 *)(DAT_140c65898 + 0x7d84));
        FUN_1403f4900(DAT_140c65898,0x163,&local_28);
        *(undefined4 *)(DAT_140c65898 + 0x7d84) = 0;
    }
    return 0;
}



undefined8 FUN_1407017d0(void)

{
    undefined4 local_res10 [6];

    local_res10[0] = *(undefined4 *)(DAT_140c65898 + 0x7d84);
    FUN_1403f4900(DAT_140c65898,0x153,local_res10);
    return 0;
}



undefined8 FUN_140701800(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 local_res10 [6];

    puVar1 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar1 + 1) != 0) && ((*(int *)(puVar1 + 1) != 1 || (*(int *)puVar1 != 0)))) {
        WindowHandlerFunction(DAT_140c65898,0,0x65,1);
        local_res10[0] = *(undefined4 *)(DAT_140c65898 + 0x7d84);
        FUN_1403f4900(DAT_140c65898,0xd2,local_res10);
    }
    *(undefined4 *)(DAT_140c65898 + 0x7d84) = 0;
    return 1;
}



undefined8 FUN_140701880(longlong param_1)

{
    ulonglong uVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    uVar2 = FUN_140056d60(param_1,1);
    lVar3 = FUN_140240f80(uVar2);
    if (lVar3 == 0) {
        lVar3 = FUN_14018f0e0(local_28,&DAT_1409f84e4);
        if (*(longlong *)(lVar3 + 8) == 0) goto LAB_140701906;
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar4) != '\0');
    }
    else {
        uVar1 = *(ulonglong *)(lVar3 + 8);
        if (uVar1 == 0) {
            lVar3 = 0;
        }
        else if (DAT_140c3fe70 < uVar1) {
            lVar3 = 0;
        }
        else {
            lVar3 = DAT_140c3fe68 + uVar1;
        }
        lVar3 = FUN_14018f0e0(local_28,lVar3);
        if (*(longlong *)(lVar3 + 8) == 0) {
            LAB_140701906:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_140701932;
        }
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar4) != '\0');
    }
    FUN_140058710(param_1);
    LAB_140701932:
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140701950(void)

{
    uint uVar1;
    int iVar2;
    undefined4 *puVar3;
    uint uVar4;

    uVar4 = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c642c0 != 0) {
                return 0;
            }
            iVar2 = FUN_140240d20();
            if (iVar2 < 0) {
                return 0;
            }
            uVar1 = (**(code **)(*DAT_140c64b30 + 0x28))();
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_TargetMarker_140a6d968,DAT_140c63858);
        }
        if (uVar1 <= uVar4) {
            return 0;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c642c0 == 0) {
                iVar2 = FUN_140240d20();
                if (iVar2 < 0) {
                    puVar3 = (undefined4 *)0x0;
                }
                else {
                    puVar3 = (undefined4 *)(**(code **)(*DAT_140c64b30 + 0x20))(DAT_140c64b30,uVar4);
                }
            }
            else {
                puVar3 = (undefined4 *)0x0;
            }
        }
        else {
            puVar3 = (undefined4 *)(*DAT_140c63848)(&PTR_u_TargetMarker_140a6d968,uVar4,DAT_140c63858);
        }
        FUN_1406020b0(DAT_140c65898 + 0x6c10,*puVar3,0);
        uVar4 = uVar4 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140701a20(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    uint *puVar3;
    byte bVar4;
    longlong lVar5;
    uint uVar6;
    int iVar7;
    undefined8 uVar8;
    int *piVar9;
    ulonglong uVar10;
    longlong lVar11;
    int *piVar12;
    uint uVar13;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar13 = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c642c0 != 0) || (iVar7 = FUN_140240d20(), iVar7 < 0)) {
                return 1;
            }
            uVar6 = (**(code **)(*DAT_140c64b30 + 0x28))();
        }
        else {
            uVar6 = (*DAT_140c63838)();
        }
        if (uVar6 <= uVar13) {
            return 1;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c642c0 == 0) {
                iVar7 = FUN_140240d20();
                if (iVar7 < 0) {
                    piVar9 = (int *)0x0;
                }
                else {
                    piVar9 = (int *)(**(code **)(*DAT_140c64b30 + 0x20))();
                }
            }
            else {
                piVar9 = (int *)0x0;
            }
        }
        else {
            piVar9 = (int *)(*DAT_140c63848)(&PTR_u_TargetMarker_140a6d968,uVar13,DAT_140c63858);
        }
        lVar5 = DAT_140c65898;
        iVar7 = *piVar9;
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar11 = *(longlong *)(lVar5 + 0x6c50);
        if (lVar11 != 0) {
            uVar10 = 0;
            if (*(ulonglong *)(lVar11 + 0x78) != 0) {
                piVar12 = *(int **)(lVar11 + 0x70);
                do {
                    if (*piVar12 == *piVar9) break;
                    uVar10 = uVar10 + 1;
                    piVar12 = piVar12 + 2;
                } while (uVar10 < *(ulonglong *)(lVar11 + 0x78));
            }
        }
        lVar11 = FUN_1403d90d0(lVar5);
        if ((lVar11 == 0) || (*(int *)(lVar11 + 0x250) != 0)) {
            bVar4 = 1;
        }
        else {
            bVar4 = 0;
        }
        puVar3 = *(uint **)(param_1 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)bVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar11 = *(longlong *)(param_1 + 0x10);
        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar11,lVar11 + -0x20,lVar11 + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
        uVar13 = uVar13 + 1;
    } while( true );
}



undefined8 FUN_140701bd0(longlong param_1)

{
    byte bVar1;
    double *pdVar2;
    uint *puVar3;
    longlong *plVar4;
    code *pcVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    undefined8 uVar10;
    longlong *plVar11;
    undefined8 *puVar12;
    longlong lVar13;
    longlong lVar14;
    undefined8 *puVar15;
    ulonglong uVar16;
    longlong *plVar17;
    float extraout_XMM0_Da;
    double dVar18;
    float fVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    int local_res10;
    int iStackX20;
    int local_res18;
    int iStackX28;
    undefined8 local_98;
    undefined4 local_90;
    undefined local_88 [8];
    uint local_80;
    undefined4 uStack124;
    undefined4 uStack120;
    uint uStack116;
    undefined **local_68;
    int local_60;
    undefined4 uStack92;
    longlong local_58;
    undefined4 local_50;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(param_1);
    plVar11 = (longlong *)FUN_14054f210();
    (**(code **)(*plVar11 + 0x40))(plVar11);
    fVar19 = extraout_XMM0_Da;
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar6)
            ;
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_68,L"fTimeRemaining");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar14) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack92,local_60) != 0) {
        FUN_14018b900(CONCAT44(uStack92,local_60),0);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar19;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    uVar7 = (**(code **)(*plVar11 + 0x38))(plVar11);
    uVar16 = (ulonglong)uVar7;
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar6)
            ;
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar15,L"ePendingEvent",uVar16 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    iVar8 = (**(code **)(*plVar11 + 0x48))(plVar11);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar6)
            ;
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_68,L"bConfirmed");
    if (*(longlong *)(lVar13 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar13 + 8) + lVar14) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack92,local_60) != 0) {
        FUN_14018b900(CONCAT44(uStack92,local_60),0);
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar8 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar8 = FUN_1400578c0(param_1);
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))(plVar11);
    uVar16 = (ulonglong)*(uint *)plVar11;
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar8)
            ;
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar15,&DAT_140b41be8,uVar16 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar8)
            ;
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_60 = FUN_1400578c0();
    uVar7 = 0;
    plVar17 = plVar11;
    do {
        plVar17 = plVar17 + 1;
        lVar13 = *plVar17;
        if (lVar13 != 0) {
            uStack116 = 0;
            uStack124 = 0;
            uStack120 = 0;
            local_80 = uVar7;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x50)) {
                uVar10 = *(undefined8 *)(param_1 + 0x78);
            }
            else {
                uVar10 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
            }
            lVar14 = FUN_1400627d0(param_1,0x18,uVar10);
            plVar4 = *(longlong **)(param_1 + 0x10);
            *plVar4 = lVar14;
            *(undefined4 *)(plVar4 + 1) = 7;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            *(longlong *)(lVar14 + 0x30) = lVar13;
            *(ulonglong *)(lVar14 + 0x38) = CONCAT44(uStack124,local_80);
            *(ulonglong *)(lVar14 + 0x40) = CONCAT44(uStack116,uStack120);
            lVar13 = *(longlong *)(param_1 + 0x20);
            local_98 = FUN_140062650(param_1,"Game.Money",10);
            local_90 = 4;
            FUN_14005e8e0(param_1,lVar13 + 0xa0,&local_98,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            FUN_1400fb650(&local_68,uVar7);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        uVar7 = uVar7 + 1;
    } while (uVar7 < 0xf);
    uVar20 = 0;
    uVar21 = 0;
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar8 - 1U < *(uint *)(lVar13 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
    }
    else {
        dVar18 = (double)iVar8;
        if (dVar18 == 0.0) {
            puVar15 = *(undefined8 **)(lVar13 + 0x20);
        }
        else {
            iStackX28 = (int)((ulonglong)dVar18 >> 0x20);
            local_res18 = SUB84(dVar18,0);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar13 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (dVar18 == (double)puVar15[2])) goto LAB_1407020cd;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_1407020cd:
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar15;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar15 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(local_88,L"tCurrencies");
    lVar13 = *(longlong *)(lVar13 + 8);
    if (lVar13 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(lVar13 + lVar14) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_140062650(param_1,lVar13,lVar14);
        *(undefined4 *)(puVar15 + 1) = 4;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    uVar7 = 0;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (local_60 - 1U < *(uint *)(lVar13 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(local_60 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
    }
    else {
        dVar18 = (double)local_60;
        if (dVar18 == (double)CONCAT44(uVar21,uVar20)) {
            puVar15 = *(undefined8 **)(lVar13 + 0x20);
        }
        else {
            iStackX28 = (int)((ulonglong)dVar18 >> 0x20);
            local_res18 = SUB84(dVar18,0);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar13 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (dVar18 == (double)puVar15[2])) goto LAB_1407021ed;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_1407021ed:
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar15;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar15 + 1);
    lVar13 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar13 + 0x10;
    FUN_14005ea50(param_1,lVar13 + -0x20,lVar13 + -0x10,lVar13);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar9 = FUN_1400578c0();
    plVar11 = plVar11 + 0x10;
    do {
        lVar13 = *plVar11;
        if (lVar13 != 0) {
            local_80 = 0xf;
            uStack124 = 0;
            uStack120 = 0;
            uStack116 = uVar7;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x50)) {
                uVar10 = *(undefined8 *)(param_1 + 0x78);
            }
            else {
                uVar10 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
            }
            lVar14 = *(longlong *)(param_1 + 0x20);
            puVar15 = (undefined8 *)(**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 0x18),0,0,0x48);
            if (puVar15 == (undefined8 *)0x0) {
                FUN_140061040(param_1,4);
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return uVar10;
            }
            *(longlong *)(lVar14 + 0x78) = *(longlong *)(lVar14 + 0x78) + 0x48;
            bVar1 = *(byte *)(*(longlong *)(param_1 + 0x20) + 0x20);
            *(undefined *)(puVar15 + 1) = 7;
            puVar15[4] = 0x18;
            puVar15[2] = 0;
            puVar15[3] = uVar10;
            *(byte *)((longlong)puVar15 + 9) = bVar1 & 3;
            *puVar15 = **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0xb0);
            **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0xb0) = puVar15;
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            *puVar12 = puVar15;
            *(undefined4 *)(puVar12 + 1) = 7;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            puVar15[6] = lVar13;
            puVar15[7] = CONCAT44(uStack124,local_80);
            puVar15[8] = CONCAT44(uStack116,uStack120);
            lVar13 = *(longlong *)(param_1 + 0x20);
            local_98 = FUN_140062650(param_1,"Game.Money",10);
            local_90 = 4;
            FUN_14005e8e0(param_1,lVar13 + 0xa0,&local_98,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            lVar14 = *(longlong *)(param_1 + 0x18);
            if (iVar9 - 1U < *(uint *)(lVar13 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
            }
            else {
                dVar18 = (double)iVar9;
                if (dVar18 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar12 = *(undefined8 **)(lVar13 + 0x20);
                }
                else {
                    iStackX28 = (int)((ulonglong)dVar18 >> 0x20);
                    local_res18 = SUB84(dVar18,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar13 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                              (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar18 == (double)puVar12[2])) goto LAB_140702435;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_140702435:
            *puVar15 = *puVar12;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)uVar7;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            puVar12 = (undefined8 *)FUN_1400580e0(param_1,(longlong)puVar15 - lVar14 >> 4 & 0xffffffff);
            puVar15 = *(undefined8 **)(param_1 + 0x10);
            *puVar15 = *puVar12;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_14005ea50();
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x40;
        }
        uVar7 = uVar7 + 1;
        plVar11 = plVar11 + 1;
    } while (uVar7 < 0x13);
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar8 - 1U < *(uint *)(lVar13 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
    }
    else {
        dVar18 = (double)iVar8;
        if (dVar18 == (double)CONCAT44(uVar21,uVar20)) {
            puVar15 = *(undefined8 **)(lVar13 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar18 >> 0x20);
            local_res10 = SUB84(dVar18,0);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar13 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (dVar18 == (double)puVar15[2])) goto LAB_14070254d;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_14070254d:
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar15;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar15 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(local_88,L"tAccountCurrencies");
    lVar13 = *(longlong *)(lVar13 + 8);
    if (lVar13 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(lVar13 + lVar14) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_140062650(param_1,lVar13,lVar14);
        *(undefined4 *)(puVar15 + 1) = 4;
        *puVar15 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    lVar13 = -1;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar9 - 1U < *(uint *)(lVar14 + 0x38)) {
        puVar15 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
    }
    else {
        dVar18 = (double)iVar9;
        if (dVar18 == (double)CONCAT44(uVar21,uVar20)) {
            puVar15 = *(undefined8 **)(lVar14 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar18 >> 0x20);
            local_res10 = SUB84(dVar18,0);
            puVar15 = (undefined8 *)
                    (*(longlong *)(lVar14 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar15 + 3) == 3) && (dVar18 == (double)puVar15[2])) goto LAB_14070266e;
            puVar15 = (undefined8 *)puVar15[4];
        } while (puVar15 != (undefined8 *)0x0);
        puVar15 = &DAT_140a12138;
    }
    LAB_14070266e:
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar15;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar15 + 1);
    lVar14 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar14 + 0x10;
    FUN_14005ea50(param_1,lVar14 + -0x20,lVar14 + -0x10,lVar14);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    if (iVar6 - 1U < *(uint *)(lVar14 + 0x38)) {
        puVar12 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
    }
    else {
        dVar18 = (double)iVar6;
        if (dVar18 == (double)CONCAT44(uVar21,uVar20)) {
            puVar12 = *(undefined8 **)(lVar14 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar18 >> 0x20);
            local_res10 = SUB84(dVar18,0);
            puVar12 = (undefined8 *)
                    (*(longlong *)(lVar14 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar12 + 3) == 3) && (dVar18 == (double)puVar12[2])) goto LAB_140702730;
            puVar12 = (undefined8 *)puVar12[4];
        } while (puVar12 != (undefined8 *)0x0);
        puVar12 = &DAT_140a12138;
    }
    LAB_140702730:
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar14 = FUN_14018f0e0(local_88,L"tSignatureBonuses");
    lVar14 = *(longlong *)(lVar14 + 8);
    if (lVar14 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(lVar14 + lVar13) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_140062650(param_1,lVar14,lVar13);
        *(undefined4 *)(puVar15 + 1) = 4;
        *puVar15 = uVar10;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar8)
            ;
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    lVar13 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar13 + 0x10;
    FUN_14005ea50(param_1,lVar13 + -0x20,lVar13 + -0x10,lVar13);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar6)
            ;
    *puVar15 = *puVar12;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    FUN_1400579e0(param_1);
    FUN_1400579e0(param_1);
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_140702890(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;

    lVar3 = FUN_14039df50(DAT_140c65898);
    bVar2 = 0;
    if ((lVar3 != 0) &&
        ((*(longlong *)(lVar3 + 0xb8) == 0 || (*(int *)(*(longlong *)(lVar3 + 0xb8) + 4) != 5)))) {
        bVar2 = 1;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140702900(undefined8 param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    undefined4 *puVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    float fVar9;
    float fVar10;
    float fVar12;
    undefined auVar11 [16];

    puVar5 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar5 == (undefined4 *)0x0) {
        return 0;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898,*puVar5);
    if (lVar6 == 0) {
        return 0;
    }
    iVar4 = FUN_1403d2400();
    iVar3 = DAT_140c636a8;
    if (iVar4 == puVar5[8]) {
        puVar5[9] = 0;
    }
    else {
        puVar5[9] = 1;
        puVar5[10] = iVar3;
    }
    if ((puVar5[9] != 0) && ((uint)(iVar3 - puVar5[10]) < 100)) {
        puVar5[9] = 0;
        puVar5[8] = (uint)(puVar5[8] == 0);
    }
    if (puVar5[8] == 0) {
        fVar9 = *(float *)(lVar6 + 0x11e0);
        fVar10 = *(float *)(lVar6 + 0x11e4);
        uVar1 = *(undefined4 *)(lVar6 + 0x11e8);
        uVar2 = *(undefined4 *)(lVar6 + 0x11ec);
        puVar5[4] = fVar9;
        puVar5[5] = fVar10;
        puVar5[6] = uVar1;
        puVar5[7] = uVar2;
    }
    else {
        fVar9 = (float)puVar5[4];
        fVar10 = (float)puVar5[5];
    }
    lVar6 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar6 == 0) {
        lVar6 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar7 == 0) {
        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    fVar12 = fVar10 * *(float *)(lVar7 + 0x17c) + fVar9 * *(float *)(lVar7 + 0x16c) +
             *(float *)(lVar7 + 0x18c) * 0.0 + *(float *)(lVar7 + 0x19c);
    auVar11 = divps(CONCAT412(fVar12,CONCAT48(fVar10 * *(float *)(lVar7 + 0x178) +
                                              fVar9 * *(float *)(lVar7 + 0x168) +
                                              *(float *)(lVar7 + 0x188) * 0.0 +
                                              *(float *)(lVar7 + 0x198),
                                              CONCAT44(fVar10 * *(float *)(lVar7 + 0x174) +
                                                       fVar9 * *(float *)(lVar7 + 0x164) +
                                                       *(float *)(lVar7 + 0x184) * 0.0 +
                                                       *(float *)(lVar7 + 0x194),
                                                       fVar10 * *(float *)(lVar7 + 0x170) +
                                                       fVar9 * *(float *)(lVar7 + 0x160) +
                                                       *(float *)(lVar7 + 0x180) * 0.0 +
                                                       *(float *)(lVar7 + 400)))),
                    CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))) &
                    (undefined  [16])0xffffffffffffffff);
    lVar7 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar7 == 0) {
        lVar7 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    uVar8 = *(ulonglong *)(lVar7 + 0x1e8);
    if ((*(float *)(lVar6 + 500) - *(float *)(lVar6 + 0x1f0)) * SUB164(auVar11 >> 0x40,0) +
        *(float *)(lVar6 + 0x1f0) <= 0.0) {
        uVar8 = uVar8 >> 0x20;
    }
    FUN_140058900(param_1,uVar8,0,0,*(undefined4 *)(lVar7 + 0x1e0),
                  *(undefined4 *)(ulonglong *)(lVar7 + 0x1e8),*(undefined4 *)(lVar7 + 0x1f0));
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400efeb0(param_1);
    return 1;
}



undefined8 FUN_140702c10(longlong param_1)

{
    int iVar1;
    uint *puVar2;

    puVar2 = *(uint **)(param_1 + 0x10);
    iVar1 = FUN_14055a260(DAT_140c65898 + 0x7330);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140702c60(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    wchar_t *pwVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined4 local_res10 [2];
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_140056d60(param_1,1);
    if ((uVar2 < 0x24) &&
        (plVar1 = (longlong *)(&DAT_140c89d80)[(int)uVar2], plVar1 != (longlong *)0x0)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar9 + 1) = 5;
        *puVar9 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
        local_20 = uVar3;
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar9,L"nGameCommandId",uVar2);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (uVar2 < 0x24) {
            pwVar7 = (wchar_t *)FUN_1405b2fe0(uVar2);
        }
        else {
            pwVar7 = L"Unknown game command";
        }
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar9,L"strName",pwVar7);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (*(int *)(plVar1 + 0x28) != 0) {
            uVar5 = FUN_1400b5df0(DAT_140c658f0,*(int *)(plVar1 + 0x28),0);
            iVar4 = FUN_140415c70(param_1,uVar5);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"itemAbility");
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            }
        }
        lVar8 = (**(code **)(*plVar1 + 0x80))(plVar1,1);
        if (lVar8 != 0) {
            local_res10[0] = *(undefined4 *)((longlong)plVar1 + 0x114);
            iVar4 = FUN_1403d3470(param_1,local_res10);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"splAbility");
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
            }
        }
        uVar5 = (**(code **)(*plVar1 + 0xb0))(plVar1);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar9,L"strIcon",uVar5);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar9 = *puVar6;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
    }
    else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    return 1;
}



undefined8 FUN_1407032b0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    FUN_140056d60(param_1,1);
    lVar4 = FUN_1404b0e10();
    if (lVar4 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
            uVar3 = 0;
        }
        else {
            uVar3 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
        }
        iVar2 = FUN_1404af7d0(lVar4,uVar3);
        if (iVar2 != 0) {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0(param_1);
            local_20 = uVar3;
            FUN_1404b39c0(lVar4,&local_28);
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar6;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,puVar1,uVar3);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 0;
}



undefined8 FUN_1407033e0(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    double *pdVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong *plVar9;
    undefined **ppuVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined8 *puVar13;
    longlong lVar14;
    undefined **ppuVar15;
    longlong lVar16;
    undefined **ppuVar17;
    undefined **ppuVar18;
    double dVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    int local_res10;
    int iStackX20;
    int local_res18;
    longlong local_res20;
    longlong local_88;
    undefined **local_80;
    undefined **local_78;
    longlong local_70;
    undefined4 local_68;

    lVar7 = FUN_1404b0e70();
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 0;
    }
    local_res18 = 1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar5 = FUN_1400578c0(param_1);
    ppuVar15 = (undefined **)0x0;
    lVar14 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10);
    local_78 = (undefined **)0x0;
    local_80 = (undefined **)0x0;
    lVar16 = DAT_140c659d8;
    ppuVar17 = ppuVar15;
    if (lVar14 != *(longlong *)(lVar7 + 8)) {
        do {
            lVar11 = *(longlong *)(lVar16 + 0x48);
            lVar4 = lVar11;
            lVar1 = *(longlong *)(lVar11 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < *(uint *)(lVar14 + 0x20)) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar4 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((lVar4 == lVar11) || (*(uint *)(lVar14 + 0x20) < *(uint *)(lVar4 + 0x20))) {
                local_88 = lVar11;
                plVar9 = &local_88;
            }
            else {
                plVar9 = &local_res20;
                local_res20 = lVar4;
            }
            ppuVar18 = ppuVar17;
            if ((*plVar9 != lVar11) &&
                (puVar2 = *(undefined **)(*plVar9 + 0x28), puVar2 != (undefined *)0x0)) {
                ppuVar10 = (undefined **)FUN_14018db00(ppuVar17,(longlong)ppuVar15 + 1,8);
                ppuVar10[(longlong)ppuVar15] = puVar2;
                if ((ppuVar17 != ppuVar10) &&
                    (FUN_1407db590(), ppuVar18 = ppuVar10, ppuVar17 != (undefined **)0x0)) {
                    (**(code **)(ppuVar17[-2] + 8))();
                }
                ppuVar15 = (undefined **)((longlong)ppuVar15 + 1);
                lVar16 = DAT_140c659d8;
            }
            lVar11 = *(longlong *)(lVar14 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar14 + 8);
                if (lVar14 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar14 = lVar11;
                        lVar11 = *(longlong *)(lVar14 + 8);
                    } while (lVar14 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar14 + 0x18) != lVar11) {
                    lVar14 = lVar11;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar11 + 0x10); lVar14 = lVar11, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar11 = lVar1;
                }
            }
            ppuVar17 = ppuVar18;
        } while (lVar14 != *(longlong *)(lVar7 + 8));
        local_80 = ppuVar18;
        local_78 = ppuVar15;
        if ((undefined **)0x1 < ppuVar15) {
            FUN_1404b3f40(&local_80,&LAB_1404af890);
        }
    }
    ppuVar15 = local_78;
    ppuVar17 = local_80;
    uVar20 = 0;
    uVar21 = 0;
    if (local_78 != (undefined **)0x0) {
        ppuVar18 = (undefined **)0x0;
        do {
            local_80 = &PTR_FUN_140b569f0;
            local_68 = 1;
            local_70 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar13 = *(undefined8 **)(param_1 + 0x10);
            uVar8 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar8;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar6 = FUN_1400578c0(param_1);
            local_78 = (undefined **)((ulonglong)local_78 & 0xffffffff00000000 | (ulonglong)uVar6);
            FUN_1404b39c0(ppuVar17[(longlong)ppuVar18],&local_80);
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar7 + 0x38)) {
                puVar13 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
            }
            else {
                dVar19 = (double)iVar5;
                if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar13 = *(undefined8 **)(lVar7 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar19 >> 0x20);
                    local_res10 = SUB84(dVar19,0);
                    puVar13 = (undefined8 *)
                            (*(longlong *)(lVar7 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar13 + 3) == 3) && (dVar19 == (double)puVar13[2])) goto LAB_1407036f4;
                    puVar13 = (undefined8 *)puVar13[4];
                } while (puVar13 != (undefined8 *)0x0);
                puVar13 = &DAT_140a12138;
            }
            LAB_1407036f4:
            puVar12 = *(undefined8 **)(param_1 + 0x10);
            *puVar12 = *puVar13;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)local_res18;
            lVar7 = *(longlong *)(param_1 + 0x10);
            puVar13 = (undefined8 *)(lVar7 + 0x10);
            *(undefined8 **)(param_1 + 0x10) = puVar13;
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (uVar6 - 1 < *(uint *)(lVar14 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(int)(uVar6 - 1) * 0x10 + *(longlong *)(lVar14 + 0x18));
            }
            else {
                dVar19 = (double)uVar6;
                if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
                    puVar12 = *(undefined8 **)(lVar14 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar19 >> 0x20);
                    local_res10 = SUB84(dVar19,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar14 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar19 == (double)puVar12[2])) goto LAB_1407037bd;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_1407037bd:
            *puVar13 = *puVar12;
            *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(puVar12 + 1);
            lVar7 = *(longlong *)(param_1 + 0x10);
            *(longlong *)(param_1 + 0x10) = lVar7 + 0x10;
            FUN_14005ea50(param_1,lVar7 + -0x20,lVar7 + -0x10,lVar7);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            FUN_1400579e0();
            ppuVar18 = (undefined **)((longlong)ppuVar18 + 1);
            local_res18 = local_res18 + 1;
        } while (ppuVar18 < ppuVar15);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar5 - 1U < *(uint *)(lVar7 + 0x38)) {
        puVar13 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
    }
    else {
        dVar19 = (double)iVar5;
        if (dVar19 == (double)CONCAT44(uVar21,uVar20)) {
            puVar13 = *(undefined8 **)(lVar7 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar19 >> 0x20);
            local_res10 = SUB84(dVar19,0);
            puVar13 = (undefined8 *)
                    (*(longlong *)(lVar7 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar13 + 3) == 3) && (dVar19 == (double)puVar13[2])) goto LAB_1407038ad;
            puVar13 = (undefined8 *)puVar13[4];
        } while (puVar13 != (undefined8 *)0x0);
        puVar13 = &DAT_140a12138;
    }
    LAB_1407038ad:
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar13;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (ppuVar17 != (undefined **)0x0) {
        (**(code **)(ppuVar17[-2] + 8))(ppuVar17 + -2);
    }
    FUN_1400579e0(param_1);
    return 1;
}



void FUN_140703900(longlong param_1)

{
    int iVar1;
    undefined uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar2 = 1;
    uVar3 = FUN_1400f26a0(uVar7 + 0x180,1,0);
    uVar4 = FUN_1400f26a0(uVar7 + 0x180,2,0);
    puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x20);
    puVar8 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar8 = puVar6;
    }
    iVar1 = *(int *)(puVar8 + 1);
    if ((iVar1 == 0) || ((iVar1 == 1 && (*(int *)puVar8 == 0)))) {
        uVar2 = 0;
    }
    FUN_1404b1290(iVar1,param_1,uVar3,uVar4,uVar2);
    return;
}



undefined8 FUN_140703a00(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    uint *puVar3;
    byte bVar4;
    uint uVar5;
    longlong local_res8;

    uVar5 = FUN_140056d60(param_1,1);
    if (uVar5 != 0) {
        lVar1 = *(longlong *)(DAT_140c659d8 + 0x68);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar5) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        bVar4 = 1;
        if (local_res8 != lVar1) goto LAB_140703a73;
    }
    bVar4 = 0;
    LAB_140703a73:
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140703aa0(longlong param_1)

{
    undefined uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    uVar2 = FUN_140056d60(param_1,1);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar4 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        puVar4 = puVar3;
    }
    uVar1 = 0;
    if ((*(int *)(puVar4 + 1) != 0) && ((*(int *)(puVar4 + 1) != 1 || (*(int *)puVar4 != 0)))) {
        uVar1 = 1;
    }
    FUN_1404b10f0(DAT_140c659d8,uVar2,uVar1);
    return 1;
}



undefined8 FUN_140703b10(void)

{
    if (DAT_140c659d8 != 0) {
        FUN_1404b11b0();
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140703b30(void)

{
    uint uVar1;
    uint uVar2;

    uVar1 = FUN_140056d60();
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    if (uVar1 <= uVar2) {
        if ((DAT_140dc4c20 & 1) == 0) {
            DAT_140dc4c20 = DAT_140dc4c20 | 1;
            DAT_140dc4c2c = 0;
            _DAT_140dc4c30 = 1000;
            DAT_140dc4c28 = DAT_140c636a8 + -1000;
            _DAT_140dc4c34 = 1;
            DAT_140dc4c38 = 1000;
            FUN_1407dd89c();
        }
        uVar2 = DAT_140c636a8 - DAT_140dc4c28;
        if (uVar2 < DAT_140dc4c38) {
            if (DAT_140dc4c2c != _DAT_140dc4c34) {
                DAT_140dc4c2c = DAT_140dc4c2c + 1;
                FUN_1403c9e60(uVar2,uVar1);
                return 0;
            }
            FUN_1403cc530(DAT_140c65898,2);
            return 0;
        }
        if (_DAT_140dc4c30 <= uVar2) {
            DAT_140dc4c28 = DAT_140c636a8;
            DAT_140dc4c2c = 1;
            FUN_1403c9e60(uVar2,uVar1);
            return 0;
        }
        DAT_140dc4c28 = DAT_140dc4c28 + DAT_140dc4c38;
        FUN_1403c9e60(uVar2,uVar1);
    }
    return 0;
}



undefined8 FUN_140703c60(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    if ((DAT_140dc4c3c & 1) == 0) {
        DAT_140dc4c3c = DAT_140dc4c3c | 1;
        lVar3 = FUN_140200220();
        if (lVar3 == 0) {
            DAT_140dc4c40 = 5000;
        }
        else {
            DAT_140dc4c40 = *(int *)(lVar3 + 4);
        }
    }
    iVar2 = DAT_140dc4c40;
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)((float)iVar2 * 0.001);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140703ce0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    uint uVar3;
    longlong *plVar4;

    FUN_140056d60();
    if (DAT_140c658f8 != 0) {
        plVar4 = (longlong *)FUN_140448420();
        if (plVar4 != (longlong *)0x0) {
            uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)((uVar3 >> 2 & 1) != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140703d60(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    uint uVar8;
    double dVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    int local_res8;
    int iStackX12;
    undefined **local_78;
    int local_70;
    longlong local_68;
    undefined4 local_60;
    undefined local_58 [8];
    longlong local_50;

    local_78 = &PTR_FUN_140b569f0;
    local_60 = 1;
    local_68 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_70 = FUN_1400578c0(param_1);
    uVar10 = 0;
    uVar11 = 0;
    uVar8 = 0;
    do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar4 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar3 = FUN_1400578c0(param_1);
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
            puVar6 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
        }
        else {
            dVar9 = (double)iVar3;
            if (dVar9 == (double)CONCAT44(uVar11,uVar10)) {
                puVar6 = *(undefined8 **)(lVar5 + 0x20);
            }
            else {
                iStackX12 = (int)((ulonglong)dVar9 >> 0x20);
                local_res8 = SUB84(dVar9,0);
                puVar6 = (undefined8 *)
                        (*(longlong *)(lVar5 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar6 + 3) == 3) && (dVar9 == (double)puVar6[2])) goto LAB_140703ec1;
                puVar6 = (undefined8 *)puVar6[4];
            } while (puVar6 != (undefined8 *)0x0);
            puVar6 = &DAT_140a12138;
        }
        LAB_140703ec1:
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar5 = FUN_14018f0e0(local_58,L"nTypeEnum");
        lVar5 = *(longlong *)(lVar5 + 8);
        if (lVar5 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar7 = -1;
            do {
                lVar7 = lVar7 + 1;
            } while (*(char *)(lVar7 + lVar5) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar6 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_140062650(param_1,lVar5,lVar7);
            *(undefined4 *)(puVar6 + 1) = 4;
            *puVar6 = uVar4;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)uVar8;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        lVar5 = *(longlong *)(param_1 + 0x10);
        *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar5;
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar3 - 1U < *(uint *)(lVar7 + 0x38)) {
            puVar6 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
        }
        else {
            dVar9 = (double)iVar3;
            if (dVar9 == (double)CONCAT44(uVar11,uVar10)) {
                puVar6 = *(undefined8 **)(lVar7 + 0x20);
            }
            else {
                iStackX12 = (int)((ulonglong)dVar9 >> 0x20);
                local_res8 = SUB84(dVar9,0);
                puVar6 = (undefined8 *)
                        (*(longlong *)(lVar7 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                          (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar6 + 3) == 3) && (dVar9 == (double)puVar6[2])) goto LAB_14070404d;
                puVar6 = (undefined8 *)puVar6[4];
            } while (puVar6 != (undefined8 *)0x0);
            puVar6 = &DAT_140a12138;
        }
        LAB_14070404d:
        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar5) = *puVar6;
        *(undefined4 *)(lVar5 + -0x28) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        FUN_1400fb1d0(&local_78);
        FUN_1400579e0();
        uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    lVar5 = *(longlong *)(*(longlong *)(local_68 + 0x20) + 0xa0);
    if (local_70 - 1U < *(uint *)(lVar5 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_70 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
    }
    else {
        dVar9 = (double)local_70;
        if (dVar9 == (double)CONCAT44(uVar11,uVar10)) {
            puVar6 = *(undefined8 **)(lVar5 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar9 >> 0x20);
            local_res8 = SUB84(dVar9,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar5 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar9 == (double)puVar6[2])) goto LAB_14070413a;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_14070413a:
    puVar1 = *(undefined8 **)(local_68 + 0x10);
    *puVar1 = *puVar6;
    uVar10 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar10;
    *(longlong *)(local_68 + 0x10) = *(longlong *)(local_68 + 0x10) + 0x10;
    FUN_1400579e0(local_68,uVar10,local_70);
    return 1;
}



undefined8 FUN_140704bc0(longlong param_1)

{
    double *pdVar1;
    byte bVar2;

    bVar2 = FUN_1404cf1a0();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140704c00(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    longlong lVar4;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_140704c40;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_140704c40:
    lVar1 = *(longlong *)(DAT_140c65898 + 0x7340);
    if ((lVar4 == lVar1) &&
        (puVar2 = (undefined8 *)FUN_1400d6530(param_1,1), *(undefined8 **)(lVar1 + 0xe80) != puVar2)) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if (*(longlong **)(lVar1 + 0xe80) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar1 + 0xe80) + 8))();
            *(undefined8 *)(lVar1 + 0xe80) = 0;
        }
        *(undefined8 **)(lVar1 + 0xe80) = puVar2;
        if (puVar2 != (undefined8 *)0x0) {
            FUN_1400d42f0(puVar2,1);
        }
    }
    return 0;
}



undefined8 FUN_140704ce0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;

    uVar1 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar1 * 8);
                goto LAB_140704d1a;
            }
            uVar1 = (ulonglong)((int)uVar1 + 1);
        } while (uVar1 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar2 = 0;
    LAB_140704d1a:
    if (lVar2 != *(longlong *)(DAT_140c65898 + 0x7340)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_1400d62a0(param_1,*(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0xe80));
    return 1;
}



undefined8 FUN_140704d70(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    FUN_140056d60();
    iVar2 = FUN_1403a9f00();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140704e20(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong *plVar3;

    plVar3 = (longlong *)0x0;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        plVar3 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x16f0);
    }
    if (plVar3 == (longlong *)0x0) {
        iVar2 = 0;
    }
    else {
        iVar2 = (**(code **)(*plVar3 + 0x78))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140704e90(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    longlong local_res8;
    undefined local_58 [4];
    undefined auStack84 [4];
    undefined8 uStack80;
    longlong local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    longlong local_28;

    _local_58 = ZEXT816(0);
    puVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar6 = *(undefined8 **)(param_1 + 0x18);
    }
    local_48 = FUN_140062650(param_1,&DAT_1409f869c,1);
    local_40 = 4;
    FUN_14005e8e0(param_1,puVar6,&local_48,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar10 = 0;
    uVar11 = 0;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    uVar8 = uVar10;
    uVar9 = uVar11;
    if ((iVar3 == 3) ||
        ((iVar3 == 4 &&
          (iVar3 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), uVar8 = uVar10, uVar9 = uVar11, iVar3 != 0)))) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
        uVar10 = uVar8;
        uVar11 = uVar9;
        if (iVar3 == 3) {
            LAB_140704f70:
            uVar8 = (undefined4)*plVar5;
            uVar9 = (undefined4)((ulonglong)*plVar5 >> 0x20);
        }
        else {
            if ((iVar3 == 4) && (iVar3 = FUN_14005ac80(*plVar5 + 0x20,&local_res8), iVar3 != 0)) {
                local_40 = 3;
                plVar5 = &local_48;
                local_48 = local_res8;
                uVar10 = uVar8;
                uVar11 = uVar9;
                goto LAB_140704f70;
            }
            uVar10 = uVar8;
            uVar11 = uVar9;
        }
        _local_58 = CONCAT124(_auStack84,(float)(double)CONCAT44(uVar9,uVar8));
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar6 = *(undefined8 **)(param_1 + 0x18);
    }
    local_48 = FUN_140062650(param_1,&DAT_1409f8674,1);
    local_40 = 4;
    FUN_14005e8e0(param_1,puVar6,&local_48,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    uVar8 = uVar10;
    uVar9 = uVar11;
    if ((iVar3 == 3) ||
        ((iVar3 == 4 &&
          (iVar3 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), uVar8 = uVar10, uVar9 = uVar11, iVar3 != 0)))) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
        uVar10 = uVar8;
        uVar11 = uVar9;
        if (iVar3 == 3) {
            LAB_140705035:
            uVar8 = (undefined4)*plVar5;
            uVar9 = (undefined4)((ulonglong)*plVar5 >> 0x20);
        }
        else if ((iVar3 == 4) &&
                 (iVar3 = FUN_14005ac80(*plVar5 + 0x20,&local_res8), uVar10 = uVar8, uVar11 = uVar9,
                         iVar3 != 0)) {
            local_40 = 3;
            plVar5 = &local_48;
            local_48 = local_res8;
            goto LAB_140705035;
        }
        _local_58 = CONCAT44((float)(double)CONCAT44(uVar9,uVar8),local_58);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar6 = *(undefined8 **)(param_1 + 0x18);
    }
    local_48 = FUN_140062650(param_1,&DAT_1409f863c,1);
    local_40 = 4;
    FUN_14005e8e0(param_1,puVar6,&local_48,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    if ((iVar3 != 3) &&
        ((iVar3 != 4 ||
          (iVar3 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), iVar3 == 0)))) goto LAB_1407050ff;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x10);
    if (iVar3 == 3) {
        LAB_1407050f2:
        uVar10 = (undefined4)*plVar5;
        uVar11 = (undefined4)((ulonglong)*plVar5 >> 0x20);
    }
    else if ((iVar3 == 4) && (iVar3 = FUN_14005ac80(*plVar5 + 0x20,&local_res8), iVar3 != 0)) {
        local_30 = 3;
        plVar5 = &local_38;
        local_38 = local_res8;
        goto LAB_1407050f2;
    }
    LAB_1407050ff:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    plVar5 = (longlong *)0x0;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar7 = plVar5;
    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar4 = FUN_140056d60(param_1,2);
        plVar7 = (longlong *)(ulonglong)uVar4;
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        plVar5 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x16f0);
    }
    if ((plVar5 == (longlong *)0x0) ||
        (iVar3 = (**(code **)(*plVar5 + 0x78))(plVar5), lVar2 = DAT_140c65898, iVar3 == 0)) {
        FUN_14042fbc0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_58,plVar7);
    }
    else {
        *(undefined4 *)(DAT_140c65898 + 0x7ee0) = local_58;
        *(undefined4 *)(lVar2 + 0x7ee4) = auStack84;
        *(undefined4 *)(lVar2 + 0x7ee8) = (undefined4)uStack80;
        *(undefined4 *)(lVar2 + 0x7eec) = uStack80._4_4_;
        lVar1 = *(longlong *)(lVar2 + 0x7340);
        *(int *)(lVar2 + 0x7ef0) = (int)plVar7;
        *(undefined4 *)(lVar2 + 0x7ef4) = 1;
        FUN_1400fa3c0(&local_38,*(undefined8 *)(lVar1 + 400));
        FUN_1400ea3e0(lVar1,"NavPointSet",&DAT_1409ee944,local_30);
        if (local_28 != 0) {
            FUN_1400579e0();
        }
    }
    return 0;
}



void FUN_140705250(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    FUN_1400fa3c0(local_28,*(undefined8 *)(param_1 + 0x10),DAT_140c65898 + 0x7ee0);
    FUN_1400fb2a0(param_1,L"tPosition",local_20);
    lVar7 = *(longlong *)(param_1 + 0x10);
    uVar5 = (ulonglong)*(uint *)(DAT_140c65898 + 0x7ef0);
    puVar2 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(lVar7 + 0x10);
    *puVar1 = *puVar2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar1,L"nMapZoneId",uVar5 & 0xffffffff);
    uVar6 = 0;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar3 = *plVar3 + -0x10;
    if ((DAT_140c658f8 != 0) && (plVar3 = (longlong *)FUN_140448420(), plVar3 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
        uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
        if ((uVar5 & 1) == 0) {
            uVar6 = (**(code **)(*plVar3 + 8))(plVar3);
        }
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
    puVar2 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(lVar7 + 0x10);
    *puVar1 = *puVar2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_1 + 0x10),puVar1,L"strZoneName",uVar6);
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar3 = *plVar3 + -0x10;
    if (local_18 == 0) {
        return;
    }
    FUN_1400579e0();
    return;
}



undefined8 FUN_1407053b0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(int *)(DAT_140c65898 + 0x7ef4) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_140705250(&local_28);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_1407054a0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;

    if (*(int *)(DAT_140c65898 + 0x7ef4) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = 0;
    do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
    } while ((&DAT_1409e8535)[lVar4] != '\0');
    plVar2 = (longlong *)FUN_14018b280(lVar4 + 0x12,0);
    if (plVar2 != (longlong *)0x0) {
        plVar2[1] = lVar3;
        *plVar2 = (longlong)&PTR_LAB_140b55060;
    }
    plVar1 = plVar2 + 2;
    FUN_1407db590(plVar1,&DAT_1409e8534);
    *(undefined *)(lVar3 + (longlong)plVar1) = 0;
    if (plVar1 == (longlong *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = -1;
    do {
        lVar3 = lVar3 + 1;
    } while (*(char *)((longlong)plVar1 + lVar3) != '\0');
    FUN_140058710(param_1,plVar1);
    (**(code **)(*plVar2 + 8))(plVar2);
    return 1;
}



undefined8 FUN_1407055b0(undefined8 param_1)

{
    uint uVar1;
    ulonglong local_res10 [3];

    local_res10[0] = 1;
    uVar1 = FUN_140056d60(param_1,1);
    local_res10[0] = local_res10[0] & 0xffffffff | (ulonglong)uVar1 << 0x20;
    FUN_1403f4900(DAT_140c65898,299,local_res10);
    return 0;
}



undefined8 FUN_1407055f0(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    double *pdVar3;
    longlong *plVar4;
    uint *puVar5;
    uint uVar6;

    FUN_140056d60(param_1,1);
    uVar6 = 0;
    if (DAT_140c658f8 != 0) {
        plVar4 = (longlong *)FUN_140448420();
        if (plVar4 != (longlong *)0x0) {
            puVar5 = (uint *)(**(code **)(*plVar4 + 0xa8))(plVar4);
            uVar1 = *puVar5;
            if (uVar1 != 0) {
                uVar2 = puVar5[1];
                uVar6 = 0;
                if (uVar2 != 0) {
                    if (uVar1 == uVar2) {
                        uVar6 = 100;
                    }
                    else {
                        uVar6 = (uint)(longlong)(((float)(ulonglong)uVar1 / (float)(ulonglong)uVar2) * 100.0);
                        if (uVar6 == 0) {
                            uVar6 = 1;
                        }
                        else if (99 < uVar6) {
                            uVar6 = 99;
                        }
                    }
                }
            }
        }
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407056b0(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    FUN_140056d60();
    iVar2 = FUN_1403a9cd0();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(-1 < iVar2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140705730(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;

    uVar3 = FUN_140056d60(param_1,1);
    lVar2 = DAT_140c65898;
    iVar4 = FUN_1403ac840(DAT_140c65898 + 0xa0,2,uVar3);
    if (iVar4 == 0) {
        iVar4 = -0x7fffbffb;
    }
    else {
        *(undefined4 *)(lVar2 + 0x7f70) = uVar3;
        iVar4 = 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(-1 < iVar4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407057e0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140200220(0x91);
    if (lVar2 == 0) {
        iVar3 = 0x32;
    }
    else {
        iVar3 = *(int *)(lVar2 + 4);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140705830(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    if (DAT_140c65898 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_1403d2140(DAT_140c65898,10);
    lVar2 = FUN_140200220();
    if (lVar2 == 0) {
        iVar3 = 1;
    }
    else {
        iVar3 = *(int *)(lVar2 + 4);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140705bd0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    FUN_140056d60(param_1,1);
    lVar1 = FUN_14070d100();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar1 + 0x18));
        if (*(longlong *)(lVar1 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar2 = -1;
            do {
                lVar2 = lVar2 + 1;
            } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar2) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_140705c70(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 uVar3;
    undefined4 local_res10;
    uint local_res14;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    local_res10 = 300;
    local_res14 = 0xffffffff;
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        iVar2 = FUN_140056d60(param_1);
    }
    else {
        iVar2 = 0;
    }
    local_res14 = iVar2 - 1;
    if (local_res14 < *(uint *)(DAT_140c65898 + 0xc4)) {
        local_res10 = 1;
        uVar3 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res10);
        uVar3 = FUN_140415d60(param_1,uVar3);
        return uVar3;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140705d10(longlong param_1,undefined4 param_2)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    undefined4 local_res8;
    uint local_resc;
    undefined4 local_res18;
    undefined4 local_res1c;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    iVar4 = 5;
    local_res18 = 300;
    local_res1c = 0xffffffff;
    local_res8 = 300;
    local_resc = 0xffffffff;
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        iVar3 = FUN_140056d60(param_1,1);
    }
    else {
        iVar3 = 0;
    }
    local_resc = iVar3 - 1;
    if (local_resc < *(uint *)(DAT_140c65898 + 0xc4)) {
        local_res8 = 1;
        iVar3 = FUN_140399de0(DAT_140c65898,&local_res8,&local_res18,0,param_2);
        if (iVar3 == 0) {
            iVar4 = 0;
        }
        else if (iVar3 == 0xe) {
            iVar4 = 1;
        }
        else if (iVar3 == 0x1a) {
            iVar4 = 2;
        }
        else if (iVar3 == 0x13e) {
            iVar4 = 4;
        }
        else if (iVar3 == 0x13f) {
            iVar4 = 3;
        }
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140705e30(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    undefined8 *puVar7;
    longlong lVar8;
    uint uVar9;
    undefined4 local_res10;
    uint local_res14;
    undefined4 local_res18;
    uint local_res1c;

    puVar7 = *(undefined8 **)(param_1 + 0x18);
    uVar9 = 0;
    uVar4 = uVar9;
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar7 + 1))) {
        uVar4 = FUN_140056d60(param_1,1);
    }
    uVar4 = uVar4 - 1;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    uVar5 = uVar9;
    if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar5 = FUN_140056d60(param_1,2);
    }
    lVar3 = DAT_140c65898;
    uVar5 = uVar5 - 1;
    if ((uVar4 < *(uint *)(DAT_140c65898 + 0xc4)) && (uVar5 < *(uint *)(DAT_140c65898 + 0xc4))) {
        local_res18 = 1;
        local_res10 = 1;
        local_res14 = uVar5;
        local_res1c = uVar4;
        lVar8 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_res18);
        if ((lVar8 == 0) &&
            (lVar8 = FUN_1403ac780(lVar3 + 0xa0,&local_res10), local_res14 = uVar4, local_res1c = uVar5,
                    lVar8 == 0)) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 1;
            puVar1[2] = 1;
            goto LAB_140705f48;
        }
        iVar6 = FUN_1403c17d0(lVar3,&local_res18,&local_res10,0);
        uVar9 = (uint)(iVar6 == 0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(uVar9 != 0);
    LAB_140705f48:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140705f70(void)

{
    FUN_140549270();
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140705f90(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    int *piVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined4 local_res10 [2];

    local_res10[0] = FUN_140056d60();
    iVar1 = FUN_1407a1440();
    uVar5 = 0;
    if (iVar1 == 0) goto LAB_140706016;
    if ((*(longlong *)(DAT_140c65898 + 0x78) == 0) || (DAT_140c65898 == 0)) {
        LAB_140705fdf:
        lVar2 = FUN_1407a0fd0(DAT_140c65b70);
        lVar6 = DAT_140c65898;
        if (lVar2 == 0) goto LAB_140706016;
    }
    else {
        lVar6 = DAT_140c65898;
        lVar2 = FUN_1405a5b90(DAT_140c65898);
        if (lVar2 == 0) goto LAB_140705fdf;
    }
    piVar3 = (int *)(*(longlong *)(lVar2 + 0x70) + 0x198);
    do {
        if (*piVar3 == 10) {
            lVar2 = FUN_1403bacc0();
            if ((lVar2 != 0) && (*(char *)(lVar2 + 8) != '\0')) {
                if ((DAT_140dc4c4c & 1) == 0) {
                    DAT_140dc4c4c = DAT_140dc4c4c | 1;
                    DAT_140dc4c54 = 0;
                    _DAT_140dc4c58 = 3000;
                    DAT_140dc4c50 = DAT_140c636a8 + -3000;
                    _DAT_140dc4c5c = 1;
                    DAT_140dc4c60 = 3000;
                    FUN_1407dd89c();
                    lVar6 = DAT_140c65898;
                }
                if ((uint)(DAT_140c636a8 - DAT_140dc4c50) < DAT_140dc4c60) {
                    if (DAT_140dc4c54 == _DAT_140dc4c5c) {
                        puVar4 = *(undefined4 **)(param_1 + 0x10);
                        *puVar4 = 0;
                        puVar4[2] = 1;
                        goto LAB_140706023;
                    }
                    DAT_140dc4c54 = DAT_140dc4c54 + 1;
                }
                else if ((uint)(DAT_140c636a8 - DAT_140dc4c50) < _DAT_140dc4c58) {
                    DAT_140dc4c50 = DAT_140dc4c50 + DAT_140dc4c60;
                }
                else {
                    DAT_140dc4c50 = DAT_140c636a8;
                    DAT_140dc4c54 = 1;
                }
                FUN_1403f4900(lVar6,0x82f,local_res10);
                puVar4 = *(undefined4 **)(param_1 + 0x10);
                *puVar4 = 1;
                goto LAB_14070601c;
            }
            break;
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 1;
    } while (uVar5 < 5);
    LAB_140706016:
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    *puVar4 = 0;
    LAB_14070601c:
    puVar4[2] = 1;
    LAB_140706023:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140706140(longlong param_1,longlong param_2,uint **param_3,int param_4)

{
    uint *puVar1;
    undefined4 *puVar2;
    double *pdVar3;
    int iVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined8 *puVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong *plVar11;
    undefined8 *puVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;
    float fVar16;
    undefined local_a8 [12];
    int iStack156;
    undefined8 local_98;
    longlong local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    longlong local_68;
    undefined8 local_60;

    lVar13 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)**param_3;
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar12,L"idNode",uVar15 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar13 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)(*param_3)[4];
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar12,L"eType",uVar15 & 0xffffffff);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    uVar8 = FUN_14034bdd0();
    lVar13 = *(longlong *)(param_2 + 0x10);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar12,L"strName",uVar8);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    if (param_4 == 0) {
        iVar4 = FUN_1404ada70();
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar12 = *(undefined8 **)(lVar13 + 0x10);
        *puVar12 = *puVar7;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar9 = FUN_14018f0e0(&local_70,L"bUnlocked");
        if (*(longlong *)(lVar9 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            goto LAB_140706371;
        }
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar10) != '\0');
    }
    else {
        iVar4 = FUN_1404ad9b0(DAT_140c659d0);
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar12 = *(undefined8 **)(lVar13 + 0x10);
        *puVar12 = *puVar7;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar9 = FUN_14018f0e0(&local_70,L"bUnlocked");
        if (*(longlong *)(lVar9 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            goto LAB_140706371;
        }
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar10) != '\0');
    }
    FUN_140058710(lVar13);
    LAB_140706371:
    uVar6 = 0;
    lVar9 = -1;
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    puVar1 = *(uint **)(lVar13 + 0x10);
    *puVar1 = (uint)(iVar4 != 0);
    puVar1[2] = 1;
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar13,0xfffffffd);
    FUN_14005ea50(lVar13,uVar8,*(longlong *)(lVar13 + 0x10) + -0x20,
                  *(longlong *)(lVar13 + 0x10) + -0x10);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar13 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)(*param_3)[9];
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar12,L"nRecommendedMinLevel",uVar15 & 0xffffffff)
            ;
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    lVar13 = *(longlong *)(param_2 + 0x10);
    uVar15 = (ulonglong)(*param_3)[10];
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar12,L"nRecommendedMaxLevel",uVar15 & 0xffffffff)
            ;
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    uVar15 = (ulonglong)(*param_3)[8];
    if ((*param_3)[8] != 0) {
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar12 = *(undefined8 **)(lVar13 + 0x10);
        *puVar12 = *puVar7;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar12,L"nAutoUnlockLevel",uVar15 & 0xffffffff);
        plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar11 = *plVar11 + -0x10;
    }
    if ((*param_3)[4] != 1) {
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar12 = *(undefined8 **)(lVar13 + 0x10);
        *puVar12 = *puVar7;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(&local_70,L"bRapidTransportAllowed");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
            FUN_140058710(lVar13);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar2 = *(undefined4 **)(lVar13 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar13,0xfffffffd);
        FUN_14005ea50(lVar13,uVar8,*(longlong *)(lVar13 + 0x10) + -0x20,
                      *(longlong *)(lVar13 + 0x10) + -0x10);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
        plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar11 = *plVar11 + -0x10;
        local_88 = 0;
        local_80 = 1;
        local_78 = 0;
        iVar4 = FUN_1404adc50();
        if (iVar4 != 0) {
            lVar13 = *(longlong *)(param_2 + 0x10);
            plVar11 = (longlong *)FUN_140059170(lVar13,0x18);
            *plVar11 = local_88;
            plVar11[1] = local_80;
            plVar11[2] = local_78;
            lVar10 = *(longlong *)(lVar13 + 0x20);
            uVar8 = FUN_140062650(lVar13,"Game.Money",10);
            local_a8 = CONCAT48(4,uVar8);
            FUN_14005e8e0(lVar13,lVar10 + 0xa0,local_a8,*(undefined8 *)(lVar13 + 0x10));
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
            FUN_140058bf0(lVar13,0xfffffffe);
            FUN_1400fb540(param_2,L"monCostRapidTransport");
            plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar11 = *plVar11 + -0x10;
        }
        local_70 = 0;
        local_68 = 1;
        local_60 = 0;
        _local_a8 = ZEXT816(1) << 0x40;
        local_98 = 0;
        iVar4 = FUN_1404ade10();
        if ((iVar4 != 0) && (local_88 == local_a8._0_8_)) {
            if ((int)local_80 == local_a8._8_4_) {
                if (local_80._4_4_ == iStack156) {
                    if ((int)local_78 == (int)local_98) {
                        if (local_78._4_4_ == local_98._4_4_) {
                            lVar13 = *(longlong *)(param_2 + 0x10);
                            puVar12 = (undefined8 *)FUN_140059170(lVar13,0x18);
                            *puVar12 = local_70;
                            puVar12[1] = local_68;
                            puVar12[2] = local_60;
                            lVar10 = *(longlong *)(lVar13 + 0x20);
                            uVar8 = FUN_140062650(lVar13,"Game.Money",10);
                            local_a8 = CONCAT48(4,uVar8);
                            FUN_14005e8e0(lVar13,lVar10 + 0xa0,local_a8,*(undefined8 *)(lVar13 + 0x10));
                            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
                            FUN_140058bf0(lVar13,0xfffffffe);
                            FUN_1400fb540(param_2,L"monAltCostRapidTransport");
                            plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
                            *plVar11 = *plVar11 + -0x10;
                        }
                    }
                }
            }
        }
        iVar4 = FUN_1404adfe0();
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar12 = *(undefined8 **)(lVar13 + 0x10);
        *puVar12 = *puVar7;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(&local_70,L"bTransportAllowed");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
            FUN_140058710(lVar13);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar1 = *(uint **)(lVar13 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar4 != 0);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar13,0xfffffffd);
        FUN_14005ea50(lVar13,uVar8,*(longlong *)(lVar13 + 0x10) + -0x20,
                      *(longlong *)(lVar13 + 0x10) + -0x10);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
        plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar11 = *plVar11 + -0x10;
    }
    if ((*param_3)[4] != 2) {
        lVar13 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar12 = *(undefined8 **)(lVar13 + 0x10);
        *puVar12 = *puVar7;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        lVar13 = *(longlong *)(param_2 + 0x10);
        lVar10 = FUN_14018f0e0(&local_70,L"bTaxiAllowed");
        if (*(longlong *)(lVar10 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + 8) = 0;
            *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        }
        else {
            lVar14 = -1;
            do {
                lVar14 = lVar14 + 1;
            } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
            FUN_140058710(lVar13);
        }
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        puVar2 = *(undefined4 **)(lVar13 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
        uVar8 = FUN_1400580e0(lVar13,0xfffffffd);
        FUN_14005ea50(lVar13,uVar8,*(longlong *)(lVar13 + 0x10) + -0x20,
                      *(longlong *)(lVar13 + 0x10) + -0x10);
        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + -0x20;
        plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar11 = *plVar11 + -0x10;
    }
    lVar13 = FUN_14024b980((*param_3)[6]);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar12 + 1) = 5;
    *puVar12 = uVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(param_1);
    fVar16 = *(float *)(lVar13 + 0xc);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = FUN_14018f0e0(&local_70,&DAT_1409f87e4);
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(param_1);
    }
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar16;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    fVar16 = *(float *)(lVar13 + 0x10);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = FUN_14018f0e0(&local_70,&DAT_1409f875c);
    if (*(longlong *)(lVar10 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar14) != '\0');
        FUN_140058710(param_1);
    }
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar16;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    fVar16 = *(float *)(lVar13 + 0x14);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = FUN_14018f0e0(&local_70,&DAT_1409f8734);
    lVar10 = *(longlong *)(lVar10 + 8);
    if (lVar10 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar10 + lVar9) != '\0');
        FUN_140058710(param_1,lVar10,lVar9);
    }
    if (local_68 != 0) {
        FUN_14018b900(local_68,0);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar16;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar8,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    FUN_1400fb2a0(param_2,L"tLocation",uVar5);
    _local_a8 = ZEXT1216(*(undefined (*) [12])(lVar13 + 0xc));
    FUN_14024b980((*param_3)[6]);
    FUN_14024b980((*param_3)[6]);
    if ((DAT_140c658f8 != 0) &&
        (puVar12 = (undefined8 *)FUN_140448be0(), puVar12 != (undefined8 *)0x0)) {
        uVar6 = (**(code **)*puVar12)(puVar12);
    }
    lVar13 = *(longlong *)(param_2 + 0x10);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar12 = *(undefined8 **)(lVar13 + 0x10);
    *puVar12 = *puVar7;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar12,L"idMapZone",uVar6);
    plVar11 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar11 = *plVar11 + -0x10;
    FUN_1400579e0(param_1);
    return;
}



undefined8 FUN_140706ce0(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    uint uVar5;
    undefined4 uVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined8 *puVar10;
    longlong *plVar11;
    double dVar12;
    int local_res8;
    int iStackX12;
    undefined **local_68;
    int local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    local_50 = 1;
    local_68 = &PTR_FUN_140b569f0;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_60 = FUN_1400578c0(param_1);
    plVar11 = (longlong *)**(longlong **)(param_2 + 8);
    lVar8 = param_1;
    if (plVar11 != *(longlong **)(param_2 + 8)) {
        do {
            plVar2 = (longlong *)plVar11[2];
            if ((plVar2 != (longlong *)0x0) && ((~(*(uint *)(*plVar2 + 0xc) >> 1) & 1) != 0)) {
                plVar9 = *(longlong **)(DAT_140c65898 + 0x1bf0);
                if (plVar9 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*plVar9 + 0x18))();
                    plVar9 = (longlong *)(ulonglong)uVar5;
                }
                iVar1 = *(int *)(*plVar2 + 0x14);
                if ((((iVar1 == 0) || ((iVar1 == 1 && ((int)plVar9 == 0xa7)))) ||
                     ((iVar1 == 2 && ((int)plVar9 == 0xa6)))) &&
                    (((*(byte *)(*plVar2 + 0xc) & 4) == 0 && (lVar8 = FUN_14024b980(), lVar8 != 0)))) {
                    local_48 = &PTR_FUN_140b569f0;
                    local_30 = 1;
                    local_38 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    uVar7 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar10 + 1) = 5;
                    *puVar10 = uVar7;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar6 = FUN_1400578c0(param_1);
                    local_40 = uVar6;
                    FUN_140706140(param_1,&local_48);
                    FUN_1400fb1d0(&local_68,uVar6);
                    FUN_1400579e0();
                }
            }
            plVar11 = (longlong *)*plVar11;
            lVar8 = local_58;
        } while (plVar11 != (longlong *)*(longlong *)(param_2 + 8));
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xa0);
    if (local_60 - 1U < *(uint *)(lVar3 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(local_60 + -1) * 0x10 + *(longlong *)(lVar3 + 0x18));
    }
    else {
        dVar12 = (double)local_60;
        if (dVar12 == 0.0) {
            puVar10 = *(undefined8 **)(lVar3 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar3 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar12 == (double)puVar10[2])) goto LAB_140706f55;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_140706f55:
    puVar4 = *(undefined8 **)(lVar8 + 0x10);
    *puVar4 = *puVar10;
    uVar6 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar4 + 1) = uVar6;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400579e0(lVar8,uVar6,local_60);
    return 1;
}



undefined8 FUN_140706f90(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        FUN_140056d60(param_1,1);
    }
    lVar2 = FUN_1404acac0();
    if ((lVar2 != 0) && ((longlong *)**(longlong **)(lVar2 + 8) != *(longlong **)(lVar2 + 8))) {
        uVar3 = FUN_140706ce0(param_1,lVar2,1);
        return uVar3;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140707020(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    undefined ***pppuVar10;
    undefined8 uVar11;
    longlong lVar12;
    longlong *plVar13;
    longlong *plVar14;
    longlong lVar15;
    float fVar16;
    undefined **ppuVar17;
    float fVar18;
    float fVar19;
    undefined4 uVar20;
    float fVar21;
    undefined4 uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    undefined **local_res8;
    undefined **local_c8;
    undefined4 local_c0;
    longlong local_b8;
    undefined4 local_b0;
    undefined **local_a8;
    int local_a0;
    longlong local_98;
    undefined4 local_90;
    undefined local_88 [8];
    longlong local_80;

    FUN_140056d60(param_1,1);
    local_90 = 1;
    local_a8 = &PTR_FUN_140b569f0;
    local_a0 = -2;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    local_98 = param_1;
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 5)) {
        FUN_1400579e0(param_1,0xfffffffe,0xfffffffe);
        puVar5 = *(undefined8 **)(local_98 + 0x10);
        puVar6 = (undefined8 *)(*(longlong *)(local_98 + 0x18) + 0x10);
        puVar7 = &DAT_140a12138;
        if (puVar6 < puVar5) {
            puVar7 = puVar6;
        }
        *puVar5 = *puVar7;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + 0x10;
        local_a0 = FUN_1400578c0(local_98);
    }
    plVar14 = (longlong *)0x0;
    if ((local_98 == 0) || (local_a0 == -2)) {
        LAB_140707595:
        FUN_140056570(param_1,2,"Invalid position table");
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar9 = local_98;
        puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_98 + 0x20) + 0xa0));
        puVar5 = *(undefined8 **)(lVar9 + 0x10);
        lVar12 = -1;
        *puVar5 = *puVar7;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        iVar3 = -1;
        puVar5 = (undefined8 *)(*(longlong *)(local_98 + 0x10) + -0x10);
        if (puVar5 != &DAT_140a12138) {
            iVar3 = *(int *)(*(longlong *)(local_98 + 0x10) + -8);
        }
        *(undefined8 **)(local_98 + 0x10) = puVar5;
        if ((iVar3 != 5) || (iVar3 = (*(code *)local_a8[1])(&local_a8), iVar3 == 0)) goto LAB_140707595;
        lVar8 = local_98;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_98 + 0x20) + 0xa0),local_a0);
        lVar9 = local_98;
        puVar5 = *(undefined8 **)(lVar8 + 0x10);
        *puVar5 = *puVar7;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = FUN_14018f0e0(local_88,&DAT_1409f86c4);
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 8) = 0;
            *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        }
        else {
            lVar15 = -1;
            do {
                lVar15 = lVar15 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar15) != '\0');
            FUN_140058710(lVar9);
        }
        if (local_80 != 0) {
            FUN_14018b900(local_80,0);
        }
        lVar9 = *(longlong *)(local_98 + 0x10) + -0x10;
        FUN_14005e8e0(local_98,*(longlong *)(local_98 + 0x10) + -0x20,lVar9,lVar9);
        lVar9 = *(longlong *)(local_98 + 0x10);
        pppuVar10 = (undefined ***)(lVar9 + -0x10);
        if ((pppuVar10 == (undefined ***)&DAT_140a12138) || (*(int *)(lVar9 + -8) != 3)) {
            LAB_14070758d:
            *(longlong *)(local_98 + 0x10) = lVar9 + -0x20;
            goto LAB_140707595;
        }
        uVar20 = 0;
        uVar22 = 0;
        if (*(int *)(lVar9 + -8) == 3) {
            LAB_140707279:
            ppuVar17 = *pppuVar10;
        }
        else {
            if ((*(int *)(lVar9 + -8) == 4) &&
                (iVar3 = FUN_14005ac80(*pppuVar10 + 4,&local_res8), iVar3 != 0)) {
                local_c0 = 3;
                pppuVar10 = &local_c8;
                local_c8 = local_res8;
                goto LAB_140707279;
            }
            ppuVar17 = (undefined **)CONCAT44(uVar22,uVar20);
        }
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + -0x20;
        fVar25 = (float)(double)ppuVar17;
        iVar3 = (*(code *)local_a8[1])(&local_a8);
        if (iVar3 == 0) goto LAB_140707595;
        lVar9 = local_98;
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_98 + 0x20) + 0xa0),local_a0);
        lVar8 = local_98;
        puVar5 = *(undefined8 **)(lVar9 + 0x10);
        *puVar5 = *puVar7;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
        lVar9 = FUN_14018f0e0(local_88,&DAT_1409f881c);
        lVar9 = *(longlong *)(lVar9 + 8);
        if (lVar9 == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            do {
                lVar12 = lVar12 + 1;
            } while (*(char *)(lVar9 + lVar12) != '\0');
            FUN_140058710(lVar8,lVar9,lVar12);
        }
        if (local_80 != 0) {
            FUN_14018b900(local_80,0);
        }
        lVar9 = *(longlong *)(local_98 + 0x10) + -0x10;
        FUN_14005e8e0(local_98,*(longlong *)(local_98 + 0x10) + -0x20,lVar9,lVar9);
        lVar9 = *(longlong *)(local_98 + 0x10);
        pppuVar10 = (undefined ***)(lVar9 + -0x10);
        if ((pppuVar10 == (undefined ***)&DAT_140a12138) || (*(int *)(lVar9 + -8) != 3))
            goto LAB_14070758d;
        if (*(int *)(lVar9 + -8) == 3) {
            LAB_140707397:
            uVar20 = SUB84(*pppuVar10,0);
            uVar22 = (undefined4)((ulonglong)*pppuVar10 >> 0x20);
        }
        else if ((*(int *)(lVar9 + -8) == 4) &&
                 (iVar3 = FUN_14005ac80(*pppuVar10 + 4,&local_res8), iVar3 != 0)) {
            local_c0 = 3;
            pppuVar10 = &local_c8;
            local_c8 = local_res8;
            goto LAB_140707397;
        }
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + -0x20;
        fVar24 = (float)(double)CONCAT44(uVar22,uVar20);
        lVar9 = FUN_1404acb30();
        if ((lVar9 != 0) &&
            (plVar13 = (longlong *)**(longlong **)(lVar9 + 8), plVar13 != *(longlong **)(lVar9 + 8))) {
            fVar23 = 1.0;
            fVar21 = 0.0;
            do {
                plVar2 = (longlong *)plVar13[2];
                if ((plVar2 != (longlong *)0x0) && ((~(*(uint *)(*plVar2 + 0xc) >> 1) & 1) != 0)) {
                    iVar3 = 0;
                    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                        iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
                    }
                    lVar12 = *plVar2;
                    iVar1 = *(int *)(lVar12 + 0x14);
                    if ((((iVar1 == 0) || ((iVar1 == 1 && (iVar3 == 0xa7)))) ||
                         ((iVar1 == 2 && (iVar3 == 0xa6)))) &&
                        (((*(byte *)(lVar12 + 0xc) & 4) == 0 &&
                          (lVar12 = FUN_14024b980(*(undefined4 *)(lVar12 + 0x18)), lVar12 != 0)))) {
                        fVar16 = fVar25 - *(float *)(lVar12 + 0xc);
                        uVar4 = 2;
                        fVar19 = fVar23;
                        while( true ) {
                            if ((uVar4 & 1) != 0) {
                                fVar19 = fVar19 * fVar16;
                            }
                            uVar4 = uVar4 >> 1;
                            if (uVar4 == 0) break;
                            fVar16 = fVar16 * fVar16;
                        }
                        uVar4 = 2;
                        fVar18 = fVar24 - *(float *)(lVar12 + 0x14);
                        fVar16 = fVar23;
                        while( true ) {
                            if ((uVar4 & 1) != 0) {
                                fVar16 = fVar16 * fVar18;
                            }
                            uVar4 = uVar4 >> 1;
                            if (uVar4 == 0) break;
                            fVar18 = fVar18 * fVar18;
                        }
                        if ((plVar14 == (longlong *)0x0) || (fVar16 + fVar19 < fVar21)) {
                            plVar14 = plVar2;
                            fVar21 = fVar16 + fVar19;
                        }
                    }
                }
                plVar13 = (longlong *)*plVar13;
            } while (plVar13 != (longlong *)*(longlong *)(lVar9 + 8));
            if (plVar14 != (longlong *)0x0) {
                local_c8 = &PTR_FUN_140b569f0;
                local_b0 = 1;
                local_b8 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar5 = *(undefined8 **)(param_1 + 0x10);
                uVar11 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar5 + 1) = 5;
                *puVar5 = uVar11;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar20 = FUN_1400578c0(param_1);
                local_c0 = uVar20;
                FUN_140706140(param_1,&local_c8,plVar14,0);
                puVar7 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar20);
                puVar5 = *(undefined8 **)(param_1 + 0x10);
                *puVar5 = *puVar7;
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400579e0(param_1);
                goto LAB_1407075b6;
            }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    LAB_1407075b6:
    local_a8 = &PTR_FUN_140b56a08;
    if (local_98 != 0) {
        FUN_1400579e0();
    }
    return 1;
}



undefined8 FUN_140707640(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        FUN_140056d60(param_1,1);
    }
    lVar2 = FUN_1404acb30();
    if ((lVar2 != 0) && ((longlong *)**(longlong **)(lVar2 + 8) != *(longlong **)(lVar2 + 8))) {
        uVar3 = FUN_140706ce0(param_1,lVar2,0);
        return uVar3;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407076d0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;

    if ((DAT_140dc4c64 & 1) == 0) {
        DAT_140dc4c64 = DAT_140dc4c64 | 1;
        LAB_1407076fb:
        _DAT_140dc4c6c = 1;
        lVar5 = FUN_140200220(0x51b);
        if (lVar5 == 0) {
            DAT_140dc4c68 = 0;
        }
        else {
            DAT_140dc4c68 = *(int *)(lVar5 + 4);
        }
    }
    else if (_DAT_140dc4c6c == 0) goto LAB_1407076fb;
    for (lVar5 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1608); lVar5 != 0;
         lVar5 = *(longlong *)(lVar5 + 0x88)) {
        if (*(int *)(lVar5 + 8) == DAT_140dc4c68) {
            if (_DAT_140dc4c6c == 0) {
                _DAT_140dc4c6c = 1;
                lVar5 = FUN_140200220(0x51b);
                if (lVar5 == 0) {
                    DAT_140dc4c68 = 0;
                }
                else {
                    DAT_140dc4c68 = *(int *)(lVar5 + 4);
                }
            }
            iVar3 = DAT_140dc4c68;
            lVar5 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1608);
            goto joined_r0x0001407077c7;
        }
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    LAB_140707769:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
    joined_r0x0001407077c7:
    if (lVar5 == 0) goto LAB_1407077fb;
    if ((((*(int *)(lVar5 + 4) == 1) && (iVar3 == *(int *)(lVar5 + 0xc))) &&
         (*(longlong *)(lVar5 + 0x20) != 0)) && (uVar4 = FUN_140195f70(), uVar4 != 0))
        goto LAB_1407077fd;
    lVar5 = *(longlong *)(lVar5 + 0x88);
    goto joined_r0x0001407077c7;
    LAB_1407077fb:
    uVar4 = 0;
    LAB_1407077fd:
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)((float)(ulonglong)uVar4 * 0.001);
    goto LAB_140707769;
}



undefined8 FUN_140707c60(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    lVar2 = DAT_140c65898;
    if (DAT_140c65898 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar3 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar1 + 1) = 5;
        *puVar1 = uVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        uVar5 = 0;
        if (*(longlong *)(lVar2 + 0x7ff0) != 0) {
            do {
                FUN_1400fa9e0(&local_28,*(undefined4 *)(*(longlong *)(lVar2 + 0x7fe8) + uVar5 * 4));
                uVar5 = uVar5 + 1;
                param_1 = local_18;
            } while (uVar5 < *(ulonglong *)(lVar2 + 0x7ff0));
        }
        uVar5 = (ulonglong)local_20;
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar3 = *puVar4;
        *puVar1 = uVar3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1,uVar3,uVar5 & 0xffffffff);
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140707d80(longlong param_1)

{
    undefined4 *puVar1;
    undefined local_res10 [24];

    if ((DAT_140dc4c80 & 1) == 0) {
        DAT_140dc4c80 = DAT_140dc4c80 | 1;
        DAT_140dc4c8c = 0;
        _DAT_140dc4c90 = 3000;
        DAT_140dc4c88 = DAT_140c636a8 + -3000;
        _DAT_140dc4c94 = 1;
        DAT_140dc4c98 = 3000;
        FUN_1407dd89c();
    }
    if (DAT_140c65898 != 0) {
        if ((uint)(DAT_140c636a8 - DAT_140dc4c88) < DAT_140dc4c98) {
            if (DAT_140dc4c8c == _DAT_140dc4c94) goto LAB_140707e81;
            DAT_140dc4c8c = DAT_140dc4c8c + 1;
        }
        else if ((uint)(DAT_140c636a8 - DAT_140dc4c88) < _DAT_140dc4c90) {
            DAT_140dc4c88 = DAT_140dc4c88 + DAT_140dc4c98;
        }
        else {
            DAT_140dc4c88 = DAT_140c636a8;
            DAT_140dc4c8c = 1;
        }
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898,0x6e8,local_res10);
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    LAB_140707e81:
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140707eb0(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    float in_xmmTmp2_Dd;

    lVar4 = FUN_140527cb0();
    lVar5 = DAT_140c65898;
    if ((lVar4 == 0) || (*(undefined4 **)(lVar4 + 8) == (undefined4 *)0x0)) {
        lVar4 = FUN_1405278c0();
        lVar5 = DAT_140c65898;
        if ((lVar4 != 0) && (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0)) {
            uVar1 = *(undefined4 *)**(undefined8 **)(lVar4 + 8);
            *(undefined4 *)(DAT_140c65898 + 0x7f20) = 0;
            *(undefined4 *)(lVar5 + 0x7f24) = uVar1;
            *(undefined4 *)(lVar5 + 0x7f28) = 0;
            return 0;
        }
        lVar5 = FUN_140527a10(param_1);
        if ((lVar5 == 0) || (*(longlong **)(lVar5 + 8) == (longlong *)0x0)) {
            lVar4 = FUN_140527b60();
            lVar5 = DAT_140c65898;
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
                uVar1 = **(undefined4 **)(*(longlong *)(lVar4 + 8) + 8);
                *(undefined4 *)(DAT_140c65898 + 0x7f20) = 4;
                *(undefined4 *)(lVar5 + 0x7f24) = uVar1;
                *(undefined4 *)(lVar5 + 0x7f28) = 0;
                return 0;
            }
            plVar6 = (longlong *)FUN_140512120(param_1);
            if (plVar6 != (longlong *)0x0) {
                puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
                if (((puVar7 < *(undefined8 **)(param_1 + 0x10)) && (puVar7 != &DAT_140a12138)) &&
                    (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                    uVar1 = FUN_140056d60(param_1);
                }
                else {
                    uVar1 = 0xffffffff;
                }
                lVar5 = DAT_140c65898;
                *(undefined4 *)(DAT_140c65898 + 0x7f24) = **(undefined4 **)(*plVar6 + 8);
                *(undefined4 *)(lVar5 + 0x7f20) = 1;
                *(undefined4 *)(lVar5 + 0x7f28) = uVar1;
                return 0;
            }
            lVar5 = FUN_1406622c0(param_1);
            if ((lVar5 == 0) || (lVar5 = FUN_1403d90d0(DAT_140c65898), lVar5 == 0)) {
                lVar4 = DAT_140c65898;
                uVar3 = movmskps((int)lVar5,
                                 CONCAT412(-(uint)(*(float *)(DAT_140c65898 + 0x7eec) != in_xmmTmp2_Dd),
                                           CONCAT48(-(uint)(*(float *)(DAT_140c65898 + 0x7ee8) != 0.0),
                                                    CONCAT44(-(uint)(*(float *)(DAT_140c65898 + 0x7ee4) !=
                                                                     0.0),
                                                             -(uint)(*(float *)(DAT_140c65898 + 0x7ee0) !=
                                                                     0.0)))));
                if ((uVar3 & 7) == 0) {
                    if (*(int *)(DAT_140c65898 + 0x7f14) == 0) {
                        *(undefined8 *)(DAT_140c65898 + 0x7f20) = 10;
                    }
                    else {
                        *(undefined8 *)(DAT_140c65898 + 0x7f20) = 9;
                    }
                }
                else {
                    *(undefined8 *)(DAT_140c65898 + 0x7f20) = 8;
                }
            }
            else {
                iVar2 = FUN_1403b48b0(lVar5);
                if (((iVar2 != 0) &&
                     (iVar2 = FUN_1403b48b0(*(undefined8 *)(DAT_140c65898 + 0x78)), iVar2 != 0)) &&
                    (iVar2 = FUN_14045a950(*(undefined8 *)(DAT_140c65898 + 0x78)), iVar2 == 0)) {
                    return 0;
                }
                lVar4 = DAT_140c65898;
                uVar1 = *(undefined4 *)(lVar5 + 8);
                *(undefined4 *)(DAT_140c65898 + 0x7f20) = 6;
                *(undefined4 *)(lVar4 + 0x7f24) = uVar1;
            }
            *(undefined4 *)(lVar4 + 0x7f28) = 0;
            return 0;
        }
        uVar1 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x20))();
        lVar5 = DAT_140c65898;
        *(undefined4 *)(DAT_140c65898 + 0x7f20) = 3;
    }
    else {
        uVar1 = **(undefined4 **)(lVar4 + 8);
        *(undefined4 *)(DAT_140c65898 + 0x7f20) = 7;
    }
    *(undefined4 *)(lVar5 + 0x7f24) = uVar1;
    *(undefined4 *)(lVar5 + 0x7f28) = 0;
    return 0;
}



undefined8 FUN_140708120(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong local_res8;
    undefined **local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined local_38 [8];
    undefined4 local_30;
    longlong local_28;

    local_60 = 1;
    local_78 = &PTR_FUN_140b569f0;
    local_68 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    uVar8 = (ulonglong)*(uint *)(DAT_140c65898 + 0x7f20);
    local_70 = uVar2;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar9,L"eHintArrowType",uVar8 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0();
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    switch(*(undefined4 *)(DAT_140c65898 + 0x7f20)) {
        case 0:
            uVar5 = FUN_140491c60(DAT_140c65968,*(undefined4 *)(DAT_140c65898 + 0x7f24));
            iVar3 = FUN_140432ac0(param_1,uVar5);
            if (iVar3 == 0) goto LAB_140708602;
            FUN_1400fb540(&local_78,L"objTarget");
            break;
        case 1:
            if (((*(int *)(DAT_140c65898 + 0x7f24) == 0) || (lVar7 = FUN_1405a8a40(), lVar7 == 0)) ||
                (iVar3 = FUN_140663030(param_1,lVar7), iVar3 == 0)) goto LAB_140708602;
            FUN_1400fb540(&local_78,L"objTarget");
            break;
        default:
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
            *puVar9 = *puVar6;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1);
            break;
        case 3:
            lVar7 = *(longlong *)(DAT_140c65988 + 0x10);
            local_res8 = lVar7;
            lVar1 = *(longlong *)(lVar7 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < *(uint *)(DAT_140c65898 + 0x7f24)) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar7) || (*(uint *)(DAT_140c65898 + 0x7f24) < *(uint *)(local_res8 + 0x20)))
            {
                local_res8 = lVar7;
            }
            if (local_res8 == lVar7) {
                uVar5 = 0;
            }
            else {
                uVar5 = *(undefined8 *)(local_res8 + 0x28);
            }
            iVar3 = FUN_140432c80(param_1,uVar5);
            if (iVar3 == 0) goto LAB_140708602;
            FUN_1400fb540(&local_78,L"objTarget");
            break;
        case 4:
            lVar7 = *(longlong *)(DAT_140c65988 + 0x30);
            local_res8 = lVar7;
            lVar1 = *(longlong *)(lVar7 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < *(uint *)(DAT_140c65898 + 0x7f24)) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar7) || (*(uint *)(DAT_140c65898 + 0x7f24) < *(uint *)(local_res8 + 0x20)))
            {
                local_res8 = lVar7;
            }
            if (local_res8 == lVar7) {
                uVar5 = 0;
            }
            else {
                uVar5 = *(undefined8 *)(local_res8 + 0x28);
            }
            iVar3 = FUN_140432d60(param_1,uVar5);
            if (iVar3 == 0) goto LAB_140708602;
            FUN_1400fb540(&local_78,L"objTarget");
            break;
        case 6:
            iVar3 = FUN_140649870(param_1,*(undefined4 *)(DAT_140c65898 + 0x7f24));
            if (iVar3 == 0) goto LAB_140708602;
            FUN_1400fb540(&local_78,L"objTarget");
            break;
        case 7:
            lVar7 = *(longlong *)(DAT_140c65948 + 0x10);
            local_res8 = lVar7;
            lVar1 = *(longlong *)(lVar7 + 8);
            while (lVar1 != 0) {
                if (*(uint *)(lVar1 + 0x20) < *(uint *)(DAT_140c65898 + 0x7f24)) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    local_res8 = lVar1;
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
            if ((local_res8 == lVar7) || (*(uint *)(DAT_140c65898 + 0x7f24) < *(uint *)(local_res8 + 0x20)))
            {
                local_res8 = lVar7;
            }
            if (local_res8 == lVar7) {
                uVar5 = 0;
            }
            else {
                uVar5 = *(undefined8 *)(local_res8 + 0x28);
            }
            iVar3 = FUN_1404330e0(param_1,uVar5);
            if (iVar3 == 0) goto LAB_140708602;
            FUN_1400fb540(&local_78,L"objTarget");
            break;
        case 8:
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar9 + 1) = 5;
            *puVar9 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(param_1);
            local_50 = uVar4;
            FUN_140705250(&local_58);
            FUN_1400fb2a0(&local_78,L"objTarget",uVar4);
            FUN_1400579e0(param_1);
            goto LAB_140708602;
        case 9:
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar9 + 1) = 5;
            *puVar9 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar4 = FUN_1400578c0(param_1);
            local_50 = uVar4;
            FUN_1400fa3c0(local_38,param_1,DAT_140c65898 + 0x7f00);
            FUN_1400fb2a0(&local_58,L"tPosition",local_30);
            FUN_1400fb2a0(&local_78,L"objTarget",uVar4);
            if (local_28 != 0) {
                FUN_1400579e0();
            }
            FUN_1400579e0(param_1);
            goto LAB_140708602;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    LAB_140708602:
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar9,uVar2);
    return 1;
}



undefined8 FUN_140708680(void)

{
    if (DAT_140c65898 != 0) {
        FUN_1403fa490(DAT_140c65898,0);
    }
    return 0;
}



undefined8 FUN_1407086c0(void)

{
    longlong lVar1;

    lVar1 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        FUN_1403fa490(DAT_140c65898,0);
        FUN_1400ea3e0(*(undefined8 *)(*(longlong *)(lVar1 + 0x7fe0) + 0x60),"AccountInventoryWindowShow"
                ,&DAT_1409d13ce);
    }
    return 0;
}



undefined8 FUN_140708710(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    uint *puVar3;
    int iVar4;
    bool bVar5;
    _FILETIME local_res8;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        iVar4 = FUN_140056d60(param_1);
    }
    else {
        iVar4 = 4;
    }
    lVar2 = *(longlong *)(DAT_140c635f0 + 0x15d0);
    if (iVar4 < 4) {
        GetSystemTimeAsFileTime(&local_res8);
        bVar5 = (ulonglong)local_res8 < (ulonglong)*(_FILETIME *)(lVar2 + 0x1e8 + (longlong)iVar4 * 8);
    }
    else {
        bVar5 = false;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407087c0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    uVar2 = FUN_140006ac0();
    uVar5 = (ulonglong)uVar2;
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar6,L"nWeeklyBonusMax",uVar5 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1407088f0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    byte bVar3;
    longlong lVar4;
    int *piVar5;
    longlong lVar6;

    lVar4 = FUN_1403abb90(DAT_140c65898 + 0x1bf8,1,0);
    bVar3 = 0;
    if ((lVar4 != 0) && (lVar6 = *(longlong *)(lVar4 + 0x18), lVar6 != 0)) {
        piVar5 = *(int **)(lVar4 + 0x10);
        bVar3 = 0;
        do {
            iVar1 = *piVar5;
            piVar5 = piVar5 + 4;
            if (iVar1 == 3) {
                bVar3 = 1;
            }
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140708960(undefined8 param_1)

{
    longlong **pplVar1;
    undefined local_res10 [24];

    pplVar1 = (longlong **)FUN_140417660(param_1,1);
    if (pplVar1 != (longlong **)0x0) {
        pplVar1 = (longlong **)*pplVar1;
        if (pplVar1 != (longlong **)0x0) {
            pplVar1 = (longlong **)*pplVar1;
        }
        if (pplVar1 != (longlong **)0x0) {
            (*(code *)(*pplVar1)[4])(pplVar1,local_res10);
            FUN_1404528b0();
            FUN_140452a30();
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407089c0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined2 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    double dVar10;
    int local_res8;
    int iStackX12;
    undefined **local_118;
    int local_110;
    longlong local_108;
    undefined4 local_100;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    local_118 = &PTR_FUN_140b569f0;
    local_100 = 1;
    local_108 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_110 = FUN_1400578c0();
    lVar1 = DAT_140c65898;
    uVar9 = 0;
    lVar5 = param_1;
    if (*(longlong *)(DAT_140c65898 + 0x8018) != 0) {
        do {
            uVar3 = *(undefined4 *)(*(longlong *)(lVar1 + 0x8010) + uVar9 * 8);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64698 == 0) && (iVar2 = FUN_14024aa60(), -1 < iVar2)) {
                    lVar5 = (**(code **)(*DAT_140c63c08 + 0x18))(DAT_140c63c08,uVar3);
                    goto LAB_140708ab8;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_World_140a6e180,uVar3,DAT_140c63858);
                LAB_140708ab8:
                if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x10) & 0x40) != 0)) &&
                    (*(short *)(*(longlong *)(lVar1 + 0x8010) + 4 + uVar9 * 8) != 0)) {
                    FUN_1400b7090(local_f8,*(undefined4 *)(lVar5 + 0x3c));
                    local_f8[0] = &PTR_FUN_140b69230;
                    local_28 = (undefined2 *)0x0;
                    local_38 = ZEXT816(0);
                    puVar6 = (undefined2 *)FUN_14018b280(0x10);
                    local_38 = CONCAT88(puVar6,puVar6);
                    local_28 = puVar6 + 8;
                    if (puVar6 != (undefined2 *)0x0) {
                        *puVar6 = 0;
                    }
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar8 = *(undefined8 **)(param_1 + 0x10);
                    uVar4 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar8 + 1) = 5;
                    *puVar8 = uVar4;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar3 = FUN_1400578c0(param_1);
                    FUN_1400b7660(local_f8);
                    puVar7 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                    puVar8 = *(undefined8 **)(param_1 + 0x10);
                    *puVar8 = *puVar7;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f0870(param_1,puVar8,L"strWorldName");
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    puVar8 = *(undefined8 **)(param_1 + 0x10);
                    puVar7 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                    *puVar8 = *puVar7;
                    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_1400f06f0(param_1);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    FUN_1400fb1d0(&local_118);
                    FUN_1400579e0(param_1);
                    if (local_38._0_8_ != 0) {
                        FUN_14018b900();
                    }
                    FUN_1400b7390();
                }
            }
            uVar9 = uVar9 + 1;
            lVar5 = local_108;
        } while (uVar9 < *(ulonglong *)(lVar1 + 0x8018));
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0xa0);
    if (local_110 - 1U < *(uint *)(lVar1 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(local_110 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar10 = (double)local_110;
        if (dVar10 == 0.0) {
            puVar8 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar10 >> 0x20);
            local_res8 = SUB84(dVar10,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar10 == (double)puVar8[2])) goto LAB_140708d1d;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_140708d1d:
    puVar7 = *(undefined8 **)(lVar5 + 0x10);
    *puVar7 = *puVar8;
    uVar3 = *(undefined4 *)(puVar8 + 1);
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    FUN_1400579e0(lVar5,uVar3,local_110);
    return 1;
}



undefined8 FUN_140708d50(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    FUN_140056d60(param_1,1);
    iVar2 = FUN_1403fa980();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140708dd0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;

    uVar2 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    if (_DAT_140c7e6a0 == 0) {
        FUN_1406454b0();
    }
    lVar3 = FUN_14024acc0(uVar2);
    if (lVar3 == 0) {
        uVar5 = 0;
    }
    else {
        uVar4 = *(int *)(&DAT_140c7e6a4 + (longlong)*(int *)(lVar3 + 0x50) * 4) - *(int *)(lVar3 + 0x48)
                ;
        uVar5 = *(uint *)(lVar3 + 0x4c);
        if (uVar4 < *(uint *)(lVar3 + 0x4c)) {
            uVar5 = uVar4;
        }
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140708ea0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;

    if ((DAT_140dc4c9c & 1) == 0) {
        DAT_140dc4c9c = DAT_140dc4c9c | 1;
        DAT_140dc4ca4 = 0;
    }
    if ((DAT_140dc4c9c & 2) == 0) {
        DAT_140dc4c9c = DAT_140dc4c9c | 2;
        _DAT_140dc4cac = 0;
    }
    if (DAT_140dc4ca4 == 0) {
        DAT_140dc4ca4 = 1;
        lVar5 = FUN_140200220(0x942);
        if (lVar5 == 0) {
            DAT_140dc4ca0 = 0;
        }
        else {
            DAT_140dc4ca0 = *(undefined4 *)(lVar5 + 4);
        }
    }
    uVar2 = DAT_140dc4ca0;
    lVar5 = DAT_140c65898;
    if (_DAT_140dc4cac == 0) {
        _DAT_140dc4cac = 1;
        lVar6 = FUN_140200220(0x942);
        DAT_140dc4ca8 = 0;
        if (lVar6 != 0) {
            DAT_140dc4ca8 = *(undefined4 *)(lVar6 + 8);
        }
    }
    iVar3 = FUN_1403ac840(DAT_140c65898 + 0xa0,0x707,DAT_140dc4ca8);
    iVar4 = FUN_1403ac840(lVar5 + 0xa0,0x707,uVar2);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(iVar3 + iVar4);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140708fd0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined **local_48;
    uint local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    FUN_140056d60(param_1,1);
    lVar3 = FUN_140452850();
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar7 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
    lVar5 = param_1;
    if (lVar7 != *(longlong *)(lVar3 + 8)) {
        do {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar1 + 1) = 5;
            *puVar1 = uVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(param_1);
            FUN_140451eb0(lVar7 + 0x24);
            FUN_1400fb1d0(&local_48);
            FUN_1400579e0(param_1);
            lVar5 = *(longlong *)(lVar7 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar7 = lVar5;
                        lVar5 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar5) {
                    lVar7 = lVar5;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar7 = lVar5, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar5 = lVar2;
                }
            }
            lVar5 = local_38;
        } while (lVar7 != *(longlong *)(lVar3 + 8));
    }
    uVar8 = (ulonglong)local_40;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),uVar8);
    puVar1 = *(undefined8 **)(lVar5 + 0x10);
    uVar4 = *puVar6;
    *puVar1 = uVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    FUN_1400579e0(lVar5,uVar4,uVar8 & 0xffffffff);
    return 1;
}



undefined8 FUN_1407091e0(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    if (DAT_140c65c20 != 0) {
        FUN_140636ba0(DAT_140c65c20,uVar1);
    }
    return 0;
}



undefined8 FUN_140709210(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined4 uVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar1 = FUN_140056d60(param_1,1);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar5 = &DAT_140a12138;
    if (puVar2 < *(undefined8 **)(param_1 + 0x10)) {
        puVar5 = puVar2;
    }
    uVar6 = 0;
    if ((*(int *)(puVar5 + 1) != 0) && ((*(int *)(puVar5 + 1) != 1 || (*(int *)puVar5 != 0)))) {
        uVar6 = 1;
    }
    if (DAT_140c65c20 == 0) {
        *(undefined4 *)(*(undefined8 **)(param_1 + 0x10) + 1) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = FUN_140636c40(puVar5,uVar1);
        if (lVar3 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar5 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar5 + 1) = 5;
            *puVar5 = uVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(param_1);
            FUN_140634870(lVar3,&local_28,uVar6);
            lVar3 = local_18;
            puVar2 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
            puVar5 = *(undefined8 **)(lVar3 + 0x10);
            uVar4 = *puVar2;
            *puVar5 = uVar4;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar2 + 1);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            FUN_1400579e0(lVar3,uVar4,local_20);
        }
    }
    return 1;
}



undefined8 FUN_140709370(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;

    if (DAT_140c65c20 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    FUN_140636d10();
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = *puVar4;
    *puVar1 = uVar3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar3,uVar2);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140709460(longlong param_1)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    double *pdVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    uint *puVar8;
    longlong *plVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong lVar14;
    uint uVar15;
    ulonglong uVar16;
    undefined4 uVar17;
    undefined8 local_58;
    undefined4 local_50;
    undefined local_48 [8];
    longlong local_40;

    FUN_140057020(param_1,"GameLib");
    uVar16 = 0;
    uVar4 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c653ec == 0) && (iVar5 = FUN_140211ce0(), -1 < iVar5)) {
            uVar4 = (**(code **)(*DAT_140c64278 + 0x28))();
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_LuaEvent_140a6b2b0,DAT_140c63858);
    }
    uVar11 = uVar16;
    if (uVar4 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c653ec == 0) && (iVar5 = FUN_140211ce0(), -1 < iVar5)) {
                    lVar6 = (**(code **)(*DAT_140c64278 + 0x20))(DAT_140c64278,uVar11);
                    goto LAB_14070953b;
                }
            }
            else {
                lVar6 = (*DAT_140c63848)(&PTR_u_LuaEvent_140a6b2b0);
                LAB_14070953b:
                if (lVar6 != 0) {
                    uVar1 = *(ulonglong *)(lVar6 + 8);
                    uVar12 = uVar16;
                    if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
                        uVar12 = DAT_140c3fe68 + uVar1;
                    }
                    FUN_14018f0e0(local_48,uVar12);
                    lVar6 = local_40;
                    if (local_40 == 0) {
                        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    }
                    else {
                        lVar13 = -1;
                        do {
                            lVar13 = lVar13 + 1;
                        } while (*(char *)(local_40 + lVar13) != '\0');
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar2 = *(undefined8 **)(param_1 + 0x10);
                        uVar7 = FUN_140062650(param_1,lVar6);
                        *(undefined4 *)(puVar2 + 1) = 4;
                        *puVar2 = uVar7;
                    }
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    lVar13 = *(longlong *)(param_1 + 0x10);
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *)(lVar6 + lVar14) != '\0');
                    local_58 = FUN_140062650(param_1,lVar6);
                    local_50 = 4;
                    FUN_14005ea50(param_1,lVar13 + -0x20,&local_58,*(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    if (lVar6 != 0) {
                        FUN_14018b900(lVar6);
                    }
                }
            }
            uVar15 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar15;
        } while (uVar15 < uVar4);
    }
    local_58 = FUN_140062650(param_1,"GameLib",7);
    local_50 = 4;
    FUN_14005e8e0(param_1,param_1 + 0x78,&local_58,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"RezType",7);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"WakeHere",8);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Holocrypt",9);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"ExitInstance",0xc);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4040000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"SpellCasterLocation",0x13);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"WakeHereServiceToken",0x14);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4050000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"CodeEnumMapOverlayType",0x16);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,&DAT_140b439c8,4);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Object",6);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"PathObjective",0xd);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"QuestObjective",0xe);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"TrackedUnit",0xb);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"CodeEnumEquipItemResult",0x17);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,&DAT_1409f883c,2);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Cooldown",8);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Invalid",7);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4014000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"LevelTooLow",0xb);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"WrongClass",10);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"WrongRace",9);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"CodeEnumAddonSaveLevel",0x16);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"General",7);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Account",7);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Realm",5);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Character",9);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"CodeEnumInputDevice",0x13);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,&DAT_140b43a74,4);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Keyboard",8);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Mouse",5);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"CodeEnumInputEventType",0x16);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,&DAT_1409f8864,3);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Click",5);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,&DAT_140b43a34,4);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"DoubleClick",0xb);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"DoubleHold",10);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Rapid",5);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4014000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"CodeEnumInputMouse",0x12);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,&DAT_140b439f0,4);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Right",5);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_140062650(param_1,"Middle",6);
    *(undefined4 *)(puVar2 + 1) = 4;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar7,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumInputModifier",0x15);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumInputModifierScancode",0x1d);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumInputSets",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumInputKeyLookupGroup",0x1b);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"CodeEnumDamageType",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumMissType",0x10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumCombatResult",0x14);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"CodeEnumRace",0xc);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumClass",0xd);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumRecallCommand",0x15);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumPetStance",0x11);
    FUN_140058900();
    uVar11 = uVar16;
    do {
        if ((1 << ((byte)uVar11 & 0x1f) & 1U) != 0) break;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
    } while (uVar4 < 5);
    FUN_1400eff50();
    uVar11 = uVar16;
    do {
        if ((1 << ((byte)uVar11 & 0x1f) & 2U) != 0) break;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
    } while (uVar4 < 5);
    FUN_1400eff50();
    uVar11 = uVar16;
    do {
        if ((1 << ((byte)uVar11 & 0x1f) & 4U) != 0) break;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
    } while (uVar4 < 5);
    FUN_1400eff50();
    uVar11 = uVar16;
    do {
        if ((1 << ((byte)uVar11 & 0x1f) & 8U) != 0) break;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
    } while (uVar4 < 5);
    FUN_1400eff50();
    uVar11 = uVar16;
    do {
        if ((1 << ((byte)uVar11 & 0x1f) & 0x10U) != 0) break;
        uVar4 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar4;
    } while (uVar4 < 5);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar6 = FUN_140200220();
    if (lVar6 == 0) {
        iVar5 = 10000;
    }
    else {
        iVar5 = *(int *)(lVar6 + 4);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    local_58 = FUN_140062650(param_1,"ElderPointsPerGem",0x11);
    local_50 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_58,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    lVar6 = FUN_140200220();
    if (lVar6 == 0) {
        iVar5 = 15000;
    }
    else {
        iVar5 = *(int *)(lVar6 + 8);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    local_58 = FUN_140062650(param_1,"ElderPointsDailyMax",0x13);
    local_50 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_58,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    lVar6 = FUN_140200220();
    if (lVar6 == 0) {
        iVar5 = 100;
    }
    else {
        iVar5 = *(int *)(lVar6 + 0xc);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    local_58 = FUN_140062650(param_1,"ElderGemsMax",0xc);
    local_50 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_58,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"CodeEnumUserText",0x10);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumUserTextFilterClass",0x1b);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"CodeEnumExitEvent",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumDuelState",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumZonePvpRules",0x14);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar17 = 0x1f;
    FUN_1400f0490(param_1);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x4024000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    local_58 = FUN_140062650(param_1,"knMaxBankBagSlots",0x11);
    local_50 = 4;
    FUN_14005ea50(param_1,lVar6 + -0x20,&local_58,*(longlong *)(param_1 + 0x10) + -0x10,uVar17);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"CodeEnumItemSlots",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumZoneCompletionType",0x1a);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CityDirectionType",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"CodeEnumConfirmButtonType",0x19);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"GuildHolomark",0xd);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"TelegraphColorSet",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"MapZone",7);
    FUN_140058900(param_1);
    while (DAT_140c658f8 != 0) {
        puVar8 = (uint *)(**(code **)(**(longlong **)(DAT_140c658f8 + 0x40) + 0x20))();
        if ((ulonglong)*puVar8 / 0x30 <= uVar16) break;
        if ((((DAT_140c658f8 != 0) &&
              (plVar9 = (longlong *)FUN_1404483b0((ulonglong)*puVar8,uVar16), plVar9 != (longlong *)0x0))
             && (plVar10 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9), plVar10 != (longlong *)0x0)
            ) && ((uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10), (uVar11 & 4) != 0 &&
                                                                     (uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10), (uVar11 & 1) == 0)))) {
            (**(code **)*plVar9)(plVar9);
            (**(code **)(*plVar9 + 0x10))(plVar9);
            FUN_1400f06f0(param_1);
        }
        uVar16 = uVar16 + 1;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"CodeEnumHintType",0x10);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumMoveSpeed",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_140058710(param_1,"CodeEnumHoloMark",0x10);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar6 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    FUN_1400f0490(param_1);
    uVar17 = 4;
    FUN_1400f0490(param_1);
    local_58 = FUN_140062650(param_1,"GameLib",7);
    local_50 = 4;
    FUN_14005ea50(param_1,param_1 + 0x78,&local_58,*(longlong *)(param_1 + 0x10) + -0x10,uVar17);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_14070c8c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       float param_5)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    float fVar6;
    ulonglong uVar7;
    undefined extraout_XMM0 [16];
    float fVar10;
    undefined auVar8 [16];
    undefined4 uVar9;

    if ((DAT_140c8b088 & 1) == 0) {
        DAT_140c8b088 = DAT_140c8b088 | 1;
        _DAT_140c8b098 = 0;
        _DAT_140c8b0a8 = 0;
        _DAT_140c8b0b8 = 0;
        _DAT_140c8b0c8 = 0;
        _DAT_140c8b0d8 = 0;
    }
    lVar3 = FUN_14070cf60();
    if (lVar3 != 0) {
        if ((DAT_140c8b088 & 2) == 0) {
            DAT_140c8b088 = DAT_140c8b088 | 2;
            DAT_140c8b0e4 = 0;
        }
        if ((DAT_140c8b088 & 4) == 0) {
            DAT_140c8b088 = DAT_140c8b088 | 4;
            DAT_140c8b064 = 0;
        }
        if ((DAT_140c8b088 & 8) == 0) {
            DAT_140c8b088 = DAT_140c8b088 | 8;
            DAT_140c8b06c = 0;
        }
        switch(*(undefined4 *)(param_1 + 0x17c)) {
            case 1:
            case 2:
                fVar10 = 0.0;
                fVar6 = DAT_140c8b0e0;
                if (DAT_140c8b0e4 == 0) {
                    DAT_140c8b0e4 = 1;
                    lVar4 = FUN_140200220();
                    fVar6 = fVar10;
                    DAT_140c8b0e0 = fVar10;
                    if (lVar4 != 0) {
                        fVar6 = *(float *)(lVar4 + 0x18);
                        DAT_140c8b0e0 = *(float *)(lVar4 + 0x18);
                    }
                }
                break;
            case 3:
            case 4:
                fVar10 = 0.0;
                fVar6 = DAT_140c8b068;
                if (DAT_140c8b06c == 0) {
                    DAT_140c8b06c = 1;
                    lVar4 = FUN_140200220();
                    fVar6 = fVar10;
                    DAT_140c8b068 = fVar10;
                    if (lVar4 != 0) {
                        fVar6 = *(float *)(lVar4 + 0x20);
                        DAT_140c8b068 = *(float *)(lVar4 + 0x20);
                    }
                }
                break;
            case 5:
            case 6:
                fVar10 = 0.0;
                fVar6 = DAT_140c8b060;
                if (DAT_140c8b064 == 0) {
                    DAT_140c8b064 = 1;
                    lVar4 = FUN_140200220();
                    fVar6 = fVar10;
                    DAT_140c8b060 = fVar10;
                    if (lVar4 != 0) {
                        fVar6 = *(float *)(lVar4 + 0x1c);
                        DAT_140c8b060 = *(float *)(lVar4 + 0x1c);
                    }
                }
                break;
            default:
                return 0;
        }
        if ((DAT_140c8b088 & 0x10) == 0) {
            DAT_140c8b088 = DAT_140c8b088 | 0x10;
            DAT_140c8b074 = 0;
        }
        if ((DAT_140c8b088 & 0x20) == 0) {
            DAT_140c8b088 = DAT_140c8b088 | 0x20;
            _DAT_140c8b07c = 0;
        }
        if ((DAT_140c8b088 & 0x40) == 0) {
            DAT_140c8b088 = DAT_140c8b088 | 0x40;
            _DAT_140c8b084 = 0;
        }
        if (DAT_140c8b074 == 0) {
            DAT_140c8b074 = 1;
            lVar4 = FUN_140200220();
            DAT_140c8b070 = fVar10;
            if (lVar4 != 0) {
                DAT_140c8b070 = *(float *)(lVar4 + 0x18);
            }
        }
        if (_DAT_140c8b07c == 0) {
            _DAT_140c8b07c = 1;
            lVar4 = FUN_140200220();
            DAT_140c8b078 = fVar10;
            if (lVar4 != 0) {
                DAT_140c8b078 = *(float *)(lVar4 + 0x1c);
            }
        }
        if (_DAT_140c8b084 == 0) {
            _DAT_140c8b084 = 1;
            lVar4 = FUN_140200220();
            DAT_140c8b080 = fVar10;
            if (lVar4 != 0) {
                DAT_140c8b080 = *(float *)(lVar4 + 0x20);
            }
        }
        uVar1 = FUN_1408fbfc0();
        fVar6 = SUB164(extraout_XMM0,0) * fVar6 * param_5 * (float)lVar3;
        auVar8 = CONCAT124(SUB1612(extraout_XMM0 >> 0x20,0),fVar6);
        iVar5 = (int)fVar6;
        if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar6)) {
            uVar9 = SUB164(extraout_XMM0 >> 0x20,0);
            uVar7 = SUB168(auVar8,0);
            uVar2 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar9,CONCAT48(uVar9,uVar7)) >> 0x40,0),
                                            uVar7 & 0xffffffff | uVar7 << 0x20));
            auVar8 = ZEXT416((uint)(float)(iVar5 + (uVar2 & 1 ^ 1)));
        }
        *param_2 = (longlong)SUB164(auVar8,0);
        param_2[1] = 1;
        param_2[2] = 0;
        if (*param_2 == 0) {
            *param_2 = 1;
        }
        lVar3 = 1;
    }
    return lVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14070cce0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    uint *puVar7;
    uint uVar8;
    undefined auStack88 [32];
    uint local_38 [4];
    ulonglong local_28;

    lVar1 = DAT_140c65898;
    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    if ((((DAT_140c65898 == 0) || (param_2 == 0)) ||
         ((iVar5 = FUN_1403b4710(), iVar5 != 0 && (iVar5 != 0x2a)))) ||
        (((*(uint *)(param_2 + 0x154) & 0x400) == 0 || (*(int *)(param_2 + 0x180) == 0))))
        goto LAB_14070cf3c;
    uVar8 = 0;
    if ((DAT_140dc4cb0 & 1) == 0) {
        DAT_140dc4cb0 = DAT_140dc4cb0 | 1;
        _DAT_140dc4cc4 = 0;
        _DAT_140dc4ccc = 0;
        _DAT_140dc4cd4 = 0;
        _DAT_140dc4cdc = 0;
        LAB_14070cd8f:
        _DAT_140dc4cbc = 1;
        lVar6 = FUN_140200220();
        if (lVar6 == 0) {
            DAT_140dc4cb8 = 0;
        }
        else {
            DAT_140dc4cb8 = *(uint *)(lVar6 + 4);
        }
    }
    else if (_DAT_140dc4cbc == 0) goto LAB_14070cd8f;
    local_38[0] = DAT_140dc4cb8;
    if (_DAT_140dc4cc4 == 0) {
        _DAT_140dc4cc4 = 1;
        lVar6 = FUN_140200220();
        if (lVar6 == 0) {
            DAT_140dc4cc0 = 0;
        }
        else {
            DAT_140dc4cc0 = *(uint *)(lVar6 + 8);
        }
    }
    local_38[1] = DAT_140dc4cc0;
    if (_DAT_140dc4ccc == 0) {
        _DAT_140dc4ccc = 1;
        lVar6 = FUN_140200220();
        if (lVar6 == 0) {
            DAT_140dc4cc8 = 0;
        }
        else {
            DAT_140dc4cc8 = *(uint *)(lVar6 + 0xc);
        }
    }
    local_38[2] = DAT_140dc4cc8;
    if (_DAT_140dc4cbc == 0) {
        _DAT_140dc4cbc = 1;
        lVar6 = FUN_140200220();
        if (lVar6 == 0) {
            DAT_140dc4cb8 = 0;
        }
        else {
            DAT_140dc4cb8 = *(uint *)(lVar6 + 4);
        }
    }
    uVar2 = DAT_140dc4cb8;
    if (_DAT_140dc4cc4 == 0) {
        _DAT_140dc4cc4 = 1;
        lVar6 = FUN_140200220();
        if (lVar6 == 0) {
            DAT_140dc4cc0 = 0;
        }
        else {
            DAT_140dc4cc0 = *(uint *)(lVar6 + 8);
        }
    }
    uVar3 = DAT_140dc4cc0;
    if (_DAT_140dc4ccc == 0) {
        _DAT_140dc4ccc = 1;
        lVar6 = FUN_140200220();
        if (lVar6 == 0) {
            DAT_140dc4cc8 = 0;
        }
        else {
            DAT_140dc4cc8 = *(uint *)(lVar6 + 0xc);
        }
    }
    uVar4 = DAT_140dc4cc8;
    lVar6 = FUN_14020c160();
    if ((lVar6 != 0) && ((*(uint *)(lVar6 + 4) & (uVar4 | uVar3 | uVar2)) != 0)) {
        puVar7 = local_38;
        do {
            if (((*(uint *)(lVar6 + 4) & *puVar7) != 0) || ((*(uint *)(lVar1 + 0x1b40) & *puVar7) != 0))
                break;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + 1;
        } while (uVar8 < 3);
    }
    LAB_14070cf3c:
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack88);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_14070cf60(undefined8 param_1,int param_2)

{
    longlong lVar1;

    if (param_2 == 0) {
        if (_DAT_140c8b098 != 0) {
            return DAT_140c8b090;
        }
        _DAT_140c8b098 = 1;
        lVar1 = FUN_140200220(0x25a);
        if (lVar1 != 0) {
            DAT_140c8b090 = (ulonglong)*(uint *)(lVar1 + 4);
            return (ulonglong)*(uint *)(lVar1 + 4);
        }
        DAT_140c8b090 = lVar1;
        return 0;
    }
    if (param_2 == 1) {
        if (_DAT_140c8b0a8 != 0) {
            return DAT_140c8b0a0;
        }
        _DAT_140c8b0a8 = 1;
        lVar1 = FUN_140200220(0x25a);
        if (lVar1 != 0) {
            DAT_140c8b0a0 = (ulonglong)*(uint *)(lVar1 + 8);
            return (ulonglong)*(uint *)(lVar1 + 8);
        }
        DAT_140c8b0a0 = lVar1;
        return 0;
    }
    if (param_2 == 2) {
        if (_DAT_140c8b0b8 != 0) {
            return DAT_140c8b0b0;
        }
        _DAT_140c8b0b8 = 1;
        lVar1 = FUN_140200220(0x25a);
        if (lVar1 != 0) {
            DAT_140c8b0b0 = (ulonglong)*(uint *)(lVar1 + 0xc);
            return (ulonglong)*(uint *)(lVar1 + 0xc);
        }
        DAT_140c8b0b0 = lVar1;
        return 0;
    }
    if (param_2 != 3) {
        if (param_2 != 4) {
            return 0;
        }
        if (_DAT_140c8b0d8 == 0) {
            _DAT_140c8b0d8 = 1;
            lVar1 = FUN_140200220(0x25a);
            if (lVar1 != 0) {
                DAT_140c8b0d0 = (ulonglong)*(uint *)(lVar1 + 0x14);
                return (ulonglong)*(uint *)(lVar1 + 0x14);
            }
            DAT_140c8b0d0 = lVar1;
            return 0;
        }
        return DAT_140c8b0d0;
    }
    if (_DAT_140c8b0c8 != 0) {
        return DAT_140c8b0c0;
    }
    _DAT_140c8b0c8 = 1;
    lVar1 = FUN_140200220(0x25a);
    if (lVar1 != 0) {
        DAT_140c8b0c0 = (ulonglong)*(uint *)(lVar1 + 0x10);
        return (ulonglong)*(uint *)(lVar1 + 0x10);
    }
    DAT_140c8b0c0 = lVar1;
    return 0;
}



longlong * FUN_14070d100(undefined8 param_1,ulonglong param_2)

{
    bool bVar1;
    bool bVar2;
    longlong *local_res8;

    if (param_2 < 2) {
        bVar2 = true;
        bVar1 = false;
        local_res8 = *(longlong **)(DAT_140c65898 + 0x6410 + param_2 * 8);
        if (local_res8 != (longlong *)0x0) {
            (**(code **)*local_res8)(local_res8);
        }
    }
    else {
        local_res8 = (longlong *)0x0;
        bVar2 = false;
        bVar1 = true;
    }
    if ((bVar1) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 8))();
    }
    if ((bVar2) && (local_res8 != (longlong *)0x0)) {
        (**(code **)(*local_res8 + 8))(local_res8);
    }
    return local_res8;
}



undefined8 FUN_14070d1a0(undefined8 param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;

    uVar1 = FUN_140056d60(param_1,1);
    uVar2 = FUN_140056d60(param_1,2);
    FUN_1405de7a0(DAT_140c65898 + 0x6838,uVar1,uVar2);
    return 0;
}



undefined8 FUN_14070d1f0(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined local_88 [8];
    longlong local_80;
    undefined local_68 [8];
    longlong local_60;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    FUN_140056d60(param_1,1);
    uVar1 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_28,uVar1);
    lVar2 = FUN_14018f0e0(local_88,&DAT_1409f8b74);
    uVar1 = *(undefined8 *)(lVar2 + 8);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        uVar1 = FUN_140056bb0(param_1,3);
    }
    FUN_14018f2d0(local_48,uVar1);
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    lVar2 = FUN_14018f0e0(local_88,&DAT_1409f8b44);
    uVar1 = *(undefined8 *)(lVar2 + 8);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x38))) {
        uVar1 = FUN_140056bb0(param_1,4);
    }
    FUN_14018f2d0(local_68,uVar1);
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    FUN_1405de4d0();
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070d360(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    FUN_140056d60(param_1,1);
    puVar1 = (undefined4 *)FUN_1406622c0(param_1,2);
    if ((puVar1 == (undefined4 *)0x0) || (lVar2 = FUN_1403d90d0(DAT_140c65898,*puVar1), lVar2 == 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
        return 0;
    }
    lVar2 = FUN_14018f0e0(local_48,&DAT_1409f8b0c);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if ((puVar4 < *(undefined8 **)(param_1 + 0x10)) &&
        ((puVar4 != &DAT_140a12138 && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))))) {
        uVar3 = FUN_140056bb0(param_1,3);
    }
    FUN_14018f2d0(local_28,uVar3);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_1405de590();
    if (local_20 == 0) {
        return 0;
    }
    FUN_14018b900(local_20,0);
    return 0;
}



undefined8 FUN_14070d480(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    FUN_140056d60(param_1,1);
    iVar1 = FUN_140056d60(param_1,2);
    uVar5 = (ulonglong)(iVar1 + 1);
    lVar2 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if ((lVar2 != 0) && (uVar5 < *(ulonglong *)(lVar2 + 0x60))) {
        if (uVar5 == 0) {
            uVar5 = *(ulonglong *)(lVar2 + 0x68);
        }
        else if (uVar5 < *(ulonglong *)(lVar2 + 0x68) || uVar5 == *(ulonglong *)(lVar2 + 0x68)) {
            uVar5 = uVar5 - 1;
        }
        if (*(longlong *)(*(longlong *)(lVar2 + 0x58) + uVar5 * 8) != 0) {
            lVar2 = FUN_14018f0e0(local_48,&DAT_1409f8adc);
            uVar4 = *(undefined8 *)(lVar2 + 8);
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
                uVar4 = FUN_140056bb0(param_1,3);
            }
            FUN_14018f2d0(local_28,uVar4);
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            FUN_1405de590();
            if (local_20 == 0) {
                return 0;
            }
            FUN_14018b900(local_20,0);
            return 0;
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
    return 0;
}



undefined8 FUN_14070d5c0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    FUN_140056d60(param_1,1);
    uVar1 = FUN_140056d60(param_1,2);
    lVar2 = FUN_1405e29a0(DAT_140c65898 + 0x6838,uVar1);
    if (lVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
    }
    else {
        lVar2 = FUN_14018f0e0(local_48,&DAT_1409f8aa4);
        uVar4 = *(undefined8 *)(lVar2 + 8);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
            uVar4 = FUN_140056bb0(param_1,3);
        }
        FUN_14018f2d0(local_28,uVar4);
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        FUN_1405de590();
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
        }
    }
    return 0;
}



undefined8 FUN_14070d6e0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar4 = param_1;
    for (lVar2 = *(longlong *)(DAT_140c65898 + 0x6a98); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x68)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        FUN_1405db6b0(lVar2);
        FUN_1400fb1d0(&local_48);
        FUN_1400579e0();
        lVar4 = local_38;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar7 = (double)local_40;
        if (dVar7 == 0.0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar7 >> 0x20);
            local_res8 = SUB84(dVar7,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar7 == (double)puVar6[2])) goto LAB_14070d890;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_14070d890:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400579e0(lVar4,uVar1,local_40);
    return 1;
}



undefined8 FUN_14070d8d0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar2 = FUN_140056d60(param_1,1);
    lVar3 = FUN_1405e2380(DAT_140c65898 + 0x6838,uVar2);
    if (lVar3 == 0) {
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_1405db6b0(lVar3,&local_28);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_14070d9d0(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_1405de890(DAT_140c65898 + 0x6838,uVar1);
    return 0;
}



undefined8 FUN_14070da00(undefined8 param_1)

{
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    uVar1 = FUN_140056d60(param_1,1);
    lVar3 = FUN_1405e2300(DAT_140c65898 + 0x6838,uVar1);
    if (lVar3 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
        return 0;
    }
    uVar2 = FUN_140056d60(param_1,2);
    local_28 = *(undefined8 *)(lVar3 + 0xb8);
    local_18 = (ulonglong)uVar2;
    local_20 = *(undefined8 *)(lVar3 + 0xc0);
    FUN_1403f4740(DAT_140c65898,0x3c1,&local_28);
    return 0;
}



undefined8 FUN_14070dad0(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_1405e2300(DAT_140c65898 + 0x6838,uVar1);
    if (lVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
        return 0;
    }
    uVar3 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_28,uVar3);
    FUN_1405de700();
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070db90(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_1405e2300(DAT_140c65898 + 0x6838,uVar1);
    if (lVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
        return 0;
    }
    FUN_140056d60(param_1,2);
    lVar2 = FUN_14018f0e0(local_48,*(undefined8 *)(lVar2 + 0xd8));
    uVar3 = *(undefined8 *)(lVar2 + 8);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        uVar3 = FUN_140056bb0(param_1,3);
    }
    FUN_14018f2d0(local_28,uVar3);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_1405de590();
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070dcc0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar2 = FUN_140056d60(param_1,1);
    lVar3 = FUN_1405e2300(DAT_140c65898 + 0x6838,uVar2);
    if (lVar3 == 0) {
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_1405dab80(lVar3,&local_28);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_14070ddc0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar4 = param_1;
    for (lVar2 = *(longlong *)(DAT_140c65898 + 0x6a90); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x110)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        FUN_1405dab80(lVar2);
        FUN_1400fb1d0(&local_48);
        FUN_1400579e0();
        lVar4 = local_38;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar7 = (double)local_40;
        if (dVar7 == 0.0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar7 >> 0x20);
            local_res8 = SUB84(dVar7,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar7 == (double)puVar6[2])) goto LAB_14070df73;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_14070df73:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400579e0(lVar4,uVar1,local_40);
    return 1;
}



undefined8 FUN_14070e010(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 local_res10 [6];

    puVar1 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar1 + 1) == 0) || ((*(int *)(puVar1 + 1) == 1 && (*(int *)puVar1 == 0)))) {
        local_res10[0] = 0;
    }
    else {
        local_res10[0] = 1;
    }
    FUN_1403f4900(DAT_140c65898,0xb8,local_res10);
    return 0;
}



undefined8 FUN_14070e070(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    int local_res8 [2];
    longlong local_78;
    ulonglong local_70;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined ***local_30;

    local_50 = 1;
    local_60 = 0xfffffffe;
    local_68 = &PTR_FUN_140b569f0;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    local_58 = param_1;
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) &&
         (puVar6 = &DAT_140a12138, puVar1 != &DAT_140a12138)) && (*(int *)(puVar1 + 1) == 5)) {
        FUN_1400579e0(param_1,param_2,0xfffffffe);
        puVar1 = *(undefined8 **)(local_58 + 0x10);
        if (*(undefined8 **)(local_58 + 0x18) < puVar1) {
            puVar6 = *(undefined8 **)(local_58 + 0x18);
        }
        *puVar1 = *puVar6;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(local_58 + 0x10) = *(longlong *)(local_58 + 0x10) + 0x10;
        local_60 = FUN_1400578c0(local_58);
    }
    local_40 = 0xfffffffe;
    local_30 = &local_68;
    local_48 = &PTR_FUN_140b56a08;
    *(undefined4 *)(*(longlong *)(local_58 + 0x10) + 8) = 0;
    *(longlong *)(local_58 + 0x10) = *(longlong *)(local_58 + 0x10) + 0x10;
    local_38 = local_58;
    FUN_1400fa090(&local_48,0xffffffff);
    uVar9 = 0;
    *(longlong *)(local_58 + 0x10) = *(longlong *)(local_58 + 0x10) + -0x10;
    local_78 = 0;
    local_70 = 0;
    lVar7 = 0;
    LAB_14070e160:
    do {
        do {
            iVar2 = (*(code *)(*local_30)[1])();
            if ((iVar2 == 0) || (iVar2 = FUN_1400fcba0(&local_48), iVar2 == 0)) {
                local_78 = lVar7;
                local_70 = uVar9;
                if (uVar9 - 1 < 0xff) {
                    FUN_1405de9c0(DAT_140c65898 + 0x6838,&local_78);
                }
                if (lVar7 != 0) {
                    (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                }
                local_48 = &PTR_FUN_140b56a08;
                if (local_38 != 0) {
                    FUN_1400579e0();
                }
                local_68 = &PTR_FUN_140b56a08;
                if (local_58 != 0) {
                    FUN_1400579e0();
                }
                return 0;
            }
            iVar3 = FUN_1400fc8e0(&local_48,local_res8);
            iVar2 = local_res8[0];
        } while (iVar3 < 0);
        uVar4 = 0;
        if (uVar9 != 0) {
            do {
                if (*(int *)(lVar7 + uVar4 * 4) == local_res8[0]) goto LAB_14070e160;
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar9);
        }
        lVar5 = FUN_14018db00(lVar7,uVar9 + 1,4);
        *(int *)(uVar9 * 4 + lVar5) = iVar2;
        lVar8 = lVar7;
        if ((lVar7 != lVar5) && (FUN_1407db590(lVar5,lVar7), lVar8 = lVar5, lVar7 != 0)) {
            (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar8;
    } while( true );
}



undefined8 FUN_14070e2a0(longlong param_1)

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
    local_20 = uVar2;
    FUN_1405e2d90(DAT_140c65898 + 0x6838,&local_28);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_14070e370(undefined8 param_1)

{
    undefined8 uVar1;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_28,uVar1);
    uVar1 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_48,uVar1);
    FUN_1405de2e0(DAT_140c65898 + 0x6838,local_28,local_48);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070e400(undefined8 param_1)

{
    undefined8 uVar1;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_28,uVar1);
    FUN_1405de2e0(DAT_140c65898 + 0x6838,local_28,0);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070e5d0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    int iVar5;
    int iVar6;
    int local_res8 [2];

    lVar2 = DAT_140c65898;
    puVar4 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar4 = *(undefined8 **)(param_1 + 0x18);
    }
    iVar6 = 0;
    if ((*(int *)(puVar4 + 1) != 0) && ((*(int *)(puVar4 + 1) != 1 || (*(int *)puVar4 != 0)))) {
        iVar6 = 1;
    }
    iVar5 = *(int *)(DAT_140c65898 + 0x6ae0);
    if ((iVar6 != iVar5) && (iVar3 = FUN_1405df7c0(DAT_140c65898 + 0x6838), iVar3 != 0)) {
        local_res8[0] = iVar6;
        FUN_1400161d0(DAT_140c635f0,0x39e,local_res8);
        *(int *)(lVar2 + 0x6ae0) = iVar6;
        iVar5 = iVar6;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar5 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14070e690(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar4 = param_1;
    for (lVar2 = *(longlong *)(DAT_140c65898 + 0x6ab8); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x40)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        FUN_1405dd250(lVar2);
        FUN_1400fb1d0(&local_48);
        FUN_1400579e0();
        lVar4 = local_38;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar7 = (double)local_40;
        if (dVar7 == 0.0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar7 >> 0x20);
            local_res8 = SUB84(dVar7,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar7 == (double)puVar6[2])) goto LAB_14070e840;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_14070e840:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400579e0(lVar4,uVar1,local_40);
    return 1;
}



undefined8 FUN_14070e880(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar4 = param_1;
    for (lVar2 = *(longlong *)(DAT_140c65898 + 0x6ab0); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x80)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        FUN_1405dc440(lVar2);
        FUN_1400fb1d0(&local_48);
        FUN_1400579e0();
        lVar4 = local_38;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar7 = (double)local_40;
        if (dVar7 == 0.0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar7 >> 0x20);
            local_res8 = SUB84(dVar7,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar7 == (double)puVar6[2])) goto LAB_14070ea33;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_14070ea33:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400579e0(lVar4,uVar1,local_40);
    return 1;
}



undefined8 FUN_14070eb50(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_14018f0e0(local_48,&DAT_1409f8a1c);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar3 = FUN_140056bb0(param_1,2);
    }
    FUN_14018f2d0(local_28,uVar3);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_1405dee20(DAT_140c65898 + 0x6838,uVar1,local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070ec10(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_1405df020(DAT_140c65898 + 0x6838,uVar1);
    return 0;
}



undefined8 FUN_14070ec40(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined4 uVar4;

    uVar4 = 1;
    uVar1 = FUN_140056d60(param_1,1);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *)(puVar2 + 1) == 0) || ((*(int *)(puVar2 + 1) == 1 && (*(int *)puVar2 == 0)))) {
        uVar4 = 0;
    }
    FUN_1405df0e0(DAT_140c65898 + 0x6838,uVar1,uVar4);
    return 0;
}



undefined8 FUN_14070ecb0(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_1405def50(DAT_140c65898 + 0x6838,uVar1);
    return 0;
}



undefined8 FUN_14070ece0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar2 = FUN_140056d60(param_1,1);
    lVar3 = FUN_1405e2000(DAT_140c65898 + 0x6838,uVar2);
    if (lVar3 == 0) {
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_1405dc440(lVar3,&local_28);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_14070ede0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar2 = FUN_140056d60(param_1,1);
    lVar3 = FUN_1405e2270(DAT_140c65898 + 0x6838,uVar2);
    if (lVar3 == 0) {
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_1405dd250(lVar3,&local_28);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_14070eee0(undefined8 param_1)

{
    undefined8 uVar1;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_28,uVar1);
    FUN_1405df1b0(DAT_140c65898 + 0x6838,local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_14070f180(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar4 = param_1;
    for (lVar2 = *(longlong *)(DAT_140c65898 + 0x6aa8); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0xd8)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        FUN_1405dbaa0(lVar2);
        FUN_1400fb1d0(&local_48);
        FUN_1400579e0();
        lVar4 = local_38;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar7 = (double)local_40;
        if (dVar7 == 0.0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar7 >> 0x20);
            local_res8 = SUB84(dVar7,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar7 == (double)puVar6[2])) goto LAB_14070f333;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_14070f333:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400579e0(lVar4,uVar1,local_40);
    return 1;
}



undefined8 FUN_14070f470(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_1405e2300(DAT_140c65898 + 0x6838,uVar1);
    if (lVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
        return 0;
    }
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_40 = *(undefined8 *)(lVar2 + 0xb8);
    local_38 = *(undefined8 *)(lVar2 + 0xc0);
    FUN_1403f4900(DAT_140c65898,0x531,&local_48);
    return 0;
}



undefined8 FUN_14070f530(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_1405e2300(DAT_140c65898 + 0x6838,uVar1);
    if (lVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipResult",&DAT_1409ea994,0,0);
        return 0;
    }
    local_18 = 0;
    local_28 = *(undefined8 *)(lVar2 + 0xb8);
    local_20 = *(undefined8 *)(lVar2 + 0xc0);
    FUN_1403f4740(DAT_140c65898,0x512,&local_28);
    return 1;
}



undefined8 FUN_14070f700(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 local_38;
    undefined4 local_30;

    FUN_140057020(param_1,"FriendshipLib",&PTR_s_RespondToInvite_140b735f0);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"CharacterFriendshipType_Friend",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"CharacterFriendshipType_Ignore",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"CharacterFriendshipType_Rival",0x1d);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"CharacterFriendshipType_Account",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerNotFound",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_RealmNotFound",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_RequestDenied",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerAlreadyFriend",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerOffline",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_FriendshipNotFound",0x23);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidType",0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_RequestNotFound",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_RequestTimedOut",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4022000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_Busy",0x15);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidNote",0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_MaxFriends",0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_MaxRivals",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x402a000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_MaxIgnored",0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_UnableToProcess",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerNotFriend",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerConsideringOtherFriend",0x2d);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_RequestSent",0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerAlreadyRival",0x23);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerAlreadyNeighbor",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerAlreadyIgnored",0x25);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerOnIgnored",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4036000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerNotRival",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerNotIgnored",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerNotNeighbor",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PlayerNotOfThisRealm",0x25);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x403a000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_FriendsBlocked",0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_LocationsBusy",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403d000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_CannotInviteSelf",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_ThrottledRequest",0x21);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403f000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_ContainsProfanity",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4040000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidPublicNote",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4040800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidPublicDisplayName",0x29);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4041000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidEmail",0x1d);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4041800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidInviteNote",0x22);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4042000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_BlockedForStrangers",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4042800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_InvalidAutoResponse",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4043000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_MissingEntitlement",0x23);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4043800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_NameUnavailable",0x20);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4044000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResult_PrivilegeRestricted",0x24);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"AccountPresenceState_Available",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"AccountPresenceState_Away",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"AccountPresenceState_Busy",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"AccountPresenceState_Invisible",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResponse_Mutual",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResponse_Accept",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResponse_Decline",0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"FriendshipResponse_Ignore",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}

