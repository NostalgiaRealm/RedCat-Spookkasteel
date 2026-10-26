/*
 * FUN_00484cf0 at 00484cf0
 * undefined FUN_00484cf0(void)
 * Address ranges: 00484cf0-00484d68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00484cf0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != -1) {
    iVar2 = param_1[1];
    if (iVar2 == -1) {
      param_1[2] = 0x3f800000;
      param_1[1] = iVar1 + param_2;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    if (iVar2 < param_2) {
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
    if (0 < iVar1) {
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[2] = (int)((float)(iVar2 - param_2) / (float)iVar1);
      return;
    }
    param_1[2] = 0;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}

