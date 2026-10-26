/*
 * FUN_0043c1ac at 0043c1ac
 * undefined __register FUN_0043c1ac(int param_1, int param_2, int param_3)
 * Address ranges: 0043c1ac-0043c1d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043c1ac(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xfffffffc;
  if (param_2 == 0) {
    param_2 = *(int *)(*(int *)(param_1 + 100) + 8);
  }
  FUN_0043c144(param_2,param_2,param_3,(int)&stack0xfffffffc);
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x74))(*(int **)(param_1 + 0x14),iVar1,puVar2);
  return;
}

