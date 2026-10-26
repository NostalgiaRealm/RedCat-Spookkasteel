/*
 * FUN_0046ecb8 at 0046ecb8
 * undefined4 __register FUN_0046ecb8(int param_1, int * param_2)
 * Address ranges: 0046ecb8-0046ecfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046ecb8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 uVar2;
  
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  while( true ) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
    if ((param_2[0x1e] != 0) &&
       (iVar1 = (**(code **)(**(int **)(param_2[0x1e] + 0x28) + 0x128))(), param_1 == iVar1)) {
      return uVar2;
    }
    iVar1 = (**(code **)(*param_2 + 0x128))();
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 == iVar1) break;
    param_2 = *(int **)(iVar1 + 0x24);
  }
  return uVar2;
}

