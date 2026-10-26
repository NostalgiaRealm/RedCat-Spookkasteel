/*
 * FUN_004a252c at 004a252c
 * undefined4 __register FUN_004a252c(int param_1, byte param_2)
 * Address ranges: 004a252c-004a2551
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004a252c(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a20c0(param_1,(uint)param_2);
  return *(undefined4 *)(iVar1 + 0xc);
}

