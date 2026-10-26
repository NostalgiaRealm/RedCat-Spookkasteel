/*
 * FUN_004230a8 at 004230a8
 * undefined4 __register FUN_004230a8(uint param_1, uint param_2)
 * Address ranges: 004230a8-004230dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004230a8(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_005736ac != 0) {
    uVar1 = FUN_0041b688(param_2);
    iVar2 = FUN_0041b688(param_1);
    iVar2 = FUN_00422e7c(DAT_005736ac,iVar2,uVar1);
    return *(undefined4 *)(iVar2 + 4);
  }
  return 0;
}

