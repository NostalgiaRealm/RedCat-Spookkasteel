/*
 * FUN_00437c24 at 00437c24
 * undefined __register FUN_00437c24(int * param_1, int * param_2)
 * Address ranges: 00437c24-00437c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437c24(int *param_1,int *param_2)

{
  bool bVar1;
  
  if ((((short)param_2[1] == 1) || ((short)param_2[1] == 2)) &&
     (bVar1 = FUN_004364a8((HWND)param_2[2],param_2), bVar1)) {
    return;
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}

