/*
 * FUN_00611cc9 at 00611cc9
 * undefined FUN_00611cc9(void)
 * Address ranges: 00611cc9-00611d35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611cc9(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (*DAT_00710054 == '\0') {
    FUN_00614fc6(2);
  }
  else {
    if (*DAT_00710054 == '?') {
      DAT_00710054 = DAT_00710054 + 1;
      uVar1 = FUN_00611d36(local_14);
      puVar2 = local_1c;
      FUN_00614dcd(0x2d);
      uVar1 = FUN_006151fc(puVar2,uVar1);
      FUN_00614df0(uVar1);
      puVar2 = local_c;
    }
    else {
      puVar2 = (undefined1 *)FUN_00611d36(local_24);
    }
    FUN_00614df0(puVar2);
  }
  return param_1;
}

