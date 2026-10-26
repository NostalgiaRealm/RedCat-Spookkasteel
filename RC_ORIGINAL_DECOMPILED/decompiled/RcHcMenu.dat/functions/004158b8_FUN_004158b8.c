/*
 * FUN_004158b8 at 004158b8
 * undefined __register FUN_004158b8(int param_1)
 * Address ranges: 004158b8-004158f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004158b8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))
                    (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    piVar2 = FUN_0040cfa8((int *)&DAT_004103ec,'\x01',(undefined4 *)PTR_PTR_00572550);
    FUN_0040382c(piVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

