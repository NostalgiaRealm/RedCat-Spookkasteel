/*
 * FUN_00558d50 at 00558d50
 * undefined __register FUN_00558d50(int * param_1, undefined1 param_2, byte param_3, int param_4, int param_5)
 * Address ranges: 00558d50-00558d91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00558d50(int *param_1,undefined1 param_2,byte param_3,int param_4,int param_5)

{
  FUN_004ae564(param_1,param_2,param_3,param_4,param_5);
  if ((param_3 & 8) != 0) {
    (**(code **)(*(int *)param_1[0x66] + 0xfc))();
  }
  return;
}

