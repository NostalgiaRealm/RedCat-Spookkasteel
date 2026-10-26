/*
 * FUN_00519a68 at 00519a68
 * LPARAM __register FUN_00519a68(int * param_1, WPARAM param_2, undefined4 param_3)
 * Address ranges: 00519a68-00519a8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPARAM FUN_00519a68(int *param_1,WPARAM param_2,undefined4 param_3)

{
  LPARAM LVar1;
  
  LVar1 = FUN_00403064((int *)&DAT_005190f4,'\x01',param_3);
  FUN_0042c624(param_1,param_2,LVar1);
  return LVar1;
}

