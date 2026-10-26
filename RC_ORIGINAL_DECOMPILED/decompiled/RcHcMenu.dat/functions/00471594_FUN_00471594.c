/*
 * FUN_00471594 at 00471594
 * undefined __register FUN_00471594(int * param_1)
 * Address ranges: 00471594-004715c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471594(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00471d88((int)param_1);
  *(bool *)((int)param_1 + 0x96) = iVar1 == 0;
  (**(code **)(*param_1 + 0x1e4))();
  *(undefined1 *)((int)param_1 + 0x9b) = 1;
  FUN_00472c90(param_1);
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}

