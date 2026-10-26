/*
 * FUN_00419158 at 00419158
 * undefined __register FUN_00419158(int * param_1)
 * Address ranges: 00419158-004191ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419158(int *param_1)

{
  int *piVar1;
  
  while ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    piVar1 = (int *)FUN_0041246c((undefined4 *)param_1[4]);
    if (((*(byte *)((int)piVar1 + 0x21) & 1) == 0) && ((*(ushort *)(param_1 + 8) & 0x210) != 0x210))
    {
      FUN_004190a0((int)param_1,(int)piVar1);
    }
    else {
      FUN_00419120(param_1,(int)piVar1);
    }
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  return;
}

