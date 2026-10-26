/*
 * FUN_006137b4 at 006137b4
 * undefined FUN_006137b4(void)
 * Address ranges: 006137b4-00613844
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006137b4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [16];
  
  if (*DAT_00710054 == '\0') {
    puVar3 = local_2c;
    uVar4 = 0x29;
    puVar2 = local_24;
    uVar1 = 2;
    FUN_00614e92(" throw(");
    FUN_00615263(puVar2,uVar1);
  }
  else {
    if (*DAT_00710054 == 'Z') {
      DAT_00710054 = DAT_00710054 + 1;
      uVar1 = FUN_00614dc3();
      goto LAB_00613837;
    }
    uVar1 = FUN_00613632(local_14);
    puVar3 = local_1c;
    FUN_00614e92(" throw(");
    uVar1 = FUN_006151fc(puVar3,uVar1);
    FUN_00614df0(uVar1);
    puVar3 = local_2c;
    uVar4 = 0x29;
  }
  uVar1 = FUN_0061517e(puVar3,uVar4);
LAB_00613837:
  FUN_00614df0(uVar1);
  return param_1;
}

