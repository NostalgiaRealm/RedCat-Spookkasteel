/*
 * FUN_00471e54 at 00471e54
 * undefined __register FUN_00471e54(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00471e54-00471e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471e54(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004720fc((int)param_1,param_2);
  (**(code **)(*param_1 + 0x228))(param_1,uVar1,param_3);
  return;
}

