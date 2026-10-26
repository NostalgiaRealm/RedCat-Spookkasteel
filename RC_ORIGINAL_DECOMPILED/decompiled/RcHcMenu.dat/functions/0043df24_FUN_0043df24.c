/*
 * FUN_0043df24 at 0043df24
 * undefined __register FUN_0043df24(int * param_1, uint * param_2)
 * Address ranges: 0043df24-0043df6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043df24(int *param_1,uint *param_2)

{
  bool bVar1;
  undefined1 in_ZF;
  
  FUN_00404140((uint *)param_1[2],(uint *)param_1[0x15]);
  if (((bool)in_ZF) && ((param_1[1] == 0 || ((*(byte *)(param_1[1] + 0x20) & 1) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FUN_00419464(param_1,param_2);
  if ((bVar1) && (*(int *)(param_1[0x10] + 8) == 0)) {
    FUN_0043dc40(param_1,param_2);
  }
  return;
}

