/*
 * FUN_004ae4c4 at 004ae4c4
 * undefined __register FUN_004ae4c4(int * param_1)
 * Address ranges: 004ae4c4-004ae51a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae4c4(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  iVar1 = param_1[0x62];
  *(int **)(iVar1 + 0x8c) = param_1;
  *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(*param_1 + 0xc4);
  (**(code **)(*param_1 + 0x74))();
  FUN_004a904c((int)param_1);
  return;
}

