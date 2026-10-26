/*
 * FUN_004e5684 at 004e5684
 * undefined __register FUN_004e5684(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004e5684-004e5708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e5684(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_004d5dc0(param_1);
  cVar1 = (**(code **)(*param_1 + 0x44))();
  while (cVar1 != '\0') {
    uVar2 = FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
    *(undefined4 *)(param_4 + -8) = uVar2;
    FUN_004d6cb4(param_1,*(undefined4 *)(param_4 + -8));
    *(undefined4 *)(param_4 + -0x10) = *(undefined4 *)(param_4 + -8);
    *(undefined1 *)(param_4 + -0xc) = 0;
    *(undefined1 *)(param_4 + -0xb) = 1;
    FUN_004e2654(*(int **)(*(int *)(param_4 + -4) + 0x80),(undefined4 *)(param_4 + -0x10));
    cVar1 = (**(code **)(*param_1 + 0x50))();
  }
  FUN_004d516c(param_1);
  return;
}

