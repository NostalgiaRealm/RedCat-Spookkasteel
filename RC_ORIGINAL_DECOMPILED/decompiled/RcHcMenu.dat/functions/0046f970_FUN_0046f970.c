/*
 * FUN_0046f970 at 0046f970
 * undefined4 __register FUN_0046f970(int param_1)
 * Address ranges: 0046f970-0046f998
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046f970(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  iVar2 = param_1;
  if (*(char *)(param_1 + 0x28) == '\0') {
    bVar1 = FUN_00405c2c((short *)(param_1 + 0x18));
    iVar2 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      iVar2 = FUN_00405c08((short *)(param_1 + 0x18));
      if ((char)iVar2 == '\0') {
        return 0;
      }
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

