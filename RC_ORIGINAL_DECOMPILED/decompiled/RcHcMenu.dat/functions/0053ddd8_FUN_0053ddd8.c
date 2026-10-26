/*
 * FUN_0053ddd8 at 0053ddd8
 * undefined __register FUN_0053ddd8(int param_1)
 * Address ranges: 0053ddd8-0053de3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ddd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00403224(*(int **)(param_1 + 4),(int)&LAB_0053b55c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x90);
  iVar1 = FUN_00403224(*(int **)(param_1 + 4),(int)&LAB_0053b55c);
  uVar2 = FUN_004d60d0(*(int **)(iVar1 + 0x88));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  iVar1 = FUN_00403224(*(int **)(param_1 + 4),(int)&LAB_0053b55c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x94);
  return;
}

