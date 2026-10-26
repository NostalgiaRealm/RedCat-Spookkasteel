/*
 * FUN_005d7aa0 at 005d7aa0
 * undefined FUN_005d7aa0(void)
 * Address ranges: 005d7aa0-005d7b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d7aa0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_324 [36];
  undefined1 local_300 [768];
  
  iVar1 = FUN_005c3350(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005c0a50(0,0,9,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005c3350(0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_005c0d90();
  iVar1 = FUN_005d7a20(local_324,uVar2);
  if ((iVar1 != 0) && (param_2 != 0)) {
    FUN_005c4f20(9,0x100);
    FUN_005e0ca0(local_324,uVar2,local_300,0x100,0);
    FUN_005c4fd0(9,0x100);
  }
  FUN_005c0d70();
  return iVar1;
}

