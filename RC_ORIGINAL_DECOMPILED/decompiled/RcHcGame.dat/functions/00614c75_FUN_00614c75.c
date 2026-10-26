/*
 * FUN_00614c75 at 00614c75
 * undefined FUN_00614c75(void)
 * Address ranges: 00614c75-00614cf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00614c75(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  uVar2 = 0;
  iVar1 = FUN_00614d0f(8,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00614dc3();
  }
  uVar2 = FUN_006133a8(local_c,uVar2);
  FUN_00614df0(uVar2);
  uVar2 = FUN_00614c3f(local_1c);
  FUN_00614df0(uVar2);
  puVar3 = local_24;
  FUN_0061517e(local_2c,0x20);
  uVar2 = FUN_006151fc(puVar3,param_2);
  FUN_006154c8(uVar2);
  FUN_00614df0(local_14);
  return param_1;
}

