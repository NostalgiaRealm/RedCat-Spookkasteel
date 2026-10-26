/*
 * FUN_0061349a at 0061349a
 * undefined FUN_0061349a(void)
 * Address ranges: 0061349a-00613631
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061349a(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [16];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  uint local_8;
  
  FUN_00614dc3();
  cVar1 = *DAT_00710054;
  if (cVar1 == '\0') {
    puVar2 = local_3c;
    FUN_00614fc6(2);
    uVar4 = FUN_006151fc(puVar2,param_2);
    FUN_00614df0(uVar4);
    puVar2 = local_2c;
  }
  else if (cVar1 == '$') {
    if (DAT_00710054[1] == '$') {
      pcVar5 = DAT_00710054 + 2;
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        DAT_00710054 = pcVar5;
        puVar2 = (undefined1 *)FUN_00614d96(local_6c,2,param_2);
      }
      else if (cVar1 == 'A') {
        DAT_00710054 = DAT_00710054 + 3;
        puVar2 = (undefined1 *)FUN_00613db8(local_64,param_2);
      }
      else if (cVar1 == 'B') {
        DAT_00710054 = DAT_00710054 + 3;
        puVar2 = (undefined1 *)FUN_0061476d(local_5c,param_2,1);
      }
      else {
        if (cVar1 != 'C') goto LAB_00613585;
        DAT_00710054 = DAT_00710054 + 3;
        uVar4 = FUN_00614dc3(0);
        uVar4 = FUN_006142ed(local_4c,param_2,0,uVar4);
        puVar2 = (undefined1 *)FUN_00613845(local_54,uVar4);
      }
    }
    else {
      pcVar5 = DAT_00710054;
      if (DAT_00710054[1] != '\0') {
LAB_00613585:
        DAT_00710054 = pcVar5;
        FUN_00614fc6(1);
        return param_1;
      }
      puVar2 = local_3c;
      FUN_00614fc6(2);
      uVar4 = FUN_006151fc(puVar2,param_2);
      FUN_00614df0(uVar4);
      puVar2 = local_24;
    }
  }
  else {
    if (cVar1 != 'A') {
      if (cVar1 != 'B') {
        puVar2 = (undefined1 *)FUN_00613845(local_34,param_2);
        goto LAB_00613623;
      }
      FUN_006154a5("volatile");
      iVar3 = FUN_0061503c();
      if (iVar3 == 0) {
        FUN_006152a2(0x20);
      }
    }
    FUN_00614df0(param_2);
    DAT_00710054 = DAT_00710054 + 1;
    local_8 = local_8 | 0x10;
    uVar4 = FUN_006141a0(local_3c,local_14,local_c,0);
    FUN_00614df0(uVar4);
    puVar2 = local_1c;
  }
LAB_00613623:
  FUN_00614df0(puVar2);
  return param_1;
}

