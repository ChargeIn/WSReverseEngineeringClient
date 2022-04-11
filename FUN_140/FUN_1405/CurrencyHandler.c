//
// Created by Flo on 10.04.2022.
//

// undefined8 FUN_140500a10(longlong param_1)
undefined8 LoadCurrency(longlong param_1)
{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.Money");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c597b0;
    puVar6 = PTR_DAT_140c597b0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"Money",&PTR_DAT_140b6a1a8);
    FUN_140058710(param_1,"CodeEnumCurrencyType",0x14);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Credits",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Renown",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ElderGems",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CraftingVouchers",0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Prestige",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ShadeSilver",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Glory",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ProtoCoins",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Triploons",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RedEssence",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"BlueEssence",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"GreenEssence",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PurpleEssence",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"GroupCurrency",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumGroupCurrencyType",0x19);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b0fd04,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"WarCoins",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}
