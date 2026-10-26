/*
 * FUN_0061482c at 0061482c
 * undefined FUN_0061482c(void)
 * Address ranges: 0061482c-006149cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061482c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_3c [8];
  undefined1 local_34 [16];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (*DAT_00710054 == '\0') {
    iVar3 = FUN_0061503c();
    if (iVar3 == 0) {
      puVar2 = local_34;
      FUN_00614dcd(0x28);
      uVar5 = FUN_006151fc(puVar2,param_2);
      FUN_00614df0(uVar5);
      puVar2 = local_24;
      uVar6 = 0x5d;
      puVar4 = local_1c;
      uVar5 = 2;
      FUN_006151bd(local_c,&DAT_00652644);
      FUN_00615263(puVar4,uVar5);
      uVar5 = FUN_0061517e(puVar2,uVar6);
      puVar2 = local_3c;
    }
    else {
      puVar2 = local_3c;
      uVar6 = 0x5d;
      puVar4 = local_34;
      uVar5 = 2;
      FUN_00614dcd(0x5b);
      FUN_00615263(puVar4,uVar5);
      uVar5 = FUN_0061517e(puVar2,uVar6);
      puVar2 = local_24;
    }
  }
  else {
    iVar1 = FUN_00611dc4();
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    if (0 < iVar1) {
      FUN_00614dc3();
      do {
        uVar5 = FUN_00611d36(local_24);
        puVar2 = local_1c;
        FUN_00614dcd(0x5b);
        uVar5 = FUN_006151fc(puVar2,uVar5);
        FUN_00614df0(uVar5);
        uVar5 = FUN_0061517e(local_34,0x5d);
        FUN_00615373(uVar5);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = FUN_0061503c();
      if (iVar3 == 0) {
        puVar2 = local_34;
        FUN_00614dcd(0x28);
        uVar5 = FUN_006151fc(puVar2,param_2);
        FUN_00614df0(uVar5);
        puVar2 = local_c;
        puVar4 = local_24;
        FUN_0061517e(local_1c,0x29);
        uVar5 = FUN_006151fc(puVar4,puVar2);
        FUN_006154c8(uVar5);
      }
      uVar5 = FUN_0061349a(local_34,local_c);
      goto LAB_006149bb;
    }
    puVar2 = local_14;
    uVar6 = 0x5d;
    puVar4 = local_c;
    uVar5 = 2;
    FUN_00614dcd(0x5b);
    FUN_00615263(puVar4,uVar5);
    uVar5 = FUN_0061517e(puVar2,uVar6);
    puVar2 = local_24;
  }
  uVar5 = FUN_00613845(puVar2,uVar5);
LAB_006149bb:
  FUN_00614df0(uVar5);
  return param_1;
}

