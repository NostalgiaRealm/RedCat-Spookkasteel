/*
 * FUN_004f0398 at 004f0398
 * undefined __register FUN_004f0398(int * param_1, int param_2)
 * Address ranges: 004f0398-004f03cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0398(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  uVar2 = FUN_00433700(iVar1,0xc,0,uVar2);
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  return;
}

