/*
 * FUN_004619f0 at 004619f0
 * undefined __register FUN_004619f0(undefined * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004619f0-00461a21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004619f0(undefined *param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  undefined4 extraout_ECX;
  
  bVar1 = FUN_00461544(param_1);
  if (bVar1) {
    FUN_00461818(param_1,param_2,0x20,param_3);
  }
  else {
    FUN_00461328(param_1,param_2,CONCAT31((int3)((uint)extraout_ECX >> 8),0x20),param_3);
  }
  return;
}

