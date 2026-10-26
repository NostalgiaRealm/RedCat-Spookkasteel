/*
 * FUN_005d6d90 at 005d6d90
 * undefined FUN_005d6d90(void)
 * Address ranges: 005d6d90-005d6de8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d6d90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  uVar2 = 1;
  iVar1 = FUN_005d5c60();
  while (iVar1 != 0) {
    FUN_005d5c90(iVar1,&stack0x00000004,local_4);
    iVar1 = FUN_005c1c20();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    iVar1 = FUN_005d5c60();
  }
  return uVar2;
}

