/*
 * FUN_00475c34 at 00475c34
 * undefined __register FUN_00475c34(int param_1, int param_2, int * param_3)
 * Address ranges: 00475c34-00475cb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475c34(int param_1,int param_2,int *param_3)

{
  *(undefined4 *)(param_1 + 0x38) = 10;
  FUN_00406454((int *)(param_1 + 0x34),(int)&DAT_00474ad4,1);
  FUN_004763e0(param_1,param_2,'\0');
  **(undefined2 **)(param_1 + 0x34) = 2;
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 2) = *(undefined2 *)(param_1 + 0x38);
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 4) = 0xffff;
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 6) = 10;
  *(short *)(*(int *)(param_1 + 0x34) + 8) = *(short *)(param_1 + 0x3c) + 10;
  FUN_0040649c(param_3,*(int *)(param_1 + 0x34),(int)&DAT_00474ad4);
  return;
}

